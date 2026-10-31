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

// Function: sub_001FF598
// Address: 0x1ff598 - 0x200978
void sub_001FF598_0x1ff598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF598_0x1ff598");
#endif

    switch (ctx->pc) {
        case 0x1ff598u: goto label_1ff598;
        case 0x1ff59cu: goto label_1ff59c;
        case 0x1ff5a0u: goto label_1ff5a0;
        case 0x1ff5a4u: goto label_1ff5a4;
        case 0x1ff5a8u: goto label_1ff5a8;
        case 0x1ff5acu: goto label_1ff5ac;
        case 0x1ff5b0u: goto label_1ff5b0;
        case 0x1ff5b4u: goto label_1ff5b4;
        case 0x1ff5b8u: goto label_1ff5b8;
        case 0x1ff5bcu: goto label_1ff5bc;
        case 0x1ff5c0u: goto label_1ff5c0;
        case 0x1ff5c4u: goto label_1ff5c4;
        case 0x1ff5c8u: goto label_1ff5c8;
        case 0x1ff5ccu: goto label_1ff5cc;
        case 0x1ff5d0u: goto label_1ff5d0;
        case 0x1ff5d4u: goto label_1ff5d4;
        case 0x1ff5d8u: goto label_1ff5d8;
        case 0x1ff5dcu: goto label_1ff5dc;
        case 0x1ff5e0u: goto label_1ff5e0;
        case 0x1ff5e4u: goto label_1ff5e4;
        case 0x1ff5e8u: goto label_1ff5e8;
        case 0x1ff5ecu: goto label_1ff5ec;
        case 0x1ff5f0u: goto label_1ff5f0;
        case 0x1ff5f4u: goto label_1ff5f4;
        case 0x1ff5f8u: goto label_1ff5f8;
        case 0x1ff5fcu: goto label_1ff5fc;
        case 0x1ff600u: goto label_1ff600;
        case 0x1ff604u: goto label_1ff604;
        case 0x1ff608u: goto label_1ff608;
        case 0x1ff60cu: goto label_1ff60c;
        case 0x1ff610u: goto label_1ff610;
        case 0x1ff614u: goto label_1ff614;
        case 0x1ff618u: goto label_1ff618;
        case 0x1ff61cu: goto label_1ff61c;
        case 0x1ff620u: goto label_1ff620;
        case 0x1ff624u: goto label_1ff624;
        case 0x1ff628u: goto label_1ff628;
        case 0x1ff62cu: goto label_1ff62c;
        case 0x1ff630u: goto label_1ff630;
        case 0x1ff634u: goto label_1ff634;
        case 0x1ff638u: goto label_1ff638;
        case 0x1ff63cu: goto label_1ff63c;
        case 0x1ff640u: goto label_1ff640;
        case 0x1ff644u: goto label_1ff644;
        case 0x1ff648u: goto label_1ff648;
        case 0x1ff64cu: goto label_1ff64c;
        case 0x1ff650u: goto label_1ff650;
        case 0x1ff654u: goto label_1ff654;
        case 0x1ff658u: goto label_1ff658;
        case 0x1ff65cu: goto label_1ff65c;
        case 0x1ff660u: goto label_1ff660;
        case 0x1ff664u: goto label_1ff664;
        case 0x1ff668u: goto label_1ff668;
        case 0x1ff66cu: goto label_1ff66c;
        case 0x1ff670u: goto label_1ff670;
        case 0x1ff674u: goto label_1ff674;
        case 0x1ff678u: goto label_1ff678;
        case 0x1ff67cu: goto label_1ff67c;
        case 0x1ff680u: goto label_1ff680;
        case 0x1ff684u: goto label_1ff684;
        case 0x1ff688u: goto label_1ff688;
        case 0x1ff68cu: goto label_1ff68c;
        case 0x1ff690u: goto label_1ff690;
        case 0x1ff694u: goto label_1ff694;
        case 0x1ff698u: goto label_1ff698;
        case 0x1ff69cu: goto label_1ff69c;
        case 0x1ff6a0u: goto label_1ff6a0;
        case 0x1ff6a4u: goto label_1ff6a4;
        case 0x1ff6a8u: goto label_1ff6a8;
        case 0x1ff6acu: goto label_1ff6ac;
        case 0x1ff6b0u: goto label_1ff6b0;
        case 0x1ff6b4u: goto label_1ff6b4;
        case 0x1ff6b8u: goto label_1ff6b8;
        case 0x1ff6bcu: goto label_1ff6bc;
        case 0x1ff6c0u: goto label_1ff6c0;
        case 0x1ff6c4u: goto label_1ff6c4;
        case 0x1ff6c8u: goto label_1ff6c8;
        case 0x1ff6ccu: goto label_1ff6cc;
        case 0x1ff6d0u: goto label_1ff6d0;
        case 0x1ff6d4u: goto label_1ff6d4;
        case 0x1ff6d8u: goto label_1ff6d8;
        case 0x1ff6dcu: goto label_1ff6dc;
        case 0x1ff6e0u: goto label_1ff6e0;
        case 0x1ff6e4u: goto label_1ff6e4;
        case 0x1ff6e8u: goto label_1ff6e8;
        case 0x1ff6ecu: goto label_1ff6ec;
        case 0x1ff6f0u: goto label_1ff6f0;
        case 0x1ff6f4u: goto label_1ff6f4;
        case 0x1ff6f8u: goto label_1ff6f8;
        case 0x1ff6fcu: goto label_1ff6fc;
        case 0x1ff700u: goto label_1ff700;
        case 0x1ff704u: goto label_1ff704;
        case 0x1ff708u: goto label_1ff708;
        case 0x1ff70cu: goto label_1ff70c;
        case 0x1ff710u: goto label_1ff710;
        case 0x1ff714u: goto label_1ff714;
        case 0x1ff718u: goto label_1ff718;
        case 0x1ff71cu: goto label_1ff71c;
        case 0x1ff720u: goto label_1ff720;
        case 0x1ff724u: goto label_1ff724;
        case 0x1ff728u: goto label_1ff728;
        case 0x1ff72cu: goto label_1ff72c;
        case 0x1ff730u: goto label_1ff730;
        case 0x1ff734u: goto label_1ff734;
        case 0x1ff738u: goto label_1ff738;
        case 0x1ff73cu: goto label_1ff73c;
        case 0x1ff740u: goto label_1ff740;
        case 0x1ff744u: goto label_1ff744;
        case 0x1ff748u: goto label_1ff748;
        case 0x1ff74cu: goto label_1ff74c;
        case 0x1ff750u: goto label_1ff750;
        case 0x1ff754u: goto label_1ff754;
        case 0x1ff758u: goto label_1ff758;
        case 0x1ff75cu: goto label_1ff75c;
        case 0x1ff760u: goto label_1ff760;
        case 0x1ff764u: goto label_1ff764;
        case 0x1ff768u: goto label_1ff768;
        case 0x1ff76cu: goto label_1ff76c;
        case 0x1ff770u: goto label_1ff770;
        case 0x1ff774u: goto label_1ff774;
        case 0x1ff778u: goto label_1ff778;
        case 0x1ff77cu: goto label_1ff77c;
        case 0x1ff780u: goto label_1ff780;
        case 0x1ff784u: goto label_1ff784;
        case 0x1ff788u: goto label_1ff788;
        case 0x1ff78cu: goto label_1ff78c;
        case 0x1ff790u: goto label_1ff790;
        case 0x1ff794u: goto label_1ff794;
        case 0x1ff798u: goto label_1ff798;
        case 0x1ff79cu: goto label_1ff79c;
        case 0x1ff7a0u: goto label_1ff7a0;
        case 0x1ff7a4u: goto label_1ff7a4;
        case 0x1ff7a8u: goto label_1ff7a8;
        case 0x1ff7acu: goto label_1ff7ac;
        case 0x1ff7b0u: goto label_1ff7b0;
        case 0x1ff7b4u: goto label_1ff7b4;
        case 0x1ff7b8u: goto label_1ff7b8;
        case 0x1ff7bcu: goto label_1ff7bc;
        case 0x1ff7c0u: goto label_1ff7c0;
        case 0x1ff7c4u: goto label_1ff7c4;
        case 0x1ff7c8u: goto label_1ff7c8;
        case 0x1ff7ccu: goto label_1ff7cc;
        case 0x1ff7d0u: goto label_1ff7d0;
        case 0x1ff7d4u: goto label_1ff7d4;
        case 0x1ff7d8u: goto label_1ff7d8;
        case 0x1ff7dcu: goto label_1ff7dc;
        case 0x1ff7e0u: goto label_1ff7e0;
        case 0x1ff7e4u: goto label_1ff7e4;
        case 0x1ff7e8u: goto label_1ff7e8;
        case 0x1ff7ecu: goto label_1ff7ec;
        case 0x1ff7f0u: goto label_1ff7f0;
        case 0x1ff7f4u: goto label_1ff7f4;
        case 0x1ff7f8u: goto label_1ff7f8;
        case 0x1ff7fcu: goto label_1ff7fc;
        case 0x1ff800u: goto label_1ff800;
        case 0x1ff804u: goto label_1ff804;
        case 0x1ff808u: goto label_1ff808;
        case 0x1ff80cu: goto label_1ff80c;
        case 0x1ff810u: goto label_1ff810;
        case 0x1ff814u: goto label_1ff814;
        case 0x1ff818u: goto label_1ff818;
        case 0x1ff81cu: goto label_1ff81c;
        case 0x1ff820u: goto label_1ff820;
        case 0x1ff824u: goto label_1ff824;
        case 0x1ff828u: goto label_1ff828;
        case 0x1ff82cu: goto label_1ff82c;
        case 0x1ff830u: goto label_1ff830;
        case 0x1ff834u: goto label_1ff834;
        case 0x1ff838u: goto label_1ff838;
        case 0x1ff83cu: goto label_1ff83c;
        case 0x1ff840u: goto label_1ff840;
        case 0x1ff844u: goto label_1ff844;
        case 0x1ff848u: goto label_1ff848;
        case 0x1ff84cu: goto label_1ff84c;
        case 0x1ff850u: goto label_1ff850;
        case 0x1ff854u: goto label_1ff854;
        case 0x1ff858u: goto label_1ff858;
        case 0x1ff85cu: goto label_1ff85c;
        case 0x1ff860u: goto label_1ff860;
        case 0x1ff864u: goto label_1ff864;
        case 0x1ff868u: goto label_1ff868;
        case 0x1ff86cu: goto label_1ff86c;
        case 0x1ff870u: goto label_1ff870;
        case 0x1ff874u: goto label_1ff874;
        case 0x1ff878u: goto label_1ff878;
        case 0x1ff87cu: goto label_1ff87c;
        case 0x1ff880u: goto label_1ff880;
        case 0x1ff884u: goto label_1ff884;
        case 0x1ff888u: goto label_1ff888;
        case 0x1ff88cu: goto label_1ff88c;
        case 0x1ff890u: goto label_1ff890;
        case 0x1ff894u: goto label_1ff894;
        case 0x1ff898u: goto label_1ff898;
        case 0x1ff89cu: goto label_1ff89c;
        case 0x1ff8a0u: goto label_1ff8a0;
        case 0x1ff8a4u: goto label_1ff8a4;
        case 0x1ff8a8u: goto label_1ff8a8;
        case 0x1ff8acu: goto label_1ff8ac;
        case 0x1ff8b0u: goto label_1ff8b0;
        case 0x1ff8b4u: goto label_1ff8b4;
        case 0x1ff8b8u: goto label_1ff8b8;
        case 0x1ff8bcu: goto label_1ff8bc;
        case 0x1ff8c0u: goto label_1ff8c0;
        case 0x1ff8c4u: goto label_1ff8c4;
        case 0x1ff8c8u: goto label_1ff8c8;
        case 0x1ff8ccu: goto label_1ff8cc;
        case 0x1ff8d0u: goto label_1ff8d0;
        case 0x1ff8d4u: goto label_1ff8d4;
        case 0x1ff8d8u: goto label_1ff8d8;
        case 0x1ff8dcu: goto label_1ff8dc;
        case 0x1ff8e0u: goto label_1ff8e0;
        case 0x1ff8e4u: goto label_1ff8e4;
        case 0x1ff8e8u: goto label_1ff8e8;
        case 0x1ff8ecu: goto label_1ff8ec;
        case 0x1ff8f0u: goto label_1ff8f0;
        case 0x1ff8f4u: goto label_1ff8f4;
        case 0x1ff8f8u: goto label_1ff8f8;
        case 0x1ff8fcu: goto label_1ff8fc;
        case 0x1ff900u: goto label_1ff900;
        case 0x1ff904u: goto label_1ff904;
        case 0x1ff908u: goto label_1ff908;
        case 0x1ff90cu: goto label_1ff90c;
        case 0x1ff910u: goto label_1ff910;
        case 0x1ff914u: goto label_1ff914;
        case 0x1ff918u: goto label_1ff918;
        case 0x1ff91cu: goto label_1ff91c;
        case 0x1ff920u: goto label_1ff920;
        case 0x1ff924u: goto label_1ff924;
        case 0x1ff928u: goto label_1ff928;
        case 0x1ff92cu: goto label_1ff92c;
        case 0x1ff930u: goto label_1ff930;
        case 0x1ff934u: goto label_1ff934;
        case 0x1ff938u: goto label_1ff938;
        case 0x1ff93cu: goto label_1ff93c;
        case 0x1ff940u: goto label_1ff940;
        case 0x1ff944u: goto label_1ff944;
        case 0x1ff948u: goto label_1ff948;
        case 0x1ff94cu: goto label_1ff94c;
        case 0x1ff950u: goto label_1ff950;
        case 0x1ff954u: goto label_1ff954;
        case 0x1ff958u: goto label_1ff958;
        case 0x1ff95cu: goto label_1ff95c;
        case 0x1ff960u: goto label_1ff960;
        case 0x1ff964u: goto label_1ff964;
        case 0x1ff968u: goto label_1ff968;
        case 0x1ff96cu: goto label_1ff96c;
        case 0x1ff970u: goto label_1ff970;
        case 0x1ff974u: goto label_1ff974;
        case 0x1ff978u: goto label_1ff978;
        case 0x1ff97cu: goto label_1ff97c;
        case 0x1ff980u: goto label_1ff980;
        case 0x1ff984u: goto label_1ff984;
        case 0x1ff988u: goto label_1ff988;
        case 0x1ff98cu: goto label_1ff98c;
        case 0x1ff990u: goto label_1ff990;
        case 0x1ff994u: goto label_1ff994;
        case 0x1ff998u: goto label_1ff998;
        case 0x1ff99cu: goto label_1ff99c;
        case 0x1ff9a0u: goto label_1ff9a0;
        case 0x1ff9a4u: goto label_1ff9a4;
        case 0x1ff9a8u: goto label_1ff9a8;
        case 0x1ff9acu: goto label_1ff9ac;
        case 0x1ff9b0u: goto label_1ff9b0;
        case 0x1ff9b4u: goto label_1ff9b4;
        case 0x1ff9b8u: goto label_1ff9b8;
        case 0x1ff9bcu: goto label_1ff9bc;
        case 0x1ff9c0u: goto label_1ff9c0;
        case 0x1ff9c4u: goto label_1ff9c4;
        case 0x1ff9c8u: goto label_1ff9c8;
        case 0x1ff9ccu: goto label_1ff9cc;
        case 0x1ff9d0u: goto label_1ff9d0;
        case 0x1ff9d4u: goto label_1ff9d4;
        case 0x1ff9d8u: goto label_1ff9d8;
        case 0x1ff9dcu: goto label_1ff9dc;
        case 0x1ff9e0u: goto label_1ff9e0;
        case 0x1ff9e4u: goto label_1ff9e4;
        case 0x1ff9e8u: goto label_1ff9e8;
        case 0x1ff9ecu: goto label_1ff9ec;
        case 0x1ff9f0u: goto label_1ff9f0;
        case 0x1ff9f4u: goto label_1ff9f4;
        case 0x1ff9f8u: goto label_1ff9f8;
        case 0x1ff9fcu: goto label_1ff9fc;
        case 0x1ffa00u: goto label_1ffa00;
        case 0x1ffa04u: goto label_1ffa04;
        case 0x1ffa08u: goto label_1ffa08;
        case 0x1ffa0cu: goto label_1ffa0c;
        case 0x1ffa10u: goto label_1ffa10;
        case 0x1ffa14u: goto label_1ffa14;
        case 0x1ffa18u: goto label_1ffa18;
        case 0x1ffa1cu: goto label_1ffa1c;
        case 0x1ffa20u: goto label_1ffa20;
        case 0x1ffa24u: goto label_1ffa24;
        case 0x1ffa28u: goto label_1ffa28;
        case 0x1ffa2cu: goto label_1ffa2c;
        case 0x1ffa30u: goto label_1ffa30;
        case 0x1ffa34u: goto label_1ffa34;
        case 0x1ffa38u: goto label_1ffa38;
        case 0x1ffa3cu: goto label_1ffa3c;
        case 0x1ffa40u: goto label_1ffa40;
        case 0x1ffa44u: goto label_1ffa44;
        case 0x1ffa48u: goto label_1ffa48;
        case 0x1ffa4cu: goto label_1ffa4c;
        case 0x1ffa50u: goto label_1ffa50;
        case 0x1ffa54u: goto label_1ffa54;
        case 0x1ffa58u: goto label_1ffa58;
        case 0x1ffa5cu: goto label_1ffa5c;
        case 0x1ffa60u: goto label_1ffa60;
        case 0x1ffa64u: goto label_1ffa64;
        case 0x1ffa68u: goto label_1ffa68;
        case 0x1ffa6cu: goto label_1ffa6c;
        case 0x1ffa70u: goto label_1ffa70;
        case 0x1ffa74u: goto label_1ffa74;
        case 0x1ffa78u: goto label_1ffa78;
        case 0x1ffa7cu: goto label_1ffa7c;
        case 0x1ffa80u: goto label_1ffa80;
        case 0x1ffa84u: goto label_1ffa84;
        case 0x1ffa88u: goto label_1ffa88;
        case 0x1ffa8cu: goto label_1ffa8c;
        case 0x1ffa90u: goto label_1ffa90;
        case 0x1ffa94u: goto label_1ffa94;
        case 0x1ffa98u: goto label_1ffa98;
        case 0x1ffa9cu: goto label_1ffa9c;
        case 0x1ffaa0u: goto label_1ffaa0;
        case 0x1ffaa4u: goto label_1ffaa4;
        case 0x1ffaa8u: goto label_1ffaa8;
        case 0x1ffaacu: goto label_1ffaac;
        case 0x1ffab0u: goto label_1ffab0;
        case 0x1ffab4u: goto label_1ffab4;
        case 0x1ffab8u: goto label_1ffab8;
        case 0x1ffabcu: goto label_1ffabc;
        case 0x1ffac0u: goto label_1ffac0;
        case 0x1ffac4u: goto label_1ffac4;
        case 0x1ffac8u: goto label_1ffac8;
        case 0x1ffaccu: goto label_1ffacc;
        case 0x1ffad0u: goto label_1ffad0;
        case 0x1ffad4u: goto label_1ffad4;
        case 0x1ffad8u: goto label_1ffad8;
        case 0x1ffadcu: goto label_1ffadc;
        case 0x1ffae0u: goto label_1ffae0;
        case 0x1ffae4u: goto label_1ffae4;
        case 0x1ffae8u: goto label_1ffae8;
        case 0x1ffaecu: goto label_1ffaec;
        case 0x1ffaf0u: goto label_1ffaf0;
        case 0x1ffaf4u: goto label_1ffaf4;
        case 0x1ffaf8u: goto label_1ffaf8;
        case 0x1ffafcu: goto label_1ffafc;
        case 0x1ffb00u: goto label_1ffb00;
        case 0x1ffb04u: goto label_1ffb04;
        case 0x1ffb08u: goto label_1ffb08;
        case 0x1ffb0cu: goto label_1ffb0c;
        case 0x1ffb10u: goto label_1ffb10;
        case 0x1ffb14u: goto label_1ffb14;
        case 0x1ffb18u: goto label_1ffb18;
        case 0x1ffb1cu: goto label_1ffb1c;
        case 0x1ffb20u: goto label_1ffb20;
        case 0x1ffb24u: goto label_1ffb24;
        case 0x1ffb28u: goto label_1ffb28;
        case 0x1ffb2cu: goto label_1ffb2c;
        case 0x1ffb30u: goto label_1ffb30;
        case 0x1ffb34u: goto label_1ffb34;
        case 0x1ffb38u: goto label_1ffb38;
        case 0x1ffb3cu: goto label_1ffb3c;
        case 0x1ffb40u: goto label_1ffb40;
        case 0x1ffb44u: goto label_1ffb44;
        case 0x1ffb48u: goto label_1ffb48;
        case 0x1ffb4cu: goto label_1ffb4c;
        case 0x1ffb50u: goto label_1ffb50;
        case 0x1ffb54u: goto label_1ffb54;
        case 0x1ffb58u: goto label_1ffb58;
        case 0x1ffb5cu: goto label_1ffb5c;
        case 0x1ffb60u: goto label_1ffb60;
        case 0x1ffb64u: goto label_1ffb64;
        case 0x1ffb68u: goto label_1ffb68;
        case 0x1ffb6cu: goto label_1ffb6c;
        case 0x1ffb70u: goto label_1ffb70;
        case 0x1ffb74u: goto label_1ffb74;
        case 0x1ffb78u: goto label_1ffb78;
        case 0x1ffb7cu: goto label_1ffb7c;
        case 0x1ffb80u: goto label_1ffb80;
        case 0x1ffb84u: goto label_1ffb84;
        case 0x1ffb88u: goto label_1ffb88;
        case 0x1ffb8cu: goto label_1ffb8c;
        case 0x1ffb90u: goto label_1ffb90;
        case 0x1ffb94u: goto label_1ffb94;
        case 0x1ffb98u: goto label_1ffb98;
        case 0x1ffb9cu: goto label_1ffb9c;
        case 0x1ffba0u: goto label_1ffba0;
        case 0x1ffba4u: goto label_1ffba4;
        case 0x1ffba8u: goto label_1ffba8;
        case 0x1ffbacu: goto label_1ffbac;
        case 0x1ffbb0u: goto label_1ffbb0;
        case 0x1ffbb4u: goto label_1ffbb4;
        case 0x1ffbb8u: goto label_1ffbb8;
        case 0x1ffbbcu: goto label_1ffbbc;
        case 0x1ffbc0u: goto label_1ffbc0;
        case 0x1ffbc4u: goto label_1ffbc4;
        case 0x1ffbc8u: goto label_1ffbc8;
        case 0x1ffbccu: goto label_1ffbcc;
        case 0x1ffbd0u: goto label_1ffbd0;
        case 0x1ffbd4u: goto label_1ffbd4;
        case 0x1ffbd8u: goto label_1ffbd8;
        case 0x1ffbdcu: goto label_1ffbdc;
        case 0x1ffbe0u: goto label_1ffbe0;
        case 0x1ffbe4u: goto label_1ffbe4;
        case 0x1ffbe8u: goto label_1ffbe8;
        case 0x1ffbecu: goto label_1ffbec;
        case 0x1ffbf0u: goto label_1ffbf0;
        case 0x1ffbf4u: goto label_1ffbf4;
        case 0x1ffbf8u: goto label_1ffbf8;
        case 0x1ffbfcu: goto label_1ffbfc;
        case 0x1ffc00u: goto label_1ffc00;
        case 0x1ffc04u: goto label_1ffc04;
        case 0x1ffc08u: goto label_1ffc08;
        case 0x1ffc0cu: goto label_1ffc0c;
        case 0x1ffc10u: goto label_1ffc10;
        case 0x1ffc14u: goto label_1ffc14;
        case 0x1ffc18u: goto label_1ffc18;
        case 0x1ffc1cu: goto label_1ffc1c;
        case 0x1ffc20u: goto label_1ffc20;
        case 0x1ffc24u: goto label_1ffc24;
        case 0x1ffc28u: goto label_1ffc28;
        case 0x1ffc2cu: goto label_1ffc2c;
        case 0x1ffc30u: goto label_1ffc30;
        case 0x1ffc34u: goto label_1ffc34;
        case 0x1ffc38u: goto label_1ffc38;
        case 0x1ffc3cu: goto label_1ffc3c;
        case 0x1ffc40u: goto label_1ffc40;
        case 0x1ffc44u: goto label_1ffc44;
        case 0x1ffc48u: goto label_1ffc48;
        case 0x1ffc4cu: goto label_1ffc4c;
        case 0x1ffc50u: goto label_1ffc50;
        case 0x1ffc54u: goto label_1ffc54;
        case 0x1ffc58u: goto label_1ffc58;
        case 0x1ffc5cu: goto label_1ffc5c;
        case 0x1ffc60u: goto label_1ffc60;
        case 0x1ffc64u: goto label_1ffc64;
        case 0x1ffc68u: goto label_1ffc68;
        case 0x1ffc6cu: goto label_1ffc6c;
        case 0x1ffc70u: goto label_1ffc70;
        case 0x1ffc74u: goto label_1ffc74;
        case 0x1ffc78u: goto label_1ffc78;
        case 0x1ffc7cu: goto label_1ffc7c;
        case 0x1ffc80u: goto label_1ffc80;
        case 0x1ffc84u: goto label_1ffc84;
        case 0x1ffc88u: goto label_1ffc88;
        case 0x1ffc8cu: goto label_1ffc8c;
        case 0x1ffc90u: goto label_1ffc90;
        case 0x1ffc94u: goto label_1ffc94;
        case 0x1ffc98u: goto label_1ffc98;
        case 0x1ffc9cu: goto label_1ffc9c;
        case 0x1ffca0u: goto label_1ffca0;
        case 0x1ffca4u: goto label_1ffca4;
        case 0x1ffca8u: goto label_1ffca8;
        case 0x1ffcacu: goto label_1ffcac;
        case 0x1ffcb0u: goto label_1ffcb0;
        case 0x1ffcb4u: goto label_1ffcb4;
        case 0x1ffcb8u: goto label_1ffcb8;
        case 0x1ffcbcu: goto label_1ffcbc;
        case 0x1ffcc0u: goto label_1ffcc0;
        case 0x1ffcc4u: goto label_1ffcc4;
        case 0x1ffcc8u: goto label_1ffcc8;
        case 0x1ffcccu: goto label_1ffccc;
        case 0x1ffcd0u: goto label_1ffcd0;
        case 0x1ffcd4u: goto label_1ffcd4;
        case 0x1ffcd8u: goto label_1ffcd8;
        case 0x1ffcdcu: goto label_1ffcdc;
        case 0x1ffce0u: goto label_1ffce0;
        case 0x1ffce4u: goto label_1ffce4;
        case 0x1ffce8u: goto label_1ffce8;
        case 0x1ffcecu: goto label_1ffcec;
        case 0x1ffcf0u: goto label_1ffcf0;
        case 0x1ffcf4u: goto label_1ffcf4;
        case 0x1ffcf8u: goto label_1ffcf8;
        case 0x1ffcfcu: goto label_1ffcfc;
        case 0x1ffd00u: goto label_1ffd00;
        case 0x1ffd04u: goto label_1ffd04;
        case 0x1ffd08u: goto label_1ffd08;
        case 0x1ffd0cu: goto label_1ffd0c;
        case 0x1ffd10u: goto label_1ffd10;
        case 0x1ffd14u: goto label_1ffd14;
        case 0x1ffd18u: goto label_1ffd18;
        case 0x1ffd1cu: goto label_1ffd1c;
        case 0x1ffd20u: goto label_1ffd20;
        case 0x1ffd24u: goto label_1ffd24;
        case 0x1ffd28u: goto label_1ffd28;
        case 0x1ffd2cu: goto label_1ffd2c;
        case 0x1ffd30u: goto label_1ffd30;
        case 0x1ffd34u: goto label_1ffd34;
        case 0x1ffd38u: goto label_1ffd38;
        case 0x1ffd3cu: goto label_1ffd3c;
        case 0x1ffd40u: goto label_1ffd40;
        case 0x1ffd44u: goto label_1ffd44;
        case 0x1ffd48u: goto label_1ffd48;
        case 0x1ffd4cu: goto label_1ffd4c;
        case 0x1ffd50u: goto label_1ffd50;
        case 0x1ffd54u: goto label_1ffd54;
        case 0x1ffd58u: goto label_1ffd58;
        case 0x1ffd5cu: goto label_1ffd5c;
        case 0x1ffd60u: goto label_1ffd60;
        case 0x1ffd64u: goto label_1ffd64;
        case 0x1ffd68u: goto label_1ffd68;
        case 0x1ffd6cu: goto label_1ffd6c;
        case 0x1ffd70u: goto label_1ffd70;
        case 0x1ffd74u: goto label_1ffd74;
        case 0x1ffd78u: goto label_1ffd78;
        case 0x1ffd7cu: goto label_1ffd7c;
        case 0x1ffd80u: goto label_1ffd80;
        case 0x1ffd84u: goto label_1ffd84;
        case 0x1ffd88u: goto label_1ffd88;
        case 0x1ffd8cu: goto label_1ffd8c;
        case 0x1ffd90u: goto label_1ffd90;
        case 0x1ffd94u: goto label_1ffd94;
        case 0x1ffd98u: goto label_1ffd98;
        case 0x1ffd9cu: goto label_1ffd9c;
        case 0x1ffda0u: goto label_1ffda0;
        case 0x1ffda4u: goto label_1ffda4;
        case 0x1ffda8u: goto label_1ffda8;
        case 0x1ffdacu: goto label_1ffdac;
        case 0x1ffdb0u: goto label_1ffdb0;
        case 0x1ffdb4u: goto label_1ffdb4;
        case 0x1ffdb8u: goto label_1ffdb8;
        case 0x1ffdbcu: goto label_1ffdbc;
        case 0x1ffdc0u: goto label_1ffdc0;
        case 0x1ffdc4u: goto label_1ffdc4;
        case 0x1ffdc8u: goto label_1ffdc8;
        case 0x1ffdccu: goto label_1ffdcc;
        case 0x1ffdd0u: goto label_1ffdd0;
        case 0x1ffdd4u: goto label_1ffdd4;
        case 0x1ffdd8u: goto label_1ffdd8;
        case 0x1ffddcu: goto label_1ffddc;
        case 0x1ffde0u: goto label_1ffde0;
        case 0x1ffde4u: goto label_1ffde4;
        case 0x1ffde8u: goto label_1ffde8;
        case 0x1ffdecu: goto label_1ffdec;
        case 0x1ffdf0u: goto label_1ffdf0;
        case 0x1ffdf4u: goto label_1ffdf4;
        case 0x1ffdf8u: goto label_1ffdf8;
        case 0x1ffdfcu: goto label_1ffdfc;
        case 0x1ffe00u: goto label_1ffe00;
        case 0x1ffe04u: goto label_1ffe04;
        case 0x1ffe08u: goto label_1ffe08;
        case 0x1ffe0cu: goto label_1ffe0c;
        case 0x1ffe10u: goto label_1ffe10;
        case 0x1ffe14u: goto label_1ffe14;
        case 0x1ffe18u: goto label_1ffe18;
        case 0x1ffe1cu: goto label_1ffe1c;
        case 0x1ffe20u: goto label_1ffe20;
        case 0x1ffe24u: goto label_1ffe24;
        case 0x1ffe28u: goto label_1ffe28;
        case 0x1ffe2cu: goto label_1ffe2c;
        case 0x1ffe30u: goto label_1ffe30;
        case 0x1ffe34u: goto label_1ffe34;
        case 0x1ffe38u: goto label_1ffe38;
        case 0x1ffe3cu: goto label_1ffe3c;
        case 0x1ffe40u: goto label_1ffe40;
        case 0x1ffe44u: goto label_1ffe44;
        case 0x1ffe48u: goto label_1ffe48;
        case 0x1ffe4cu: goto label_1ffe4c;
        case 0x1ffe50u: goto label_1ffe50;
        case 0x1ffe54u: goto label_1ffe54;
        case 0x1ffe58u: goto label_1ffe58;
        case 0x1ffe5cu: goto label_1ffe5c;
        case 0x1ffe60u: goto label_1ffe60;
        case 0x1ffe64u: goto label_1ffe64;
        case 0x1ffe68u: goto label_1ffe68;
        case 0x1ffe6cu: goto label_1ffe6c;
        case 0x1ffe70u: goto label_1ffe70;
        case 0x1ffe74u: goto label_1ffe74;
        case 0x1ffe78u: goto label_1ffe78;
        case 0x1ffe7cu: goto label_1ffe7c;
        case 0x1ffe80u: goto label_1ffe80;
        case 0x1ffe84u: goto label_1ffe84;
        case 0x1ffe88u: goto label_1ffe88;
        case 0x1ffe8cu: goto label_1ffe8c;
        case 0x1ffe90u: goto label_1ffe90;
        case 0x1ffe94u: goto label_1ffe94;
        case 0x1ffe98u: goto label_1ffe98;
        case 0x1ffe9cu: goto label_1ffe9c;
        case 0x1ffea0u: goto label_1ffea0;
        case 0x1ffea4u: goto label_1ffea4;
        case 0x1ffea8u: goto label_1ffea8;
        case 0x1ffeacu: goto label_1ffeac;
        case 0x1ffeb0u: goto label_1ffeb0;
        case 0x1ffeb4u: goto label_1ffeb4;
        case 0x1ffeb8u: goto label_1ffeb8;
        case 0x1ffebcu: goto label_1ffebc;
        case 0x1ffec0u: goto label_1ffec0;
        case 0x1ffec4u: goto label_1ffec4;
        case 0x1ffec8u: goto label_1ffec8;
        case 0x1ffeccu: goto label_1ffecc;
        case 0x1ffed0u: goto label_1ffed0;
        case 0x1ffed4u: goto label_1ffed4;
        case 0x1ffed8u: goto label_1ffed8;
        case 0x1ffedcu: goto label_1ffedc;
        case 0x1ffee0u: goto label_1ffee0;
        case 0x1ffee4u: goto label_1ffee4;
        case 0x1ffee8u: goto label_1ffee8;
        case 0x1ffeecu: goto label_1ffeec;
        case 0x1ffef0u: goto label_1ffef0;
        case 0x1ffef4u: goto label_1ffef4;
        case 0x1ffef8u: goto label_1ffef8;
        case 0x1ffefcu: goto label_1ffefc;
        case 0x1fff00u: goto label_1fff00;
        case 0x1fff04u: goto label_1fff04;
        case 0x1fff08u: goto label_1fff08;
        case 0x1fff0cu: goto label_1fff0c;
        case 0x1fff10u: goto label_1fff10;
        case 0x1fff14u: goto label_1fff14;
        case 0x1fff18u: goto label_1fff18;
        case 0x1fff1cu: goto label_1fff1c;
        case 0x1fff20u: goto label_1fff20;
        case 0x1fff24u: goto label_1fff24;
        case 0x1fff28u: goto label_1fff28;
        case 0x1fff2cu: goto label_1fff2c;
        case 0x1fff30u: goto label_1fff30;
        case 0x1fff34u: goto label_1fff34;
        case 0x1fff38u: goto label_1fff38;
        case 0x1fff3cu: goto label_1fff3c;
        case 0x1fff40u: goto label_1fff40;
        case 0x1fff44u: goto label_1fff44;
        case 0x1fff48u: goto label_1fff48;
        case 0x1fff4cu: goto label_1fff4c;
        case 0x1fff50u: goto label_1fff50;
        case 0x1fff54u: goto label_1fff54;
        case 0x1fff58u: goto label_1fff58;
        case 0x1fff5cu: goto label_1fff5c;
        case 0x1fff60u: goto label_1fff60;
        case 0x1fff64u: goto label_1fff64;
        case 0x1fff68u: goto label_1fff68;
        case 0x1fff6cu: goto label_1fff6c;
        case 0x1fff70u: goto label_1fff70;
        case 0x1fff74u: goto label_1fff74;
        case 0x1fff78u: goto label_1fff78;
        case 0x1fff7cu: goto label_1fff7c;
        case 0x1fff80u: goto label_1fff80;
        case 0x1fff84u: goto label_1fff84;
        case 0x1fff88u: goto label_1fff88;
        case 0x1fff8cu: goto label_1fff8c;
        case 0x1fff90u: goto label_1fff90;
        case 0x1fff94u: goto label_1fff94;
        case 0x1fff98u: goto label_1fff98;
        case 0x1fff9cu: goto label_1fff9c;
        case 0x1fffa0u: goto label_1fffa0;
        case 0x1fffa4u: goto label_1fffa4;
        case 0x1fffa8u: goto label_1fffa8;
        case 0x1fffacu: goto label_1fffac;
        case 0x1fffb0u: goto label_1fffb0;
        case 0x1fffb4u: goto label_1fffb4;
        case 0x1fffb8u: goto label_1fffb8;
        case 0x1fffbcu: goto label_1fffbc;
        case 0x1fffc0u: goto label_1fffc0;
        case 0x1fffc4u: goto label_1fffc4;
        case 0x1fffc8u: goto label_1fffc8;
        case 0x1fffccu: goto label_1fffcc;
        case 0x1fffd0u: goto label_1fffd0;
        case 0x1fffd4u: goto label_1fffd4;
        case 0x1fffd8u: goto label_1fffd8;
        case 0x1fffdcu: goto label_1fffdc;
        case 0x1fffe0u: goto label_1fffe0;
        case 0x1fffe4u: goto label_1fffe4;
        case 0x1fffe8u: goto label_1fffe8;
        case 0x1fffecu: goto label_1fffec;
        case 0x1ffff0u: goto label_1ffff0;
        case 0x1ffff4u: goto label_1ffff4;
        case 0x1ffff8u: goto label_1ffff8;
        case 0x1ffffcu: goto label_1ffffc;
        case 0x200000u: goto label_200000;
        case 0x200004u: goto label_200004;
        case 0x200008u: goto label_200008;
        case 0x20000cu: goto label_20000c;
        case 0x200010u: goto label_200010;
        case 0x200014u: goto label_200014;
        case 0x200018u: goto label_200018;
        case 0x20001cu: goto label_20001c;
        case 0x200020u: goto label_200020;
        case 0x200024u: goto label_200024;
        case 0x200028u: goto label_200028;
        case 0x20002cu: goto label_20002c;
        case 0x200030u: goto label_200030;
        case 0x200034u: goto label_200034;
        case 0x200038u: goto label_200038;
        case 0x20003cu: goto label_20003c;
        case 0x200040u: goto label_200040;
        case 0x200044u: goto label_200044;
        case 0x200048u: goto label_200048;
        case 0x20004cu: goto label_20004c;
        case 0x200050u: goto label_200050;
        case 0x200054u: goto label_200054;
        case 0x200058u: goto label_200058;
        case 0x20005cu: goto label_20005c;
        case 0x200060u: goto label_200060;
        case 0x200064u: goto label_200064;
        case 0x200068u: goto label_200068;
        case 0x20006cu: goto label_20006c;
        case 0x200070u: goto label_200070;
        case 0x200074u: goto label_200074;
        case 0x200078u: goto label_200078;
        case 0x20007cu: goto label_20007c;
        case 0x200080u: goto label_200080;
        case 0x200084u: goto label_200084;
        case 0x200088u: goto label_200088;
        case 0x20008cu: goto label_20008c;
        case 0x200090u: goto label_200090;
        case 0x200094u: goto label_200094;
        case 0x200098u: goto label_200098;
        case 0x20009cu: goto label_20009c;
        case 0x2000a0u: goto label_2000a0;
        case 0x2000a4u: goto label_2000a4;
        case 0x2000a8u: goto label_2000a8;
        case 0x2000acu: goto label_2000ac;
        case 0x2000b0u: goto label_2000b0;
        case 0x2000b4u: goto label_2000b4;
        case 0x2000b8u: goto label_2000b8;
        case 0x2000bcu: goto label_2000bc;
        case 0x2000c0u: goto label_2000c0;
        case 0x2000c4u: goto label_2000c4;
        case 0x2000c8u: goto label_2000c8;
        case 0x2000ccu: goto label_2000cc;
        case 0x2000d0u: goto label_2000d0;
        case 0x2000d4u: goto label_2000d4;
        case 0x2000d8u: goto label_2000d8;
        case 0x2000dcu: goto label_2000dc;
        case 0x2000e0u: goto label_2000e0;
        case 0x2000e4u: goto label_2000e4;
        case 0x2000e8u: goto label_2000e8;
        case 0x2000ecu: goto label_2000ec;
        case 0x2000f0u: goto label_2000f0;
        case 0x2000f4u: goto label_2000f4;
        case 0x2000f8u: goto label_2000f8;
        case 0x2000fcu: goto label_2000fc;
        case 0x200100u: goto label_200100;
        case 0x200104u: goto label_200104;
        case 0x200108u: goto label_200108;
        case 0x20010cu: goto label_20010c;
        case 0x200110u: goto label_200110;
        case 0x200114u: goto label_200114;
        case 0x200118u: goto label_200118;
        case 0x20011cu: goto label_20011c;
        case 0x200120u: goto label_200120;
        case 0x200124u: goto label_200124;
        case 0x200128u: goto label_200128;
        case 0x20012cu: goto label_20012c;
        case 0x200130u: goto label_200130;
        case 0x200134u: goto label_200134;
        case 0x200138u: goto label_200138;
        case 0x20013cu: goto label_20013c;
        case 0x200140u: goto label_200140;
        case 0x200144u: goto label_200144;
        case 0x200148u: goto label_200148;
        case 0x20014cu: goto label_20014c;
        case 0x200150u: goto label_200150;
        case 0x200154u: goto label_200154;
        case 0x200158u: goto label_200158;
        case 0x20015cu: goto label_20015c;
        case 0x200160u: goto label_200160;
        case 0x200164u: goto label_200164;
        case 0x200168u: goto label_200168;
        case 0x20016cu: goto label_20016c;
        case 0x200170u: goto label_200170;
        case 0x200174u: goto label_200174;
        case 0x200178u: goto label_200178;
        case 0x20017cu: goto label_20017c;
        case 0x200180u: goto label_200180;
        case 0x200184u: goto label_200184;
        case 0x200188u: goto label_200188;
        case 0x20018cu: goto label_20018c;
        case 0x200190u: goto label_200190;
        case 0x200194u: goto label_200194;
        case 0x200198u: goto label_200198;
        case 0x20019cu: goto label_20019c;
        case 0x2001a0u: goto label_2001a0;
        case 0x2001a4u: goto label_2001a4;
        case 0x2001a8u: goto label_2001a8;
        case 0x2001acu: goto label_2001ac;
        case 0x2001b0u: goto label_2001b0;
        case 0x2001b4u: goto label_2001b4;
        case 0x2001b8u: goto label_2001b8;
        case 0x2001bcu: goto label_2001bc;
        case 0x2001c0u: goto label_2001c0;
        case 0x2001c4u: goto label_2001c4;
        case 0x2001c8u: goto label_2001c8;
        case 0x2001ccu: goto label_2001cc;
        case 0x2001d0u: goto label_2001d0;
        case 0x2001d4u: goto label_2001d4;
        case 0x2001d8u: goto label_2001d8;
        case 0x2001dcu: goto label_2001dc;
        case 0x2001e0u: goto label_2001e0;
        case 0x2001e4u: goto label_2001e4;
        case 0x2001e8u: goto label_2001e8;
        case 0x2001ecu: goto label_2001ec;
        case 0x2001f0u: goto label_2001f0;
        case 0x2001f4u: goto label_2001f4;
        case 0x2001f8u: goto label_2001f8;
        case 0x2001fcu: goto label_2001fc;
        case 0x200200u: goto label_200200;
        case 0x200204u: goto label_200204;
        case 0x200208u: goto label_200208;
        case 0x20020cu: goto label_20020c;
        case 0x200210u: goto label_200210;
        case 0x200214u: goto label_200214;
        case 0x200218u: goto label_200218;
        case 0x20021cu: goto label_20021c;
        case 0x200220u: goto label_200220;
        case 0x200224u: goto label_200224;
        case 0x200228u: goto label_200228;
        case 0x20022cu: goto label_20022c;
        case 0x200230u: goto label_200230;
        case 0x200234u: goto label_200234;
        case 0x200238u: goto label_200238;
        case 0x20023cu: goto label_20023c;
        case 0x200240u: goto label_200240;
        case 0x200244u: goto label_200244;
        case 0x200248u: goto label_200248;
        case 0x20024cu: goto label_20024c;
        case 0x200250u: goto label_200250;
        case 0x200254u: goto label_200254;
        case 0x200258u: goto label_200258;
        case 0x20025cu: goto label_20025c;
        case 0x200260u: goto label_200260;
        case 0x200264u: goto label_200264;
        case 0x200268u: goto label_200268;
        case 0x20026cu: goto label_20026c;
        case 0x200270u: goto label_200270;
        case 0x200274u: goto label_200274;
        case 0x200278u: goto label_200278;
        case 0x20027cu: goto label_20027c;
        case 0x200280u: goto label_200280;
        case 0x200284u: goto label_200284;
        case 0x200288u: goto label_200288;
        case 0x20028cu: goto label_20028c;
        case 0x200290u: goto label_200290;
        case 0x200294u: goto label_200294;
        case 0x200298u: goto label_200298;
        case 0x20029cu: goto label_20029c;
        case 0x2002a0u: goto label_2002a0;
        case 0x2002a4u: goto label_2002a4;
        case 0x2002a8u: goto label_2002a8;
        case 0x2002acu: goto label_2002ac;
        case 0x2002b0u: goto label_2002b0;
        case 0x2002b4u: goto label_2002b4;
        case 0x2002b8u: goto label_2002b8;
        case 0x2002bcu: goto label_2002bc;
        case 0x2002c0u: goto label_2002c0;
        case 0x2002c4u: goto label_2002c4;
        case 0x2002c8u: goto label_2002c8;
        case 0x2002ccu: goto label_2002cc;
        case 0x2002d0u: goto label_2002d0;
        case 0x2002d4u: goto label_2002d4;
        case 0x2002d8u: goto label_2002d8;
        case 0x2002dcu: goto label_2002dc;
        case 0x2002e0u: goto label_2002e0;
        case 0x2002e4u: goto label_2002e4;
        case 0x2002e8u: goto label_2002e8;
        case 0x2002ecu: goto label_2002ec;
        case 0x2002f0u: goto label_2002f0;
        case 0x2002f4u: goto label_2002f4;
        case 0x2002f8u: goto label_2002f8;
        case 0x2002fcu: goto label_2002fc;
        case 0x200300u: goto label_200300;
        case 0x200304u: goto label_200304;
        case 0x200308u: goto label_200308;
        case 0x20030cu: goto label_20030c;
        case 0x200310u: goto label_200310;
        case 0x200314u: goto label_200314;
        case 0x200318u: goto label_200318;
        case 0x20031cu: goto label_20031c;
        case 0x200320u: goto label_200320;
        case 0x200324u: goto label_200324;
        case 0x200328u: goto label_200328;
        case 0x20032cu: goto label_20032c;
        case 0x200330u: goto label_200330;
        case 0x200334u: goto label_200334;
        case 0x200338u: goto label_200338;
        case 0x20033cu: goto label_20033c;
        case 0x200340u: goto label_200340;
        case 0x200344u: goto label_200344;
        case 0x200348u: goto label_200348;
        case 0x20034cu: goto label_20034c;
        case 0x200350u: goto label_200350;
        case 0x200354u: goto label_200354;
        case 0x200358u: goto label_200358;
        case 0x20035cu: goto label_20035c;
        case 0x200360u: goto label_200360;
        case 0x200364u: goto label_200364;
        case 0x200368u: goto label_200368;
        case 0x20036cu: goto label_20036c;
        case 0x200370u: goto label_200370;
        case 0x200374u: goto label_200374;
        case 0x200378u: goto label_200378;
        case 0x20037cu: goto label_20037c;
        case 0x200380u: goto label_200380;
        case 0x200384u: goto label_200384;
        case 0x200388u: goto label_200388;
        case 0x20038cu: goto label_20038c;
        case 0x200390u: goto label_200390;
        case 0x200394u: goto label_200394;
        case 0x200398u: goto label_200398;
        case 0x20039cu: goto label_20039c;
        case 0x2003a0u: goto label_2003a0;
        case 0x2003a4u: goto label_2003a4;
        case 0x2003a8u: goto label_2003a8;
        case 0x2003acu: goto label_2003ac;
        case 0x2003b0u: goto label_2003b0;
        case 0x2003b4u: goto label_2003b4;
        case 0x2003b8u: goto label_2003b8;
        case 0x2003bcu: goto label_2003bc;
        case 0x2003c0u: goto label_2003c0;
        case 0x2003c4u: goto label_2003c4;
        case 0x2003c8u: goto label_2003c8;
        case 0x2003ccu: goto label_2003cc;
        case 0x2003d0u: goto label_2003d0;
        case 0x2003d4u: goto label_2003d4;
        case 0x2003d8u: goto label_2003d8;
        case 0x2003dcu: goto label_2003dc;
        case 0x2003e0u: goto label_2003e0;
        case 0x2003e4u: goto label_2003e4;
        case 0x2003e8u: goto label_2003e8;
        case 0x2003ecu: goto label_2003ec;
        case 0x2003f0u: goto label_2003f0;
        case 0x2003f4u: goto label_2003f4;
        case 0x2003f8u: goto label_2003f8;
        case 0x2003fcu: goto label_2003fc;
        case 0x200400u: goto label_200400;
        case 0x200404u: goto label_200404;
        case 0x200408u: goto label_200408;
        case 0x20040cu: goto label_20040c;
        case 0x200410u: goto label_200410;
        case 0x200414u: goto label_200414;
        case 0x200418u: goto label_200418;
        case 0x20041cu: goto label_20041c;
        case 0x200420u: goto label_200420;
        case 0x200424u: goto label_200424;
        case 0x200428u: goto label_200428;
        case 0x20042cu: goto label_20042c;
        case 0x200430u: goto label_200430;
        case 0x200434u: goto label_200434;
        case 0x200438u: goto label_200438;
        case 0x20043cu: goto label_20043c;
        case 0x200440u: goto label_200440;
        case 0x200444u: goto label_200444;
        case 0x200448u: goto label_200448;
        case 0x20044cu: goto label_20044c;
        case 0x200450u: goto label_200450;
        case 0x200454u: goto label_200454;
        case 0x200458u: goto label_200458;
        case 0x20045cu: goto label_20045c;
        case 0x200460u: goto label_200460;
        case 0x200464u: goto label_200464;
        case 0x200468u: goto label_200468;
        case 0x20046cu: goto label_20046c;
        case 0x200470u: goto label_200470;
        case 0x200474u: goto label_200474;
        case 0x200478u: goto label_200478;
        case 0x20047cu: goto label_20047c;
        case 0x200480u: goto label_200480;
        case 0x200484u: goto label_200484;
        case 0x200488u: goto label_200488;
        case 0x20048cu: goto label_20048c;
        case 0x200490u: goto label_200490;
        case 0x200494u: goto label_200494;
        case 0x200498u: goto label_200498;
        case 0x20049cu: goto label_20049c;
        case 0x2004a0u: goto label_2004a0;
        case 0x2004a4u: goto label_2004a4;
        case 0x2004a8u: goto label_2004a8;
        case 0x2004acu: goto label_2004ac;
        case 0x2004b0u: goto label_2004b0;
        case 0x2004b4u: goto label_2004b4;
        case 0x2004b8u: goto label_2004b8;
        case 0x2004bcu: goto label_2004bc;
        case 0x2004c0u: goto label_2004c0;
        case 0x2004c4u: goto label_2004c4;
        case 0x2004c8u: goto label_2004c8;
        case 0x2004ccu: goto label_2004cc;
        case 0x2004d0u: goto label_2004d0;
        case 0x2004d4u: goto label_2004d4;
        case 0x2004d8u: goto label_2004d8;
        case 0x2004dcu: goto label_2004dc;
        case 0x2004e0u: goto label_2004e0;
        case 0x2004e4u: goto label_2004e4;
        case 0x2004e8u: goto label_2004e8;
        case 0x2004ecu: goto label_2004ec;
        case 0x2004f0u: goto label_2004f0;
        case 0x2004f4u: goto label_2004f4;
        case 0x2004f8u: goto label_2004f8;
        case 0x2004fcu: goto label_2004fc;
        case 0x200500u: goto label_200500;
        case 0x200504u: goto label_200504;
        case 0x200508u: goto label_200508;
        case 0x20050cu: goto label_20050c;
        case 0x200510u: goto label_200510;
        case 0x200514u: goto label_200514;
        case 0x200518u: goto label_200518;
        case 0x20051cu: goto label_20051c;
        case 0x200520u: goto label_200520;
        case 0x200524u: goto label_200524;
        case 0x200528u: goto label_200528;
        case 0x20052cu: goto label_20052c;
        case 0x200530u: goto label_200530;
        case 0x200534u: goto label_200534;
        case 0x200538u: goto label_200538;
        case 0x20053cu: goto label_20053c;
        case 0x200540u: goto label_200540;
        case 0x200544u: goto label_200544;
        case 0x200548u: goto label_200548;
        case 0x20054cu: goto label_20054c;
        case 0x200550u: goto label_200550;
        case 0x200554u: goto label_200554;
        case 0x200558u: goto label_200558;
        case 0x20055cu: goto label_20055c;
        case 0x200560u: goto label_200560;
        case 0x200564u: goto label_200564;
        case 0x200568u: goto label_200568;
        case 0x20056cu: goto label_20056c;
        case 0x200570u: goto label_200570;
        case 0x200574u: goto label_200574;
        case 0x200578u: goto label_200578;
        case 0x20057cu: goto label_20057c;
        case 0x200580u: goto label_200580;
        case 0x200584u: goto label_200584;
        case 0x200588u: goto label_200588;
        case 0x20058cu: goto label_20058c;
        case 0x200590u: goto label_200590;
        case 0x200594u: goto label_200594;
        case 0x200598u: goto label_200598;
        case 0x20059cu: goto label_20059c;
        case 0x2005a0u: goto label_2005a0;
        case 0x2005a4u: goto label_2005a4;
        case 0x2005a8u: goto label_2005a8;
        case 0x2005acu: goto label_2005ac;
        case 0x2005b0u: goto label_2005b0;
        case 0x2005b4u: goto label_2005b4;
        case 0x2005b8u: goto label_2005b8;
        case 0x2005bcu: goto label_2005bc;
        case 0x2005c0u: goto label_2005c0;
        case 0x2005c4u: goto label_2005c4;
        case 0x2005c8u: goto label_2005c8;
        case 0x2005ccu: goto label_2005cc;
        case 0x2005d0u: goto label_2005d0;
        case 0x2005d4u: goto label_2005d4;
        case 0x2005d8u: goto label_2005d8;
        case 0x2005dcu: goto label_2005dc;
        case 0x2005e0u: goto label_2005e0;
        case 0x2005e4u: goto label_2005e4;
        case 0x2005e8u: goto label_2005e8;
        case 0x2005ecu: goto label_2005ec;
        case 0x2005f0u: goto label_2005f0;
        case 0x2005f4u: goto label_2005f4;
        case 0x2005f8u: goto label_2005f8;
        case 0x2005fcu: goto label_2005fc;
        case 0x200600u: goto label_200600;
        case 0x200604u: goto label_200604;
        case 0x200608u: goto label_200608;
        case 0x20060cu: goto label_20060c;
        case 0x200610u: goto label_200610;
        case 0x200614u: goto label_200614;
        case 0x200618u: goto label_200618;
        case 0x20061cu: goto label_20061c;
        case 0x200620u: goto label_200620;
        case 0x200624u: goto label_200624;
        case 0x200628u: goto label_200628;
        case 0x20062cu: goto label_20062c;
        case 0x200630u: goto label_200630;
        case 0x200634u: goto label_200634;
        case 0x200638u: goto label_200638;
        case 0x20063cu: goto label_20063c;
        case 0x200640u: goto label_200640;
        case 0x200644u: goto label_200644;
        case 0x200648u: goto label_200648;
        case 0x20064cu: goto label_20064c;
        case 0x200650u: goto label_200650;
        case 0x200654u: goto label_200654;
        case 0x200658u: goto label_200658;
        case 0x20065cu: goto label_20065c;
        case 0x200660u: goto label_200660;
        case 0x200664u: goto label_200664;
        case 0x200668u: goto label_200668;
        case 0x20066cu: goto label_20066c;
        case 0x200670u: goto label_200670;
        case 0x200674u: goto label_200674;
        case 0x200678u: goto label_200678;
        case 0x20067cu: goto label_20067c;
        case 0x200680u: goto label_200680;
        case 0x200684u: goto label_200684;
        case 0x200688u: goto label_200688;
        case 0x20068cu: goto label_20068c;
        case 0x200690u: goto label_200690;
        case 0x200694u: goto label_200694;
        case 0x200698u: goto label_200698;
        case 0x20069cu: goto label_20069c;
        case 0x2006a0u: goto label_2006a0;
        case 0x2006a4u: goto label_2006a4;
        case 0x2006a8u: goto label_2006a8;
        case 0x2006acu: goto label_2006ac;
        case 0x2006b0u: goto label_2006b0;
        case 0x2006b4u: goto label_2006b4;
        case 0x2006b8u: goto label_2006b8;
        case 0x2006bcu: goto label_2006bc;
        case 0x2006c0u: goto label_2006c0;
        case 0x2006c4u: goto label_2006c4;
        case 0x2006c8u: goto label_2006c8;
        case 0x2006ccu: goto label_2006cc;
        case 0x2006d0u: goto label_2006d0;
        case 0x2006d4u: goto label_2006d4;
        case 0x2006d8u: goto label_2006d8;
        case 0x2006dcu: goto label_2006dc;
        case 0x2006e0u: goto label_2006e0;
        case 0x2006e4u: goto label_2006e4;
        case 0x2006e8u: goto label_2006e8;
        case 0x2006ecu: goto label_2006ec;
        case 0x2006f0u: goto label_2006f0;
        case 0x2006f4u: goto label_2006f4;
        case 0x2006f8u: goto label_2006f8;
        case 0x2006fcu: goto label_2006fc;
        case 0x200700u: goto label_200700;
        case 0x200704u: goto label_200704;
        case 0x200708u: goto label_200708;
        case 0x20070cu: goto label_20070c;
        case 0x200710u: goto label_200710;
        case 0x200714u: goto label_200714;
        case 0x200718u: goto label_200718;
        case 0x20071cu: goto label_20071c;
        case 0x200720u: goto label_200720;
        case 0x200724u: goto label_200724;
        case 0x200728u: goto label_200728;
        case 0x20072cu: goto label_20072c;
        case 0x200730u: goto label_200730;
        case 0x200734u: goto label_200734;
        case 0x200738u: goto label_200738;
        case 0x20073cu: goto label_20073c;
        case 0x200740u: goto label_200740;
        case 0x200744u: goto label_200744;
        case 0x200748u: goto label_200748;
        case 0x20074cu: goto label_20074c;
        case 0x200750u: goto label_200750;
        case 0x200754u: goto label_200754;
        case 0x200758u: goto label_200758;
        case 0x20075cu: goto label_20075c;
        case 0x200760u: goto label_200760;
        case 0x200764u: goto label_200764;
        case 0x200768u: goto label_200768;
        case 0x20076cu: goto label_20076c;
        case 0x200770u: goto label_200770;
        case 0x200774u: goto label_200774;
        case 0x200778u: goto label_200778;
        case 0x20077cu: goto label_20077c;
        case 0x200780u: goto label_200780;
        case 0x200784u: goto label_200784;
        case 0x200788u: goto label_200788;
        case 0x20078cu: goto label_20078c;
        case 0x200790u: goto label_200790;
        case 0x200794u: goto label_200794;
        case 0x200798u: goto label_200798;
        case 0x20079cu: goto label_20079c;
        case 0x2007a0u: goto label_2007a0;
        case 0x2007a4u: goto label_2007a4;
        case 0x2007a8u: goto label_2007a8;
        case 0x2007acu: goto label_2007ac;
        case 0x2007b0u: goto label_2007b0;
        case 0x2007b4u: goto label_2007b4;
        case 0x2007b8u: goto label_2007b8;
        case 0x2007bcu: goto label_2007bc;
        case 0x2007c0u: goto label_2007c0;
        case 0x2007c4u: goto label_2007c4;
        case 0x2007c8u: goto label_2007c8;
        case 0x2007ccu: goto label_2007cc;
        case 0x2007d0u: goto label_2007d0;
        case 0x2007d4u: goto label_2007d4;
        case 0x2007d8u: goto label_2007d8;
        case 0x2007dcu: goto label_2007dc;
        case 0x2007e0u: goto label_2007e0;
        case 0x2007e4u: goto label_2007e4;
        case 0x2007e8u: goto label_2007e8;
        case 0x2007ecu: goto label_2007ec;
        case 0x2007f0u: goto label_2007f0;
        case 0x2007f4u: goto label_2007f4;
        case 0x2007f8u: goto label_2007f8;
        case 0x2007fcu: goto label_2007fc;
        case 0x200800u: goto label_200800;
        case 0x200804u: goto label_200804;
        case 0x200808u: goto label_200808;
        case 0x20080cu: goto label_20080c;
        case 0x200810u: goto label_200810;
        case 0x200814u: goto label_200814;
        case 0x200818u: goto label_200818;
        case 0x20081cu: goto label_20081c;
        case 0x200820u: goto label_200820;
        case 0x200824u: goto label_200824;
        case 0x200828u: goto label_200828;
        case 0x20082cu: goto label_20082c;
        case 0x200830u: goto label_200830;
        case 0x200834u: goto label_200834;
        case 0x200838u: goto label_200838;
        case 0x20083cu: goto label_20083c;
        case 0x200840u: goto label_200840;
        case 0x200844u: goto label_200844;
        case 0x200848u: goto label_200848;
        case 0x20084cu: goto label_20084c;
        case 0x200850u: goto label_200850;
        case 0x200854u: goto label_200854;
        case 0x200858u: goto label_200858;
        case 0x20085cu: goto label_20085c;
        case 0x200860u: goto label_200860;
        case 0x200864u: goto label_200864;
        case 0x200868u: goto label_200868;
        case 0x20086cu: goto label_20086c;
        case 0x200870u: goto label_200870;
        case 0x200874u: goto label_200874;
        case 0x200878u: goto label_200878;
        case 0x20087cu: goto label_20087c;
        case 0x200880u: goto label_200880;
        case 0x200884u: goto label_200884;
        case 0x200888u: goto label_200888;
        case 0x20088cu: goto label_20088c;
        case 0x200890u: goto label_200890;
        case 0x200894u: goto label_200894;
        case 0x200898u: goto label_200898;
        case 0x20089cu: goto label_20089c;
        case 0x2008a0u: goto label_2008a0;
        case 0x2008a4u: goto label_2008a4;
        case 0x2008a8u: goto label_2008a8;
        case 0x2008acu: goto label_2008ac;
        case 0x2008b0u: goto label_2008b0;
        case 0x2008b4u: goto label_2008b4;
        case 0x2008b8u: goto label_2008b8;
        case 0x2008bcu: goto label_2008bc;
        case 0x2008c0u: goto label_2008c0;
        case 0x2008c4u: goto label_2008c4;
        case 0x2008c8u: goto label_2008c8;
        case 0x2008ccu: goto label_2008cc;
        case 0x2008d0u: goto label_2008d0;
        case 0x2008d4u: goto label_2008d4;
        case 0x2008d8u: goto label_2008d8;
        case 0x2008dcu: goto label_2008dc;
        case 0x2008e0u: goto label_2008e0;
        case 0x2008e4u: goto label_2008e4;
        case 0x2008e8u: goto label_2008e8;
        case 0x2008ecu: goto label_2008ec;
        case 0x2008f0u: goto label_2008f0;
        case 0x2008f4u: goto label_2008f4;
        case 0x2008f8u: goto label_2008f8;
        case 0x2008fcu: goto label_2008fc;
        case 0x200900u: goto label_200900;
        case 0x200904u: goto label_200904;
        case 0x200908u: goto label_200908;
        case 0x20090cu: goto label_20090c;
        case 0x200910u: goto label_200910;
        case 0x200914u: goto label_200914;
        case 0x200918u: goto label_200918;
        case 0x20091cu: goto label_20091c;
        case 0x200920u: goto label_200920;
        case 0x200924u: goto label_200924;
        case 0x200928u: goto label_200928;
        case 0x20092cu: goto label_20092c;
        case 0x200930u: goto label_200930;
        case 0x200934u: goto label_200934;
        case 0x200938u: goto label_200938;
        case 0x20093cu: goto label_20093c;
        case 0x200940u: goto label_200940;
        case 0x200944u: goto label_200944;
        case 0x200948u: goto label_200948;
        case 0x20094cu: goto label_20094c;
        case 0x200950u: goto label_200950;
        case 0x200954u: goto label_200954;
        case 0x200958u: goto label_200958;
        case 0x20095cu: goto label_20095c;
        case 0x200960u: goto label_200960;
        case 0x200964u: goto label_200964;
        case 0x200968u: goto label_200968;
        case 0x20096cu: goto label_20096c;
        case 0x200970u: goto label_200970;
        case 0x200974u: goto label_200974;
        default: break;
    }

    ctx->pc = 0x1ff598u;

