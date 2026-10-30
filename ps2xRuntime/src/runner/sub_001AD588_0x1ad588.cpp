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

// Function: sub_001AD588
// Address: 0x1ad588 - 0x1ae378
void sub_001AD588_0x1ad588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD588_0x1ad588");
#endif

    switch (ctx->pc) {
        case 0x1ad588u: goto label_1ad588;
        case 0x1ad58cu: goto label_1ad58c;
        case 0x1ad590u: goto label_1ad590;
        case 0x1ad594u: goto label_1ad594;
        case 0x1ad598u: goto label_1ad598;
        case 0x1ad59cu: goto label_1ad59c;
        case 0x1ad5a0u: goto label_1ad5a0;
        case 0x1ad5a4u: goto label_1ad5a4;
        case 0x1ad5a8u: goto label_1ad5a8;
        case 0x1ad5acu: goto label_1ad5ac;
        case 0x1ad5b0u: goto label_1ad5b0;
        case 0x1ad5b4u: goto label_1ad5b4;
        case 0x1ad5b8u: goto label_1ad5b8;
        case 0x1ad5bcu: goto label_1ad5bc;
        case 0x1ad5c0u: goto label_1ad5c0;
        case 0x1ad5c4u: goto label_1ad5c4;
        case 0x1ad5c8u: goto label_1ad5c8;
        case 0x1ad5ccu: goto label_1ad5cc;
        case 0x1ad5d0u: goto label_1ad5d0;
        case 0x1ad5d4u: goto label_1ad5d4;
        case 0x1ad5d8u: goto label_1ad5d8;
        case 0x1ad5dcu: goto label_1ad5dc;
        case 0x1ad5e0u: goto label_1ad5e0;
        case 0x1ad5e4u: goto label_1ad5e4;
        case 0x1ad5e8u: goto label_1ad5e8;
        case 0x1ad5ecu: goto label_1ad5ec;
        case 0x1ad5f0u: goto label_1ad5f0;
        case 0x1ad5f4u: goto label_1ad5f4;
        case 0x1ad5f8u: goto label_1ad5f8;
        case 0x1ad5fcu: goto label_1ad5fc;
        case 0x1ad600u: goto label_1ad600;
        case 0x1ad604u: goto label_1ad604;
        case 0x1ad608u: goto label_1ad608;
        case 0x1ad60cu: goto label_1ad60c;
        case 0x1ad610u: goto label_1ad610;
        case 0x1ad614u: goto label_1ad614;
        case 0x1ad618u: goto label_1ad618;
        case 0x1ad61cu: goto label_1ad61c;
        case 0x1ad620u: goto label_1ad620;
        case 0x1ad624u: goto label_1ad624;
        case 0x1ad628u: goto label_1ad628;
        case 0x1ad62cu: goto label_1ad62c;
        case 0x1ad630u: goto label_1ad630;
        case 0x1ad634u: goto label_1ad634;
        case 0x1ad638u: goto label_1ad638;
        case 0x1ad63cu: goto label_1ad63c;
        case 0x1ad640u: goto label_1ad640;
        case 0x1ad644u: goto label_1ad644;
        case 0x1ad648u: goto label_1ad648;
        case 0x1ad64cu: goto label_1ad64c;
        case 0x1ad650u: goto label_1ad650;
        case 0x1ad654u: goto label_1ad654;
        case 0x1ad658u: goto label_1ad658;
        case 0x1ad65cu: goto label_1ad65c;
        case 0x1ad660u: goto label_1ad660;
        case 0x1ad664u: goto label_1ad664;
        case 0x1ad668u: goto label_1ad668;
        case 0x1ad66cu: goto label_1ad66c;
        case 0x1ad670u: goto label_1ad670;
        case 0x1ad674u: goto label_1ad674;
        case 0x1ad678u: goto label_1ad678;
        case 0x1ad67cu: goto label_1ad67c;
        case 0x1ad680u: goto label_1ad680;
        case 0x1ad684u: goto label_1ad684;
        case 0x1ad688u: goto label_1ad688;
        case 0x1ad68cu: goto label_1ad68c;
        case 0x1ad690u: goto label_1ad690;
        case 0x1ad694u: goto label_1ad694;
        case 0x1ad698u: goto label_1ad698;
        case 0x1ad69cu: goto label_1ad69c;
        case 0x1ad6a0u: goto label_1ad6a0;
        case 0x1ad6a4u: goto label_1ad6a4;
        case 0x1ad6a8u: goto label_1ad6a8;
        case 0x1ad6acu: goto label_1ad6ac;
        case 0x1ad6b0u: goto label_1ad6b0;
        case 0x1ad6b4u: goto label_1ad6b4;
        case 0x1ad6b8u: goto label_1ad6b8;
        case 0x1ad6bcu: goto label_1ad6bc;
        case 0x1ad6c0u: goto label_1ad6c0;
        case 0x1ad6c4u: goto label_1ad6c4;
        case 0x1ad6c8u: goto label_1ad6c8;
        case 0x1ad6ccu: goto label_1ad6cc;
        case 0x1ad6d0u: goto label_1ad6d0;
        case 0x1ad6d4u: goto label_1ad6d4;
        case 0x1ad6d8u: goto label_1ad6d8;
        case 0x1ad6dcu: goto label_1ad6dc;
        case 0x1ad6e0u: goto label_1ad6e0;
        case 0x1ad6e4u: goto label_1ad6e4;
        case 0x1ad6e8u: goto label_1ad6e8;
        case 0x1ad6ecu: goto label_1ad6ec;
        case 0x1ad6f0u: goto label_1ad6f0;
        case 0x1ad6f4u: goto label_1ad6f4;
        case 0x1ad6f8u: goto label_1ad6f8;
        case 0x1ad6fcu: goto label_1ad6fc;
        case 0x1ad700u: goto label_1ad700;
        case 0x1ad704u: goto label_1ad704;
        case 0x1ad708u: goto label_1ad708;
        case 0x1ad70cu: goto label_1ad70c;
        case 0x1ad710u: goto label_1ad710;
        case 0x1ad714u: goto label_1ad714;
        case 0x1ad718u: goto label_1ad718;
        case 0x1ad71cu: goto label_1ad71c;
        case 0x1ad720u: goto label_1ad720;
        case 0x1ad724u: goto label_1ad724;
        case 0x1ad728u: goto label_1ad728;
        case 0x1ad72cu: goto label_1ad72c;
        case 0x1ad730u: goto label_1ad730;
        case 0x1ad734u: goto label_1ad734;
        case 0x1ad738u: goto label_1ad738;
        case 0x1ad73cu: goto label_1ad73c;
        case 0x1ad740u: goto label_1ad740;
        case 0x1ad744u: goto label_1ad744;
        case 0x1ad748u: goto label_1ad748;
        case 0x1ad74cu: goto label_1ad74c;
        case 0x1ad750u: goto label_1ad750;
        case 0x1ad754u: goto label_1ad754;
        case 0x1ad758u: goto label_1ad758;
        case 0x1ad75cu: goto label_1ad75c;
        case 0x1ad760u: goto label_1ad760;
        case 0x1ad764u: goto label_1ad764;
        case 0x1ad768u: goto label_1ad768;
        case 0x1ad76cu: goto label_1ad76c;
        case 0x1ad770u: goto label_1ad770;
        case 0x1ad774u: goto label_1ad774;
        case 0x1ad778u: goto label_1ad778;
        case 0x1ad77cu: goto label_1ad77c;
        case 0x1ad780u: goto label_1ad780;
        case 0x1ad784u: goto label_1ad784;
        case 0x1ad788u: goto label_1ad788;
        case 0x1ad78cu: goto label_1ad78c;
        case 0x1ad790u: goto label_1ad790;
        case 0x1ad794u: goto label_1ad794;
        case 0x1ad798u: goto label_1ad798;
        case 0x1ad79cu: goto label_1ad79c;
        case 0x1ad7a0u: goto label_1ad7a0;
        case 0x1ad7a4u: goto label_1ad7a4;
        case 0x1ad7a8u: goto label_1ad7a8;
        case 0x1ad7acu: goto label_1ad7ac;
        case 0x1ad7b0u: goto label_1ad7b0;
        case 0x1ad7b4u: goto label_1ad7b4;
        case 0x1ad7b8u: goto label_1ad7b8;
        case 0x1ad7bcu: goto label_1ad7bc;
        case 0x1ad7c0u: goto label_1ad7c0;
        case 0x1ad7c4u: goto label_1ad7c4;
        case 0x1ad7c8u: goto label_1ad7c8;
        case 0x1ad7ccu: goto label_1ad7cc;
        case 0x1ad7d0u: goto label_1ad7d0;
        case 0x1ad7d4u: goto label_1ad7d4;
        case 0x1ad7d8u: goto label_1ad7d8;
        case 0x1ad7dcu: goto label_1ad7dc;
        case 0x1ad7e0u: goto label_1ad7e0;
        case 0x1ad7e4u: goto label_1ad7e4;
        case 0x1ad7e8u: goto label_1ad7e8;
        case 0x1ad7ecu: goto label_1ad7ec;
        case 0x1ad7f0u: goto label_1ad7f0;
        case 0x1ad7f4u: goto label_1ad7f4;
        case 0x1ad7f8u: goto label_1ad7f8;
        case 0x1ad7fcu: goto label_1ad7fc;
        case 0x1ad800u: goto label_1ad800;
        case 0x1ad804u: goto label_1ad804;
        case 0x1ad808u: goto label_1ad808;
        case 0x1ad80cu: goto label_1ad80c;
        case 0x1ad810u: goto label_1ad810;
        case 0x1ad814u: goto label_1ad814;
        case 0x1ad818u: goto label_1ad818;
        case 0x1ad81cu: goto label_1ad81c;
        case 0x1ad820u: goto label_1ad820;
        case 0x1ad824u: goto label_1ad824;
        case 0x1ad828u: goto label_1ad828;
        case 0x1ad82cu: goto label_1ad82c;
        case 0x1ad830u: goto label_1ad830;
        case 0x1ad834u: goto label_1ad834;
        case 0x1ad838u: goto label_1ad838;
        case 0x1ad83cu: goto label_1ad83c;
        case 0x1ad840u: goto label_1ad840;
        case 0x1ad844u: goto label_1ad844;
        case 0x1ad848u: goto label_1ad848;
        case 0x1ad84cu: goto label_1ad84c;
        case 0x1ad850u: goto label_1ad850;
        case 0x1ad854u: goto label_1ad854;
        case 0x1ad858u: goto label_1ad858;
        case 0x1ad85cu: goto label_1ad85c;
        case 0x1ad860u: goto label_1ad860;
        case 0x1ad864u: goto label_1ad864;
        case 0x1ad868u: goto label_1ad868;
        case 0x1ad86cu: goto label_1ad86c;
        case 0x1ad870u: goto label_1ad870;
        case 0x1ad874u: goto label_1ad874;
        case 0x1ad878u: goto label_1ad878;
        case 0x1ad87cu: goto label_1ad87c;
        case 0x1ad880u: goto label_1ad880;
        case 0x1ad884u: goto label_1ad884;
        case 0x1ad888u: goto label_1ad888;
        case 0x1ad88cu: goto label_1ad88c;
        case 0x1ad890u: goto label_1ad890;
        case 0x1ad894u: goto label_1ad894;
        case 0x1ad898u: goto label_1ad898;
        case 0x1ad89cu: goto label_1ad89c;
        case 0x1ad8a0u: goto label_1ad8a0;
        case 0x1ad8a4u: goto label_1ad8a4;
        case 0x1ad8a8u: goto label_1ad8a8;
        case 0x1ad8acu: goto label_1ad8ac;
        case 0x1ad8b0u: goto label_1ad8b0;
        case 0x1ad8b4u: goto label_1ad8b4;
        case 0x1ad8b8u: goto label_1ad8b8;
        case 0x1ad8bcu: goto label_1ad8bc;
        case 0x1ad8c0u: goto label_1ad8c0;
        case 0x1ad8c4u: goto label_1ad8c4;
        case 0x1ad8c8u: goto label_1ad8c8;
        case 0x1ad8ccu: goto label_1ad8cc;
        case 0x1ad8d0u: goto label_1ad8d0;
        case 0x1ad8d4u: goto label_1ad8d4;
        case 0x1ad8d8u: goto label_1ad8d8;
        case 0x1ad8dcu: goto label_1ad8dc;
        case 0x1ad8e0u: goto label_1ad8e0;
        case 0x1ad8e4u: goto label_1ad8e4;
        case 0x1ad8e8u: goto label_1ad8e8;
        case 0x1ad8ecu: goto label_1ad8ec;
        case 0x1ad8f0u: goto label_1ad8f0;
        case 0x1ad8f4u: goto label_1ad8f4;
        case 0x1ad8f8u: goto label_1ad8f8;
        case 0x1ad8fcu: goto label_1ad8fc;
        case 0x1ad900u: goto label_1ad900;
        case 0x1ad904u: goto label_1ad904;
        case 0x1ad908u: goto label_1ad908;
        case 0x1ad90cu: goto label_1ad90c;
        case 0x1ad910u: goto label_1ad910;
        case 0x1ad914u: goto label_1ad914;
        case 0x1ad918u: goto label_1ad918;
        case 0x1ad91cu: goto label_1ad91c;
        case 0x1ad920u: goto label_1ad920;
        case 0x1ad924u: goto label_1ad924;
        case 0x1ad928u: goto label_1ad928;
        case 0x1ad92cu: goto label_1ad92c;
        case 0x1ad930u: goto label_1ad930;
        case 0x1ad934u: goto label_1ad934;
        case 0x1ad938u: goto label_1ad938;
        case 0x1ad93cu: goto label_1ad93c;
        case 0x1ad940u: goto label_1ad940;
        case 0x1ad944u: goto label_1ad944;
        case 0x1ad948u: goto label_1ad948;
        case 0x1ad94cu: goto label_1ad94c;
        case 0x1ad950u: goto label_1ad950;
        case 0x1ad954u: goto label_1ad954;
        case 0x1ad958u: goto label_1ad958;
        case 0x1ad95cu: goto label_1ad95c;
        case 0x1ad960u: goto label_1ad960;
        case 0x1ad964u: goto label_1ad964;
        case 0x1ad968u: goto label_1ad968;
        case 0x1ad96cu: goto label_1ad96c;
        case 0x1ad970u: goto label_1ad970;
        case 0x1ad974u: goto label_1ad974;
        case 0x1ad978u: goto label_1ad978;
        case 0x1ad97cu: goto label_1ad97c;
        case 0x1ad980u: goto label_1ad980;
        case 0x1ad984u: goto label_1ad984;
        case 0x1ad988u: goto label_1ad988;
        case 0x1ad98cu: goto label_1ad98c;
        case 0x1ad990u: goto label_1ad990;
        case 0x1ad994u: goto label_1ad994;
        case 0x1ad998u: goto label_1ad998;
        case 0x1ad99cu: goto label_1ad99c;
        case 0x1ad9a0u: goto label_1ad9a0;
        case 0x1ad9a4u: goto label_1ad9a4;
        case 0x1ad9a8u: goto label_1ad9a8;
        case 0x1ad9acu: goto label_1ad9ac;
        case 0x1ad9b0u: goto label_1ad9b0;
        case 0x1ad9b4u: goto label_1ad9b4;
        case 0x1ad9b8u: goto label_1ad9b8;
        case 0x1ad9bcu: goto label_1ad9bc;
        case 0x1ad9c0u: goto label_1ad9c0;
        case 0x1ad9c4u: goto label_1ad9c4;
        case 0x1ad9c8u: goto label_1ad9c8;
        case 0x1ad9ccu: goto label_1ad9cc;
        case 0x1ad9d0u: goto label_1ad9d0;
        case 0x1ad9d4u: goto label_1ad9d4;
        case 0x1ad9d8u: goto label_1ad9d8;
        case 0x1ad9dcu: goto label_1ad9dc;
        case 0x1ad9e0u: goto label_1ad9e0;
        case 0x1ad9e4u: goto label_1ad9e4;
        case 0x1ad9e8u: goto label_1ad9e8;
        case 0x1ad9ecu: goto label_1ad9ec;
        case 0x1ad9f0u: goto label_1ad9f0;
        case 0x1ad9f4u: goto label_1ad9f4;
        case 0x1ad9f8u: goto label_1ad9f8;
        case 0x1ad9fcu: goto label_1ad9fc;
        case 0x1ada00u: goto label_1ada00;
        case 0x1ada04u: goto label_1ada04;
        case 0x1ada08u: goto label_1ada08;
        case 0x1ada0cu: goto label_1ada0c;
        case 0x1ada10u: goto label_1ada10;
        case 0x1ada14u: goto label_1ada14;
        case 0x1ada18u: goto label_1ada18;
        case 0x1ada1cu: goto label_1ada1c;
        case 0x1ada20u: goto label_1ada20;
        case 0x1ada24u: goto label_1ada24;
        case 0x1ada28u: goto label_1ada28;
        case 0x1ada2cu: goto label_1ada2c;
        case 0x1ada30u: goto label_1ada30;
        case 0x1ada34u: goto label_1ada34;
        case 0x1ada38u: goto label_1ada38;
        case 0x1ada3cu: goto label_1ada3c;
        case 0x1ada40u: goto label_1ada40;
        case 0x1ada44u: goto label_1ada44;
        case 0x1ada48u: goto label_1ada48;
        case 0x1ada4cu: goto label_1ada4c;
        case 0x1ada50u: goto label_1ada50;
        case 0x1ada54u: goto label_1ada54;
        case 0x1ada58u: goto label_1ada58;
        case 0x1ada5cu: goto label_1ada5c;
        case 0x1ada60u: goto label_1ada60;
        case 0x1ada64u: goto label_1ada64;
        case 0x1ada68u: goto label_1ada68;
        case 0x1ada6cu: goto label_1ada6c;
        case 0x1ada70u: goto label_1ada70;
        case 0x1ada74u: goto label_1ada74;
        case 0x1ada78u: goto label_1ada78;
        case 0x1ada7cu: goto label_1ada7c;
        case 0x1ada80u: goto label_1ada80;
        case 0x1ada84u: goto label_1ada84;
        case 0x1ada88u: goto label_1ada88;
        case 0x1ada8cu: goto label_1ada8c;
        case 0x1ada90u: goto label_1ada90;
        case 0x1ada94u: goto label_1ada94;
        case 0x1ada98u: goto label_1ada98;
        case 0x1ada9cu: goto label_1ada9c;
        case 0x1adaa0u: goto label_1adaa0;
        case 0x1adaa4u: goto label_1adaa4;
        case 0x1adaa8u: goto label_1adaa8;
        case 0x1adaacu: goto label_1adaac;
        case 0x1adab0u: goto label_1adab0;
        case 0x1adab4u: goto label_1adab4;
        case 0x1adab8u: goto label_1adab8;
        case 0x1adabcu: goto label_1adabc;
        case 0x1adac0u: goto label_1adac0;
        case 0x1adac4u: goto label_1adac4;
        case 0x1adac8u: goto label_1adac8;
        case 0x1adaccu: goto label_1adacc;
        case 0x1adad0u: goto label_1adad0;
        case 0x1adad4u: goto label_1adad4;
        case 0x1adad8u: goto label_1adad8;
        case 0x1adadcu: goto label_1adadc;
        case 0x1adae0u: goto label_1adae0;
        case 0x1adae4u: goto label_1adae4;
        case 0x1adae8u: goto label_1adae8;
        case 0x1adaecu: goto label_1adaec;
        case 0x1adaf0u: goto label_1adaf0;
        case 0x1adaf4u: goto label_1adaf4;
        case 0x1adaf8u: goto label_1adaf8;
        case 0x1adafcu: goto label_1adafc;
        case 0x1adb00u: goto label_1adb00;
        case 0x1adb04u: goto label_1adb04;
        case 0x1adb08u: goto label_1adb08;
        case 0x1adb0cu: goto label_1adb0c;
        case 0x1adb10u: goto label_1adb10;
        case 0x1adb14u: goto label_1adb14;
        case 0x1adb18u: goto label_1adb18;
        case 0x1adb1cu: goto label_1adb1c;
        case 0x1adb20u: goto label_1adb20;
        case 0x1adb24u: goto label_1adb24;
        case 0x1adb28u: goto label_1adb28;
        case 0x1adb2cu: goto label_1adb2c;
        case 0x1adb30u: goto label_1adb30;
        case 0x1adb34u: goto label_1adb34;
        case 0x1adb38u: goto label_1adb38;
        case 0x1adb3cu: goto label_1adb3c;
        case 0x1adb40u: goto label_1adb40;
        case 0x1adb44u: goto label_1adb44;
        case 0x1adb48u: goto label_1adb48;
        case 0x1adb4cu: goto label_1adb4c;
        case 0x1adb50u: goto label_1adb50;
        case 0x1adb54u: goto label_1adb54;
        case 0x1adb58u: goto label_1adb58;
        case 0x1adb5cu: goto label_1adb5c;
        case 0x1adb60u: goto label_1adb60;
        case 0x1adb64u: goto label_1adb64;
        case 0x1adb68u: goto label_1adb68;
        case 0x1adb6cu: goto label_1adb6c;
        case 0x1adb70u: goto label_1adb70;
        case 0x1adb74u: goto label_1adb74;
        case 0x1adb78u: goto label_1adb78;
        case 0x1adb7cu: goto label_1adb7c;
        case 0x1adb80u: goto label_1adb80;
        case 0x1adb84u: goto label_1adb84;
        case 0x1adb88u: goto label_1adb88;
        case 0x1adb8cu: goto label_1adb8c;
        case 0x1adb90u: goto label_1adb90;
        case 0x1adb94u: goto label_1adb94;
        case 0x1adb98u: goto label_1adb98;
        case 0x1adb9cu: goto label_1adb9c;
        case 0x1adba0u: goto label_1adba0;
        case 0x1adba4u: goto label_1adba4;
        case 0x1adba8u: goto label_1adba8;
        case 0x1adbacu: goto label_1adbac;
        case 0x1adbb0u: goto label_1adbb0;
        case 0x1adbb4u: goto label_1adbb4;
        case 0x1adbb8u: goto label_1adbb8;
        case 0x1adbbcu: goto label_1adbbc;
        case 0x1adbc0u: goto label_1adbc0;
        case 0x1adbc4u: goto label_1adbc4;
        case 0x1adbc8u: goto label_1adbc8;
        case 0x1adbccu: goto label_1adbcc;
        case 0x1adbd0u: goto label_1adbd0;
        case 0x1adbd4u: goto label_1adbd4;
        case 0x1adbd8u: goto label_1adbd8;
        case 0x1adbdcu: goto label_1adbdc;
        case 0x1adbe0u: goto label_1adbe0;
        case 0x1adbe4u: goto label_1adbe4;
        case 0x1adbe8u: goto label_1adbe8;
        case 0x1adbecu: goto label_1adbec;
        case 0x1adbf0u: goto label_1adbf0;
        case 0x1adbf4u: goto label_1adbf4;
        case 0x1adbf8u: goto label_1adbf8;
        case 0x1adbfcu: goto label_1adbfc;
        case 0x1adc00u: goto label_1adc00;
        case 0x1adc04u: goto label_1adc04;
        case 0x1adc08u: goto label_1adc08;
        case 0x1adc0cu: goto label_1adc0c;
        case 0x1adc10u: goto label_1adc10;
        case 0x1adc14u: goto label_1adc14;
        case 0x1adc18u: goto label_1adc18;
        case 0x1adc1cu: goto label_1adc1c;
        case 0x1adc20u: goto label_1adc20;
        case 0x1adc24u: goto label_1adc24;
        case 0x1adc28u: goto label_1adc28;
        case 0x1adc2cu: goto label_1adc2c;
        case 0x1adc30u: goto label_1adc30;
        case 0x1adc34u: goto label_1adc34;
        case 0x1adc38u: goto label_1adc38;
        case 0x1adc3cu: goto label_1adc3c;
        case 0x1adc40u: goto label_1adc40;
        case 0x1adc44u: goto label_1adc44;
        case 0x1adc48u: goto label_1adc48;
        case 0x1adc4cu: goto label_1adc4c;
        case 0x1adc50u: goto label_1adc50;
        case 0x1adc54u: goto label_1adc54;
        case 0x1adc58u: goto label_1adc58;
        case 0x1adc5cu: goto label_1adc5c;
        case 0x1adc60u: goto label_1adc60;
        case 0x1adc64u: goto label_1adc64;
        case 0x1adc68u: goto label_1adc68;
        case 0x1adc6cu: goto label_1adc6c;
        case 0x1adc70u: goto label_1adc70;
        case 0x1adc74u: goto label_1adc74;
        case 0x1adc78u: goto label_1adc78;
        case 0x1adc7cu: goto label_1adc7c;
        case 0x1adc80u: goto label_1adc80;
        case 0x1adc84u: goto label_1adc84;
        case 0x1adc88u: goto label_1adc88;
        case 0x1adc8cu: goto label_1adc8c;
        case 0x1adc90u: goto label_1adc90;
        case 0x1adc94u: goto label_1adc94;
        case 0x1adc98u: goto label_1adc98;
        case 0x1adc9cu: goto label_1adc9c;
        case 0x1adca0u: goto label_1adca0;
        case 0x1adca4u: goto label_1adca4;
        case 0x1adca8u: goto label_1adca8;
        case 0x1adcacu: goto label_1adcac;
        case 0x1adcb0u: goto label_1adcb0;
        case 0x1adcb4u: goto label_1adcb4;
        case 0x1adcb8u: goto label_1adcb8;
        case 0x1adcbcu: goto label_1adcbc;
        case 0x1adcc0u: goto label_1adcc0;
        case 0x1adcc4u: goto label_1adcc4;
        case 0x1adcc8u: goto label_1adcc8;
        case 0x1adcccu: goto label_1adccc;
        case 0x1adcd0u: goto label_1adcd0;
        case 0x1adcd4u: goto label_1adcd4;
        case 0x1adcd8u: goto label_1adcd8;
        case 0x1adcdcu: goto label_1adcdc;
        case 0x1adce0u: goto label_1adce0;
        case 0x1adce4u: goto label_1adce4;
        case 0x1adce8u: goto label_1adce8;
        case 0x1adcecu: goto label_1adcec;
        case 0x1adcf0u: goto label_1adcf0;
        case 0x1adcf4u: goto label_1adcf4;
        case 0x1adcf8u: goto label_1adcf8;
        case 0x1adcfcu: goto label_1adcfc;
        case 0x1add00u: goto label_1add00;
        case 0x1add04u: goto label_1add04;
        case 0x1add08u: goto label_1add08;
        case 0x1add0cu: goto label_1add0c;
        case 0x1add10u: goto label_1add10;
        case 0x1add14u: goto label_1add14;
        case 0x1add18u: goto label_1add18;
        case 0x1add1cu: goto label_1add1c;
        case 0x1add20u: goto label_1add20;
        case 0x1add24u: goto label_1add24;
        case 0x1add28u: goto label_1add28;
        case 0x1add2cu: goto label_1add2c;
        case 0x1add30u: goto label_1add30;
        case 0x1add34u: goto label_1add34;
        case 0x1add38u: goto label_1add38;
        case 0x1add3cu: goto label_1add3c;
        case 0x1add40u: goto label_1add40;
        case 0x1add44u: goto label_1add44;
        case 0x1add48u: goto label_1add48;
        case 0x1add4cu: goto label_1add4c;
        case 0x1add50u: goto label_1add50;
        case 0x1add54u: goto label_1add54;
        case 0x1add58u: goto label_1add58;
        case 0x1add5cu: goto label_1add5c;
        case 0x1add60u: goto label_1add60;
        case 0x1add64u: goto label_1add64;
        case 0x1add68u: goto label_1add68;
        case 0x1add6cu: goto label_1add6c;
        case 0x1add70u: goto label_1add70;
        case 0x1add74u: goto label_1add74;
        case 0x1add78u: goto label_1add78;
        case 0x1add7cu: goto label_1add7c;
        case 0x1add80u: goto label_1add80;
        case 0x1add84u: goto label_1add84;
        case 0x1add88u: goto label_1add88;
        case 0x1add8cu: goto label_1add8c;
        case 0x1add90u: goto label_1add90;
        case 0x1add94u: goto label_1add94;
        case 0x1add98u: goto label_1add98;
        case 0x1add9cu: goto label_1add9c;
        case 0x1adda0u: goto label_1adda0;
        case 0x1adda4u: goto label_1adda4;
        case 0x1adda8u: goto label_1adda8;
        case 0x1addacu: goto label_1addac;
        case 0x1addb0u: goto label_1addb0;
        case 0x1addb4u: goto label_1addb4;
        case 0x1addb8u: goto label_1addb8;
        case 0x1addbcu: goto label_1addbc;
        case 0x1addc0u: goto label_1addc0;
        case 0x1addc4u: goto label_1addc4;
        case 0x1addc8u: goto label_1addc8;
        case 0x1addccu: goto label_1addcc;
        case 0x1addd0u: goto label_1addd0;
        case 0x1addd4u: goto label_1addd4;
        case 0x1addd8u: goto label_1addd8;
        case 0x1adddcu: goto label_1adddc;
        case 0x1adde0u: goto label_1adde0;
        case 0x1adde4u: goto label_1adde4;
        case 0x1adde8u: goto label_1adde8;
        case 0x1addecu: goto label_1addec;
        case 0x1addf0u: goto label_1addf0;
        case 0x1addf4u: goto label_1addf4;
        case 0x1addf8u: goto label_1addf8;
        case 0x1addfcu: goto label_1addfc;
        case 0x1ade00u: goto label_1ade00;
        case 0x1ade04u: goto label_1ade04;
        case 0x1ade08u: goto label_1ade08;
        case 0x1ade0cu: goto label_1ade0c;
        case 0x1ade10u: goto label_1ade10;
        case 0x1ade14u: goto label_1ade14;
        case 0x1ade18u: goto label_1ade18;
        case 0x1ade1cu: goto label_1ade1c;
        case 0x1ade20u: goto label_1ade20;
        case 0x1ade24u: goto label_1ade24;
        case 0x1ade28u: goto label_1ade28;
        case 0x1ade2cu: goto label_1ade2c;
        case 0x1ade30u: goto label_1ade30;
        case 0x1ade34u: goto label_1ade34;
        case 0x1ade38u: goto label_1ade38;
        case 0x1ade3cu: goto label_1ade3c;
        case 0x1ade40u: goto label_1ade40;
        case 0x1ade44u: goto label_1ade44;
        case 0x1ade48u: goto label_1ade48;
        case 0x1ade4cu: goto label_1ade4c;
        case 0x1ade50u: goto label_1ade50;
        case 0x1ade54u: goto label_1ade54;
        case 0x1ade58u: goto label_1ade58;
        case 0x1ade5cu: goto label_1ade5c;
        case 0x1ade60u: goto label_1ade60;
        case 0x1ade64u: goto label_1ade64;
        case 0x1ade68u: goto label_1ade68;
        case 0x1ade6cu: goto label_1ade6c;
        case 0x1ade70u: goto label_1ade70;
        case 0x1ade74u: goto label_1ade74;
        case 0x1ade78u: goto label_1ade78;
        case 0x1ade7cu: goto label_1ade7c;
        case 0x1ade80u: goto label_1ade80;
        case 0x1ade84u: goto label_1ade84;
        case 0x1ade88u: goto label_1ade88;
        case 0x1ade8cu: goto label_1ade8c;
        case 0x1ade90u: goto label_1ade90;
        case 0x1ade94u: goto label_1ade94;
        case 0x1ade98u: goto label_1ade98;
        case 0x1ade9cu: goto label_1ade9c;
        case 0x1adea0u: goto label_1adea0;
        case 0x1adea4u: goto label_1adea4;
        case 0x1adea8u: goto label_1adea8;
        case 0x1adeacu: goto label_1adeac;
        case 0x1adeb0u: goto label_1adeb0;
        case 0x1adeb4u: goto label_1adeb4;
        case 0x1adeb8u: goto label_1adeb8;
        case 0x1adebcu: goto label_1adebc;
        case 0x1adec0u: goto label_1adec0;
        case 0x1adec4u: goto label_1adec4;
        case 0x1adec8u: goto label_1adec8;
        case 0x1adeccu: goto label_1adecc;
        case 0x1aded0u: goto label_1aded0;
        case 0x1aded4u: goto label_1aded4;
        case 0x1aded8u: goto label_1aded8;
        case 0x1adedcu: goto label_1adedc;
        case 0x1adee0u: goto label_1adee0;
        case 0x1adee4u: goto label_1adee4;
        case 0x1adee8u: goto label_1adee8;
        case 0x1adeecu: goto label_1adeec;
        case 0x1adef0u: goto label_1adef0;
        case 0x1adef4u: goto label_1adef4;
        case 0x1adef8u: goto label_1adef8;
        case 0x1adefcu: goto label_1adefc;
        case 0x1adf00u: goto label_1adf00;
        case 0x1adf04u: goto label_1adf04;
        case 0x1adf08u: goto label_1adf08;
        case 0x1adf0cu: goto label_1adf0c;
        case 0x1adf10u: goto label_1adf10;
        case 0x1adf14u: goto label_1adf14;
        case 0x1adf18u: goto label_1adf18;
        case 0x1adf1cu: goto label_1adf1c;
        case 0x1adf20u: goto label_1adf20;
        case 0x1adf24u: goto label_1adf24;
        case 0x1adf28u: goto label_1adf28;
        case 0x1adf2cu: goto label_1adf2c;
        case 0x1adf30u: goto label_1adf30;
        case 0x1adf34u: goto label_1adf34;
        case 0x1adf38u: goto label_1adf38;
        case 0x1adf3cu: goto label_1adf3c;
        case 0x1adf40u: goto label_1adf40;
        case 0x1adf44u: goto label_1adf44;
        case 0x1adf48u: goto label_1adf48;
        case 0x1adf4cu: goto label_1adf4c;
        case 0x1adf50u: goto label_1adf50;
        case 0x1adf54u: goto label_1adf54;
        case 0x1adf58u: goto label_1adf58;
        case 0x1adf5cu: goto label_1adf5c;
        case 0x1adf60u: goto label_1adf60;
        case 0x1adf64u: goto label_1adf64;
        case 0x1adf68u: goto label_1adf68;
        case 0x1adf6cu: goto label_1adf6c;
        case 0x1adf70u: goto label_1adf70;
        case 0x1adf74u: goto label_1adf74;
        case 0x1adf78u: goto label_1adf78;
        case 0x1adf7cu: goto label_1adf7c;
        case 0x1adf80u: goto label_1adf80;
        case 0x1adf84u: goto label_1adf84;
        case 0x1adf88u: goto label_1adf88;
        case 0x1adf8cu: goto label_1adf8c;
        case 0x1adf90u: goto label_1adf90;
        case 0x1adf94u: goto label_1adf94;
        case 0x1adf98u: goto label_1adf98;
        case 0x1adf9cu: goto label_1adf9c;
        case 0x1adfa0u: goto label_1adfa0;
        case 0x1adfa4u: goto label_1adfa4;
        case 0x1adfa8u: goto label_1adfa8;
        case 0x1adfacu: goto label_1adfac;
        case 0x1adfb0u: goto label_1adfb0;
        case 0x1adfb4u: goto label_1adfb4;
        case 0x1adfb8u: goto label_1adfb8;
        case 0x1adfbcu: goto label_1adfbc;
        case 0x1adfc0u: goto label_1adfc0;
        case 0x1adfc4u: goto label_1adfc4;
        case 0x1adfc8u: goto label_1adfc8;
        case 0x1adfccu: goto label_1adfcc;
        case 0x1adfd0u: goto label_1adfd0;
        case 0x1adfd4u: goto label_1adfd4;
        case 0x1adfd8u: goto label_1adfd8;
        case 0x1adfdcu: goto label_1adfdc;
        case 0x1adfe0u: goto label_1adfe0;
        case 0x1adfe4u: goto label_1adfe4;
        case 0x1adfe8u: goto label_1adfe8;
        case 0x1adfecu: goto label_1adfec;
        case 0x1adff0u: goto label_1adff0;
        case 0x1adff4u: goto label_1adff4;
        case 0x1adff8u: goto label_1adff8;
        case 0x1adffcu: goto label_1adffc;
        case 0x1ae000u: goto label_1ae000;
        case 0x1ae004u: goto label_1ae004;
        case 0x1ae008u: goto label_1ae008;
        case 0x1ae00cu: goto label_1ae00c;
        case 0x1ae010u: goto label_1ae010;
        case 0x1ae014u: goto label_1ae014;
        case 0x1ae018u: goto label_1ae018;
        case 0x1ae01cu: goto label_1ae01c;
        case 0x1ae020u: goto label_1ae020;
        case 0x1ae024u: goto label_1ae024;
        case 0x1ae028u: goto label_1ae028;
        case 0x1ae02cu: goto label_1ae02c;
        case 0x1ae030u: goto label_1ae030;
        case 0x1ae034u: goto label_1ae034;
        case 0x1ae038u: goto label_1ae038;
        case 0x1ae03cu: goto label_1ae03c;
        case 0x1ae040u: goto label_1ae040;
        case 0x1ae044u: goto label_1ae044;
        case 0x1ae048u: goto label_1ae048;
        case 0x1ae04cu: goto label_1ae04c;
        case 0x1ae050u: goto label_1ae050;
        case 0x1ae054u: goto label_1ae054;
        case 0x1ae058u: goto label_1ae058;
        case 0x1ae05cu: goto label_1ae05c;
        case 0x1ae060u: goto label_1ae060;
        case 0x1ae064u: goto label_1ae064;
        case 0x1ae068u: goto label_1ae068;
        case 0x1ae06cu: goto label_1ae06c;
        case 0x1ae070u: goto label_1ae070;
        case 0x1ae074u: goto label_1ae074;
        case 0x1ae078u: goto label_1ae078;
        case 0x1ae07cu: goto label_1ae07c;
        case 0x1ae080u: goto label_1ae080;
        case 0x1ae084u: goto label_1ae084;
        case 0x1ae088u: goto label_1ae088;
        case 0x1ae08cu: goto label_1ae08c;
        case 0x1ae090u: goto label_1ae090;
        case 0x1ae094u: goto label_1ae094;
        case 0x1ae098u: goto label_1ae098;
        case 0x1ae09cu: goto label_1ae09c;
        case 0x1ae0a0u: goto label_1ae0a0;
        case 0x1ae0a4u: goto label_1ae0a4;
        case 0x1ae0a8u: goto label_1ae0a8;
        case 0x1ae0acu: goto label_1ae0ac;
        case 0x1ae0b0u: goto label_1ae0b0;
        case 0x1ae0b4u: goto label_1ae0b4;
        case 0x1ae0b8u: goto label_1ae0b8;
        case 0x1ae0bcu: goto label_1ae0bc;
        case 0x1ae0c0u: goto label_1ae0c0;
        case 0x1ae0c4u: goto label_1ae0c4;
        case 0x1ae0c8u: goto label_1ae0c8;
        case 0x1ae0ccu: goto label_1ae0cc;
        case 0x1ae0d0u: goto label_1ae0d0;
        case 0x1ae0d4u: goto label_1ae0d4;
        case 0x1ae0d8u: goto label_1ae0d8;
        case 0x1ae0dcu: goto label_1ae0dc;
        case 0x1ae0e0u: goto label_1ae0e0;
        case 0x1ae0e4u: goto label_1ae0e4;
        case 0x1ae0e8u: goto label_1ae0e8;
        case 0x1ae0ecu: goto label_1ae0ec;
        case 0x1ae0f0u: goto label_1ae0f0;
        case 0x1ae0f4u: goto label_1ae0f4;
        case 0x1ae0f8u: goto label_1ae0f8;
        case 0x1ae0fcu: goto label_1ae0fc;
        case 0x1ae100u: goto label_1ae100;
        case 0x1ae104u: goto label_1ae104;
        case 0x1ae108u: goto label_1ae108;
        case 0x1ae10cu: goto label_1ae10c;
        case 0x1ae110u: goto label_1ae110;
        case 0x1ae114u: goto label_1ae114;
        case 0x1ae118u: goto label_1ae118;
        case 0x1ae11cu: goto label_1ae11c;
        case 0x1ae120u: goto label_1ae120;
        case 0x1ae124u: goto label_1ae124;
        case 0x1ae128u: goto label_1ae128;
        case 0x1ae12cu: goto label_1ae12c;
        case 0x1ae130u: goto label_1ae130;
        case 0x1ae134u: goto label_1ae134;
        case 0x1ae138u: goto label_1ae138;
        case 0x1ae13cu: goto label_1ae13c;
        case 0x1ae140u: goto label_1ae140;
        case 0x1ae144u: goto label_1ae144;
        case 0x1ae148u: goto label_1ae148;
        case 0x1ae14cu: goto label_1ae14c;
        case 0x1ae150u: goto label_1ae150;
        case 0x1ae154u: goto label_1ae154;
        case 0x1ae158u: goto label_1ae158;
        case 0x1ae15cu: goto label_1ae15c;
        case 0x1ae160u: goto label_1ae160;
        case 0x1ae164u: goto label_1ae164;
        case 0x1ae168u: goto label_1ae168;
        case 0x1ae16cu: goto label_1ae16c;
        case 0x1ae170u: goto label_1ae170;
        case 0x1ae174u: goto label_1ae174;
        case 0x1ae178u: goto label_1ae178;
        case 0x1ae17cu: goto label_1ae17c;
        case 0x1ae180u: goto label_1ae180;
        case 0x1ae184u: goto label_1ae184;
        case 0x1ae188u: goto label_1ae188;
        case 0x1ae18cu: goto label_1ae18c;
        case 0x1ae190u: goto label_1ae190;
        case 0x1ae194u: goto label_1ae194;
        case 0x1ae198u: goto label_1ae198;
        case 0x1ae19cu: goto label_1ae19c;
        case 0x1ae1a0u: goto label_1ae1a0;
        case 0x1ae1a4u: goto label_1ae1a4;
        case 0x1ae1a8u: goto label_1ae1a8;
        case 0x1ae1acu: goto label_1ae1ac;
        case 0x1ae1b0u: goto label_1ae1b0;
        case 0x1ae1b4u: goto label_1ae1b4;
        case 0x1ae1b8u: goto label_1ae1b8;
        case 0x1ae1bcu: goto label_1ae1bc;
        case 0x1ae1c0u: goto label_1ae1c0;
        case 0x1ae1c4u: goto label_1ae1c4;
        case 0x1ae1c8u: goto label_1ae1c8;
        case 0x1ae1ccu: goto label_1ae1cc;
        case 0x1ae1d0u: goto label_1ae1d0;
        case 0x1ae1d4u: goto label_1ae1d4;
        case 0x1ae1d8u: goto label_1ae1d8;
        case 0x1ae1dcu: goto label_1ae1dc;
        case 0x1ae1e0u: goto label_1ae1e0;
        case 0x1ae1e4u: goto label_1ae1e4;
        case 0x1ae1e8u: goto label_1ae1e8;
        case 0x1ae1ecu: goto label_1ae1ec;
        case 0x1ae1f0u: goto label_1ae1f0;
        case 0x1ae1f4u: goto label_1ae1f4;
        case 0x1ae1f8u: goto label_1ae1f8;
        case 0x1ae1fcu: goto label_1ae1fc;
        case 0x1ae200u: goto label_1ae200;
        case 0x1ae204u: goto label_1ae204;
        case 0x1ae208u: goto label_1ae208;
        case 0x1ae20cu: goto label_1ae20c;
        case 0x1ae210u: goto label_1ae210;
        case 0x1ae214u: goto label_1ae214;
        case 0x1ae218u: goto label_1ae218;
        case 0x1ae21cu: goto label_1ae21c;
        case 0x1ae220u: goto label_1ae220;
        case 0x1ae224u: goto label_1ae224;
        case 0x1ae228u: goto label_1ae228;
        case 0x1ae22cu: goto label_1ae22c;
        case 0x1ae230u: goto label_1ae230;
        case 0x1ae234u: goto label_1ae234;
        case 0x1ae238u: goto label_1ae238;
        case 0x1ae23cu: goto label_1ae23c;
        case 0x1ae240u: goto label_1ae240;
        case 0x1ae244u: goto label_1ae244;
        case 0x1ae248u: goto label_1ae248;
        case 0x1ae24cu: goto label_1ae24c;
        case 0x1ae250u: goto label_1ae250;
        case 0x1ae254u: goto label_1ae254;
        case 0x1ae258u: goto label_1ae258;
        case 0x1ae25cu: goto label_1ae25c;
        case 0x1ae260u: goto label_1ae260;
        case 0x1ae264u: goto label_1ae264;
        case 0x1ae268u: goto label_1ae268;
        case 0x1ae26cu: goto label_1ae26c;
        case 0x1ae270u: goto label_1ae270;
        case 0x1ae274u: goto label_1ae274;
        case 0x1ae278u: goto label_1ae278;
        case 0x1ae27cu: goto label_1ae27c;
        case 0x1ae280u: goto label_1ae280;
        case 0x1ae284u: goto label_1ae284;
        case 0x1ae288u: goto label_1ae288;
        case 0x1ae28cu: goto label_1ae28c;
        case 0x1ae290u: goto label_1ae290;
        case 0x1ae294u: goto label_1ae294;
        case 0x1ae298u: goto label_1ae298;
        case 0x1ae29cu: goto label_1ae29c;
        case 0x1ae2a0u: goto label_1ae2a0;
        case 0x1ae2a4u: goto label_1ae2a4;
        case 0x1ae2a8u: goto label_1ae2a8;
        case 0x1ae2acu: goto label_1ae2ac;
        case 0x1ae2b0u: goto label_1ae2b0;
        case 0x1ae2b4u: goto label_1ae2b4;
        case 0x1ae2b8u: goto label_1ae2b8;
        case 0x1ae2bcu: goto label_1ae2bc;
        case 0x1ae2c0u: goto label_1ae2c0;
        case 0x1ae2c4u: goto label_1ae2c4;
        case 0x1ae2c8u: goto label_1ae2c8;
        case 0x1ae2ccu: goto label_1ae2cc;
        case 0x1ae2d0u: goto label_1ae2d0;
        case 0x1ae2d4u: goto label_1ae2d4;
        case 0x1ae2d8u: goto label_1ae2d8;
        case 0x1ae2dcu: goto label_1ae2dc;
        case 0x1ae2e0u: goto label_1ae2e0;
        case 0x1ae2e4u: goto label_1ae2e4;
        case 0x1ae2e8u: goto label_1ae2e8;
        case 0x1ae2ecu: goto label_1ae2ec;
        case 0x1ae2f0u: goto label_1ae2f0;
        case 0x1ae2f4u: goto label_1ae2f4;
        case 0x1ae2f8u: goto label_1ae2f8;
        case 0x1ae2fcu: goto label_1ae2fc;
        case 0x1ae300u: goto label_1ae300;
        case 0x1ae304u: goto label_1ae304;
        case 0x1ae308u: goto label_1ae308;
        case 0x1ae30cu: goto label_1ae30c;
        case 0x1ae310u: goto label_1ae310;
        case 0x1ae314u: goto label_1ae314;
        case 0x1ae318u: goto label_1ae318;
        case 0x1ae31cu: goto label_1ae31c;
        case 0x1ae320u: goto label_1ae320;
        case 0x1ae324u: goto label_1ae324;
        case 0x1ae328u: goto label_1ae328;
        case 0x1ae32cu: goto label_1ae32c;
        case 0x1ae330u: goto label_1ae330;
        case 0x1ae334u: goto label_1ae334;
        case 0x1ae338u: goto label_1ae338;
        case 0x1ae33cu: goto label_1ae33c;
        case 0x1ae340u: goto label_1ae340;
        case 0x1ae344u: goto label_1ae344;
        case 0x1ae348u: goto label_1ae348;
        case 0x1ae34cu: goto label_1ae34c;
        case 0x1ae350u: goto label_1ae350;
        case 0x1ae354u: goto label_1ae354;
        case 0x1ae358u: goto label_1ae358;
        case 0x1ae35cu: goto label_1ae35c;
        case 0x1ae360u: goto label_1ae360;
        case 0x1ae364u: goto label_1ae364;
        case 0x1ae368u: goto label_1ae368;
        case 0x1ae36cu: goto label_1ae36c;
        case 0x1ae370u: goto label_1ae370;
        case 0x1ae374u: goto label_1ae374;
        default: break;
    }

    ctx->pc = 0x1ad588u;

