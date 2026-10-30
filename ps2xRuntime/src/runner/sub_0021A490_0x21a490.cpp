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

// Function: sub_0021A490
// Address: 0x21a490 - 0x21ada0
void sub_0021A490_0x21a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A490_0x21a490");
#endif

    switch (ctx->pc) {
        case 0x21a490u: goto label_21a490;
        case 0x21a494u: goto label_21a494;
        case 0x21a498u: goto label_21a498;
        case 0x21a49cu: goto label_21a49c;
        case 0x21a4a0u: goto label_21a4a0;
        case 0x21a4a4u: goto label_21a4a4;
        case 0x21a4a8u: goto label_21a4a8;
        case 0x21a4acu: goto label_21a4ac;
        case 0x21a4b0u: goto label_21a4b0;
        case 0x21a4b4u: goto label_21a4b4;
        case 0x21a4b8u: goto label_21a4b8;
        case 0x21a4bcu: goto label_21a4bc;
        case 0x21a4c0u: goto label_21a4c0;
        case 0x21a4c4u: goto label_21a4c4;
        case 0x21a4c8u: goto label_21a4c8;
        case 0x21a4ccu: goto label_21a4cc;
        case 0x21a4d0u: goto label_21a4d0;
        case 0x21a4d4u: goto label_21a4d4;
        case 0x21a4d8u: goto label_21a4d8;
        case 0x21a4dcu: goto label_21a4dc;
        case 0x21a4e0u: goto label_21a4e0;
        case 0x21a4e4u: goto label_21a4e4;
        case 0x21a4e8u: goto label_21a4e8;
        case 0x21a4ecu: goto label_21a4ec;
        case 0x21a4f0u: goto label_21a4f0;
        case 0x21a4f4u: goto label_21a4f4;
        case 0x21a4f8u: goto label_21a4f8;
        case 0x21a4fcu: goto label_21a4fc;
        case 0x21a500u: goto label_21a500;
        case 0x21a504u: goto label_21a504;
        case 0x21a508u: goto label_21a508;
        case 0x21a50cu: goto label_21a50c;
        case 0x21a510u: goto label_21a510;
        case 0x21a514u: goto label_21a514;
        case 0x21a518u: goto label_21a518;
        case 0x21a51cu: goto label_21a51c;
        case 0x21a520u: goto label_21a520;
        case 0x21a524u: goto label_21a524;
        case 0x21a528u: goto label_21a528;
        case 0x21a52cu: goto label_21a52c;
        case 0x21a530u: goto label_21a530;
        case 0x21a534u: goto label_21a534;
        case 0x21a538u: goto label_21a538;
        case 0x21a53cu: goto label_21a53c;
        case 0x21a540u: goto label_21a540;
        case 0x21a544u: goto label_21a544;
        case 0x21a548u: goto label_21a548;
        case 0x21a54cu: goto label_21a54c;
        case 0x21a550u: goto label_21a550;
        case 0x21a554u: goto label_21a554;
        case 0x21a558u: goto label_21a558;
        case 0x21a55cu: goto label_21a55c;
        case 0x21a560u: goto label_21a560;
        case 0x21a564u: goto label_21a564;
        case 0x21a568u: goto label_21a568;
        case 0x21a56cu: goto label_21a56c;
        case 0x21a570u: goto label_21a570;
        case 0x21a574u: goto label_21a574;
        case 0x21a578u: goto label_21a578;
        case 0x21a57cu: goto label_21a57c;
        case 0x21a580u: goto label_21a580;
        case 0x21a584u: goto label_21a584;
        case 0x21a588u: goto label_21a588;
        case 0x21a58cu: goto label_21a58c;
        case 0x21a590u: goto label_21a590;
        case 0x21a594u: goto label_21a594;
        case 0x21a598u: goto label_21a598;
        case 0x21a59cu: goto label_21a59c;
        case 0x21a5a0u: goto label_21a5a0;
        case 0x21a5a4u: goto label_21a5a4;
        case 0x21a5a8u: goto label_21a5a8;
        case 0x21a5acu: goto label_21a5ac;
        case 0x21a5b0u: goto label_21a5b0;
        case 0x21a5b4u: goto label_21a5b4;
        case 0x21a5b8u: goto label_21a5b8;
        case 0x21a5bcu: goto label_21a5bc;
        case 0x21a5c0u: goto label_21a5c0;
        case 0x21a5c4u: goto label_21a5c4;
        case 0x21a5c8u: goto label_21a5c8;
        case 0x21a5ccu: goto label_21a5cc;
        case 0x21a5d0u: goto label_21a5d0;
        case 0x21a5d4u: goto label_21a5d4;
        case 0x21a5d8u: goto label_21a5d8;
        case 0x21a5dcu: goto label_21a5dc;
        case 0x21a5e0u: goto label_21a5e0;
        case 0x21a5e4u: goto label_21a5e4;
        case 0x21a5e8u: goto label_21a5e8;
        case 0x21a5ecu: goto label_21a5ec;
        case 0x21a5f0u: goto label_21a5f0;
        case 0x21a5f4u: goto label_21a5f4;
        case 0x21a5f8u: goto label_21a5f8;
        case 0x21a5fcu: goto label_21a5fc;
        case 0x21a600u: goto label_21a600;
        case 0x21a604u: goto label_21a604;
        case 0x21a608u: goto label_21a608;
        case 0x21a60cu: goto label_21a60c;
        case 0x21a610u: goto label_21a610;
        case 0x21a614u: goto label_21a614;
        case 0x21a618u: goto label_21a618;
        case 0x21a61cu: goto label_21a61c;
        case 0x21a620u: goto label_21a620;
        case 0x21a624u: goto label_21a624;
        case 0x21a628u: goto label_21a628;
        case 0x21a62cu: goto label_21a62c;
        case 0x21a630u: goto label_21a630;
        case 0x21a634u: goto label_21a634;
        case 0x21a638u: goto label_21a638;
        case 0x21a63cu: goto label_21a63c;
        case 0x21a640u: goto label_21a640;
        case 0x21a644u: goto label_21a644;
        case 0x21a648u: goto label_21a648;
        case 0x21a64cu: goto label_21a64c;
        case 0x21a650u: goto label_21a650;
        case 0x21a654u: goto label_21a654;
        case 0x21a658u: goto label_21a658;
        case 0x21a65cu: goto label_21a65c;
        case 0x21a660u: goto label_21a660;
        case 0x21a664u: goto label_21a664;
        case 0x21a668u: goto label_21a668;
        case 0x21a66cu: goto label_21a66c;
        case 0x21a670u: goto label_21a670;
        case 0x21a674u: goto label_21a674;
        case 0x21a678u: goto label_21a678;
        case 0x21a67cu: goto label_21a67c;
        case 0x21a680u: goto label_21a680;
        case 0x21a684u: goto label_21a684;
        case 0x21a688u: goto label_21a688;
        case 0x21a68cu: goto label_21a68c;
        case 0x21a690u: goto label_21a690;
        case 0x21a694u: goto label_21a694;
        case 0x21a698u: goto label_21a698;
        case 0x21a69cu: goto label_21a69c;
        case 0x21a6a0u: goto label_21a6a0;
        case 0x21a6a4u: goto label_21a6a4;
        case 0x21a6a8u: goto label_21a6a8;
        case 0x21a6acu: goto label_21a6ac;
        case 0x21a6b0u: goto label_21a6b0;
        case 0x21a6b4u: goto label_21a6b4;
        case 0x21a6b8u: goto label_21a6b8;
        case 0x21a6bcu: goto label_21a6bc;
        case 0x21a6c0u: goto label_21a6c0;
        case 0x21a6c4u: goto label_21a6c4;
        case 0x21a6c8u: goto label_21a6c8;
        case 0x21a6ccu: goto label_21a6cc;
        case 0x21a6d0u: goto label_21a6d0;
        case 0x21a6d4u: goto label_21a6d4;
        case 0x21a6d8u: goto label_21a6d8;
        case 0x21a6dcu: goto label_21a6dc;
        case 0x21a6e0u: goto label_21a6e0;
        case 0x21a6e4u: goto label_21a6e4;
        case 0x21a6e8u: goto label_21a6e8;
        case 0x21a6ecu: goto label_21a6ec;
        case 0x21a6f0u: goto label_21a6f0;
        case 0x21a6f4u: goto label_21a6f4;
        case 0x21a6f8u: goto label_21a6f8;
        case 0x21a6fcu: goto label_21a6fc;
        case 0x21a700u: goto label_21a700;
        case 0x21a704u: goto label_21a704;
        case 0x21a708u: goto label_21a708;
        case 0x21a70cu: goto label_21a70c;
        case 0x21a710u: goto label_21a710;
        case 0x21a714u: goto label_21a714;
        case 0x21a718u: goto label_21a718;
        case 0x21a71cu: goto label_21a71c;
        case 0x21a720u: goto label_21a720;
        case 0x21a724u: goto label_21a724;
        case 0x21a728u: goto label_21a728;
        case 0x21a72cu: goto label_21a72c;
        case 0x21a730u: goto label_21a730;
        case 0x21a734u: goto label_21a734;
        case 0x21a738u: goto label_21a738;
        case 0x21a73cu: goto label_21a73c;
        case 0x21a740u: goto label_21a740;
        case 0x21a744u: goto label_21a744;
        case 0x21a748u: goto label_21a748;
        case 0x21a74cu: goto label_21a74c;
        case 0x21a750u: goto label_21a750;
        case 0x21a754u: goto label_21a754;
        case 0x21a758u: goto label_21a758;
        case 0x21a75cu: goto label_21a75c;
        case 0x21a760u: goto label_21a760;
        case 0x21a764u: goto label_21a764;
        case 0x21a768u: goto label_21a768;
        case 0x21a76cu: goto label_21a76c;
        case 0x21a770u: goto label_21a770;
        case 0x21a774u: goto label_21a774;
        case 0x21a778u: goto label_21a778;
        case 0x21a77cu: goto label_21a77c;
        case 0x21a780u: goto label_21a780;
        case 0x21a784u: goto label_21a784;
        case 0x21a788u: goto label_21a788;
        case 0x21a78cu: goto label_21a78c;
        case 0x21a790u: goto label_21a790;
        case 0x21a794u: goto label_21a794;
        case 0x21a798u: goto label_21a798;
        case 0x21a79cu: goto label_21a79c;
        case 0x21a7a0u: goto label_21a7a0;
        case 0x21a7a4u: goto label_21a7a4;
        case 0x21a7a8u: goto label_21a7a8;
        case 0x21a7acu: goto label_21a7ac;
        case 0x21a7b0u: goto label_21a7b0;
        case 0x21a7b4u: goto label_21a7b4;
        case 0x21a7b8u: goto label_21a7b8;
        case 0x21a7bcu: goto label_21a7bc;
        case 0x21a7c0u: goto label_21a7c0;
        case 0x21a7c4u: goto label_21a7c4;
        case 0x21a7c8u: goto label_21a7c8;
        case 0x21a7ccu: goto label_21a7cc;
        case 0x21a7d0u: goto label_21a7d0;
        case 0x21a7d4u: goto label_21a7d4;
        case 0x21a7d8u: goto label_21a7d8;
        case 0x21a7dcu: goto label_21a7dc;
        case 0x21a7e0u: goto label_21a7e0;
        case 0x21a7e4u: goto label_21a7e4;
        case 0x21a7e8u: goto label_21a7e8;
        case 0x21a7ecu: goto label_21a7ec;
        case 0x21a7f0u: goto label_21a7f0;
        case 0x21a7f4u: goto label_21a7f4;
        case 0x21a7f8u: goto label_21a7f8;
        case 0x21a7fcu: goto label_21a7fc;
        case 0x21a800u: goto label_21a800;
        case 0x21a804u: goto label_21a804;
        case 0x21a808u: goto label_21a808;
        case 0x21a80cu: goto label_21a80c;
        case 0x21a810u: goto label_21a810;
        case 0x21a814u: goto label_21a814;
        case 0x21a818u: goto label_21a818;
        case 0x21a81cu: goto label_21a81c;
        case 0x21a820u: goto label_21a820;
        case 0x21a824u: goto label_21a824;
        case 0x21a828u: goto label_21a828;
        case 0x21a82cu: goto label_21a82c;
        case 0x21a830u: goto label_21a830;
        case 0x21a834u: goto label_21a834;
        case 0x21a838u: goto label_21a838;
        case 0x21a83cu: goto label_21a83c;
        case 0x21a840u: goto label_21a840;
        case 0x21a844u: goto label_21a844;
        case 0x21a848u: goto label_21a848;
        case 0x21a84cu: goto label_21a84c;
        case 0x21a850u: goto label_21a850;
        case 0x21a854u: goto label_21a854;
        case 0x21a858u: goto label_21a858;
        case 0x21a85cu: goto label_21a85c;
        case 0x21a860u: goto label_21a860;
        case 0x21a864u: goto label_21a864;
        case 0x21a868u: goto label_21a868;
        case 0x21a86cu: goto label_21a86c;
        case 0x21a870u: goto label_21a870;
        case 0x21a874u: goto label_21a874;
        case 0x21a878u: goto label_21a878;
        case 0x21a87cu: goto label_21a87c;
        case 0x21a880u: goto label_21a880;
        case 0x21a884u: goto label_21a884;
        case 0x21a888u: goto label_21a888;
        case 0x21a88cu: goto label_21a88c;
        case 0x21a890u: goto label_21a890;
        case 0x21a894u: goto label_21a894;
        case 0x21a898u: goto label_21a898;
        case 0x21a89cu: goto label_21a89c;
        case 0x21a8a0u: goto label_21a8a0;
        case 0x21a8a4u: goto label_21a8a4;
        case 0x21a8a8u: goto label_21a8a8;
        case 0x21a8acu: goto label_21a8ac;
        case 0x21a8b0u: goto label_21a8b0;
        case 0x21a8b4u: goto label_21a8b4;
        case 0x21a8b8u: goto label_21a8b8;
        case 0x21a8bcu: goto label_21a8bc;
        case 0x21a8c0u: goto label_21a8c0;
        case 0x21a8c4u: goto label_21a8c4;
        case 0x21a8c8u: goto label_21a8c8;
        case 0x21a8ccu: goto label_21a8cc;
        case 0x21a8d0u: goto label_21a8d0;
        case 0x21a8d4u: goto label_21a8d4;
        case 0x21a8d8u: goto label_21a8d8;
        case 0x21a8dcu: goto label_21a8dc;
        case 0x21a8e0u: goto label_21a8e0;
        case 0x21a8e4u: goto label_21a8e4;
        case 0x21a8e8u: goto label_21a8e8;
        case 0x21a8ecu: goto label_21a8ec;
        case 0x21a8f0u: goto label_21a8f0;
        case 0x21a8f4u: goto label_21a8f4;
        case 0x21a8f8u: goto label_21a8f8;
        case 0x21a8fcu: goto label_21a8fc;
        case 0x21a900u: goto label_21a900;
        case 0x21a904u: goto label_21a904;
        case 0x21a908u: goto label_21a908;
        case 0x21a90cu: goto label_21a90c;
        case 0x21a910u: goto label_21a910;
        case 0x21a914u: goto label_21a914;
        case 0x21a918u: goto label_21a918;
        case 0x21a91cu: goto label_21a91c;
        case 0x21a920u: goto label_21a920;
        case 0x21a924u: goto label_21a924;
        case 0x21a928u: goto label_21a928;
        case 0x21a92cu: goto label_21a92c;
        case 0x21a930u: goto label_21a930;
        case 0x21a934u: goto label_21a934;
        case 0x21a938u: goto label_21a938;
        case 0x21a93cu: goto label_21a93c;
        case 0x21a940u: goto label_21a940;
        case 0x21a944u: goto label_21a944;
        case 0x21a948u: goto label_21a948;
        case 0x21a94cu: goto label_21a94c;
        case 0x21a950u: goto label_21a950;
        case 0x21a954u: goto label_21a954;
        case 0x21a958u: goto label_21a958;
        case 0x21a95cu: goto label_21a95c;
        case 0x21a960u: goto label_21a960;
        case 0x21a964u: goto label_21a964;
        case 0x21a968u: goto label_21a968;
        case 0x21a96cu: goto label_21a96c;
        case 0x21a970u: goto label_21a970;
        case 0x21a974u: goto label_21a974;
        case 0x21a978u: goto label_21a978;
        case 0x21a97cu: goto label_21a97c;
        case 0x21a980u: goto label_21a980;
        case 0x21a984u: goto label_21a984;
        case 0x21a988u: goto label_21a988;
        case 0x21a98cu: goto label_21a98c;
        case 0x21a990u: goto label_21a990;
        case 0x21a994u: goto label_21a994;
        case 0x21a998u: goto label_21a998;
        case 0x21a99cu: goto label_21a99c;
        case 0x21a9a0u: goto label_21a9a0;
        case 0x21a9a4u: goto label_21a9a4;
        case 0x21a9a8u: goto label_21a9a8;
        case 0x21a9acu: goto label_21a9ac;
        case 0x21a9b0u: goto label_21a9b0;
        case 0x21a9b4u: goto label_21a9b4;
        case 0x21a9b8u: goto label_21a9b8;
        case 0x21a9bcu: goto label_21a9bc;
        case 0x21a9c0u: goto label_21a9c0;
        case 0x21a9c4u: goto label_21a9c4;
        case 0x21a9c8u: goto label_21a9c8;
        case 0x21a9ccu: goto label_21a9cc;
        case 0x21a9d0u: goto label_21a9d0;
        case 0x21a9d4u: goto label_21a9d4;
        case 0x21a9d8u: goto label_21a9d8;
        case 0x21a9dcu: goto label_21a9dc;
        case 0x21a9e0u: goto label_21a9e0;
        case 0x21a9e4u: goto label_21a9e4;
        case 0x21a9e8u: goto label_21a9e8;
        case 0x21a9ecu: goto label_21a9ec;
        case 0x21a9f0u: goto label_21a9f0;
        case 0x21a9f4u: goto label_21a9f4;
        case 0x21a9f8u: goto label_21a9f8;
        case 0x21a9fcu: goto label_21a9fc;
        case 0x21aa00u: goto label_21aa00;
        case 0x21aa04u: goto label_21aa04;
        case 0x21aa08u: goto label_21aa08;
        case 0x21aa0cu: goto label_21aa0c;
        case 0x21aa10u: goto label_21aa10;
        case 0x21aa14u: goto label_21aa14;
        case 0x21aa18u: goto label_21aa18;
        case 0x21aa1cu: goto label_21aa1c;
        case 0x21aa20u: goto label_21aa20;
        case 0x21aa24u: goto label_21aa24;
        case 0x21aa28u: goto label_21aa28;
        case 0x21aa2cu: goto label_21aa2c;
        case 0x21aa30u: goto label_21aa30;
        case 0x21aa34u: goto label_21aa34;
        case 0x21aa38u: goto label_21aa38;
        case 0x21aa3cu: goto label_21aa3c;
        case 0x21aa40u: goto label_21aa40;
        case 0x21aa44u: goto label_21aa44;
        case 0x21aa48u: goto label_21aa48;
        case 0x21aa4cu: goto label_21aa4c;
        case 0x21aa50u: goto label_21aa50;
        case 0x21aa54u: goto label_21aa54;
        case 0x21aa58u: goto label_21aa58;
        case 0x21aa5cu: goto label_21aa5c;
        case 0x21aa60u: goto label_21aa60;
        case 0x21aa64u: goto label_21aa64;
        case 0x21aa68u: goto label_21aa68;
        case 0x21aa6cu: goto label_21aa6c;
        case 0x21aa70u: goto label_21aa70;
        case 0x21aa74u: goto label_21aa74;
        case 0x21aa78u: goto label_21aa78;
        case 0x21aa7cu: goto label_21aa7c;
        case 0x21aa80u: goto label_21aa80;
        case 0x21aa84u: goto label_21aa84;
        case 0x21aa88u: goto label_21aa88;
        case 0x21aa8cu: goto label_21aa8c;
        case 0x21aa90u: goto label_21aa90;
        case 0x21aa94u: goto label_21aa94;
        case 0x21aa98u: goto label_21aa98;
        case 0x21aa9cu: goto label_21aa9c;
        case 0x21aaa0u: goto label_21aaa0;
        case 0x21aaa4u: goto label_21aaa4;
        case 0x21aaa8u: goto label_21aaa8;
        case 0x21aaacu: goto label_21aaac;
        case 0x21aab0u: goto label_21aab0;
        case 0x21aab4u: goto label_21aab4;
        case 0x21aab8u: goto label_21aab8;
        case 0x21aabcu: goto label_21aabc;
        case 0x21aac0u: goto label_21aac0;
        case 0x21aac4u: goto label_21aac4;
        case 0x21aac8u: goto label_21aac8;
        case 0x21aaccu: goto label_21aacc;
        case 0x21aad0u: goto label_21aad0;
        case 0x21aad4u: goto label_21aad4;
        case 0x21aad8u: goto label_21aad8;
        case 0x21aadcu: goto label_21aadc;
        case 0x21aae0u: goto label_21aae0;
        case 0x21aae4u: goto label_21aae4;
        case 0x21aae8u: goto label_21aae8;
        case 0x21aaecu: goto label_21aaec;
        case 0x21aaf0u: goto label_21aaf0;
        case 0x21aaf4u: goto label_21aaf4;
        case 0x21aaf8u: goto label_21aaf8;
        case 0x21aafcu: goto label_21aafc;
        case 0x21ab00u: goto label_21ab00;
        case 0x21ab04u: goto label_21ab04;
        case 0x21ab08u: goto label_21ab08;
        case 0x21ab0cu: goto label_21ab0c;
        case 0x21ab10u: goto label_21ab10;
        case 0x21ab14u: goto label_21ab14;
        case 0x21ab18u: goto label_21ab18;
        case 0x21ab1cu: goto label_21ab1c;
        case 0x21ab20u: goto label_21ab20;
        case 0x21ab24u: goto label_21ab24;
        case 0x21ab28u: goto label_21ab28;
        case 0x21ab2cu: goto label_21ab2c;
        case 0x21ab30u: goto label_21ab30;
        case 0x21ab34u: goto label_21ab34;
        case 0x21ab38u: goto label_21ab38;
        case 0x21ab3cu: goto label_21ab3c;
        case 0x21ab40u: goto label_21ab40;
        case 0x21ab44u: goto label_21ab44;
        case 0x21ab48u: goto label_21ab48;
        case 0x21ab4cu: goto label_21ab4c;
        case 0x21ab50u: goto label_21ab50;
        case 0x21ab54u: goto label_21ab54;
        case 0x21ab58u: goto label_21ab58;
        case 0x21ab5cu: goto label_21ab5c;
        case 0x21ab60u: goto label_21ab60;
        case 0x21ab64u: goto label_21ab64;
        case 0x21ab68u: goto label_21ab68;
        case 0x21ab6cu: goto label_21ab6c;
        case 0x21ab70u: goto label_21ab70;
        case 0x21ab74u: goto label_21ab74;
        case 0x21ab78u: goto label_21ab78;
        case 0x21ab7cu: goto label_21ab7c;
        case 0x21ab80u: goto label_21ab80;
        case 0x21ab84u: goto label_21ab84;
        case 0x21ab88u: goto label_21ab88;
        case 0x21ab8cu: goto label_21ab8c;
        case 0x21ab90u: goto label_21ab90;
        case 0x21ab94u: goto label_21ab94;
        case 0x21ab98u: goto label_21ab98;
        case 0x21ab9cu: goto label_21ab9c;
        case 0x21aba0u: goto label_21aba0;
        case 0x21aba4u: goto label_21aba4;
        case 0x21aba8u: goto label_21aba8;
        case 0x21abacu: goto label_21abac;
        case 0x21abb0u: goto label_21abb0;
        case 0x21abb4u: goto label_21abb4;
        case 0x21abb8u: goto label_21abb8;
        case 0x21abbcu: goto label_21abbc;
        case 0x21abc0u: goto label_21abc0;
        case 0x21abc4u: goto label_21abc4;
        case 0x21abc8u: goto label_21abc8;
        case 0x21abccu: goto label_21abcc;
        case 0x21abd0u: goto label_21abd0;
        case 0x21abd4u: goto label_21abd4;
        case 0x21abd8u: goto label_21abd8;
        case 0x21abdcu: goto label_21abdc;
        case 0x21abe0u: goto label_21abe0;
        case 0x21abe4u: goto label_21abe4;
        case 0x21abe8u: goto label_21abe8;
        case 0x21abecu: goto label_21abec;
        case 0x21abf0u: goto label_21abf0;
        case 0x21abf4u: goto label_21abf4;
        case 0x21abf8u: goto label_21abf8;
        case 0x21abfcu: goto label_21abfc;
        case 0x21ac00u: goto label_21ac00;
        case 0x21ac04u: goto label_21ac04;
        case 0x21ac08u: goto label_21ac08;
        case 0x21ac0cu: goto label_21ac0c;
        case 0x21ac10u: goto label_21ac10;
        case 0x21ac14u: goto label_21ac14;
        case 0x21ac18u: goto label_21ac18;
        case 0x21ac1cu: goto label_21ac1c;
        case 0x21ac20u: goto label_21ac20;
        case 0x21ac24u: goto label_21ac24;
        case 0x21ac28u: goto label_21ac28;
        case 0x21ac2cu: goto label_21ac2c;
        case 0x21ac30u: goto label_21ac30;
        case 0x21ac34u: goto label_21ac34;
        case 0x21ac38u: goto label_21ac38;
        case 0x21ac3cu: goto label_21ac3c;
        case 0x21ac40u: goto label_21ac40;
        case 0x21ac44u: goto label_21ac44;
        case 0x21ac48u: goto label_21ac48;
        case 0x21ac4cu: goto label_21ac4c;
        case 0x21ac50u: goto label_21ac50;
        case 0x21ac54u: goto label_21ac54;
        case 0x21ac58u: goto label_21ac58;
        case 0x21ac5cu: goto label_21ac5c;
        case 0x21ac60u: goto label_21ac60;
        case 0x21ac64u: goto label_21ac64;
        case 0x21ac68u: goto label_21ac68;
        case 0x21ac6cu: goto label_21ac6c;
        case 0x21ac70u: goto label_21ac70;
        case 0x21ac74u: goto label_21ac74;
        case 0x21ac78u: goto label_21ac78;
        case 0x21ac7cu: goto label_21ac7c;
        case 0x21ac80u: goto label_21ac80;
        case 0x21ac84u: goto label_21ac84;
        case 0x21ac88u: goto label_21ac88;
        case 0x21ac8cu: goto label_21ac8c;
        case 0x21ac90u: goto label_21ac90;
        case 0x21ac94u: goto label_21ac94;
        case 0x21ac98u: goto label_21ac98;
        case 0x21ac9cu: goto label_21ac9c;
        case 0x21aca0u: goto label_21aca0;
        case 0x21aca4u: goto label_21aca4;
        case 0x21aca8u: goto label_21aca8;
        case 0x21acacu: goto label_21acac;
        case 0x21acb0u: goto label_21acb0;
        case 0x21acb4u: goto label_21acb4;
        case 0x21acb8u: goto label_21acb8;
        case 0x21acbcu: goto label_21acbc;
        case 0x21acc0u: goto label_21acc0;
        case 0x21acc4u: goto label_21acc4;
        case 0x21acc8u: goto label_21acc8;
        case 0x21acccu: goto label_21accc;
        case 0x21acd0u: goto label_21acd0;
        case 0x21acd4u: goto label_21acd4;
        case 0x21acd8u: goto label_21acd8;
        case 0x21acdcu: goto label_21acdc;
        case 0x21ace0u: goto label_21ace0;
        case 0x21ace4u: goto label_21ace4;
        case 0x21ace8u: goto label_21ace8;
        case 0x21acecu: goto label_21acec;
        case 0x21acf0u: goto label_21acf0;
        case 0x21acf4u: goto label_21acf4;
        case 0x21acf8u: goto label_21acf8;
        case 0x21acfcu: goto label_21acfc;
        case 0x21ad00u: goto label_21ad00;
        case 0x21ad04u: goto label_21ad04;
        case 0x21ad08u: goto label_21ad08;
        case 0x21ad0cu: goto label_21ad0c;
        case 0x21ad10u: goto label_21ad10;
        case 0x21ad14u: goto label_21ad14;
        case 0x21ad18u: goto label_21ad18;
        case 0x21ad1cu: goto label_21ad1c;
        case 0x21ad20u: goto label_21ad20;
        case 0x21ad24u: goto label_21ad24;
        case 0x21ad28u: goto label_21ad28;
        case 0x21ad2cu: goto label_21ad2c;
        case 0x21ad30u: goto label_21ad30;
        case 0x21ad34u: goto label_21ad34;
        case 0x21ad38u: goto label_21ad38;
        case 0x21ad3cu: goto label_21ad3c;
        case 0x21ad40u: goto label_21ad40;
        case 0x21ad44u: goto label_21ad44;
        case 0x21ad48u: goto label_21ad48;
        case 0x21ad4cu: goto label_21ad4c;
        case 0x21ad50u: goto label_21ad50;
        case 0x21ad54u: goto label_21ad54;
        case 0x21ad58u: goto label_21ad58;
        case 0x21ad5cu: goto label_21ad5c;
        case 0x21ad60u: goto label_21ad60;
        case 0x21ad64u: goto label_21ad64;
        case 0x21ad68u: goto label_21ad68;
        case 0x21ad6cu: goto label_21ad6c;
        case 0x21ad70u: goto label_21ad70;
        case 0x21ad74u: goto label_21ad74;
        case 0x21ad78u: goto label_21ad78;
        case 0x21ad7cu: goto label_21ad7c;
        case 0x21ad80u: goto label_21ad80;
        case 0x21ad84u: goto label_21ad84;
        case 0x21ad88u: goto label_21ad88;
        case 0x21ad8cu: goto label_21ad8c;
        case 0x21ad90u: goto label_21ad90;
        case 0x21ad94u: goto label_21ad94;
        case 0x21ad98u: goto label_21ad98;
        case 0x21ad9cu: goto label_21ad9c;
        default: break;
    }

    ctx->pc = 0x21a490u;