label_1ff598:
    // 0x1ff598: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1ff598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_1ff59c:
    // 0x1ff59c: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x1ff59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_1ff5a0:
    // 0x1ff5a0: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1ff5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_1ff5a4:
    // 0x1ff5a4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1ff5a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ff5a8:
    // 0x1ff5a8: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1ff5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_1ff5ac:
    // 0x1ff5ac: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1ff5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_1ff5b0:
    // 0x1ff5b0: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x1ff5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_1ff5b4:
    // 0x1ff5b4: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x1ff5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_1ff5b8:
    // 0x1ff5b8: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x1ff5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_1ff5bc:
    // 0x1ff5bc: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x1ff5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
label_1ff5c0:
    // 0x1ff5c0: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1ff5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_1ff5c4:
    // 0x1ff5c4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1ff5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1ff5c8:
    // 0x1ff5c8: 0xe7b80160  swc1        $f24, 0x160($sp)
    ctx->pc = 0x1ff5c8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1ff5cc:
    // 0x1ff5cc: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x1ff5ccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1ff5d0:
    // 0x1ff5d0: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x1ff5d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1ff5d4:
    // 0x1ff5d4: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x1ff5d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1ff5d8:
    // 0x1ff5d8: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x1ff5d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1ff5dc:
    // 0x1ff5dc: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x1ff5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1ff5e0:
    // 0x1ff5e0: 0x144004d4  bnez        $v0, . + 4 + (0x4D4 << 2)