label_1ad588:
    // 0x1ad588: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1ad588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1ad58c:
    // 0x1ad58c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ad58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1ad590:
    // 0x1ad590: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x1ad590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_1ad594:
    // 0x1ad594: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ad594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1ad598:
    // 0x1ad598: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ad598u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ad59c:
    // 0x1ad59c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ad59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ad5a0:
    // 0x1ad5a0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1ad5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1ad5a4:
    // 0x1ad5a4: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1ad5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_1ad5a8:
    // 0x1ad5a8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ad5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ad5ac:
    // 0x1ad5ac: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1ad5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_1ad5b0:
    // 0x1ad5b0: 0x2a25021  addu        $t2, $s5, $v0
    ctx->pc = 0x1ad5b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1ad5b4:
    // 0x1ad5b4: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1ad5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_1ad5b8:
    // 0x1ad5b8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1ad5b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ad5bc:
    // 0x1ad5bc: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1ad5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_1ad5c0:
    // 0x1ad5c0: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1ad5c0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1ad5c4:
    // 0x1ad5c4: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1ad5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_1ad5c8:
    // 0x1ad5c8: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1ad5c8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1ad5cc:
    // 0x1ad5cc: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1ad5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_1ad5d0:
    // 0x1ad5d0: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x1ad5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_1ad5d4:
    // 0x1ad5d4: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1ad5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_1ad5d8:
    // 0x1ad5d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ad5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1ad5dc:
    // 0x1ad5dc: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x1ad5dcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1ad5e0:
    // 0x1ad5e0: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x1ad5e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1ad5e4:
    // 0x1ad5e4: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x1ad5e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1ad5e8:
    // 0x1ad5e8: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1ad5e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1ad5ec:
    // 0x1ad5ec: 0xe5481124  swc1        $f8, 0x1124($t2)
    ctx->pc = 0x1ad5ecu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4388), bits); }
