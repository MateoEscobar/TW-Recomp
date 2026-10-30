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

// Function: sub_0010A5B8
// Address: 0x10a5b8 - 0x10ada8
void sub_0010A5B8_0x10a5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A5B8_0x10a5b8");
#endif

    switch (ctx->pc) {
        case 0x10a5b8u: goto label_10a5b8;
        case 0x10a5bcu: goto label_10a5bc;
        case 0x10a5c0u: goto label_10a5c0;
        case 0x10a5c4u: goto label_10a5c4;
        case 0x10a5c8u: goto label_10a5c8;
        case 0x10a5ccu: goto label_10a5cc;
        case 0x10a5d0u: goto label_10a5d0;
        case 0x10a5d4u: goto label_10a5d4;
        case 0x10a5d8u: goto label_10a5d8;
        case 0x10a5dcu: goto label_10a5dc;
        case 0x10a5e0u: goto label_10a5e0;
        case 0x10a5e4u: goto label_10a5e4;
        case 0x10a5e8u: goto label_10a5e8;
        case 0x10a5ecu: goto label_10a5ec;
        case 0x10a5f0u: goto label_10a5f0;
        case 0x10a5f4u: goto label_10a5f4;
        case 0x10a5f8u: goto label_10a5f8;
        case 0x10a5fcu: goto label_10a5fc;
        case 0x10a600u: goto label_10a600;
        case 0x10a604u: goto label_10a604;
        case 0x10a608u: goto label_10a608;
        case 0x10a60cu: goto label_10a60c;
        case 0x10a610u: goto label_10a610;
        case 0x10a614u: goto label_10a614;
        case 0x10a618u: goto label_10a618;
        case 0x10a61cu: goto label_10a61c;
        case 0x10a620u: goto label_10a620;
        case 0x10a624u: goto label_10a624;
        case 0x10a628u: goto label_10a628;
        case 0x10a62cu: goto label_10a62c;
        case 0x10a630u: goto label_10a630;
        case 0x10a634u: goto label_10a634;
        case 0x10a638u: goto label_10a638;
        case 0x10a63cu: goto label_10a63c;
        case 0x10a640u: goto label_10a640;
        case 0x10a644u: goto label_10a644;
        case 0x10a648u: goto label_10a648;
        case 0x10a64cu: goto label_10a64c;
        case 0x10a650u: goto label_10a650;
        case 0x10a654u: goto label_10a654;
        case 0x10a658u: goto label_10a658;
        case 0x10a65cu: goto label_10a65c;
        case 0x10a660u: goto label_10a660;
        case 0x10a664u: goto label_10a664;
        case 0x10a668u: goto label_10a668;
        case 0x10a66cu: goto label_10a66c;
        case 0x10a670u: goto label_10a670;
        case 0x10a674u: goto label_10a674;
        case 0x10a678u: goto label_10a678;
        case 0x10a67cu: goto label_10a67c;
        case 0x10a680u: goto label_10a680;
        case 0x10a684u: goto label_10a684;
        case 0x10a688u: goto label_10a688;
        case 0x10a68cu: goto label_10a68c;
        case 0x10a690u: goto label_10a690;
        case 0x10a694u: goto label_10a694;
        case 0x10a698u: goto label_10a698;
        case 0x10a69cu: goto label_10a69c;
        case 0x10a6a0u: goto label_10a6a0;
        case 0x10a6a4u: goto label_10a6a4;
        case 0x10a6a8u: goto label_10a6a8;
        case 0x10a6acu: goto label_10a6ac;
        case 0x10a6b0u: goto label_10a6b0;
        case 0x10a6b4u: goto label_10a6b4;
        case 0x10a6b8u: goto label_10a6b8;
        case 0x10a6bcu: goto label_10a6bc;
        case 0x10a6c0u: goto label_10a6c0;
        case 0x10a6c4u: goto label_10a6c4;
        case 0x10a6c8u: goto label_10a6c8;
        case 0x10a6ccu: goto label_10a6cc;
        case 0x10a6d0u: goto label_10a6d0;
        case 0x10a6d4u: goto label_10a6d4;
        case 0x10a6d8u: goto label_10a6d8;
        case 0x10a6dcu: goto label_10a6dc;
        case 0x10a6e0u: goto label_10a6e0;
        case 0x10a6e4u: goto label_10a6e4;
        case 0x10a6e8u: goto label_10a6e8;
        case 0x10a6ecu: goto label_10a6ec;
        case 0x10a6f0u: goto label_10a6f0;
        case 0x10a6f4u: goto label_10a6f4;
        case 0x10a6f8u: goto label_10a6f8;
        case 0x10a6fcu: goto label_10a6fc;
        case 0x10a700u: goto label_10a700;
        case 0x10a704u: goto label_10a704;
        case 0x10a708u: goto label_10a708;
        case 0x10a70cu: goto label_10a70c;
        case 0x10a710u: goto label_10a710;
        case 0x10a714u: goto label_10a714;
        case 0x10a718u: goto label_10a718;
        case 0x10a71cu: goto label_10a71c;
        case 0x10a720u: goto label_10a720;
        case 0x10a724u: goto label_10a724;
        case 0x10a728u: goto label_10a728;
        case 0x10a72cu: goto label_10a72c;
        case 0x10a730u: goto label_10a730;
        case 0x10a734u: goto label_10a734;
        case 0x10a738u: goto label_10a738;
        case 0x10a73cu: goto label_10a73c;
        case 0x10a740u: goto label_10a740;
        case 0x10a744u: goto label_10a744;
        case 0x10a748u: goto label_10a748;
        case 0x10a74cu: goto label_10a74c;
        case 0x10a750u: goto label_10a750;
        case 0x10a754u: goto label_10a754;
        case 0x10a758u: goto label_10a758;
        case 0x10a75cu: goto label_10a75c;
        case 0x10a760u: goto label_10a760;
        case 0x10a764u: goto label_10a764;
        case 0x10a768u: goto label_10a768;
        case 0x10a76cu: goto label_10a76c;
        case 0x10a770u: goto label_10a770;
        case 0x10a774u: goto label_10a774;
        case 0x10a778u: goto label_10a778;
        case 0x10a77cu: goto label_10a77c;
        case 0x10a780u: goto label_10a780;
        case 0x10a784u: goto label_10a784;
        case 0x10a788u: goto label_10a788;
        case 0x10a78cu: goto label_10a78c;
        case 0x10a790u: goto label_10a790;
        case 0x10a794u: goto label_10a794;
        case 0x10a798u: goto label_10a798;
        case 0x10a79cu: goto label_10a79c;
        case 0x10a7a0u: goto label_10a7a0;
        case 0x10a7a4u: goto label_10a7a4;
        case 0x10a7a8u: goto label_10a7a8;
        case 0x10a7acu: goto label_10a7ac;
        case 0x10a7b0u: goto label_10a7b0;
        case 0x10a7b4u: goto label_10a7b4;
        case 0x10a7b8u: goto label_10a7b8;
        case 0x10a7bcu: goto label_10a7bc;
        case 0x10a7c0u: goto label_10a7c0;
        case 0x10a7c4u: goto label_10a7c4;
        case 0x10a7c8u: goto label_10a7c8;
        case 0x10a7ccu: goto label_10a7cc;
        case 0x10a7d0u: goto label_10a7d0;
        case 0x10a7d4u: goto label_10a7d4;
        case 0x10a7d8u: goto label_10a7d8;
        case 0x10a7dcu: goto label_10a7dc;
        case 0x10a7e0u: goto label_10a7e0;
        case 0x10a7e4u: goto label_10a7e4;
        case 0x10a7e8u: goto label_10a7e8;
        case 0x10a7ecu: goto label_10a7ec;
        case 0x10a7f0u: goto label_10a7f0;
        case 0x10a7f4u: goto label_10a7f4;
        case 0x10a7f8u: goto label_10a7f8;
        case 0x10a7fcu: goto label_10a7fc;
        case 0x10a800u: goto label_10a800;
        case 0x10a804u: goto label_10a804;
        case 0x10a808u: goto label_10a808;
        case 0x10a80cu: goto label_10a80c;
        case 0x10a810u: goto label_10a810;
        case 0x10a814u: goto label_10a814;
        case 0x10a818u: goto label_10a818;
        case 0x10a81cu: goto label_10a81c;
        case 0x10a820u: goto label_10a820;
        case 0x10a824u: goto label_10a824;
        case 0x10a828u: goto label_10a828;
        case 0x10a82cu: goto label_10a82c;
        case 0x10a830u: goto label_10a830;
        case 0x10a834u: goto label_10a834;
        case 0x10a838u: goto label_10a838;
        case 0x10a83cu: goto label_10a83c;
        case 0x10a840u: goto label_10a840;
        case 0x10a844u: goto label_10a844;
        case 0x10a848u: goto label_10a848;
        case 0x10a84cu: goto label_10a84c;
        case 0x10a850u: goto label_10a850;
        case 0x10a854u: goto label_10a854;
        case 0x10a858u: goto label_10a858;
        case 0x10a85cu: goto label_10a85c;
        case 0x10a860u: goto label_10a860;
        case 0x10a864u: goto label_10a864;
        case 0x10a868u: goto label_10a868;
        case 0x10a86cu: goto label_10a86c;
        case 0x10a870u: goto label_10a870;
        case 0x10a874u: goto label_10a874;
        case 0x10a878u: goto label_10a878;
        case 0x10a87cu: goto label_10a87c;
        case 0x10a880u: goto label_10a880;
        case 0x10a884u: goto label_10a884;
        case 0x10a888u: goto label_10a888;
        case 0x10a88cu: goto label_10a88c;
        case 0x10a890u: goto label_10a890;
        case 0x10a894u: goto label_10a894;
        case 0x10a898u: goto label_10a898;
        case 0x10a89cu: goto label_10a89c;
        case 0x10a8a0u: goto label_10a8a0;
        case 0x10a8a4u: goto label_10a8a4;
        case 0x10a8a8u: goto label_10a8a8;
        case 0x10a8acu: goto label_10a8ac;
        case 0x10a8b0u: goto label_10a8b0;
        case 0x10a8b4u: goto label_10a8b4;
        case 0x10a8b8u: goto label_10a8b8;
        case 0x10a8bcu: goto label_10a8bc;
        case 0x10a8c0u: goto label_10a8c0;
        case 0x10a8c4u: goto label_10a8c4;
        case 0x10a8c8u: goto label_10a8c8;
        case 0x10a8ccu: goto label_10a8cc;
        case 0x10a8d0u: goto label_10a8d0;
        case 0x10a8d4u: goto label_10a8d4;
        case 0x10a8d8u: goto label_10a8d8;
        case 0x10a8dcu: goto label_10a8dc;
        case 0x10a8e0u: goto label_10a8e0;
        case 0x10a8e4u: goto label_10a8e4;
        case 0x10a8e8u: goto label_10a8e8;
        case 0x10a8ecu: goto label_10a8ec;
        case 0x10a8f0u: goto label_10a8f0;
        case 0x10a8f4u: goto label_10a8f4;
        case 0x10a8f8u: goto label_10a8f8;
        case 0x10a8fcu: goto label_10a8fc;
        case 0x10a900u: goto label_10a900;
        case 0x10a904u: goto label_10a904;
        case 0x10a908u: goto label_10a908;
        case 0x10a90cu: goto label_10a90c;
        case 0x10a910u: goto label_10a910;
        case 0x10a914u: goto label_10a914;
        case 0x10a918u: goto label_10a918;
        case 0x10a91cu: goto label_10a91c;
        case 0x10a920u: goto label_10a920;
        case 0x10a924u: goto label_10a924;
        case 0x10a928u: goto label_10a928;
        case 0x10a92cu: goto label_10a92c;
        case 0x10a930u: goto label_10a930;
        case 0x10a934u: goto label_10a934;
        case 0x10a938u: goto label_10a938;
        case 0x10a93cu: goto label_10a93c;
        case 0x10a940u: goto label_10a940;
        case 0x10a944u: goto label_10a944;
        case 0x10a948u: goto label_10a948;
        case 0x10a94cu: goto label_10a94c;
        case 0x10a950u: goto label_10a950;
        case 0x10a954u: goto label_10a954;
        case 0x10a958u: goto label_10a958;
        case 0x10a95cu: goto label_10a95c;
        case 0x10a960u: goto label_10a960;
        case 0x10a964u: goto label_10a964;
        case 0x10a968u: goto label_10a968;
        case 0x10a96cu: goto label_10a96c;
        case 0x10a970u: goto label_10a970;
        case 0x10a974u: goto label_10a974;
        case 0x10a978u: goto label_10a978;
        case 0x10a97cu: goto label_10a97c;
        case 0x10a980u: goto label_10a980;
        case 0x10a984u: goto label_10a984;
        case 0x10a988u: goto label_10a988;
        case 0x10a98cu: goto label_10a98c;
        case 0x10a990u: goto label_10a990;
        case 0x10a994u: goto label_10a994;
        case 0x10a998u: goto label_10a998;
        case 0x10a99cu: goto label_10a99c;
        case 0x10a9a0u: goto label_10a9a0;
        case 0x10a9a4u: goto label_10a9a4;
        case 0x10a9a8u: goto label_10a9a8;
        case 0x10a9acu: goto label_10a9ac;
        case 0x10a9b0u: goto label_10a9b0;
        case 0x10a9b4u: goto label_10a9b4;
        case 0x10a9b8u: goto label_10a9b8;
        case 0x10a9bcu: goto label_10a9bc;
        case 0x10a9c0u: goto label_10a9c0;
        case 0x10a9c4u: goto label_10a9c4;
        case 0x10a9c8u: goto label_10a9c8;
        case 0x10a9ccu: goto label_10a9cc;
        case 0x10a9d0u: goto label_10a9d0;
        case 0x10a9d4u: goto label_10a9d4;
        case 0x10a9d8u: goto label_10a9d8;
        case 0x10a9dcu: goto label_10a9dc;
        case 0x10a9e0u: goto label_10a9e0;
        case 0x10a9e4u: goto label_10a9e4;
        case 0x10a9e8u: goto label_10a9e8;
        case 0x10a9ecu: goto label_10a9ec;
        case 0x10a9f0u: goto label_10a9f0;
        case 0x10a9f4u: goto label_10a9f4;
        case 0x10a9f8u: goto label_10a9f8;
        case 0x10a9fcu: goto label_10a9fc;
        case 0x10aa00u: goto label_10aa00;
        case 0x10aa04u: goto label_10aa04;
        case 0x10aa08u: goto label_10aa08;
        case 0x10aa0cu: goto label_10aa0c;
        case 0x10aa10u: goto label_10aa10;
        case 0x10aa14u: goto label_10aa14;
        case 0x10aa18u: goto label_10aa18;
        case 0x10aa1cu: goto label_10aa1c;
        case 0x10aa20u: goto label_10aa20;
        case 0x10aa24u: goto label_10aa24;
        case 0x10aa28u: goto label_10aa28;
        case 0x10aa2cu: goto label_10aa2c;
        case 0x10aa30u: goto label_10aa30;
        case 0x10aa34u: goto label_10aa34;
        case 0x10aa38u: goto label_10aa38;
        case 0x10aa3cu: goto label_10aa3c;
        case 0x10aa40u: goto label_10aa40;
        case 0x10aa44u: goto label_10aa44;
        case 0x10aa48u: goto label_10aa48;
        case 0x10aa4cu: goto label_10aa4c;
        case 0x10aa50u: goto label_10aa50;
        case 0x10aa54u: goto label_10aa54;
        case 0x10aa58u: goto label_10aa58;
        case 0x10aa5cu: goto label_10aa5c;
        case 0x10aa60u: goto label_10aa60;
        case 0x10aa64u: goto label_10aa64;
        case 0x10aa68u: goto label_10aa68;
        case 0x10aa6cu: goto label_10aa6c;
        case 0x10aa70u: goto label_10aa70;
        case 0x10aa74u: goto label_10aa74;
        case 0x10aa78u: goto label_10aa78;
        case 0x10aa7cu: goto label_10aa7c;
        case 0x10aa80u: goto label_10aa80;
        case 0x10aa84u: goto label_10aa84;
        case 0x10aa88u: goto label_10aa88;
        case 0x10aa8cu: goto label_10aa8c;
        case 0x10aa90u: goto label_10aa90;
        case 0x10aa94u: goto label_10aa94;
        case 0x10aa98u: goto label_10aa98;
        case 0x10aa9cu: goto label_10aa9c;
        case 0x10aaa0u: goto label_10aaa0;
        case 0x10aaa4u: goto label_10aaa4;
        case 0x10aaa8u: goto label_10aaa8;
        case 0x10aaacu: goto label_10aaac;
        case 0x10aab0u: goto label_10aab0;
        case 0x10aab4u: goto label_10aab4;
        case 0x10aab8u: goto label_10aab8;
        case 0x10aabcu: goto label_10aabc;
        case 0x10aac0u: goto label_10aac0;
        case 0x10aac4u: goto label_10aac4;
        case 0x10aac8u: goto label_10aac8;
        case 0x10aaccu: goto label_10aacc;
        case 0x10aad0u: goto label_10aad0;
        case 0x10aad4u: goto label_10aad4;
        case 0x10aad8u: goto label_10aad8;
        case 0x10aadcu: goto label_10aadc;
        case 0x10aae0u: goto label_10aae0;
        case 0x10aae4u: goto label_10aae4;
        case 0x10aae8u: goto label_10aae8;
        case 0x10aaecu: goto label_10aaec;
        case 0x10aaf0u: goto label_10aaf0;
        case 0x10aaf4u: goto label_10aaf4;
        case 0x10aaf8u: goto label_10aaf8;
        case 0x10aafcu: goto label_10aafc;
        case 0x10ab00u: goto label_10ab00;
        case 0x10ab04u: goto label_10ab04;
        case 0x10ab08u: goto label_10ab08;
        case 0x10ab0cu: goto label_10ab0c;
        case 0x10ab10u: goto label_10ab10;
        case 0x10ab14u: goto label_10ab14;
        case 0x10ab18u: goto label_10ab18;
        case 0x10ab1cu: goto label_10ab1c;
        case 0x10ab20u: goto label_10ab20;
        case 0x10ab24u: goto label_10ab24;
        case 0x10ab28u: goto label_10ab28;
        case 0x10ab2cu: goto label_10ab2c;
        case 0x10ab30u: goto label_10ab30;
        case 0x10ab34u: goto label_10ab34;
        case 0x10ab38u: goto label_10ab38;
        case 0x10ab3cu: goto label_10ab3c;
        case 0x10ab40u: goto label_10ab40;
        case 0x10ab44u: goto label_10ab44;
        case 0x10ab48u: goto label_10ab48;
        case 0x10ab4cu: goto label_10ab4c;
        case 0x10ab50u: goto label_10ab50;
        case 0x10ab54u: goto label_10ab54;
        case 0x10ab58u: goto label_10ab58;
        case 0x10ab5cu: goto label_10ab5c;
        case 0x10ab60u: goto label_10ab60;
        case 0x10ab64u: goto label_10ab64;
        case 0x10ab68u: goto label_10ab68;
        case 0x10ab6cu: goto label_10ab6c;
        case 0x10ab70u: goto label_10ab70;
        case 0x10ab74u: goto label_10ab74;
        case 0x10ab78u: goto label_10ab78;
        case 0x10ab7cu: goto label_10ab7c;
        case 0x10ab80u: goto label_10ab80;
        case 0x10ab84u: goto label_10ab84;
        case 0x10ab88u: goto label_10ab88;
        case 0x10ab8cu: goto label_10ab8c;
        case 0x10ab90u: goto label_10ab90;
        case 0x10ab94u: goto label_10ab94;
        case 0x10ab98u: goto label_10ab98;
        case 0x10ab9cu: goto label_10ab9c;
        case 0x10aba0u: goto label_10aba0;
        case 0x10aba4u: goto label_10aba4;
        case 0x10aba8u: goto label_10aba8;
        case 0x10abacu: goto label_10abac;
        case 0x10abb0u: goto label_10abb0;
        case 0x10abb4u: goto label_10abb4;
        case 0x10abb8u: goto label_10abb8;
        case 0x10abbcu: goto label_10abbc;
        case 0x10abc0u: goto label_10abc0;
        case 0x10abc4u: goto label_10abc4;
        case 0x10abc8u: goto label_10abc8;
        case 0x10abccu: goto label_10abcc;
        case 0x10abd0u: goto label_10abd0;
        case 0x10abd4u: goto label_10abd4;
        case 0x10abd8u: goto label_10abd8;
        case 0x10abdcu: goto label_10abdc;
        case 0x10abe0u: goto label_10abe0;
        case 0x10abe4u: goto label_10abe4;
        case 0x10abe8u: goto label_10abe8;
        case 0x10abecu: goto label_10abec;
        case 0x10abf0u: goto label_10abf0;
        case 0x10abf4u: goto label_10abf4;
        case 0x10abf8u: goto label_10abf8;
        case 0x10abfcu: goto label_10abfc;
        case 0x10ac00u: goto label_10ac00;
        case 0x10ac04u: goto label_10ac04;
        case 0x10ac08u: goto label_10ac08;
        case 0x10ac0cu: goto label_10ac0c;
        case 0x10ac10u: goto label_10ac10;
        case 0x10ac14u: goto label_10ac14;
        case 0x10ac18u: goto label_10ac18;
        case 0x10ac1cu: goto label_10ac1c;
        case 0x10ac20u: goto label_10ac20;
        case 0x10ac24u: goto label_10ac24;
        case 0x10ac28u: goto label_10ac28;
        case 0x10ac2cu: goto label_10ac2c;
        case 0x10ac30u: goto label_10ac30;
        case 0x10ac34u: goto label_10ac34;
        case 0x10ac38u: goto label_10ac38;
        case 0x10ac3cu: goto label_10ac3c;
        case 0x10ac40u: goto label_10ac40;
        case 0x10ac44u: goto label_10ac44;
        case 0x10ac48u: goto label_10ac48;
        case 0x10ac4cu: goto label_10ac4c;
        case 0x10ac50u: goto label_10ac50;
        case 0x10ac54u: goto label_10ac54;
        case 0x10ac58u: goto label_10ac58;
        case 0x10ac5cu: goto label_10ac5c;
        case 0x10ac60u: goto label_10ac60;
        case 0x10ac64u: goto label_10ac64;
        case 0x10ac68u: goto label_10ac68;
        case 0x10ac6cu: goto label_10ac6c;
        case 0x10ac70u: goto label_10ac70;
        case 0x10ac74u: goto label_10ac74;
        case 0x10ac78u: goto label_10ac78;
        case 0x10ac7cu: goto label_10ac7c;
        case 0x10ac80u: goto label_10ac80;
        case 0x10ac84u: goto label_10ac84;
        case 0x10ac88u: goto label_10ac88;
        case 0x10ac8cu: goto label_10ac8c;
        case 0x10ac90u: goto label_10ac90;
        case 0x10ac94u: goto label_10ac94;
        case 0x10ac98u: goto label_10ac98;
        case 0x10ac9cu: goto label_10ac9c;
        case 0x10aca0u: goto label_10aca0;
        case 0x10aca4u: goto label_10aca4;
        case 0x10aca8u: goto label_10aca8;
        case 0x10acacu: goto label_10acac;
        case 0x10acb0u: goto label_10acb0;
        case 0x10acb4u: goto label_10acb4;
        case 0x10acb8u: goto label_10acb8;
        case 0x10acbcu: goto label_10acbc;
        case 0x10acc0u: goto label_10acc0;
        case 0x10acc4u: goto label_10acc4;
        case 0x10acc8u: goto label_10acc8;
        case 0x10acccu: goto label_10accc;
        case 0x10acd0u: goto label_10acd0;
        case 0x10acd4u: goto label_10acd4;
        case 0x10acd8u: goto label_10acd8;
        case 0x10acdcu: goto label_10acdc;
        case 0x10ace0u: goto label_10ace0;
        case 0x10ace4u: goto label_10ace4;
        case 0x10ace8u: goto label_10ace8;
        case 0x10acecu: goto label_10acec;
        case 0x10acf0u: goto label_10acf0;
        case 0x10acf4u: goto label_10acf4;
        case 0x10acf8u: goto label_10acf8;
        case 0x10acfcu: goto label_10acfc;
        case 0x10ad00u: goto label_10ad00;
        case 0x10ad04u: goto label_10ad04;
        case 0x10ad08u: goto label_10ad08;
        case 0x10ad0cu: goto label_10ad0c;
        case 0x10ad10u: goto label_10ad10;
        case 0x10ad14u: goto label_10ad14;
        case 0x10ad18u: goto label_10ad18;
        case 0x10ad1cu: goto label_10ad1c;
        case 0x10ad20u: goto label_10ad20;
        case 0x10ad24u: goto label_10ad24;
        case 0x10ad28u: goto label_10ad28;
        case 0x10ad2cu: goto label_10ad2c;
        case 0x10ad30u: goto label_10ad30;
        case 0x10ad34u: goto label_10ad34;
        case 0x10ad38u: goto label_10ad38;
        case 0x10ad3cu: goto label_10ad3c;
        case 0x10ad40u: goto label_10ad40;
        case 0x10ad44u: goto label_10ad44;
        case 0x10ad48u: goto label_10ad48;
        case 0x10ad4cu: goto label_10ad4c;
        case 0x10ad50u: goto label_10ad50;
        case 0x10ad54u: goto label_10ad54;
        case 0x10ad58u: goto label_10ad58;
        case 0x10ad5cu: goto label_10ad5c;
        case 0x10ad60u: goto label_10ad60;
        case 0x10ad64u: goto label_10ad64;
        case 0x10ad68u: goto label_10ad68;
        case 0x10ad6cu: goto label_10ad6c;
        case 0x10ad70u: goto label_10ad70;
        case 0x10ad74u: goto label_10ad74;
        case 0x10ad78u: goto label_10ad78;
        case 0x10ad7cu: goto label_10ad7c;
        case 0x10ad80u: goto label_10ad80;
        case 0x10ad84u: goto label_10ad84;
        case 0x10ad88u: goto label_10ad88;
        case 0x10ad8cu: goto label_10ad8c;
        case 0x10ad90u: goto label_10ad90;
        case 0x10ad94u: goto label_10ad94;
        case 0x10ad98u: goto label_10ad98;
        case 0x10ad9cu: goto label_10ad9c;
        case 0x10ada0u: goto label_10ada0;
        case 0x10ada4u: goto label_10ada4;
        default: break;
    }

    ctx->pc = 0x10a5b8u;