label_1ff5e4:
    if (ctx->pc == 0x1FF5E4u) {
        ctx->pc = 0x1FF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5E0u;
        // 0x1ff5e4: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF5E8u;
        goto label_1ff5e8;
    }
    ctx->pc = 0x1FF5E0u;
    {
        const bool branch_taken_0x1ff5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5E0u;
        // 0x1ff5e4: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff5e0) {
            ctx->pc = 0x200934u;
            goto label_200934;
        }
    }
    ctx->pc = 0x1FF5E8u;
label_1ff5e8:
    // 0x1ff5e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ff5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ff5ec:
    // 0x1ff5ec: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1ff5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1ff5f0:
    // 0x1ff5f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ff5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ff5f4:
    // 0x1ff5f4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1ff5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1ff5f8:
    // 0x1ff5f8: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
label_1ff5fc:
    if (ctx->pc == 0x1FF5FCu) {
        ctx->pc = 0x1FF5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5F8u;
        // 0x1ff5fc: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF600u;
        goto label_1ff600;
    }
    ctx->pc = 0x1FF5F8u;
    {
        const bool branch_taken_0x1ff5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5F8u;
        // 0x1ff5fc: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff5f8) {
            ctx->pc = 0x1FF8B4u;
            goto label_1ff8b4;
        }
    }
    ctx->pc = 0x1FF600u;
label_1ff600:
    // 0x1ff600: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_1ff604:
    if (ctx->pc == 0x1FF604u) {
        ctx->pc = 0x1FF604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF600u;
        // 0x1ff604: 0x3c0f0051  lui         $t7, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF608u;
        goto label_1ff608;
    }
    ctx->pc = 0x1FF600u;
    {
        const bool branch_taken_0x1ff600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF600u;
        // 0x1ff604: 0x3c0f0051  lui         $t7, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff600) {
            ctx->pc = 0x1FF750u;
            goto label_1ff750;
        }
    }
    ctx->pc = 0x1FF608u;
label_1ff608:
    // 0x1ff608: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1ff608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1ff60c:
    // 0x1ff60c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ff60cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ff610:
    // 0x1ff610: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ff610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ff614:
    // 0x1ff614: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x1ff614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
label_1ff618:
    // 0x1ff618: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1ff618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1ff61c:
    // 0x1ff61c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ff61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ff620:
    // 0x1ff620: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1ff620u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1ff624:
    // 0x1ff624: 0x3c013f61  lui         $at, 0x3F61
    ctx->pc = 0x1ff624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16225 << 16));
label_1ff628:
    // 0x1ff628: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1ff628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1ff62c:
    // 0x1ff62c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ff62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ff630:
    // 0x1ff630: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1ff630u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1ff634:
    // 0x1ff634: 0x3c013f5e  lui         $at, 0x3F5E
    ctx->pc = 0x1ff634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16222 << 16));
label_1ff638:
    // 0x1ff638: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1ff638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1ff63c:
    // 0x1ff63c: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1ff63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1ff640:
    // 0x1ff640: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1ff640u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1ff644:
    // 0x1ff644: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1ff644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1ff648:
    // 0x1ff648: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ff648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ff64c:
    // 0x1ff64c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ff64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ff650:
    // 0x1ff650: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1ff650u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1ff654:
    // 0x1ff654: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1ff654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1ff658:
    // 0x1ff658: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ff658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ff65c:
    // 0x1ff65c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ff65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ff660:
    // 0x1ff660: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1ff660u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1ff664:
    // 0x1ff664: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x1ff664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
label_1ff668:
    // 0x1ff668: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1ff668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1ff66c:
    // 0x1ff66c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ff66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ff670:
    // 0x1ff670: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1ff670u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1ff674:
    // 0x1ff674: 0x3c013f0f  lui         $at, 0x3F0F
    ctx->pc = 0x1ff674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16143 << 16));
label_1ff678:
    // 0x1ff678: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1ff678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1ff67c:
    // 0x1ff67c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ff67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ff680:
    // 0x1ff680: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1ff680u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1ff684:
    // 0x1ff684: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x1ff684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
label_1ff688:
    // 0x1ff688: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1ff688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1ff68c:
    // 0x1ff68c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ff68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ff690:
    // 0x1ff690: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1ff690u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1ff694:
    // 0x1ff694: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1ff694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1ff698:
    // 0x1ff698: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ff698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ff69c:
    // 0x1ff69c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1ff69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1ff6a0:
    // 0x1ff6a0: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1ff6a0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1ff6a4:
    // 0x1ff6a4: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x1ff6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
label_1ff6a8:
    // 0x1ff6a8: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1ff6a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1ff6ac:
    // 0x1ff6ac: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ff6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1ff6b0:
    // 0x1ff6b0: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1ff6b0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1ff6b4:
    // 0x1ff6b4: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x1ff6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
label_1ff6b8:
    // 0x1ff6b8: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1ff6b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1ff6bc:
    // 0x1ff6bc: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1ff6bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1ff6c0:
    // 0x1ff6c0: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1ff6c0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1ff6c4:
    // 0x1ff6c4: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1ff6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
label_1ff6c8:
    // 0x1ff6c8: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1ff6c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1ff6cc:
    // 0x1ff6cc: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1ff6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1ff6d0:
    // 0x1ff6d0: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1ff6d0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1ff6d4:
    // 0x1ff6d4: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x1ff6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
label_1ff6d8:
    // 0x1ff6d8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ff6d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ff6dc:
    // 0x1ff6dc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1ff6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1ff6e0:
    // 0x1ff6e0: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1ff6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1ff6e4:
    // 0x1ff6e4: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1ff6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1ff6e8:
    // 0x1ff6e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ff6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ff6ec:
    // 0x1ff6ec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ff6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ff6f0:
    // 0x1ff6f0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1ff6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1ff6f4:
    // 0x1ff6f4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1ff6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ff6f8:
    // 0x1ff6f8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1ff6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1ff6fc:
    // 0x1ff6fc: 0xe440f518  swc1        $f0, -0xAE8($v0)
    ctx->pc = 0x1ff6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964504), bits); }
label_1ff700:
    // 0x1ff700: 0x1e0f02d  daddu       $fp, $t7, $zero
    ctx->pc = 0x1ff700u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_1ff704:
    // 0x1ff704: 0xe461f51c  swc1        $f1, -0xAE4($v1)
    ctx->pc = 0x1ff704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964508), bits); }
label_1ff708:
    // 0x1ff708: 0xaca4f520  sw          $a0, -0xAE0($a1)
    ctx->pc = 0x1ff708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294964512), GPR_U32(ctx, 4));
label_1ff70c:
    // 0x1ff70c: 0xe4c2f558  swc1        $f2, -0xAA8($a2)
    ctx->pc = 0x1ff70cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294964568), bits); }
label_1ff710:
    // 0x1ff710: 0xe4e2f514  swc1        $f2, -0xAEC($a3)
    ctx->pc = 0x1ff710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964500), bits); }
label_1ff714:
    // 0x1ff714: 0xe643f528  swc1        $f3, -0xAD8($s2)
    ctx->pc = 0x1ff714u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294964520), bits); }
label_1ff718:
    // 0x1ff718: 0xe604f530  swc1        $f4, -0xAD0($s0)
    ctx->pc = 0x1ff718u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964528), bits); }
label_1ff71c:
    // 0x1ff71c: 0xe625f534  swc1        $f5, -0xACC($s1)
    ctx->pc = 0x1ff71cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294964532), bits); }
label_1ff720:
    // 0x1ff720: 0xe526f53c  swc1        $f6, -0xAC4($t1)
    ctx->pc = 0x1ff720u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294964540), bits); }
label_1ff724:
    // 0x1ff724: 0xe547f540  swc1        $f7, -0xAC0($t2)
    ctx->pc = 0x1ff724u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294964544), bits); }