label_1ad5f0:
    // 0x1ad5f0: 0x8c62cdb4  lw          $v0, -0x324C($v1)
    ctx->pc = 0x1ad5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_1ad5f4:
    // 0x1ad5f4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1ad5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1ad5f8:
    // 0x1ad5f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ad5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ad5fc:
    // 0x1ad5fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ad5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ad600:
    // 0x1ad600: 0x3c013f6b  lui         $at, 0x3F6B
    ctx->pc = 0x1ad600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16235 << 16));
label_1ad604:
    // 0x1ad604: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1ad604u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1ad608:
    // 0x1ad608: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad60c:
    // 0x1ad60c: 0xe581d4bc  swc1        $f1, -0x2B44($t4)
    ctx->pc = 0x1ad60cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294956220), bits); }
label_1ad610:
    // 0x1ad610: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1ad610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1ad614:
    // 0x1ad614: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_1ad618:
    if (ctx->pc == 0x1AD618u) {
        ctx->pc = 0x1AD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD614u;
        // 0x1ad618: 0xe560d4c0  swc1        $f0, -0x2B40($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294956224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD61Cu;
        goto label_1ad61c;
    }
    ctx->pc = 0x1AD614u;
    {
        const bool branch_taken_0x1ad614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD614u;
        // 0x1ad618: 0xe560d4c0  swc1        $f0, -0x2B40($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294956224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad614) {
            ctx->pc = 0x1AD738u;
            goto label_1ad738;
        }
    }
    ctx->pc = 0x1AD61Cu;
label_1ad61c:
    // 0x1ad61c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1ad61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1ad620:
    // 0x1ad620: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ad620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ad624:
    // 0x1ad624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad628:
    // 0x1ad628: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ad628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ad62c:
    // 0x1ad62c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1ad62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1ad630:
    // 0x1ad630: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1ad634:
    if (ctx->pc == 0x1AD634u) {
        ctx->pc = 0x1AD634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD630u;
        // 0x1ad634: 0xe440d508  swc1        $f0, -0x2AF8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956296), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD638u;
        goto label_1ad638;
    }
    ctx->pc = 0x1AD630u;
    {
        const bool branch_taken_0x1ad630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD630u;
        // 0x1ad634: 0xe440d508  swc1        $f0, -0x2AF8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad630) {
            ctx->pc = 0x1AD65Cu;
            goto label_1ad65c;
        }
    }
    ctx->pc = 0x1AD638u;
label_1ad638:
    // 0x1ad638: 0x3c013f78  lui         $at, 0x3F78
    ctx->pc = 0x1ad638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16248 << 16));
label_1ad63c:
    // 0x1ad63c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1ad63cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1ad640:
    // 0x1ad640: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ad640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ad644:
    // 0x1ad644: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1ad644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1ad648:
    // 0x1ad648: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ad648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1ad64c:
    // 0x1ad64c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad650:
    // 0x1ad650: 0xe561d4c0  swc1        $f1, -0x2B40($t3)
    ctx->pc = 0x1ad650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294956224), bits); }
label_1ad654:
    // 0x1ad654: 0x10000054  b           . + 4 + (0x54 << 2)
label_1ad658:
    if (ctx->pc == 0x1AD658u) {
        ctx->pc = 0x1AD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD654u;
        // 0x1ad658: 0xe580d4bc  swc1        $f0, -0x2B44($t4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294956220), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD65Cu;
        goto label_1ad65c;
    }
    ctx->pc = 0x1AD654u;
    {
        const bool branch_taken_0x1ad654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD654u;
        // 0x1ad658: 0xe580d4bc  swc1        $f0, -0x2B44($t4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294956220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad654) {
            ctx->pc = 0x1AD7A8u;
            goto label_1ad7a8;
        }
    }
    ctx->pc = 0x1AD65Cu;
label_1ad65c:
    // 0x1ad65c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ad65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ad660:
    // 0x1ad660: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ad660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ad664:
    // 0x1ad664: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ad664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ad668:
    // 0x1ad668: 0x2482d4e0  addiu       $v0, $a0, -0x2B20
    ctx->pc = 0x1ad668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956256));
label_1ad66c:
    // 0x1ad66c: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x1ad66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_1ad670:
    // 0x1ad670: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ad670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1ad674:
    // 0x1ad674: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ad674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ad678:
    // 0x1ad678: 0xe481d4e0  swc1        $f1, -0x2B20($a0)
    ctx->pc = 0x1ad678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956256), bits); }
label_1ad67c:
    // 0x1ad67c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1ad67cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1ad680:
    // 0x1ad680: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x1ad680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
label_1ad684:
    // 0x1ad684: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1ad684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1ad688:
    // 0x1ad688: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad68c:
    // 0x1ad68c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1ad68cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1ad690:
    // 0x1ad690: 0xe448000c  swc1        $f8, 0xC($v0)
    ctx->pc = 0x1ad690u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1ad694:
    // 0x1ad694: 0x24e3d4d0  addiu       $v1, $a3, -0x2B30
    ctx->pc = 0x1ad694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956240));
label_1ad698:
    // 0x1ad698: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x1ad698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
label_1ad69c:
    // 0x1ad69c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1ad69cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1ad6a0:
    // 0x1ad6a0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ad6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ad6a4:
    // 0x1ad6a4: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1ad6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1ad6a8:
    // 0x1ad6a8: 0xe560d4c0  swc1        $f0, -0x2B40($t3)
    ctx->pc = 0x1ad6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294956224), bits); }
label_1ad6ac:
    // 0x1ad6ac: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1ad6acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1ad6b0:
    // 0x1ad6b0: 0xe4e1d4d0  swc1        $f1, -0x2B30($a3)
    ctx->pc = 0x1ad6b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294956240), bits); }
label_1ad6b4:
    // 0x1ad6b4: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1ad6b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1ad6b8:
    // 0x1ad6b8: 0xe4a2d4f8  swc1        $f2, -0x2B08($a1)
    ctx->pc = 0x1ad6b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956280), bits); }
label_1ad6bc:
    // 0x1ad6bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ad6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ad6c0:
    // 0x1ad6c0: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1ad6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1ad6c4:
    // 0x1ad6c4: 0x3c013f63  lui         $at, 0x3F63
    ctx->pc = 0x1ad6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16227 << 16));
label_1ad6c8:
    // 0x1ad6c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ad6c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ad6cc:
    // 0x1ad6cc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ad6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1ad6d0:
    // 0x1ad6d0: 0xe4640008  swc1        $f4, 0x8($v1)
    ctx->pc = 0x1ad6d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1ad6d4:
    // 0x1ad6d4: 0xe468000c  swc1        $f8, 0xC($v1)
    ctx->pc = 0x1ad6d4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1ad6d8:
    // 0x1ad6d8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1ad6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1ad6dc:
    // 0x1ad6dc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ad6dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1ad6e0:
    // 0x1ad6e0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ad6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ad6e4:
    // 0x1ad6e4: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x1ad6e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1ad6e8:
    // 0x1ad6e8: 0xe4470008  swc1        $f7, 0x8($v0)
    ctx->pc = 0x1ad6e8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1ad6ec:
    // 0x1ad6ec: 0xe585d4bc  swc1        $f5, -0x2B44($t4)
    ctx->pc = 0x1ad6ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294956220), bits); }
label_1ad6f0:
    // 0x1ad6f0: 0xe502d4f0  swc1        $f2, -0x2B10($t0)
    ctx->pc = 0x1ad6f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294956272), bits); }
label_1ad6f4:
    // 0x1ad6f4: 0x3c013f47  lui         $at, 0x3F47
    ctx->pc = 0x1ad6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16199 << 16));
label_1ad6f8:
    // 0x1ad6f8: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1ad6f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_1ad6fc:
    // 0x1ad6fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ad6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ad700:
    // 0x1ad700: 0xe4660004  swc1        $f6, 0x4($v1)
    ctx->pc = 0x1ad700u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1ad704:
    // 0x1ad704: 0xe5431124  swc1        $f3, 0x1124($t2)
    ctx->pc = 0x1ad704u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4388), bits); }