label_10a5b8:
    // 0x10a5b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10a5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_10a5bc:
    // 0x10a5bc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x10a5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_10a5c0:
    // 0x10a5c0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x10a5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_10a5c4:
    // 0x10a5c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10a5c8:
    // 0x10a5c8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x10a5c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_10a5cc:
    // 0x10a5cc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x10a5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_10a5d0:
    // 0x10a5d0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10a5d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_10a5d4:
    // 0x10a5d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10a5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10a5d8:
    // 0x10a5d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10a5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10a5dc:
    // 0x10a5dc: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x10a5dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_10a5e0:
    // 0x10a5e0: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x10a5e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_10a5e4:
    // 0x10a5e4: 0xc0428a8  jal         func_10A2A0
label_10a5e8:
    if (ctx->pc == 0x10A5E8u) {
        ctx->pc = 0x10A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5E4u;
        // 0x10a5e8: 0xc60c0038  lwc1        $f12, 0x38($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A5ECu;
        goto label_10a5ec;
    }
    ctx->pc = 0x10A5E4u;
    SET_GPR_U32(ctx, 31, 0x10A5ECu);
    ctx->pc = 0x10A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A5E4u;
    // 0x10a5e8: 0xc60c0038  lwc1        $f12, 0x38($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A2A0u, 0x10A5E4u, 0x10A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A5ECu;