label_1ff728:
    // 0x1ff728: 0xe56cf544  swc1        $f12, -0xABC($t3)
    ctx->pc = 0x1ff728u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294964548), bits); }
label_1ff72c:
    // 0x1ff72c: 0xe58df548  swc1        $f13, -0xAB8($t4)
    ctx->pc = 0x1ff72cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294964552), bits); }
label_1ff730:
    // 0x1ff730: 0xe5a8f54c  swc1        $f8, -0xAB4($t5)
    ctx->pc = 0x1ff730u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294964556), bits); }
label_1ff734:
    // 0x1ff734: 0xe5cbf550  swc1        $f11, -0xAB0($t6)
    ctx->pc = 0x1ff734u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294964560), bits); }
label_1ff738:
    // 0x1ff738: 0xe5eaf554  swc1        $f10, -0xAAC($t7)
    ctx->pc = 0x1ff738u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294964564), bits); }
label_1ff73c:
    // 0x1ff73c: 0xe509f560  swc1        $f9, -0xAA0($t0)
    ctx->pc = 0x1ff73cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964576), bits); }
label_1ff740:
    // 0x1ff740: 0xe6adf524  swc1        $f13, -0xADC($s5)
    ctx->pc = 0x1ff740u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294964516), bits); }
label_1ff744:
    // 0x1ff744: 0xe68cf52c  swc1        $f12, -0xAD4($s4)
    ctx->pc = 0x1ff744u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294964524), bits); }
label_1ff748:
    // 0x1ff748: 0x1000014d  b           . + 4 + (0x14D << 2)
label_1ff74c:
    if (ctx->pc == 0x1FF74Cu) {
        ctx->pc = 0x1FF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF748u;
        // 0x1ff74c: 0xe66bf538  swc1        $f11, -0xAC8($s3) (Delay Slot)
        { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294964536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF750u;
        goto label_1ff750;
    }
    ctx->pc = 0x1FF748u;
    {
        const bool branch_taken_0x1ff748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF748u;
        // 0x1ff74c: 0xe66bf538  swc1        $f11, -0xAC8($s3) (Delay Slot)
        { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294964536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff748) {
            ctx->pc = 0x1FFC80u;
            goto label_1ffc80;
        }
    }
    ctx->pc = 0x1FF750u;
label_1ff750:
    // 0x1ff750: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x1ff750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
label_1ff754:
    // 0x1ff754: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1ff754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1ff758:
    // 0x1ff758: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1ff758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1ff75c:
    // 0x1ff75c: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1ff75cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1ff760:
    // 0x1ff760: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1ff760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_1ff764:
    // 0x1ff764: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ff764u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ff768:
    // 0x1ff768: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1ff768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1ff76c:
    // 0x1ff76c: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1ff76cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1ff770:
    // 0x1ff770: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1ff770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_1ff774:
    // 0x1ff774: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ff774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ff778:
    // 0x1ff778: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ff778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ff77c:
    // 0x1ff77c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1ff77cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1ff780:
    // 0x1ff780: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x1ff780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
label_1ff784:
    // 0x1ff784: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1ff784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1ff788:
    // 0x1ff788: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ff788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ff78c:
    // 0x1ff78c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1ff78cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1ff790:
    // 0x1ff790: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x1ff790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_1ff794:
    // 0x1ff794: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ff794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ff798:
    // 0x1ff798: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ff798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ff79c:
    // 0x1ff79c: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1ff79cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1ff7a0:
    // 0x1ff7a0: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x1ff7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
label_1ff7a4:
    // 0x1ff7a4: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1ff7a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1ff7a8:
    // 0x1ff7a8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ff7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ff7ac:
    // 0x1ff7ac: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1ff7acu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1ff7b0:
    // 0x1ff7b0: 0x3c013f0e  lui         $at, 0x3F0E
    ctx->pc = 0x1ff7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16142 << 16));
label_1ff7b4:
    // 0x1ff7b4: 0x34215604  ori         $at, $at, 0x5604
    ctx->pc = 0x1ff7b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22020);
label_1ff7b8:
    // 0x1ff7b8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ff7b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ff7bc:
    // 0x1ff7bc: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1ff7bcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1ff7c0:
    // 0x1ff7c0: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x1ff7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
label_1ff7c4:
    // 0x1ff7c4: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1ff7c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1ff7c8:
    // 0x1ff7c8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1ff7c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1ff7cc:
    // 0x1ff7cc: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1ff7ccu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1ff7d0:
    // 0x1ff7d0: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x1ff7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
label_1ff7d4:
    // 0x1ff7d4: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1ff7d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
label_1ff7d8:
    // 0x1ff7d8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ff7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1ff7dc:
    // 0x1ff7dc: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1ff7dcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1ff7e0:
    // 0x1ff7e0: 0x3c013f3a  lui         $at, 0x3F3A
    ctx->pc = 0x1ff7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16186 << 16));
label_1ff7e4:
    // 0x1ff7e4: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1ff7e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_1ff7e8:
    // 0x1ff7e8: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1ff7e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1ff7ec:
    // 0x1ff7ec: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1ff7ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1ff7f0:
    // 0x1ff7f0: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1ff7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1ff7f4:
    // 0x1ff7f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ff7f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ff7f8:
    // 0x1ff7f8: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1ff7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1ff7fc:
    // 0x1ff7fc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1ff7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1ff800:
    // 0x1ff800: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x1ff800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
label_1ff804:
    // 0x1ff804: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1ff804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1ff808:
    // 0x1ff808: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ff808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ff80c:
    // 0x1ff80c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1ff80cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1ff810:
    // 0x1ff810: 0x3c013f53  lui         $at, 0x3F53
    ctx->pc = 0x1ff810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16211 << 16));
label_1ff814:
    // 0x1ff814: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ff814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1ff818:
    // 0x1ff818: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ff818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ff81c:
    // 0x1ff81c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1ff81cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1ff820:
    // 0x1ff820: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x1ff820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
label_1ff824:
    // 0x1ff824: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ff824u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ff828:
    // 0x1ff828: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1ff828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1ff82c:
    // 0x1ff82c: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1ff82cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1ff830:
    // 0x1ff830: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1ff830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_1ff834:
    // 0x1ff834: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ff834u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ff838:
    // 0x1ff838: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ff838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ff83c:
    // 0x1ff83c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ff83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ff840:
    // 0x1ff840: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1ff840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_1ff844:
    // 0x1ff844: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ff844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ff848:
    // 0x1ff848: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1ff848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1ff84c:
    // 0x1ff84c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ff84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ff850:
    // 0x1ff850: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ff850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ff854:
    // 0x1ff854: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1ff854u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1ff858:
    // 0x1ff858: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ff858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ff85c:
    // 0x1ff85c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1ff85cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1ff860:
    // 0x1ff860: 0xe441f514  swc1        $f1, -0xAEC($v0)
    ctx->pc = 0x1ff860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964500), bits); }
label_1ff864:
    // 0x1ff864: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x1ff864u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1ff868:
    // 0x1ff868: 0xe462f518  swc1        $f2, -0xAE8($v1)
    ctx->pc = 0x1ff868u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964504), bits); }
label_1ff86c:
    // 0x1ff86c: 0xe483f51c  swc1        $f3, -0xAE4($a0)
    ctx->pc = 0x1ff86cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964508), bits); }
label_1ff870:
    // 0x1ff870: 0xacc5f520  sw          $a1, -0xAE0($a2)
    ctx->pc = 0x1ff870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294964512), GPR_U32(ctx, 5));
label_1ff874:
    // 0x1ff874: 0xe4e0f558  swc1        $f0, -0xAA8($a3)
    ctx->pc = 0x1ff874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964568), bits); }
label_1ff878:
    // 0x1ff878: 0xe664f528  swc1        $f4, -0xAD8($s3)
    ctx->pc = 0x1ff878u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294964520), bits); }
label_1ff87c:
    // 0x1ff87c: 0xe545f530  swc1        $f5, -0xAD0($t2)
    ctx->pc = 0x1ff87cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294964528), bits); }
label_1ff880:
    // 0x1ff880: 0xe566f534  swc1        $f6, -0xACC($t3)
    ctx->pc = 0x1ff880u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294964532), bits); }
label_1ff884:
    // 0x1ff884: 0xe587f538  swc1        $f7, -0xAC8($t4)
    ctx->pc = 0x1ff884u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294964536), bits); }
label_1ff888:
    // 0x1ff888: 0xe5aff53c  swc1        $f15, -0xAC4($t5)
    ctx->pc = 0x1ff888u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294964540), bits); }
label_1ff88c:
    // 0x1ff88c: 0xe5c9f540  swc1        $f9, -0xAC0($t6)
    ctx->pc = 0x1ff88cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294964544), bits); }
label_1ff890:
    // 0x1ff890: 0xe5eef544  swc1        $f14, -0xABC($t7)
    ctx->pc = 0x1ff890u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294964548), bits); }
label_1ff894:
    // 0x1ff894: 0xe60bf548  swc1        $f11, -0xAB8($s0)
    ctx->pc = 0x1ff894u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964552), bits); }
label_1ff898:
    // 0x1ff898: 0xe62cf54c  swc1        $f12, -0xAB4($s1)
    ctx->pc = 0x1ff898u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294964556), bits); }
label_1ff89c:
    // 0x1ff89c: 0xe64df550  swc1        $f13, -0xAB0($s2)
    ctx->pc = 0x1ff89cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294964560), bits); }
label_1ff8a0:
    // 0x1ff8a0: 0xe52af554  swc1        $f10, -0xAAC($t1)
    ctx->pc = 0x1ff8a0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294964564), bits); }
label_1ff8a4:
    // 0x1ff8a4: 0xe508f560  swc1        $f8, -0xAA0($t0)
    ctx->pc = 0x1ff8a4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964576), bits); }
label_1ff8a8:
    // 0x1ff8a8: 0xe6aff524  swc1        $f15, -0xADC($s5)
    ctx->pc = 0x1ff8a8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294964516), bits); }
label_1ff8ac:
    // 0x1ff8ac: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_1ff8b0:
    if (ctx->pc == 0x1FF8B0u) {
        ctx->pc = 0x1FF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8ACu;
        // 0x1ff8b0: 0xe68ef52c  swc1        $f14, -0xAD4($s4) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294964524), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF8B4u;
        goto label_1ff8b4;
    }
    ctx->pc = 0x1FF8ACu;
    {
        const bool branch_taken_0x1ff8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8ACu;
        // 0x1ff8b0: 0xe68ef52c  swc1        $f14, -0xAD4($s4) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294964524), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff8ac) {
            ctx->pc = 0x1FFC80u;
            goto label_1ffc80;
        }
    }
    ctx->pc = 0x1FF8B4u;
label_1ff8b4:
    // 0x1ff8b4: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1ff8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1ff8b8:
    // 0x1ff8b8: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_1ff8bc:
    if (ctx->pc == 0x1FF8BCu) {
        ctx->pc = 0x1FF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8B8u;
        // 0x1ff8bc: 0x3c080051  lui         $t0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF8C0u;
        goto label_1ff8c0;
    }
    ctx->pc = 0x1FF8B8u;
    {
        const bool branch_taken_0x1ff8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8B8u;
        // 0x1ff8bc: 0x3c080051  lui         $t0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff8b8) {
            ctx->pc = 0x1FFA0Cu;
            goto label_1ffa0c;
        }
    }
    ctx->pc = 0x1FF8C0u;
label_1ff8c0:
    // 0x1ff8c0: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x1ff8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
label_1ff8c4:
    // 0x1ff8c4: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1ff8c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1ff8c8:
    // 0x1ff8c8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1ff8c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1ff8cc:
    // 0x1ff8cc: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x1ff8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
label_1ff8d0:
    // 0x1ff8d0: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1ff8d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1ff8d4:
    // 0x1ff8d4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ff8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ff8d8:
    // 0x1ff8d8: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1ff8d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1ff8dc:
    // 0x1ff8dc: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1ff8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_1ff8e0:
    // 0x1ff8e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ff8e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ff8e4:
    // 0x1ff8e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ff8e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ff8e8:
    // 0x1ff8e8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1ff8e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1ff8ec:
    // 0x1ff8ec: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1ff8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1ff8f0:
    // 0x1ff8f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ff8f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ff8f4:
    // 0x1ff8f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ff8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ff8f8:
    // 0x1ff8f8: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1ff8f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1ff8fc:
    // 0x1ff8fc: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1ff8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1ff900:
    // 0x1ff900: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ff900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ff904:
    // 0x1ff904: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ff904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ff908:
    // 0x1ff908: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1ff908u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1ff90c:
    // 0x1ff90c: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x1ff90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
label_1ff910:
    // 0x1ff910: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1ff910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1ff914:
    // 0x1ff914: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ff914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ff918:
    // 0x1ff918: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1ff918u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1ff91c:
    // 0x1ff91c: 0x3c013f0e  lui         $at, 0x3F0E
    ctx->pc = 0x1ff91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16142 << 16));
label_1ff920:
    // 0x1ff920: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1ff920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1ff924:
    // 0x1ff924: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ff924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ff928:
    // 0x1ff928: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1ff928u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1ff92c:
    // 0x1ff92c: 0x3c013ebd  lui         $at, 0x3EBD
    ctx->pc = 0x1ff92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16061 << 16));
label_1ff930:
    // 0x1ff930: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1ff930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_1ff934:
    // 0x1ff934: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1ff934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1ff938:
    // 0x1ff938: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1ff938u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1ff93c:
    // 0x1ff93c: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x1ff93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
label_1ff940:
    // 0x1ff940: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1ff940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_1ff944:
    // 0x1ff944: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ff944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1ff948:
    // 0x1ff948: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1ff948u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1ff94c:
    // 0x1ff94c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1ff94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1ff950:
    // 0x1ff950: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ff950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ff954:
    // 0x1ff954: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1ff954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1ff958:
    // 0x1ff958: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1ff958u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1ff95c:
    // 0x1ff95c: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x1ff95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
label_1ff960:
    // 0x1ff960: 0x342120c5  ori         $at, $at, 0x20C5
    ctx->pc = 0x1ff960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8389);
label_1ff964:
    // 0x1ff964: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1ff964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1ff968:
    // 0x1ff968: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1ff968u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1ff96c:
    // 0x1ff96c: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x1ff96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
label_1ff970:
    // 0x1ff970: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1ff970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1ff974:
    // 0x1ff974: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1ff974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1ff978:
    // 0x1ff978: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1ff978u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1ff97c:
    // 0x1ff97c: 0x3c013f53  lui         $at, 0x3F53
    ctx->pc = 0x1ff97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16211 << 16));
label_1ff980:
    // 0x1ff980: 0x3421b646  ori         $at, $at, 0xB646
    ctx->pc = 0x1ff980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46662);
label_1ff984:
    // 0x1ff984: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ff984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ff988:
    // 0x1ff988: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1ff988u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1ff98c:
    // 0x1ff98c: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x1ff98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
label_1ff990:
    // 0x1ff990: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ff990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ff994:
    // 0x1ff994: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1ff994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1ff998:
    // 0x1ff998: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ff998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ff99c:
    // 0x1ff99c: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1ff99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_1ff9a0:
    // 0x1ff9a0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ff9a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ff9a4:
    // 0x1ff9a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ff9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ff9a8:
    // 0x1ff9a8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ff9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ff9ac:
    // 0x1ff9ac: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ff9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ff9b0:
    // 0x1ff9b0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1ff9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1ff9b4:
    // 0x1ff9b4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ff9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ff9b8:
    // 0x1ff9b8: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1ff9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1ff9bc:
    // 0x1ff9bc: 0xe441f514  swc1        $f1, -0xAEC($v0)
    ctx->pc = 0x1ff9bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964500), bits); }
label_1ff9c0:
    // 0x1ff9c0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1ff9c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ff9c4:
    // 0x1ff9c4: 0xe462f518  swc1        $f2, -0xAE8($v1)
    ctx->pc = 0x1ff9c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964504), bits); }
label_1ff9c8:
    // 0x1ff9c8: 0xe483f51c  swc1        $f3, -0xAE4($a0)
    ctx->pc = 0x1ff9c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964508), bits); }
label_1ff9cc:
    // 0x1ff9cc: 0xacc5f520  sw          $a1, -0xAE0($a2)
    ctx->pc = 0x1ff9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294964512), GPR_U32(ctx, 5));
label_1ff9d0:
    // 0x1ff9d0: 0xe4e0f558  swc1        $f0, -0xAA8($a3)
    ctx->pc = 0x1ff9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964568), bits); }
label_1ff9d4:
    // 0x1ff9d4: 0xe644f528  swc1        $f4, -0xAD8($s2)
    ctx->pc = 0x1ff9d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294964520), bits); }
label_1ff9d8:
    // 0x1ff9d8: 0xe525f530  swc1        $f5, -0xAD0($t1)
    ctx->pc = 0x1ff9d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294964528), bits); }
label_1ff9dc:
    // 0x1ff9dc: 0xe546f534  swc1        $f6, -0xACC($t2)
    ctx->pc = 0x1ff9dcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294964532), bits); }
label_1ff9e0:
    // 0x1ff9e0: 0xe567f538  swc1        $f7, -0xAC8($t3)
    ctx->pc = 0x1ff9e0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294964536), bits); }
label_1ff9e4:
    // 0x1ff9e4: 0xe58ef53c  swc1        $f14, -0xAC4($t4)
    ctx->pc = 0x1ff9e4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294964540), bits); }
label_1ff9e8:
    // 0x1ff9e8: 0xe5a8f540  swc1        $f8, -0xAC0($t5)
    ctx->pc = 0x1ff9e8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294964544), bits); }
label_1ff9ec:
    // 0x1ff9ec: 0xe5cdf544  swc1        $f13, -0xABC($t6)
    ctx->pc = 0x1ff9ecu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294964548), bits); }
label_1ff9f0:
    // 0x1ff9f0: 0xe5eaf548  swc1        $f10, -0xAB8($t7)
    ctx->pc = 0x1ff9f0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294964552), bits); }
label_1ff9f4:
    // 0x1ff9f4: 0xe60bf54c  swc1        $f11, -0xAB4($s0)
    ctx->pc = 0x1ff9f4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964556), bits); }
label_1ff9f8:
    // 0x1ff9f8: 0xe62cf550  swc1        $f12, -0xAB0($s1)
    ctx->pc = 0x1ff9f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294964560), bits); }
label_1ff9fc:
    // 0x1ff9fc: 0xe509f554  swc1        $f9, -0xAAC($t0)
    ctx->pc = 0x1ff9fcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964564), bits); }
label_1ffa00:
    // 0x1ffa00: 0xe68ef524  swc1        $f14, -0xADC($s4)
    ctx->pc = 0x1ffa00u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294964516), bits); }
label_1ffa04:
    // 0x1ffa04: 0x1000009e  b           . + 4 + (0x9E << 2)
label_1ffa08:
    if (ctx->pc == 0x1FFA08u) {
        ctx->pc = 0x1FFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA04u;
        // 0x1ffa08: 0xe66df52c  swc1        $f13, -0xAD4($s3) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294964524), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA0Cu;
        goto label_1ffa0c;
    }
    ctx->pc = 0x1FFA04u;
    {
        const bool branch_taken_0x1ffa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA04u;
        // 0x1ffa08: 0xe66df52c  swc1        $f13, -0xAD4($s3) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294964524), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa04) {
            ctx->pc = 0x1FFC80u;
            goto label_1ffc80;
        }
    }
    ctx->pc = 0x1FFA0Cu;
label_1ffa0c:
    // 0x1ffa0c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1ffa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1ffa10:
    // 0x1ffa10: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_1ffa14:
    if (ctx->pc == 0x1FFA14u) {
        ctx->pc = 0x1FFA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA10u;
        // 0x1ffa14: 0x3c0b0051  lui         $t3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA18u;
        goto label_1ffa18;
    }
    ctx->pc = 0x1FFA10u;
    {
        const bool branch_taken_0x1ffa10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA10u;
        // 0x1ffa14: 0x3c0b0051  lui         $t3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa10) {
            ctx->pc = 0x1FFB44u;
            goto label_1ffb44;
        }
    }
    ctx->pc = 0x1FFA18u;
label_1ffa18:
    // 0x1ffa18: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x1ffa18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
label_1ffa1c:
    // 0x1ffa1c: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1ffa1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1ffa20:
    // 0x1ffa20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ffa20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ffa24:
    // 0x1ffa24: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1ffa24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_1ffa28:
    // 0x1ffa28: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ffa28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ffa2c:
    // 0x1ffa2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ffa2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffa30:
    // 0x1ffa30: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1ffa30u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1ffa34:
    // 0x1ffa34: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1ffa34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1ffa38:
    // 0x1ffa38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ffa38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ffa3c:
    // 0x1ffa3c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ffa3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ffa40:
    // 0x1ffa40: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1ffa40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1ffa44:
    // 0x1ffa44: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1ffa44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1ffa48:
    // 0x1ffa48: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ffa48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ffa4c:
    // 0x1ffa4c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ffa4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ffa50:
    // 0x1ffa50: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1ffa50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1ffa54:
    // 0x1ffa54: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1ffa54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1ffa58:
    // 0x1ffa58: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ffa58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ffa5c:
    // 0x1ffa5c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ffa5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ffa60:
    // 0x1ffa60: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1ffa60u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1ffa64:
    // 0x1ffa64: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x1ffa64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
label_1ffa68:
    // 0x1ffa68: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1ffa68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1ffa6c:
    // 0x1ffa6c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1ffa6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1ffa70:
    // 0x1ffa70: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1ffa70u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1ffa74:
    // 0x1ffa74: 0x3c013f0f  lui         $at, 0x3F0F
    ctx->pc = 0x1ffa74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16143 << 16));
label_1ffa78:
    // 0x1ffa78: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1ffa78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1ffa7c:
    // 0x1ffa7c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ffa7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1ffa80:
    // 0x1ffa80: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1ffa80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1ffa84:
    // 0x1ffa84: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x1ffa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
label_1ffa88:
    // 0x1ffa88: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1ffa88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1ffa8c:
    // 0x1ffa8c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1ffa8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1ffa90:
    // 0x1ffa90: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1ffa90u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1ffa94:
    // 0x1ffa94: 0x3c013f58  lui         $at, 0x3F58
    ctx->pc = 0x1ffa94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16216 << 16));
label_1ffa98:
    // 0x1ffa98: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1ffa98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1ffa9c:
    // 0x1ffa9c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1ffa9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1ffaa0:
    // 0x1ffaa0: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1ffaa0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1ffaa4:
    // 0x1ffaa4: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x1ffaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
label_1ffaa8:
    // 0x1ffaa8: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1ffaa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1ffaac:
    // 0x1ffaac: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1ffaacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1ffab0:
    // 0x1ffab0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1ffab0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1ffab4:
    // 0x1ffab4: 0x3c013f61  lui         $at, 0x3F61
    ctx->pc = 0x1ffab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16225 << 16));
label_1ffab8:
    // 0x1ffab8: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1ffab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1ffabc:
    // 0x1ffabc: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1ffabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1ffac0:
    // 0x1ffac0: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1ffac0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1ffac4:
    // 0x1ffac4: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x1ffac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_1ffac8:
    // 0x1ffac8: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1ffac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1ffacc:
    // 0x1ffacc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ffaccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ffad0:
    // 0x1ffad0: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1ffad0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1ffad4:
    // 0x1ffad4: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1ffad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_1ffad8:
    // 0x1ffad8: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1ffad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1ffadc:
    // 0x1ffadc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ffadcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ffae0:
    // 0x1ffae0: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1ffae0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1ffae4:
    // 0x1ffae4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ffae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ffae8:
    // 0x1ffae8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ffae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ffaec:
    // 0x1ffaec: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ffaecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ffaf0:
    // 0x1ffaf0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1ffaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1ffaf4:
    // 0x1ffaf4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ffaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ffaf8:
    // 0x1ffaf8: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1ffaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1ffafc:
    // 0x1ffafc: 0xe443f514  swc1        $f3, -0xAEC($v0)
    ctx->pc = 0x1ffafcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964500), bits); }
label_1ffb00:
    // 0x1ffb00: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x1ffb00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1ffb04:
    // 0x1ffb04: 0xe464f518  swc1        $f4, -0xAE8($v1)
    ctx->pc = 0x1ffb04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964504), bits); }
label_1ffb08:
    // 0x1ffb08: 0xe485f51c  swc1        $f5, -0xAE4($a0)
    ctx->pc = 0x1ffb08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964508), bits); }
label_1ffb0c:
    // 0x1ffb0c: 0xacc5f520  sw          $a1, -0xAE0($a2)
    ctx->pc = 0x1ffb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294964512), GPR_U32(ctx, 5));
label_1ffb10:
    // 0x1ffb10: 0xe4e2f558  swc1        $f2, -0xAA8($a3)
    ctx->pc = 0x1ffb10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964568), bits); }