label_1ad708:
    // 0x1ad708: 0x8cc2489c  lw          $v0, 0x489C($a2)
    ctx->pc = 0x1ad708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
label_1ad70c:
    // 0x1ad70c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1ad70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_1ad710:
    // 0x1ad710: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ad710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1ad714:
    // 0x1ad714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad718:
    // 0x1ad718: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x1ad718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_1ad71c:
    // 0x1ad71c: 0x14640022  bne         $v1, $a0, . + 4 + (0x22 << 2)
label_1ad720:
    if (ctx->pc == 0x1AD720u) {
        ctx->pc = 0x1AD720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD71Cu;
        // 0x1ad720: 0xe520d470  swc1        $f0, -0x2B90($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294956144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD724u;
        goto label_1ad724;
    }
    ctx->pc = 0x1AD71Cu;
    {
        const bool branch_taken_0x1ad71c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AD720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD71Cu;
        // 0x1ad720: 0xe520d470  swc1        $f0, -0x2B90($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294956144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad71c) {
            ctx->pc = 0x1AD7A8u;
            goto label_1ad7a8;
        }
    }
    ctx->pc = 0x1AD724u;
label_1ad724:
    // 0x1ad724: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x1ad724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
label_1ad728:
    // 0x1ad728: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1ad728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1ad72c:
    // 0x1ad72c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad730:
    // 0x1ad730: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1ad734:
    if (ctx->pc == 0x1AD734u) {
        ctx->pc = 0x1AD734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD730u;
        // 0x1ad734: 0xe580d4bc  swc1        $f0, -0x2B44($t4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294956220), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD738u;
        goto label_1ad738;
    }
    ctx->pc = 0x1AD730u;
    {
        const bool branch_taken_0x1ad730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD730u;
        // 0x1ad734: 0xe580d4bc  swc1        $f0, -0x2B44($t4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294956220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad730) {
            ctx->pc = 0x1AD7A8u;
            goto label_1ad7a8;
        }
    }
    ctx->pc = 0x1AD738u;
label_1ad738:
    // 0x1ad738: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1ad738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_1ad73c:
    // 0x1ad73c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ad73cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ad740:
    // 0x1ad740: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ad740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ad744:
    // 0x1ad744: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ad744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ad748:
    // 0x1ad748: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1ad748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1ad74c:
    // 0x1ad74c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1ad750:
    if (ctx->pc == 0x1AD750u) {
        ctx->pc = 0x1AD750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD74Cu;
        // 0x1ad750: 0xe482d508  swc1        $f2, -0x2AF8($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956296), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD754u;
        goto label_1ad754;
    }
    ctx->pc = 0x1AD74Cu;
    {
        const bool branch_taken_0x1ad74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD74Cu;
        // 0x1ad750: 0xe482d508  swc1        $f2, -0x2AF8($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad74c) {
            ctx->pc = 0x1AD77Cu;
            goto label_1ad77c;
        }
    }
    ctx->pc = 0x1AD754u;
label_1ad754:
    // 0x1ad754: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1ad754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_1ad758:
    // 0x1ad758: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ad758u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ad75c:
    // 0x1ad75c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ad75cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ad760:
    // 0x1ad760: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1ad760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_1ad764:
    // 0x1ad764: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ad764u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ad768:
    // 0x1ad768: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad76c:
    // 0x1ad76c: 0xe561d4c0  swc1        $f1, -0x2B40($t3)
    ctx->pc = 0x1ad76cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294956224), bits); }
label_1ad770:
    // 0x1ad770: 0xe480d508  swc1        $f0, -0x2AF8($a0)
    ctx->pc = 0x1ad770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956296), bits); }
label_1ad774:
    // 0x1ad774: 0x1000000c  b           . + 4 + (0xC << 2)
label_1ad778:
    if (ctx->pc == 0x1AD778u) {
        ctx->pc = 0x1AD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD774u;
        // 0x1ad778: 0xe5421124  swc1        $f2, 0x1124($t2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4388), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD77Cu;
        goto label_1ad77c;
    }
    ctx->pc = 0x1AD774u;
    {
        const bool branch_taken_0x1ad774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD774u;
        // 0x1ad778: 0xe5421124  swc1        $f2, 0x1124($t2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4388), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad774) {
            ctx->pc = 0x1AD7A8u;
            goto label_1ad7a8;
        }
    }
    ctx->pc = 0x1AD77Cu;
label_1ad77c:
    // 0x1ad77c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1ad77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1ad780:
    // 0x1ad780: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1ad784:
    if (ctx->pc == 0x1AD784u) {
        ctx->pc = 0x1AD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD780u;
        // 0x1ad784: 0x26b015b0  addiu       $s0, $s5, 0x15B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 5552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD788u;
        goto label_1ad788;
    }
    ctx->pc = 0x1AD780u;
    {
        const bool branch_taken_0x1ad780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD780u;
        // 0x1ad784: 0x26b015b0  addiu       $s0, $s5, 0x15B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 5552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad780) {
            ctx->pc = 0x1AD7ACu;
            goto label_1ad7ac;
        }
    }
    ctx->pc = 0x1AD788u;
label_1ad788:
    // 0x1ad788: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x1ad788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
label_1ad78c:
    // 0x1ad78c: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1ad78cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1ad790:
    // 0x1ad790: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ad790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ad794:
    // 0x1ad794: 0x3c013f78  lui         $at, 0x3F78
    ctx->pc = 0x1ad794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16248 << 16));
label_1ad798:
    // 0x1ad798: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1ad798u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1ad79c:
    // 0x1ad79c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad79cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad7a0:
    // 0x1ad7a0: 0xe581d4bc  swc1        $f1, -0x2B44($t4)
    ctx->pc = 0x1ad7a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294956220), bits); }
label_1ad7a4:
    // 0x1ad7a4: 0xe560d4c0  swc1        $f0, -0x2B40($t3)
    ctx->pc = 0x1ad7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294956224), bits); }
label_1ad7a8:
    // 0x1ad7a8: 0x26b015b0  addiu       $s0, $s5, 0x15B0
    ctx->pc = 0x1ad7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 5552));
label_1ad7ac:
    // 0x1ad7ac: 0xc06a3cc  jal         func_1A8F30
label_1ad7b0:
    if (ctx->pc == 0x1AD7B0u) {
        ctx->pc = 0x1AD7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7ACu;
        // 0x1ad7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD7B4u;
        goto label_1ad7b4;
    }
    ctx->pc = 0x1AD7ACu;
    SET_GPR_U32(ctx, 31, 0x1AD7B4u);
    ctx->pc = 0x1AD7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD7ACu;
    // 0x1ad7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F30u, 0x1AD7ACu, 0x1AD7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7B4u;
label_1ad7b4:
    // 0x1ad7b4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1ad7b8:
    if (ctx->pc == 0x1AD7B8u) {
        ctx->pc = 0x1AD7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7B4u;
        // 0x1ad7b8: 0x26b015d0  addiu       $s0, $s5, 0x15D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 5584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD7BCu;
        goto label_1ad7bc;
    }
    ctx->pc = 0x1AD7B4u;
    {
        const bool branch_taken_0x1ad7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad7b4) {
            ctx->pc = 0x1AD7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD7B4u;
            // 0x1ad7b8: 0x26b015d0  addiu       $s0, $s5, 0x15D0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 5584));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD7C8u;
            goto label_1ad7c8;
        }
    }
    ctx->pc = 0x1AD7BCu;
label_1ad7bc:
    // 0x1ad7bc: 0xc06a3b6  jal         func_1A8ED8
label_1ad7c0:
    if (ctx->pc == 0x1AD7C0u) {
        ctx->pc = 0x1AD7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7BCu;
        // 0x1ad7c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD7C4u;
        goto label_1ad7c4;
    }
    ctx->pc = 0x1AD7BCu;
    SET_GPR_U32(ctx, 31, 0x1AD7C4u);
    ctx->pc = 0x1AD7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD7BCu;
    // 0x1ad7c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8ED8u, 0x1AD7BCu, 0x1AD7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7C4u;
label_1ad7c4:
    // 0x1ad7c4: 0x26b015d0  addiu       $s0, $s5, 0x15D0
    ctx->pc = 0x1ad7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 5584));
label_1ad7c8:
    // 0x1ad7c8: 0xc0710b8  jal         func_1C42E0
label_1ad7cc:
    if (ctx->pc == 0x1AD7CCu) {
        ctx->pc = 0x1AD7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7C8u;
        // 0x1ad7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD7D0u;
        goto label_1ad7d0;
    }
    ctx->pc = 0x1AD7C8u;
    SET_GPR_U32(ctx, 31, 0x1AD7D0u);
    ctx->pc = 0x1AD7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD7C8u;
    // 0x1ad7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42E0u, 0x1AD7C8u, 0x1AD7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7D0u;
label_1ad7d0:
    // 0x1ad7d0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1ad7d4:
    if (ctx->pc == 0x1AD7D4u) {
        ctx->pc = 0x1AD7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7D0u;
        // 0x1ad7d4: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD7D8u;
        goto label_1ad7d8;
    }
    ctx->pc = 0x1AD7D0u;
    {
        const bool branch_taken_0x1ad7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7D0u;
        // 0x1ad7d4: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7d0) {
            ctx->pc = 0x1AD81Cu;
            goto label_1ad81c;
        }
    }
    ctx->pc = 0x1AD7D8u;
label_1ad7d8:
    // 0x1ad7d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad7dc:
    // 0x1ad7dc: 0xc070f78  jal         func_1C3DE0
label_1ad7e0:
    if (ctx->pc == 0x1AD7E0u) {
        ctx->pc = 0x1AD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7DCu;
        // 0x1ad7e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD7E4u;
        goto label_1ad7e4;
    }
    ctx->pc = 0x1AD7DCu;
    SET_GPR_U32(ctx, 31, 0x1AD7E4u);
    ctx->pc = 0x1AD7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD7DCu;
    // 0x1ad7e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3DE0u, 0x1AD7DCu, 0x1AD7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7E4u;
label_1ad7e4:
    // 0x1ad7e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ad7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ad7e8:
    // 0x1ad7e8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ad7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ad7ec:
    // 0x1ad7ec: 0xc443d428  lwc1        $f3, -0x2BD8($v0)
    ctx->pc = 0x1ad7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ad7f0:
    // 0x1ad7f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ad7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ad7f4:
    // 0x1ad7f4: 0xc480d42c  lwc1        $f0, -0x2BD4($a0)
    ctx->pc = 0x1ad7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294956076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad7f8:
    // 0x1ad7f8: 0xc461d430  lwc1        $f1, -0x2BD0($v1)
    ctx->pc = 0x1ad7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad7fc:
    // 0x1ad7fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ad7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ad800:
    // 0x1ad800: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ad800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ad804:
    // 0x1ad804: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1ad804u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ad808:
    // 0x1ad808: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1ad808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1ad80c:
    // 0x1ad80c: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1ad80cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1ad810:
    // 0x1ad810: 0xe662000c  swc1        $f2, 0xC($s3)
    ctx->pc = 0x1ad810u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1ad814:
    // 0x1ad814: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1ad814u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ad818:
    // 0x1ad818: 0x7e022930  sq          $v0, 0x2930($s0)
    ctx->pc = 0x1ad818u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 10544), GPR_VEC(ctx, 2));
label_1ad81c:
    // 0x1ad81c: 0x26b03f10  addiu       $s0, $s5, 0x3F10
    ctx->pc = 0x1ad81cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 16144));
label_1ad820:
    // 0x1ad820: 0xc0710b8  jal         func_1C42E0
label_1ad824:
    if (ctx->pc == 0x1AD824u) {
        ctx->pc = 0x1AD824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD820u;
        // 0x1ad824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD828u;
        goto label_1ad828;
    }
    ctx->pc = 0x1AD820u;
    SET_GPR_U32(ctx, 31, 0x1AD828u);
    ctx->pc = 0x1AD824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD820u;
    // 0x1ad824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42E0u, 0x1AD820u, 0x1AD828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD828u;
label_1ad828:
    // 0x1ad828: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1ad82c:
    if (ctx->pc == 0x1AD82Cu) {
        ctx->pc = 0x1AD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD828u;
        // 0x1ad82c: 0x34028960  ori         $v0, $zero, 0x8960 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35168);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD830u;
        goto label_1ad830;
    }
    ctx->pc = 0x1AD828u;
    {
        const bool branch_taken_0x1ad828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD828u;
        // 0x1ad82c: 0x34028960  ori         $v0, $zero, 0x8960 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35168);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad828) {
            ctx->pc = 0x1AD878u;
            goto label_1ad878;
        }
    }
    ctx->pc = 0x1AD830u;
label_1ad830:
    // 0x1ad830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad834:
    // 0x1ad834: 0xc070f78  jal         func_1C3DE0
label_1ad838:
    if (ctx->pc == 0x1AD838u) {
        ctx->pc = 0x1AD838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD834u;
        // 0x1ad838: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD83Cu;
        goto label_1ad83c;
    }
    ctx->pc = 0x1AD834u;
    SET_GPR_U32(ctx, 31, 0x1AD83Cu);
    ctx->pc = 0x1AD838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD834u;
    // 0x1ad838: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3DE0u, 0x1AD834u, 0x1AD83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD83Cu;
label_1ad83c:
    // 0x1ad83c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ad83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ad840:
    // 0x1ad840: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ad840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ad844:
    // 0x1ad844: 0xc443d434  lwc1        $f3, -0x2BCC($v0)
    ctx->pc = 0x1ad844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ad848:
    // 0x1ad848: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ad848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ad84c:
    // 0x1ad84c: 0xc480d438  lwc1        $f0, -0x2BC8($a0)
    ctx->pc = 0x1ad84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294956088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad850:
    // 0x1ad850: 0xc461d43c  lwc1        $f1, -0x2BC4($v1)
    ctx->pc = 0x1ad850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad854:
    // 0x1ad854: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ad854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ad858:
    // 0x1ad858: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ad858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ad85c:
    // 0x1ad85c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1ad85cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ad860:
    // 0x1ad860: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1ad860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1ad864:
    // 0x1ad864: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1ad864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1ad868:
    // 0x1ad868: 0xe662000c  swc1        $f2, 0xC($s3)
    ctx->pc = 0x1ad868u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1ad86c:
    // 0x1ad86c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1ad86cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ad870:
    // 0x1ad870: 0x7e022930  sq          $v0, 0x2930($s0)
    ctx->pc = 0x1ad870u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 10544), GPR_VEC(ctx, 2));
label_1ad874:
    // 0x1ad874: 0x34028960  ori         $v0, $zero, 0x8960
    ctx->pc = 0x1ad874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35168);
label_1ad878:
    // 0x1ad878: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x1ad878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1ad87c:
    // 0x1ad87c: 0xc0709f8  jal         func_1C27E0
label_1ad880:
    if (ctx->pc == 0x1AD880u) {
        ctx->pc = 0x1AD880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD87Cu;
        // 0x1ad880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD884u;
        goto label_1ad884;
    }
    ctx->pc = 0x1AD87Cu;
    SET_GPR_U32(ctx, 31, 0x1AD884u);
    ctx->pc = 0x1AD880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD87Cu;
    // 0x1ad880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E0u, 0x1AD87Cu, 0x1AD884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD884u;
label_1ad884:
    // 0x1ad884: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ad888:
    if (ctx->pc == 0x1AD888u) {
        ctx->pc = 0x1AD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD884u;
        // 0x1ad888: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD88Cu;
        goto label_1ad88c;
    }
    ctx->pc = 0x1AD884u;
    {
        const bool branch_taken_0x1ad884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD884u;
        // 0x1ad888: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad884) {
            ctx->pc = 0x1AD898u;
            goto label_1ad898;
        }
    }
    ctx->pc = 0x1AD88Cu;
label_1ad88c:
    // 0x1ad88c: 0xc07098e  jal         func_1C2638
label_1ad890:
    if (ctx->pc == 0x1AD890u) {
        ctx->pc = 0x1AD890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD88Cu;
        // 0x1ad890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD894u;
        goto label_1ad894;
    }
    ctx->pc = 0x1AD88Cu;
    SET_GPR_U32(ctx, 31, 0x1AD894u);
    ctx->pc = 0x1AD890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD88Cu;
    // 0x1ad890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2638u, 0x1AD88Cu, 0x1AD894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD894u;
label_1ad894:
    // 0x1ad894: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ad894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1ad898:
    // 0x1ad898: 0x344277d0  ori         $v0, $v0, 0x77D0
    ctx->pc = 0x1ad898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30672);
label_1ad89c:
    // 0x1ad89c: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x1ad89cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1ad8a0:
    // 0x1ad8a0: 0xc06a9ae  jal         func_1AA6B8
label_1ad8a4:
    if (ctx->pc == 0x1AD8A4u) {
        ctx->pc = 0x1AD8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8A0u;
        // 0x1ad8a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD8A8u;
        goto label_1ad8a8;
    }
    ctx->pc = 0x1AD8A0u;
    SET_GPR_U32(ctx, 31, 0x1AD8A8u);
    ctx->pc = 0x1AD8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8A0u;
    // 0x1ad8a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA6B8u, 0x1AD8A0u, 0x1AD8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8A8u;
label_1ad8a8:
    // 0x1ad8a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ad8ac:
    if (ctx->pc == 0x1AD8ACu) {
        ctx->pc = 0x1AD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8A8u;
        // 0x1ad8ac: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD8B0u;
        goto label_1ad8b0;
    }
    ctx->pc = 0x1AD8A8u;
    {
        const bool branch_taken_0x1ad8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8A8u;
        // 0x1ad8ac: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8a8) {
            ctx->pc = 0x1AD8C0u;
            goto label_1ad8c0;
        }
    }
    ctx->pc = 0x1AD8B0u;
label_1ad8b0:
    // 0x1ad8b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad8b4:
    // 0x1ad8b4: 0xc06a8a4  jal         func_1AA290
label_1ad8b8:
    if (ctx->pc == 0x1AD8B8u) {
        ctx->pc = 0x1AD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8B4u;
        // 0x1ad8b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD8BCu;
        goto label_1ad8bc;
    }
    ctx->pc = 0x1AD8B4u;
    SET_GPR_U32(ctx, 31, 0x1AD8BCu);
    ctx->pc = 0x1AD8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8B4u;
    // 0x1ad8b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA290u, 0x1AD8B4u, 0x1AD8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8BCu;
label_1ad8bc:
    // 0x1ad8bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ad8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1ad8c0:
    // 0x1ad8c0: 0x34428280  ori         $v0, $v0, 0x8280
    ctx->pc = 0x1ad8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33408);
label_1ad8c4:
    // 0x1ad8c4: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x1ad8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1ad8c8:
    // 0x1ad8c8: 0xc06a9ae  jal         func_1AA6B8
label_1ad8cc:
    if (ctx->pc == 0x1AD8CCu) {
        ctx->pc = 0x1AD8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8C8u;
        // 0x1ad8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD8D0u;
        goto label_1ad8d0;
    }
    ctx->pc = 0x1AD8C8u;
    SET_GPR_U32(ctx, 31, 0x1AD8D0u);
    ctx->pc = 0x1AD8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8C8u;
    // 0x1ad8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA6B8u, 0x1AD8C8u, 0x1AD8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8D0u;