label_10a5ec:
    // 0x10a5ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10a5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a5f0:
    // 0x10a5f0: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_10a5f4:
    if (ctx->pc == 0x10A5F4u) {
        ctx->pc = 0x10A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5F0u;
        // 0x10a5f4: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A5F8u;
        goto label_10a5f8;
    }
    ctx->pc = 0x10A5F0u;
    {
        const bool branch_taken_0x10a5f0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x10A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5F0u;
        // 0x10a5f4: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a5f0) {
            ctx->pc = 0x10A60Cu;
            goto label_10a60c;
        }
    }
    ctx->pc = 0x10A5F8u;
label_10a5f8:
    // 0x10a5f8: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x10a5f8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10a5fc:
    // 0x10a5fc: 0x0  nop
    ctx->pc = 0x10a5fcu;
    // NOP
label_10a600:
    // 0x10a600: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10a600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10a604:
    // 0x10a604: 0x10000008  b           . + 4 + (0x8 << 2)
label_10a608:
    if (ctx->pc == 0x10A608u) {
        ctx->pc = 0x10A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A604u;
        // 0x10a608: 0xc6000038  lwc1        $f0, 0x38($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A60Cu;
        goto label_10a60c;
    }
    ctx->pc = 0x10A604u;
    {
        const bool branch_taken_0x10a604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A604u;
        // 0x10a608: 0xc6000038  lwc1        $f0, 0x38($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a604) {
            ctx->pc = 0x10A628u;
            goto label_10a628;
        }
    }
    ctx->pc = 0x10A60Cu;
label_10a60c:
    // 0x10a60c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x10a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_10a610:
    // 0x10a610: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10a610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_10a614:
    // 0x10a614: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10a614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10a618:
    // 0x10a618: 0x0  nop
    ctx->pc = 0x10a618u;
    // NOP
label_10a61c:
    // 0x10a61c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10a61cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10a620:
    // 0x10a620: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x10a620u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_10a624:
    // 0x10a624: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x10a624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10a628:
    // 0x10a628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a62c:
    // 0x10a62c: 0xc0420dc  jal         func_108370
label_10a630:
    if (ctx->pc == 0x10A630u) {
        ctx->pc = 0x10A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A62Cu;
        // 0x10a630: 0x46010581  sub.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A634u;
        goto label_10a634;
    }
    ctx->pc = 0x10A62Cu;
    SET_GPR_U32(ctx, 31, 0x10A634u);
    ctx->pc = 0x10A630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A62Cu;
    // 0x10a630: 0x46010581  sub.s       $f22, $f0, $f1 (Delay Slot)
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10A62Cu, 0x10A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A634u;
label_10a634:
    // 0x10a634: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x10a634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_10a638:
    // 0x10a638: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x10a638u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_10a63c:
    // 0x10a63c: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x10a63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_10a640:
    // 0x10a640: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10a640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10a644:
    // 0x10a644: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x10a644u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_10a648:
    // 0x10a648: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x10a648u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10a64c:
    // 0x10a64c: 0x0  nop
    ctx->pc = 0x10a64cu;
    // NOP
label_10a650:
    // 0x10a650: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
label_10a654:
    if (ctx->pc == 0x10A654u) {
        ctx->pc = 0x10A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A650u;
        // 0x10a654: 0xc6010038  lwc1        $f1, 0x38($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A658u;
        goto label_10a658;
    }
    ctx->pc = 0x10A650u;
    {
        const bool branch_taken_0x10a650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10a650) {
            ctx->pc = 0x10A654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A650u;
            // 0x10a654: 0xc6010038  lwc1        $f1, 0x38($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A6A8u;
            goto label_10a6a8;
        }
    }
    ctx->pc = 0x10A658u;
label_10a658:
    // 0x10a658: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10a658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10a65c:
    // 0x10a65c: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x10a65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10a660:
    // 0x10a660: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_10a664:
    if (ctx->pc == 0x10A664u) {
        ctx->pc = 0x10A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A660u;
        // 0x10a664: 0x4600a082  mul.s       $f2, $f20, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A668u;
        goto label_10a668;
    }
    ctx->pc = 0x10A660u;
    {
        const bool branch_taken_0x10a660 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A660u;
        // 0x10a664: 0x4600a082  mul.s       $f2, $f20, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a660) {
            ctx->pc = 0x10A684u;
            goto label_10a684;
        }
    }
    ctx->pc = 0x10A668u;
label_10a668:
    // 0x10a668: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x10a668u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_10a66c:
    // 0x10a66c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x10a66cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10a670:
    // 0x10a670: 0x0  nop
    ctx->pc = 0x10a670u;
    // NOP
label_10a674:
    // 0x10a674: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_10a678:
    if (ctx->pc == 0x10A678u) {
        ctx->pc = 0x10A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A674u;
        // 0x10a678: 0xe6040038  swc1        $f4, 0x38($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A67Cu;
        goto label_10a67c;
    }
    ctx->pc = 0x10A674u;
    {
        const bool branch_taken_0x10a674 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10a674) {
            ctx->pc = 0x10A678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A674u;
            // 0x10a678: 0xe6040038  swc1        $f4, 0x38($s0) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A6A0u;
            goto label_10a6a0;
        }
    }
    ctx->pc = 0x10A67Cu;
label_10a67c:
    // 0x10a67c: 0x10000007  b           . + 4 + (0x7 << 2)
label_10a680:
    if (ctx->pc == 0x10A680u) {
        ctx->pc = 0x10A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A67Cu;
        // 0x10a680: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A684u;
        goto label_10a684;
    }
    ctx->pc = 0x10A67Cu;
    {
        const bool branch_taken_0x10a67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A67Cu;
        // 0x10a680: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a67c) {
            ctx->pc = 0x10A69Cu;
            goto label_10a69c;
        }
    }
    ctx->pc = 0x10A684u;
label_10a684:
    // 0x10a684: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x10a684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10a688:
    // 0x10a688: 0x0  nop
    ctx->pc = 0x10a688u;
    // NOP
label_10a68c:
    // 0x10a68c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_10a690:
    if (ctx->pc == 0x10A690u) {
        ctx->pc = 0x10A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A68Cu;
        // 0x10a690: 0x46021800  add.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A694u;
        goto label_10a694;
    }
    ctx->pc = 0x10A68Cu;
    {
        const bool branch_taken_0x10a68c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10a68c) {
            ctx->pc = 0x10A690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A68Cu;
            // 0x10a690: 0x46021800  add.s       $f0, $f3, $f2 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A69Cu;
            goto label_10a69c;
        }
    }
    ctx->pc = 0x10A694u;
label_10a694:
    // 0x10a694: 0x10000002  b           . + 4 + (0x2 << 2)
label_10a698:
    if (ctx->pc == 0x10A698u) {
        ctx->pc = 0x10A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A694u;
        // 0x10a698: 0xe6040038  swc1        $f4, 0x38($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A69Cu;
        goto label_10a69c;
    }
    ctx->pc = 0x10A694u;
    {
        const bool branch_taken_0x10a694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A694u;
        // 0x10a698: 0xe6040038  swc1        $f4, 0x38($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a694) {
            ctx->pc = 0x10A6A0u;
            goto label_10a6a0;
        }
    }
    ctx->pc = 0x10A69Cu;