label_1ffb14:
    // 0x1ffb14: 0xe606f528  swc1        $f6, -0xAD8($s0)
    ctx->pc = 0x1ffb14u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964520), bits); }
label_1ffb18:
    // 0x1ffb18: 0xe5a7f530  swc1        $f7, -0xAD0($t5)
    ctx->pc = 0x1ffb18u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294964528), bits); }
label_1ffb1c:
    // 0x1ffb1c: 0xe5c8f534  swc1        $f8, -0xACC($t6)
    ctx->pc = 0x1ffb1cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294964532), bits); }
label_1ffb20:
    // 0x1ffb20: 0xe5e9f538  swc1        $f9, -0xAC8($t7)
    ctx->pc = 0x1ffb20u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294964536), bits); }
label_1ffb24:
    // 0x1ffb24: 0xe58af540  swc1        $f10, -0xAC0($t4)
    ctx->pc = 0x1ffb24u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294964544), bits); }
label_1ffb28:
    // 0x1ffb28: 0xe501f548  swc1        $f1, -0xAB8($t0)
    ctx->pc = 0x1ffb28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964552), bits); }
label_1ffb2c:
    // 0x1ffb2c: 0xe52bf54c  swc1        $f11, -0xAB4($t1)
    ctx->pc = 0x1ffb2cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294964556), bits); }
label_1ffb30:
    // 0x1ffb30: 0xe540f550  swc1        $f0, -0xAB0($t2)
    ctx->pc = 0x1ffb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294964560), bits); }
label_1ffb34:
    // 0x1ffb34: 0xe56cf554  swc1        $f12, -0xAAC($t3)
    ctx->pc = 0x1ffb34u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294964564), bits); }
label_1ffb38:
    // 0x1ffb38: 0xe681f524  swc1        $f1, -0xADC($s4)
    ctx->pc = 0x1ffb38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294964516), bits); }
label_1ffb3c:
    // 0x1ffb3c: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1ffb40:
    if (ctx->pc == 0x1FFB40u) {
        ctx->pc = 0x1FFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB3Cu;
        // 0x1ffb40: 0xe660f52c  swc1        $f0, -0xAD4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294964524), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFB44u;
        goto label_1ffb44;
    }
    ctx->pc = 0x1FFB3Cu;
    {
        const bool branch_taken_0x1ffb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB3Cu;
        // 0x1ffb40: 0xe660f52c  swc1        $f0, -0xAD4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294964524), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb3c) {
            ctx->pc = 0x1FFC78u;
            goto label_1ffc78;
        }
    }
    ctx->pc = 0x1FFB44u;
label_1ffb44:
    // 0x1ffb44: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x1ffb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
label_1ffb48:
    // 0x1ffb48: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1ffb48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1ffb4c:
    // 0x1ffb4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ffb4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ffb50:
    // 0x1ffb50: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1ffb50u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1ffb54:
    // 0x1ffb54: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1ffb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_1ffb58:
    // 0x1ffb58: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ffb58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ffb5c:
    // 0x1ffb5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ffb5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffb60:
    // 0x1ffb60: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1ffb60u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1ffb64:
    // 0x1ffb64: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x1ffb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
label_1ffb68:
    // 0x1ffb68: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1ffb68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1ffb6c:
    // 0x1ffb6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ffb6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ffb70:
    // 0x1ffb70: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1ffb70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1ffb74:
    // 0x1ffb74: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1ffb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_1ffb78:
    // 0x1ffb78: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ffb78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ffb7c:
    // 0x1ffb7c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ffb7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ffb80:
    // 0x1ffb80: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1ffb80u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1ffb84:
    // 0x1ffb84: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x1ffb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
label_1ffb88:
    // 0x1ffb88: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1ffb88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1ffb8c:
    // 0x1ffb8c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ffb8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ffb90:
    // 0x1ffb90: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1ffb90u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1ffb94:
    // 0x1ffb94: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1ffb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1ffb98:
    // 0x1ffb98: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ffb98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ffb9c:
    // 0x1ffb9c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ffb9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ffba0:
    // 0x1ffba0: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1ffba0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1ffba4:
    // 0x1ffba4: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x1ffba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
label_1ffba8:
    // 0x1ffba8: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1ffba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1ffbac:
    // 0x1ffbac: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1ffbacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1ffbb0:
    // 0x1ffbb0: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1ffbb0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1ffbb4:
    // 0x1ffbb4: 0x3c013f0f  lui         $at, 0x3F0F
    ctx->pc = 0x1ffbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16143 << 16));
label_1ffbb8:
    // 0x1ffbb8: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1ffbb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1ffbbc:
    // 0x1ffbbc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ffbbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1ffbc0:
    // 0x1ffbc0: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1ffbc0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1ffbc4:
    // 0x1ffbc4: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x1ffbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
label_1ffbc8:
    // 0x1ffbc8: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1ffbc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1ffbcc:
    // 0x1ffbcc: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1ffbccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1ffbd0:
    // 0x1ffbd0: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1ffbd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1ffbd4:
    // 0x1ffbd4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1ffbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1ffbd8:
    // 0x1ffbd8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ffbd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ffbdc:
    // 0x1ffbdc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1ffbdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1ffbe0:
    // 0x1ffbe0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1ffbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1ffbe4:
    // 0x1ffbe4: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x1ffbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
label_1ffbe8:
    // 0x1ffbe8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ffbe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ffbec:
    // 0x1ffbec: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1ffbecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1ffbf0:
    // 0x1ffbf0: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1ffbf0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1ffbf4:
    // 0x1ffbf4: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1ffbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_1ffbf8:
    // 0x1ffbf8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ffbf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ffbfc:
    // 0x1ffbfc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ffbfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ffc00:
    // 0x1ffc00: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1ffc00u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1ffc04:
    // 0x1ffc04: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x1ffc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
label_1ffc08:
    // 0x1ffc08: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ffc08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ffc0c:
    // 0x1ffc0c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1ffc0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1ffc10:
    // 0x1ffc10: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1ffc10u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1ffc14:
    // 0x1ffc14: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1ffc14u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1ffc18:
    // 0x1ffc18: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ffc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ffc1c:
    // 0x1ffc1c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ffc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ffc20:
    // 0x1ffc20: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ffc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ffc24:
    // 0x1ffc24: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1ffc24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1ffc28:
    // 0x1ffc28: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ffc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ffc2c:
    // 0x1ffc2c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1ffc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1ffc30:
    // 0x1ffc30: 0xe445f514  swc1        $f5, -0xAEC($v0)
    ctx->pc = 0x1ffc30u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964500), bits); }
label_1ffc34:
    // 0x1ffc34: 0xe463f518  swc1        $f3, -0xAE8($v1)
    ctx->pc = 0x1ffc34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964504), bits); }
label_1ffc38:
    // 0x1ffc38: 0x180f02d  daddu       $fp, $t4, $zero
    ctx->pc = 0x1ffc38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_1ffc3c:
    // 0x1ffc3c: 0xe484f51c  swc1        $f4, -0xAE4($a0)
    ctx->pc = 0x1ffc3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964508), bits); }
label_1ffc40:
    // 0x1ffc40: 0xacc5f520  sw          $a1, -0xAE0($a2)
    ctx->pc = 0x1ffc40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294964512), GPR_U32(ctx, 5));
label_1ffc44:
    // 0x1ffc44: 0xe4e2f558  swc1        $f2, -0xAA8($a3)
    ctx->pc = 0x1ffc44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964568), bits); }
label_1ffc48:
    // 0x1ffc48: 0xe606f528  swc1        $f6, -0xAD8($s0)
    ctx->pc = 0x1ffc48u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964520), bits); }
label_1ffc4c:
    // 0x1ffc4c: 0xe5c7f530  swc1        $f7, -0xAD0($t6)
    ctx->pc = 0x1ffc4cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294964528), bits); }
label_1ffc50:
    // 0x1ffc50: 0xe5e8f534  swc1        $f8, -0xACC($t7)
    ctx->pc = 0x1ffc50u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294964532), bits); }
label_1ffc54:
    // 0x1ffc54: 0xe509f540  swc1        $f9, -0xAC0($t0)
    ctx->pc = 0x1ffc54u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964544), bits); }
label_1ffc58:
    // 0x1ffc58: 0xe521f548  swc1        $f1, -0xAB8($t1)
    ctx->pc = 0x1ffc58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294964552), bits); }
label_1ffc5c:
    // 0x1ffc5c: 0xe54cf54c  swc1        $f12, -0xAB4($t2)
    ctx->pc = 0x1ffc5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294964556), bits); }
label_1ffc60:
    // 0x1ffc60: 0xe560f550  swc1        $f0, -0xAB0($t3)
    ctx->pc = 0x1ffc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294964560), bits); }
label_1ffc64:
    // 0x1ffc64: 0xe58bf554  swc1        $f11, -0xAAC($t4)
    ctx->pc = 0x1ffc64u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294964564), bits); }
label_1ffc68:
    // 0x1ffc68: 0xe5aaf560  swc1        $f10, -0xAA0($t5)
    ctx->pc = 0x1ffc68u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294964576), bits); }
label_1ffc6c:
    // 0x1ffc6c: 0xe6a1f524  swc1        $f1, -0xADC($s5)
    ctx->pc = 0x1ffc6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294964516), bits); }
label_1ffc70:
    // 0x1ffc70: 0xe680f52c  swc1        $f0, -0xAD4($s4)
    ctx->pc = 0x1ffc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294964524), bits); }
label_1ffc74:
    // 0x1ffc74: 0xe66cf538  swc1        $f12, -0xAC8($s3)
    ctx->pc = 0x1ffc74u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294964536), bits); }
label_1ffc78:
    // 0x1ffc78: 0xe641f53c  swc1        $f1, -0xAC4($s2)
    ctx->pc = 0x1ffc78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294964540), bits); }
label_1ffc7c:
    // 0x1ffc7c: 0xe620f544  swc1        $f0, -0xABC($s1)
    ctx->pc = 0x1ffc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294964548), bits); }
label_1ffc80:
    // 0x1ffc80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ffc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ffc84:
    // 0x1ffc84: 0xc07fa92  jal         func_1FEA48
label_1ffc88:
    if (ctx->pc == 0x1FFC88u) {
        ctx->pc = 0x1FFC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC84u;
        // 0x1ffc88: 0x3c170051  lui         $s7, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFC8Cu;
        goto label_1ffc8c;
    }
    ctx->pc = 0x1FFC84u;
    SET_GPR_U32(ctx, 31, 0x1FFC8Cu);
    ctx->pc = 0x1FFC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC84u;
    // 0x1ffc88: 0x3c170051  lui         $s7, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEA48u, 0x1FFC84u, 0x1FFC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC8Cu;
label_1ffc8c:
    // 0x1ffc8c: 0x8eea27e4  lw          $t2, 0x27E4($s7)
    ctx->pc = 0x1ffc8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_1ffc90:
    // 0x1ffc90: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x1ffc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_1ffc94:
    // 0x1ffc94: 0x24558298  addiu       $s5, $v0, -0x7D68
    ctx->pc = 0x1ffc94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935192));
label_1ffc98:
    // 0x1ffc98: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x1ffc98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_1ffc9c:
    // 0x1ffc9c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1ffc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1ffca0:
    // 0x1ffca0: 0x24a582f8  addiu       $a1, $a1, -0x7D08
    ctx->pc = 0x1ffca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935288));
label_1ffca4:
    // 0x1ffca4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1ffca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ffca8:
    // 0x1ffca8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ffca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ffcac:
    // 0x1ffcac: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ffcacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ffcb0:
    // 0x1ffcb0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1ffcb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ffcb4:
    // 0x1ffcb4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ffcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ffcb8:
    // 0x1ffcb8: 0x24090166  addiu       $t1, $zero, 0x166
    ctx->pc = 0x1ffcb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
label_1ffcbc:
    // 0x1ffcbc: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1ffcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1ffcc0:
    // 0x1ffcc0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ffcc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffcc4:
    // 0x1ffcc4: 0x40f809  jalr        $v0
label_1ffcc8:
    if (ctx->pc == 0x1FFCC8u) {
        ctx->pc = 0x1FFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCC4u;
        // 0x1ffcc8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFCCCu;
        goto label_1ffccc;
    }
    ctx->pc = 0x1FFCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FFCCCu);
        ctx->pc = 0x1FFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCC4u;
        // 0x1ffcc8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFCC4u, 0x1FFCCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FFCCCu;
label_1ffccc:
    // 0x1ffccc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ffcccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ffcd0:
    // 0x1ffcd0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1ffcd4:
    if (ctx->pc == 0x1FFCD4u) {
        ctx->pc = 0x1FFCD8u;
        goto label_1ffcd8;
    }
    ctx->pc = 0x1FFCD0u;
    {
        const bool branch_taken_0x1ffcd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffcd0) {
            ctx->pc = 0x1FFCE4u;
            goto label_1ffce4;
        }
    }
    ctx->pc = 0x1FFCD8u;
label_1ffcd8:
    // 0x1ffcd8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ffcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1ffcdc:
    // 0x1ffcdc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1ffcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1ffce0:
    // 0x1ffce0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1ffce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1ffce4:
    // 0x1ffce4: 0x3c013b83  lui         $at, 0x3B83
    ctx->pc = 0x1ffce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15235 << 16));
label_1ffce8:
    // 0x1ffce8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1ffce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1ffcec:
    // 0x1ffcec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ffcecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ffcf0:
    // 0x1ffcf0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ffcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1ffcf4:
    // 0x1ffcf4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ffcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ffcf8:
    // 0x1ffcf8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ffcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ffcfc:
    // 0x1ffcfc: 0xaec3008c  sw          $v1, 0x8C($s6)
    ctx->pc = 0x1ffcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 140), GPR_U32(ctx, 3));
label_1ffd00:
    // 0x1ffd00: 0xaec20090  sw          $v0, 0x90($s6)
    ctx->pc = 0x1ffd00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 144), GPR_U32(ctx, 2));
label_1ffd04:
    // 0x1ffd04: 0xc07fb08  jal         func_1FEC20
label_1ffd08:
    if (ctx->pc == 0x1FFD08u) {
        ctx->pc = 0x1FFD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD04u;
        // 0x1ffd08: 0xe6c0009c  swc1        $f0, 0x9C($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 156), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFD0Cu;
        goto label_1ffd0c;
    }
    ctx->pc = 0x1FFD04u;
    SET_GPR_U32(ctx, 31, 0x1FFD0Cu);
    ctx->pc = 0x1FFD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD04u;
    // 0x1ffd08: 0xe6c0009c  swc1        $f0, 0x9C($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 156), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC20u, 0x1FFD04u, 0x1FFD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD0Cu;
label_1ffd0c:
    // 0x1ffd0c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ffd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ffd10:
    // 0x1ffd10: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ffd10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1ffd14:
    // 0x1ffd14: 0xc07f728  jal         func_1FDCA0
label_1ffd18:
    if (ctx->pc == 0x1FFD18u) {
        ctx->pc = 0x1FFD1Cu;
        goto label_1ffd1c;
    }
    ctx->pc = 0x1FFD14u;
    SET_GPR_U32(ctx, 31, 0x1FFD1Cu);
    ctx->pc = 0x1FDCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCA0u, 0x1FFD14u, 0x1FFD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD1Cu;
label_1ffd1c:
    // 0x1ffd1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ffd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ffd20:
    // 0x1ffd20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ffd20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ffd24:
    // 0x1ffd24: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1ffd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1ffd28:
    // 0x1ffd28: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1ffd28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ffd2c:
    // 0x1ffd2c: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x1ffd2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1ffd30:
    // 0x1ffd30: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x1ffd30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_1ffd34:
    // 0x1ffd34: 0x24a58308  addiu       $a1, $a1, -0x7CF8
    ctx->pc = 0x1ffd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935304));
label_1ffd38:
    // 0x1ffd38: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1ffd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1ffd3c:
    // 0x1ffd3c: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1ffd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1ffd40:
    // 0x1ffd40: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1ffd40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1ffd44:
    // 0x1ffd44: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ffd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ffd48:
    // 0x1ffd48: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x1ffd48u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_1ffd4c:
    // 0x1ffd4c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1ffd4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ffd50:
    // 0x1ffd50: 0x24090171  addiu       $t1, $zero, 0x171
    ctx->pc = 0x1ffd50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 369));
label_1ffd54:
    // 0x1ffd54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ffd54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffd58:
    // 0x1ffd58: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ffd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ffd5c:
    // 0x1ffd5c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ffd5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffd60:
    // 0x1ffd60: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ffd60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ffd64:
    // 0x1ffd64: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ffd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ffd68:
    // 0x1ffd68: 0x40f809  jalr        $v0
label_1ffd6c:
    if (ctx->pc == 0x1FFD6Cu) {
        ctx->pc = 0x1FFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD68u;
        // 0x1ffd6c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFD70u;
        goto label_1ffd70;
    }
    ctx->pc = 0x1FFD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FFD70u);
        ctx->pc = 0x1FFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD68u;
        // 0x1ffd6c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFD68u, 0x1FFD70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FFD70u;
label_1ffd70:
    // 0x1ffd70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ffd74:
    if (ctx->pc == 0x1FFD74u) {
        ctx->pc = 0x1FFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD70u;
        // 0x1ffd74: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFD78u;
        goto label_1ffd78;
    }
    ctx->pc = 0x1FFD70u;
    {
        const bool branch_taken_0x1ffd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD70u;
        // 0x1ffd74: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd70) {
            ctx->pc = 0x1FFD84u;
            goto label_1ffd84;
        }
    }
    ctx->pc = 0x1FFD78u;
label_1ffd78:
    // 0x1ffd78: 0xc0733e2  jal         func_1CCF88
label_1ffd7c:
    if (ctx->pc == 0x1FFD7Cu) {
        ctx->pc = 0x1FFD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD78u;
        // 0x1ffd7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFD80u;
        goto label_1ffd80;
    }
    ctx->pc = 0x1FFD78u;
    SET_GPR_U32(ctx, 31, 0x1FFD80u);
    ctx->pc = 0x1FFD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD78u;
    // 0x1ffd7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1FFD78u, 0x1FFD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD80u;
label_1ffd80:
    // 0x1ffd80: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x1ffd80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1ffd84:
    // 0x1ffd84: 0x3c01400e  lui         $at, 0x400E
    ctx->pc = 0x1ffd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16398 << 16));
label_1ffd88:
    // 0x1ffd88: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1ffd88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1ffd8c:
    // 0x1ffd8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ffd8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ffd90:
    // 0x1ffd90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ffd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ffd94:
    // 0x1ffd94: 0xc05e602  jal         func_179808
label_1ffd98:
    if (ctx->pc == 0x1FFD98u) {
        ctx->pc = 0x1FFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD94u;
        // 0x1ffd98: 0xaec200b4  sw          $v0, 0xB4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFD9Cu;
        goto label_1ffd9c;
    }
    ctx->pc = 0x1FFD94u;
    SET_GPR_U32(ctx, 31, 0x1FFD9Cu);
    ctx->pc = 0x1FFD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD94u;
    // 0x1ffd98: 0xaec200b4  sw          $v0, 0xB4($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1FFD94u, 0x1FFD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD9Cu;
label_1ffd9c:
    // 0x1ffd9c: 0x8ec500b4  lw          $a1, 0xB4($s6)
    ctx->pc = 0x1ffd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 180)));
label_1ffda0:
    // 0x1ffda0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1ffda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ffda4:
    // 0x1ffda4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ffda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1ffda8:
    // 0x1ffda8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ffda8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffdac:
    // 0x1ffdac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ffdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ffdb0:
    // 0x1ffdb0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ffdb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffdb4:
    // 0x1ffdb4: 0x8c54d310  lw          $s4, -0x2CF0($v0)
    ctx->pc = 0x1ffdb4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1ffdb8:
    // 0x1ffdb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ffdb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffdbc:
    // 0x1ffdbc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1ffdbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1ffdc0:
    // 0x1ffdc0: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1ffdc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ffdc4:
    // 0x1ffdc4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1ffdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_1ffdc8:
    // 0x1ffdc8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1ffdc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ffdcc:
    // 0x1ffdcc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1ffdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1ffdd0:
    // 0x1ffdd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ffdd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ffdd4:
    // 0x1ffdd4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1ffdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1ffdd8:
    // 0x1ffdd8: 0x40f809  jalr        $v0
label_1ffddc:
    if (ctx->pc == 0x1FFDDCu) {
        ctx->pc = 0x1FFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDD8u;
        // 0x1ffddc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFDE0u;
        goto label_1ffde0;
    }
    ctx->pc = 0x1FFDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FFDE0u);
        ctx->pc = 0x1FFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDD8u;
        // 0x1ffddc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFDD8u, 0x1FFDE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FFDE0u;
label_1ffde0:
    // 0x1ffde0: 0xc067b9c  jal         func_19EE70
label_1ffde4:
    if (ctx->pc == 0x1FFDE4u) {
        ctx->pc = 0x1FFDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDE0u;
        // 0x1ffde4: 0x2404004b  addiu       $a0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFDE8u;
        goto label_1ffde8;
    }
    ctx->pc = 0x1FFDE0u;
    SET_GPR_U32(ctx, 31, 0x1FFDE8u);
    ctx->pc = 0x1FFDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFDE0u;
    // 0x1ffde4: 0x2404004b  addiu       $a0, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FFDE0u, 0x1FFDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFDE8u;
label_1ffde8:
    // 0x1ffde8: 0x8ec400b4  lw          $a0, 0xB4($s6)
    ctx->pc = 0x1ffde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 180)));
label_1ffdec:
    // 0x1ffdec: 0xc073478  jal         func_1CD1E0
label_1ffdf0:
    if (ctx->pc == 0x1FFDF0u) {
        ctx->pc = 0x1FFDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDECu;
        // 0x1ffdf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFDF4u;
        goto label_1ffdf4;
    }
    ctx->pc = 0x1FFDECu;
    SET_GPR_U32(ctx, 31, 0x1FFDF4u);
    ctx->pc = 0x1FFDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFDECu;
    // 0x1ffdf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1FFDECu, 0x1FFDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFDF4u;
label_1ffdf4:
    // 0x1ffdf4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ffdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1ffdf8:
    // 0x1ffdf8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1ffdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1ffdfc:
    // 0x1ffdfc: 0x27a60084  addiu       $a2, $sp, 0x84
    ctx->pc = 0x1ffdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_1ffe00:
    // 0x1ffe00: 0xc1091f4  jal         func_4247D0
label_1ffe04:
    if (ctx->pc == 0x1FFE04u) {
        ctx->pc = 0x1FFE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE00u;
        // 0x1ffe04: 0x2484e998  addiu       $a0, $a0, -0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFE08u;
        goto label_1ffe08;
    }
    ctx->pc = 0x1FFE00u;
    SET_GPR_U32(ctx, 31, 0x1FFE08u);
    ctx->pc = 0x1FFE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE00u;
    // 0x1ffe04: 0x2484e998  addiu       $a0, $a0, -0x1668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4247D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4247D0u, 0x1FFE00u, 0x1FFE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFE08u;
label_1ffe08:
    // 0x1ffe08: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x1ffe08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_1ffe0c:
    // 0x1ffe0c: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x1ffe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_1ffe10:
    // 0x1ffe10: 0x24478318  addiu       $a3, $v0, -0x7CE8
    ctx->pc = 0x1ffe10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935320));
label_1ffe14:
    // 0x1ffe14: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1ffe14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1ffe18:
    // 0x1ffe18: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1ffe18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1ffe1c:
    // 0x1ffe1c: 0x80e50008  lb          $a1, 0x8($a3)
    ctx->pc = 0x1ffe1cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_1ffe20:
    // 0x1ffe20: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x1ffe20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ffe24:
    // 0x1ffe24: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x1ffe24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ffe28:
    // 0x1ffe28: 0xa3a50048  sb          $a1, 0x48($sp)
    ctx->pc = 0x1ffe28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 5));
label_1ffe2c:
    // 0x1ffe2c: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x1ffe2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ffe30:
    // 0x1ffe30: 0x24678328  addiu       $a3, $v1, -0x7CD8
    ctx->pc = 0x1ffe30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935336));
label_1ffe34:
    // 0x1ffe34: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x1ffe34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1ffe38:
    // 0x1ffe38: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x1ffe38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1ffe3c:
    // 0x1ffe3c: 0x80e40008  lb          $a0, 0x8($a3)
    ctx->pc = 0x1ffe3cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_1ffe40:
    // 0x1ffe40: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x1ffe40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ffe44:
    // 0x1ffe44: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x1ffe44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ffe48:
    // 0x1ffe48: 0xa3a40058  sb          $a0, 0x58($sp)
    ctx->pc = 0x1ffe48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 4));