label_1ad8d0:
    // 0x1ad8d0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1ad8d4:
    if (ctx->pc == 0x1AD8D4u) {
        ctx->pc = 0x1AD8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8D0u;
        // 0x1ad8d4: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD8D8u;
        goto label_1ad8d8;
    }
    ctx->pc = 0x1AD8D0u;
    {
        const bool branch_taken_0x1ad8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad8d0) {
            ctx->pc = 0x1AD8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD8D0u;
            // 0x1ad8d4: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD8E8u;
            goto label_1ad8e8;
        }
    }
    ctx->pc = 0x1AD8D8u;
label_1ad8d8:
    // 0x1ad8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad8dc:
    // 0x1ad8dc: 0xc06a8a4  jal         func_1AA290
label_1ad8e0:
    if (ctx->pc == 0x1AD8E0u) {
        ctx->pc = 0x1AD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8DCu;
        // 0x1ad8e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD8E4u;
        goto label_1ad8e4;
    }
    ctx->pc = 0x1AD8DCu;
    SET_GPR_U32(ctx, 31, 0x1AD8E4u);
    ctx->pc = 0x1AD8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8DCu;
    // 0x1ad8e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA290u, 0x1AD8DCu, 0x1AD8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8E4u;
label_1ad8e4:
    // 0x1ad8e4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1ad8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1ad8e8:
    // 0x1ad8e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ad8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ad8ec:
    // 0x1ad8ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ad8ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ad8f0:
    // 0x1ad8f0: 0x34841d60  ori         $a0, $a0, 0x1D60
    ctx->pc = 0x1ad8f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7520);
label_1ad8f4:
    // 0x1ad8f4: 0xc06dd7c  jal         func_1B75F0
label_1ad8f8:
    if (ctx->pc == 0x1AD8F8u) {
        ctx->pc = 0x1AD8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8F4u;
        // 0x1ad8f8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD8FCu;
        goto label_1ad8fc;
    }
    ctx->pc = 0x1AD8F4u;
    SET_GPR_U32(ctx, 31, 0x1AD8FCu);
    ctx->pc = 0x1AD8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8F4u;
    // 0x1ad8f8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B75F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75F0u, 0x1AD8F4u, 0x1AD8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8FCu;
label_1ad8fc:
    // 0x1ad8fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ad8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ad900:
    // 0x1ad900: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ad900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ad904:
    // 0x1ad904: 0xc440d448  lwc1        $f0, -0x2BB8($v0)
    ctx->pc = 0x1ad904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad908:
    // 0x1ad908: 0x26a47660  addiu       $a0, $s5, 0x7660
    ctx->pc = 0x1ad908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 30304));
label_1ad90c:
    // 0x1ad90c: 0xc461d44c  lwc1        $f1, -0x2BB4($v1)
    ctx->pc = 0x1ad90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad910:
    // 0x1ad910: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ad910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ad914:
    // 0x1ad914: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1ad914u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1ad918:
    // 0x1ad918: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1ad918u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1ad91c:
    // 0x1ad91c: 0xc06ed94  jal         func_1BB650
label_1ad920:
    if (ctx->pc == 0x1AD920u) {
        ctx->pc = 0x1AD920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD91Cu;
        // 0x1ad920: 0xe6610008  swc1        $f1, 0x8($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD924u;
        goto label_1ad924;
    }
    ctx->pc = 0x1AD91Cu;
    SET_GPR_U32(ctx, 31, 0x1AD924u);
    ctx->pc = 0x1AD920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD91Cu;
    // 0x1ad920: 0xe6610008  swc1        $f1, 0x8($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB650u, 0x1AD91Cu, 0x1AD924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD924u;
label_1ad924:
    // 0x1ad924: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1ad924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_1ad928:
    // 0x1ad928: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ad928u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ad92c:
    // 0x1ad92c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad92cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad930:
    // 0x1ad930: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ad930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ad934:
    // 0x1ad934: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1ad934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_1ad938:
    // 0x1ad938: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ad938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ad93c:
    // 0x1ad93c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ad93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ad940:
    // 0x1ad940: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1ad940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ad944:
    // 0x1ad944: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ad944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ad948:
    // 0x1ad948: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1ad948u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad94c:
    // 0x1ad94c: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1ad94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1ad950:
    // 0x1ad950: 0x3404acb0  ori         $a0, $zero, 0xACB0
    ctx->pc = 0x1ad950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44208);
label_1ad954:
    // 0x1ad954: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1ad954u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1ad958:
    // 0x1ad958: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1ad958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1ad95c:
    // 0x1ad95c: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1ad95cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1ad960:
    // 0x1ad960: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ad960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ad964:
    // 0x1ad964: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x1ad964u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
label_1ad968:
    // 0x1ad968: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ad968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad96c:
    // 0x1ad96c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1ad96cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1ad970:
    // 0x1ad970: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ad970u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad974:
    // 0x1ad974: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1ad974u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_1ad978:
    // 0x1ad978: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ad978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad97c:
    // 0x1ad97c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1ad97cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1ad980:
    // 0x1ad980: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1ad980u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ad984:
    // 0x1ad984: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1ad984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1ad988:
    // 0x1ad988: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ad988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ad98c:
    // 0x1ad98c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ad98cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ad990:
    // 0x1ad990: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x1ad990u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ad994:
    // 0x1ad994: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1ad994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1ad998:
    // 0x1ad998: 0xc070b8e  jal         func_1C2E38
label_1ad99c:
    if (ctx->pc == 0x1AD99Cu) {
        ctx->pc = 0x1AD99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD998u;
        // 0x1ad99c: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD9A0u;
        goto label_1ad9a0;
    }
    ctx->pc = 0x1AD998u;
    SET_GPR_U32(ctx, 31, 0x1AD9A0u);
    ctx->pc = 0x1AD99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD998u;
    // 0x1ad99c: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2E38u, 0x1AD998u, 0x1AD9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9A0u;
label_1ad9a0:
    // 0x1ad9a0: 0x34049350  ori         $a0, $zero, 0x9350
    ctx->pc = 0x1ad9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37712);
label_1ad9a4:
    // 0x1ad9a4: 0xc06b318  jal         func_1ACC60
label_1ad9a8:
    if (ctx->pc == 0x1AD9A8u) {
        ctx->pc = 0x1AD9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9A4u;
        // 0x1ad9a8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD9ACu;
        goto label_1ad9ac;
    }
    ctx->pc = 0x1AD9A4u;
    SET_GPR_U32(ctx, 31, 0x1AD9ACu);
    ctx->pc = 0x1AD9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9A4u;
    // 0x1ad9a8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACC60u, 0x1AD9A4u, 0x1AD9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9ACu;
label_1ad9ac:
    // 0x1ad9ac: 0x34049540  ori         $a0, $zero, 0x9540
    ctx->pc = 0x1ad9acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38208);
label_1ad9b0:
    // 0x1ad9b0: 0xc072dbc  jal         func_1CB6F0
label_1ad9b4:
    if (ctx->pc == 0x1AD9B4u) {
        ctx->pc = 0x1AD9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9B0u;
        // 0x1ad9b4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD9B8u;
        goto label_1ad9b8;
    }
    ctx->pc = 0x1AD9B0u;
    SET_GPR_U32(ctx, 31, 0x1AD9B8u);
    ctx->pc = 0x1AD9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9B0u;
    // 0x1ad9b4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6F0u, 0x1AD9B0u, 0x1AD9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9B8u;
label_1ad9b8:
    // 0x1ad9b8: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1ad9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_1ad9bc:
    // 0x1ad9bc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ad9bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ad9c0:
    // 0x1ad9c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad9c4:
    // 0x1ad9c4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1ad9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ad9c8:
    // 0x1ad9c8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ad9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1ad9cc:
    // 0x1ad9cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ad9ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ad9d0:
    // 0x1ad9d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ad9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ad9d4:
    // 0x1ad9d4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1ad9d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ad9d8:
    // 0x1ad9d8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ad9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ad9dc:
    // 0x1ad9dc: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1ad9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_1ad9e0:
    // 0x1ad9e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ad9e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ad9e4:
    // 0x1ad9e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ad9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ad9e8:
    // 0x1ad9e8: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1ad9e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1ad9ec:
    // 0x1ad9ec: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1ad9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1ad9f0:
    // 0x1ad9f0: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1ad9f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1ad9f4:
    // 0x1ad9f4: 0x3c01bc13  lui         $at, 0xBC13
    ctx->pc = 0x1ad9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48147 << 16));
label_1ad9f8:
    // 0x1ad9f8: 0x342174bc  ori         $at, $at, 0x74BC
    ctx->pc = 0x1ad9f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29884);
label_1ad9fc:
    // 0x1ad9fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ada00:
    // 0x1ada00: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x1ada00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1ada04:
    // 0x1ada04: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1ada04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1ada08:
    // 0x1ada08: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1ada08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1ada0c:
    // 0x1ada0c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1ada0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1ada10:
    // 0x1ada10: 0x8e22cdb4  lw          $v0, -0x324C($s1)
    ctx->pc = 0x1ada10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_1ada14:
    // 0x1ada14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ada14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ada18:
    // 0x1ada18: 0x30430020  andi        $v1, $v0, 0x20
    ctx->pc = 0x1ada18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1ada1c:
    // 0x1ada1c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_1ada20:
    if (ctx->pc == 0x1ADA20u) {
        ctx->pc = 0x1ADA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA1Cu;
        // 0x1ada20: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA24u;
        goto label_1ada24;
    }
    ctx->pc = 0x1ADA1Cu;
    {
        const bool branch_taken_0x1ada1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA1Cu;
        // 0x1ada20: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada1c) {
            ctx->pc = 0x1ADA4Cu;
            goto label_1ada4c;
        }
    }
    ctx->pc = 0x1ADA24u;
label_1ada24:
    // 0x1ada24: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1ada28:
    if (ctx->pc == 0x1ADA28u) {
        ctx->pc = 0x1ADA2Cu;
        goto label_1ada2c;
    }
    ctx->pc = 0x1ADA24u;
    {
        const bool branch_taken_0x1ada24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ada24) {
            ctx->pc = 0x1ADA4Cu;
            goto label_1ada4c;
        }
    }
    ctx->pc = 0x1ADA2Cu;
label_1ada2c:
    // 0x1ada2c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1ada2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_1ada30:
    // 0x1ada30: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ada30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ada34:
    // 0x1ada34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ada34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ada38:
    // 0x1ada38: 0x3c01bc93  lui         $at, 0xBC93
    ctx->pc = 0x1ada38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48275 << 16));
label_1ada3c:
    // 0x1ada3c: 0x342174bc  ori         $at, $at, 0x74BC
    ctx->pc = 0x1ada3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29884);
label_1ada40:
    // 0x1ada40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ada40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ada44:
    // 0x1ada44: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ada44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1ada48:
    // 0x1ada48: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1ada48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1ada4c:
    // 0x1ada4c: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1ada4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_1ada50:
    // 0x1ada50: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ada50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ada54:
    // 0x1ada54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ada54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ada58:
    // 0x1ada58: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1ada58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1ada5c:
    // 0x1ada5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ada5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ada60:
    // 0x1ada60: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ada60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1ada64:
    // 0x1ada64: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ada64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ada68:
    // 0x1ada68: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1ada68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1ada6c:
    // 0x1ada6c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ada6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1ada70:
    // 0x1ada70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ada70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ada74:
    // 0x1ada74: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x1ada74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_1ada78:
    // 0x1ada78: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1ada78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_1ada7c:
    // 0x1ada7c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ada7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ada80:
    // 0x1ada80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ada80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ada84:
    // 0x1ada84: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1ada84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ada88:
    // 0x1ada88: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1ada88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1ada8c:
    // 0x1ada8c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ada8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1ada90:
    // 0x1ada90: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1ada90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1ada94:
    // 0x1ada94: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1ada94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ada98:
    // 0x1ada98: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1ada98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1ada9c:
    // 0x1ada9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ada9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1adaa0:
    // 0x1adaa0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1adaa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1adaa4:
    // 0x1adaa4: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x1adaa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1adaa8:
    // 0x1adaa8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1adaa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1adaac:
    // 0x1adaac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1adaacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adab0:
    // 0x1adab0: 0xe455000c  swc1        $f21, 0xC($v0)
    ctx->pc = 0x1adab0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1adab4:
    // 0x1adab4: 0xc067eec  jal         func_19FBB0
label_1adab8:
    if (ctx->pc == 0x1ADAB8u) {
        ctx->pc = 0x1ADAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAB4u;
        // 0x1adab8: 0x24140080  addiu       $s4, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADABCu;
        goto label_1adabc;
    }
    ctx->pc = 0x1ADAB4u;
    SET_GPR_U32(ctx, 31, 0x1ADABCu);
    ctx->pc = 0x1ADAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAB4u;
    // 0x1adab8: 0x24140080  addiu       $s4, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FBB0u, 0x1ADAB4u, 0x1ADABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADABCu;
label_1adabc:
    // 0x1adabc: 0x241e00ff  addiu       $fp, $zero, 0xFF
    ctx->pc = 0x1adabcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1adac0:
    // 0x1adac0: 0x26a26850  addiu       $v0, $s5, 0x6850
    ctx->pc = 0x1adac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 26704));
label_1adac4:
    // 0x1adac4: 0x27a3005c  addiu       $v1, $sp, 0x5C
    ctx->pc = 0x1adac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1adac8:
    // 0x1adac8: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1adac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_1adacc:
    // 0x1adacc: 0x27b60058  addiu       $s6, $sp, 0x58
    ctx->pc = 0x1adaccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1adad0:
    // 0x1adad0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1adad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1adad4:
    // 0x1adad4: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x1adad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
label_1adad8:
    // 0x1adad8: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1adad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1adadc:
    // 0x1adadc: 0x27a30064  addiu       $v1, $sp, 0x64
    ctx->pc = 0x1adadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1adae0:
    // 0x1adae0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1adae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1adae4:
    // 0x1adae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1adae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adae8:
    // 0x1adae8: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x1adae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1adaec:
    // 0x1adaec: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x1adaecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
label_1adaf0:
    // 0x1adaf0: 0x27b10054  addiu       $s1, $sp, 0x54
    ctx->pc = 0x1adaf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_1adaf4:
    // 0x1adaf4: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1adaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_1adaf8:
    // 0x1adaf8: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x1adaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_1adafc:
    // 0x1adafc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1adafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1adb00:
    // 0x1adb00: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1adb00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adb04:
    // 0x1adb04: 0xe6740008  swc1        $f20, 0x8($s3)
    ctx->pc = 0x1adb04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1adb08:
    // 0x1adb08: 0x26b06b40  addiu       $s0, $s5, 0x6B40
    ctx->pc = 0x1adb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 27456));
label_1adb0c:
    // 0x1adb0c: 0xe675000c  swc1        $f21, 0xC($s3)
    ctx->pc = 0x1adb0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1adb10:
    // 0x1adb10: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1adb10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1adb14:
    // 0x1adb14: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x1adb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
label_1adb18:
    // 0x1adb18: 0xa3b40054  sb          $s4, 0x54($sp)
    ctx->pc = 0x1adb18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 20));
label_1adb1c:
    // 0x1adb1c: 0x0  nop
    ctx->pc = 0x1adb1cu;
    // NOP
label_1adb20:
    // 0x1adb20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adb24:
    // 0x1adb24: 0xa2340001  sb          $s4, 0x1($s1)
    ctx->pc = 0x1adb24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 20));
label_1adb28:
    // 0x1adb28: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1adb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1adb2c:
    // 0x1adb2c: 0xa2340002  sb          $s4, 0x2($s1)
    ctx->pc = 0x1adb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 20));
label_1adb30:
    // 0x1adb30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1adb30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adb34:
    // 0x1adb34: 0xa23e0003  sb          $fp, 0x3($s1)
    ctx->pc = 0x1adb34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 30));
label_1adb38:
    // 0x1adb38: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1adb38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adb3c:
    // 0x1adb3c: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1adb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_1adb40:
    // 0x1adb40: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1adb40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1adb44:
    // 0x1adb44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1adb44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1adb48:
    // 0x1adb48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1adb48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adb4c:
    // 0x1adb4c: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x1adb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1adb50:
    // 0x1adb50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1adb50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adb54:
    // 0x1adb54: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x1adb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
label_1adb58:
    // 0x1adb58: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1adb58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adb5c:
    // 0x1adb5c: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x1adb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
label_1adb60:
    // 0x1adb60: 0xc067be0  jal         func_19EF80
label_1adb64:
    if (ctx->pc == 0x1ADB64u) {
        ctx->pc = 0x1ADB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB60u;
        // 0x1adb64: 0x26100590  addiu       $s0, $s0, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADB68u;
        goto label_1adb68;
    }
    ctx->pc = 0x1ADB60u;
    SET_GPR_U32(ctx, 31, 0x1ADB68u);
    ctx->pc = 0x1ADB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADB60u;
    // 0x1adb64: 0x26100590  addiu       $s0, $s0, 0x590 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EF80u, 0x1ADB60u, 0x1ADB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADB68u;
label_1adb68:
    // 0x1adb68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1adb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1adb6c:
    // 0x1adb6c: 0xc06cf7e  jal         func_1B3DF8
label_1adb70:
    if (ctx->pc == 0x1ADB70u) {
        ctx->pc = 0x1ADB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB6Cu;
        // 0x1adb70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADB74u;
        goto label_1adb74;
    }
    ctx->pc = 0x1ADB6Cu;
    SET_GPR_U32(ctx, 31, 0x1ADB74u);
    ctx->pc = 0x1ADB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADB6Cu;
    // 0x1adb70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3DF8u, 0x1ADB6Cu, 0x1ADB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADB74u;
label_1adb74:
    // 0x1adb74: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1adb74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1adb78:
    // 0x1adb78: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1adb78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1adb7c:
    // 0x1adb7c: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
label_1adb80:
    if (ctx->pc == 0x1ADB80u) {
        ctx->pc = 0x1ADB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB7Cu;
        // 0x1adb80: 0xa3b40054  sb          $s4, 0x54($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADB84u;
        goto label_1adb84;
    }
    ctx->pc = 0x1ADB7Cu;
    {
        const bool branch_taken_0x1adb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adb7c) {
            ctx->pc = 0x1ADB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADB7Cu;
            // 0x1adb80: 0xa3b40054  sb          $s4, 0x54($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adb20;
        }
    }
    ctx->pc = 0x1ADB84u;
label_1adb84:
    // 0x1adb84: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1adb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_1adb88:
    // 0x1adb88: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1adb88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1adb8c:
    // 0x1adb8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1adb8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1adb90:
    // 0x1adb90: 0x240200ce  addiu       $v0, $zero, 0xCE
    ctx->pc = 0x1adb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
label_1adb94:
    // 0x1adb94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1adb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1adb98:
    // 0x1adb98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1adb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1adb9c:
    // 0x1adb9c: 0x34108dd0  ori         $s0, $zero, 0x8DD0
    ctx->pc = 0x1adb9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36304);
label_1adba0:
    // 0x1adba0: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1adba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1adba4:
    // 0x1adba4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1adba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1adba8:
    // 0x1adba8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1adba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adbac:
    // 0x1adbac: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x1adbacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1adbb0:
    // 0x1adbb0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1adbb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1adbb4:
    // 0x1adbb4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1adbb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adbb8:
    // 0x1adbb8: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1adbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1adbbc:
    // 0x1adbbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adbc0:
    // 0x1adbc0: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1adbc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1adbc4:
    // 0x1adbc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1adbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1adbc8:
    // 0x1adbc8: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1adbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1adbcc:
    // 0x1adbcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1adbccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adbd0:
    // 0x1adbd0: 0xa3a20058  sb          $v0, 0x58($sp)
    ctx->pc = 0x1adbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 2));