label_21a490:
    // 0x21a490: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x21a490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
label_21a494:
    // 0x21a494: 0x7fb40330  sq          $s4, 0x330($sp)
    ctx->pc = 0x21a494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 20));
label_21a498:
    // 0x21a498: 0x7fb00370  sq          $s0, 0x370($sp)
    ctx->pc = 0x21a498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 16));
label_21a49c:
    // 0x21a49c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x21a49cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21a4a0:
    // 0x21a4a0: 0x7fb10360  sq          $s1, 0x360($sp)
    ctx->pc = 0x21a4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 17));
label_21a4a4:
    // 0x21a4a4: 0x7fb20350  sq          $s2, 0x350($sp)
    ctx->pc = 0x21a4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 18));
label_21a4a8:
    // 0x21a4a8: 0x7fb30340  sq          $s3, 0x340($sp)
    ctx->pc = 0x21a4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 19));
label_21a4ac:
    // 0x21a4ac: 0xffbf0320  sd          $ra, 0x320($sp)
    ctx->pc = 0x21a4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 31));
label_21a4b0:
    // 0x21a4b0: 0xe7b50388  swc1        $f21, 0x388($sp)
    ctx->pc = 0x21a4b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 904), bits); }
label_21a4b4:
    // 0x21a4b4: 0xe7b40380  swc1        $f20, 0x380($sp)
    ctx->pc = 0x21a4b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