label_10a69c:
    // 0x10a69c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x10a69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_10a6a0:
    // 0x10a6a0: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x10a6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10a6a4:
    // 0x10a6a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10a6a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10a6a8:
    // 0x10a6a8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x10a6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_10a6ac:
    // 0x10a6ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10a6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10a6b0:
    // 0x10a6b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10a6b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10a6b4:
    // 0x10a6b4: 0x0  nop
    ctx->pc = 0x10a6b4u;
    // NOP
label_10a6b8:
    // 0x10a6b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_10a6bc:
    if (ctx->pc == 0x10A6BCu) {
        ctx->pc = 0x10A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6B8u;
        // 0x10a6bc: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6C0u;
        goto label_10a6c0;
    }
    ctx->pc = 0x10A6B8u;
    {
        const bool branch_taken_0x10a6b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10a6b8) {
            ctx->pc = 0x10A6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A6B8u;
            // 0x10a6bc: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A6C0u;
            goto label_10a6c0;
        }
    }
    ctx->pc = 0x10A6C0u;
label_10a6c0:
    // 0x10a6c0: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x10a6c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10a6c4:
    // 0x10a6c4: 0x0  nop
    ctx->pc = 0x10a6c4u;
    // NOP
label_10a6c8:
    // 0x10a6c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_10a6cc:
    if (ctx->pc == 0x10A6CCu) {
        ctx->pc = 0x10A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6C8u;
        // 0x10a6cc: 0x46020841  sub.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6D0u;
        goto label_10a6d0;
    }
    ctx->pc = 0x10A6C8u;
    {
        const bool branch_taken_0x10a6c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10a6c8) {
            ctx->pc = 0x10A6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A6C8u;
            // 0x10a6cc: 0x46020841  sub.s       $f1, $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A6D0u;
            goto label_10a6d0;
        }
    }
    ctx->pc = 0x10A6D0u;
label_10a6d0:
    // 0x10a6d0: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x10a6d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_10a6d4:
    // 0x10a6d4: 0xc0428a8  jal         func_10A2A0
label_10a6d8:
    if (ctx->pc == 0x10A6D8u) {
        ctx->pc = 0x10A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6D4u;
        // 0x10a6d8: 0xe6010038  swc1        $f1, 0x38($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6DCu;
        goto label_10a6dc;
    }
    ctx->pc = 0x10A6D4u;
    SET_GPR_U32(ctx, 31, 0x10A6DCu);
    ctx->pc = 0x10A6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6D4u;
    // 0x10a6d8: 0xe6010038  swc1        $f1, 0x38($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A2A0u, 0x10A6D4u, 0x10A6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6DCu;
label_10a6dc:
    // 0x10a6dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10a6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a6e0:
    // 0x10a6e0: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
label_10a6e4:
    if (ctx->pc == 0x10A6E4u) {
        ctx->pc = 0x10A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6E0u;
        // 0x10a6e4: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6E8u;
        goto label_10a6e8;
    }
    ctx->pc = 0x10A6E0u;
    {
        const bool branch_taken_0x10a6e0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x10A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6E0u;
        // 0x10a6e4: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6e0) {
            ctx->pc = 0x10A6FCu;
            goto label_10a6fc;
        }
    }
    ctx->pc = 0x10A6E8u;
label_10a6e8:
    // 0x10a6e8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x10a6e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10a6ec:
    // 0x10a6ec: 0x0  nop
    ctx->pc = 0x10a6ecu;
    // NOP
label_10a6f0:
    // 0x10a6f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10a6f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10a6f4:
    // 0x10a6f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_10a6f8:
    if (ctx->pc == 0x10A6F8u) {
        ctx->pc = 0x10A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6F4u;
        // 0x10a6f8: 0xc6000038  lwc1        $f0, 0x38($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6FCu;
        goto label_10a6fc;
    }
    ctx->pc = 0x10A6F4u;
    {
        const bool branch_taken_0x10a6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6F4u;
        // 0x10a6f8: 0xc6000038  lwc1        $f0, 0x38($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6f4) {
            ctx->pc = 0x10A718u;
            goto label_10a718;
        }
    }
    ctx->pc = 0x10A6FCu;
label_10a6fc:
    // 0x10a6fc: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x10a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_10a700:
    // 0x10a700: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_10a704:
    // 0x10a704: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10a704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10a708:
    // 0x10a708: 0x0  nop
    ctx->pc = 0x10a708u;
    // NOP
label_10a70c:
    // 0x10a70c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10a70cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10a710:
    // 0x10a710: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x10a710u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_10a714:
    // 0x10a714: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x10a714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10a718:
    // 0x10a718: 0x122600aa  beq         $s1, $a2, . + 4 + (0xAA << 2)
label_10a71c:
    if (ctx->pc == 0x10A71Cu) {
        ctx->pc = 0x10A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A718u;
        // 0x10a71c: 0x46010541  sub.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A720u;
        goto label_10a720;
    }
    ctx->pc = 0x10A718u;
    {
        const bool branch_taken_0x10a718 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x10A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A718u;
        // 0x10a71c: 0x46010541  sub.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a718) {
            ctx->pc = 0x10A9C4u;
            goto label_10a9c4;
        }
    }
    ctx->pc = 0x10A720u;
label_10a720:
    // 0x10a720: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x10a720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_10a724:
    // 0x10a724: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x10a724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_10a728:
    // 0x10a728: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10a728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10a72c:
    // 0x10a72c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x10a72cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_10a730:
    // 0x10a730: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x10a730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10a734:
    // 0x10a734: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10a734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10a738:
    // 0x10a738: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x10a738u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10a73c:
    // 0x10a73c: 0x226202b  sltu        $a0, $s1, $a2
    ctx->pc = 0x10a73cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_10a740:
    // 0x10a740: 0x10800050  beqz        $a0, . + 4 + (0x50 << 2)
label_10a744:
    if (ctx->pc == 0x10A744u) {
        ctx->pc = 0x10A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A740u;
        // 0x10a744: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A748u;
        goto label_10a748;
    }
    ctx->pc = 0x10A740u;
    {
        const bool branch_taken_0x10a740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A740u;
        // 0x10a744: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a740) {
            ctx->pc = 0x10A884u;
            goto label_10a884;
        }
    }
    ctx->pc = 0x10A748u;
label_10a748:
    // 0x10a748: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x10a748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10a74c:
    // 0x10a74c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10a74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10a750:
    // 0x10a750: 0xc05d448  jal         func_175120
label_10a754:
    if (ctx->pc == 0x10A754u) {
        ctx->pc = 0x10A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A750u;
        // 0x10a754: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A758u;
        goto label_10a758;
    }
    ctx->pc = 0x10A750u;
    SET_GPR_U32(ctx, 31, 0x10A758u);
    ctx->pc = 0x10A754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A750u;
    // 0x10a754: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x10A750u, 0x10A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A758u;
label_10a758:
    // 0x10a758: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x10a758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10a75c:
    // 0x10a75c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x10a75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10a760:
    // 0x10a760: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x10a760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10a764:
    // 0x10a764: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10a764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10a768:
    // 0x10a768: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x10a768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_10a76c:
    // 0x10a76c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x10a76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_10a770:
    // 0x10a770: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_10a774:
    if (ctx->pc == 0x10A774u) {
        ctx->pc = 0x10A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A770u;
        // 0x10a774: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A778u;
        goto label_10a778;
    }
    ctx->pc = 0x10A770u;
    {
        const bool branch_taken_0x10a770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A770u;
        // 0x10a774: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a770) {
            ctx->pc = 0x10A7D0u;
            goto label_10a7d0;
        }
    }
    ctx->pc = 0x10A778u;
label_10a778:
    // 0x10a778: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x10a778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_10a77c:
    // 0x10a77c: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x10a77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_10a780:
    // 0x10a780: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x10a780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_10a784:
    // 0x10a784: 0x68a4000f  ldl         $a0, 0xF($a1)
    ctx->pc = 0x10a784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_10a788:
    // 0x10a788: 0x6ca40008  ldr         $a0, 0x8($a1)
    ctx->pc = 0x10a788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_10a78c:
    // 0x10a78c: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x10a78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_10a790:
    // 0x10a790: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x10a790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_10a794:
    // 0x10a794: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x10a794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_10a798:
    // 0x10a798: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x10a798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_10a79c:
    // 0x10a79c: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x10a79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a7a0:
    // 0x10a7a0: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x10a7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a7a4:
    // 0x10a7a4: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x10a7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a7a8:
    // 0x10a7a8: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x10a7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a7ac:
    // 0x10a7ac: 0xb0c70017  sdl         $a3, 0x17($a2)
    ctx->pc = 0x10a7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a7b0:
    // 0x10a7b0: 0xb4c70010  sdr         $a3, 0x10($a2)
    ctx->pc = 0x10a7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a7b4:
    // 0x10a7b4: 0xb0c8001f  sdl         $t0, 0x1F($a2)
    ctx->pc = 0x10a7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a7b8:
    // 0x10a7b8: 0xb4c80018  sdr         $t0, 0x18($a2)
    ctx->pc = 0x10a7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a7bc:
    // 0x10a7bc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x10a7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_10a7c0:
    // 0x10a7c0: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
label_10a7c4:
    if (ctx->pc == 0x10A7C4u) {
        ctx->pc = 0x10A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7C0u;
        // 0x10a7c4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A7C8u;
        goto label_10a7c8;
    }
    ctx->pc = 0x10A7C0u;
    {
        const bool branch_taken_0x10a7c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7C0u;
        // 0x10a7c4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7c0) {
            ctx->pc = 0x10A77Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a77c;
        }
    }
    ctx->pc = 0x10A7C8u;
label_10a7c8:
    // 0x10a7c8: 0x1000000d  b           . + 4 + (0xD << 2)
label_10a7cc:
    if (ctx->pc == 0x10A7CCu) {
        ctx->pc = 0x10A7D0u;
        goto label_10a7d0;
    }
    ctx->pc = 0x10A7C8u;
    {
        const bool branch_taken_0x10a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a7c8) {
            ctx->pc = 0x10A800u;
            goto label_10a800;
        }
    }
    ctx->pc = 0x10A7D0u;
label_10a7d0:
    // 0x10a7d0: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x10a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_10a7d4:
    // 0x10a7d4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x10a7d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_10a7d8:
    // 0x10a7d8: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x10a7d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_10a7dc:
    // 0x10a7dc: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x10a7dcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_10a7e0:
    // 0x10a7e0: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x10a7e0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_10a7e4:
    // 0x10a7e4: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x10a7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_10a7e8:
    // 0x10a7e8: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x10a7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
label_10a7ec:
    // 0x10a7ec: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x10a7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
label_10a7f0:
    // 0x10a7f0: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x10a7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
label_10a7f4:
    // 0x10a7f4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x10a7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_10a7f8:
    // 0x10a7f8: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
label_10a7fc:
    if (ctx->pc == 0x10A7FCu) {
        ctx->pc = 0x10A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7F8u;
        // 0x10a7fc: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A800u;
        goto label_10a800;
    }
    ctx->pc = 0x10A7F8u;
    {
        const bool branch_taken_0x10a7f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7F8u;
        // 0x10a7fc: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7f8) {
            ctx->pc = 0x10A7D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a7d4;
        }
    }
    ctx->pc = 0x10A800u;
label_10a800:
    // 0x10a800: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x10a800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_10a804:
    // 0x10a804: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x10a804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_10a808:
    // 0x10a808: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x10a808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_10a80c:
    // 0x10a80c: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x10a80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a810:
    // 0x10a810: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x10a810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a814:
    // 0x10a814: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x10a814u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_10a818:
    // 0x10a818: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10a818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10a81c:
    // 0x10a81c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10a81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10a820:
    // 0x10a820: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x10a820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10a824:
    // 0x10a824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10a824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a828:
    // 0x10a828: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10a828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_10a82c:
    // 0x10a82c: 0xc05d420  jal         func_175080