label_1ffe4c:
    // 0x1ffe4c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x1ffe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_1ffe50:
    // 0x1ffe50: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x1ffe50u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_1ffe54:
    // 0x1ffe54: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ffe54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffe58:
    // 0x1ffe58: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1ffe58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ffe5c:
    // 0x1ffe5c: 0x24a58338  addiu       $a1, $a1, -0x7CC8
    ctx->pc = 0x1ffe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935352));
label_1ffe60:
    // 0x1ffe60: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ffe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ffe64:
    // 0x1ffe64: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1ffe64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1ffe68:
    // 0x1ffe68: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ffe68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ffe6c:
    // 0x1ffe6c: 0x2409017f  addiu       $t1, $zero, 0x17F
    ctx->pc = 0x1ffe6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
label_1ffe70:
    // 0x1ffe70: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ffe70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ffe74:
    // 0x1ffe74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ffe74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffe78:
    // 0x1ffe78: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ffe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ffe7c:
    // 0x1ffe7c: 0x40f809  jalr        $v0
label_1ffe80:
    if (ctx->pc == 0x1FFE80u) {
        ctx->pc = 0x1FFE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE7Cu;
        // 0x1ffe80: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFE84u;
        goto label_1ffe84;
    }
    ctx->pc = 0x1FFE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FFE84u);
        ctx->pc = 0x1FFE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE7Cu;
        // 0x1ffe80: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFE7Cu, 0x1FFE84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FFE84u;
label_1ffe84:
    // 0x1ffe84: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x1ffe84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_1ffe88:
    // 0x1ffe88: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x1ffe88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_1ffe8c:
    // 0x1ffe8c: 0x26108340  addiu       $s0, $s0, -0x7CC0
    ctx->pc = 0x1ffe8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935360));
label_1ffe90:
    // 0x1ffe90: 0xc067b9c  jal         func_19EE70
label_1ffe94:
    if (ctx->pc == 0x1FFE94u) {
        ctx->pc = 0x1FFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE90u;
        // 0x1ffe94: 0xaec200c4  sw          $v0, 0xC4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFE98u;
        goto label_1ffe98;
    }
    ctx->pc = 0x1FFE90u;
    SET_GPR_U32(ctx, 31, 0x1FFE98u);
    ctx->pc = 0x1FFE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE90u;
    // 0x1ffe94: 0xaec200c4  sw          $v0, 0xC4($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FFE90u, 0x1FFE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFE98u;
label_1ffe98:
    // 0x1ffe98: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1ffe98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1ffe9c:
    // 0x1ffe9c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ffe9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ffea0:
    // 0x1ffea0: 0x8faa0084  lw          $t2, 0x84($sp)
    ctx->pc = 0x1ffea0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_1ffea4:
    // 0x1ffea4: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x1ffea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_1ffea8:
    // 0x1ffea8: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x1ffea8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ffeac:
    // 0x1ffeac: 0x8ec400c4  lw          $a0, 0xC4($s6)
    ctx->pc = 0x1ffeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 196)));
label_1ffeb0:
    // 0x1ffeb0: 0x6a1826  xor         $v1, $v1, $t2
    ctx->pc = 0x1ffeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 10));
label_1ffeb4:
    // 0x1ffeb4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ffeb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ffeb8:
    // 0x1ffeb8: 0x243400b  movn        $t0, $s2, $v1
    ctx->pc = 0x1ffeb8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 18));
label_1ffebc:
    // 0x1ffebc: 0xc10ca04  jal         func_432810
label_1ffec0:
    if (ctx->pc == 0x1FFEC0u) {
        ctx->pc = 0x1FFEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEBCu;
        // 0x1ffec0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFEC4u;
        goto label_1ffec4;
    }
    ctx->pc = 0x1FFEBCu;
    SET_GPR_U32(ctx, 31, 0x1FFEC4u);
    ctx->pc = 0x1FFEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFEBCu;
    // 0x1ffec0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1FFEBCu, 0x1FFEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFEC4u;
label_1ffec4:
    // 0x1ffec4: 0xc7c0f554  lwc1        $f0, -0xAAC($fp)
    ctx->pc = 0x1ffec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294964564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ffec8:
    // 0x1ffec8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x1ffec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_1ffecc:
    // 0x1ffecc: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x1ffeccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_1ffed0:
    // 0x1ffed0: 0x24a58368  addiu       $a1, $a1, -0x7C98
    ctx->pc = 0x1ffed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935400));
label_1ffed4:
    // 0x1ffed4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1ffed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1ffed8:
    // 0x1ffed8: 0x240601f0  addiu       $a2, $zero, 0x1F0
    ctx->pc = 0x1ffed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_1ffedc:
    // 0x1ffedc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ffedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ffee0:
    // 0x1ffee0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1ffee0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ffee4:
    // 0x1ffee4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ffee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ffee8:
    // 0x1ffee8: 0x24090185  addiu       $t1, $zero, 0x185
    ctx->pc = 0x1ffee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
label_1ffeec:
    // 0x1ffeec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ffeecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffef0:
    // 0x1ffef0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ffef0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffef4:
    // 0x1ffef4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ffef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ffef8:
    // 0x1ffef8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ffef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ffefc:
    // 0x1ffefc: 0x40f809  jalr        $v0
label_1fff00:
    if (ctx->pc == 0x1FFF00u) {
        ctx->pc = 0x1FFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEFCu;
        // 0x1fff00: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF04u;
        goto label_1fff04;
    }
    ctx->pc = 0x1FFEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FFF04u);
        ctx->pc = 0x1FFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEFCu;
        // 0x1fff00: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFEFCu, 0x1FFF04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FFF04u;
label_1fff04:
    // 0x1fff04: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1fff08:
    if (ctx->pc == 0x1FFF08u) {
        ctx->pc = 0x1FFF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF04u;
        // 0x1fff08: 0xaec200c0  sw          $v0, 0xC0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF0Cu;
        goto label_1fff0c;
    }
    ctx->pc = 0x1FFF04u;
    {
        const bool branch_taken_0x1fff04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fff04) {
            ctx->pc = 0x1FFF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFF04u;
            // 0x1fff08: 0xaec200c0  sw          $v0, 0xC0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 192), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFF18u;
            goto label_1fff18;
        }
    }
    ctx->pc = 0x1FFF0Cu;
label_1fff0c:
    // 0x1fff0c: 0xc06e3e6  jal         func_1B8F98
label_1fff10:
    if (ctx->pc == 0x1FFF10u) {
        ctx->pc = 0x1FFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF0Cu;
        // 0x1fff10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF14u;
        goto label_1fff14;
    }
    ctx->pc = 0x1FFF0Cu;
    SET_GPR_U32(ctx, 31, 0x1FFF14u);
    ctx->pc = 0x1FFF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF0Cu;
    // 0x1fff10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1FFF0Cu, 0x1FFF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFF14u;
label_1fff14:
    // 0x1fff14: 0xaec200c0  sw          $v0, 0xC0($s6)
    ctx->pc = 0x1fff14u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 192), GPR_U32(ctx, 2));
label_1fff18:
    // 0x1fff18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fff18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fff1c:
    // 0x1fff1c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fff1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fff20:
    // 0x1fff20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fff20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fff24:
    // 0x1fff24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fff24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fff28:
    // 0x1fff28: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1fff28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fff2c:
    // 0x1fff2c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fff2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fff30:
    // 0x1fff30: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fff30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1fff34:
    // 0x1fff34: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1fff34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1fff38:
    // 0x1fff38: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1fff38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1fff3c:
    // 0x1fff3c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1fff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1fff40:
    // 0x1fff40: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1fff40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fff44:
    // 0x1fff44: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1fff44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1fff48:
    // 0x1fff48: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1fff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1fff4c:
    // 0x1fff4c: 0x40f809  jalr        $v0
label_1fff50:
    if (ctx->pc == 0x1FFF50u) {
        ctx->pc = 0x1FFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF4Cu;
        // 0x1fff50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF54u;
        goto label_1fff54;
    }
    ctx->pc = 0x1FFF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FFF54u);
        ctx->pc = 0x1FFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF4Cu;
        // 0x1fff50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFF4Cu, 0x1FFF54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FFF54u;
label_1fff54:
    // 0x1fff54: 0x8ec400c0  lw          $a0, 0xC0($s6)
    ctx->pc = 0x1fff54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 192)));
label_1fff58:
    // 0x1fff58: 0xc06e51e  jal         func_1B9478
label_1fff5c:
    if (ctx->pc == 0x1FFF5Cu) {
        ctx->pc = 0x1FFF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF58u;
        // 0x1fff5c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF60u;
        goto label_1fff60;
    }
    ctx->pc = 0x1FFF58u;
    SET_GPR_U32(ctx, 31, 0x1FFF60u);
    ctx->pc = 0x1FFF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF58u;
    // 0x1fff5c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1FFF58u, 0x1FFF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFF60u;
label_1fff60:
    // 0x1fff60: 0x8ec600c0  lw          $a2, 0xC0($s6)
    ctx->pc = 0x1fff60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 192)));
label_1fff64:
    // 0x1fff64: 0x8ec500c4  lw          $a1, 0xC4($s6)
    ctx->pc = 0x1fff64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 196)));
label_1fff68:
    // 0x1fff68: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fff6c:
    // 0x1fff6c: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x1fff6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
label_1fff70:
    // 0x1fff70: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x1fff70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
label_1fff74:
    // 0x1fff74: 0x60f809  jalr        $v1
label_1fff78:
    if (ctx->pc == 0x1FFF78u) {
        ctx->pc = 0x1FFF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF74u;
        // 0x1fff78: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF7Cu;
        goto label_1fff7c;
    }
    ctx->pc = 0x1FFF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FFF7Cu);
        ctx->pc = 0x1FFF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF74u;
        // 0x1fff78: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFF74u, 0x1FFF7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FFF7Cu;
label_1fff7c:
    // 0x1fff7c: 0x8ec700c0  lw          $a3, 0xC0($s6)
    ctx->pc = 0x1fff7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 192)));
label_1fff80:
    // 0x1fff80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fff80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fff84:
    // 0x1fff84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fff84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fff88:
    // 0x1fff88: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fff8c:
    // 0x1fff8c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1fff8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1fff90:
    // 0x1fff90: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fff94:
    // 0x1fff94: 0x60f809  jalr        $v1
label_1fff98:
    if (ctx->pc == 0x1FFF98u) {
        ctx->pc = 0x1FFF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF94u;
        // 0x1fff98: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF9Cu;
        goto label_1fff9c;
    }
    ctx->pc = 0x1FFF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FFF9Cu);
        ctx->pc = 0x1FFF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF94u;
        // 0x1fff98: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFF94u, 0x1FFF9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FFF9Cu;
label_1fff9c:
    // 0x1fff9c: 0xc07f734  jal         func_1FDCD0
label_1fffa0:
    if (ctx->pc == 0x1FFFA0u) {
        ctx->pc = 0x1FFFA4u;
        goto label_1fffa4;
    }
    ctx->pc = 0x1FFF9Cu;
    SET_GPR_U32(ctx, 31, 0x1FFFA4u);
    ctx->pc = 0x1FDCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCD0u, 0x1FFF9Cu, 0x1FFFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFFA4u;
label_1fffa4:
    // 0x1fffa4: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x1fffa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1fffa8:
    // 0x1fffa8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x1fffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_1fffac:
    // 0x1fffac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1fffacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1fffb0:
    // 0x1fffb0: 0x24a58378  addiu       $a1, $a1, -0x7C88
    ctx->pc = 0x1fffb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935416));
label_1fffb4:
    // 0x1fffb4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1fffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1fffb8:
    // 0x1fffb8: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x1fffb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_1fffbc:
    // 0x1fffbc: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1fffbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1fffc0:
    // 0x1fffc0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fffc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fffc4:
    // 0x1fffc4: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x1fffc4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_1fffc8:
    // 0x1fffc8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1fffc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fffcc:
    // 0x1fffcc: 0x2409018d  addiu       $t1, $zero, 0x18D
    ctx->pc = 0x1fffccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 397));
label_1fffd0:
    // 0x1fffd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fffd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fffd4:
    // 0x1fffd4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fffd8:
    // 0x1fffd8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fffd8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fffdc:
    // 0x1fffdc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fffdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fffe0:
    // 0x1fffe0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fffe4:
    // 0x1fffe4: 0x40f809  jalr        $v0
label_1fffe8:
    if (ctx->pc == 0x1FFFE8u) {
        ctx->pc = 0x1FFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFE4u;
        // 0x1fffe8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFFECu;
        goto label_1fffec;
    }
    ctx->pc = 0x1FFFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FFFECu);
        ctx->pc = 0x1FFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFE4u;
        // 0x1fffe8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFFE4u, 0x1FFFECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FFFECu;
label_1fffec:
    // 0x1fffec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ffff0:
    if (ctx->pc == 0x1FFFF0u) {
        ctx->pc = 0x1FFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFECu;
        // 0x1ffff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFFF4u;
        goto label_1ffff4;
    }
    ctx->pc = 0x1FFFECu;
    {
        const bool branch_taken_0x1fffec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFECu;
        // 0x1ffff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffec) {
            ctx->pc = 0x200000u;
            goto label_200000;
        }
    }
    ctx->pc = 0x1FFFF4u;
label_1ffff4:
    // 0x1ffff4: 0xc073a9c  jal         func_1CEA70
label_1ffff8:
    if (ctx->pc == 0x1FFFF8u) {
        ctx->pc = 0x1FFFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFF4u;
        // 0x1ffff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFFFCu;
        goto label_1ffffc;
    }
    ctx->pc = 0x1FFFF4u;
    SET_GPR_U32(ctx, 31, 0x1FFFFCu);
    ctx->pc = 0x1FFFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFFF4u;
    // 0x1ffff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x1FFFF4u, 0x1FFFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFFFCu;
label_1ffffc:
    // 0x1ffffc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ffffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200000:
    // 0x200000: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200004:
    // 0x200004: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x200004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_200008:
    // 0x200008: 0xc073ad0  jal         func_1CEB40
label_20000c:
    if (ctx->pc == 0x20000Cu) {
        ctx->pc = 0x20000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200008u;
        // 0x20000c: 0xaec200bc  sw          $v0, 0xBC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200010u;
        goto label_200010;
    }
    ctx->pc = 0x200008u;
    SET_GPR_U32(ctx, 31, 0x200010u);
    ctx->pc = 0x20000Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200008u;
    // 0x20000c: 0xaec200bc  sw          $v0, 0xBC($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x200008u, 0x200010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200010u;
label_200010:
    // 0x200010: 0xc067b9c  jal         func_19EE70
label_200014:
    if (ctx->pc == 0x200014u) {
        ctx->pc = 0x200014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200010u;
        // 0x200014: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200018u;
        goto label_200018;
    }
    ctx->pc = 0x200010u;
    SET_GPR_U32(ctx, 31, 0x200018u);
    ctx->pc = 0x200014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200010u;
    // 0x200014: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x200010u, 0x200018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200018u;
label_200018:
    // 0x200018: 0x8ec400bc  lw          $a0, 0xBC($s6)
    ctx->pc = 0x200018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 188)));
label_20001c:
    // 0x20001c: 0xc073b0a  jal         func_1CEC28
label_200020:
    if (ctx->pc == 0x200020u) {
        ctx->pc = 0x200020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20001Cu;
        // 0x200020: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200024u;
        goto label_200024;
    }
    ctx->pc = 0x20001Cu;
    SET_GPR_U32(ctx, 31, 0x200024u);
    ctx->pc = 0x200020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20001Cu;
    // 0x200020: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x20001Cu, 0x200024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200024u;
label_200024:
    // 0x200024: 0xc07fc72  jal         func_1FF1C8
label_200028:
    if (ctx->pc == 0x200028u) {
        ctx->pc = 0x200028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200024u;
        // 0x200028: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20002Cu;
        goto label_20002c;
    }
    ctx->pc = 0x200024u;
    SET_GPR_U32(ctx, 31, 0x20002Cu);
    ctx->pc = 0x200028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200024u;
    // 0x200028: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF1C8u, 0x200024u, 0x20002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20002Cu;
label_20002c:
    // 0x20002c: 0x8ec500b8  lw          $a1, 0xB8($s6)
    ctx->pc = 0x20002cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 184)));
label_200030:
    // 0x200030: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x200030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_200034:
    // 0x200034: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x200034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_200038:
    // 0x200038: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x200038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_20003c:
    // 0x20003c: 0x60f809  jalr        $v1
label_200040:
    if (ctx->pc == 0x200040u) {
        ctx->pc = 0x200040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20003Cu;
        // 0x200040: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200044u;
        goto label_200044;
    }
    ctx->pc = 0x20003Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x200044u);
        ctx->pc = 0x200040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20003Cu;
        // 0x200040: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20003Cu, 0x200044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200044u;
label_200044:
    // 0x200044: 0xc080594  jal         func_201650
label_200048:
    if (ctx->pc == 0x200048u) {
        ctx->pc = 0x200048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200044u;
        // 0x200048: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20004Cu;
        goto label_20004c;
    }
    ctx->pc = 0x200044u;
    SET_GPR_U32(ctx, 31, 0x20004Cu);
    ctx->pc = 0x200048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200044u;
    // 0x200048: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201650u, 0x200044u, 0x20004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20004Cu;
label_20004c:
    // 0x20004c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x20004cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_200050:
    // 0x200050: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x200050u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_200054:
    // 0x200054: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_200058:
    // 0x200058: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x200058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_20005c:
    // 0x20005c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x20005cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_200060:
    // 0x200060: 0x24528388  addiu       $s2, $v0, -0x7C78
    ctx->pc = 0x200060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935432));
label_200064:
    // 0x200064: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x200064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_200068:
    // 0x200068: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20006c:
    // 0x20006c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x20006cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_200070:
    // 0x200070: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x200070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_200074:
    // 0x200074: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x200074u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_200078:
    // 0x200078: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x200078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20007c:
    // 0x20007c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x20007cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_200080:
    // 0x200080: 0x2409019a  addiu       $t1, $zero, 0x19A
    ctx->pc = 0x200080u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
label_200084:
    // 0x200084: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x200084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_200088:
    // 0x200088: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x200088u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20008c:
    // 0x20008c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20008cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200090:
    // 0x200090: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x200090u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_200094:
    // 0x200094: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x200094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_200098:
    // 0x200098: 0x40f809  jalr        $v0
label_20009c:
    if (ctx->pc == 0x20009Cu) {
        ctx->pc = 0x20009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200098u;
        // 0x20009c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2000A0u;
        goto label_2000a0;
    }
    ctx->pc = 0x200098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2000A0u);
        ctx->pc = 0x20009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200098u;
        // 0x20009c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200098u, 0x2000A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2000A0u;
label_2000a0:
    // 0x2000a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2000a4:
    if (ctx->pc == 0x2000A4u) {
        ctx->pc = 0x2000A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000A0u;
        // 0x2000a4: 0xaec200c8  sw          $v0, 0xC8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2000A8u;
        goto label_2000a8;
    }
    ctx->pc = 0x2000A0u;
    {
        const bool branch_taken_0x2000a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2000a0) {
            ctx->pc = 0x2000A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2000A0u;
            // 0x2000a4: 0xaec200c8  sw          $v0, 0xC8($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 200), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2000B4u;
            goto label_2000b4;
        }
    }
    ctx->pc = 0x2000A8u;
label_2000a8:
    // 0x2000a8: 0xc0686fe  jal         func_1A1BF8
label_2000ac:
    if (ctx->pc == 0x2000ACu) {
        ctx->pc = 0x2000ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000A8u;
        // 0x2000ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2000B0u;
        goto label_2000b0;
    }
    ctx->pc = 0x2000A8u;
    SET_GPR_U32(ctx, 31, 0x2000B0u);
    ctx->pc = 0x2000ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2000A8u;
    // 0x2000ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x2000A8u, 0x2000B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2000B0u;
label_2000b0:
    // 0x2000b0: 0xaec200c8  sw          $v0, 0xC8($s6)
    ctx->pc = 0x2000b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 200), GPR_U32(ctx, 2));
label_2000b4:
    // 0x2000b4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2000b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2000b8:
    // 0x2000b8: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x2000b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2000bc:
    // 0x2000bc: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2000bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_2000c0:
    // 0x2000c0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2000c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2000c4:
    // 0x2000c4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2000c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2000c8:
    // 0x2000c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2000c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2000cc:
    // 0x2000cc: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2000ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2000d0:
    // 0x2000d0: 0x3c0145fd  lui         $at, 0x45FD
    ctx->pc = 0x2000d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17917 << 16));
label_2000d4:
    // 0x2000d4: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x2000d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_2000d8:
    // 0x2000d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2000d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2000dc:
    // 0x2000dc: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x2000dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_2000e0:
    // 0x2000e0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2000e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2000e4:
    // 0x2000e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2000e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2000e8:
    // 0x2000e8: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x2000e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
label_2000ec:
    // 0x2000ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2000ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2000f0:
    // 0x2000f0: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x2000f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
label_2000f4:
    // 0x2000f4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2000f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2000f8:
    // 0x2000f8: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x2000f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_2000fc:
    // 0x2000fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2000fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200100:
    // 0x200100: 0x3529001e  ori         $t1, $t1, 0x1E
    ctx->pc = 0x200100u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)30);
label_200104:
    // 0x200104: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x200104u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200108:
    // 0x200108: 0x8eca00b0  lw          $t2, 0xB0($s6)
    ctx->pc = 0x200108u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
label_20010c:
    // 0x20010c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x20010cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_200110:
    // 0x200110: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x200110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_200114:
    // 0x200114: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x200114u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_200118:
    // 0x200118: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x200118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_20011c:
    // 0x20011c: 0x40f809  jalr        $v0
label_200120:
    if (ctx->pc == 0x200120u) {
        ctx->pc = 0x200120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20011Cu;
        // 0x200120: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200124u;
        goto label_200124;
    }
    ctx->pc = 0x20011Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200124u);
        ctx->pc = 0x200120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20011Cu;
        // 0x200120: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20011Cu, 0x200124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200124u;
label_200124:
    // 0x200124: 0x8ec600c8  lw          $a2, 0xC8($s6)
    ctx->pc = 0x200124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 200)));
label_200128:
    // 0x200128: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x200128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20012c:
    // 0x20012c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_200130:
    // 0x200130: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x200130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_200134:
    // 0x200134: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x200134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_200138:
    // 0x200138: 0x60f809  jalr        $v1
label_20013c:
    if (ctx->pc == 0x20013Cu) {
        ctx->pc = 0x20013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200138u;
        // 0x20013c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200140u;
        goto label_200140;
    }
    ctx->pc = 0x200138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x200140u);
        ctx->pc = 0x20013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200138u;
        // 0x20013c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200138u, 0x200140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200140u;
label_200140:
    // 0x200140: 0x8ec500c8  lw          $a1, 0xC8($s6)
    ctx->pc = 0x200140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 200)));
label_200144:
    // 0x200144: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x200144u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_200148:
    // 0x200148: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x200148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20014c:
    // 0x20014c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x20014cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_200150:
    // 0x200150: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x200150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_200154:
    // 0x200154: 0x60f809  jalr        $v1
label_200158:
    if (ctx->pc == 0x200158u) {
        ctx->pc = 0x200158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200154u;
        // 0x200158: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20015Cu;
        goto label_20015c;
    }
    ctx->pc = 0x200154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20015Cu);
        ctx->pc = 0x200158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200154u;
        // 0x200158: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200154u, 0x20015Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20015Cu;
label_20015c:
    // 0x20015c: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x20015cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_200160:
    // 0x200160: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_200164:
    // 0x200164: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x200164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_200168:
    // 0x200168: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x200168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20016c:
    // 0x20016c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20016cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_200170:
    // 0x200170: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x200170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_200174:
    // 0x200174: 0x2409019f  addiu       $t1, $zero, 0x19F
    ctx->pc = 0x200174u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
label_200178:
    // 0x200178: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x200178u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20017c:
    // 0x20017c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20017cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_200180:
    // 0x200180: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x200180u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200184:
    // 0x200184: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x200184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_200188:
    // 0x200188: 0x40f809  jalr        $v0
label_20018c:
    if (ctx->pc == 0x20018Cu) {
        ctx->pc = 0x20018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200188u;
        // 0x20018c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200190u;
        goto label_200190;
    }
    ctx->pc = 0x200188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200190u);
        ctx->pc = 0x20018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200188u;
        // 0x20018c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200188u, 0x200190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200190u;
label_200190:
    // 0x200190: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_200194:
    if (ctx->pc == 0x200194u) {
        ctx->pc = 0x200194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200190u;
        // 0x200194: 0xaec200cc  sw          $v0, 0xCC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200198u;
        goto label_200198;
    }
    ctx->pc = 0x200190u;
    {
        const bool branch_taken_0x200190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200190) {
            ctx->pc = 0x200194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200190u;
            // 0x200194: 0xaec200cc  sw          $v0, 0xCC($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 204), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2001A4u;
            goto label_2001a4;
        }
    }
    ctx->pc = 0x200198u;
label_200198:
    // 0x200198: 0xc0686fe  jal         func_1A1BF8