label_21a4b8:
    // 0x21a4b8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x21a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_21a4bc:
    // 0x21a4bc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x21a4bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_21a4c0:
    // 0x21a4c0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x21a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_21a4c4:
    // 0x21a4c4: 0x40f809  jalr        $v0
label_21a4c8:
    if (ctx->pc == 0x21A4C8u) {
        ctx->pc = 0x21A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4C4u;
        // 0x21a4c8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A4CCu;
        goto label_21a4cc;
    }
    ctx->pc = 0x21A4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21A4CCu);
        ctx->pc = 0x21A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4C4u;
        // 0x21a4c8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A4C4u, 0x21A4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A4CCu;
label_21a4cc:
    // 0x21a4cc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x21a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_21a4d0:
    // 0x21a4d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21a4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21a4d4:
    // 0x21a4d4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_21a4d8:
    if (ctx->pc == 0x21A4D8u) {
        ctx->pc = 0x21A4DCu;
        goto label_21a4dc;
    }
    ctx->pc = 0x21A4D4u;
    {
        const bool branch_taken_0x21a4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a4d4) {
            ctx->pc = 0x21A524u;
            goto label_21a524;
        }
    }
    ctx->pc = 0x21A4DCu;
label_21a4dc:
    // 0x21a4dc: 0xc089fbe  jal         func_227EF8
label_21a4e0:
    if (ctx->pc == 0x21A4E0u) {
        ctx->pc = 0x21A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4DCu;
        // 0x21a4e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A4E4u;
        goto label_21a4e4;
    }
    ctx->pc = 0x21A4DCu;
    SET_GPR_U32(ctx, 31, 0x21A4E4u);
    ctx->pc = 0x21A4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A4DCu;
    // 0x21a4e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EF8u, 0x21A4DCu, 0x21A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4E4u;
label_21a4e4:
    // 0x21a4e4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_21a4e8:
    if (ctx->pc == 0x21A4E8u) {
        ctx->pc = 0x21A4ECu;
        goto label_21a4ec;
    }
    ctx->pc = 0x21A4E4u;
    {
        const bool branch_taken_0x21a4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a4e4) {
            ctx->pc = 0x21A524u;
            goto label_21a524;
        }
    }
    ctx->pc = 0x21A4ECu;
label_21a4ec:
    // 0x21a4ec: 0xc088ed2  jal         func_223B48
label_21a4f0:
    if (ctx->pc == 0x21A4F0u) {
        ctx->pc = 0x21A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4ECu;
        // 0x21a4f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A4F4u;
        goto label_21a4f4;
    }
    ctx->pc = 0x21A4ECu;
    SET_GPR_U32(ctx, 31, 0x21A4F4u);
    ctx->pc = 0x21A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A4ECu;
    // 0x21a4f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x21A4ECu, 0x21A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4F4u;
label_21a4f4:
    // 0x21a4f4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_21a4f8:
    if (ctx->pc == 0x21A4F8u) {
        ctx->pc = 0x21A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4F4u;
        // 0x21a4f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A4FCu;
        goto label_21a4fc;
    }
    ctx->pc = 0x21A4F4u;
    {
        const bool branch_taken_0x21a4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4F4u;
        // 0x21a4f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4f4) {
            ctx->pc = 0x21A524u;
            goto label_21a524;
        }
    }
    ctx->pc = 0x21A4FCu;
label_21a4fc:
    // 0x21a4fc: 0xc089998  jal         func_226660
label_21a500:
    if (ctx->pc == 0x21A500u) {
        ctx->pc = 0x21A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4FCu;
        // 0x21a500: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A504u;
        goto label_21a504;
    }
    ctx->pc = 0x21A4FCu;
    SET_GPR_U32(ctx, 31, 0x21A504u);
    ctx->pc = 0x21A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A4FCu;
    // 0x21a500: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x21A4FCu, 0x21A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A504u;
label_21a504:
    // 0x21a504: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21a508:
    if (ctx->pc == 0x21A508u) {
        ctx->pc = 0x21A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A504u;
        // 0x21a508: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A50Cu;
        goto label_21a50c;
    }
    ctx->pc = 0x21A504u;
    {
        const bool branch_taken_0x21a504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A504u;
        // 0x21a508: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a504) {
            ctx->pc = 0x21A524u;
            goto label_21a524;
        }
    }
    ctx->pc = 0x21A50Cu;
label_21a50c:
    // 0x21a50c: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x21a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_21a510:
    // 0x21a510: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x21a510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_21a514:
    // 0x21a514: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_21a518:
    if (ctx->pc == 0x21A518u) {
        ctx->pc = 0x21A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A514u;
        // 0x21a518: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A51Cu;
        goto label_21a51c;
    }
    ctx->pc = 0x21A514u;
    {
        const bool branch_taken_0x21a514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A514u;
        // 0x21a518: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a514) {
            ctx->pc = 0x21A524u;
            goto label_21a524;
        }
    }
    ctx->pc = 0x21A51Cu;
label_21a51c:
    // 0x21a51c: 0x14820217  bne         $a0, $v0, . + 4 + (0x217 << 2)
label_21a520:
    if (ctx->pc == 0x21A520u) {
        ctx->pc = 0x21A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A51Cu;
        // 0x21a520: 0x7bb00370  lq          $s0, 0x370($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A524u;
        goto label_21a524;
    }
    ctx->pc = 0x21A51Cu;
    {
        const bool branch_taken_0x21a51c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A51Cu;
        // 0x21a520: 0x7bb00370  lq          $s0, 0x370($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a51c) {
            ctx->pc = 0x21AD7Cu;
            goto label_21ad7c;
        }
    }
    ctx->pc = 0x21A524u;
label_21a524:
    // 0x21a524: 0xc088e48  jal         func_223920
label_21a528:
    if (ctx->pc == 0x21A528u) {
        ctx->pc = 0x21A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A524u;
        // 0x21a528: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A52Cu;
        goto label_21a52c;
    }
    ctx->pc = 0x21A524u;
    SET_GPR_U32(ctx, 31, 0x21A52Cu);
    ctx->pc = 0x21A528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A524u;
    // 0x21a528: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x21A524u, 0x21A52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A52Cu;
label_21a52c:
    // 0x21a52c: 0x14400213  bnez        $v0, . + 4 + (0x213 << 2)
label_21a530:
    if (ctx->pc == 0x21A530u) {
        ctx->pc = 0x21A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A52Cu;
        // 0x21a530: 0x7bb00370  lq          $s0, 0x370($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A534u;
        goto label_21a534;
    }
    ctx->pc = 0x21A52Cu;
    {
        const bool branch_taken_0x21a52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A52Cu;
        // 0x21a530: 0x7bb00370  lq          $s0, 0x370($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a52c) {
            ctx->pc = 0x21AD7Cu;
            goto label_21ad7c;
        }
    }
    ctx->pc = 0x21A534u;
label_21a534:
    // 0x21a534: 0xc088e60  jal         func_223980
label_21a538:
    if (ctx->pc == 0x21A538u) {
        ctx->pc = 0x21A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A534u;
        // 0x21a538: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A53Cu;
        goto label_21a53c;
    }
    ctx->pc = 0x21A534u;
    SET_GPR_U32(ctx, 31, 0x21A53Cu);
    ctx->pc = 0x21A538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A534u;
    // 0x21a538: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x21A534u, 0x21A53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A53Cu;