label_10a830:
    if (ctx->pc == 0x10A830u) {
        ctx->pc = 0x10A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A82Cu;
        // 0x10a830: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A834u;
        goto label_10a834;
    }
    ctx->pc = 0x10A82Cu;
    SET_GPR_U32(ctx, 31, 0x10A834u);
    ctx->pc = 0x10A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A82Cu;
    // 0x10a830: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x10A82Cu, 0x10A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A834u;
label_10a834:
    // 0x10a834: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10a834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10a838:
    // 0x10a838: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10a838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a83c:
    // 0x10a83c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x10a83cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10a840:
    // 0x10a840: 0xc041164  jal         func_104590
label_10a844:
    if (ctx->pc == 0x10A844u) {
        ctx->pc = 0x10A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A840u;
        // 0x10a844: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A848u;
        goto label_10a848;
    }
    ctx->pc = 0x10A840u;
    SET_GPR_U32(ctx, 31, 0x10A848u);
    ctx->pc = 0x10A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A840u;
    // 0x10a844: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x10A840u, 0x10A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A848u;
label_10a848:
    // 0x10a848: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x10a848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10a84c:
    // 0x10a84c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x10a84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10a850:
    // 0x10a850: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10a850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10a854:
    // 0x10a854: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x10a854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10a858:
    // 0x10a858: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10a858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10a85c:
    // 0x10a85c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x10a85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10a860:
    // 0x10a860: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x10a860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_10a864:
    // 0x10a864: 0x0  nop
    ctx->pc = 0x10a864u;
    // NOP
label_10a868:
    // 0x10a868: 0x0  nop
    ctx->pc = 0x10a868u;
    // NOP
label_10a86c:
    // 0x10a86c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x10a86cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_10a870:
    // 0x10a870: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x10a870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_10a874:
    // 0x10a874: 0xc041128  jal         func_1044A0
label_10a878:
    if (ctx->pc == 0x10A878u) {
        ctx->pc = 0x10A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A874u;
        // 0x10a878: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A87Cu;
        goto label_10a87c;
    }
    ctx->pc = 0x10A874u;
    SET_GPR_U32(ctx, 31, 0x10A87Cu);
    ctx->pc = 0x10A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A874u;
    // 0x10a878: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10A874u, 0x10A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A87Cu;
label_10a87c:
    // 0x10a87c: 0x10000051  b           . + 4 + (0x51 << 2)
label_10a880:
    if (ctx->pc == 0x10A880u) {
        ctx->pc = 0x10A884u;
        goto label_10a884;
    }
    ctx->pc = 0x10A87Cu;
    {
        const bool branch_taken_0x10a87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a87c) {
            ctx->pc = 0x10A9C4u;
            goto label_10a9c4;
        }
    }
    ctx->pc = 0x10A884u;
label_10a884:
    // 0x10a884: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x10a884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_10a888:
    // 0x10a888: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_10a88c:
    if (ctx->pc == 0x10A88Cu) {
        ctx->pc = 0x10A890u;
        goto label_10a890;
    }
    ctx->pc = 0x10A888u;
    {
        const bool branch_taken_0x10a888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a888) {
            ctx->pc = 0x10A9C4u;
            goto label_10a9c4;
        }
    }
    ctx->pc = 0x10A890u;
label_10a890:
    // 0x10a890: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10a890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10a894:
    // 0x10a894: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10a894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10a898:
    // 0x10a898: 0xc05d448  jal         func_175120
label_10a89c:
    if (ctx->pc == 0x10A89Cu) {
        ctx->pc = 0x10A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A898u;
        // 0x10a89c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A8A0u;
        goto label_10a8a0;
    }
    ctx->pc = 0x10A898u;
    SET_GPR_U32(ctx, 31, 0x10A8A0u);
    ctx->pc = 0x10A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A898u;
    // 0x10a89c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x10A898u, 0x10A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8A0u;
label_10a8a0:
    // 0x10a8a0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10a8a4:
    // 0x10a8a4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x10a8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10a8a8:
    // 0x10a8a8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x10a8a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10a8ac:
    // 0x10a8ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10a8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10a8b0:
    // 0x10a8b0: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x10a8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_10a8b4:
    // 0x10a8b4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x10a8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_10a8b8:
    // 0x10a8b8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_10a8bc:
    if (ctx->pc == 0x10A8BCu) {
        ctx->pc = 0x10A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8B8u;
        // 0x10a8bc: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A8C0u;
        goto label_10a8c0;
    }
    ctx->pc = 0x10A8B8u;
    {
        const bool branch_taken_0x10a8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8B8u;
        // 0x10a8bc: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8b8) {
            ctx->pc = 0x10A918u;
            goto label_10a918;
        }
    }
    ctx->pc = 0x10A8C0u;
label_10a8c0:
    // 0x10a8c0: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x10a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_10a8c4:
    // 0x10a8c4: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x10a8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_10a8c8:
    // 0x10a8c8: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x10a8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_10a8cc:
    // 0x10a8cc: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x10a8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_10a8d0:
    // 0x10a8d0: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x10a8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_10a8d4:
    // 0x10a8d4: 0x68a40017  ldl         $a0, 0x17($a1)
    ctx->pc = 0x10a8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_10a8d8:
    // 0x10a8d8: 0x6ca40010  ldr         $a0, 0x10($a1)
    ctx->pc = 0x10a8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_10a8dc:
    // 0x10a8dc: 0x68a7001f  ldl         $a3, 0x1F($a1)
    ctx->pc = 0x10a8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_10a8e0:
    // 0x10a8e0: 0x6ca70018  ldr         $a3, 0x18($a1)
    ctx->pc = 0x10a8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_10a8e4:
    // 0x10a8e4: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x10a8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a8e8:
    // 0x10a8e8: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x10a8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a8ec:
    // 0x10a8ec: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x10a8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a8f0:
    // 0x10a8f0: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x10a8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a8f4:
    // 0x10a8f4: 0xb0c40017  sdl         $a0, 0x17($a2)
    ctx->pc = 0x10a8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a8f8:
    // 0x10a8f8: 0xb4c40010  sdr         $a0, 0x10($a2)
    ctx->pc = 0x10a8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a8fc:
    // 0x10a8fc: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x10a8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a900:
    // 0x10a900: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x10a900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a904:
    // 0x10a904: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x10a904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_10a908:
    // 0x10a908: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
label_10a90c:
    if (ctx->pc == 0x10A90Cu) {
        ctx->pc = 0x10A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A908u;
        // 0x10a90c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A910u;
        goto label_10a910;
    }
    ctx->pc = 0x10A908u;
    {
        const bool branch_taken_0x10a908 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A908u;
        // 0x10a90c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a908) {
            ctx->pc = 0x10A8C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a8c4;
        }
    }
    ctx->pc = 0x10A910u;
label_10a910:
    // 0x10a910: 0x1000000d  b           . + 4 + (0xD << 2)
label_10a914:
    if (ctx->pc == 0x10A914u) {
        ctx->pc = 0x10A918u;
        goto label_10a918;
    }
    ctx->pc = 0x10A910u;
    {
        const bool branch_taken_0x10a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a910) {
            ctx->pc = 0x10A948u;
            goto label_10a948;
        }
    }
    ctx->pc = 0x10A918u;
label_10a918:
    // 0x10a918: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x10a918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_10a91c:
    // 0x10a91c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x10a91cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_10a920:
    // 0x10a920: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x10a920u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_10a924:
    // 0x10a924: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x10a924u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_10a928:
    // 0x10a928: 0xdca70018  ld          $a3, 0x18($a1)
    ctx->pc = 0x10a928u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_10a92c:
    // 0x10a92c: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x10a92cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
label_10a930:
    // 0x10a930: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x10a930u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
label_10a934:
    // 0x10a934: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x10a934u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
label_10a938:
    // 0x10a938: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x10a938u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
label_10a93c:
    // 0x10a93c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x10a93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_10a940:
    // 0x10a940: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
label_10a944:
    if (ctx->pc == 0x10A944u) {
        ctx->pc = 0x10A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A940u;
        // 0x10a944: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A948u;
        goto label_10a948;
    }
    ctx->pc = 0x10A940u;
    {
        const bool branch_taken_0x10a940 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A940u;
        // 0x10a944: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a940) {
            ctx->pc = 0x10A91Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a91c;
        }
    }
    ctx->pc = 0x10A948u;
label_10a948:
    // 0x10a948: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x10a948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_10a94c:
    // 0x10a94c: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x10a94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_10a950:
    // 0x10a950: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x10a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_10a954:
    // 0x10a954: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x10a954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a958:
    // 0x10a958: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x10a958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a95c:
    // 0x10a95c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x10a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_10a960:
    // 0x10a960: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10a960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10a964:
    // 0x10a964: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10a964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10a968:
    // 0x10a968: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10a968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10a96c:
    // 0x10a96c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10a96cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a970:
    // 0x10a970: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10a970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_10a974:
    // 0x10a974: 0xc05d420  jal         func_175080
label_10a978:
    if (ctx->pc == 0x10A978u) {
        ctx->pc = 0x10A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A974u;
        // 0x10a978: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A97Cu;
        goto label_10a97c;
    }
    ctx->pc = 0x10A974u;
    SET_GPR_U32(ctx, 31, 0x10A97Cu);
    ctx->pc = 0x10A978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A974u;
    // 0x10a978: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x10A974u, 0x10A97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A97Cu;
label_10a97c:
    // 0x10a97c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10a97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10a980:
    // 0x10a980: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10a980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a984:
    // 0x10a984: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x10a984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10a988:
    // 0x10a988: 0xc041164  jal         func_104590
label_10a98c:
    if (ctx->pc == 0x10A98Cu) {
        ctx->pc = 0x10A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A988u;
        // 0x10a98c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A990u;
        goto label_10a990;
    }
    ctx->pc = 0x10A988u;
    SET_GPR_U32(ctx, 31, 0x10A990u);
    ctx->pc = 0x10A98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A988u;
    // 0x10a98c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x10A988u, 0x10A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A990u;
label_10a990:
    // 0x10a990: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10a990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10a994:
    // 0x10a994: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x10a994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10a998:
    // 0x10a998: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10a998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10a99c:
    // 0x10a99c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x10a99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10a9a0:
    // 0x10a9a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10a9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10a9a4:
    // 0x10a9a4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x10a9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10a9a8:
    // 0x10a9a8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x10a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_10a9ac:
    // 0x10a9ac: 0x0  nop
    ctx->pc = 0x10a9acu;
    // NOP
label_10a9b0:
    // 0x10a9b0: 0x0  nop
    ctx->pc = 0x10a9b0u;
    // NOP
label_10a9b4:
    // 0x10a9b4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x10a9b4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_10a9b8:
    // 0x10a9b8: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x10a9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_10a9bc:
    // 0x10a9bc: 0xc041128  jal         func_1044A0
label_10a9c0:
    if (ctx->pc == 0x10A9C0u) {
        ctx->pc = 0x10A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9BCu;
        // 0x10a9c0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A9C4u;
        goto label_10a9c4;
    }
    ctx->pc = 0x10A9BCu;
    SET_GPR_U32(ctx, 31, 0x10A9C4u);
    ctx->pc = 0x10A9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9BCu;
    // 0x10a9c0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10A9BCu, 0x10A9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9C4u;
label_10a9c4:
    // 0x10a9c4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x10a9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_10a9c8:
    // 0x10a9c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x10a9c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_10a9cc:
    // 0x10a9cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10a9d0:
    // 0x10a9d0: 0x0  nop
    ctx->pc = 0x10a9d0u;
    // NOP
label_10a9d4:
    // 0x10a9d4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x10a9d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10a9d8:
    // 0x10a9d8: 0x0  nop
    ctx->pc = 0x10a9d8u;
    // NOP
label_10a9dc:
    // 0x10a9dc: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_10a9e0:
    if (ctx->pc == 0x10A9E0u) {
        ctx->pc = 0x10A9E4u;
        goto label_10a9e4;
    }
    ctx->pc = 0x10A9DCu;
    {
        const bool branch_taken_0x10a9dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10a9dc) {
            ctx->pc = 0x10AA74u;
            goto label_10aa74;
        }
    }
    ctx->pc = 0x10A9E4u;