label_20019c:
    if (ctx->pc == 0x20019Cu) {
        ctx->pc = 0x20019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200198u;
        // 0x20019c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2001A0u;
        goto label_2001a0;
    }
    ctx->pc = 0x200198u;
    SET_GPR_U32(ctx, 31, 0x2001A0u);
    ctx->pc = 0x20019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200198u;
    // 0x20019c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x200198u, 0x2001A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001A0u;
label_2001a0:
    // 0x2001a0: 0xaec200cc  sw          $v0, 0xCC($s6)
    ctx->pc = 0x2001a0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 204), GPR_U32(ctx, 2));
label_2001a4:
    // 0x2001a4: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x2001a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_2001a8:
    // 0x2001a8: 0x8eca00b0  lw          $t2, 0xB0($s6)
    ctx->pc = 0x2001a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
label_2001ac:
    // 0x2001ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2001acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2001b0:
    // 0x2001b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2001b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2001b4:
    // 0x2001b4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2001b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2001b8:
    // 0x2001b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2001b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2001bc:
    // 0x2001bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2001bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2001c0:
    // 0x2001c0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2001c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2001c4:
    // 0x2001c4: 0x3529001e  ori         $t1, $t1, 0x1E
    ctx->pc = 0x2001c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)30);
label_2001c8:
    // 0x2001c8: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x2001c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
label_2001cc:
    // 0x2001cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2001ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2001d0:
    // 0x2001d0: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x2001d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
label_2001d4:
    // 0x2001d4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2001d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2001d8:
    // 0x2001d8: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x2001d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_2001dc:
    // 0x2001dc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2001dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_2001e0:
    // 0x2001e0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2001e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2001e4:
    // 0x2001e4: 0x40f809  jalr        $v0
label_2001e8:
    if (ctx->pc == 0x2001E8u) {
        ctx->pc = 0x2001E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001E4u;
        // 0x2001e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2001ECu;
        goto label_2001ec;
    }
    ctx->pc = 0x2001E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2001ECu);
        ctx->pc = 0x2001E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001E4u;
        // 0x2001e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2001E4u, 0x2001ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2001ECu;
label_2001ec:
    // 0x2001ec: 0x8ec600cc  lw          $a2, 0xCC($s6)
    ctx->pc = 0x2001ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 204)));
label_2001f0:
    // 0x2001f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2001f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2001f4:
    // 0x2001f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2001f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2001f8:
    // 0x2001f8: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x2001f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_2001fc:
    // 0x2001fc: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x2001fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_200200:
    // 0x200200: 0x60f809  jalr        $v1
label_200204:
    if (ctx->pc == 0x200204u) {
        ctx->pc = 0x200204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200200u;
        // 0x200204: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200208u;
        goto label_200208;
    }
    ctx->pc = 0x200200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x200208u);
        ctx->pc = 0x200204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200200u;
        // 0x200204: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200200u, 0x200208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200208u;
label_200208:
    // 0x200208: 0x8ec500cc  lw          $a1, 0xCC($s6)
    ctx->pc = 0x200208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 204)));
label_20020c:
    // 0x20020c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x20020cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_200210:
    // 0x200210: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x200210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_200214:
    // 0x200214: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x200214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_200218:
    // 0x200218: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x200218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20021c:
    // 0x20021c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x20021cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_200220:
    // 0x200220: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x200220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_200224:
    // 0x200224: 0x60f809  jalr        $v1
label_200228:
    if (ctx->pc == 0x200228u) {
        ctx->pc = 0x200228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200224u;
        // 0x200228: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20022Cu;
        goto label_20022c;
    }
    ctx->pc = 0x200224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20022Cu);
        ctx->pc = 0x200228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200224u;
        // 0x200228: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200224u, 0x20022Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20022Cu;
label_20022c:
    // 0x20022c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_200230:
    // 0x200230: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x200230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_200234:
    // 0x200234: 0xc440f524  lwc1        $f0, -0xADC($v0)
    ctx->pc = 0x200234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_200238:
    // 0x200238: 0x240901a6  addiu       $t1, $zero, 0x1A6
    ctx->pc = 0x200238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
label_20023c:
    // 0x20023c: 0xc461f528  lwc1        $f1, -0xAD8($v1)
    ctx->pc = 0x20023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_200240:
    // 0x200240: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x200240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_200244:
    // 0x200244: 0x24a58398  addiu       $a1, $a1, -0x7C68
    ctx->pc = 0x200244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935448));
label_200248:
    // 0x200248: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x200248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_20024c:
    // 0x20024c: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x20024cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_200250:
    // 0x200250: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x200250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_200254:
    // 0x200254: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x200254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_200258:
    // 0x200258: 0xe7b60034  swc1        $f22, 0x34($sp)
    ctx->pc = 0x200258u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_20025c:
    // 0x20025c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x20025cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_200260:
    // 0x200260: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x200260u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_200264:
    // 0x200264: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x200264u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200268:
    // 0x200268: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x200268u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_20026c:
    // 0x20026c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20026cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200270:
    // 0x200270: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x200270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_200274:
    // 0x200274: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x200274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_200278:
    // 0x200278: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x200278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20027c:
    // 0x20027c: 0x40f809  jalr        $v0
label_200280:
    if (ctx->pc == 0x200280u) {
        ctx->pc = 0x200280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20027Cu;
        // 0x200280: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200284u;
        goto label_200284;
    }
    ctx->pc = 0x20027Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200284u);
        ctx->pc = 0x200280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20027Cu;
        // 0x200280: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20027Cu, 0x200284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200284u;
label_200284:
    // 0x200284: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x200284u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200288:
    // 0x200288: 0x51200005  beql        $t1, $zero, . + 4 + (0x5 << 2)
label_20028c:
    if (ctx->pc == 0x20028Cu) {
        ctx->pc = 0x20028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200288u;
        // 0x20028c: 0xaec900d0  sw          $t1, 0xD0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 208), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200290u;
        goto label_200290;
    }
    ctx->pc = 0x200288u;
    {
        const bool branch_taken_0x200288 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x200288) {
            ctx->pc = 0x20028Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200288u;
            // 0x20028c: 0xaec900d0  sw          $t1, 0xD0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 208), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2002A0u;
            goto label_2002a0;
        }
    }
    ctx->pc = 0x200290u;
label_200290:
    // 0x200290: 0xc0705aa  jal         func_1C16A8
label_200294:
    if (ctx->pc == 0x200294u) {
        ctx->pc = 0x200294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200290u;
        // 0x200294: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200298u;
        goto label_200298;
    }
    ctx->pc = 0x200290u;
    SET_GPR_U32(ctx, 31, 0x200298u);
    ctx->pc = 0x200294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200290u;
    // 0x200294: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x200290u, 0x200298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200298u;
label_200298:
    // 0x200298: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x200298u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20029c:
    // 0x20029c: 0xaec900d0  sw          $t1, 0xD0($s6)
    ctx->pc = 0x20029cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 208), GPR_U32(ctx, 9));
label_2002a0:
    // 0x2002a0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2002a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2002a4:
    // 0x2002a4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2002a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2002a8:
    // 0x2002a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2002a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2002ac:
    // 0x2002ac: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2002acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2002b0:
    // 0x2002b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2002b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2002b4:
    // 0x2002b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2002b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2002b8:
    // 0x2002b8: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x2002b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_2002bc:
    // 0x2002bc: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x2002bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_2002c0:
    // 0x2002c0: 0x40f809  jalr        $v0
label_2002c4:
    if (ctx->pc == 0x2002C4u) {
        ctx->pc = 0x2002C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002C0u;
        // 0x2002c4: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2002C8u;
        goto label_2002c8;
    }
    ctx->pc = 0x2002C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2002C8u);
        ctx->pc = 0x2002C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002C0u;
        // 0x2002c4: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2002C0u, 0x2002C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2002C8u;
label_2002c8:
    // 0x2002c8: 0x8ec700d0  lw          $a3, 0xD0($s6)
    ctx->pc = 0x2002c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 208)));
label_2002cc:
    // 0x2002cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2002ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2002d0:
    // 0x2002d0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2002d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2002d4:
    // 0x2002d4: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x2002d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_2002d8:
    // 0x2002d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2002d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2002dc:
    // 0x2002dc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2002dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2002e0:
    // 0x2002e0: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x2002e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_2002e4:
    // 0x2002e4: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x2002e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_2002e8:
    // 0x2002e8: 0x40f809  jalr        $v0
label_2002ec:
    if (ctx->pc == 0x2002ECu) {
        ctx->pc = 0x2002ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002E8u;
        // 0x2002ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2002F0u;
        goto label_2002f0;
    }
    ctx->pc = 0x2002E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2002F0u);
        ctx->pc = 0x2002ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002E8u;
        // 0x2002ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2002E8u, 0x2002F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2002F0u;
label_2002f0:
    // 0x2002f0: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x2002f0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_2002f4:
    // 0x2002f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2002f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2002f8:
    // 0x2002f8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2002f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2002fc:
    // 0x2002fc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2002fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_200300:
    // 0x200300: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x200300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_200304:
    // 0x200304: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x200304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_200308:
    // 0x200308: 0x240901ab  addiu       $t1, $zero, 0x1AB
    ctx->pc = 0x200308u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 427));
label_20030c:
    // 0x20030c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20030cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200310:
    // 0x200310: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x200310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_200314:
    // 0x200314: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x200314u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200318:
    // 0x200318: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x200318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20031c:
    // 0x20031c: 0x40f809  jalr        $v0
label_200320:
    if (ctx->pc == 0x200320u) {
        ctx->pc = 0x200320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20031Cu;
        // 0x200320: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200324u;
        goto label_200324;
    }
    ctx->pc = 0x20031Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200324u);
        ctx->pc = 0x200320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20031Cu;
        // 0x200320: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20031Cu, 0x200324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200324u;
label_200324:
    // 0x200324: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x200324u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200328:
    // 0x200328: 0x51800005  beql        $t4, $zero, . + 4 + (0x5 << 2)
label_20032c:
    if (ctx->pc == 0x20032Cu) {
        ctx->pc = 0x20032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200328u;
        // 0x20032c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200330u;
        goto label_200330;
    }
    ctx->pc = 0x200328u;
    {
        const bool branch_taken_0x200328 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x200328) {
            ctx->pc = 0x20032Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200328u;
            // 0x20032c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200340u;
            goto label_200340;
        }
    }
    ctx->pc = 0x200330u;
label_200330:
    // 0x200330: 0xc0686fe  jal         func_1A1BF8
label_200334:
    if (ctx->pc == 0x200334u) {
        ctx->pc = 0x200334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200330u;
        // 0x200334: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200338u;
        goto label_200338;
    }
    ctx->pc = 0x200330u;
    SET_GPR_U32(ctx, 31, 0x200338u);
    ctx->pc = 0x200334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200330u;
    // 0x200334: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x200330u, 0x200338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200338u;
label_200338:
    // 0x200338: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x200338u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20033c:
    // 0x20033c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x20033cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_200340:
    // 0x200340: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x200340u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_200344:
    // 0x200344: 0xc480f530  lwc1        $f0, -0xAD0($a0)
    ctx->pc = 0x200344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_200348:
    // 0x200348: 0x241000bf  addiu       $s0, $zero, 0xBF
    ctx->pc = 0x200348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_20034c:
    // 0x20034c: 0xaecc00a0  sw          $t4, 0xA0($s6)
    ctx->pc = 0x20034cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 160), GPR_U32(ctx, 12));
label_200350:
    // 0x200350: 0x27a20088  addiu       $v0, $sp, 0x88
    ctx->pc = 0x200350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_200354:
    // 0x200354: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x200354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_200358:
    // 0x200358: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x200358u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_20035c:
    // 0x20035c: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x20035cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_200360:
    // 0x200360: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x200360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_200364:
    // 0x200364: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x200364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_200368:
    // 0x200368: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x200368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20036c:
    // 0x20036c: 0xc4c0f534  lwc1        $f0, -0xACC($a2)
    ctx->pc = 0x20036cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_200370:
    // 0x200370: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x200370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200374:
    // 0x200374: 0xa3b00088  sb          $s0, 0x88($sp)
    ctx->pc = 0x200374u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 16));
label_200378:
    // 0x200378: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x200378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20037c:
    // 0x20037c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x20037cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_200380:
    // 0x200380: 0x35290017  ori         $t1, $t1, 0x17
    ctx->pc = 0x200380u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)23);
label_200384:
    // 0x200384: 0xa0510003  sb          $s1, 0x3($v0)
    ctx->pc = 0x200384u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 17));
label_200388:
    // 0x200388: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x200388u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20038c:
    // 0x20038c: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x20038cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
label_200390:
    // 0x200390: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x200390u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_200394:
    // 0x200394: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x200394u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
label_200398:
    // 0x200398: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x200398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20039c:
    // 0x20039c: 0x8eca00b0  lw          $t2, 0xB0($s6)
    ctx->pc = 0x20039cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
label_2003a0:
    // 0x2003a0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2003a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2003a4:
    // 0x2003a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2003a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2003a8:
    // 0x2003a8: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x2003a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
label_2003ac:
    // 0x2003ac: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x2003acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_2003b0:
    // 0x2003b0: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x2003b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_2003b4:
    // 0x2003b4: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2003b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2003b8:
    // 0x2003b8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2003b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2003bc:
    // 0x2003bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2003bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2003c0:
    // 0x2003c0: 0x40f809  jalr        $v0
label_2003c4:
    if (ctx->pc == 0x2003C4u) {
        ctx->pc = 0x2003C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003C0u;
        // 0x2003c4: 0xc46cf560  lwc1        $f12, -0xAA0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2003C8u;
        goto label_2003c8;
    }
    ctx->pc = 0x2003C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2003C8u);
        ctx->pc = 0x2003C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003C0u;
        // 0x2003c4: 0xc46cf560  lwc1        $f12, -0xAA0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2003C0u, 0x2003C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2003C8u;
label_2003c8:
    // 0x2003c8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2003c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2003cc:
    // 0x2003cc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x2003ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_2003d0:
    // 0x2003d0: 0xc480f52c  lwc1        $f0, -0xAD4($a0)
    ctx->pc = 0x2003d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2003d4:
    // 0x2003d4: 0x240901b3  addiu       $t1, $zero, 0x1B3
    ctx->pc = 0x2003d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
label_2003d8:
    // 0x2003d8: 0xc4c1f528  lwc1        $f1, -0xAD8($a2)
    ctx->pc = 0x2003d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2003dc:
    // 0x2003dc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2003dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2003e0:
    // 0x2003e0: 0x24a58398  addiu       $a1, $a1, -0x7C68
    ctx->pc = 0x2003e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935448));
label_2003e4:
    // 0x2003e4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2003e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2003e8:
    // 0x2003e8: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2003e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_2003ec:
    // 0x2003ec: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2003ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2003f0:
    // 0x2003f0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2003f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2003f4:
    // 0x2003f4: 0xe7b60034  swc1        $f22, 0x34($sp)
    ctx->pc = 0x2003f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2003f8:
    // 0x2003f8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2003f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2003fc:
    // 0x2003fc: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x2003fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_200400:
    // 0x200400: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x200400u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200404:
    // 0x200404: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x200404u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_200408:
    // 0x200408: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x200408u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20040c:
    // 0x20040c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20040cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_200410:
    // 0x200410: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x200410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_200414:
    // 0x200414: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x200414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_200418:
    // 0x200418: 0x40f809  jalr        $v0
label_20041c:
    if (ctx->pc == 0x20041Cu) {
        ctx->pc = 0x20041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200418u;
        // 0x20041c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200420u;
        goto label_200420;
    }
    ctx->pc = 0x200418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200420u);
        ctx->pc = 0x20041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200418u;
        // 0x20041c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200418u, 0x200420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200420u;
label_200420:
    // 0x200420: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x200420u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200424:
    // 0x200424: 0x51200005  beql        $t1, $zero, . + 4 + (0x5 << 2)
label_200428:
    if (ctx->pc == 0x200428u) {
        ctx->pc = 0x200428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200424u;
        // 0x200428: 0xaec900d4  sw          $t1, 0xD4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 212), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20042Cu;
        goto label_20042c;
    }
    ctx->pc = 0x200424u;
    {
        const bool branch_taken_0x200424 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x200424) {
            ctx->pc = 0x200428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200424u;
            // 0x200428: 0xaec900d4  sw          $t1, 0xD4($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 212), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20043Cu;
            goto label_20043c;
        }
    }
    ctx->pc = 0x20042Cu;
label_20042c:
    // 0x20042c: 0xc0705aa  jal         func_1C16A8
label_200430:
    if (ctx->pc == 0x200430u) {
        ctx->pc = 0x200430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20042Cu;
        // 0x200430: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200434u;
        goto label_200434;
    }
    ctx->pc = 0x20042Cu;
    SET_GPR_U32(ctx, 31, 0x200434u);
    ctx->pc = 0x200430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20042Cu;
    // 0x200430: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x20042Cu, 0x200434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200434u;
label_200434:
    // 0x200434: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x200434u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200438:
    // 0x200438: 0xaec900d4  sw          $t1, 0xD4($s6)
    ctx->pc = 0x200438u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 212), GPR_U32(ctx, 9));
label_20043c:
    // 0x20043c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x20043cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_200440:
    // 0x200440: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x200440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_200444:
    // 0x200444: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x200444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_200448:
    // 0x200448: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x200448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_20044c:
    // 0x20044c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20044cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_200450:
    // 0x200450: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x200450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_200454:
    // 0x200454: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x200454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_200458:
    // 0x200458: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x200458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_20045c:
    // 0x20045c: 0x40f809  jalr        $v0
label_200460:
    if (ctx->pc == 0x200460u) {
        ctx->pc = 0x200460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20045Cu;
        // 0x200460: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200464u;
        goto label_200464;
    }
    ctx->pc = 0x20045Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200464u);
        ctx->pc = 0x200460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20045Cu;
        // 0x200460: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20045Cu, 0x200464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200464u;
label_200464:
    // 0x200464: 0x8ec700d4  lw          $a3, 0xD4($s6)
    ctx->pc = 0x200464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 212)));
label_200468:
    // 0x200468: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x200468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20046c:
    // 0x20046c: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x20046cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_200470:
    // 0x200470: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x200470u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_200474:
    // 0x200474: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x200474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200478:
    // 0x200478: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x200478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_20047c:
    // 0x20047c: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x20047cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_200480:
    // 0x200480: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x200480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_200484:
    // 0x200484: 0x60f809  jalr        $v1
label_200488:
    if (ctx->pc == 0x200488u) {
        ctx->pc = 0x200488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200484u;
        // 0x200488: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20048Cu;
        goto label_20048c;
    }
    ctx->pc = 0x200484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20048Cu);
        ctx->pc = 0x200488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200484u;
        // 0x200488: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200484u, 0x20048Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20048Cu;
label_20048c:
    // 0x20048c: 0x8eec27e4  lw          $t4, 0x27E4($s7)
    ctx->pc = 0x20048cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_200490:
    // 0x200490: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_200494:
    // 0x200494: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x200494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_200498:
    // 0x200498: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x200498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20049c:
    // 0x20049c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20049cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2004a0:
    // 0x2004a0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2004a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2004a4:
    // 0x2004a4: 0x240901b8  addiu       $t1, $zero, 0x1B8
    ctx->pc = 0x2004a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
label_2004a8:
    // 0x2004a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2004a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2004ac:
    // 0x2004ac: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2004acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2004b0:
    // 0x2004b0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2004b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2004b4:
    // 0x2004b4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2004b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2004b8:
    // 0x2004b8: 0x40f809  jalr        $v0
label_2004bc:
    if (ctx->pc == 0x2004BCu) {
        ctx->pc = 0x2004BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004B8u;
        // 0x2004bc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004C0u;
        goto label_2004c0;
    }
    ctx->pc = 0x2004B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2004C0u);
        ctx->pc = 0x2004BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004B8u;
        // 0x2004bc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2004B8u, 0x2004C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2004C0u;
label_2004c0:
    // 0x2004c0: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x2004c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2004c4:
    // 0x2004c4: 0x11800005  beqz        $t4, . + 4 + (0x5 << 2)
label_2004c8:
    if (ctx->pc == 0x2004C8u) {
        ctx->pc = 0x2004C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004C4u;
        // 0x2004c8: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004CCu;
        goto label_2004cc;
    }
    ctx->pc = 0x2004C4u;
    {
        const bool branch_taken_0x2004c4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2004C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004C4u;
        // 0x2004c8: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004c4) {
            ctx->pc = 0x2004DCu;
            goto label_2004dc;
        }
    }
    ctx->pc = 0x2004CCu;
label_2004cc:
    // 0x2004cc: 0xc0686fe  jal         func_1A1BF8
label_2004d0:
    if (ctx->pc == 0x2004D0u) {
        ctx->pc = 0x2004D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004CCu;
        // 0x2004d0: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004D4u;
        goto label_2004d4;
    }
    ctx->pc = 0x2004CCu;
    SET_GPR_U32(ctx, 31, 0x2004D4u);
    ctx->pc = 0x2004D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2004CCu;
    // 0x2004d0: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x2004CCu, 0x2004D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2004D4u;
label_2004d4:
    // 0x2004d4: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x2004d4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2004d8:
    // 0x2004d8: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x2004d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_2004dc:
    // 0x2004dc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2004dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2004e0:
    // 0x2004e0: 0xc4e0f538  lwc1        $f0, -0xAC8($a3)
    ctx->pc = 0x2004e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294964536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2004e4:
    // 0x2004e4: 0x27a2008c  addiu       $v0, $sp, 0x8C
    ctx->pc = 0x2004e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_2004e8:
    // 0x2004e8: 0xaecc00a4  sw          $t4, 0xA4($s6)
    ctx->pc = 0x2004e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 164), GPR_U32(ctx, 12));
label_2004ec:
    // 0x2004ec: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x2004ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_2004f0:
    // 0x2004f0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2004f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2004f4:
    // 0x2004f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2004f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2004f8:
    // 0x2004f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2004f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2004fc:
    // 0x2004fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2004fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200500:
    // 0x200500: 0xc460f534  lwc1        $f0, -0xACC($v1)
    ctx->pc = 0x200500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_200504:
    // 0x200504: 0x35290017  ori         $t1, $t1, 0x17
    ctx->pc = 0x200504u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)23);
label_200508:
    // 0x200508: 0x8eca00b0  lw          $t2, 0xB0($s6)
    ctx->pc = 0x200508u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
label_20050c:
    // 0x20050c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20050cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200510:
    // 0x200510: 0xa3b0008c  sb          $s0, 0x8C($sp)
    ctx->pc = 0x200510u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 140), (uint8_t)GPR_U32(ctx, 16));
label_200514:
    // 0x200514: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x200514u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_200518:
    // 0x200518: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x200518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_20051c:
    // 0x20051c: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x20051cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
label_200520:
    // 0x200520: 0xa0510003  sb          $s1, 0x3($v0)
    ctx->pc = 0x200520u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 17));
label_200524:
    // 0x200524: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x200524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
label_200528:
    // 0x200528: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x200528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20052c:
    // 0x20052c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20052cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_200530:
    // 0x200530: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x200530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_200534:
    // 0x200534: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x200534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_200538:
    // 0x200538: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x200538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_20053c:
    // 0x20053c: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x20053cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
label_200540:
    // 0x200540: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x200540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_200544:
    // 0x200544: 0xc44cf560  lwc1        $f12, -0xAA0($v0)
    ctx->pc = 0x200544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_200548:
    // 0x200548: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x200548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_20054c:
    // 0x20054c: 0x40f809  jalr        $v0
label_200550:
    if (ctx->pc == 0x200550u) {
        ctx->pc = 0x200550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20054Cu;
        // 0x200550: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200554u;
        goto label_200554;
    }
    ctx->pc = 0x20054Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200554u);
        ctx->pc = 0x200550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20054Cu;
        // 0x200550: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20054Cu, 0x200554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200554u;
label_200554:
    // 0x200554: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x200554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_200558:
    // 0x200558: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x200558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_20055c:
    // 0x20055c: 0xc460f53c  lwc1        $f0, -0xAC4($v1)
    ctx->pc = 0x20055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_200560:
    // 0x200560: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x200560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_200564:
    // 0x200564: 0xc481f540  lwc1        $f1, -0xAC0($a0)
    ctx->pc = 0x200564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_200568:
    // 0x200568: 0x244227e4  addiu       $v0, $v0, 0x27E4
    ctx->pc = 0x200568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10212));
label_20056c:
    // 0x20056c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x20056cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_200570:
    // 0x200570: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x200570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_200574:
    // 0x200574: 0x24a58308  addiu       $a1, $a1, -0x7CF8
    ctx->pc = 0x200574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935304));