label_21a53c:
    // 0x21a53c: 0x1440020f  bnez        $v0, . + 4 + (0x20F << 2)
label_21a540:
    if (ctx->pc == 0x21A540u) {
        ctx->pc = 0x21A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A53Cu;
        // 0x21a540: 0x7bb00370  lq          $s0, 0x370($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A544u;
        goto label_21a544;
    }
    ctx->pc = 0x21A53Cu;
    {
        const bool branch_taken_0x21a53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A53Cu;
        // 0x21a540: 0x7bb00370  lq          $s0, 0x370($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a53c) {
            ctx->pc = 0x21AD7Cu;
            goto label_21ad7c;
        }
    }
    ctx->pc = 0x21A544u;
label_21a544:
    // 0x21a544: 0x828201b0  lb          $v0, 0x1B0($s4)
    ctx->pc = 0x21a544u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 432)));
label_21a548:
    // 0x21a548: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x21a548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_21a54c:
    // 0x21a54c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x21a54cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_21a550:
    // 0x21a550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21a550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21a554:
    // 0x21a554: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21a554u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21a558:
    // 0x21a558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21a55c:
    if (ctx->pc == 0x21A55Cu) {
        ctx->pc = 0x21A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A558u;
        // 0x21a55c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A560u;
        goto label_21a560;
    }
    ctx->pc = 0x21A558u;
    {
        const bool branch_taken_0x21a558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A558u;
        // 0x21a55c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a558) {
            ctx->pc = 0x21A568u;
            goto label_21a568;
        }
    }
    ctx->pc = 0x21A560u;
label_21a560:
    // 0x21a560: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21a560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_21a564:
    // 0x21a564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21a564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21a568:
    // 0x21a568: 0xc087408  jal         func_21D020
label_21a56c:
    if (ctx->pc == 0x21A56Cu) {
        ctx->pc = 0x21A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A568u;
        // 0x21a56c: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A570u;
        goto label_21a570;
    }
    ctx->pc = 0x21A568u;
    SET_GPR_U32(ctx, 31, 0x21A570u);
    ctx->pc = 0x21A56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A568u;
    // 0x21a56c: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x21A568u, 0x21A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A570u;
label_21a570:
    // 0x21a570: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x21a570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21a574:
    // 0x21a574: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21a574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21a578:
    // 0x21a578: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21a578u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_21a57c:
    // 0x21a57c: 0xc089fbe  jal         func_227EF8
label_21a580:
    if (ctx->pc == 0x21A580u) {
        ctx->pc = 0x21A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A57Cu;
        // 0x21a580: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A584u;
        goto label_21a584;
    }
    ctx->pc = 0x21A57Cu;
    SET_GPR_U32(ctx, 31, 0x21A584u);
    ctx->pc = 0x21A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A57Cu;
    // 0x21a580: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EF8u, 0x21A57Cu, 0x21A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A584u;
label_21a584:
    // 0x21a584: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_21a588:
    if (ctx->pc == 0x21A588u) {
        ctx->pc = 0x21A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A584u;
        // 0x21a588: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A58Cu;
        goto label_21a58c;
    }
    ctx->pc = 0x21A584u;
    {
        const bool branch_taken_0x21a584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a584) {
            ctx->pc = 0x21A588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A584u;
            // 0x21a588: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A5A0u;
            goto label_21a5a0;
        }
    }
    ctx->pc = 0x21A58Cu;
label_21a58c:
    // 0x21a58c: 0xc088ed2  jal         func_223B48
label_21a590:
    if (ctx->pc == 0x21A590u) {
        ctx->pc = 0x21A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A58Cu;
        // 0x21a590: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A594u;
        goto label_21a594;
    }
    ctx->pc = 0x21A58Cu;
    SET_GPR_U32(ctx, 31, 0x21A594u);
    ctx->pc = 0x21A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A58Cu;
    // 0x21a590: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x21A58Cu, 0x21A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A594u;
label_21a594:
    // 0x21a594: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_21a598:
    if (ctx->pc == 0x21A598u) {
        ctx->pc = 0x21A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A594u;
        // 0x21a598: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A59Cu;
        goto label_21a59c;
    }
    ctx->pc = 0x21A594u;
    {
        const bool branch_taken_0x21a594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A594u;
        // 0x21a598: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a594) {
            ctx->pc = 0x21A674u;
            goto label_21a674;
        }
    }
    ctx->pc = 0x21A59Cu;
label_21a59c:
    // 0x21a59c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x21a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_21a5a0:
    // 0x21a5a0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x21a5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21a5a4:
    // 0x21a5a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21a5a8:
    // 0x21a5a8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x21a5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21a5ac:
    // 0x21a5ac: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x21a5acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_21a5b0:
    // 0x21a5b0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x21a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_21a5b4:
    // 0x21a5b4: 0x40f809  jalr        $v0
label_21a5b8:
    if (ctx->pc == 0x21A5B8u) {
        ctx->pc = 0x21A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5B4u;
        // 0x21a5b8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A5BCu;
        goto label_21a5bc;
    }
    ctx->pc = 0x21A5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21A5BCu);
        ctx->pc = 0x21A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5B4u;
        // 0x21a5b8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A5B4u, 0x21A5BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A5BCu;
label_21a5bc:
    // 0x21a5bc: 0x26830090  addiu       $v1, $s4, 0x90
    ctx->pc = 0x21a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_21a5c0:
    // 0x21a5c0: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x21a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_21a5c4:
    // 0x21a5c4: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x21a5c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_21a5c8:
    // 0x21a5c8: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x21a5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_21a5cc:
    // 0x21a5cc: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x21a5ccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21a5d0:
    // 0x21a5d0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_21a5d4:
    // 0x21a5d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21a5d8:
    // 0x21a5d8: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x21a5d8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21a5dc:
    // 0x21a5dc: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x21a5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
label_21a5e0:
    // 0x21a5e0: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x21a5e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_21a5e4:
    // 0x21a5e4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_21a5e8:
    // 0x21a5e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21a5ec:
    // 0x21a5ec: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x21a5ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_21a5f0:
    // 0x21a5f0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21a5f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21a5f4:
    // 0x21a5f4: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x21a5f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_21a5f8:
    // 0x21a5f8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x21a5f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a5fc:
    // 0x21a5fc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x21a5fcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_21a600:
    // 0x21a600: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x21a600u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_21a604:
    // 0x21a604: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x21a604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a608:
    // 0x21a608: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x21a608u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a60c:
    // 0x21a60c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x21a60cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21a610:
    // 0x21a610: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x21a610u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a614:
    // 0x21a614: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x21a614u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_21a618:
    // 0x21a618: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x21a618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21a61c:
    // 0x21a61c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x21a61cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a620:
    // 0x21a620: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x21a620u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_21a624:
    // 0x21a624: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x21a624u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a628:
    // 0x21a628: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x21a628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a62c:
    // 0x21a62c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x21a62cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a630:
    // 0x21a630: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x21a630u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_21a634:
    // 0x21a634: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x21a634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_21a638:
    // 0x21a638: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x21a638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_21a63c:
    // 0x21a63c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x21a63cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_21a640:
    // 0x21a640: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21a640u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21a644:
    // 0x21a644: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21a644u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21a648:
    // 0x21a648: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21a648u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21a64c:
    // 0x21a64c: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x21a64cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
label_21a650:
    // 0x21a650: 0x8c447198  lw          $a0, 0x7198($v0)
    ctx->pc = 0x21a650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
label_21a654:
    // 0x21a654: 0x8e8501a0  lw          $a1, 0x1A0($s4)
    ctx->pc = 0x21a654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 416)));
label_21a658:
    // 0x21a658: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21a658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21a65c:
    // 0x21a65c: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x21a65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
label_21a660:
    // 0x21a660: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x21a660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_21a664:
    // 0x21a664: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x21a664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_21a668:
    // 0x21a668: 0xc0d1df0  jal         func_3477C0
label_21a66c:
    if (ctx->pc == 0x21A66Cu) {
        ctx->pc = 0x21A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A668u;
        // 0x21a66c: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A670u;
        goto label_21a670;
    }
    ctx->pc = 0x21A668u;
    SET_GPR_U32(ctx, 31, 0x21A670u);
    ctx->pc = 0x21A66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A668u;
    // 0x21a66c: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3477C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3477C0u, 0x21A668u, 0x21A670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A670u;
label_21a670:
    // 0x21a670: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21a674:
    // 0x21a674: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x21a674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_21a678:
    // 0x21a678: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x21a678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21a67c:
    // 0x21a67c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x21a67cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_21a680:
    // 0x21a680: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x21a680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_21a684:
    // 0x21a684: 0x60f809  jalr        $v1
label_21a688:
    if (ctx->pc == 0x21A688u) {
        ctx->pc = 0x21A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A684u;
        // 0x21a688: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A68Cu;
        goto label_21a68c;
    }
    ctx->pc = 0x21A684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21A68Cu);
        ctx->pc = 0x21A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A684u;
        // 0x21a688: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A684u, 0x21A68Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A68Cu;
label_21a68c:
    // 0x21a68c: 0xc089fac  jal         func_227EB0
label_21a690:
    if (ctx->pc == 0x21A690u) {
        ctx->pc = 0x21A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A68Cu;
        // 0x21a690: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A694u;
        goto label_21a694;
    }
    ctx->pc = 0x21A68Cu;
    SET_GPR_U32(ctx, 31, 0x21A694u);
    ctx->pc = 0x21A690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A68Cu;
    // 0x21a690: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x21A68Cu, 0x21A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A694u;
label_21a694:
    // 0x21a694: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_21a698:
    if (ctx->pc == 0x21A698u) {
        ctx->pc = 0x21A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A694u;
        // 0x21a698: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A69Cu;
        goto label_21a69c;
    }
    ctx->pc = 0x21A694u;
    {
        const bool branch_taken_0x21a694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A694u;
        // 0x21a698: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a694) {
            ctx->pc = 0x21A74Cu;
            goto label_21a74c;
        }
    }
    ctx->pc = 0x21A69Cu;
label_21a69c:
    // 0x21a69c: 0xc088ed2  jal         func_223B48
label_21a6a0:
    if (ctx->pc == 0x21A6A0u) {
        ctx->pc = 0x21A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A69Cu;
        // 0x21a6a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A6A4u;
        goto label_21a6a4;
    }
    ctx->pc = 0x21A69Cu;
    SET_GPR_U32(ctx, 31, 0x21A6A4u);
    ctx->pc = 0x21A6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A69Cu;
    // 0x21a6a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x21A69Cu, 0x21A6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A6A4u;
label_21a6a4:
    // 0x21a6a4: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_21a6a8:
    if (ctx->pc == 0x21A6A8u) {
        ctx->pc = 0x21A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6A4u;
        // 0x21a6a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A6ACu;
        goto label_21a6ac;
    }
    ctx->pc = 0x21A6A4u;
    {
        const bool branch_taken_0x21a6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6A4u;
        // 0x21a6a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6a4) {
            ctx->pc = 0x21A74Cu;
            goto label_21a74c;
        }
    }
    ctx->pc = 0x21A6ACu;
label_21a6ac:
    // 0x21a6ac: 0xc089f66  jal         func_227D98
label_21a6b0:
    if (ctx->pc == 0x21A6B0u) {
        ctx->pc = 0x21A6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6ACu;
        // 0x21a6b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A6B4u;
        goto label_21a6b4;
    }
    ctx->pc = 0x21A6ACu;
    SET_GPR_U32(ctx, 31, 0x21A6B4u);
    ctx->pc = 0x21A6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A6ACu;
    // 0x21a6b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x21A6ACu, 0x21A6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A6B4u;
label_21a6b4:
    // 0x21a6b4: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_21a6b8:
    if (ctx->pc == 0x21A6B8u) {
        ctx->pc = 0x21A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6B4u;
        // 0x21a6b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A6BCu;
        goto label_21a6bc;
    }
    ctx->pc = 0x21A6B4u;
    {
        const bool branch_taken_0x21a6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6B4u;
        // 0x21a6b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6b4) {
            ctx->pc = 0x21A74Cu;
            goto label_21a74c;
        }
    }
    ctx->pc = 0x21A6BCu;
label_21a6bc:
    // 0x21a6bc: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x21a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_21a6c0:
    // 0x21a6c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21a6c4:
    // 0x21a6c4: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x21a6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_21a6c8:
    // 0x21a6c8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_21a6cc:
    if (ctx->pc == 0x21A6CCu) {
        ctx->pc = 0x21A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6C8u;
        // 0x21a6cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A6D0u;
        goto label_21a6d0;
    }
    ctx->pc = 0x21A6C8u;
    {
        const bool branch_taken_0x21a6c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6C8u;
        // 0x21a6cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6c8) {
            ctx->pc = 0x21A6D8u;
            goto label_21a6d8;
        }
    }
    ctx->pc = 0x21A6D0u;