label_10a9e4:
    // 0x10a9e4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10a9e8:
    // 0x10a9e8: 0xc041128  jal         func_1044A0
label_10a9ec:
    if (ctx->pc == 0x10A9ECu) {
        ctx->pc = 0x10A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9E8u;
        // 0x10a9ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A9F0u;
        goto label_10a9f0;
    }
    ctx->pc = 0x10A9E8u;
    SET_GPR_U32(ctx, 31, 0x10A9F0u);
    ctx->pc = 0x10A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9E8u;
    // 0x10a9ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10A9E8u, 0x10A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9F0u;
label_10a9f0:
    // 0x10a9f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10a9f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10a9f4:
    // 0x10a9f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10a9f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_10a9f8:
    // 0x10a9f8: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x10a9f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10a9fc:
    // 0x10a9fc: 0x0  nop
    ctx->pc = 0x10a9fcu;
    // NOP
label_10aa00:
    // 0x10aa00: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
label_10aa04:
    if (ctx->pc == 0x10AA04u) {
        ctx->pc = 0x10AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA00u;
        // 0x10aa04: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA08u;
        goto label_10aa08;
    }
    ctx->pc = 0x10AA00u;
    {
        const bool branch_taken_0x10aa00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10aa00) {
            ctx->pc = 0x10AA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AA00u;
            // 0x10aa04: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AA58u;
            goto label_10aa58;
        }
    }
    ctx->pc = 0x10AA08u;
label_10aa08:
    // 0x10aa08: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x10aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_10aa0c:
    // 0x10aa0c: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x10aa0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_10aa10:
    // 0x10aa10: 0xc0e409a  jal         func_390268
label_10aa14:
    if (ctx->pc == 0x10AA14u) {
        ctx->pc = 0x10AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA10u;
        // 0x10aa14: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA18u;
        goto label_10aa18;
    }
    ctx->pc = 0x10AA10u;
    SET_GPR_U32(ctx, 31, 0x10AA18u);
    ctx->pc = 0x10AA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA10u;
    // 0x10aa14: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x10AA10u, 0x10AA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA18u;
label_10aa18:
    // 0x10aa18: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10aa1c:
    // 0x10aa1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10aa1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10aa20:
    // 0x10aa20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10aa20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10aa24:
    // 0x10aa24: 0xc04115c  jal         func_104570
label_10aa28:
    if (ctx->pc == 0x10AA28u) {
        ctx->pc = 0x10AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA24u;
        // 0x10aa28: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA2Cu;
        goto label_10aa2c;
    }
    ctx->pc = 0x10AA24u;
    SET_GPR_U32(ctx, 31, 0x10AA2Cu);
    ctx->pc = 0x10AA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA24u;
    // 0x10aa28: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x10AA24u, 0x10AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA2Cu;
label_10aa2c:
    // 0x10aa2c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10aa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10aa30:
    // 0x10aa30: 0xc041128  jal         func_1044A0
label_10aa34:
    if (ctx->pc == 0x10AA34u) {
        ctx->pc = 0x10AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA30u;
        // 0x10aa34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA38u;
        goto label_10aa38;
    }
    ctx->pc = 0x10AA30u;
    SET_GPR_U32(ctx, 31, 0x10AA38u);
    ctx->pc = 0x10AA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA30u;
    // 0x10aa34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10AA30u, 0x10AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA38u;
label_10aa38:
    // 0x10aa38: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_10aa3c:
    if (ctx->pc == 0x10AA3Cu) {
        ctx->pc = 0x10AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA38u;
        // 0x10aa3c: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA40u;
        goto label_10aa40;
    }
    ctx->pc = 0x10AA38u;
    {
        const bool branch_taken_0x10aa38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x10aa38) {
            ctx->pc = 0x10AA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AA38u;
            // 0x10aa3c: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AA58u;
            goto label_10aa58;
        }
    }
    ctx->pc = 0x10AA40u;
label_10aa40:
    // 0x10aa40: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x10aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_10aa44:
    // 0x10aa44: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_10aa48:
    if (ctx->pc == 0x10AA48u) {
        ctx->pc = 0x10AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA44u;
        // 0x10aa48: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA4Cu;
        goto label_10aa4c;
    }
    ctx->pc = 0x10AA44u;
    {
        const bool branch_taken_0x10aa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10aa44) {
            ctx->pc = 0x10AA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AA44u;
            // 0x10aa48: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AA58u;
            goto label_10aa58;
        }
    }
    ctx->pc = 0x10AA4Cu;
label_10aa4c:
    // 0x10aa4c: 0x40f809  jalr        $v0
label_10aa50:
    if (ctx->pc == 0x10AA50u) {
        ctx->pc = 0x10AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA4Cu;
        // 0x10aa50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA54u;
        goto label_10aa54;
    }
    ctx->pc = 0x10AA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10AA54u);
        ctx->pc = 0x10AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA4Cu;
        // 0x10aa50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AA4Cu, 0x10AA54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10AA54u;
label_10aa54:
    // 0x10aa54: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x10aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10aa58:
    // 0x10aa58: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x10aa58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_10aa5c:
    // 0x10aa5c: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x10aa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_10aa60:
    // 0x10aa60: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x10aa60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_10aa64:
    // 0x10aa64: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10aa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10aa68:
    // 0x10aa68: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x10aa68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_10aa6c:
    // 0x10aa6c: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_10aa70:
    if (ctx->pc == 0x10AA70u) {
        ctx->pc = 0x10AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA6Cu;
        // 0x10aa70: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA74u;
        goto label_10aa74;
    }
    ctx->pc = 0x10AA6Cu;
    {
        const bool branch_taken_0x10aa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA6Cu;
        // 0x10aa70: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa6c) {
            ctx->pc = 0x10AD78u;
            goto label_10ad78;
        }
    }
    ctx->pc = 0x10AA74u;
label_10aa74:
    // 0x10aa74: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x10aa74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
label_10aa78:
    // 0x10aa78: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x10aa78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_10aa7c:
    // 0x10aa7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10aa7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10aa80:
    // 0x10aa80: 0x0  nop
    ctx->pc = 0x10aa80u;
    // NOP
label_10aa84:
    // 0x10aa84: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x10aa84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10aa88:
    // 0x10aa88: 0x0  nop
    ctx->pc = 0x10aa88u;
    // NOP
label_10aa8c:
    // 0x10aa8c: 0x45000090  bc1f        . + 4 + (0x90 << 2)
label_10aa90:
    if (ctx->pc == 0x10AA90u) {
        ctx->pc = 0x10AA94u;
        goto label_10aa94;
    }
    ctx->pc = 0x10AA8Cu;
    {
        const bool branch_taken_0x10aa8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10aa8c) {
            ctx->pc = 0x10ACD0u;
            goto label_10acd0;
        }
    }
    ctx->pc = 0x10AA94u;
label_10aa94:
    // 0x10aa94: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x10aa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10aa98:
    // 0x10aa98: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x10aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10aa9c:
    // 0x10aa9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10aa9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10aaa0:
    // 0x10aaa0: 0x0  nop
    ctx->pc = 0x10aaa0u;
    // NOP
label_10aaa4:
    // 0x10aaa4: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_10aaa8:
    if (ctx->pc == 0x10AAA8u) {
        ctx->pc = 0x10AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAA4u;
        // 0x10aaa8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AAACu;
        goto label_10aaac;
    }
    ctx->pc = 0x10AAA4u;
    {
        const bool branch_taken_0x10aaa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10aaa4) {
            ctx->pc = 0x10AAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AAA4u;
            // 0x10aaa8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AACCu;
            goto label_10aacc;
        }
    }
    ctx->pc = 0x10AAACu;
label_10aaac:
    // 0x10aaac: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x10aaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
label_10aab0:
    // 0x10aab0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10aab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10aab4:
    // 0x10aab4: 0x0  nop
    ctx->pc = 0x10aab4u;
    // NOP
label_10aab8:
    // 0x10aab8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x10aab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10aabc:
    // 0x10aabc: 0x0  nop
    ctx->pc = 0x10aabcu;
    // NOP
label_10aac0:
    // 0x10aac0: 0x45020031  bc1fl       . + 4 + (0x31 << 2)
label_10aac4:
    if (ctx->pc == 0x10AAC4u) {
        ctx->pc = 0x10AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAC0u;
        // 0x10aac4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AAC8u;
        goto label_10aac8;
    }
    ctx->pc = 0x10AAC0u;
    {
        const bool branch_taken_0x10aac0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10aac0) {
            ctx->pc = 0x10AAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AAC0u;
            // 0x10aac4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AB88u;
            goto label_10ab88;
        }
    }
    ctx->pc = 0x10AAC8u;
label_10aac8:
    // 0x10aac8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10aacc:
    // 0x10aacc: 0xc041128  jal         func_1044A0
label_10aad0:
    if (ctx->pc == 0x10AAD0u) {
        ctx->pc = 0x10AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AACCu;
        // 0x10aad0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AAD4u;
        goto label_10aad4;
    }
    ctx->pc = 0x10AACCu;
    SET_GPR_U32(ctx, 31, 0x10AAD4u);
    ctx->pc = 0x10AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AACCu;
    // 0x10aad0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10AACCu, 0x10AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAD4u;
label_10aad4:
    // 0x10aad4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x10aad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_10aad8:
    // 0x10aad8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10aad8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_10aadc:
    // 0x10aadc: 0x4603a032  c.eq.s      $f20, $f3
    ctx->pc = 0x10aadcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10aae0:
    // 0x10aae0: 0x0  nop
    ctx->pc = 0x10aae0u;
    // NOP
label_10aae4:
    // 0x10aae4: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
label_10aae8:
    if (ctx->pc == 0x10AAE8u) {
        ctx->pc = 0x10AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAE4u;
        // 0x10aae8: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AAECu;
        goto label_10aaec;
    }
    ctx->pc = 0x10AAE4u;
    {
        const bool branch_taken_0x10aae4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10aae4) {
            ctx->pc = 0x10AAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AAE4u;
            // 0x10aae8: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AB38u;
            goto label_10ab38;
        }
    }
    ctx->pc = 0x10AAECu;
label_10aaec:
    // 0x10aaec: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x10aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_10aaf0:
    // 0x10aaf0: 0x37a40008  ori         $a0, $sp, 0x8
    ctx->pc = 0x10aaf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_10aaf4:
    // 0x10aaf4: 0xc0e409a  jal         func_390268
label_10aaf8:
    if (ctx->pc == 0x10AAF8u) {
        ctx->pc = 0x10AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAF4u;
        // 0x10aaf8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AAFCu;
        goto label_10aafc;
    }
    ctx->pc = 0x10AAF4u;
    SET_GPR_U32(ctx, 31, 0x10AAFCu);
    ctx->pc = 0x10AAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAF4u;
    // 0x10aaf8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x10AAF4u, 0x10AAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAFCu;
label_10aafc:
    // 0x10aafc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10aafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10ab00:
    // 0x10ab00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10ab00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10ab04:
    // 0x10ab04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ab04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ab08:
    // 0x10ab08: 0xc04115c  jal         func_104570
label_10ab0c:
    if (ctx->pc == 0x10AB0Cu) {
        ctx->pc = 0x10AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB08u;
        // 0x10ab0c: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB10u;
        goto label_10ab10;
    }
    ctx->pc = 0x10AB08u;
    SET_GPR_U32(ctx, 31, 0x10AB10u);
    ctx->pc = 0x10AB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB08u;
    // 0x10ab0c: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x10AB08u, 0x10AB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB10u;
label_10ab10:
    // 0x10ab10: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10ab14:
    // 0x10ab14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ab14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ab18:
    // 0x10ab18: 0xc04115c  jal         func_104570