label_200578:
    // 0x200578: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x200578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_20057c:
    // 0x20057c: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x20057cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_200580:
    // 0x200580: 0xe7b60034  swc1        $f22, 0x34($sp)
    ctx->pc = 0x200580u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_200584:
    // 0x200584: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x200584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_200588:
    // 0x200588: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x200588u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_20058c:
    // 0x20058c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x20058cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_200590:
    // 0x200590: 0x240901bf  addiu       $t1, $zero, 0x1BF
    ctx->pc = 0x200590u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
label_200594:
    // 0x200594: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x200594u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200598:
    // 0x200598: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x200598u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20059c:
    // 0x20059c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20059cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2005a0:
    // 0x2005a0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2005a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2005a4:
    // 0x2005a4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2005a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2005a8:
    // 0x2005a8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2005a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2005ac:
    // 0x2005ac: 0x40f809  jalr        $v0
label_2005b0:
    if (ctx->pc == 0x2005B0u) {
        ctx->pc = 0x2005B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005ACu;
        // 0x2005b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005B4u;
        goto label_2005b4;
    }
    ctx->pc = 0x2005ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2005B4u);
        ctx->pc = 0x2005B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005ACu;
        // 0x2005b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2005ACu, 0x2005B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2005B4u;
label_2005b4:
    // 0x2005b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2005b8:
    if (ctx->pc == 0x2005B8u) {
        ctx->pc = 0x2005BCu;
        goto label_2005bc;
    }
    ctx->pc = 0x2005B4u;
    {
        const bool branch_taken_0x2005b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2005b4) {
            ctx->pc = 0x2005C4u;
            goto label_2005c4;
        }
    }
    ctx->pc = 0x2005BCu;
label_2005bc:
    // 0x2005bc: 0xc0733e2  jal         func_1CCF88
label_2005c0:
    if (ctx->pc == 0x2005C0u) {
        ctx->pc = 0x2005C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005BCu;
        // 0x2005c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005C4u;
        goto label_2005c4;
    }
    ctx->pc = 0x2005BCu;
    SET_GPR_U32(ctx, 31, 0x2005C4u);
    ctx->pc = 0x2005C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2005BCu;
    // 0x2005c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x2005BCu, 0x2005C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005C4u;
label_2005c4:
    // 0x2005c4: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x2005c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_2005c8:
    // 0x2005c8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2005c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2005cc:
    // 0x2005cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2005ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2005d0:
    // 0x2005d0: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2005d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2005d4:
    // 0x2005d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2005d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2005d8:
    // 0x2005d8: 0xaec200d8  sw          $v0, 0xD8($s6)
    ctx->pc = 0x2005d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 216), GPR_U32(ctx, 2));
label_2005dc:
    // 0x2005dc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2005dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2005e0:
    // 0x2005e0: 0xc05e602  jal         func_179808
label_2005e4:
    if (ctx->pc == 0x2005E4u) {
        ctx->pc = 0x2005E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005E0u;
        // 0x2005e4: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2005E8u;
        goto label_2005e8;
    }
    ctx->pc = 0x2005E0u;
    SET_GPR_U32(ctx, 31, 0x2005E8u);
    ctx->pc = 0x2005E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2005E0u;
    // 0x2005e4: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x2005E0u, 0x2005E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2005E8u;
label_2005e8:
    // 0x2005e8: 0x8ecc00d8  lw          $t4, 0xD8($s6)
    ctx->pc = 0x2005e8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 216)));
label_2005ec:
    // 0x2005ec: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2005ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2005f0:
    // 0x2005f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2005f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2005f4:
    // 0x2005f4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2005f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2005f8:
    // 0x2005f8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2005f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2005fc:
    // 0x2005fc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2005fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200600:
    // 0x200600: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x200600u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200604:
    // 0x200604: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x200604u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_200608:
    // 0x200608: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x200608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_20060c:
    // 0x20060c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20060cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_200610:
    // 0x200610: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x200610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_200614:
    // 0x200614: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x200614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_200618:
    // 0x200618: 0x40f809  jalr        $v0
label_20061c:
    if (ctx->pc == 0x20061Cu) {
        ctx->pc = 0x20061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200618u;
        // 0x20061c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200620u;
        goto label_200620;
    }
    ctx->pc = 0x200618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200620u);
        ctx->pc = 0x20061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200618u;
        // 0x20061c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200618u, 0x200620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200620u;
label_200620:
    // 0x200620: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x200620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_200624:
    // 0x200624: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x200624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_200628:
    // 0x200628: 0xc073478  jal         func_1CD1E0
label_20062c:
    if (ctx->pc == 0x20062Cu) {
        ctx->pc = 0x20062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200628u;
        // 0x20062c: 0x8ec400d8  lw          $a0, 0xD8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200630u;
        goto label_200630;
    }
    ctx->pc = 0x200628u;
    SET_GPR_U32(ctx, 31, 0x200630u);
    ctx->pc = 0x20062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200628u;
    // 0x20062c: 0x8ec400d8  lw          $a0, 0xD8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x200628u, 0x200630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200630u;
label_200630:
    // 0x200630: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x200630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_200634:
    // 0x200634: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x200634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_200638:
    // 0x200638: 0xc460f544  lwc1        $f0, -0xABC($v1)
    ctx->pc = 0x200638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20063c:
    // 0x20063c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20063cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_200640:
    // 0x200640: 0xc481f540  lwc1        $f1, -0xAC0($a0)
    ctx->pc = 0x200640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_200644:
    // 0x200644: 0x244227e4  addiu       $v0, $v0, 0x27E4
    ctx->pc = 0x200644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10212));
label_200648:
    // 0x200648: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x200648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_20064c:
    // 0x20064c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20064cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_200650:
    // 0x200650: 0x24a58308  addiu       $a1, $a1, -0x7CF8
    ctx->pc = 0x200650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935304));
label_200654:
    // 0x200654: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x200654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_200658:
    // 0x200658: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x200658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_20065c:
    // 0x20065c: 0xe7b60034  swc1        $f22, 0x34($sp)
    ctx->pc = 0x20065cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_200660:
    // 0x200660: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x200660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_200664:
    // 0x200664: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x200664u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_200668:
    // 0x200668: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x200668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20066c:
    // 0x20066c: 0x240901c5  addiu       $t1, $zero, 0x1C5
    ctx->pc = 0x20066cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
label_200670:
    // 0x200670: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x200670u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200674:
    // 0x200674: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x200674u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_200678:
    // 0x200678: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x200678u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20067c:
    // 0x20067c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20067cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_200680:
    // 0x200680: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x200680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_200684:
    // 0x200684: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x200684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_200688:
    // 0x200688: 0x40f809  jalr        $v0
label_20068c:
    if (ctx->pc == 0x20068Cu) {
        ctx->pc = 0x20068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200688u;
        // 0x20068c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200690u;
        goto label_200690;
    }
    ctx->pc = 0x200688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200690u);
        ctx->pc = 0x20068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200688u;
        // 0x20068c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200688u, 0x200690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200690u;
label_200690:
    // 0x200690: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_200694:
    if (ctx->pc == 0x200694u) {
        ctx->pc = 0x200694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200690u;
        // 0x200694: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x200698u;
        goto label_200698;
    }
    ctx->pc = 0x200690u;
    {
        const bool branch_taken_0x200690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200690u;
        // 0x200694: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x200690) {
            ctx->pc = 0x2006A4u;
            goto label_2006a4;
        }
    }
    ctx->pc = 0x200698u;
label_200698:
    // 0x200698: 0xc0733e2  jal         func_1CCF88
label_20069c:
    if (ctx->pc == 0x20069Cu) {
        ctx->pc = 0x20069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200698u;
        // 0x20069c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006A0u;
        goto label_2006a0;
    }
    ctx->pc = 0x200698u;
    SET_GPR_U32(ctx, 31, 0x2006A0u);
    ctx->pc = 0x20069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200698u;
    // 0x20069c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x200698u, 0x2006A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2006A0u;
label_2006a0:
    // 0x2006a0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2006a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2006a4:
    // 0x2006a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2006a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2006a8:
    // 0x2006a8: 0xc05e602  jal         func_179808
label_2006ac:
    if (ctx->pc == 0x2006ACu) {
        ctx->pc = 0x2006ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006A8u;
        // 0x2006ac: 0xaec200dc  sw          $v0, 0xDC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006B0u;
        goto label_2006b0;
    }
    ctx->pc = 0x2006A8u;
    SET_GPR_U32(ctx, 31, 0x2006B0u);
    ctx->pc = 0x2006ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2006A8u;
    // 0x2006ac: 0xaec200dc  sw          $v0, 0xDC($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x2006A8u, 0x2006B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2006B0u;
label_2006b0:
    // 0x2006b0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2006b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2006b4:
    // 0x2006b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2006b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2006b8:
    // 0x2006b8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2006b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_2006bc:
    // 0x2006bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2006bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2006c0:
    // 0x2006c0: 0x8ecc00dc  lw          $t4, 0xDC($s6)
    ctx->pc = 0x2006c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 220)));
label_2006c4:
    // 0x2006c4: 0x2463d310  addiu       $v1, $v1, -0x2CF0
    ctx->pc = 0x2006c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955792));
label_2006c8:
    // 0x2006c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2006c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2006cc:
    // 0x2006cc: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2006ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2006d0:
    // 0x2006d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2006d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2006d4:
    // 0x2006d4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2006d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2006d8:
    // 0x2006d8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2006d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2006dc:
    // 0x2006dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2006dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2006e0:
    // 0x2006e0: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x2006e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2006e4:
    // 0x2006e4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2006e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2006e8:
    // 0x2006e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2006e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2006ec:
    // 0x2006ec: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x2006ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_2006f0:
    // 0x2006f0: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x2006f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_2006f4:
    // 0x2006f4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2006f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_2006f8:
    // 0x2006f8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2006f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2006fc:
    // 0x2006fc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2006fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_200700:
    // 0x200700: 0x40f809  jalr        $v0
label_200704:
    if (ctx->pc == 0x200704u) {
        ctx->pc = 0x200704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200700u;
        // 0x200704: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200708u;
        goto label_200708;
    }
    ctx->pc = 0x200700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200708u);
        ctx->pc = 0x200704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200700u;
        // 0x200704: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200700u, 0x200708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200708u;
label_200708:
    // 0x200708: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x200708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20070c:
    // 0x20070c: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x20070cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_200710:
    // 0x200710: 0xc073478  jal         func_1CD1E0
label_200714:
    if (ctx->pc == 0x200714u) {
        ctx->pc = 0x200714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200710u;
        // 0x200714: 0x8ec400dc  lw          $a0, 0xDC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200718u;
        goto label_200718;
    }
    ctx->pc = 0x200710u;
    SET_GPR_U32(ctx, 31, 0x200718u);
    ctx->pc = 0x200714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200710u;
    // 0x200714: 0x8ec400dc  lw          $a0, 0xDC($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x200710u, 0x200718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200718u;
label_200718:
    // 0x200718: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x200718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_20071c:
    // 0x20071c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x20071cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_200720:
    // 0x200720: 0xc480f548  lwc1        $f0, -0xAB8($a0)
    ctx->pc = 0x200720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_200724:
    // 0x200724: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x200724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_200728:
    // 0x200728: 0xc4a1f54c  lwc1        $f1, -0xAB4($a1)
    ctx->pc = 0x200728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294964556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20072c:
    // 0x20072c: 0x245283b8  addiu       $s2, $v0, -0x7C48
    ctx->pc = 0x20072cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935480));
label_200730:
    // 0x200730: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x200730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_200734:
    // 0x200734: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x200734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_200738:
    // 0x200738: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x200738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_20073c:
    // 0x20073c: 0x244227e4  addiu       $v0, $v0, 0x27E4
    ctx->pc = 0x20073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10212));
label_200740:
    // 0x200740: 0xe7b60034  swc1        $f22, 0x34($sp)
    ctx->pc = 0x200740u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_200744:
    // 0x200744: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_200748:
    // 0x200748: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x200748u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_20074c:
    // 0x20074c: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x20074cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_200750:
    // 0x200750: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x200750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_200754:
    // 0x200754: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x200754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_200758:
    // 0x200758: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x200758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20075c:
    // 0x20075c: 0x240901cf  addiu       $t1, $zero, 0x1CF
    ctx->pc = 0x20075cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 463));
label_200760:
    // 0x200760: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x200760u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_200764:
    // 0x200764: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x200764u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200768:
    // 0x200768: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x200768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
label_20076c:
    // 0x20076c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20076cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200770:
    // 0x200770: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x200770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_200774:
    // 0x200774: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x200774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_200778:
    // 0x200778: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x200778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20077c:
    // 0x20077c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20077cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_200780:
    // 0x200780: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x200780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_200784:
    // 0x200784: 0x40f809  jalr        $v0
label_200788:
    if (ctx->pc == 0x200788u) {
        ctx->pc = 0x200788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200784u;
        // 0x200788: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20078Cu;
        goto label_20078c;
    }
    ctx->pc = 0x200784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20078Cu);
        ctx->pc = 0x200788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200784u;
        // 0x200788: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200784u, 0x20078Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20078Cu;
label_20078c:
    // 0x20078c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20078cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200790:
    // 0x200790: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_200794:
    if (ctx->pc == 0x200794u) {
        ctx->pc = 0x200794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200790u;
        // 0x200794: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200798u;
        goto label_200798;
    }
    ctx->pc = 0x200790u;
    {
        const bool branch_taken_0x200790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x200794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200790u;
        // 0x200794: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200790) {
            ctx->pc = 0x2007ECu;
            goto label_2007ec;
        }
    }
    ctx->pc = 0x200798u;
label_200798:
    // 0x200798: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x200798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_20079c:
    // 0x20079c: 0xa3a30090  sb          $v1, 0x90($sp)
    ctx->pc = 0x20079cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 3));
label_2007a0:
    // 0x2007a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2007a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2007a4:
    // 0x2007a4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2007a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_2007a8:
    // 0x2007a8: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x2007a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_2007ac:
    // 0x2007ac: 0xa0510003  sb          $s1, 0x3($v0)
    ctx->pc = 0x2007acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 17));
label_2007b0:
    // 0x2007b0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2007b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2007b4:
    // 0x2007b4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2007b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_2007b8:
    // 0x2007b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2007b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2007bc:
    // 0x2007bc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2007bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2007c0:
    // 0x2007c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2007c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2007c4:
    // 0x2007c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2007c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2007c8:
    // 0x2007c8: 0x8ec700b0  lw          $a3, 0xB0($s6)
    ctx->pc = 0x2007c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
label_2007cc:
    // 0x2007cc: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x2007ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2007d0:
    // 0x2007d0: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2007d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_2007d4:
    // 0x2007d4: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x2007d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_2007d8:
    // 0x2007d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2007d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2007dc:
    // 0x2007dc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2007dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2007e0:
    // 0x2007e0: 0xc0683f4  jal         func_1A0FD0
label_2007e4:
    if (ctx->pc == 0x2007E4u) {
        ctx->pc = 0x2007E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007E0u;
        // 0x2007e4: 0x34e7000c  ori         $a3, $a3, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007E8u;
        goto label_2007e8;
    }
    ctx->pc = 0x2007E0u;
    SET_GPR_U32(ctx, 31, 0x2007E8u);
    ctx->pc = 0x2007E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2007E0u;
    // 0x2007e4: 0x34e7000c  ori         $a3, $a3, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x2007E0u, 0x2007E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2007E8u;
label_2007e8:
    // 0x2007e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2007e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2007ec:
    // 0x2007ec: 0xaec400e0  sw          $a0, 0xE0($s6)
    ctx->pc = 0x2007ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 224), GPR_U32(ctx, 4));
label_2007f0:
    // 0x2007f0: 0x24140086  addiu       $s4, $zero, 0x86
    ctx->pc = 0x2007f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_2007f4:
    // 0x2007f4: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x2007f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_2007f8:
    // 0x2007f8: 0x27a20094  addiu       $v0, $sp, 0x94
    ctx->pc = 0x2007f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_2007fc:
    // 0x2007fc: 0x2410001a  addiu       $s0, $zero, 0x1A
    ctx->pc = 0x2007fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_200800:
    // 0x200800: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x200800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_200804:
    // 0x200804: 0x8ec300e0  lw          $v1, 0xE0($s6)
    ctx->pc = 0x200804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 224)));
label_200808:
    // 0x200808: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20080c:
    // 0x20080c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x20080cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_200810:
    // 0x200810: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x200810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_200814:
    // 0x200814: 0xac7e0054  sw          $fp, 0x54($v1)
    ctx->pc = 0x200814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 30));
label_200818:
    // 0x200818: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x200818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20081c:
    // 0x20081c: 0xa3b40094  sb          $s4, 0x94($sp)
    ctx->pc = 0x20081cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 148), (uint8_t)GPR_U32(ctx, 20));
label_200820:
    // 0x200820: 0x240901d6  addiu       $t1, $zero, 0x1D6
    ctx->pc = 0x200820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
label_200824:
    // 0x200824: 0xa0510003  sb          $s1, 0x3($v0)
    ctx->pc = 0x200824u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 17));
label_200828:
    // 0x200828: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x200828u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20082c:
    // 0x20082c: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x20082cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
label_200830:
    // 0x200830: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x200830u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200834:
    // 0x200834: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x200834u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
label_200838:
    // 0x200838: 0xc480f550  lwc1        $f0, -0xAB0($a0)
    ctx->pc = 0x200838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20083c:
    // 0x20083c: 0x8ec300e0  lw          $v1, 0xE0($s6)
    ctx->pc = 0x20083cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 224)));
label_200840:
    // 0x200840: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x200840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_200844:
    // 0x200844: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x200844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_200848:
    // 0x200848: 0xc481f54c  lwc1        $f1, -0xAB4($a0)
    ctx->pc = 0x200848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20084c:
    // 0x20084c: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x20084cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_200850:
    // 0x200850: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x200850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_200854:
    // 0x200854: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x200854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_200858:
    // 0x200858: 0xe7b60034  swc1        $f22, 0x34($sp)
    ctx->pc = 0x200858u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_20085c:
    // 0x20085c: 0x244227e4  addiu       $v0, $v0, 0x27E4
    ctx->pc = 0x20085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10212));
label_200860:
    // 0x200860: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x200860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_200864:
    // 0x200864: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x200864u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_200868:
    // 0x200868: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x200868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20086c:
    // 0x20086c: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x20086cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_200870:
    // 0x200870: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x200870u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
label_200874:
    // 0x200874: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x200874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_200878:
    // 0x200878: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x200878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_20087c:
    // 0x20087c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20087cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_200880:
    // 0x200880: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x200880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_200884:
    // 0x200884: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x200884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_200888:
    // 0x200888: 0x40f809  jalr        $v0
label_20088c:
    if (ctx->pc == 0x20088Cu) {
        ctx->pc = 0x20088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200888u;
        // 0x20088c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200890u;
        goto label_200890;
    }
    ctx->pc = 0x200888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200890u);
        ctx->pc = 0x20088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200888u;
        // 0x20088c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200888u, 0x200890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200890u;
label_200890:
    // 0x200890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200894:
    // 0x200894: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_200898:
    if (ctx->pc == 0x200898u) {
        ctx->pc = 0x200898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200894u;
        // 0x200898: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20089Cu;
        goto label_20089c;
    }
    ctx->pc = 0x200894u;
    {
        const bool branch_taken_0x200894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x200898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200894u;
        // 0x200898: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200894) {
            ctx->pc = 0x2008F0u;
            goto label_2008f0;
        }
    }
    ctx->pc = 0x20089Cu;
label_20089c:
    // 0x20089c: 0x27a20098  addiu       $v0, $sp, 0x98
    ctx->pc = 0x20089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_2008a0:
    // 0x2008a0: 0xa3a30098  sb          $v1, 0x98($sp)
    ctx->pc = 0x2008a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 152), (uint8_t)GPR_U32(ctx, 3));
label_2008a4:
    // 0x2008a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2008a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2008a8:
    // 0x2008a8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2008a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_2008ac:
    // 0x2008ac: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x2008acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_2008b0:
    // 0x2008b0: 0xa0510003  sb          $s1, 0x3($v0)
    ctx->pc = 0x2008b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 17));
label_2008b4:
    // 0x2008b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2008b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2008b8:
    // 0x2008b8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2008b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_2008bc:
    // 0x2008bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2008bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2008c0:
    // 0x2008c0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2008c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2008c4:
    // 0x2008c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2008c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2008c8:
    // 0x2008c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2008c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2008cc:
    // 0x2008cc: 0x8ec700b0  lw          $a3, 0xB0($s6)
    ctx->pc = 0x2008ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
label_2008d0:
    // 0x2008d0: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x2008d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2008d4:
    // 0x2008d4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2008d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_2008d8:
    // 0x2008d8: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x2008d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_2008dc:
    // 0x2008dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2008dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2008e0:
    // 0x2008e0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2008e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2008e4:
    // 0x2008e4: 0xc0683f4  jal         func_1A0FD0
label_2008e8:
    if (ctx->pc == 0x2008E8u) {
        ctx->pc = 0x2008E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008E4u;
        // 0x2008e8: 0x34e7000c  ori         $a3, $a3, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2008ECu;
        goto label_2008ec;
    }
    ctx->pc = 0x2008E4u;
    SET_GPR_U32(ctx, 31, 0x2008ECu);
    ctx->pc = 0x2008E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2008E4u;
    // 0x2008e8: 0x34e7000c  ori         $a3, $a3, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x2008E4u, 0x2008ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008ECu;
label_2008ec:
    // 0x2008ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2008ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2008f0:
    // 0x2008f0: 0xaec400e4  sw          $a0, 0xE4($s6)
    ctx->pc = 0x2008f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 228), GPR_U32(ctx, 4));
label_2008f4:
    // 0x2008f4: 0x27a3009c  addiu       $v1, $sp, 0x9C
    ctx->pc = 0x2008f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2008f8:
    // 0x2008f8: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x2008f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_2008fc:
    // 0x2008fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2008fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_200900:
    // 0x200900: 0x8ec200e4  lw          $v0, 0xE4($s6)
    ctx->pc = 0x200900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 228)));
label_200904:
    // 0x200904: 0xac5e0054  sw          $fp, 0x54($v0)
    ctx->pc = 0x200904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 30));
label_200908:
    // 0x200908: 0xa3b4009c  sb          $s4, 0x9C($sp)
    ctx->pc = 0x200908u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 156), (uint8_t)GPR_U32(ctx, 20));
label_20090c:
    // 0x20090c: 0xa0710003  sb          $s1, 0x3($v1)
    ctx->pc = 0x20090cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 17));
label_200910:
    // 0x200910: 0xa0700002  sb          $s0, 0x2($v1)
    ctx->pc = 0x200910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 16));
label_200914:
    // 0x200914: 0xa0700001  sb          $s0, 0x1($v1)
    ctx->pc = 0x200914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 16));
label_200918:
    // 0x200918: 0x8ec500e4  lw          $a1, 0xE4($s6)
    ctx->pc = 0x200918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 228)));
label_20091c:
    // 0x20091c: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x20091cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_200920:
    // 0x200920: 0xc08025e  jal         func_200978
label_200924:
    if (ctx->pc == 0x200924u) {
        ctx->pc = 0x200924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200920u;
        // 0x200924: 0xaca20028  sw          $v0, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200928u;
        goto label_200928;
    }
    ctx->pc = 0x200920u;
    SET_GPR_U32(ctx, 31, 0x200928u);
    ctx->pc = 0x200924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200920u;
    // 0x200924: 0xaca20028  sw          $v0, 0x28($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200978u, 0x200920u, 0x200928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200928u;
label_200928:
    // 0x200928: 0xaede000c  sw          $fp, 0xC($s6)
    ctx->pc = 0x200928u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 30));
label_20092c:
    // 0x20092c: 0xaec00010  sw          $zero, 0x10($s6)
    ctx->pc = 0x20092cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 0));
label_200930:
    // 0x200930: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x200930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_200934:
    // 0x200934: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x200934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_200938:
    // 0x200938: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x200938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_20093c:
    // 0x20093c: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x20093cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_200940:
    // 0x200940: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x200940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_200944:
    // 0x200944: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x200944u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_200948:
    // 0x200948: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x200948u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20094c:
    // 0x20094c: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x20094cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_200950:
    // 0x200950: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x200950u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_200954:
    // 0x200954: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x200954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_200958:
    // 0x200958: 0xc7b80160  lwc1        $f24, 0x160($sp)
    ctx->pc = 0x200958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_20095c:
    // 0x20095c: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x20095cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_200960:
    // 0x200960: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x200960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_200964:
    // 0x200964: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x200964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_200968:
    // 0x200968: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x200968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20096c:
    // 0x20096c: 0x3e00008  jr          $ra
label_200970:
    if (ctx->pc == 0x200970u) {
        ctx->pc = 0x200970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20096Cu;
        // 0x200970: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200974u;
        goto label_200974;
    }
    ctx->pc = 0x20096Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20096Cu;
        // 0x200970: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20096Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200974u;
label_200974:
    // 0x200974: 0x0  nop
    ctx->pc = 0x200974u;
    // NOP
    ctx->pc = 0x200978u;
}