label_21a6d0:
    // 0x21a6d0: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
label_21a6d4:
    if (ctx->pc == 0x21A6D4u) {
        ctx->pc = 0x21A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6D0u;
        // 0x21a6d4: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A6D8u;
        goto label_21a6d8;
    }
    ctx->pc = 0x21A6D0u;
    {
        const bool branch_taken_0x21a6d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a6d0) {
            ctx->pc = 0x21A6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A6D0u;
            // 0x21a6d4: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A6E0u;
            goto label_21a6e0;
        }
    }
    ctx->pc = 0x21A6D8u;
label_21a6d8:
    // 0x21a6d8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_21a6dc:
    if (ctx->pc == 0x21A6DCu) {
        ctx->pc = 0x21A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6D8u;
        // 0x21a6dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A6E0u;
        goto label_21a6e0;
    }
    ctx->pc = 0x21A6D8u;
    {
        const bool branch_taken_0x21a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6D8u;
        // 0x21a6dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6d8) {
            ctx->pc = 0x21A74Cu;
            goto label_21a74c;
        }
    }
    ctx->pc = 0x21A6E0u;
label_21a6e0:
    // 0x21a6e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x21a6e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_21a6e4:
    // 0x21a6e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x21a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_21a6e8:
    // 0x21a6e8: 0x40f809  jalr        $v0
label_21a6ec:
    if (ctx->pc == 0x21A6ECu) {
        ctx->pc = 0x21A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6E8u;
        // 0x21a6ec: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A6F0u;
        goto label_21a6f0;
    }
    ctx->pc = 0x21A6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21A6F0u);
        ctx->pc = 0x21A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6E8u;
        // 0x21a6ec: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A6E8u, 0x21A6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A6F0u;
label_21a6f0:
    // 0x21a6f0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x21a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_21a6f4:
    // 0x21a6f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21a6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21a6f8:
    // 0x21a6f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_21a6fc:
    if (ctx->pc == 0x21A6FCu) {
        ctx->pc = 0x21A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6F8u;
        // 0x21a6fc: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A700u;
        goto label_21a700;
    }
    ctx->pc = 0x21A6F8u;
    {
        const bool branch_taken_0x21a6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A6F8u;
        // 0x21a6fc: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a6f8) {
            ctx->pc = 0x21A718u;
            goto label_21a718;
        }
    }
    ctx->pc = 0x21A700u;
label_21a700:
    // 0x21a700: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x21a700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_21a704:
    // 0x21a704: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x21a704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_21a708:
    // 0x21a708: 0xc08997c  jal         func_2265F0
label_21a70c:
    if (ctx->pc == 0x21A70Cu) {
        ctx->pc = 0x21A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A708u;
        // 0x21a70c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A710u;
        goto label_21a710;
    }
    ctx->pc = 0x21A708u;
    SET_GPR_U32(ctx, 31, 0x21A710u);
    ctx->pc = 0x21A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A708u;
    // 0x21a70c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x21A708u, 0x21A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A710u;
label_21a710:
    // 0x21a710: 0x1000000e  b           . + 4 + (0xE << 2)
label_21a714:
    if (ctx->pc == 0x21A714u) {
        ctx->pc = 0x21A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A710u;
        // 0x21a714: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A718u;
        goto label_21a718;
    }
    ctx->pc = 0x21A710u;
    {
        const bool branch_taken_0x21a710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A710u;
        // 0x21a714: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a710) {
            ctx->pc = 0x21A74Cu;
            goto label_21a74c;
        }
    }
    ctx->pc = 0x21A718u;
label_21a718:
    // 0x21a718: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21a718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a71c:
    // 0x21a71c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x21a71cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21a720:
    // 0x21a720: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21a720u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21a724:
    // 0x21a724: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x21a724u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a728:
    // 0x21a728: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x21a728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a72c:
    // 0x21a72c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x21a72cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_21a730:
    // 0x21a730: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x21a730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_21a734:
    // 0x21a734: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21a734u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21a738:
    // 0x21a738: 0x0  nop
    ctx->pc = 0x21a738u;
    // NOP
label_21a73c:
    // 0x21a73c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x21a73cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21a740:
    // 0x21a740: 0x0  nop
    ctx->pc = 0x21a740u;
    // NOP
label_21a744:
    // 0x21a744: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_21a748:
    if (ctx->pc == 0x21A748u) {
        ctx->pc = 0x21A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A744u;
        // 0x21a748: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A74Cu;
        goto label_21a74c;
    }
    ctx->pc = 0x21A744u;
    {
        const bool branch_taken_0x21a744 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a744) {
            ctx->pc = 0x21A748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A744u;
            // 0x21a748: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A74Cu;
            goto label_21a74c;
        }
    }
    ctx->pc = 0x21A74Cu;
label_21a74c:
    // 0x21a74c: 0x10600165  beqz        $v1, . + 4 + (0x165 << 2)
label_21a750:
    if (ctx->pc == 0x21A750u) {
        ctx->pc = 0x21A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A74Cu;
        // 0x21a750: 0x27b30090  addiu       $s3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A754u;
        goto label_21a754;
    }
    ctx->pc = 0x21A74Cu;
    {
        const bool branch_taken_0x21a74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A74Cu;
        // 0x21a750: 0x27b30090  addiu       $s3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a74c) {
            ctx->pc = 0x21ACE4u;
            goto label_21ace4;
        }
    }
    ctx->pc = 0x21A754u;
label_21a754:
    // 0x21a754: 0x26910090  addiu       $s1, $s4, 0x90
    ctx->pc = 0x21a754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_21a758:
    // 0x21a758: 0xc0d0aa8  jal         func_342AA0
label_21a75c:
    if (ctx->pc == 0x21A75Cu) {
        ctx->pc = 0x21A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A758u;
        // 0x21a75c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A760u;
        goto label_21a760;
    }
    ctx->pc = 0x21A758u;
    SET_GPR_U32(ctx, 31, 0x21A760u);
    ctx->pc = 0x21A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A758u;
    // 0x21a75c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AA0u, 0x21A758u, 0x21A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A760u;
label_21a760:
    // 0x21a760: 0xafa00280  sw          $zero, 0x280($sp)
    ctx->pc = 0x21a760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
label_21a764:
    // 0x21a764: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x21a764u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_21a768:
    // 0x21a768: 0xafa00284  sw          $zero, 0x284($sp)
    ctx->pc = 0x21a768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 0));
label_21a76c:
    // 0x21a76c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a770:
    // 0x21a770: 0xafa00288  sw          $zero, 0x288($sp)
    ctx->pc = 0x21a770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 0));
label_21a774:
    // 0x21a774: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x21a774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21a778:
    // 0x21a778: 0xafa0028c  sw          $zero, 0x28C($sp)
    ctx->pc = 0x21a778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 0));
label_21a77c:
    // 0x21a77c: 0xafa00290  sw          $zero, 0x290($sp)
    ctx->pc = 0x21a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 0));
label_21a780:
    // 0x21a780: 0xafa00294  sw          $zero, 0x294($sp)
    ctx->pc = 0x21a780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 0));
label_21a784:
    // 0x21a784: 0xafa00298  sw          $zero, 0x298($sp)
    ctx->pc = 0x21a784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 0));
label_21a788:
    // 0x21a788: 0xafa0029c  sw          $zero, 0x29C($sp)
    ctx->pc = 0x21a788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 0));
label_21a78c:
    // 0x21a78c: 0xafa002a0  sw          $zero, 0x2A0($sp)
    ctx->pc = 0x21a78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 0));
label_21a790:
    // 0x21a790: 0xafa002a4  sw          $zero, 0x2A4($sp)
    ctx->pc = 0x21a790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 0));
label_21a794:
    // 0x21a794: 0xafa002a8  sw          $zero, 0x2A8($sp)
    ctx->pc = 0x21a794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 0));
label_21a798:
    // 0x21a798: 0xafa002ac  sw          $zero, 0x2AC($sp)
    ctx->pc = 0x21a798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 0));
label_21a79c:
    // 0x21a79c: 0xafa002b0  sw          $zero, 0x2B0($sp)
    ctx->pc = 0x21a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 0));
label_21a7a0:
    // 0x21a7a0: 0xafa002b4  sw          $zero, 0x2B4($sp)
    ctx->pc = 0x21a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 0));
label_21a7a4:
    // 0x21a7a4: 0xafa002b8  sw          $zero, 0x2B8($sp)
    ctx->pc = 0x21a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 0));
label_21a7a8:
    // 0x21a7a8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x21a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_21a7ac:
    // 0x21a7ac: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x21a7acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_21a7b0:
    // 0x21a7b0: 0x8c4700bc  lw          $a3, 0xBC($v0)
    ctx->pc = 0x21a7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_21a7b4:
    // 0x21a7b4: 0xe0f809  jalr        $a3
label_21a7b8:
    if (ctx->pc == 0x21A7B8u) {
        ctx->pc = 0x21A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7B4u;
        // 0x21a7b8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A7BCu;
        goto label_21a7bc;
    }
    ctx->pc = 0x21A7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x21A7BCu);
        ctx->pc = 0x21A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7B4u;
        // 0x21a7b8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A7B4u, 0x21A7BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A7BCu;
label_21a7bc:
    // 0x21a7bc: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x21a7bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_21a7c0:
    // 0x21a7c0: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x21a7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_21a7c4:
    // 0x21a7c4: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x21a7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_21a7c8:
    // 0x21a7c8: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x21a7c8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21a7cc:
    // 0x21a7cc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x21a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21a7d0:
    // 0x21a7d0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x21a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_21a7d4:
    // 0x21a7d4: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x21a7d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_21a7d8:
    // 0x21a7d8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21a7d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21a7dc:
    // 0x21a7dc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x21a7dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_21a7e0:
    // 0x21a7e0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x21a7e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a7e4:
    // 0x21a7e4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x21a7e4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_21a7e8:
    // 0x21a7e8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x21a7e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_21a7ec:
    // 0x21a7ec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x21a7ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a7f0:
    // 0x21a7f0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x21a7f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a7f4:
    // 0x21a7f4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x21a7f4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21a7f8:
    // 0x21a7f8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x21a7f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a7fc:
    // 0x21a7fc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x21a7fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_21a800:
    // 0x21a800: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x21a800u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21a804:
    // 0x21a804: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x21a804u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a808:
    // 0x21a808: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x21a808u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_21a80c:
    // 0x21a80c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x21a80cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a810:
    // 0x21a810: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x21a810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a814:
    // 0x21a814: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x21a814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a818:
    // 0x21a818: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x21a818u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_21a81c:
    // 0x21a81c: 0x7fa202d0  sq          $v0, 0x2D0($sp)
    ctx->pc = 0x21a81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
label_21a820:
    // 0x21a820: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a824:
    // 0x21a824: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x21a824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_21a828:
    // 0x21a828: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x21a828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21a82c:
    // 0x21a82c: 0x7fa202e0  sq          $v0, 0x2E0($sp)
    ctx->pc = 0x21a82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 2));
label_21a830:
    // 0x21a830: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x21a830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_21a834:
    // 0x21a834: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x21a834u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_21a838:
    // 0x21a838: 0x7fa202f0  sq          $v0, 0x2F0($sp)
    ctx->pc = 0x21a838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 2));
label_21a83c:
    // 0x21a83c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x21a83cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_21a840:
    // 0x21a840: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x21a840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_21a844:
    // 0x21a844: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x21a844u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_21a848:
    // 0x21a848: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21a848u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21a84c:
    // 0x21a84c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21a84cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21a850:
    // 0x21a850: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21a850u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21a854:
    // 0x21a854: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21a854u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21a858:
    // 0x21a858: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x21a858u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_21a85c:
    // 0x21a85c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x21a85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_21a860:
    // 0x21a860: 0x7fa202d0  sq          $v0, 0x2D0($sp)
    ctx->pc = 0x21a860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
label_21a864:
    // 0x21a864: 0x84e400b8  lh          $a0, 0xB8($a3)
    ctx->pc = 0x21a864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 184)));
label_21a868:
    // 0x21a868: 0x8ce300bc  lw          $v1, 0xBC($a3)
    ctx->pc = 0x21a868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 188)));
label_21a86c:
    // 0x21a86c: 0x60f809  jalr        $v1
label_21a870:
    if (ctx->pc == 0x21A870u) {
        ctx->pc = 0x21A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A86Cu;
        // 0x21a870: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A874u;
        goto label_21a874;
    }
    ctx->pc = 0x21A86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21A874u);
        ctx->pc = 0x21A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A86Cu;
        // 0x21a870: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A86Cu, 0x21A874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A874u;