label_10ab1c:
    if (ctx->pc == 0x10AB1Cu) {
        ctx->pc = 0x10AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB18u;
        // 0x10ab1c: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB20u;
        goto label_10ab20;
    }
    ctx->pc = 0x10AB18u;
    SET_GPR_U32(ctx, 31, 0x10AB20u);
    ctx->pc = 0x10AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB18u;
    // 0x10ab1c: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x10AB18u, 0x10AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB20u;
label_10ab20:
    // 0x10ab20: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10ab24:
    // 0x10ab24: 0xc041128  jal         func_1044A0
label_10ab28:
    if (ctx->pc == 0x10AB28u) {
        ctx->pc = 0x10AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB24u;
        // 0x10ab28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB2Cu;
        goto label_10ab2c;
    }
    ctx->pc = 0x10AB24u;
    SET_GPR_U32(ctx, 31, 0x10AB2Cu);
    ctx->pc = 0x10AB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB24u;
    // 0x10ab28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10AB24u, 0x10AB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB2Cu;
label_10ab2c:
    // 0x10ab2c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10ab30:
    // 0x10ab30: 0x1000002f  b           . + 4 + (0x2F << 2)
label_10ab34:
    if (ctx->pc == 0x10AB34u) {
        ctx->pc = 0x10AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB30u;
        // 0x10ab34: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB38u;
        goto label_10ab38;
    }
    ctx->pc = 0x10AB30u;
    {
        const bool branch_taken_0x10ab30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB30u;
        // 0x10ab34: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab30) {
            ctx->pc = 0x10ABF0u;
            goto label_10abf0;
        }
    }
    ctx->pc = 0x10AB38u;
label_10ab38:
    // 0x10ab38: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10ab3c:
    // 0x10ab3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10ab40:
    // 0x10ab40: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x10ab40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10ab44:
    // 0x10ab44: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x10ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10ab48:
    // 0x10ab48: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x10ab48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_10ab4c:
    // 0x10ab4c: 0x0  nop
    ctx->pc = 0x10ab4cu;
    // NOP
label_10ab50:
    // 0x10ab50: 0x0  nop
    ctx->pc = 0x10ab50u;
    // NOP
label_10ab54:
    // 0x10ab54: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x10ab54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10ab58:
    // 0x10ab58: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x10ab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_10ab5c:
    // 0x10ab5c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x10ab5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10ab60:
    // 0x10ab60: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x10ab60u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10ab64:
    // 0x10ab64: 0x4602a301  sub.s       $f12, $f20, $f2
    ctx->pc = 0x10ab64u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_10ab68:
    // 0x10ab68: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x10ab68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10ab6c:
    // 0x10ab6c: 0x0  nop
    ctx->pc = 0x10ab6cu;
    // NOP
label_10ab70:
    // 0x10ab70: 0x45000049  bc1f        . + 4 + (0x49 << 2)
label_10ab74:
    if (ctx->pc == 0x10AB74u) {
        ctx->pc = 0x10AB78u;
        goto label_10ab78;
    }
    ctx->pc = 0x10AB70u;
    {
        const bool branch_taken_0x10ab70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10ab70) {
            ctx->pc = 0x10AC98u;
            goto label_10ac98;
        }
    }
    ctx->pc = 0x10AB78u;
label_10ab78:
    // 0x10ab78: 0xc04115c  jal         func_104570
label_10ab7c:
    if (ctx->pc == 0x10AB7Cu) {
        ctx->pc = 0x10AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB78u;
        // 0x10ab7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB80u;
        goto label_10ab80;
    }
    ctx->pc = 0x10AB78u;
    SET_GPR_U32(ctx, 31, 0x10AB80u);
    ctx->pc = 0x10AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB78u;
    // 0x10ab7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x10AB78u, 0x10AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB80u;
label_10ab80:
    // 0x10ab80: 0x10000044  b           . + 4 + (0x44 << 2)
label_10ab84:
    if (ctx->pc == 0x10AB84u) {
        ctx->pc = 0x10AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB80u;
        // 0x10ab84: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB88u;
        goto label_10ab88;
    }
    ctx->pc = 0x10AB80u;
    {
        const bool branch_taken_0x10ab80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB80u;
        // 0x10ab84: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab80) {
            ctx->pc = 0x10AC94u;
            goto label_10ac94;
        }
    }
    ctx->pc = 0x10AB88u;
label_10ab88:
    // 0x10ab88: 0xc041128  jal         func_1044A0
label_10ab8c:
    if (ctx->pc == 0x10AB8Cu) {
        ctx->pc = 0x10AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB88u;
        // 0x10ab8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB90u;
        goto label_10ab90;
    }
    ctx->pc = 0x10AB88u;
    SET_GPR_U32(ctx, 31, 0x10AB90u);
    ctx->pc = 0x10AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB88u;
    // 0x10ab8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10AB88u, 0x10AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB90u;
label_10ab90:
    // 0x10ab90: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x10ab90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_10ab94:
    // 0x10ab94: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10ab94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_10ab98:
    // 0x10ab98: 0x4603a032  c.eq.s      $f20, $f3
    ctx->pc = 0x10ab98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10ab9c:
    // 0x10ab9c: 0x0  nop
    ctx->pc = 0x10ab9cu;
    // NOP
label_10aba0:
    // 0x10aba0: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
label_10aba4:
    if (ctx->pc == 0x10ABA4u) {
        ctx->pc = 0x10ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABA0u;
        // 0x10aba4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABA8u;
        goto label_10aba8;
    }
    ctx->pc = 0x10ABA0u;
    {
        const bool branch_taken_0x10aba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10aba0) {
            ctx->pc = 0x10ABA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10ABA0u;
            // 0x10aba4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AC48u;
            goto label_10ac48;
        }
    }
    ctx->pc = 0x10ABA8u;
label_10aba8:
    // 0x10aba8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x10aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_10abac:
    // 0x10abac: 0x37a4000c  ori         $a0, $sp, 0xC
    ctx->pc = 0x10abacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_10abb0:
    // 0x10abb0: 0xc0e409a  jal         func_390268
label_10abb4:
    if (ctx->pc == 0x10ABB4u) {
        ctx->pc = 0x10ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABB0u;
        // 0x10abb4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABB8u;
        goto label_10abb8;
    }
    ctx->pc = 0x10ABB0u;
    SET_GPR_U32(ctx, 31, 0x10ABB8u);
    ctx->pc = 0x10ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABB0u;
    // 0x10abb4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x10ABB0u, 0x10ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABB8u;
label_10abb8:
    // 0x10abb8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10abbc:
    // 0x10abbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10abbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10abc0:
    // 0x10abc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10abc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10abc4:
    // 0x10abc4: 0xc04115c  jal         func_104570
label_10abc8:
    if (ctx->pc == 0x10ABC8u) {
        ctx->pc = 0x10ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABC4u;
        // 0x10abc8: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABCCu;
        goto label_10abcc;
    }
    ctx->pc = 0x10ABC4u;
    SET_GPR_U32(ctx, 31, 0x10ABCCu);
    ctx->pc = 0x10ABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABC4u;
    // 0x10abc8: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x10ABC4u, 0x10ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABCCu;
label_10abcc:
    // 0x10abcc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10abccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10abd0:
    // 0x10abd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10abd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10abd4:
    // 0x10abd4: 0xc04115c  jal         func_104570
label_10abd8:
    if (ctx->pc == 0x10ABD8u) {
        ctx->pc = 0x10ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABD4u;
        // 0x10abd8: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABDCu;
        goto label_10abdc;
    }
    ctx->pc = 0x10ABD4u;
    SET_GPR_U32(ctx, 31, 0x10ABDCu);
    ctx->pc = 0x10ABD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABD4u;
    // 0x10abd8: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x10ABD4u, 0x10ABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABDCu;
label_10abdc:
    // 0x10abdc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10abdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10abe0:
    // 0x10abe0: 0xc041128  jal         func_1044A0
label_10abe4:
    if (ctx->pc == 0x10ABE4u) {
        ctx->pc = 0x10ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABE0u;
        // 0x10abe4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABE8u;
        goto label_10abe8;
    }
    ctx->pc = 0x10ABE0u;
    SET_GPR_U32(ctx, 31, 0x10ABE8u);
    ctx->pc = 0x10ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABE0u;
    // 0x10abe4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10ABE0u, 0x10ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABE8u;
label_10abe8:
    // 0x10abe8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x10abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10abec:
    // 0x10abec: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10abecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10abf0:
    // 0x10abf0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x10abf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_10abf4:
    // 0x10abf4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x10abf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10abf8:
    // 0x10abf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10abf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10abfc:
    // 0x10abfc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x10abfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10ac00:
    // 0x10ac00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10ac04:
    // 0x10ac04: 0x0  nop
    ctx->pc = 0x10ac04u;
    // NOP
label_10ac08:
    // 0x10ac08: 0x0  nop
    ctx->pc = 0x10ac08u;
    // NOP
label_10ac0c:
    // 0x10ac0c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x10ac0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10ac10:
    // 0x10ac10: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x10ac10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_10ac14:
    // 0x10ac14: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x10ac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10ac18:
    // 0x10ac18: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x10ac18u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10ac1c:
    // 0x10ac1c: 0xc041128  jal         func_1044A0
label_10ac20:
    if (ctx->pc == 0x10AC20u) {
        ctx->pc = 0x10AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC1Cu;
        // 0x10ac20: 0x460ca301  sub.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AC24u;
        goto label_10ac24;
    }
    ctx->pc = 0x10AC1Cu;
    SET_GPR_U32(ctx, 31, 0x10AC24u);
    ctx->pc = 0x10AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC1Cu;
    // 0x10ac20: 0x460ca301  sub.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10AC1Cu, 0x10AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC24u;
label_10ac24:
    // 0x10ac24: 0x52200023  beql        $s1, $zero, . + 4 + (0x23 << 2)
label_10ac28:
    if (ctx->pc == 0x10AC28u) {
        ctx->pc = 0x10AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC24u;
        // 0x10ac28: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AC2Cu;
        goto label_10ac2c;
    }
    ctx->pc = 0x10AC24u;
    {
        const bool branch_taken_0x10ac24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ac24) {
            ctx->pc = 0x10AC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AC24u;
            // 0x10ac28: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ACB4u;
            goto label_10acb4;
        }
    }
    ctx->pc = 0x10AC2Cu;
label_10ac2c:
    // 0x10ac2c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x10ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_10ac30:
    // 0x10ac30: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_10ac34:
    if (ctx->pc == 0x10AC34u) {
        ctx->pc = 0x10AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC30u;
        // 0x10ac34: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AC38u;
        goto label_10ac38;
    }
    ctx->pc = 0x10AC30u;
    {
        const bool branch_taken_0x10ac30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ac30) {
            ctx->pc = 0x10AC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AC30u;
            // 0x10ac34: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ACB4u;
            goto label_10acb4;
        }
    }
    ctx->pc = 0x10AC38u;
label_10ac38:
    // 0x10ac38: 0x40f809  jalr        $v0
label_10ac3c:
    if (ctx->pc == 0x10AC3Cu) {
        ctx->pc = 0x10AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC38u;
        // 0x10ac3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AC40u;
        goto label_10ac40;
    }
    ctx->pc = 0x10AC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10AC40u);
        ctx->pc = 0x10AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC38u;
        // 0x10ac3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AC38u, 0x10AC40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10AC40u;
label_10ac40:
    // 0x10ac40: 0x1000001c  b           . + 4 + (0x1C << 2)
label_10ac44:
    if (ctx->pc == 0x10AC44u) {
        ctx->pc = 0x10AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC40u;
        // 0x10ac44: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AC48u;
        goto label_10ac48;
    }
    ctx->pc = 0x10AC40u;
    {
        const bool branch_taken_0x10ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC40u;
        // 0x10ac44: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac40) {
            ctx->pc = 0x10ACB4u;
            goto label_10acb4;
        }
    }
    ctx->pc = 0x10AC48u;