label_1adbd4:
    // 0x1adbd4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1adbd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adbd8:
    // 0x1adbd8: 0xa2c20003  sb          $v0, 0x3($s6)
    ctx->pc = 0x1adbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 2));
label_1adbdc:
    // 0x1adbdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1adbdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adbe0:
    // 0x1adbe0: 0xa2c20001  sb          $v0, 0x1($s6)
    ctx->pc = 0x1adbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
label_1adbe4:
    // 0x1adbe4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1adbe4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adbe8:
    // 0x1adbe8: 0xa2c20002  sb          $v0, 0x2($s6)
    ctx->pc = 0x1adbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 2));
label_1adbec:
    // 0x1adbec: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1adbecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adbf0:
    // 0x1adbf0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1adbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1adbf4:
    // 0x1adbf4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1adbf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1adbf8:
    // 0x1adbf8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1adbf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1adbfc:
    // 0x1adbfc: 0x4600a5c6  mov.s       $f23, $f20
    ctx->pc = 0x1adbfcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
label_1adc00:
    // 0x1adc00: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1adc00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1adc04:
    // 0x1adc04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1adc04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adc08:
    // 0x1adc08: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1adc08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1adc0c:
    // 0x1adc0c: 0xc072220  jal         func_1C8880
label_1adc10:
    if (ctx->pc == 0x1ADC10u) {
        ctx->pc = 0x1ADC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC0Cu;
        // 0x1adc10: 0x260b02d  daddu       $s6, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADC14u;
        goto label_1adc14;
    }
    ctx->pc = 0x1ADC0Cu;
    SET_GPR_U32(ctx, 31, 0x1ADC14u);
    ctx->pc = 0x1ADC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC0Cu;
    // 0x1adc10: 0x260b02d  daddu       $s6, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8880u, 0x1ADC0Cu, 0x1ADC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC14u;
label_1adc14:
    // 0x1adc14: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1adc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1adc18:
    // 0x1adc18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1adc18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1adc1c:
    // 0x1adc1c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1adc1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1adc20:
    // 0x1adc20: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1adc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1adc24:
    // 0x1adc24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1adc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1adc28:
    // 0x1adc28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1adc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1adc2c:
    // 0x1adc2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1adc2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1adc30:
    // 0x1adc30: 0xae110570  sw          $s1, 0x570($s0)
    ctx->pc = 0x1adc30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1392), GPR_U32(ctx, 17));
label_1adc34:
    // 0x1adc34: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1adc34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1adc38:
    // 0x1adc38: 0x3c013e0a  lui         $at, 0x3E0A
    ctx->pc = 0x1adc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15882 << 16));
label_1adc3c:
    // 0x1adc3c: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1adc3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1adc40:
    // 0x1adc40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1adc40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adc44:
    // 0x1adc44: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1adc44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1adc48:
    // 0x1adc48: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1adc48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1adc4c:
    // 0x1adc4c: 0xc07355e  jal         func_1CD578
label_1adc50:
    if (ctx->pc == 0x1ADC50u) {
        ctx->pc = 0x1ADC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC4Cu;
        // 0x1adc50: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADC54u;
        goto label_1adc54;
    }
    ctx->pc = 0x1ADC4Cu;
    SET_GPR_U32(ctx, 31, 0x1ADC54u);
    ctx->pc = 0x1ADC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC4Cu;
    // 0x1adc50: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD578u, 0x1ADC4Cu, 0x1ADC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC54u;
label_1adc54:
    // 0x1adc54: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1adc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_1adc58:
    // 0x1adc58: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1adc58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1adc5c:
    // 0x1adc5c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1adc5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1adc60:
    // 0x1adc60: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1adc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1adc64:
    // 0x1adc64: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1adc64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1adc68:
    // 0x1adc68: 0x344225d0  ori         $v0, $v0, 0x25D0
    ctx->pc = 0x1adc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9680);
label_1adc6c:
    // 0x1adc6c: 0x3404f420  ori         $a0, $zero, 0xF420
    ctx->pc = 0x1adc6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62496);
label_1adc70:
    // 0x1adc70: 0x2a2b821  addu        $s7, $s5, $v0
    ctx->pc = 0x1adc70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1adc74:
    // 0x1adc74: 0x346314c0  ori         $v1, $v1, 0x14C0
    ctx->pc = 0x1adc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5312);
label_1adc78:
    // 0x1adc78: 0x3402ebc0  ori         $v0, $zero, 0xEBC0
    ctx->pc = 0x1adc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60352);
label_1adc7c:
    // 0x1adc7c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1adc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_1adc80:
    // 0x1adc80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1adc80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1adc84:
    // 0x1adc84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1adc84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1adc88:
    // 0x1adc88: 0x2a4a021  addu        $s4, $s5, $a0
    ctx->pc = 0x1adc88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1adc8c:
    // 0x1adc8c: 0x2a38821  addu        $s1, $s5, $v1
    ctx->pc = 0x1adc8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1adc90:
    // 0x1adc90: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x1adc90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1adc94:
    // 0x1adc94: 0x0  nop
    ctx->pc = 0x1adc94u;
    // NOP
label_1adc98:
    // 0x1adc98: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_1adc9c:
    if (ctx->pc == 0x1ADC9Cu) {
        ctx->pc = 0x1ADC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC98u;
        // 0x1adc9c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADCA0u;
        goto label_1adca0;
    }
    ctx->pc = 0x1ADC98u;
    {
        const bool branch_taken_0x1adc98 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1ADC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC98u;
        // 0x1adc9c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc98) {
            ctx->pc = 0x1ADCB4u;
            goto label_1adcb4;
        }
    }
    ctx->pc = 0x1ADCA0u;
label_1adca0:
    // 0x1adca0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1adca0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adca4:
    // 0x1adca4: 0x0  nop
    ctx->pc = 0x1adca4u;
    // NOP
label_1adca8:
    // 0x1adca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1adca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1adcac:
    // 0x1adcac: 0x10000008  b           . + 4 + (0x8 << 2)
label_1adcb0:
    if (ctx->pc == 0x1ADCB0u) {
        ctx->pc = 0x1ADCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCACu;
        // 0x1adcb0: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADCB4u;
        goto label_1adcb4;
    }
    ctx->pc = 0x1ADCACu;
    {
        const bool branch_taken_0x1adcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCACu;
        // 0x1adcb0: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcac) {
            ctx->pc = 0x1ADCD0u;
            goto label_1adcd0;
        }
    }
    ctx->pc = 0x1ADCB4u;
label_1adcb4:
    // 0x1adcb4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1adcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_1adcb8:
    // 0x1adcb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1adcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1adcbc:
    // 0x1adcbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1adcbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1adcc0:
    // 0x1adcc0: 0x0  nop
    ctx->pc = 0x1adcc0u;
    // NOP
label_1adcc4:
    // 0x1adcc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1adcc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1adcc8:
    // 0x1adcc8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1adcc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1adccc:
    // 0x1adccc: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1adcccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1adcd0:
    // 0x1adcd0: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x1adcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
label_1adcd4:
    // 0x1adcd4: 0xe6d40008  swc1        $f20, 0x8($s6)
    ctx->pc = 0x1adcd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_1adcd8:
    // 0x1adcd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adcdc:
    // 0x1adcdc: 0xe6d7000c  swc1        $f23, 0xC($s6)
    ctx->pc = 0x1adcdcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_1adce0:
    // 0x1adce0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1adce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1adce4:
    // 0x1adce4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1adce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1adce8:
    // 0x1adce8: 0x26100430  addiu       $s0, $s0, 0x430
    ctx->pc = 0x1adce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
label_1adcec:
    // 0x1adcec: 0xc068bda  jal         func_1A2F68
label_1adcf0:
    if (ctx->pc == 0x1ADCF0u) {
        ctx->pc = 0x1ADCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCECu;
        // 0x1adcf0: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADCF4u;
        goto label_1adcf4;
    }
    ctx->pc = 0x1ADCECu;
    SET_GPR_U32(ctx, 31, 0x1ADCF4u);
    ctx->pc = 0x1ADCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADCECu;
    // 0x1adcf0: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F68u, 0x1ADCECu, 0x1ADCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADCF4u;
label_1adcf4:
    // 0x1adcf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1adcf8:
    // 0x1adcf8: 0xc06ac42  jal         func_1AB108
label_1adcfc:
    if (ctx->pc == 0x1ADCFCu) {
        ctx->pc = 0x1ADCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCF8u;
        // 0x1adcfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD00u;
        goto label_1add00;
    }
    ctx->pc = 0x1ADCF8u;
    SET_GPR_U32(ctx, 31, 0x1ADD00u);
    ctx->pc = 0x1ADCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADCF8u;
    // 0x1adcfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB108u, 0x1ADCF8u, 0x1ADD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD00u;
label_1add00:
    // 0x1add00: 0x26310450  addiu       $s1, $s1, 0x450
    ctx->pc = 0x1add00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1104));
label_1add04:
    // 0x1add04: 0x3c013e21  lui         $at, 0x3E21
    ctx->pc = 0x1add04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15905 << 16));
label_1add08:
    // 0x1add08: 0x3421cac1  ori         $at, $at, 0xCAC1
    ctx->pc = 0x1add08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51905);
label_1add0c:
    // 0x1add0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1add0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1add10:
    // 0x1add10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1add10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1add14:
    // 0x1add14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1add14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1add18:
    // 0x1add18: 0xc06dfac  jal         func_1B7EB0
label_1add1c:
    if (ctx->pc == 0x1ADD1Cu) {
        ctx->pc = 0x1ADD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD18u;
        // 0x1add1c: 0x26940540  addiu       $s4, $s4, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD20u;
        goto label_1add20;
    }
    ctx->pc = 0x1ADD18u;
    SET_GPR_U32(ctx, 31, 0x1ADD20u);
    ctx->pc = 0x1ADD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD18u;
    // 0x1add1c: 0x26940540  addiu       $s4, $s4, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7EB0u, 0x1ADD18u, 0x1ADD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD20u;
label_1add20:
    // 0x1add20: 0x2f21821  addu        $v1, $s7, $s2
    ctx->pc = 0x1add20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_1add24:
    // 0x1add24: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1add24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1add28:
    // 0x1add28: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1add28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1add2c:
    // 0x1add2c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_1add30:
    if (ctx->pc == 0x1ADD30u) {
        ctx->pc = 0x1ADD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD2Cu;
        // 0x1add30: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD34u;
        goto label_1add34;
    }
    ctx->pc = 0x1ADD2Cu;
    {
        const bool branch_taken_0x1add2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD2Cu;
        // 0x1add30: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add2c) {
            ctx->pc = 0x1ADC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adc98;
        }
    }
    ctx->pc = 0x1ADD34u;
label_1add34:
    // 0x1add34: 0x34048a10  ori         $a0, $zero, 0x8A10
    ctx->pc = 0x1add34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35344);
label_1add38:
    // 0x1add38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1add38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1add3c:
    // 0x1add3c: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1add3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1add40:
    // 0x1add40: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1add40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1add44:
    // 0x1add44: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1add44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1add48:
    // 0x1add48: 0xc073662  jal         func_1CD988
label_1add4c:
    if (ctx->pc == 0x1ADD4Cu) {
        ctx->pc = 0x1ADD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD48u;
        // 0x1add4c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD50u;
        goto label_1add50;
    }
    ctx->pc = 0x1ADD48u;
    SET_GPR_U32(ctx, 31, 0x1ADD50u);
    ctx->pc = 0x1ADD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD48u;
    // 0x1add4c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD988u, 0x1ADD48u, 0x1ADD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD50u;
label_1add50:
    // 0x1add50: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x1add50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1add54:
    // 0x1add54: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1add54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1add58:
    // 0x1add58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1add58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1add5c:
    // 0x1add5c: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1add5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_1add60:
    // 0x1add60: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1add60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1add64:
    // 0x1add64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1add64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1add68:
    // 0x1add68: 0x348434a0  ori         $a0, $a0, 0x34A0
    ctx->pc = 0x1add68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13472);
label_1add6c:
    // 0x1add6c: 0x3c06ffbf  lui         $a2, 0xFFBF
    ctx->pc = 0x1add6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65471 << 16));
label_1add70:
    // 0x1add70: 0x3c09000a  lui         $t1, 0xA
    ctx->pc = 0x1add70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)10 << 16));
label_1add74:
    // 0x1add74: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1add74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_1add78:
    // 0x1add78: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1add78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1add7c:
    // 0x1add7c: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x1add7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_1add80:
    // 0x1add80: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1add80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1add84:
    // 0x1add84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1add84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1add88:
    // 0x1add88: 0x34c6bfbf  ori         $a2, $a2, 0xBFBF
    ctx->pc = 0x1add88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49087);
label_1add8c:
    // 0x1add8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1add8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1add90:
    // 0x1add90: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1add90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1add94:
    // 0x1add94: 0x3529000a  ori         $t1, $t1, 0xA
    ctx->pc = 0x1add94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)10);
label_1add98:
    // 0x1add98: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x1add98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1add9c:
    // 0x1add9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1add9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adda0:
    // 0x1adda0: 0xc06876e  jal         func_1A1DB8
label_1adda4:
    if (ctx->pc == 0x1ADDA4u) {
        ctx->pc = 0x1ADDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDA0u;
        // 0x1adda4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADDA8u;
        goto label_1adda8;
    }
    ctx->pc = 0x1ADDA0u;
    SET_GPR_U32(ctx, 31, 0x1ADDA8u);
    ctx->pc = 0x1ADDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADDA0u;
    // 0x1adda4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1ADDA0u, 0x1ADDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADDA8u;
label_1adda8:
    // 0x1adda8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1adda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1addac:
    // 0x1addac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1addacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1addb0:
    // 0x1addb0: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1addb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_1addb4:
    // 0x1addb4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1addb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1addb8:
    // 0x1addb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1addb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1addbc:
    // 0x1addbc: 0x3404e340  ori         $a0, $zero, 0xE340
    ctx->pc = 0x1addbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58176);
label_1addc0:
    // 0x1addc0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1addc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1addc4:
    // 0x1addc4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1addc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1addc8:
    // 0x1addc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1addc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1addcc:
    // 0x1addcc: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1addccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1addd0:
    // 0x1addd0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1addd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1addd4:
    // 0x1addd4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1addd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1addd8:
    // 0x1addd8: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1addd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1adddc:
    // 0x1adddc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1adddcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1adde0:
    // 0x1adde0: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1adde0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1adde4:
    // 0x1adde4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1adde4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adde8:
    // 0x1adde8: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1adde8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1addec:
    // 0x1addec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1addecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1addf0:
    // 0x1addf0: 0xa3b1005c  sb          $s1, 0x5C($sp)
    ctx->pc = 0x1addf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 92), (uint8_t)GPR_U32(ctx, 17));
label_1addf4:
    // 0x1addf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1addf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1addf8:
    // 0x1addf8: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x1addf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_1addfc:
    // 0x1addfc: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1addfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ade00:
    // 0x1ade00: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ade00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ade04:
    // 0x1ade04: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ade04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1ade08:
    // 0x1ade08: 0xa0510003  sb          $s1, 0x3($v0)
    ctx->pc = 0x1ade08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 17));
label_1ade0c:
    // 0x1ade0c: 0x241200bf  addiu       $s2, $zero, 0xBF
    ctx->pc = 0x1ade0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_1ade10:
    // 0x1ade10: 0xa0510001  sb          $s1, 0x1($v0)
    ctx->pc = 0x1ade10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 17));
label_1ade14:
    // 0x1ade14: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1ade14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ade18:
    // 0x1ade18: 0xa0510002  sb          $s1, 0x2($v0)
    ctx->pc = 0x1ade18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 17));
label_1ade1c:
    // 0x1ade1c: 0x241600bf  addiu       $s6, $zero, 0xBF
    ctx->pc = 0x1ade1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_1ade20:
    // 0x1ade20: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ade20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ade24:
    // 0x1ade24: 0x241e00ff  addiu       $fp, $zero, 0xFF
    ctx->pc = 0x1ade24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ade28:
    // 0x1ade28: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x1ade28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1ade2c:
    // 0x1ade2c: 0xc06e424  jal         func_1B9090
label_1ade30:
    if (ctx->pc == 0x1ADE30u) {
        ctx->pc = 0x1ADE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE2Cu;
        // 0x1ade30: 0x8fb40080  lw          $s4, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADE34u;
        goto label_1ade34;
    }
    ctx->pc = 0x1ADE2Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE34u);
    ctx->pc = 0x1ADE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE2Cu;
    // 0x1ade30: 0x8fb40080  lw          $s4, 0x80($sp) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1ADE2Cu, 0x1ADE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE34u;
label_1ade34:
    // 0x1ade34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ade34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ade38:
    // 0x1ade38: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ade38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1ade3c:
    // 0x1ade3c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1ade3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_1ade40:
    // 0x1ade40: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ade40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ade44:
    // 0x1ade44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ade44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ade48:
    // 0x1ade48: 0x3404e150  ori         $a0, $zero, 0xE150
    ctx->pc = 0x1ade48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57680);
label_1ade4c:
    // 0x1ade4c: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1ade4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ade50:
    // 0x1ade50: 0x3c066060  lui         $a2, 0x6060
    ctx->pc = 0x1ade50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24672 << 16));
label_1ade54:
    // 0x1ade54: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1ade54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1ade58:
    // 0x1ade58: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1ade58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1ade5c:
    // 0x1ade5c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1ade5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1ade60:
    // 0x1ade60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ade60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ade64:
    // 0x1ade64: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1ade64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1ade68:
    // 0x1ade68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ade68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1ade6c:
    // 0x1ade6c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ade6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ade70:
    // 0x1ade70: 0x34c6bfff  ori         $a2, $a2, 0xBFFF
    ctx->pc = 0x1ade70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49151);
label_1ade74:
    // 0x1ade74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ade74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ade78:
    // 0x1ade78: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ade78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ade7c:
    // 0x1ade7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ade7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ade80:
    // 0x1ade80: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1ade80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ade84:
    // 0x1ade84: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1ade84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ade88:
    // 0x1ade88: 0xc06e424  jal         func_1B9090
label_1ade8c:
    if (ctx->pc == 0x1ADE8Cu) {
        ctx->pc = 0x1ADE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE88u;
        // 0x1ade8c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADE90u;
        goto label_1ade90;
    }
    ctx->pc = 0x1ADE88u;
    SET_GPR_U32(ctx, 31, 0x1ADE90u);
    ctx->pc = 0x1ADE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE88u;
    // 0x1ade8c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1ADE88u, 0x1ADE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE90u;
label_1ade90:
    // 0x1ade90: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1ade90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1ade94:
    // 0x1ade94: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ade94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ade98:
    // 0x1ade98: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1ade98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1ade9c:
    // 0x1ade9c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1ade9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1adea0:
    // 0x1adea0: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x1adea0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
label_1adea4:
    // 0x1adea4: 0xa3b20060  sb          $s2, 0x60($sp)
    ctx->pc = 0x1adea4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 18));