label_21a874:
    // 0x21a874: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x21a874u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_21a878:
    // 0x21a878: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x21a878u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21a87c:
    // 0x21a87c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_21a880:
    // 0x21a880: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21a880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_21a884:
    // 0x21a884: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x21a884u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_21a888:
    // 0x21a888: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21a888u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21a88c:
    // 0x21a88c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x21a88cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_21a890:
    // 0x21a890: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x21a890u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a894:
    // 0x21a894: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x21a894u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_21a898:
    // 0x21a898: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x21a898u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_21a89c:
    // 0x21a89c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x21a89cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a8a0:
    // 0x21a8a0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x21a8a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a8a4:
    // 0x21a8a4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x21a8a4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21a8a8:
    // 0x21a8a8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x21a8a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a8ac:
    // 0x21a8ac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x21a8acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_21a8b0:
    // 0x21a8b0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x21a8b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21a8b4:
    // 0x21a8b4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x21a8b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a8b8:
    // 0x21a8b8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x21a8b8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_21a8bc:
    // 0x21a8bc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x21a8bcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a8c0:
    // 0x21a8c0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x21a8c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a8c4:
    // 0x21a8c4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x21a8c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a8c8:
    // 0x21a8c8: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x21a8c8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_21a8cc:
    // 0x21a8cc: 0x7fa302d0  sq          $v1, 0x2D0($sp)
    ctx->pc = 0x21a8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
label_21a8d0:
    // 0x21a8d0: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x21a8d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_21a8d4:
    // 0x21a8d4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x21a8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_21a8d8:
    // 0x21a8d8: 0x3c090002  lui         $t1, 0x2
    ctx->pc = 0x21a8d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)2 << 16));
label_21a8dc:
    // 0x21a8dc: 0x7fa302e0  sq          $v1, 0x2E0($sp)
    ctx->pc = 0x21a8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 3));
label_21a8e0:
    // 0x21a8e0: 0x3529004d  ori         $t1, $t1, 0x4D
    ctx->pc = 0x21a8e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)77);
label_21a8e4:
    // 0x21a8e4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x21a8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_21a8e8:
    // 0x21a8e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21a8e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_21a8ec:
    // 0x21a8ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21a8ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21a8f0:
    // 0x21a8f0: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x21a8f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_21a8f4:
    // 0x21a8f4: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x21a8f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_21a8f8:
    // 0x21a8f8: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x21a8f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21a8fc:
    // 0x21a8fc: 0x7fa302f0  sq          $v1, 0x2F0($sp)
    ctx->pc = 0x21a8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 3));
label_21a900:
    // 0x21a900: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a904:
    // 0x21a904: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x21a904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_21a908:
    // 0x21a908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21a908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21a90c:
    // 0x21a90c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x21a90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_21a910:
    // 0x21a910: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x21a910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_21a914:
    // 0x21a914: 0x8e8a01a0  lw          $t2, 0x1A0($s4)
    ctx->pc = 0x21a914u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 416)));
label_21a918:
    // 0x21a918: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x21a918u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_21a91c:
    // 0x21a91c: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x21a91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_21a920:
    // 0x21a920: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21a920u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21a924:
    // 0x21a924: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x21a924u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21a928:
    // 0x21a928: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21a928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21a92c:
    // 0x21a92c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21a92cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21a930:
    // 0x21a930: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x21a930u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_21a934:
    // 0x21a934: 0x8d047198  lw          $a0, 0x7198($t0)
    ctx->pc = 0x21a934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 29080)));
label_21a938:
    // 0x21a938: 0x7fa302d0  sq          $v1, 0x2D0($sp)
    ctx->pc = 0x21a938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
label_21a93c:
    // 0x21a93c: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x21a93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_21a940:
    // 0x21a940: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x21a940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_21a944:
    // 0x21a944: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x21a944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_21a948:
    // 0x21a948: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x21a948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
label_21a94c:
    // 0x21a94c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x21a94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_21a950:
    // 0x21a950: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21a950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_21a954:
    // 0x21a954: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21a954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21a958:
    // 0x21a958: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x21a958u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21a95c:
    // 0x21a95c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x21a95cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21a960:
    // 0x21a960: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21a960u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21a964:
    // 0x21a964: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x21a964u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21a968:
    // 0x21a968: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21a968u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21a96c:
    // 0x21a96c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21a96cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21a970:
    // 0x21a970: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x21a970u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_21a974:
    // 0x21a974: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x21a974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_21a978:
    // 0x21a978: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21a978u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21a97c:
    // 0x21a97c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x21a97cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a980:
    // 0x21a980: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x21a980u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a984:
    // 0x21a984: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x21a984u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a988:
    // 0x21a988: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x21a988u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_21a98c:
    // 0x21a98c: 0x4a0003bf  vwaitq
    ctx->pc = 0x21a98cu;
    // VWAITQ (Q already resolved in this runtime)
label_21a990:
    // 0x21a990: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x21a990u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a994:
    // 0x21a994: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x21a994u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
label_21a998:
    // 0x21a998: 0x7fa202d0  sq          $v0, 0x2D0($sp)
    ctx->pc = 0x21a998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
label_21a99c:
    // 0x21a99c: 0x4488a000  mtc1        $t0, $f20
    ctx->pc = 0x21a99cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21a9a0:
    // 0x21a9a0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x21a9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_21a9a4:
    // 0x21a9a4: 0x0  nop
    ctx->pc = 0x21a9a4u;
    // NOP
label_21a9a8:
    // 0x21a9a8: 0x0  nop
    ctx->pc = 0x21a9a8u;
    // NOP
label_21a9ac:
    // 0x21a9ac: 0x4614a803  div.s       $f0, $f21, $f20
    ctx->pc = 0x21a9acu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
label_21a9b0:
    // 0x21a9b0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x21a9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_21a9b4:
    // 0x21a9b4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x21a9b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_21a9b8:
    // 0x21a9b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21a9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_21a9bc:
    // 0x21a9bc: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x21a9bcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_21a9c0:
    // 0x21a9c0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x21a9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_21a9c4:
    // 0x21a9c4: 0xafa90290  sw          $t1, 0x290($sp)
    ctx->pc = 0x21a9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 9));
label_21a9c8:
    // 0x21a9c8: 0xafaa0280  sw          $t2, 0x280($sp)
    ctx->pc = 0x21a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 10));
label_21a9cc:
    // 0x21a9cc: 0xafab0298  sw          $t3, 0x298($sp)
    ctx->pc = 0x21a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 11));
label_21a9d0:
    // 0x21a9d0: 0xe7a202ac  swc1        $f2, 0x2AC($sp)
    ctx->pc = 0x21a9d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 684), bits); }
label_21a9d4:
    // 0x21a9d4: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x21a9d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_21a9d8:
    // 0x21a9d8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21a9d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21a9dc:
    // 0x21a9dc: 0x48ac1000  qmtc2.ni    $t4, $vf2
    ctx->pc = 0x21a9dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
label_21a9e0:
    // 0x21a9e0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x21a9e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21a9e4:
    // 0x21a9e4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x21a9e4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_21a9e8:
    // 0x21a9e8: 0xafb30284  sw          $s3, 0x284($sp)
    ctx->pc = 0x21a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 19));
label_21a9ec:
    // 0x21a9ec: 0x440ca000  mfc1        $t4, $f20
    ctx->pc = 0x21a9ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_21a9f0:
    // 0x21a9f0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21a9f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21a9f4:
    // 0x21a9f4: 0x48ac1000  qmtc2.ni    $t4, $vf2
    ctx->pc = 0x21a9f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
label_21a9f8:
    // 0x21a9f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x21a9f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21a9fc:
    // 0x21a9fc: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x21a9fcu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
label_21aa00:
    // 0x21aa00: 0x7fa302d0  sq          $v1, 0x2D0($sp)
    ctx->pc = 0x21aa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
label_21aa04:
    // 0x21aa04: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x21aa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_21aa08:
    // 0x21aa08: 0x7fa800f0  sq          $t0, 0xF0($sp)
    ctx->pc = 0x21aa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 8));
label_21aa0c:
    // 0x21aa0c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x21aa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_21aa10:
    // 0x21aa10: 0x7fa802d0  sq          $t0, 0x2D0($sp)
    ctx->pc = 0x21aa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 8));
label_21aa14:
    // 0x21aa14: 0xc0cf9fc  jal         func_33E7F0
label_21aa18:
    if (ctx->pc == 0x21AA18u) {
        ctx->pc = 0x21AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA14u;
        // 0x21aa18: 0xafa002a8  sw          $zero, 0x2A8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AA1Cu;
        goto label_21aa1c;
    }
    ctx->pc = 0x21AA14u;
    SET_GPR_U32(ctx, 31, 0x21AA1Cu);
    ctx->pc = 0x21AA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA14u;
    // 0x21aa18: 0xafa002a8  sw          $zero, 0x2A8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E7F0u, 0x21AA14u, 0x21AA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA1Cu;
label_21aa1c:
    // 0x21aa1c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x21aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_21aa20:
    // 0x21aa20: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x21aa20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21aa24:
    // 0x21aa24: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x21aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_21aa28:
    // 0x21aa28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21aa28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21aa2c:
    // 0x21aa2c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x21aa2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_21aa30:
    // 0x21aa30: 0x11000082  beqz        $t0, . + 4 + (0x82 << 2)
label_21aa34:
    if (ctx->pc == 0x21AA34u) {
        ctx->pc = 0x21AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA30u;
        // 0x21aa34: 0x7fa202c0  sq          $v0, 0x2C0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AA38u;
        goto label_21aa38;
    }
    ctx->pc = 0x21AA30u;
    {
        const bool branch_taken_0x21aa30 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA30u;
        // 0x21aa34: 0x7fa202c0  sq          $v0, 0x2C0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa30) {
            ctx->pc = 0x21AC3Cu;
            goto label_21ac3c;
        }
    }
    ctx->pc = 0x21AA38u;
label_21aa38:
    // 0x21aa38: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x21aa38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_21aa3c:
    // 0x21aa3c: 0x4600a886  mov.s       $f2, $f21
    ctx->pc = 0x21aa3cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[21]);
label_21aa40:
    // 0x21aa40: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x21aa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21aa44:
    // 0x21aa44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21aa44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21aa48:
    // 0x21aa48: 0x7ba60060  lq          $a2, 0x60($sp)
    ctx->pc = 0x21aa48u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21aa4c:
    // 0x21aa4c: 0x7ba70310  lq          $a3, 0x310($sp)
    ctx->pc = 0x21aa4cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_21aa50:
    // 0x21aa50: 0xc4a00080  lwc1        $f0, 0x80($a1)
    ctx->pc = 0x21aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21aa54:
    // 0x21aa54: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x21aa54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21aa58:
    // 0x21aa58: 0x0  nop
    ctx->pc = 0x21aa58u;
    // NOP
label_21aa5c:
    // 0x21aa5c: 0x45000035  bc1f        . + 4 + (0x35 << 2)
label_21aa60:
    if (ctx->pc == 0x21AA60u) {
        ctx->pc = 0x21AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA5Cu;
        // 0x21aa60: 0x8ca300b0  lw          $v1, 0xB0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AA64u;
        goto label_21aa64;
    }
    ctx->pc = 0x21AA5Cu;
    {
        const bool branch_taken_0x21aa5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA5Cu;
        // 0x21aa60: 0x8ca300b0  lw          $v1, 0xB0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa5c) {
            ctx->pc = 0x21AB34u;
            goto label_21ab34;
        }
    }
    ctx->pc = 0x21AA64u;
label_21aa64:
    // 0x21aa64: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x21aa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_21aa68:
    // 0x21aa68: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_21aa6c:
    if (ctx->pc == 0x21AA6Cu) {
        ctx->pc = 0x21AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA68u;
        // 0x21aa6c: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AA70u;
        goto label_21aa70;
    }
    ctx->pc = 0x21AA68u;
    {
        const bool branch_taken_0x21aa68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA68u;
        // 0x21aa6c: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa68) {
            ctx->pc = 0x21AAECu;
            goto label_21aaec;
        }
    }
    ctx->pc = 0x21AA70u;
label_21aa70:
    // 0x21aa70: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_21aa74:
    if (ctx->pc == 0x21AA74u) {
        ctx->pc = 0x21AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA70u;
        // 0x21aa74: 0x7fa602d0  sq          $a2, 0x2D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AA78u;
        goto label_21aa78;
    }
    ctx->pc = 0x21AA70u;
    {
        const bool branch_taken_0x21aa70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aa70) {
            ctx->pc = 0x21AA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AA70u;
            // 0x21aa74: 0x7fa602d0  sq          $a2, 0x2D0($sp) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AA90u;
            goto label_21aa90;
        }
    }
    ctx->pc = 0x21AA78u;
label_21aa78:
    // 0x21aa78: 0x78a20050  lq          $v0, 0x50($a1)
    ctx->pc = 0x21aa78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 80)));
label_21aa7c:
    // 0x21aa7c: 0x7fa202d0  sq          $v0, 0x2D0($sp)
    ctx->pc = 0x21aa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
label_21aa80:
    // 0x21aa80: 0xc4a00088  lwc1        $f0, 0x88($a1)
    ctx->pc = 0x21aa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21aa84:
    // 0x21aa84: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x21aa84u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_21aa88:
    // 0x21aa88: 0x10000032  b           . + 4 + (0x32 << 2)