label_10ac48:
    // 0x10ac48: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10ac4c:
    // 0x10ac4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10ac50:
    // 0x10ac50: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x10ac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10ac54:
    // 0x10ac54: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x10ac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10ac58:
    // 0x10ac58: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x10ac58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_10ac5c:
    // 0x10ac5c: 0x0  nop
    ctx->pc = 0x10ac5cu;
    // NOP
label_10ac60:
    // 0x10ac60: 0x0  nop
    ctx->pc = 0x10ac60u;
    // NOP
label_10ac64:
    // 0x10ac64: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x10ac64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10ac68:
    // 0x10ac68: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x10ac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_10ac6c:
    // 0x10ac6c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x10ac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10ac70:
    // 0x10ac70: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x10ac70u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10ac74:
    // 0x10ac74: 0x4602a301  sub.s       $f12, $f20, $f2
    ctx->pc = 0x10ac74u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_10ac78:
    // 0x10ac78: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x10ac78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10ac7c:
    // 0x10ac7c: 0x0  nop
    ctx->pc = 0x10ac7cu;
    // NOP
label_10ac80:
    // 0x10ac80: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_10ac84:
    if (ctx->pc == 0x10AC84u) {
        ctx->pc = 0x10AC88u;
        goto label_10ac88;
    }
    ctx->pc = 0x10AC80u;
    {
        const bool branch_taken_0x10ac80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10ac80) {
            ctx->pc = 0x10ACA8u;
            goto label_10aca8;
        }
    }
    ctx->pc = 0x10AC88u;
label_10ac88:
    // 0x10ac88: 0xc04115c  jal         func_104570
label_10ac8c:
    if (ctx->pc == 0x10AC8Cu) {
        ctx->pc = 0x10AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC88u;
        // 0x10ac8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AC90u;
        goto label_10ac90;
    }
    ctx->pc = 0x10AC88u;
    SET_GPR_U32(ctx, 31, 0x10AC90u);
    ctx->pc = 0x10AC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC88u;
    // 0x10ac8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x10AC88u, 0x10AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC90u;
label_10ac90:
    // 0x10ac90: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10ac94:
    // 0x10ac94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10ac94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10ac98:
    // 0x10ac98: 0xc041128  jal         func_1044A0
label_10ac9c:
    if (ctx->pc == 0x10AC9Cu) {
        ctx->pc = 0x10ACA0u;
        goto label_10aca0;
    }
    ctx->pc = 0x10AC98u;
    SET_GPR_U32(ctx, 31, 0x10ACA0u);
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10AC98u, 0x10ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ACA0u;
label_10aca0:
    // 0x10aca0: 0x10000004  b           . + 4 + (0x4 << 2)
label_10aca4:
    if (ctx->pc == 0x10ACA4u) {
        ctx->pc = 0x10ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACA0u;
        // 0x10aca4: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ACA8u;
        goto label_10aca8;
    }
    ctx->pc = 0x10ACA0u;
    {
        const bool branch_taken_0x10aca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACA0u;
        // 0x10aca4: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aca0) {
            ctx->pc = 0x10ACB4u;
            goto label_10acb4;
        }
    }
    ctx->pc = 0x10ACA8u;
label_10aca8:
    // 0x10aca8: 0xc041128  jal         func_1044A0
label_10acac:
    if (ctx->pc == 0x10ACACu) {
        ctx->pc = 0x10ACB0u;
        goto label_10acb0;
    }
    ctx->pc = 0x10ACA8u;
    SET_GPR_U32(ctx, 31, 0x10ACB0u);
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10ACA8u, 0x10ACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ACB0u;
label_10acb0:
    // 0x10acb0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x10acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10acb4:
    // 0x10acb4: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x10acb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_10acb8:
    // 0x10acb8: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x10acb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_10acbc:
    // 0x10acbc: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x10acbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_10acc0:
    // 0x10acc0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10acc4:
    // 0x10acc4: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x10acc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_10acc8:
    // 0x10acc8: 0x1000002b  b           . + 4 + (0x2B << 2)
label_10accc:
    if (ctx->pc == 0x10ACCCu) {
        ctx->pc = 0x10ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACC8u;
        // 0x10accc: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ACD0u;
        goto label_10acd0;
    }
    ctx->pc = 0x10ACC8u;
    {
        const bool branch_taken_0x10acc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACC8u;
        // 0x10accc: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10acc8) {
            ctx->pc = 0x10AD78u;
            goto label_10ad78;
        }
    }
    ctx->pc = 0x10ACD0u;
label_10acd0:
    // 0x10acd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10acd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10acd4:
    // 0x10acd4: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x10acd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_10acd8:
    // 0x10acd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10acd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10acdc:
    // 0x10acdc: 0x0  nop
    ctx->pc = 0x10acdcu;
    // NOP
label_10ace0:
    // 0x10ace0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x10ace0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10ace4:
    // 0x10ace4: 0x0  nop
    ctx->pc = 0x10ace4u;
    // NOP
label_10ace8:
    // 0x10ace8: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
label_10acec:
    if (ctx->pc == 0x10ACECu) {
        ctx->pc = 0x10ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACE8u;
        // 0x10acec: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ACF0u;
        goto label_10acf0;
    }
    ctx->pc = 0x10ACE8u;
    {
        const bool branch_taken_0x10ace8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10ace8) {
            ctx->pc = 0x10ACECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10ACE8u;
            // 0x10acec: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AD80u;
            goto label_10ad80;
        }
    }
    ctx->pc = 0x10ACF0u;
label_10acf0:
    // 0x10acf0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10acf4:
    // 0x10acf4: 0xc041128  jal         func_1044A0
label_10acf8:
    if (ctx->pc == 0x10ACF8u) {
        ctx->pc = 0x10ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACF4u;
        // 0x10acf8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ACFCu;
        goto label_10acfc;
    }
    ctx->pc = 0x10ACF4u;
    SET_GPR_U32(ctx, 31, 0x10ACFCu);
    ctx->pc = 0x10ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACF4u;
    // 0x10acf8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10ACF4u, 0x10ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ACFCu;
label_10acfc:
    // 0x10acfc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10acfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10ad00:
    // 0x10ad00: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10ad00u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_10ad04:
    // 0x10ad04: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x10ad04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10ad08:
    // 0x10ad08: 0x0  nop
    ctx->pc = 0x10ad08u;
    // NOP
label_10ad0c:
    // 0x10ad0c: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
label_10ad10:
    if (ctx->pc == 0x10AD10u) {
        ctx->pc = 0x10AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD0Cu;
        // 0x10ad10: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD14u;
        goto label_10ad14;
    }
    ctx->pc = 0x10AD0Cu;
    {
        const bool branch_taken_0x10ad0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10ad0c) {
            ctx->pc = 0x10AD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AD0Cu;
            // 0x10ad10: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AD60u;
            goto label_10ad60;
        }
    }
    ctx->pc = 0x10AD14u;
label_10ad14:
    // 0x10ad14: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x10ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_10ad18:
    // 0x10ad18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x10ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_10ad1c:
    // 0x10ad1c: 0xc0e409a  jal         func_390268
label_10ad20:
    if (ctx->pc == 0x10AD20u) {
        ctx->pc = 0x10AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD1Cu;
        // 0x10ad20: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD24u;
        goto label_10ad24;
    }
    ctx->pc = 0x10AD1Cu;
    SET_GPR_U32(ctx, 31, 0x10AD24u);
    ctx->pc = 0x10AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD1Cu;
    // 0x10ad20: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x10AD1Cu, 0x10AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD24u;
label_10ad24:
    // 0x10ad24: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_10ad28:
    if (ctx->pc == 0x10AD28u) {
        ctx->pc = 0x10AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD24u;
        // 0x10ad28: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD2Cu;
        goto label_10ad2c;
    }
    ctx->pc = 0x10AD24u;
    {
        const bool branch_taken_0x10ad24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ad24) {
            ctx->pc = 0x10AD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AD24u;
            // 0x10ad28: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AD44u;
            goto label_10ad44;
        }
    }
    ctx->pc = 0x10AD2Cu;
label_10ad2c:
    // 0x10ad2c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x10ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_10ad30:
    // 0x10ad30: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_10ad34:
    if (ctx->pc == 0x10AD34u) {
        ctx->pc = 0x10AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD30u;
        // 0x10ad34: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD38u;
        goto label_10ad38;
    }
    ctx->pc = 0x10AD30u;
    {
        const bool branch_taken_0x10ad30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ad30) {
            ctx->pc = 0x10AD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AD30u;
            // 0x10ad34: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AD44u;
            goto label_10ad44;
        }
    }
    ctx->pc = 0x10AD38u;
label_10ad38:
    // 0x10ad38: 0x60f809  jalr        $v1
label_10ad3c:
    if (ctx->pc == 0x10AD3Cu) {
        ctx->pc = 0x10AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD38u;
        // 0x10ad3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD40u;
        goto label_10ad40;
    }
    ctx->pc = 0x10AD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10AD40u);
        ctx->pc = 0x10AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD38u;
        // 0x10ad3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AD38u, 0x10AD40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10AD40u;
label_10ad40:
    // 0x10ad40: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10ad44:
    // 0x10ad44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ad44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ad48:
    // 0x10ad48: 0xc04115c  jal         func_104570
label_10ad4c:
    if (ctx->pc == 0x10AD4Cu) {
        ctx->pc = 0x10AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD48u;
        // 0x10ad4c: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD50u;
        goto label_10ad50;
    }
    ctx->pc = 0x10AD48u;
    SET_GPR_U32(ctx, 31, 0x10AD50u);
    ctx->pc = 0x10AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD48u;
    // 0x10ad4c: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x10AD48u, 0x10AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD50u;
label_10ad50:
    // 0x10ad50: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10ad54:
    // 0x10ad54: 0xc041128  jal         func_1044A0
label_10ad58:
    if (ctx->pc == 0x10AD58u) {
        ctx->pc = 0x10AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD54u;
        // 0x10ad58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD5Cu;
        goto label_10ad5c;
    }
    ctx->pc = 0x10AD54u;
    SET_GPR_U32(ctx, 31, 0x10AD5Cu);
    ctx->pc = 0x10AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD54u;
    // 0x10ad58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x10AD54u, 0x10AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD5Cu;
label_10ad5c:
    // 0x10ad5c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x10ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10ad60:
    // 0x10ad60: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x10ad60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_10ad64:
    // 0x10ad64: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x10ad64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_10ad68:
    // 0x10ad68: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x10ad68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_10ad6c:
    // 0x10ad6c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10ad70:
    // 0x10ad70: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x10ad70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_10ad74:
    // 0x10ad74: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x10ad74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_10ad78:
    // 0x10ad78: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x10ad78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_10ad7c:
    // 0x10ad7c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x10ad7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10ad80:
    // 0x10ad80: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x10ad80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10ad84:
    // 0x10ad84: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x10ad84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10ad88:
    // 0x10ad88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10ad88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10ad8c:
    // 0x10ad8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ad8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10ad90:
    // 0x10ad90: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x10ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_10ad94:
    // 0x10ad94: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x10ad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_10ad98:
    // 0x10ad98: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x10ad98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10ad9c:
    // 0x10ad9c: 0x3e00008  jr          $ra
label_10ada0:
    if (ctx->pc == 0x10ADA0u) {
        ctx->pc = 0x10ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD9Cu;
        // 0x10ada0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ADA4u;
        goto label_10ada4;
    }
    ctx->pc = 0x10AD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD9Cu;
        // 0x10ada0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ADA4u;
label_10ada4:
    // 0x10ada4: 0x0  nop
    ctx->pc = 0x10ada4u;
    // NOP
    ctx->pc = 0x10ada8u;
}