label_1adea8:
    // 0x1adea8: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x1adea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1adeac:
    // 0x1adeac: 0xa0710003  sb          $s1, 0x3($v1)
    ctx->pc = 0x1adeacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 17));
label_1adeb0:
    // 0x1adeb0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1adeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1adeb4:
    // 0x1adeb4: 0xa0720001  sb          $s2, 0x1($v1)
    ctx->pc = 0x1adeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 18));
label_1adeb8:
    // 0x1adeb8: 0x348435e0  ori         $a0, $a0, 0x35E0
    ctx->pc = 0x1adeb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13792);
label_1adebc:
    // 0x1adebc: 0xa0720002  sb          $s2, 0x2($v1)
    ctx->pc = 0x1adebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 18));
label_1adec0:
    // 0x1adec0: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1adec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1adec4:
    // 0x1adec4: 0x8e0335e0  lw          $v1, 0x35E0($s0)
    ctx->pc = 0x1adec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13792)));
label_1adec8:
    // 0x1adec8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1adec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1adecc:
    // 0x1adecc: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1adeccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1aded0:
    // 0x1aded0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1aded0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_1aded4:
    // 0x1aded4: 0x84620068  lh          $v0, 0x68($v1)
    ctx->pc = 0x1aded4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1aded8:
    // 0x1aded8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aded8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adedc:
    // 0x1adedc: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x1adedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_1adee0:
    // 0x1adee0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1adee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adee4:
    // 0x1adee4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1adee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1adee8:
    // 0x1adee8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1adee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1adeec:
    // 0x1adeec: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1adeecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1adef0:
    // 0x1adef0: 0x24090057  addiu       $t1, $zero, 0x57
    ctx->pc = 0x1adef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_1adef4:
    // 0x1adef4: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1adef4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1adef8:
    // 0x1adef8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1adef8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adefc:
    // 0x1adefc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1adefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1adf00:
    // 0x1adf00: 0x40f809  jalr        $v0
label_1adf04:
    if (ctx->pc == 0x1ADF04u) {
        ctx->pc = 0x1ADF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF00u;
        // 0x1adf04: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADF08u;
        goto label_1adf08;
    }
    ctx->pc = 0x1ADF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ADF08u);
        ctx->pc = 0x1ADF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF00u;
        // 0x1adf04: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADF00u, 0x1ADF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ADF08u;
label_1adf08:
    // 0x1adf08: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1adf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1adf0c:
    // 0x1adf0c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1adf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1adf10:
    // 0x1adf10: 0xa3b20064  sb          $s2, 0x64($sp)
    ctx->pc = 0x1adf10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 100), (uint8_t)GPR_U32(ctx, 18));
label_1adf14:
    // 0x1adf14: 0x348436e0  ori         $a0, $a0, 0x36E0
    ctx->pc = 0x1adf14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14048);
label_1adf18:
    // 0x1adf18: 0xa0510003  sb          $s1, 0x3($v0)
    ctx->pc = 0x1adf18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 17));
label_1adf1c:
    // 0x1adf1c: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1adf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1adf20:
    // 0x1adf20: 0xa0520002  sb          $s2, 0x2($v0)
    ctx->pc = 0x1adf20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 18));
label_1adf24:
    // 0x1adf24: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1adf24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_1adf28:
    // 0x1adf28: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1adf28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_1adf2c:
    // 0x1adf2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1adf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1adf30:
    // 0x1adf30: 0x8e0c36e0  lw          $t4, 0x36E0($s0)
    ctx->pc = 0x1adf30u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14048)));
label_1adf34:
    // 0x1adf34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1adf34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adf38:
    // 0x1adf38: 0xa0520001  sb          $s2, 0x1($v0)
    ctx->pc = 0x1adf38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 18));
label_1adf3c:
    // 0x1adf3c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1adf3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adf40:
    // 0x1adf40: 0x24090057  addiu       $t1, $zero, 0x57
    ctx->pc = 0x1adf40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_1adf44:
    // 0x1adf44: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1adf44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1adf48:
    // 0x1adf48: 0x85820068  lh          $v0, 0x68($t4)
    ctx->pc = 0x1adf48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 104)));
label_1adf4c:
    // 0x1adf4c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1adf4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adf50:
    // 0x1adf50: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x1adf50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_1adf54:
    // 0x1adf54: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1adf54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1adf58:
    // 0x1adf58: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1adf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1adf5c:
    // 0x1adf5c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1adf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1adf60:
    // 0x1adf60: 0x8d83006c  lw          $v1, 0x6C($t4)
    ctx->pc = 0x1adf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 108)));
label_1adf64:
    // 0x1adf64: 0x60f809  jalr        $v1
label_1adf68:
    if (ctx->pc == 0x1ADF68u) {
        ctx->pc = 0x1ADF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF64u;
        // 0x1adf68: 0x8fa60064  lw          $a2, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADF6Cu;
        goto label_1adf6c;
    }
    ctx->pc = 0x1ADF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ADF6Cu);
        ctx->pc = 0x1ADF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF64u;
        // 0x1adf68: 0x8fa60064  lw          $a2, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADF64u, 0x1ADF6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ADF6Cu;
label_1adf6c:
    // 0x1adf6c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1adf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1adf70:
    // 0x1adf70: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1adf70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1adf74:
    // 0x1adf74: 0x344237e0  ori         $v0, $v0, 0x37E0
    ctx->pc = 0x1adf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14304);
label_1adf78:
    // 0x1adf78: 0xe6750008  swc1        $f21, 0x8($s3)
    ctx->pc = 0x1adf78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1adf7c:
    // 0x1adf7c: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x1adf7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1adf80:
    // 0x1adf80: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1adf80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1adf84:
    // 0x1adf84: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1adf84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1adf88:
    // 0x1adf88: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1adf88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adf8c:
    // 0x1adf8c: 0xa3b60068  sb          $s6, 0x68($sp)
    ctx->pc = 0x1adf8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 22));
label_1adf90:
    // 0x1adf90: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1adf90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adf94:
    // 0x1adf94: 0xa2960001  sb          $s6, 0x1($s4)
    ctx->pc = 0x1adf94u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 22));
label_1adf98:
    // 0x1adf98: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1adf98u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1adf9c:
    // 0x1adf9c: 0xa2960002  sb          $s6, 0x2($s4)
    ctx->pc = 0x1adf9cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 22));
label_1adfa0:
    // 0x1adfa0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1adfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1adfa4:
    // 0x1adfa4: 0xa29e0003  sb          $fp, 0x3($s4)
    ctx->pc = 0x1adfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 30));
label_1adfa8:
    // 0x1adfa8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1adfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adfac:
    // 0x1adfac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1adfacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1adfb0:
    // 0x1adfb0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1adfb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1adfb4:
    // 0x1adfb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1adfb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1adfb8:
    // 0x1adfb8: 0x24090170  addiu       $t1, $zero, 0x170
    ctx->pc = 0x1adfb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
label_1adfbc:
    // 0x1adfbc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1adfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1adfc0:
    // 0x1adfc0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1adfc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_1adfc4:
    // 0x1adfc4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1adfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1adfc8:
    // 0x1adfc8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1adfc8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adfcc:
    // 0x1adfcc: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1adfccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1adfd0:
    // 0x1adfd0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1adfd0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1adfd4:
    // 0x1adfd4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1adfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1adfd8:
    // 0x1adfd8: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1adfd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1adfdc:
    // 0x1adfdc: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1adfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
label_1adfe0:
    // 0x1adfe0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1adfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1adfe4:
    // 0x1adfe4: 0xafbe0010  sw          $fp, 0x10($sp)
    ctx->pc = 0x1adfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 30));
label_1adfe8:
    // 0x1adfe8: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x1adfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
label_1adfec:
    // 0x1adfec: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1adfecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1adff0:
    // 0x1adff0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1adff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1adff4:
    // 0x1adff4: 0x60f809  jalr        $v1
label_1adff8:
    if (ctx->pc == 0x1ADFF8u) {
        ctx->pc = 0x1ADFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFF4u;
        // 0x1adff8: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADFFCu;
        goto label_1adffc;
    }
    ctx->pc = 0x1ADFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ADFFCu);
        ctx->pc = 0x1ADFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFF4u;
        // 0x1adff8: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADFF4u, 0x1ADFFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ADFFCu;
label_1adffc:
    // 0x1adffc: 0x2ee20013  sltiu       $v0, $s7, 0x13
    ctx->pc = 0x1adffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_1ae000:
    // 0x1ae000: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
label_1ae004:
    if (ctx->pc == 0x1AE004u) {
        ctx->pc = 0x1AE004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE000u;
        // 0x1ae004: 0xa3b60068  sb          $s6, 0x68($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE008u;
        goto label_1ae008;
    }
    ctx->pc = 0x1AE000u;
    {
        const bool branch_taken_0x1ae000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae000) {
            ctx->pc = 0x1AE004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE000u;
            // 0x1ae004: 0xa3b60068  sb          $s6, 0x68($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adf90;
        }
    }
    ctx->pc = 0x1AE008u;
label_1ae008:
    // 0x1ae008: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ae008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ae00c:
    // 0x1ae00c: 0xc107458  jal         func_41D160
label_1ae010:
    if (ctx->pc == 0x1AE010u) {
        ctx->pc = 0x1AE010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE00Cu;
        // 0x1ae010: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE014u;
        goto label_1ae014;
    }
    ctx->pc = 0x1AE00Cu;
    SET_GPR_U32(ctx, 31, 0x1AE014u);
    ctx->pc = 0x1AE010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE00Cu;
    // 0x1ae010: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1AE00Cu, 0x1AE014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE014u;
label_1ae014:
    // 0x1ae014: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1ae018:
    if (ctx->pc == 0x1AE018u) {
        ctx->pc = 0x1AE018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE014u;
        // 0x1ae018: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE01Cu;
        goto label_1ae01c;
    }
    ctx->pc = 0x1AE014u;
    {
        const bool branch_taken_0x1ae014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE014u;
        // 0x1ae018: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae014) {
            ctx->pc = 0x1AE05Cu;
            goto label_1ae05c;
        }
    }
    ctx->pc = 0x1AE01Cu;
label_1ae01c:
    // 0x1ae01c: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x1ae01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_1ae020:
    // 0x1ae020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ae020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae024:
    // 0x1ae024: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1ae024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1ae028:
    // 0x1ae028: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1ae028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1ae02c:
    // 0x1ae02c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ae02cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1ae030:
    // 0x1ae030: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ae030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ae034:
    // 0x1ae034: 0x34846b30  ori         $a0, $a0, 0x6B30
    ctx->pc = 0x1ae034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)27440);
label_1ae038:
    // 0x1ae038: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ae038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ae03c:
    // 0x1ae03c: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1ae03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1ae040:
    // 0x1ae040: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ae040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ae044:
    // 0x1ae044: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ae044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae048:
    // 0x1ae048: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1ae048u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1ae04c:
    // 0x1ae04c: 0x3c06020e  lui         $a2, 0x20E
    ctx->pc = 0x1ae04cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)526 << 16));
label_1ae050:
    // 0x1ae050: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1ae050u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1ae054:
    // 0x1ae054: 0xc06d8d6  jal         func_1B6358
label_1ae058:
    if (ctx->pc == 0x1AE058u) {
        ctx->pc = 0x1AE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE054u;
        // 0x1ae058: 0xe660000c  swc1        $f0, 0xC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE05Cu;
        goto label_1ae05c;
    }
    ctx->pc = 0x1AE054u;
    SET_GPR_U32(ctx, 31, 0x1AE05Cu);
    ctx->pc = 0x1AE058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE054u;
    // 0x1ae058: 0xe660000c  swc1        $f0, 0xC($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6358u, 0x1AE054u, 0x1AE05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE05Cu;
label_1ae05c:
    // 0x1ae05c: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x1ae05cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
label_1ae060:
    // 0x1ae060: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ae060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1ae064:
    // 0x1ae064: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x1ae064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1ae068:
    // 0x1ae068: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1ae068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1ae06c:
    // 0x1ae06c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1ae06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1ae070:
    // 0x1ae070: 0xae006b20  sw          $zero, 0x6B20($s0)
    ctx->pc = 0x1ae070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27424), GPR_U32(ctx, 0));
label_1ae074:
    // 0x1ae074: 0x34848d30  ori         $a0, $a0, 0x8D30
    ctx->pc = 0x1ae074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36144);
label_1ae078:
    // 0x1ae078: 0xac402930  sw          $zero, 0x2930($v0)
    ctx->pc = 0x1ae078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10544), GPR_U32(ctx, 0));
label_1ae07c:
    // 0x1ae07c: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1ae07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1ae080:
    // 0x1ae080: 0xc072af0  jal         func_1CABC0
label_1ae084:
    if (ctx->pc == 0x1AE084u) {
        ctx->pc = 0x1AE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE080u;
        // 0x1ae084: 0x24140084  addiu       $s4, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE088u;
        goto label_1ae088;
    }
    ctx->pc = 0x1AE080u;
    SET_GPR_U32(ctx, 31, 0x1AE088u);
    ctx->pc = 0x1AE084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE080u;
    // 0x1ae084: 0x24140084  addiu       $s4, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CABC0u, 0x1AE080u, 0x1AE088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE088u;
label_1ae088:
    // 0x1ae088: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ae088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae08c:
    // 0x1ae08c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ae08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ae090:
    // 0x1ae090: 0x8c46eddc  lw          $a2, -0x1224($v0)
    ctx->pc = 0x1ae090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962652)));
label_1ae094:
    // 0x1ae094: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1ae094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ae098:
    // 0x1ae098: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1ae098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1ae09c:
    // 0x1ae09c: 0x8c650094  lw          $a1, 0x94($v1)
    ctx->pc = 0x1ae09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1ae0a0:
    // 0x1ae0a0: 0xa0f809  jalr        $a1
label_1ae0a4:
    if (ctx->pc == 0x1AE0A4u) {
        ctx->pc = 0x1AE0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0A0u;
        // 0x1ae0a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE0A8u;
        goto label_1ae0a8;
    }
    ctx->pc = 0x1AE0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AE0A8u);
        ctx->pc = 0x1AE0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0A0u;
        // 0x1ae0a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE0A0u, 0x1AE0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE0A8u;
label_1ae0a8:
    // 0x1ae0a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ae0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ae0ac:
    // 0x1ae0ac: 0x8c46ec34  lw          $a2, -0x13CC($v0)
    ctx->pc = 0x1ae0acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962228)));
label_1ae0b0:
    // 0x1ae0b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1ae0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ae0b4:
    // 0x1ae0b4: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1ae0b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1ae0b8:
    // 0x1ae0b8: 0x8c650094  lw          $a1, 0x94($v1)
    ctx->pc = 0x1ae0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1ae0bc:
    // 0x1ae0bc: 0xa0f809  jalr        $a1
label_1ae0c0:
    if (ctx->pc == 0x1AE0C0u) {
        ctx->pc = 0x1AE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0BCu;
        // 0x1ae0c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE0C4u;
        goto label_1ae0c4;
    }
    ctx->pc = 0x1AE0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AE0C4u);
        ctx->pc = 0x1AE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0BCu;
        // 0x1ae0c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE0BCu, 0x1AE0C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE0C4u;
label_1ae0c4:
    // 0x1ae0c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ae0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ae0c8:
    // 0x1ae0c8: 0x8c46ecec  lw          $a2, -0x1314($v0)
    ctx->pc = 0x1ae0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
label_1ae0cc:
    // 0x1ae0cc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1ae0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ae0d0:
    // 0x1ae0d0: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1ae0d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1ae0d4:
    // 0x1ae0d4: 0x8c650094  lw          $a1, 0x94($v1)
    ctx->pc = 0x1ae0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1ae0d8:
    // 0x1ae0d8: 0xa0f809  jalr        $a1
label_1ae0dc:
    if (ctx->pc == 0x1AE0DCu) {
        ctx->pc = 0x1AE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0D8u;
        // 0x1ae0dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE0E0u;
        goto label_1ae0e0;
    }
    ctx->pc = 0x1AE0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AE0E0u);
        ctx->pc = 0x1AE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0D8u;
        // 0x1ae0dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE0D8u, 0x1AE0E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE0E0u;
label_1ae0e0:
    // 0x1ae0e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ae0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ae0e4:
    // 0x1ae0e4: 0x8c46ec8c  lw          $a2, -0x1374($v0)
    ctx->pc = 0x1ae0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962316)));
label_1ae0e8:
    // 0x1ae0e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1ae0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ae0ec:
    // 0x1ae0ec: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1ae0ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1ae0f0:
    // 0x1ae0f0: 0x8c650094  lw          $a1, 0x94($v1)
    ctx->pc = 0x1ae0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1ae0f4:
    // 0x1ae0f4: 0xa0f809  jalr        $a1
label_1ae0f8:
    if (ctx->pc == 0x1AE0F8u) {
        ctx->pc = 0x1AE0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0F4u;
        // 0x1ae0f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE0FCu;
        goto label_1ae0fc;
    }
    ctx->pc = 0x1AE0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AE0FCu);
        ctx->pc = 0x1AE0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0F4u;
        // 0x1ae0f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE0F4u, 0x1AE0FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE0FCu;
label_1ae0fc:
    // 0x1ae0fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ae0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ae100:
    // 0x1ae100: 0x8c46ee94  lw          $a2, -0x116C($v0)
    ctx->pc = 0x1ae100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962836)));
label_1ae104:
    // 0x1ae104: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1ae104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ae108:
    // 0x1ae108: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1ae108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1ae10c:
    // 0x1ae10c: 0x8c650094  lw          $a1, 0x94($v1)
    ctx->pc = 0x1ae10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1ae110:
    // 0x1ae110: 0xa0f809  jalr        $a1
label_1ae114:
    if (ctx->pc == 0x1AE114u) {
        ctx->pc = 0x1AE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE110u;
        // 0x1ae114: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE118u;
        goto label_1ae118;
    }
    ctx->pc = 0x1AE110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AE118u);
        ctx->pc = 0x1AE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE110u;
        // 0x1ae114: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE110u, 0x1AE118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE118u;
label_1ae118:
    // 0x1ae118: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ae118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ae11c:
    // 0x1ae11c: 0x8c45ebec  lw          $a1, -0x1414($v0)
    ctx->pc = 0x1ae11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962156)));
label_1ae120:
    // 0x1ae120: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ae120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ae124:
    // 0x1ae124: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1ae124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1ae128:
    // 0x1ae128: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1ae128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1ae12c:
    // 0x1ae12c: 0x40f809  jalr        $v0
label_1ae130:
    if (ctx->pc == 0x1AE130u) {
        ctx->pc = 0x1AE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE12Cu;
        // 0x1ae130: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE134u;
        goto label_1ae134;
    }
    ctx->pc = 0x1AE12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AE134u);
        ctx->pc = 0x1AE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE12Cu;
        // 0x1ae130: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE12Cu, 0x1AE134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE134u;
label_1ae134:
    // 0x1ae134: 0xc06b936  jal         func_1AE4D8
label_1ae138:
    if (ctx->pc == 0x1AE138u) {
        ctx->pc = 0x1AE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE134u;
        // 0x1ae138: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE13Cu;
        goto label_1ae13c;
    }
    ctx->pc = 0x1AE134u;
    SET_GPR_U32(ctx, 31, 0x1AE13Cu);
    ctx->pc = 0x1AE138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE134u;
    // 0x1ae138: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE4D8u, 0x1AE134u, 0x1AE13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE13Cu;