label_21aa8c:
    if (ctx->pc == 0x21AA8Cu) {
        ctx->pc = 0x21AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA88u;
        // 0x21aa8c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AA90u;
        goto label_21aa90;
    }
    ctx->pc = 0x21AA88u;
    {
        const bool branch_taken_0x21aa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA88u;
        // 0x21aa8c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa88) {
            ctx->pc = 0x21AB54u;
            goto label_21ab54;
        }
    }
    ctx->pc = 0x21AA90u;
label_21aa90:
    // 0x21aa90: 0xc4a00080  lwc1        $f0, 0x80($a1)
    ctx->pc = 0x21aa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21aa94:
    // 0x21aa94: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x21aa94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_21aa98:
    // 0x21aa98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21aa98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_21aa9c:
    // 0x21aa9c: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x21aa9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_21aaa0:
    // 0x21aaa0: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x21aaa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_21aaa4:
    // 0x21aaa4: 0x48ac1000  qmtc2.ni    $t4, $vf2
    ctx->pc = 0x21aaa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
label_21aaa8:
    // 0x21aaa8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x21aaa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21aaac:
    // 0x21aaac: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x21aaacu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_21aab0:
    // 0x21aab0: 0x7fa302d0  sq          $v1, 0x2D0($sp)
    ctx->pc = 0x21aab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
label_21aab4:
    // 0x21aab4: 0x78a20050  lq          $v0, 0x50($a1)
    ctx->pc = 0x21aab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 80)));
label_21aab8:
    // 0x21aab8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21aab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21aabc:
    // 0x21aabc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x21aabcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21aac0:
    // 0x21aac0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x21aac0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21aac4:
    // 0x21aac4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x21aac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21aac8:
    // 0x21aac8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x21aac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21aacc:
    // 0x21aacc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x21aaccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_21aad0:
    // 0x21aad0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21aad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21aad4:
    // 0x21aad4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21aad4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21aad8:
    // 0x21aad8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x21aad8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21aadc:
    // 0x21aadc: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x21aadcu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_21aae0:
    // 0x21aae0: 0x7fa70300  sq          $a3, 0x300($sp)
    ctx->pc = 0x21aae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 7));
label_21aae4:
    // 0x21aae4: 0x10000046  b           . + 4 + (0x46 << 2)
label_21aae8:
    if (ctx->pc == 0x21AAE8u) {
        ctx->pc = 0x21AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAE4u;
        // 0x21aae8: 0x7fa702d0  sq          $a3, 0x2D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AAECu;
        goto label_21aaec;
    }
    ctx->pc = 0x21AAE4u;
    {
        const bool branch_taken_0x21aae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAE4u;
        // 0x21aae8: 0x7fa702d0  sq          $a3, 0x2D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aae4) {
            ctx->pc = 0x21AC00u;
            goto label_21ac00;
        }
    }
    ctx->pc = 0x21AAECu;
label_21aaec:
    // 0x21aaec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_21aaf0:
    if (ctx->pc == 0x21AAF0u) {
        ctx->pc = 0x21AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAECu;
        // 0x21aaf0: 0x7fa602d0  sq          $a2, 0x2D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AAF4u;
        goto label_21aaf4;
    }
    ctx->pc = 0x21AAECu;
    {
        const bool branch_taken_0x21aaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aaec) {
            ctx->pc = 0x21AAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AAECu;
            // 0x21aaf0: 0x7fa602d0  sq          $a2, 0x2D0($sp) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AB08u;
            goto label_21ab08;
        }
    }
    ctx->pc = 0x21AAF4u;
label_21aaf4:
    // 0x21aaf4: 0x78a20050  lq          $v0, 0x50($a1)
    ctx->pc = 0x21aaf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 80)));
label_21aaf8:
    // 0x21aaf8: 0x7fa202d0  sq          $v0, 0x2D0($sp)
    ctx->pc = 0x21aaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
label_21aafc:
    // 0x21aafc: 0xc4a00088  lwc1        $f0, 0x88($a1)
    ctx->pc = 0x21aafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ab00:
    // 0x21ab00: 0x10000014  b           . + 4 + (0x14 << 2)
label_21ab04:
    if (ctx->pc == 0x21AB04u) {
        ctx->pc = 0x21AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB00u;
        // 0x21ab04: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AB08u;
        goto label_21ab08;
    }
    ctx->pc = 0x21AB00u;
    {
        const bool branch_taken_0x21ab00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB00u;
        // 0x21ab04: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab00) {
            ctx->pc = 0x21AB54u;
            goto label_21ab54;
        }
    }
    ctx->pc = 0x21AB08u;
label_21ab08:
    // 0x21ab08: 0xc4a00080  lwc1        $f0, 0x80($a1)
    ctx->pc = 0x21ab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ab0c:
    // 0x21ab0c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x21ab0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_21ab10:
    // 0x21ab10: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x21ab10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_21ab14:
    // 0x21ab14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x21ab14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_21ab18:
    // 0x21ab18: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x21ab18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_21ab1c:
    // 0x21ab1c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x21ab1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_21ab20:
    // 0x21ab20: 0x48ac1000  qmtc2.ni    $t4, $vf2
    ctx->pc = 0x21ab20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
label_21ab24:
    // 0x21ab24: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x21ab24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21ab28:
    // 0x21ab28: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x21ab28u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_21ab2c:
    // 0x21ab2c: 0x10000026  b           . + 4 + (0x26 << 2)
label_21ab30:
    if (ctx->pc == 0x21AB30u) {
        ctx->pc = 0x21AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB2Cu;
        // 0x21ab30: 0x7fa302d0  sq          $v1, 0x2D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AB34u;
        goto label_21ab34;
    }
    ctx->pc = 0x21AB2Cu;
    {
        const bool branch_taken_0x21ab2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB2Cu;
        // 0x21ab30: 0x7fa302d0  sq          $v1, 0x2D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab2c) {
            ctx->pc = 0x21ABC8u;
            goto label_21abc8;
        }
    }
    ctx->pc = 0x21AB34u;
label_21ab34:
    // 0x21ab34: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x21ab34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_21ab38:
    // 0x21ab38: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_21ab3c:
    if (ctx->pc == 0x21AB3Cu) {
        ctx->pc = 0x21AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB38u;
        // 0x21ab3c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AB40u;
        goto label_21ab40;
    }
    ctx->pc = 0x21AB38u;
    {
        const bool branch_taken_0x21ab38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB38u;
        // 0x21ab3c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab38) {
            ctx->pc = 0x21AB70u;
            goto label_21ab70;
        }
    }
    ctx->pc = 0x21AB40u;
label_21ab40:
    // 0x21ab40: 0x78a20050  lq          $v0, 0x50($a1)
    ctx->pc = 0x21ab40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 80)));
label_21ab44:
    // 0x21ab44: 0x7fa202d0  sq          $v0, 0x2D0($sp)
    ctx->pc = 0x21ab44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
label_21ab48:
    // 0x21ab48: 0xc4a00088  lwc1        $f0, 0x88($a1)
    ctx->pc = 0x21ab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ab4c:
    // 0x21ab4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x21ab4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_21ab50:
    // 0x21ab50: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x21ab50u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_21ab54:
    // 0x21ab54: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x21ab54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_21ab58:
    // 0x21ab58: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21ab58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21ab5c:
    // 0x21ab5c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x21ab5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_21ab60:
    // 0x21ab60: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x21ab60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21ab64:
    // 0x21ab64: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x21ab64u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_21ab68:
    // 0x21ab68: 0x10000025  b           . + 4 + (0x25 << 2)
label_21ab6c:
    if (ctx->pc == 0x21AB6Cu) {
        ctx->pc = 0x21AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB68u;
        // 0x21ab6c: 0x7fa302d0  sq          $v1, 0x2D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AB70u;
        goto label_21ab70;
    }
    ctx->pc = 0x21AB68u;
    {
        const bool branch_taken_0x21ab68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB68u;
        // 0x21ab6c: 0x7fa302d0  sq          $v1, 0x2D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab68) {
            ctx->pc = 0x21AC00u;
            goto label_21ac00;
        }
    }
    ctx->pc = 0x21AB70u;
label_21ab70:
    // 0x21ab70: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_21ab74:
    if (ctx->pc == 0x21AB74u) {
        ctx->pc = 0x21AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB70u;
        // 0x21ab74: 0x46140800  add.s       $f0, $f1, $f20 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AB78u;
        goto label_21ab78;
    }
    ctx->pc = 0x21AB70u;
    {
        const bool branch_taken_0x21ab70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab70) {
            ctx->pc = 0x21AB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AB70u;
            // 0x21ab74: 0x46140800  add.s       $f0, $f1, $f20 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21ABA8u;
            goto label_21aba8;
        }
    }
    ctx->pc = 0x21AB78u;
label_21ab78:
    // 0x21ab78: 0x78a20050  lq          $v0, 0x50($a1)
    ctx->pc = 0x21ab78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 80)));
label_21ab7c:
    // 0x21ab7c: 0x7fa202d0  sq          $v0, 0x2D0($sp)
    ctx->pc = 0x21ab7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
label_21ab80:
    // 0x21ab80: 0xc4a00088  lwc1        $f0, 0x88($a1)
    ctx->pc = 0x21ab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ab84:
    // 0x21ab84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x21ab84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_21ab88:
    // 0x21ab88: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x21ab88u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_21ab8c:
    // 0x21ab8c: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x21ab8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_21ab90:
    // 0x21ab90: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21ab90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21ab94:
    // 0x21ab94: 0x48ac1000  qmtc2.ni    $t4, $vf2
    ctx->pc = 0x21ab94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
label_21ab98:
    // 0x21ab98: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x21ab98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21ab9c:
    // 0x21ab9c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x21ab9cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_21aba0:
    // 0x21aba0: 0x10000017  b           . + 4 + (0x17 << 2)
label_21aba4:
    if (ctx->pc == 0x21ABA4u) {
        ctx->pc = 0x21ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABA0u;
        // 0x21aba4: 0x7fa302d0  sq          $v1, 0x2D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ABA8u;
        goto label_21aba8;
    }
    ctx->pc = 0x21ABA0u;
    {
        const bool branch_taken_0x21aba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABA0u;
        // 0x21aba4: 0x7fa302d0  sq          $v1, 0x2D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aba0) {
            ctx->pc = 0x21AC00u;
            goto label_21ac00;
        }
    }
    ctx->pc = 0x21ABA8u;
label_21aba8:
    // 0x21aba8: 0x7fa602d0  sq          $a2, 0x2D0($sp)
    ctx->pc = 0x21aba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 6));
label_21abac:
    // 0x21abac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x21abacu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_21abb0:
    // 0x21abb0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x21abb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_21abb4:
    // 0x21abb4: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x21abb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_21abb8:
    // 0x21abb8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x21abb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21abbc:
    // 0x21abbc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x21abbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21abc0:
    // 0x21abc0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x21abc0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_21abc4:
    // 0x21abc4: 0x7fa302d0  sq          $v1, 0x2D0($sp)
    ctx->pc = 0x21abc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
label_21abc8:
    // 0x21abc8: 0x78a20050  lq          $v0, 0x50($a1)
    ctx->pc = 0x21abc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 80)));
label_21abcc:
    // 0x21abcc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21abccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21abd0:
    // 0x21abd0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x21abd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21abd4:
    // 0x21abd4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x21abd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21abd8:
    // 0x21abd8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x21abd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21abdc:
    // 0x21abdc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x21abdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21abe0:
    // 0x21abe0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x21abe0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_21abe4:
    // 0x21abe4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21abe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21abe8:
    // 0x21abe8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21abe8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21abec:
    // 0x21abec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x21abecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21abf0:
    // 0x21abf0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x21abf0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_21abf4:
    // 0x21abf4: 0x7fa202d0  sq          $v0, 0x2D0($sp)
    ctx->pc = 0x21abf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
label_21abf8:
    // 0x21abf8: 0x7fa20300  sq          $v0, 0x300($sp)
    ctx->pc = 0x21abf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 2));
label_21abfc:
    // 0x21abfc: 0x7fa202f0  sq          $v0, 0x2F0($sp)
    ctx->pc = 0x21abfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 2));
label_21ac00:
    // 0x21ac00: 0xafa002d8  sw          $zero, 0x2D8($sp)
    ctx->pc = 0x21ac00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 0));
label_21ac04:
    // 0x21ac04: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21ac04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21ac08:
    // 0x21ac08: 0x7ba202c0  lq          $v0, 0x2C0($sp)
    ctx->pc = 0x21ac08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_21ac0c:
    // 0x21ac0c: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x21ac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