label_1ae13c:
    // 0x1ae13c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1ae13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1ae140:
    // 0x1ae140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ae140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae144:
    // 0x1ae144: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x1ae144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1ae148:
    // 0x1ae148: 0xae0377b4  sw          $v1, 0x77B4($s0)
    ctx->pc = 0x1ae148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 30644), GPR_U32(ctx, 3));
label_1ae14c:
    // 0x1ae14c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ae14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ae150:
    // 0x1ae150: 0x8c51489c  lw          $s1, 0x489C($v0)
    ctx->pc = 0x1ae150u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1ae154:
    // 0x1ae154: 0xae0377ac  sw          $v1, 0x77AC($s0)
    ctx->pc = 0x1ae154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 30636), GPR_U32(ctx, 3));
label_1ae158:
    // 0x1ae158: 0xae0377a4  sw          $v1, 0x77A4($s0)
    ctx->pc = 0x1ae158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 30628), GPR_U32(ctx, 3));
label_1ae15c:
    // 0x1ae15c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ae160:
    // 0x1ae160: 0xae0077a8  sw          $zero, 0x77A8($s0)
    ctx->pc = 0x1ae160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 30632), GPR_U32(ctx, 0));
label_1ae164:
    // 0x1ae164: 0xc136ad6  jal         func_4DAB58
label_1ae168:
    if (ctx->pc == 0x1AE168u) {
        ctx->pc = 0x1AE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE164u;
        // 0x1ae168: 0xae4025d8  sw          $zero, 0x25D8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 9688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE16Cu;
        goto label_1ae16c;
    }
    ctx->pc = 0x1AE164u;
    SET_GPR_U32(ctx, 31, 0x1AE16Cu);
    ctx->pc = 0x1AE168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE164u;
    // 0x1ae168: 0xae4025d8  sw          $zero, 0x25D8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 9688), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x1AE164u, 0x1AE16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE16Cu;
label_1ae16c:
    // 0x1ae16c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae170:
    // 0x1ae170: 0xc136ad4  jal         func_4DAB50
label_1ae174:
    if (ctx->pc == 0x1AE174u) {
        ctx->pc = 0x1AE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE170u;
        // 0x1ae174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE178u;
        goto label_1ae178;
    }
    ctx->pc = 0x1AE170u;
    SET_GPR_U32(ctx, 31, 0x1AE178u);
    ctx->pc = 0x1AE174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE170u;
    // 0x1ae174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x1AE170u, 0x1AE178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE178u;
label_1ae178:
    // 0x1ae178: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x1ae178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1ae17c:
    // 0x1ae17c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1ae17cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1ae180:
    // 0x1ae180: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ae180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ae184:
    // 0x1ae184: 0x2c42003c  sltiu       $v0, $v0, 0x3C
    ctx->pc = 0x1ae184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_1ae188:
    // 0x1ae188: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1ae18c:
    if (ctx->pc == 0x1AE18Cu) {
        ctx->pc = 0x1AE18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE188u;
        // 0x1ae18c: 0x8fb00084  lw          $s0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE190u;
        goto label_1ae190;
    }
    ctx->pc = 0x1AE188u;
    {
        const bool branch_taken_0x1ae188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE188u;
        // 0x1ae18c: 0x8fb00084  lw          $s0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae188) {
            ctx->pc = 0x1AE1C4u;
            goto label_1ae1c4;
        }
    }
    ctx->pc = 0x1AE190u;
label_1ae190:
    // 0x1ae190: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ae190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ae194:
    // 0x1ae194: 0x8c71489c  lw          $s1, 0x489C($v1)
    ctx->pc = 0x1ae194u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1ae198:
    // 0x1ae198: 0xc136ad6  jal         func_4DAB58
label_1ae19c:
    if (ctx->pc == 0x1AE19Cu) {
        ctx->pc = 0x1AE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE198u;
        // 0x1ae19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE1A0u;
        goto label_1ae1a0;
    }
    ctx->pc = 0x1AE198u;
    SET_GPR_U32(ctx, 31, 0x1AE1A0u);
    ctx->pc = 0x1AE19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE198u;
    // 0x1ae19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x1AE198u, 0x1AE1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1A0u;
label_1ae1a0:
    // 0x1ae1a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae1a4:
    // 0x1ae1a4: 0xc136ad4  jal         func_4DAB50
label_1ae1a8:
    if (ctx->pc == 0x1AE1A8u) {
        ctx->pc = 0x1AE1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1A4u;
        // 0x1ae1a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE1ACu;
        goto label_1ae1ac;
    }
    ctx->pc = 0x1AE1A4u;
    SET_GPR_U32(ctx, 31, 0x1AE1ACu);
    ctx->pc = 0x1AE1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1A4u;
    // 0x1ae1a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x1AE1A4u, 0x1AE1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1ACu;
label_1ae1ac:
    // 0x1ae1ac: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x1ae1acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1ae1b0:
    // 0x1ae1b0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1ae1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1ae1b4:
    // 0x1ae1b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ae1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ae1b8:
    // 0x1ae1b8: 0x2c420046  sltiu       $v0, $v0, 0x46
    ctx->pc = 0x1ae1b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
label_1ae1bc:
    // 0x1ae1bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ae1bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae1c0:
    // 0x1ae1c0: 0x8fb00084  lw          $s0, 0x84($sp)
    ctx->pc = 0x1ae1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_1ae1c4:
    // 0x1ae1c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ae1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1ae1c8:
    // 0x1ae1c8: 0xa25325d5  sb          $s3, 0x25D5($s2)
    ctx->pc = 0x1ae1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9685), (uint8_t)GPR_U32(ctx, 19));
label_1ae1cc:
    // 0x1ae1cc: 0x34429130  ori         $v0, $v0, 0x9130
    ctx->pc = 0x1ae1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37168);
label_1ae1d0:
    // 0x1ae1d0: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1ae1d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ae1d4:
    // 0x1ae1d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ae1d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae1d8:
    // 0x1ae1d8: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x1ae1d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1ae1dc:
    // 0x1ae1dc: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1ae1dcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1ae1e0:
    // 0x1ae1e0: 0x3c170055  lui         $s7, 0x55
    ctx->pc = 0x1ae1e0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)85 << 16));
label_1ae1e4:
    // 0x1ae1e4: 0x3c160055  lui         $s6, 0x55
    ctx->pc = 0x1ae1e4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)85 << 16));
label_1ae1e8:
    // 0x1ae1e8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1ae1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae1ec:
    // 0x1ae1ec: 0x0  nop
    ctx->pc = 0x1ae1ecu;
    // NOP
label_1ae1f0:
    // 0x1ae1f0: 0x928225d5  lbu         $v0, 0x25D5($s4)
    ctx->pc = 0x1ae1f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 9685)));
label_1ae1f4:
    // 0x1ae1f4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1ae1f8:
    if (ctx->pc == 0x1AE1F8u) {
        ctx->pc = 0x1AE1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1F4u;
        // 0x1ae1f8: 0x8fcc27e4  lw          $t4, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE1FCu;
        goto label_1ae1fc;
    }
    ctx->pc = 0x1AE1F4u;
    {
        const bool branch_taken_0x1ae1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1F4u;
        // 0x1ae1f8: 0x8fcc27e4  lw          $t4, 0x27E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1f4) {
            ctx->pc = 0x1AE268u;
            goto label_1ae268;
        }
    }
    ctx->pc = 0x1AE1FCu;
label_1ae1fc:
    // 0x1ae1fc: 0x24064620  addiu       $a2, $zero, 0x4620
    ctx->pc = 0x1ae1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17952));
label_1ae200:
    // 0x1ae200: 0x26e54608  addiu       $a1, $s7, 0x4608
    ctx->pc = 0x1ae200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 17928));
label_1ae204:
    // 0x1ae204: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ae204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ae208:
    // 0x1ae208: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ae208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ae20c:
    // 0x1ae20c: 0x26c84618  addiu       $t0, $s6, 0x4618
    ctx->pc = 0x1ae20cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 17944));
label_1ae210:
    // 0x1ae210: 0x240901a6  addiu       $t1, $zero, 0x1A6
    ctx->pc = 0x1ae210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
label_1ae214:
    // 0x1ae214: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ae214u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae218:
    // 0x1ae218: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ae218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ae21c:
    // 0x1ae21c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ae21cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae220:
    // 0x1ae220: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ae220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ae224:
    // 0x1ae224: 0x40f809  jalr        $v0
label_1ae228:
    if (ctx->pc == 0x1AE228u) {
        ctx->pc = 0x1AE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE224u;
        // 0x1ae228: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE22Cu;
        goto label_1ae22c;
    }
    ctx->pc = 0x1AE224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AE22Cu);
        ctx->pc = 0x1AE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE224u;
        // 0x1ae228: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE224u, 0x1AE22Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE22Cu;
label_1ae22c:
    // 0x1ae22c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ae22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae230:
    // 0x1ae230: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
label_1ae234:
    if (ctx->pc == 0x1AE234u) {
        ctx->pc = 0x1AE234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE230u;
        // 0x1ae234: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE238u;
        goto label_1ae238;
    }
    ctx->pc = 0x1AE230u;
    {
        const bool branch_taken_0x1ae230 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae230) {
            ctx->pc = 0x1AE234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE230u;
            // 0x1ae234: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE248u;
            goto label_1ae248;
        }
    }
    ctx->pc = 0x1AE238u;
label_1ae238:
    // 0x1ae238: 0xc083f60  jal         func_20FD80
label_1ae23c:
    if (ctx->pc == 0x1AE23Cu) {
        ctx->pc = 0x1AE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE238u;
        // 0x1ae23c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE240u;
        goto label_1ae240;
    }
    ctx->pc = 0x1AE238u;
    SET_GPR_U32(ctx, 31, 0x1AE240u);
    ctx->pc = 0x1AE23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE238u;
    // 0x1ae23c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FD80u, 0x1AE238u, 0x1AE240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE240u;
label_1ae240:
    // 0x1ae240: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ae240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae244:
    // 0x1ae244: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1ae244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_1ae248:
    // 0x1ae248: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ae248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ae24c:
    // 0x1ae24c: 0x8cc24120  lw          $v0, 0x4120($a2)
    ctx->pc = 0x1ae24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16672)));
label_1ae250:
    // 0x1ae250: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1ae250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_1ae254:
    // 0x1ae254: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x1ae254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_1ae258:
    // 0x1ae258: 0x60f809  jalr        $v1
label_1ae25c:
    if (ctx->pc == 0x1AE25Cu) {
        ctx->pc = 0x1AE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE258u;
        // 0x1ae25c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE260u;
        goto label_1ae260;
    }
    ctx->pc = 0x1AE258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AE260u);
        ctx->pc = 0x1AE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE258u;
        // 0x1ae25c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE258u, 0x1AE260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE260u;
label_1ae260:
    // 0x1ae260: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ae264:
    if (ctx->pc == 0x1AE264u) {
        ctx->pc = 0x1AE264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE260u;
        // 0x1ae264: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE268u;
        goto label_1ae268;
    }
    ctx->pc = 0x1AE260u;
    {
        const bool branch_taken_0x1ae260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE260u;
        // 0x1ae264: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae260) {
            ctx->pc = 0x1AE270u;
            goto label_1ae270;
        }
    }
    ctx->pc = 0x1AE268u;
label_1ae268:
    // 0x1ae268: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1ae268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_1ae26c:
    // 0x1ae26c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ae26cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ae270:
    // 0x1ae270: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ae270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1ae274:
    // 0x1ae274: 0x26524a50  addiu       $s2, $s2, 0x4A50
    ctx->pc = 0x1ae274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 19024));
label_1ae278:
    // 0x1ae278: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x1ae278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ae27c:
    // 0x1ae27c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_1ae280:
    if (ctx->pc == 0x1AE280u) {
        ctx->pc = 0x1AE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE27Cu;
        // 0x1ae280: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE284u;
        goto label_1ae284;
    }
    ctx->pc = 0x1AE27Cu;
    {
        const bool branch_taken_0x1ae27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE27Cu;
        // 0x1ae280: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae27c) {
            ctx->pc = 0x1AE1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae1f0;
        }
    }
    ctx->pc = 0x1AE284u;
label_1ae284:
    // 0x1ae284: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ae284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1ae288:
    // 0x1ae288: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ae288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ae28c:
    // 0x1ae28c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ae28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1ae290:
    // 0x1ae290: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x1ae290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1ae294:
    // 0x1ae294: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1ae294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1ae298:
    // 0x1ae298: 0xac40111c  sw          $zero, 0x111C($v0)
    ctx->pc = 0x1ae298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4380), GPR_U32(ctx, 0));
label_1ae29c:
    // 0x1ae29c: 0xac401120  sw          $zero, 0x1120($v0)
    ctx->pc = 0x1ae29cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4384), GPR_U32(ctx, 0));
label_1ae2a0:
    // 0x1ae2a0: 0xc107444  jal         func_41D110
label_1ae2a4:
    if (ctx->pc == 0x1AE2A4u) {
        ctx->pc = 0x1AE2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2A0u;
        // 0x1ae2a4: 0xac4010d0  sw          $zero, 0x10D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE2A8u;
        goto label_1ae2a8;
    }
    ctx->pc = 0x1AE2A0u;
    SET_GPR_U32(ctx, 31, 0x1AE2A8u);
    ctx->pc = 0x1AE2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE2A0u;
    // 0x1ae2a4: 0xac4010d0  sw          $zero, 0x10D0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4304), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x1AE2A0u, 0x1AE2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE2A8u;
label_1ae2a8:
    // 0x1ae2a8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1ae2ac:
    if (ctx->pc == 0x1AE2ACu) {
        ctx->pc = 0x1AE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2A8u;
        // 0x1ae2ac: 0x3404e650  ori         $a0, $zero, 0xE650 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58960);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE2B0u;
        goto label_1ae2b0;
    }
    ctx->pc = 0x1AE2A8u;
    {
        const bool branch_taken_0x1ae2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2A8u;
        // 0x1ae2ac: 0x3404e650  ori         $a0, $zero, 0xE650 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae2a8) {
            ctx->pc = 0x1AE318u;
            goto label_1ae318;
        }
    }
    ctx->pc = 0x1AE2B0u;
label_1ae2b0:
    // 0x1ae2b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1ae2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ae2b4:
    // 0x1ae2b4: 0xc06780c  jal         func_19E030
label_1ae2b8:
    if (ctx->pc == 0x1AE2B8u) {
        ctx->pc = 0x1AE2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2B4u;
        // 0x1ae2b8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE2BCu;
        goto label_1ae2bc;
    }
    ctx->pc = 0x1AE2B4u;
    SET_GPR_U32(ctx, 31, 0x1AE2BCu);
    ctx->pc = 0x1AE2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE2B4u;
    // 0x1ae2b8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E030u, 0x1AE2B4u, 0x1AE2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE2BCu;
label_1ae2bc:
    // 0x1ae2bc: 0x240300f5  addiu       $v1, $zero, 0xF5
    ctx->pc = 0x1ae2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
label_1ae2c0:
    // 0x1ae2c0: 0x27a2006c  addiu       $v0, $sp, 0x6C
    ctx->pc = 0x1ae2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1ae2c4:
    // 0x1ae2c4: 0xa3a3006c  sb          $v1, 0x6C($sp)
    ctx->pc = 0x1ae2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 108), (uint8_t)GPR_U32(ctx, 3));
label_1ae2c8:
    // 0x1ae2c8: 0x240400b8  addiu       $a0, $zero, 0xB8
    ctx->pc = 0x1ae2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_1ae2cc:
    // 0x1ae2cc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1ae2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ae2d0:
    // 0x1ae2d0: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x1ae2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
label_1ae2d4:
    // 0x1ae2d4: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1ae2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_1ae2d8:
    // 0x1ae2d8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1ae2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1ae2dc:
    // 0x1ae2dc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1ae2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1ae2e0:
    // 0x1ae2e0: 0x34848ee0  ori         $a0, $a0, 0x8EE0
    ctx->pc = 0x1ae2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36576);
label_1ae2e4:
    // 0x1ae2e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ae2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ae2e8:
    // 0x1ae2e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ae2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ae2ec:
    // 0x1ae2ec: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1ae2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1ae2f0:
    // 0x1ae2f0: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x1ae2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_1ae2f4:
    // 0x1ae2f4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1ae2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ae2f8:
    // 0x1ae2f8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ae2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ae2fc:
    // 0x1ae2fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ae2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae300:
    // 0x1ae300: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ae300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae304:
    // 0x1ae304: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ae304u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae308:
    // 0x1ae308: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1ae308u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ae30c:
    // 0x1ae30c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ae30cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae310:
    // 0x1ae310: 0xc06e424  jal         func_1B9090
label_1ae314:
    if (ctx->pc == 0x1AE314u) {
        ctx->pc = 0x1AE314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE310u;
        // 0x1ae314: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE318u;
        goto label_1ae318;
    }
    ctx->pc = 0x1AE310u;
    SET_GPR_U32(ctx, 31, 0x1AE318u);
    ctx->pc = 0x1AE314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE310u;
    // 0x1ae314: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1AE310u, 0x1AE318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE318u;
label_1ae318:
    // 0x1ae318: 0xc06c7ce  jal         func_1B1F38
label_1ae31c:
    if (ctx->pc == 0x1AE31Cu) {
        ctx->pc = 0x1AE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE318u;
        // 0x1ae31c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE320u;
        goto label_1ae320;
    }
    ctx->pc = 0x1AE318u;
    SET_GPR_U32(ctx, 31, 0x1AE320u);
    ctx->pc = 0x1AE31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE318u;
    // 0x1ae31c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F38u, 0x1AE318u, 0x1AE320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE320u;
label_1ae320:
    // 0x1ae320: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ae320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ae324:
    // 0x1ae324: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1ae324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1ae328:
    // 0x1ae328: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x1ae328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1ae32c:
    // 0x1ae32c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1ae32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1ae330:
    // 0x1ae330: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1ae330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1ae334:
    // 0x1ae334: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1ae334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1ae338:
    // 0x1ae338: 0x9444033a  lhu         $a0, 0x33A($v0)
    ctx->pc = 0x1ae338u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 826)));
label_1ae33c:
    // 0x1ae33c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1ae33cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1ae340:
    // 0x1ae340: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1ae340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1ae344:
    // 0x1ae344: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1ae344u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1ae348:
    // 0x1ae348: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x1ae348u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1ae34c:
    // 0x1ae34c: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x1ae34cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1ae350:
    // 0x1ae350: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x1ae350u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1ae354:
    // 0x1ae354: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1ae354u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1ae358:
    // 0x1ae358: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ae358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ae35c:
    // 0x1ae35c: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x1ae35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1ae360:
    // 0x1ae360: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x1ae360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1ae364:
    // 0x1ae364: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x1ae364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1ae368:
    // 0x1ae368: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1ae368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ae36c:
    // 0x1ae36c: 0xa46425d2  sh          $a0, 0x25D2($v1)
    ctx->pc = 0x1ae36cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9682), (uint16_t)GPR_U32(ctx, 4));
label_1ae370:
    // 0x1ae370: 0x3e00008  jr          $ra
label_1ae374:
    if (ctx->pc == 0x1AE374u) {
        ctx->pc = 0x1AE374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE370u;
        // 0x1ae374: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE378u;
        goto label_fallthrough_0x1ae370;
    }
    ctx->pc = 0x1AE370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE370u;
        // 0x1ae374: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ae370:
    ctx->pc = 0x1AE378u;
}