label_21ac10:
    // 0x21ac10: 0x7ba302d0  lq          $v1, 0x2D0($sp)
    ctx->pc = 0x21ac10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_21ac14:
    // 0x21ac14: 0x128202b  sltu        $a0, $t1, $t0
    ctx->pc = 0x21ac14u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_21ac18:
    // 0x21ac18: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21ac18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21ac1c:
    // 0x21ac1c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21ac1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21ac20:
    // 0x21ac20: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21ac20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21ac24:
    // 0x21ac24: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21ac24u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21ac28:
    // 0x21ac28: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x21ac28u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_21ac2c:
    // 0x21ac2c: 0x1480ff88  bnez        $a0, . + 4 + (-0x78 << 2)
label_21ac30:
    if (ctx->pc == 0x21AC30u) {
        ctx->pc = 0x21AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC2Cu;
        // 0x21ac30: 0x7fa302c0  sq          $v1, 0x2C0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC34u;
        goto label_21ac34;
    }
    ctx->pc = 0x21AC2Cu;
    {
        const bool branch_taken_0x21ac2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC2Cu;
        // 0x21ac30: 0x7fa302c0  sq          $v1, 0x2C0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac2c) {
            ctx->pc = 0x21AA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aa50;
        }
    }
    ctx->pc = 0x21AC34u;
label_21ac34:
    // 0x21ac34: 0x7fa70310  sq          $a3, 0x310($sp)
    ctx->pc = 0x21ac34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 7));
label_21ac38:
    // 0x21ac38: 0x7fa302e0  sq          $v1, 0x2E0($sp)
    ctx->pc = 0x21ac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 3));
label_21ac3c:
    // 0x21ac3c: 0x11000025  beqz        $t0, . + 4 + (0x25 << 2)
label_21ac40:
    if (ctx->pc == 0x21AC40u) {
        ctx->pc = 0x21AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC3Cu;
        // 0x21ac40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC44u;
        goto label_21ac44;
    }
    ctx->pc = 0x21AC3Cu;
    {
        const bool branch_taken_0x21ac3c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC3Cu;
        // 0x21ac40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac3c) {
            ctx->pc = 0x21ACD4u;
            goto label_21acd4;
        }
    }
    ctx->pc = 0x21AC44u;
label_21ac44:
    // 0x21ac44: 0x5000006  bltz        $t0, . + 4 + (0x6 << 2)
label_21ac48:
    if (ctx->pc == 0x21AC48u) {
        ctx->pc = 0x21AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC44u;
        // 0x21ac48: 0x81842  srl         $v1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC4Cu;
        goto label_21ac4c;
    }
    ctx->pc = 0x21AC44u;
    {
        const bool branch_taken_0x21ac44 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x21AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC44u;
        // 0x21ac48: 0x81842  srl         $v1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac44) {
            ctx->pc = 0x21AC60u;
            goto label_21ac60;
        }
    }
    ctx->pc = 0x21AC4Cu;
label_21ac4c:
    // 0x21ac4c: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x21ac4cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21ac50:
    // 0x21ac50: 0x0  nop
    ctx->pc = 0x21ac50u;
    // NOP
label_21ac54:
    // 0x21ac54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21ac54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_21ac58:
    // 0x21ac58: 0x10000007  b           . + 4 + (0x7 << 2)
label_21ac5c:
    if (ctx->pc == 0x21AC5Cu) {
        ctx->pc = 0x21AC60u;
        goto label_21ac60;
    }
    ctx->pc = 0x21AC58u;
    {
        const bool branch_taken_0x21ac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ac58) {
            ctx->pc = 0x21AC78u;
            goto label_21ac78;
        }
    }
    ctx->pc = 0x21AC60u;
label_21ac60:
    // 0x21ac60: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x21ac60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_21ac64:
    // 0x21ac64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21ac64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21ac68:
    // 0x21ac68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21ac68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21ac6c:
    // 0x21ac6c: 0x0  nop
    ctx->pc = 0x21ac6cu;
    // NOP
label_21ac70:
    // 0x21ac70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21ac70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_21ac74:
    // 0x21ac74: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x21ac74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_21ac78:
    // 0x21ac78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21ac78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21ac7c:
    // 0x21ac7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21ac7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21ac80:
    // 0x21ac80: 0x7ba302c0  lq          $v1, 0x2C0($sp)
    ctx->pc = 0x21ac80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_21ac84:
    // 0x21ac84: 0x0  nop
    ctx->pc = 0x21ac84u;
    // NOP
label_21ac88:
    // 0x21ac88: 0x0  nop
    ctx->pc = 0x21ac88u;
    // NOP
label_21ac8c:
    // 0x21ac8c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x21ac8cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_21ac90:
    // 0x21ac90: 0x8e8401a0  lw          $a0, 0x1A0($s4)
    ctx->pc = 0x21ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 416)));
label_21ac94:
    // 0x21ac94: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x21ac94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_21ac98:
    // 0x21ac98: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21ac98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21ac9c:
    // 0x21ac9c: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x21ac9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_21aca0:
    // 0x21aca0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x21aca0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21aca4:
    // 0x21aca4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x21aca4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_21aca8:
    // 0x21aca8: 0x7fa302d0  sq          $v1, 0x2D0($sp)
    ctx->pc = 0x21aca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
label_21acac:
    // 0x21acac: 0x7fa302c0  sq          $v1, 0x2C0($sp)
    ctx->pc = 0x21acacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 3));
label_21acb0:
    // 0x21acb0: 0x78820050  lq          $v0, 0x50($a0)
    ctx->pc = 0x21acb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 80)));
label_21acb4:
    // 0x21acb4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21acb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21acb8:
    // 0x21acb8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21acb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21acbc:
    // 0x21acbc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21acbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21acc0:
    // 0x21acc0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21acc0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21acc4:
    // 0x21acc4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x21acc4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_21acc8:
    // 0x21acc8: 0x7fa202d0  sq          $v0, 0x2D0($sp)
    ctx->pc = 0x21acc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
label_21accc:
    // 0x21accc: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x21acccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_21acd0:
    // 0x21acd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21acd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21acd4:
    // 0x21acd4: 0xc0d0ab8  jal         func_342AE0
label_21acd8:
    if (ctx->pc == 0x21ACD8u) {
        ctx->pc = 0x21ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACD4u;
        // 0x21acd8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ACDCu;
        goto label_21acdc;
    }
    ctx->pc = 0x21ACD4u;
    SET_GPR_U32(ctx, 31, 0x21ACDCu);
    ctx->pc = 0x21ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ACD4u;
    // 0x21acd8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AE0u, 0x21ACD4u, 0x21ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ACDCu;
label_21acdc:
    // 0x21acdc: 0x10000027  b           . + 4 + (0x27 << 2)
label_21ace0:
    if (ctx->pc == 0x21ACE0u) {
        ctx->pc = 0x21ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACDCu;
        // 0x21ace0: 0x7bb00370  lq          $s0, 0x370($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ACE4u;
        goto label_21ace4;
    }
    ctx->pc = 0x21ACDCu;
    {
        const bool branch_taken_0x21acdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACDCu;
        // 0x21ace0: 0x7bb00370  lq          $s0, 0x370($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21acdc) {
            ctx->pc = 0x21AD7Cu;
            goto label_21ad7c;
        }
    }
    ctx->pc = 0x21ACE4u;
label_21ace4:
    // 0x21ace4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x21ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_21ace8:
    // 0x21ace8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x21ace8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_21acec:
    // 0x21acec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x21acecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_21acf0:
    // 0x21acf0: 0x40f809  jalr        $v0
label_21acf4:
    if (ctx->pc == 0x21ACF4u) {
        ctx->pc = 0x21ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACF0u;
        // 0x21acf4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ACF8u;
        goto label_21acf8;
    }
    ctx->pc = 0x21ACF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21ACF8u);
        ctx->pc = 0x21ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACF0u;
        // 0x21acf4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ACF0u, 0x21ACF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21ACF8u;
label_21acf8:
    // 0x21acf8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x21acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_21acfc:
    // 0x21acfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21acfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21ad00:
    // 0x21ad00: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_21ad04:
    if (ctx->pc == 0x21AD04u) {
        ctx->pc = 0x21AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD00u;
        // 0x21ad04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AD08u;
        goto label_21ad08;
    }
    ctx->pc = 0x21AD00u;
    {
        const bool branch_taken_0x21ad00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD00u;
        // 0x21ad04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad00) {
            ctx->pc = 0x21AD78u;
            goto label_21ad78;
        }
    }
    ctx->pc = 0x21AD08u;
label_21ad08:
    // 0x21ad08: 0x8e8801a0  lw          $t0, 0x1A0($s4)
    ctx->pc = 0x21ad08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 416)));
label_21ad0c:
    // 0x21ad0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21ad0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ad10:
    // 0x21ad10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21ad10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ad14:
    // 0x21ad14: 0x8d030074  lw          $v1, 0x74($t0)
    ctx->pc = 0x21ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_21ad18:
    // 0x21ad18: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x21ad18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_21ad1c:
    // 0x21ad1c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x21ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_21ad20:
    // 0x21ad20: 0x40f809  jalr        $v0
label_21ad24:
    if (ctx->pc == 0x21AD24u) {
        ctx->pc = 0x21AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD20u;
        // 0x21ad24: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AD28u;
        goto label_21ad28;
    }
    ctx->pc = 0x21AD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21AD28u);
        ctx->pc = 0x21AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD20u;
        // 0x21ad24: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AD20u, 0x21AD28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21AD28u;
label_21ad28:
    // 0x21ad28: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x21ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_21ad2c:
    // 0x21ad2c: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x21ad2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_21ad30:
    // 0x21ad30: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x21ad30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_21ad34:
    // 0x21ad34: 0xa0f809  jalr        $a1
label_21ad38:
    if (ctx->pc == 0x21AD38u) {
        ctx->pc = 0x21AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD34u;
        // 0x21ad38: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AD3Cu;
        goto label_21ad3c;
    }
    ctx->pc = 0x21AD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x21AD3Cu);
        ctx->pc = 0x21AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD34u;
        // 0x21ad38: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AD34u, 0x21AD3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21AD3Cu;
label_21ad3c:
    // 0x21ad3c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x21ad3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21ad40:
    // 0x21ad40: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21ad40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21ad44:
    // 0x21ad44: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x21ad44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_21ad48:
    // 0x21ad48: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21ad48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_21ad4c:
    // 0x21ad4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21ad4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21ad50:
    // 0x21ad50: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x21ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_21ad54:
    // 0x21ad54: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x21ad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21ad58:
    // 0x21ad58: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x21ad58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_21ad5c:
    // 0x21ad5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x21ad5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_21ad60:
    // 0x21ad60: 0x8c447198  lw          $a0, 0x7198($v0)
    ctx->pc = 0x21ad60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
label_21ad64:
    // 0x21ad64: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x21ad64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ad68:
    // 0x21ad68: 0x8e8501a0  lw          $a1, 0x1A0($s4)
    ctx->pc = 0x21ad68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 416)));
label_21ad6c:
    // 0x21ad6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21ad6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_21ad70:
    // 0x21ad70: 0xc0d1df0  jal         func_3477C0
label_21ad74:
    if (ctx->pc == 0x21AD74u) {
        ctx->pc = 0x21AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD70u;
        // 0x21ad74: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AD78u;
        goto label_21ad78;
    }
    ctx->pc = 0x21AD70u;
    SET_GPR_U32(ctx, 31, 0x21AD78u);
    ctx->pc = 0x21AD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AD70u;
    // 0x21ad74: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3477C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3477C0u, 0x21AD70u, 0x21AD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AD78u;
label_21ad78:
    // 0x21ad78: 0x7bb00370  lq          $s0, 0x370($sp)
    ctx->pc = 0x21ad78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_21ad7c:
    // 0x21ad7c: 0x7bb10360  lq          $s1, 0x360($sp)
    ctx->pc = 0x21ad7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_21ad80:
    // 0x21ad80: 0x7bb20350  lq          $s2, 0x350($sp)
    ctx->pc = 0x21ad80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_21ad84:
    // 0x21ad84: 0x7bb30340  lq          $s3, 0x340($sp)
    ctx->pc = 0x21ad84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 832)));
label_21ad88:
    // 0x21ad88: 0x7bb40330  lq          $s4, 0x330($sp)
    ctx->pc = 0x21ad88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_21ad8c:
    // 0x21ad8c: 0xdfbf0320  ld          $ra, 0x320($sp)
    ctx->pc = 0x21ad8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 800)));
label_21ad90:
    // 0x21ad90: 0xc7b50388  lwc1        $f21, 0x388($sp)
    ctx->pc = 0x21ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_21ad94:
    // 0x21ad94: 0xc7b40380  lwc1        $f20, 0x380($sp)
    ctx->pc = 0x21ad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_21ad98:
    // 0x21ad98: 0x3e00008  jr          $ra
label_21ad9c:
    if (ctx->pc == 0x21AD9Cu) {
        ctx->pc = 0x21AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD98u;
        // 0x21ad9c: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ADA0u;
        goto label_fallthrough_0x21ad98;
    }
    ctx->pc = 0x21AD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD98u;
        // 0x21ad9c: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21ad98:
    ctx->pc = 0x21ADA0u;
}
