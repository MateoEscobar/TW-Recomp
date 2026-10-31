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

// Function: sub_0026A6D0
// Address: 0x26a6d0 - 0x26adf0
void sub_0026A6D0_0x26a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A6D0_0x26a6d0");
#endif

    switch (ctx->pc) {
        case 0x26a6d0u: goto label_26a6d0;
        case 0x26a6d4u: goto label_26a6d4;
        case 0x26a6d8u: goto label_26a6d8;
        case 0x26a6dcu: goto label_26a6dc;
        case 0x26a6e0u: goto label_26a6e0;
        case 0x26a6e4u: goto label_26a6e4;
        case 0x26a6e8u: goto label_26a6e8;
        case 0x26a6ecu: goto label_26a6ec;
        case 0x26a6f0u: goto label_26a6f0;
        case 0x26a6f4u: goto label_26a6f4;
        case 0x26a6f8u: goto label_26a6f8;
        case 0x26a6fcu: goto label_26a6fc;
        case 0x26a700u: goto label_26a700;
        case 0x26a704u: goto label_26a704;
        case 0x26a708u: goto label_26a708;
        case 0x26a70cu: goto label_26a70c;
        case 0x26a710u: goto label_26a710;
        case 0x26a714u: goto label_26a714;
        case 0x26a718u: goto label_26a718;
        case 0x26a71cu: goto label_26a71c;
        case 0x26a720u: goto label_26a720;
        case 0x26a724u: goto label_26a724;
        case 0x26a728u: goto label_26a728;
        case 0x26a72cu: goto label_26a72c;
        case 0x26a730u: goto label_26a730;
        case 0x26a734u: goto label_26a734;
        case 0x26a738u: goto label_26a738;
        case 0x26a73cu: goto label_26a73c;
        case 0x26a740u: goto label_26a740;
        case 0x26a744u: goto label_26a744;
        case 0x26a748u: goto label_26a748;
        case 0x26a74cu: goto label_26a74c;
        case 0x26a750u: goto label_26a750;
        case 0x26a754u: goto label_26a754;
        case 0x26a758u: goto label_26a758;
        case 0x26a75cu: goto label_26a75c;
        case 0x26a760u: goto label_26a760;
        case 0x26a764u: goto label_26a764;
        case 0x26a768u: goto label_26a768;
        case 0x26a76cu: goto label_26a76c;
        case 0x26a770u: goto label_26a770;
        case 0x26a774u: goto label_26a774;
        case 0x26a778u: goto label_26a778;
        case 0x26a77cu: goto label_26a77c;
        case 0x26a780u: goto label_26a780;
        case 0x26a784u: goto label_26a784;
        case 0x26a788u: goto label_26a788;
        case 0x26a78cu: goto label_26a78c;
        case 0x26a790u: goto label_26a790;
        case 0x26a794u: goto label_26a794;
        case 0x26a798u: goto label_26a798;
        case 0x26a79cu: goto label_26a79c;
        case 0x26a7a0u: goto label_26a7a0;
        case 0x26a7a4u: goto label_26a7a4;
        case 0x26a7a8u: goto label_26a7a8;
        case 0x26a7acu: goto label_26a7ac;
        case 0x26a7b0u: goto label_26a7b0;
        case 0x26a7b4u: goto label_26a7b4;
        case 0x26a7b8u: goto label_26a7b8;
        case 0x26a7bcu: goto label_26a7bc;
        case 0x26a7c0u: goto label_26a7c0;
        case 0x26a7c4u: goto label_26a7c4;
        case 0x26a7c8u: goto label_26a7c8;
        case 0x26a7ccu: goto label_26a7cc;
        case 0x26a7d0u: goto label_26a7d0;
        case 0x26a7d4u: goto label_26a7d4;
        case 0x26a7d8u: goto label_26a7d8;
        case 0x26a7dcu: goto label_26a7dc;
        case 0x26a7e0u: goto label_26a7e0;
        case 0x26a7e4u: goto label_26a7e4;
        case 0x26a7e8u: goto label_26a7e8;
        case 0x26a7ecu: goto label_26a7ec;
        case 0x26a7f0u: goto label_26a7f0;
        case 0x26a7f4u: goto label_26a7f4;
        case 0x26a7f8u: goto label_26a7f8;
        case 0x26a7fcu: goto label_26a7fc;
        case 0x26a800u: goto label_26a800;
        case 0x26a804u: goto label_26a804;
        case 0x26a808u: goto label_26a808;
        case 0x26a80cu: goto label_26a80c;
        case 0x26a810u: goto label_26a810;
        case 0x26a814u: goto label_26a814;
        case 0x26a818u: goto label_26a818;
        case 0x26a81cu: goto label_26a81c;
        case 0x26a820u: goto label_26a820;
        case 0x26a824u: goto label_26a824;
        case 0x26a828u: goto label_26a828;
        case 0x26a82cu: goto label_26a82c;
        case 0x26a830u: goto label_26a830;
        case 0x26a834u: goto label_26a834;
        case 0x26a838u: goto label_26a838;
        case 0x26a83cu: goto label_26a83c;
        case 0x26a840u: goto label_26a840;
        case 0x26a844u: goto label_26a844;
        case 0x26a848u: goto label_26a848;
        case 0x26a84cu: goto label_26a84c;
        case 0x26a850u: goto label_26a850;
        case 0x26a854u: goto label_26a854;
        case 0x26a858u: goto label_26a858;
        case 0x26a85cu: goto label_26a85c;
        case 0x26a860u: goto label_26a860;
        case 0x26a864u: goto label_26a864;
        case 0x26a868u: goto label_26a868;
        case 0x26a86cu: goto label_26a86c;
        case 0x26a870u: goto label_26a870;
        case 0x26a874u: goto label_26a874;
        case 0x26a878u: goto label_26a878;
        case 0x26a87cu: goto label_26a87c;
        case 0x26a880u: goto label_26a880;
        case 0x26a884u: goto label_26a884;
        case 0x26a888u: goto label_26a888;
        case 0x26a88cu: goto label_26a88c;
        case 0x26a890u: goto label_26a890;
        case 0x26a894u: goto label_26a894;
        case 0x26a898u: goto label_26a898;
        case 0x26a89cu: goto label_26a89c;
        case 0x26a8a0u: goto label_26a8a0;
        case 0x26a8a4u: goto label_26a8a4;
        case 0x26a8a8u: goto label_26a8a8;
        case 0x26a8acu: goto label_26a8ac;
        case 0x26a8b0u: goto label_26a8b0;
        case 0x26a8b4u: goto label_26a8b4;
        case 0x26a8b8u: goto label_26a8b8;
        case 0x26a8bcu: goto label_26a8bc;
        case 0x26a8c0u: goto label_26a8c0;
        case 0x26a8c4u: goto label_26a8c4;
        case 0x26a8c8u: goto label_26a8c8;
        case 0x26a8ccu: goto label_26a8cc;
        case 0x26a8d0u: goto label_26a8d0;
        case 0x26a8d4u: goto label_26a8d4;
        case 0x26a8d8u: goto label_26a8d8;
        case 0x26a8dcu: goto label_26a8dc;
        case 0x26a8e0u: goto label_26a8e0;
        case 0x26a8e4u: goto label_26a8e4;
        case 0x26a8e8u: goto label_26a8e8;
        case 0x26a8ecu: goto label_26a8ec;
        case 0x26a8f0u: goto label_26a8f0;
        case 0x26a8f4u: goto label_26a8f4;
        case 0x26a8f8u: goto label_26a8f8;
        case 0x26a8fcu: goto label_26a8fc;
        case 0x26a900u: goto label_26a900;
        case 0x26a904u: goto label_26a904;
        case 0x26a908u: goto label_26a908;
        case 0x26a90cu: goto label_26a90c;
        case 0x26a910u: goto label_26a910;
        case 0x26a914u: goto label_26a914;
        case 0x26a918u: goto label_26a918;
        case 0x26a91cu: goto label_26a91c;
        case 0x26a920u: goto label_26a920;
        case 0x26a924u: goto label_26a924;
        case 0x26a928u: goto label_26a928;
        case 0x26a92cu: goto label_26a92c;
        case 0x26a930u: goto label_26a930;
        case 0x26a934u: goto label_26a934;
        case 0x26a938u: goto label_26a938;
        case 0x26a93cu: goto label_26a93c;
        case 0x26a940u: goto label_26a940;
        case 0x26a944u: goto label_26a944;
        case 0x26a948u: goto label_26a948;
        case 0x26a94cu: goto label_26a94c;
        case 0x26a950u: goto label_26a950;
        case 0x26a954u: goto label_26a954;
        case 0x26a958u: goto label_26a958;
        case 0x26a95cu: goto label_26a95c;
        case 0x26a960u: goto label_26a960;
        case 0x26a964u: goto label_26a964;
        case 0x26a968u: goto label_26a968;
        case 0x26a96cu: goto label_26a96c;
        case 0x26a970u: goto label_26a970;
        case 0x26a974u: goto label_26a974;
        case 0x26a978u: goto label_26a978;
        case 0x26a97cu: goto label_26a97c;
        case 0x26a980u: goto label_26a980;
        case 0x26a984u: goto label_26a984;
        case 0x26a988u: goto label_26a988;
        case 0x26a98cu: goto label_26a98c;
        case 0x26a990u: goto label_26a990;
        case 0x26a994u: goto label_26a994;
        case 0x26a998u: goto label_26a998;
        case 0x26a99cu: goto label_26a99c;
        case 0x26a9a0u: goto label_26a9a0;
        case 0x26a9a4u: goto label_26a9a4;
        case 0x26a9a8u: goto label_26a9a8;
        case 0x26a9acu: goto label_26a9ac;
        case 0x26a9b0u: goto label_26a9b0;
        case 0x26a9b4u: goto label_26a9b4;
        case 0x26a9b8u: goto label_26a9b8;
        case 0x26a9bcu: goto label_26a9bc;
        case 0x26a9c0u: goto label_26a9c0;
        case 0x26a9c4u: goto label_26a9c4;
        case 0x26a9c8u: goto label_26a9c8;
        case 0x26a9ccu: goto label_26a9cc;
        case 0x26a9d0u: goto label_26a9d0;
        case 0x26a9d4u: goto label_26a9d4;
        case 0x26a9d8u: goto label_26a9d8;
        case 0x26a9dcu: goto label_26a9dc;
        case 0x26a9e0u: goto label_26a9e0;
        case 0x26a9e4u: goto label_26a9e4;
        case 0x26a9e8u: goto label_26a9e8;
        case 0x26a9ecu: goto label_26a9ec;
        case 0x26a9f0u: goto label_26a9f0;
        case 0x26a9f4u: goto label_26a9f4;
        case 0x26a9f8u: goto label_26a9f8;
        case 0x26a9fcu: goto label_26a9fc;
        case 0x26aa00u: goto label_26aa00;
        case 0x26aa04u: goto label_26aa04;
        case 0x26aa08u: goto label_26aa08;
        case 0x26aa0cu: goto label_26aa0c;
        case 0x26aa10u: goto label_26aa10;
        case 0x26aa14u: goto label_26aa14;
        case 0x26aa18u: goto label_26aa18;
        case 0x26aa1cu: goto label_26aa1c;
        case 0x26aa20u: goto label_26aa20;
        case 0x26aa24u: goto label_26aa24;
        case 0x26aa28u: goto label_26aa28;
        case 0x26aa2cu: goto label_26aa2c;
        case 0x26aa30u: goto label_26aa30;
        case 0x26aa34u: goto label_26aa34;
        case 0x26aa38u: goto label_26aa38;
        case 0x26aa3cu: goto label_26aa3c;
        case 0x26aa40u: goto label_26aa40;
        case 0x26aa44u: goto label_26aa44;
        case 0x26aa48u: goto label_26aa48;
        case 0x26aa4cu: goto label_26aa4c;
        case 0x26aa50u: goto label_26aa50;
        case 0x26aa54u: goto label_26aa54;
        case 0x26aa58u: goto label_26aa58;
        case 0x26aa5cu: goto label_26aa5c;
        case 0x26aa60u: goto label_26aa60;
        case 0x26aa64u: goto label_26aa64;
        case 0x26aa68u: goto label_26aa68;
        case 0x26aa6cu: goto label_26aa6c;
        case 0x26aa70u: goto label_26aa70;
        case 0x26aa74u: goto label_26aa74;
        case 0x26aa78u: goto label_26aa78;
        case 0x26aa7cu: goto label_26aa7c;
        case 0x26aa80u: goto label_26aa80;
        case 0x26aa84u: goto label_26aa84;
        case 0x26aa88u: goto label_26aa88;
        case 0x26aa8cu: goto label_26aa8c;
        case 0x26aa90u: goto label_26aa90;
        case 0x26aa94u: goto label_26aa94;
        case 0x26aa98u: goto label_26aa98;
        case 0x26aa9cu: goto label_26aa9c;
        case 0x26aaa0u: goto label_26aaa0;
        case 0x26aaa4u: goto label_26aaa4;
        case 0x26aaa8u: goto label_26aaa8;
        case 0x26aaacu: goto label_26aaac;
        case 0x26aab0u: goto label_26aab0;
        case 0x26aab4u: goto label_26aab4;
        case 0x26aab8u: goto label_26aab8;
        case 0x26aabcu: goto label_26aabc;
        case 0x26aac0u: goto label_26aac0;
        case 0x26aac4u: goto label_26aac4;
        case 0x26aac8u: goto label_26aac8;
        case 0x26aaccu: goto label_26aacc;
        case 0x26aad0u: goto label_26aad0;
        case 0x26aad4u: goto label_26aad4;
        case 0x26aad8u: goto label_26aad8;
        case 0x26aadcu: goto label_26aadc;
        case 0x26aae0u: goto label_26aae0;
        case 0x26aae4u: goto label_26aae4;
        case 0x26aae8u: goto label_26aae8;
        case 0x26aaecu: goto label_26aaec;
        case 0x26aaf0u: goto label_26aaf0;
        case 0x26aaf4u: goto label_26aaf4;
        case 0x26aaf8u: goto label_26aaf8;
        case 0x26aafcu: goto label_26aafc;
        case 0x26ab00u: goto label_26ab00;
        case 0x26ab04u: goto label_26ab04;
        case 0x26ab08u: goto label_26ab08;
        case 0x26ab0cu: goto label_26ab0c;
        case 0x26ab10u: goto label_26ab10;
        case 0x26ab14u: goto label_26ab14;
        case 0x26ab18u: goto label_26ab18;
        case 0x26ab1cu: goto label_26ab1c;
        case 0x26ab20u: goto label_26ab20;
        case 0x26ab24u: goto label_26ab24;
        case 0x26ab28u: goto label_26ab28;
        case 0x26ab2cu: goto label_26ab2c;
        case 0x26ab30u: goto label_26ab30;
        case 0x26ab34u: goto label_26ab34;
        case 0x26ab38u: goto label_26ab38;
        case 0x26ab3cu: goto label_26ab3c;
        case 0x26ab40u: goto label_26ab40;
        case 0x26ab44u: goto label_26ab44;
        case 0x26ab48u: goto label_26ab48;
        case 0x26ab4cu: goto label_26ab4c;
        case 0x26ab50u: goto label_26ab50;
        case 0x26ab54u: goto label_26ab54;
        case 0x26ab58u: goto label_26ab58;
        case 0x26ab5cu: goto label_26ab5c;
        case 0x26ab60u: goto label_26ab60;
        case 0x26ab64u: goto label_26ab64;
        case 0x26ab68u: goto label_26ab68;
        case 0x26ab6cu: goto label_26ab6c;
        case 0x26ab70u: goto label_26ab70;
        case 0x26ab74u: goto label_26ab74;
        case 0x26ab78u: goto label_26ab78;
        case 0x26ab7cu: goto label_26ab7c;
        case 0x26ab80u: goto label_26ab80;
        case 0x26ab84u: goto label_26ab84;
        case 0x26ab88u: goto label_26ab88;
        case 0x26ab8cu: goto label_26ab8c;
        case 0x26ab90u: goto label_26ab90;
        case 0x26ab94u: goto label_26ab94;
        case 0x26ab98u: goto label_26ab98;
        case 0x26ab9cu: goto label_26ab9c;
        case 0x26aba0u: goto label_26aba0;
        case 0x26aba4u: goto label_26aba4;
        case 0x26aba8u: goto label_26aba8;
        case 0x26abacu: goto label_26abac;
        case 0x26abb0u: goto label_26abb0;
        case 0x26abb4u: goto label_26abb4;
        case 0x26abb8u: goto label_26abb8;
        case 0x26abbcu: goto label_26abbc;
        case 0x26abc0u: goto label_26abc0;
        case 0x26abc4u: goto label_26abc4;
        case 0x26abc8u: goto label_26abc8;
        case 0x26abccu: goto label_26abcc;
        case 0x26abd0u: goto label_26abd0;
        case 0x26abd4u: goto label_26abd4;
        case 0x26abd8u: goto label_26abd8;
        case 0x26abdcu: goto label_26abdc;
        case 0x26abe0u: goto label_26abe0;
        case 0x26abe4u: goto label_26abe4;
        case 0x26abe8u: goto label_26abe8;
        case 0x26abecu: goto label_26abec;
        case 0x26abf0u: goto label_26abf0;
        case 0x26abf4u: goto label_26abf4;
        case 0x26abf8u: goto label_26abf8;
        case 0x26abfcu: goto label_26abfc;
        case 0x26ac00u: goto label_26ac00;
        case 0x26ac04u: goto label_26ac04;
        case 0x26ac08u: goto label_26ac08;
        case 0x26ac0cu: goto label_26ac0c;
        case 0x26ac10u: goto label_26ac10;
        case 0x26ac14u: goto label_26ac14;
        case 0x26ac18u: goto label_26ac18;
        case 0x26ac1cu: goto label_26ac1c;
        case 0x26ac20u: goto label_26ac20;
        case 0x26ac24u: goto label_26ac24;
        case 0x26ac28u: goto label_26ac28;
        case 0x26ac2cu: goto label_26ac2c;
        case 0x26ac30u: goto label_26ac30;
        case 0x26ac34u: goto label_26ac34;
        case 0x26ac38u: goto label_26ac38;
        case 0x26ac3cu: goto label_26ac3c;
        case 0x26ac40u: goto label_26ac40;
        case 0x26ac44u: goto label_26ac44;
        case 0x26ac48u: goto label_26ac48;
        case 0x26ac4cu: goto label_26ac4c;
        case 0x26ac50u: goto label_26ac50;
        case 0x26ac54u: goto label_26ac54;
        case 0x26ac58u: goto label_26ac58;
        case 0x26ac5cu: goto label_26ac5c;
        case 0x26ac60u: goto label_26ac60;
        case 0x26ac64u: goto label_26ac64;
        case 0x26ac68u: goto label_26ac68;
        case 0x26ac6cu: goto label_26ac6c;
        case 0x26ac70u: goto label_26ac70;
        case 0x26ac74u: goto label_26ac74;
        case 0x26ac78u: goto label_26ac78;
        case 0x26ac7cu: goto label_26ac7c;
        case 0x26ac80u: goto label_26ac80;
        case 0x26ac84u: goto label_26ac84;
        case 0x26ac88u: goto label_26ac88;
        case 0x26ac8cu: goto label_26ac8c;
        case 0x26ac90u: goto label_26ac90;
        case 0x26ac94u: goto label_26ac94;
        case 0x26ac98u: goto label_26ac98;
        case 0x26ac9cu: goto label_26ac9c;
        case 0x26aca0u: goto label_26aca0;
        case 0x26aca4u: goto label_26aca4;
        case 0x26aca8u: goto label_26aca8;
        case 0x26acacu: goto label_26acac;
        case 0x26acb0u: goto label_26acb0;
        case 0x26acb4u: goto label_26acb4;
        case 0x26acb8u: goto label_26acb8;
        case 0x26acbcu: goto label_26acbc;
        case 0x26acc0u: goto label_26acc0;
        case 0x26acc4u: goto label_26acc4;
        case 0x26acc8u: goto label_26acc8;
        case 0x26acccu: goto label_26accc;
        case 0x26acd0u: goto label_26acd0;
        case 0x26acd4u: goto label_26acd4;
        case 0x26acd8u: goto label_26acd8;
        case 0x26acdcu: goto label_26acdc;
        case 0x26ace0u: goto label_26ace0;
        case 0x26ace4u: goto label_26ace4;
        case 0x26ace8u: goto label_26ace8;
        case 0x26acecu: goto label_26acec;
        case 0x26acf0u: goto label_26acf0;
        case 0x26acf4u: goto label_26acf4;
        case 0x26acf8u: goto label_26acf8;
        case 0x26acfcu: goto label_26acfc;
        case 0x26ad00u: goto label_26ad00;
        case 0x26ad04u: goto label_26ad04;
        case 0x26ad08u: goto label_26ad08;
        case 0x26ad0cu: goto label_26ad0c;
        case 0x26ad10u: goto label_26ad10;
        case 0x26ad14u: goto label_26ad14;
        case 0x26ad18u: goto label_26ad18;
        case 0x26ad1cu: goto label_26ad1c;
        case 0x26ad20u: goto label_26ad20;
        case 0x26ad24u: goto label_26ad24;
        case 0x26ad28u: goto label_26ad28;
        case 0x26ad2cu: goto label_26ad2c;
        case 0x26ad30u: goto label_26ad30;
        case 0x26ad34u: goto label_26ad34;
        case 0x26ad38u: goto label_26ad38;
        case 0x26ad3cu: goto label_26ad3c;
        case 0x26ad40u: goto label_26ad40;
        case 0x26ad44u: goto label_26ad44;
        case 0x26ad48u: goto label_26ad48;
        case 0x26ad4cu: goto label_26ad4c;
        case 0x26ad50u: goto label_26ad50;
        case 0x26ad54u: goto label_26ad54;
        case 0x26ad58u: goto label_26ad58;
        case 0x26ad5cu: goto label_26ad5c;
        case 0x26ad60u: goto label_26ad60;
        case 0x26ad64u: goto label_26ad64;
        case 0x26ad68u: goto label_26ad68;
        case 0x26ad6cu: goto label_26ad6c;
        case 0x26ad70u: goto label_26ad70;
        case 0x26ad74u: goto label_26ad74;
        case 0x26ad78u: goto label_26ad78;
        case 0x26ad7cu: goto label_26ad7c;
        case 0x26ad80u: goto label_26ad80;
        case 0x26ad84u: goto label_26ad84;
        case 0x26ad88u: goto label_26ad88;
        case 0x26ad8cu: goto label_26ad8c;
        case 0x26ad90u: goto label_26ad90;
        case 0x26ad94u: goto label_26ad94;
        case 0x26ad98u: goto label_26ad98;
        case 0x26ad9cu: goto label_26ad9c;
        case 0x26ada0u: goto label_26ada0;
        case 0x26ada4u: goto label_26ada4;
        case 0x26ada8u: goto label_26ada8;
        case 0x26adacu: goto label_26adac;
        case 0x26adb0u: goto label_26adb0;
        case 0x26adb4u: goto label_26adb4;
        case 0x26adb8u: goto label_26adb8;
        case 0x26adbcu: goto label_26adbc;
        case 0x26adc0u: goto label_26adc0;
        case 0x26adc4u: goto label_26adc4;
        case 0x26adc8u: goto label_26adc8;
        case 0x26adccu: goto label_26adcc;
        case 0x26add0u: goto label_26add0;
        case 0x26add4u: goto label_26add4;
        case 0x26add8u: goto label_26add8;
        case 0x26addcu: goto label_26addc;
        case 0x26ade0u: goto label_26ade0;
        case 0x26ade4u: goto label_26ade4;
        case 0x26ade8u: goto label_26ade8;
        case 0x26adecu: goto label_26adec;
        default: break;
    }

    ctx->pc = 0x26a6d0u;

label_26a6d0:
    // 0x26a6d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x26a6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_26a6d4:
    // 0x26a6d4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x26a6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_26a6d8:
    // 0x26a6d8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x26a6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_26a6dc:
    // 0x26a6dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26a6dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26a6e0:
    // 0x26a6e0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x26a6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_26a6e4:
    // 0x26a6e4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x26a6e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26a6e8:
    // 0x26a6e8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x26a6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_26a6ec:
    // 0x26a6ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26a6ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26a6f0:
    // 0x26a6f0: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x26a6f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_26a6f4:
    // 0x26a6f4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x26a6f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_26a6f8:
    // 0x26a6f8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x26a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_26a6fc:
    // 0x26a6fc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x26a6fcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_26a700:
    // 0x26a700: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x26a700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_26a704:
    // 0x26a704: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26a704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_26a708:
    // 0x26a708: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x26a708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_26a70c:
    // 0x26a70c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26a70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26a710:
    // 0x26a710: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x26a710u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_26a714:
    // 0x26a714: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x26a714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_26a718:
    // 0x26a718: 0xc08a122  jal         func_228488
label_26a71c:
    if (ctx->pc == 0x26A71Cu) {
        ctx->pc = 0x26A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A718u;
        // 0x26a71c: 0x8e3700d8  lw          $s7, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A720u;
        goto label_26a720;
    }
    ctx->pc = 0x26A718u;
    SET_GPR_U32(ctx, 31, 0x26A720u);
    ctx->pc = 0x26A71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A718u;
    // 0x26a71c: 0x8e3700d8  lw          $s7, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228488u, 0x26A718u, 0x26A720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A720u;
label_26a720:
    // 0x26a720: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_26a724:
    if (ctx->pc == 0x26A724u) {
        ctx->pc = 0x26A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A720u;
        // 0x26a724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A728u;
        goto label_26a728;
    }
    ctx->pc = 0x26A720u;
    {
        const bool branch_taken_0x26a720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A720u;
        // 0x26a724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a720) {
            ctx->pc = 0x26A740u;
            goto label_26a740;
        }
    }
    ctx->pc = 0x26A728u;
label_26a728:
    // 0x26a728: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x26a728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26a72c:
    // 0x26a72c: 0xc088cf2  jal         func_2233C8
label_26a730:
    if (ctx->pc == 0x26A730u) {
        ctx->pc = 0x26A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A72Cu;
        // 0x26a730: 0x845000be  lh          $s0, 0xBE($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 190)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A734u;
        goto label_26a734;
    }
    ctx->pc = 0x26A72Cu;
    SET_GPR_U32(ctx, 31, 0x26A734u);
    ctx->pc = 0x26A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A72Cu;
    // 0x26a730: 0x845000be  lh          $s0, 0xBE($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 190)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2233C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2233C8u, 0x26A72Cu, 0x26A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A734u;
label_26a734:
    // 0x26a734: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x26a734u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26a738:
    // 0x26a738: 0x120001a0  beqz        $s0, . + 4 + (0x1A0 << 2)
label_26a73c:
    if (ctx->pc == 0x26A73Cu) {
        ctx->pc = 0x26A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A738u;
        // 0x26a73c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A740u;
        goto label_26a740;
    }
    ctx->pc = 0x26A738u;
    {
        const bool branch_taken_0x26a738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A738u;
        // 0x26a73c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a738) {
            ctx->pc = 0x26ADBCu;
            goto label_26adbc;
        }
    }
    ctx->pc = 0x26A740u;
label_26a740:
    // 0x26a740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26a744:
    // 0x26a744: 0xc087502  jal         func_21D408
label_26a748:
    if (ctx->pc == 0x26A748u) {
        ctx->pc = 0x26A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A744u;
        // 0x26a748: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A74Cu;
        goto label_26a74c;
    }
    ctx->pc = 0x26A744u;
    SET_GPR_U32(ctx, 31, 0x26A74Cu);
    ctx->pc = 0x26A748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A744u;
    // 0x26a748: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x26A744u, 0x26A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A74Cu;
label_26a74c:
    // 0x26a74c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26a74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_26a750:
    // 0x26a750: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x26a750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_26a754:
    // 0x26a754: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_26a758:
    if (ctx->pc == 0x26A758u) {
        ctx->pc = 0x26A75Cu;
        goto label_26a75c;
    }
    ctx->pc = 0x26A754u;
    {
        const bool branch_taken_0x26a754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a754) {
            ctx->pc = 0x26A77Cu;
            goto label_26a77c;
        }
    }
    ctx->pc = 0x26A75Cu;
label_26a75c:
    // 0x26a75c: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x26a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_26a760:
    // 0x26a760: 0x38420080  xori        $v0, $v0, 0x80
    ctx->pc = 0x26a760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)128);
label_26a764:
    // 0x26a764: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_26a768:
    if (ctx->pc == 0x26A768u) {
        ctx->pc = 0x26A76Cu;
        goto label_26a76c;
    }
    ctx->pc = 0x26A764u;
    {
        const bool branch_taken_0x26a764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a764) {
            ctx->pc = 0x26A77Cu;
            goto label_26a77c;
        }
    }
    ctx->pc = 0x26A76Cu;
label_26a76c:
    // 0x26a76c: 0xc088f88  jal         func_223E20
label_26a770:
    if (ctx->pc == 0x26A770u) {
        ctx->pc = 0x26A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A76Cu;
        // 0x26a770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A774u;
        goto label_26a774;
    }
    ctx->pc = 0x26A76Cu;
    SET_GPR_U32(ctx, 31, 0x26A774u);
    ctx->pc = 0x26A770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A76Cu;
    // 0x26a770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x26A76Cu, 0x26A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A774u;
label_26a774:
    // 0x26a774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26a774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a778:
    // 0x26a778: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x26a778u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_26a77c:
    // 0x26a77c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_26a780:
    if (ctx->pc == 0x26A780u) {
        ctx->pc = 0x26A784u;
        goto label_26a784;
    }
    ctx->pc = 0x26A77Cu;
    {
        const bool branch_taken_0x26a77c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a77c) {
            ctx->pc = 0x26A78Cu;
            goto label_26a78c;
        }
    }
    ctx->pc = 0x26A784u;
label_26a784:
    // 0x26a784: 0xc0960cc  jal         func_258330
label_26a788:
    if (ctx->pc == 0x26A788u) {
        ctx->pc = 0x26A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A784u;
        // 0x26a788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A78Cu;
        goto label_26a78c;
    }
    ctx->pc = 0x26A784u;
    SET_GPR_U32(ctx, 31, 0x26A78Cu);
    ctx->pc = 0x26A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A784u;
    // 0x26a788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258330u, 0x26A784u, 0x26A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A78Cu;
label_26a78c:
    // 0x26a78c: 0xc0899ae  jal         func_2266B8
label_26a790:
    if (ctx->pc == 0x26A790u) {
        ctx->pc = 0x26A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A78Cu;
        // 0x26a790: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A794u;
        goto label_26a794;
    }
    ctx->pc = 0x26A78Cu;
    SET_GPR_U32(ctx, 31, 0x26A794u);
    ctx->pc = 0x26A790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A78Cu;
    // 0x26a790: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x26A78Cu, 0x26A794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A794u;
label_26a794:
    // 0x26a794: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26a794u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a798:
    // 0x26a798: 0x28620269  slti        $v0, $v1, 0x269
    ctx->pc = 0x26a798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)617) ? 1 : 0);
label_26a79c:
    // 0x26a79c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26a79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_26a7a0:
    // 0x26a7a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_26a7a4:
    if (ctx->pc == 0x26A7A4u) {
        ctx->pc = 0x26A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7A0u;
        // 0x26a7a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A7A8u;
        goto label_26a7a8;
    }
    ctx->pc = 0x26A7A0u;
    {
        const bool branch_taken_0x26a7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7A0u;
        // 0x26a7a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7a0) {
            ctx->pc = 0x26A7C4u;
            goto label_26a7c4;
        }
    }
    ctx->pc = 0x26A7A8u;
label_26a7a8:
    // 0x26a7a8: 0x2862026c  slti        $v0, $v1, 0x26C
    ctx->pc = 0x26a7a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)620) ? 1 : 0);
label_26a7ac:
    // 0x26a7ac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26a7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_26a7b0:
    // 0x26a7b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26a7b4:
    if (ctx->pc == 0x26A7B4u) {
        ctx->pc = 0x26A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7B0u;
        // 0x26a7b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A7B8u;
        goto label_26a7b8;
    }
    ctx->pc = 0x26A7B0u;
    {
        const bool branch_taken_0x26a7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7B0u;
        // 0x26a7b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7b0) {
            ctx->pc = 0x26A7C4u;
            goto label_26a7c4;
        }
    }
    ctx->pc = 0x26A7B8u;
label_26a7b8:
    // 0x26a7b8: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x26a7b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_26a7bc:
    // 0x26a7bc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x26a7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_26a7c0:
    // 0x26a7c0: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x26a7c0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_26a7c4:
    // 0x26a7c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_26a7c8:
    if (ctx->pc == 0x26A7C8u) {
        ctx->pc = 0x26A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7C4u;
        // 0x26a7c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A7CCu;
        goto label_26a7cc;
    }
    ctx->pc = 0x26A7C4u;
    {
        const bool branch_taken_0x26a7c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7C4u;
        // 0x26a7c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7c4) {
            ctx->pc = 0x26A7D8u;
            goto label_26a7d8;
        }
    }
    ctx->pc = 0x26A7CCu;
label_26a7cc:
    // 0x26a7cc: 0xc095fce  jal         func_257F38
label_26a7d0:
    if (ctx->pc == 0x26A7D0u) {
        ctx->pc = 0x26A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7CCu;
        // 0x26a7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A7D4u;
        goto label_26a7d4;
    }
    ctx->pc = 0x26A7CCu;
    SET_GPR_U32(ctx, 31, 0x26A7D4u);
    ctx->pc = 0x26A7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A7CCu;
    // 0x26a7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x26A7CCu, 0x26A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A7D4u;
label_26a7d4:
    // 0x26a7d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26a7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26a7d8:
    // 0x26a7d8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x26a7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26a7dc:
    // 0x26a7dc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26a7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_26a7e0:
    // 0x26a7e0: 0xc040698  jal         func_101A60
label_26a7e4:
    if (ctx->pc == 0x26A7E4u) {
        ctx->pc = 0x26A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7E0u;
        // 0x26a7e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A7E8u;
        goto label_26a7e8;
    }
    ctx->pc = 0x26A7E0u;
    SET_GPR_U32(ctx, 31, 0x26A7E8u);
    ctx->pc = 0x26A7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A7E0u;
    // 0x26a7e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A60u, 0x26A7E0u, 0x26A7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A7E8u;
label_26a7e8:
    // 0x26a7e8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x26a7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_26a7ec:
    // 0x26a7ec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_26a7f0:
    // 0x26a7f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26a7f4:
    // 0x26a7f4: 0xc095358  jal         func_254D60
label_26a7f8:
    if (ctx->pc == 0x26A7F8u) {
        ctx->pc = 0x26A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7F4u;
        // 0x26a7f8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A7FCu;
        goto label_26a7fc;
    }
    ctx->pc = 0x26A7F4u;
    SET_GPR_U32(ctx, 31, 0x26A7FCu);
    ctx->pc = 0x26A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A7F4u;
    // 0x26a7f8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D60u, 0x26A7F4u, 0x26A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A7FCu;
label_26a7fc:
    // 0x26a7fc: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x26a7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
label_26a800:
    // 0x26a800: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x26a800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_26a804:
    // 0x26a804: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26a808:
    // 0x26a808: 0x28102  srl         $s0, $v0, 4
    ctx->pc = 0x26a808u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_26a80c:
    // 0x26a80c: 0xc095388  jal         func_254E20
label_26a810:
    if (ctx->pc == 0x26A810u) {
        ctx->pc = 0x26A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A80Cu;
        // 0x26a810: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A814u;
        goto label_26a814;
    }
    ctx->pc = 0x26A80Cu;
    SET_GPR_U32(ctx, 31, 0x26A814u);
    ctx->pc = 0x26A810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A80Cu;
    // 0x26a810: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E20u, 0x26A80Cu, 0x26A814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A814u;
label_26a814:
    // 0x26a814: 0xde2300e0  ld          $v1, 0xE0($s1)
    ctx->pc = 0x26a814u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_26a818:
    // 0x26a818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26a818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a81c:
    // 0x26a81c: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x26a81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_26a820:
    // 0x26a820: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26a820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26a824:
    // 0x26a824: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26a824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_26a828:
    // 0x26a828: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26a828u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_26a82c:
    // 0x26a82c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_26a830:
    if (ctx->pc == 0x26A830u) {
        ctx->pc = 0x26A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A82Cu;
        // 0x26a830: 0x826401b0  lb          $a0, 0x1B0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A834u;
        goto label_26a834;
    }
    ctx->pc = 0x26A82Cu;
    {
        const bool branch_taken_0x26a82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a82c) {
            ctx->pc = 0x26A830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A82Cu;
            // 0x26a830: 0x826401b0  lb          $a0, 0x1B0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A87Cu;
            goto label_26a87c;
        }
    }
    ctx->pc = 0x26A834u;
label_26a834:
    // 0x26a834: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26a834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_26a838:
    // 0x26a838: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x26a838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
label_26a83c:
    // 0x26a83c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26a83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_26a840:
    // 0x26a840: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26a840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26a844:
    // 0x26a844: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26a844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_26a848:
    // 0x26a848: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26a848u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_26a84c:
    // 0x26a84c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_26a850:
    if (ctx->pc == 0x26A850u) {
        ctx->pc = 0x26A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A84Cu;
        // 0x26a850: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A854u;
        goto label_26a854;
    }
    ctx->pc = 0x26A84Cu;
    {
        const bool branch_taken_0x26a84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A84Cu;
        // 0x26a850: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a84c) {
            ctx->pc = 0x26A864u;
            goto label_26a864;
        }
    }
    ctx->pc = 0x26A854u;
label_26a854:
    // 0x26a854: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_26a858:
    if (ctx->pc == 0x26A858u) {
        ctx->pc = 0x26A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A854u;
        // 0x26a858: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A85Cu;
        goto label_26a85c;
    }
    ctx->pc = 0x26A854u;
    {
        const bool branch_taken_0x26a854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A854u;
        // 0x26a858: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a854) {
            ctx->pc = 0x26A874u;
            goto label_26a874;
        }
    }
    ctx->pc = 0x26A85Cu;
label_26a85c:
    // 0x26a85c: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_26a860:
    if (ctx->pc == 0x26A860u) {
        ctx->pc = 0x26A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A85Cu;
        // 0x26a860: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A864u;
        goto label_26a864;
    }
    ctx->pc = 0x26A85Cu;
    {
        const bool branch_taken_0x26a85c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a85c) {
            ctx->pc = 0x26A860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A85Cu;
            // 0x26a860: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A878u;
            goto label_26a878;
        }
    }
    ctx->pc = 0x26A864u;
label_26a864:
    // 0x26a864: 0xc088ef0  jal         func_223BC0
label_26a868:
    if (ctx->pc == 0x26A868u) {
        ctx->pc = 0x26A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A864u;
        // 0x26a868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A86Cu;
        goto label_26a86c;
    }
    ctx->pc = 0x26A864u;
    SET_GPR_U32(ctx, 31, 0x26A86Cu);
    ctx->pc = 0x26A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A864u;
    // 0x26a868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x26A864u, 0x26A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A86Cu;
label_26a86c:
    // 0x26a86c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_26a870:
    if (ctx->pc == 0x26A870u) {
        ctx->pc = 0x26A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A86Cu;
        // 0x26a870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A874u;
        goto label_26a874;
    }
    ctx->pc = 0x26A86Cu;
    {
        const bool branch_taken_0x26a86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A86Cu;
        // 0x26a870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a86c) {
            ctx->pc = 0x26A878u;
            goto label_26a878;
        }
    }
    ctx->pc = 0x26A874u;
label_26a874:
    // 0x26a874: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x26a874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_26a878:
    // 0x26a878: 0x826401b0  lb          $a0, 0x1B0($s3)
    ctx->pc = 0x26a878u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_26a87c:
    // 0x26a87c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26a87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26a880:
    // 0x26a880: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26a880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26a884:
    // 0x26a884: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26a884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26a888:
    // 0x26a888: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x26a888u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_26a88c:
    // 0x26a88c: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
label_26a890:
    if (ctx->pc == 0x26A890u) {
        ctx->pc = 0x26A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A88Cu;
        // 0x26a890: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A894u;
        goto label_26a894;
    }
    ctx->pc = 0x26A88Cu;
    {
        const bool branch_taken_0x26a88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a88c) {
            ctx->pc = 0x26A890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A88Cu;
            // 0x26a890: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A930u;
            goto label_26a930;
        }
    }
    ctx->pc = 0x26A894u;
label_26a894:
    // 0x26a894: 0xc047e6c  jal         func_11F9B0
label_26a898:
    if (ctx->pc == 0x26A898u) {
        ctx->pc = 0x26A89Cu;
        goto label_26a89c;
    }
    ctx->pc = 0x26A894u;
    SET_GPR_U32(ctx, 31, 0x26A89Cu);
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x26A894u, 0x26A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A89Cu;
label_26a89c:
    // 0x26a89c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x26a89cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a8a0:
    // 0x26a8a0: 0x55000008  bnel        $t0, $zero, . + 4 + (0x8 << 2)
label_26a8a4:
    if (ctx->pc == 0x26A8A4u) {
        ctx->pc = 0x26A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A8A0u;
        // 0x26a8a4: 0xde6200e0  ld          $v0, 0xE0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A8A8u;
        goto label_26a8a8;
    }
    ctx->pc = 0x26A8A0u;
    {
        const bool branch_taken_0x26a8a0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a8a0) {
            ctx->pc = 0x26A8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A8A0u;
            // 0x26a8a4: 0xde6200e0  ld          $v0, 0xE0($s3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A8C4u;
            goto label_26a8c4;
        }
    }
    ctx->pc = 0x26A8A8u;
label_26a8a8:
    // 0x26a8a8: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x26a8a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_26a8ac:
    // 0x26a8ac: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
label_26a8b0:
    if (ctx->pc == 0x26A8B0u) {
        ctx->pc = 0x26A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A8ACu;
        // 0x26a8b0: 0xde6200e0  ld          $v0, 0xE0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A8B4u;
        goto label_26a8b4;
    }
    ctx->pc = 0x26A8ACu;
    {
        const bool branch_taken_0x26a8ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26a8ac) {
            ctx->pc = 0x26A8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A8ACu;
            // 0x26a8b0: 0xde6200e0  ld          $v0, 0xE0($s3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A8C4u;
            goto label_26a8c4;
        }
    }
    ctx->pc = 0x26A8B4u;
label_26a8b4:
    // 0x26a8b4: 0xc047e6c  jal         func_11F9B0
label_26a8b8:
    if (ctx->pc == 0x26A8B8u) {
        ctx->pc = 0x26A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A8B4u;
        // 0x26a8b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A8BCu;
        goto label_26a8bc;
    }
    ctx->pc = 0x26A8B4u;
    SET_GPR_U32(ctx, 31, 0x26A8BCu);
    ctx->pc = 0x26A8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A8B4u;
    // 0x26a8b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x26A8B4u, 0x26A8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A8BCu;
label_26a8bc:
    // 0x26a8bc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x26a8bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a8c0:
    // 0x26a8c0: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x26a8c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_26a8c4:
    // 0x26a8c4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x26a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_26a8c8:
    // 0x26a8c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26a8cc:
    // 0x26a8cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26a8ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26a8d0:
    // 0x26a8d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26a8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_26a8d4:
    // 0x26a8d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26a8d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_26a8d8:
    // 0x26a8d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_26a8dc:
    if (ctx->pc == 0x26A8DCu) {
        ctx->pc = 0x26A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A8D8u;
        // 0x26a8dc: 0x3a060003  xori        $a2, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A8E0u;
        goto label_26a8e0;
    }
    ctx->pc = 0x26A8D8u;
    {
        const bool branch_taken_0x26a8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A8D8u;
        // 0x26a8dc: 0x3a060003  xori        $a2, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a8d8) {
            ctx->pc = 0x26A90Cu;
            goto label_26a90c;
        }
    }
    ctx->pc = 0x26A8E0u;
label_26a8e0:
    // 0x26a8e0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x26a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_26a8e4:
    // 0x26a8e4: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x26a8e4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_26a8e8:
    // 0x26a8e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26a8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26a8ec:
    // 0x26a8ec: 0x84640158  lh          $a0, 0x158($v1)
    ctx->pc = 0x26a8ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 344)));
label_26a8f0:
    // 0x26a8f0: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x26a8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_26a8f4:
    // 0x26a8f4: 0x8c62015c  lw          $v0, 0x15C($v1)
    ctx->pc = 0x26a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
label_26a8f8:
    // 0x26a8f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26a8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a8fc:
    // 0x26a8fc: 0x40f809  jalr        $v0
label_26a900:
    if (ctx->pc == 0x26A900u) {
        ctx->pc = 0x26A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A8FCu;
        // 0x26a900: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A904u;
        goto label_26a904;
    }
    ctx->pc = 0x26A8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A904u);
        ctx->pc = 0x26A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A8FCu;
        // 0x26a900: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A8FCu, 0x26A904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A904u;
label_26a904:
    // 0x26a904: 0x1000000a  b           . + 4 + (0xA << 2)
label_26a908:
    if (ctx->pc == 0x26A908u) {
        ctx->pc = 0x26A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A904u;
        // 0x26a908: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A90Cu;
        goto label_26a90c;
    }
    ctx->pc = 0x26A904u;
    {
        const bool branch_taken_0x26a904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A904u;
        // 0x26a908: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a904) {
            ctx->pc = 0x26A930u;
            goto label_26a930;
        }
    }
    ctx->pc = 0x26A90Cu;
label_26a90c:
    // 0x26a90c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x26a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_26a910:
    // 0x26a910: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26a910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26a914:
    // 0x26a914: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26a914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a918:
    // 0x26a918: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26a918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a91c:
    // 0x26a91c: 0x84440158  lh          $a0, 0x158($v0)
    ctx->pc = 0x26a91cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 344)));
label_26a920:
    // 0x26a920: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x26a920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
label_26a924:
    // 0x26a924: 0x60f809  jalr        $v1
label_26a928:
    if (ctx->pc == 0x26A928u) {
        ctx->pc = 0x26A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A924u;
        // 0x26a928: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A92Cu;
        goto label_26a92c;
    }
    ctx->pc = 0x26A924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26A92Cu);
        ctx->pc = 0x26A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A924u;
        // 0x26a928: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A924u, 0x26A92Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A92Cu;
label_26a92c:
    // 0x26a92c: 0x822401b0  lb          $a0, 0x1B0($s1)
    ctx->pc = 0x26a92cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_26a930:
    // 0x26a930: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x26a930u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_26a934:
    // 0x26a934: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_26a938:
    if (ctx->pc == 0x26A938u) {
        ctx->pc = 0x26A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A934u;
        // 0x26a938: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A93Cu;
        goto label_26a93c;
    }
    ctx->pc = 0x26A934u;
    {
        const bool branch_taken_0x26a934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A934u;
        // 0x26a938: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a934) {
            ctx->pc = 0x26A990u;
            goto label_26a990;
        }
    }
    ctx->pc = 0x26A93Cu;
label_26a93c:
    // 0x26a93c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_26a940:
    if (ctx->pc == 0x26A940u) {
        ctx->pc = 0x26A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A93Cu;
        // 0x26a940: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A944u;
        goto label_26a944;
    }
    ctx->pc = 0x26A93Cu;
    {
        const bool branch_taken_0x26a93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a93c) {
            ctx->pc = 0x26A940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A93Cu;
            // 0x26a940: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A994u;
            goto label_26a994;
        }
    }
    ctx->pc = 0x26A944u;
label_26a944:
    // 0x26a944: 0xc047e6c  jal         func_11F9B0
label_26a948:
    if (ctx->pc == 0x26A948u) {
        ctx->pc = 0x26A94Cu;
        goto label_26a94c;
    }
    ctx->pc = 0x26A944u;
    SET_GPR_U32(ctx, 31, 0x26A94Cu);
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x26A944u, 0x26A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A94Cu;
label_26a94c:
    // 0x26a94c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x26a94cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a950:
    // 0x26a950: 0x55000008  bnel        $t0, $zero, . + 4 + (0x8 << 2)
label_26a954:
    if (ctx->pc == 0x26A954u) {
        ctx->pc = 0x26A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A950u;
        // 0x26a954: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A958u;
        goto label_26a958;
    }
    ctx->pc = 0x26A950u;
    {
        const bool branch_taken_0x26a950 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a950) {
            ctx->pc = 0x26A954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A950u;
            // 0x26a954: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A974u;
            goto label_26a974;
        }
    }
    ctx->pc = 0x26A958u;
label_26a958:
    // 0x26a958: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x26a958u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_26a95c:
    // 0x26a95c: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
label_26a960:
    if (ctx->pc == 0x26A960u) {
        ctx->pc = 0x26A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A95Cu;
        // 0x26a960: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A964u;
        goto label_26a964;
    }
    ctx->pc = 0x26A95Cu;
    {
        const bool branch_taken_0x26a95c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26a95c) {
            ctx->pc = 0x26A960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A95Cu;
            // 0x26a960: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A974u;
            goto label_26a974;
        }
    }
    ctx->pc = 0x26A964u;
label_26a964:
    // 0x26a964: 0xc047e6c  jal         func_11F9B0
label_26a968:
    if (ctx->pc == 0x26A968u) {
        ctx->pc = 0x26A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A964u;
        // 0x26a968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A96Cu;
        goto label_26a96c;
    }
    ctx->pc = 0x26A964u;
    SET_GPR_U32(ctx, 31, 0x26A96Cu);
    ctx->pc = 0x26A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A964u;
    // 0x26a968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x26A964u, 0x26A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A96Cu;
label_26a96c:
    // 0x26a96c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x26a96cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a970:
    // 0x26a970: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x26a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_26a974:
    // 0x26a974: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26a974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a978:
    // 0x26a978: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26a978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26a97c:
    // 0x26a97c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26a97cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a980:
    // 0x26a980: 0x84440158  lh          $a0, 0x158($v0)
    ctx->pc = 0x26a980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 344)));
label_26a984:
    // 0x26a984: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x26a984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
label_26a988:
    // 0x26a988: 0x60f809  jalr        $v1
label_26a98c:
    if (ctx->pc == 0x26A98Cu) {
        ctx->pc = 0x26A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A988u;
        // 0x26a98c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A990u;
        goto label_26a990;
    }
    ctx->pc = 0x26A988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26A990u);
        ctx->pc = 0x26A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A988u;
        // 0x26a98c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A988u, 0x26A990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A990u;
label_26a990:
    // 0x26a990: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x26a990u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_26a994:
    // 0x26a994: 0x2610df28  addiu       $s0, $s0, -0x20D8
    ctx->pc = 0x26a994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958888));
label_26a998:
    // 0x26a998: 0xc041532  jal         func_1054C8
label_26a99c:
    if (ctx->pc == 0x26A99Cu) {
        ctx->pc = 0x26A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A998u;
        // 0x26a99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A9A0u;
        goto label_26a9a0;
    }
    ctx->pc = 0x26A998u;
    SET_GPR_U32(ctx, 31, 0x26A9A0u);
    ctx->pc = 0x26A99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A998u;
    // 0x26a99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26A998u, 0x26A9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9A0u;
label_26a9a0:
    // 0x26a9a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a9a4:
    // 0x26a9a4: 0xc041532  jal         func_1054C8
label_26a9a8:
    if (ctx->pc == 0x26A9A8u) {
        ctx->pc = 0x26A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9A4u;
        // 0x26a9a8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A9ACu;
        goto label_26a9ac;
    }
    ctx->pc = 0x26A9A4u;
    SET_GPR_U32(ctx, 31, 0x26A9ACu);
    ctx->pc = 0x26A9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A9A4u;
    // 0x26a9a8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26A9A4u, 0x26A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9ACu;
label_26a9ac:
    // 0x26a9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a9b0:
    // 0x26a9b0: 0xc041532  jal         func_1054C8
label_26a9b4:
    if (ctx->pc == 0x26A9B4u) {
        ctx->pc = 0x26A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9B0u;
        // 0x26a9b4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A9B8u;
        goto label_26a9b8;
    }
    ctx->pc = 0x26A9B0u;
    SET_GPR_U32(ctx, 31, 0x26A9B8u);
    ctx->pc = 0x26A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A9B0u;
    // 0x26a9b4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26A9B0u, 0x26A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9B8u;
label_26a9b8:
    // 0x26a9b8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x26a9b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a9bc:
    // 0x26a9bc: 0xc08a122  jal         func_228488
label_26a9c0:
    if (ctx->pc == 0x26A9C0u) {
        ctx->pc = 0x26A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9BCu;
        // 0x26a9c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A9C4u;
        goto label_26a9c4;
    }
    ctx->pc = 0x26A9BCu;
    SET_GPR_U32(ctx, 31, 0x26A9C4u);
    ctx->pc = 0x26A9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A9BCu;
    // 0x26a9c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228488u, 0x26A9BCu, 0x26A9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9C4u;
label_26a9c4:
    // 0x26a9c4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_26a9c8:
    if (ctx->pc == 0x26A9C8u) {
        ctx->pc = 0x26A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9C4u;
        // 0x26a9c8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A9CCu;
        goto label_26a9cc;
    }
    ctx->pc = 0x26A9C4u;
    {
        const bool branch_taken_0x26a9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9C4u;
        // 0x26a9c8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9c4) {
            ctx->pc = 0x26AA5Cu;
            goto label_26aa5c;
        }
    }
    ctx->pc = 0x26A9CCu;
label_26a9cc:
    // 0x26a9cc: 0x8e3000d8  lw          $s0, 0xD8($s1)
    ctx->pc = 0x26a9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26a9d0:
    // 0x26a9d0: 0xc05d484  jal         func_175210
label_26a9d4:
    if (ctx->pc == 0x26A9D4u) {
        ctx->pc = 0x26A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9D0u;
        // 0x26a9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A9D8u;
        goto label_26a9d8;
    }
    ctx->pc = 0x26A9D0u;
    SET_GPR_U32(ctx, 31, 0x26A9D8u);
    ctx->pc = 0x26A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A9D0u;
    // 0x26a9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26A9D0u, 0x26A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9D8u;
label_26a9d8:
    // 0x26a9d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26a9d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a9dc:
    // 0x26a9dc: 0xc05dc36  jal         func_1770D8
label_26a9e0:
    if (ctx->pc == 0x26A9E0u) {
        ctx->pc = 0x26A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9DCu;
        // 0x26a9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A9E4u;
        goto label_26a9e4;
    }
    ctx->pc = 0x26A9DCu;
    SET_GPR_U32(ctx, 31, 0x26A9E4u);
    ctx->pc = 0x26A9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A9DCu;
    // 0x26a9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1770D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1770D8u, 0x26A9DCu, 0x26A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9E4u;
label_26a9e4:
    // 0x26a9e4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x26a9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_26a9e8:
    // 0x26a9e8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x26a9e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_26a9ec:
    // 0x26a9ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26a9ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26a9f0:
    // 0x26a9f0: 0x0  nop
    ctx->pc = 0x26a9f0u;
    // NOP
label_26a9f4:
    // 0x26a9f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26a9f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26a9f8:
    // 0x26a9f8: 0x0  nop
    ctx->pc = 0x26a9f8u;
    // NOP
label_26a9fc:
    // 0x26a9fc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_26aa00:
    if (ctx->pc == 0x26AA00u) {
        ctx->pc = 0x26AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9FCu;
        // 0x26aa00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA04u;
        goto label_26aa04;
    }
    ctx->pc = 0x26A9FCu;
    {
        const bool branch_taken_0x26a9fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9FCu;
        // 0x26aa00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9fc) {
            ctx->pc = 0x26AA44u;
            goto label_26aa44;
        }
    }
    ctx->pc = 0x26AA04u;
label_26aa04:
    // 0x26aa04: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26aa08:
    // 0x26aa08: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_26aa0c:
    // 0x26aa0c: 0x241600c3  addiu       $s6, $zero, 0xC3
    ctx->pc = 0x26aa0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
label_26aa10:
    // 0x26aa10: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x26aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26aa14:
    // 0x26aa14: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26aa14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26aa18:
    // 0x26aa18: 0x40f809  jalr        $v0
label_26aa1c:
    if (ctx->pc == 0x26AA1Cu) {
        ctx->pc = 0x26AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA18u;
        // 0x26aa1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA20u;
        goto label_26aa20;
    }
    ctx->pc = 0x26AA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AA20u);
        ctx->pc = 0x26AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA18u;
        // 0x26aa1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AA18u, 0x26AA20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AA20u;
label_26aa20:
    // 0x26aa20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26aa20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26aa24:
    // 0x26aa24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26aa24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26aa28:
    // 0x26aa28: 0xc040698  jal         func_101A60
label_26aa2c:
    if (ctx->pc == 0x26AA2Cu) {
        ctx->pc = 0x26AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA28u;
        // 0x26aa2c: 0x240600c3  addiu       $a2, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA30u;
        goto label_26aa30;
    }
    ctx->pc = 0x26AA28u;
    SET_GPR_U32(ctx, 31, 0x26AA30u);
    ctx->pc = 0x26AA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AA28u;
    // 0x26aa2c: 0x240600c3  addiu       $a2, $zero, 0xC3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A60u, 0x26AA28u, 0x26AA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA30u;
label_26aa30:
    // 0x26aa30: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26aa34:
    // 0x26aa34: 0x946200be  lhu         $v0, 0xBE($v1)
    ctx->pc = 0x26aa34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 190)));
label_26aa38:
    // 0x26aa38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26aa3c:
    // 0x26aa3c: 0x10000006  b           . + 4 + (0x6 << 2)
label_26aa40:
    if (ctx->pc == 0x26AA40u) {
        ctx->pc = 0x26AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA3Cu;
        // 0x26aa40: 0xa46200be  sh          $v0, 0xBE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 190), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA44u;
        goto label_26aa44;
    }
    ctx->pc = 0x26AA3Cu;
    {
        const bool branch_taken_0x26aa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA3Cu;
        // 0x26aa40: 0xa46200be  sh          $v0, 0xBE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 190), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa3c) {
            ctx->pc = 0x26AA58u;
            goto label_26aa58;
        }
    }
    ctx->pc = 0x26AA44u;
label_26aa44:
    // 0x26aa44: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x26aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26aa48:
    // 0x26aa48: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x26aa48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_26aa4c:
    // 0x26aa4c: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x26aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_26aa50:
    // 0x26aa50: 0x60f809  jalr        $v1
label_26aa54:
    if (ctx->pc == 0x26AA54u) {
        ctx->pc = 0x26AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA50u;
        // 0x26aa54: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA58u;
        goto label_26aa58;
    }
    ctx->pc = 0x26AA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26AA58u);
        ctx->pc = 0x26AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA50u;
        // 0x26aa54: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AA50u, 0x26AA58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AA58u;
label_26aa58:
    // 0x26aa58: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x26aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26aa5c:
    // 0x26aa5c: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_26aa60:
    if (ctx->pc == 0x26AA60u) {
        ctx->pc = 0x26AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA5Cu;
        // 0x26aa60: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA64u;
        goto label_26aa64;
    }
    ctx->pc = 0x26AA5Cu;
    {
        const bool branch_taken_0x26aa5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA5Cu;
        // 0x26aa60: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa5c) {
            ctx->pc = 0x26AC54u;
            goto label_26ac54;
        }
    }
    ctx->pc = 0x26AA64u;
label_26aa64:
    // 0x26aa64: 0xc087502  jal         func_21D408
label_26aa68:
    if (ctx->pc == 0x26AA68u) {
        ctx->pc = 0x26AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA64u;
        // 0x26aa68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA6Cu;
        goto label_26aa6c;
    }
    ctx->pc = 0x26AA64u;
    SET_GPR_U32(ctx, 31, 0x26AA6Cu);
    ctx->pc = 0x26AA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AA64u;
    // 0x26aa68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x26AA64u, 0x26AA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA6Cu;
label_26aa6c:
    // 0x26aa6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26aa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_26aa70:
    // 0x26aa70: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_26aa74:
    if (ctx->pc == 0x26AA74u) {
        ctx->pc = 0x26AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA70u;
        // 0x26aa74: 0x2ac60128  slti        $a2, $s6, 0x128 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)296) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA78u;
        goto label_26aa78;
    }
    ctx->pc = 0x26AA70u;
    {
        const bool branch_taken_0x26aa70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA70u;
        // 0x26aa74: 0x2ac60128  slti        $a2, $s6, 0x128 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)296) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa70) {
            ctx->pc = 0x26AA94u;
            goto label_26aa94;
        }
    }
    ctx->pc = 0x26AA78u;
label_26aa78:
    // 0x26aa78: 0xc089b98  jal         func_226E60
label_26aa7c:
    if (ctx->pc == 0x26AA7Cu) {
        ctx->pc = 0x26AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA78u;
        // 0x26aa7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA80u;
        goto label_26aa80;
    }
    ctx->pc = 0x26AA78u;
    SET_GPR_U32(ctx, 31, 0x26AA80u);
    ctx->pc = 0x26AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AA78u;
    // 0x26aa7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x26AA78u, 0x26AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA80u;
label_26aa80:
    // 0x26aa80: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
label_26aa84:
    if (ctx->pc == 0x26AA84u) {
        ctx->pc = 0x26AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA80u;
        // 0x26aa84: 0x2ac60128  slti        $a2, $s6, 0x128 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)296) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA88u;
        goto label_26aa88;
    }
    ctx->pc = 0x26AA80u;
    {
        const bool branch_taken_0x26aa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x26AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA80u;
        // 0x26aa84: 0x2ac60128  slti        $a2, $s6, 0x128 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)296) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa80) {
            ctx->pc = 0x26AA94u;
            goto label_26aa94;
        }
    }
    ctx->pc = 0x26AA88u;
label_26aa88:
    // 0x26aa88: 0xc089bdc  jal         func_226F70
label_26aa8c:
    if (ctx->pc == 0x26AA8Cu) {
        ctx->pc = 0x26AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA88u;
        // 0x26aa8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA90u;
        goto label_26aa90;
    }
    ctx->pc = 0x26AA88u;
    SET_GPR_U32(ctx, 31, 0x26AA90u);
    ctx->pc = 0x26AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AA88u;
    // 0x26aa8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x26AA88u, 0x26AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA90u;
label_26aa90:
    // 0x26aa90: 0x2ac60128  slti        $a2, $s6, 0x128
    ctx->pc = 0x26aa90u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)296) ? 1 : 0);
label_26aa94:
    // 0x26aa94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26aa94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26aa98:
    // 0x26aa98: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x26aa98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_26aa9c:
    // 0x26aa9c: 0xc08bc40  jal         func_22F100
label_26aaa0:
    if (ctx->pc == 0x26AAA0u) {
        ctx->pc = 0x26AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA9Cu;
        // 0x26aaa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AAA4u;
        goto label_26aaa4;
    }
    ctx->pc = 0x26AA9Cu;
    SET_GPR_U32(ctx, 31, 0x26AAA4u);
    ctx->pc = 0x26AAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AA9Cu;
    // 0x26aaa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F100u, 0x26AA9Cu, 0x26AAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AAA4u;
label_26aaa4:
    // 0x26aaa4: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
label_26aaa8:
    if (ctx->pc == 0x26AAA8u) {
        ctx->pc = 0x26AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAA4u;
        // 0x26aaa8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AAACu;
        goto label_26aaac;
    }
    ctx->pc = 0x26AAA4u;
    {
        const bool branch_taken_0x26aaa4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAA4u;
        // 0x26aaa8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aaa4) {
            ctx->pc = 0x26AACCu;
            goto label_26aacc;
        }
    }
    ctx->pc = 0x26AAACu;
label_26aaac:
    // 0x26aaac: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26aaacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26aab0:
    // 0x26aab0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26aab0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26aab4:
    // 0x26aab4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26aab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26aab8:
    // 0x26aab8: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x26aab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_26aabc:
    // 0x26aabc: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x26aabcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_26aac0:
    // 0x26aac0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26aac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26aac4:
    // 0x26aac4: 0xc041b20  jal         func_106C80
label_26aac8:
    if (ctx->pc == 0x26AAC8u) {
        ctx->pc = 0x26AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAC4u;
        // 0x26aac8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AACCu;
        goto label_26aacc;
    }
    ctx->pc = 0x26AAC4u;
    SET_GPR_U32(ctx, 31, 0x26AACCu);
    ctx->pc = 0x26AAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AAC4u;
    // 0x26aac8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26AAC4u, 0x26AACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AACCu;
label_26aacc:
    // 0x26aacc: 0xc05d484  jal         func_175210
label_26aad0:
    if (ctx->pc == 0x26AAD0u) {
        ctx->pc = 0x26AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AACCu;
        // 0x26aad0: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AAD4u;
        goto label_26aad4;
    }
    ctx->pc = 0x26AACCu;
    SET_GPR_U32(ctx, 31, 0x26AAD4u);
    ctx->pc = 0x26AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AACCu;
    // 0x26aad0: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26AACCu, 0x26AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AAD4u;
label_26aad4:
    // 0x26aad4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26aad8:
    // 0x26aad8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26aad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26aadc:
    // 0x26aadc: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26aadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26aae0:
    // 0x26aae0: 0xa0f809  jalr        $a1
label_26aae4:
    if (ctx->pc == 0x26AAE4u) {
        ctx->pc = 0x26AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAE0u;
        // 0x26aae4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AAE8u;
        goto label_26aae8;
    }
    ctx->pc = 0x26AAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26AAE8u);
        ctx->pc = 0x26AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAE0u;
        // 0x26aae4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AAE0u, 0x26AAE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AAE8u;
label_26aae8:
    // 0x26aae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26aae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26aaec:
    // 0x26aaec: 0xc087016  jal         func_21C058
label_26aaf0:
    if (ctx->pc == 0x26AAF0u) {
        ctx->pc = 0x26AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAECu;
        // 0x26aaf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AAF4u;
        goto label_26aaf4;
    }
    ctx->pc = 0x26AAECu;
    SET_GPR_U32(ctx, 31, 0x26AAF4u);
    ctx->pc = 0x26AAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AAECu;
    // 0x26aaf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26AAECu, 0x26AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AAF4u;
label_26aaf4:
    // 0x26aaf4: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_26aaf8:
    if (ctx->pc == 0x26AAF8u) {
        ctx->pc = 0x26AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAF4u;
        // 0x26aaf8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AAFCu;
        goto label_26aafc;
    }
    ctx->pc = 0x26AAF4u;
    {
        const bool branch_taken_0x26aaf4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAF4u;
        // 0x26aaf8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aaf4) {
            ctx->pc = 0x26AB18u;
            goto label_26ab18;
        }
    }
    ctx->pc = 0x26AAFCu;
label_26aafc:
    // 0x26aafc: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26ab00:
    // 0x26ab00: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26ab00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26ab04:
    // 0x26ab04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26ab04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26ab08:
    // 0x26ab08: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26ab08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26ab0c:
    // 0x26ab0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26ab0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ab10:
    // 0x26ab10: 0xc04159e  jal         func_105678
label_26ab14:
    if (ctx->pc == 0x26AB14u) {
        ctx->pc = 0x26AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB10u;
        // 0x26ab14: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AB18u;
        goto label_26ab18;
    }
    ctx->pc = 0x26AB10u;
    SET_GPR_U32(ctx, 31, 0x26AB18u);
    ctx->pc = 0x26AB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB10u;
    // 0x26ab14: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26AB10u, 0x26AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB18u;
label_26ab18:
    // 0x26ab18: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x26ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26ab1c:
    // 0x26ab1c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x26ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_26ab20:
    // 0x26ab20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x26ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26ab24:
    // 0x26ab24: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_26ab28:
    if (ctx->pc == 0x26AB28u) {
        ctx->pc = 0x26AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB24u;
        // 0x26ab28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AB2Cu;
        goto label_26ab2c;
    }
    ctx->pc = 0x26AB24u;
    {
        const bool branch_taken_0x26ab24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB24u;
        // 0x26ab28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab24) {
            ctx->pc = 0x26AB88u;
            goto label_26ab88;
        }
    }
    ctx->pc = 0x26AB2Cu;
label_26ab2c:
    // 0x26ab2c: 0xc089990  jal         func_226640
label_26ab30:
    if (ctx->pc == 0x26AB30u) {
        ctx->pc = 0x26AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB2Cu;
        // 0x26ab30: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AB34u;
        goto label_26ab34;
    }
    ctx->pc = 0x26AB2Cu;
    SET_GPR_U32(ctx, 31, 0x26AB34u);
    ctx->pc = 0x26AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB2Cu;
    // 0x26ab30: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26AB2Cu, 0x26AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB34u;
label_26ab34:
    // 0x26ab34: 0x52a00040  beql        $s5, $zero, . + 4 + (0x40 << 2)
label_26ab38:
    if (ctx->pc == 0x26AB38u) {
        ctx->pc = 0x26AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB34u;
        // 0x26ab38: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AB3Cu;
        goto label_26ab3c;
    }
    ctx->pc = 0x26AB34u;
    {
        const bool branch_taken_0x26ab34 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ab34) {
            ctx->pc = 0x26AB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AB34u;
            // 0x26ab38: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AC38u;
            goto label_26ac38;
        }
    }
    ctx->pc = 0x26AB3Cu;
label_26ab3c:
    // 0x26ab3c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26ab40:
    // 0x26ab40: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26ab40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26ab44:
    // 0x26ab44: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26ab48:
    // 0x26ab48: 0x40f809  jalr        $v0
label_26ab4c:
    if (ctx->pc == 0x26AB4Cu) {
        ctx->pc = 0x26AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB48u;
        // 0x26ab4c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AB50u;
        goto label_26ab50;
    }
    ctx->pc = 0x26AB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AB50u);
        ctx->pc = 0x26AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB48u;
        // 0x26ab4c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AB48u, 0x26AB50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AB50u;
label_26ab50:
    // 0x26ab50: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x26ab50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_26ab54:
    // 0x26ab54: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26ab54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26ab58:
    // 0x26ab58: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26ab58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26ab5c:
    // 0x26ab5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26ab5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ab60:
    // 0x26ab60: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x26ab60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26ab64:
    // 0x26ab64: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26ab64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26ab68:
    // 0x26ab68: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26ab68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ab6c:
    // 0x26ab6c: 0x254aa1f8  addiu       $t2, $t2, -0x5E08
    ctx->pc = 0x26ab6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943224));
label_26ab70:
    // 0x26ab70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26ab70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26ab74:
    // 0x26ab74: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26ab74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26ab78:
    // 0x26ab78: 0xc041664  jal         func_105990
label_26ab7c:
    if (ctx->pc == 0x26AB7Cu) {
        ctx->pc = 0x26AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB78u;
        // 0x26ab7c: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AB80u;
        goto label_26ab80;
    }
    ctx->pc = 0x26AB78u;
    SET_GPR_U32(ctx, 31, 0x26AB80u);
    ctx->pc = 0x26AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB78u;
    // 0x26ab7c: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26AB78u, 0x26AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB80u;
label_26ab80:
    // 0x26ab80: 0x1000002d  b           . + 4 + (0x2D << 2)
label_26ab84:
    if (ctx->pc == 0x26AB84u) {
        ctx->pc = 0x26AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB80u;
        // 0x26ab84: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AB88u;
        goto label_26ab88;
    }
    ctx->pc = 0x26AB80u;
    {
        const bool branch_taken_0x26ab80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB80u;
        // 0x26ab84: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab80) {
            ctx->pc = 0x26AC38u;
            goto label_26ac38;
        }
    }
    ctx->pc = 0x26AB88u;
label_26ab88:
    // 0x26ab88: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x26ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_26ab8c:
    // 0x26ab8c: 0xc041532  jal         func_1054C8
label_26ab90:
    if (ctx->pc == 0x26AB90u) {
        ctx->pc = 0x26AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB8Cu;
        // 0x26ab90: 0x2444df28  addiu       $a0, $v0, -0x20D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AB94u;
        goto label_26ab94;
    }
    ctx->pc = 0x26AB8Cu;
    SET_GPR_U32(ctx, 31, 0x26AB94u);
    ctx->pc = 0x26AB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB8Cu;
    // 0x26ab90: 0x2444df28  addiu       $a0, $v0, -0x20D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26AB8Cu, 0x26AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB94u;
label_26ab94:
    // 0x26ab94: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26ab94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26ab98:
    // 0x26ab98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ab98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ab9c:
    // 0x26ab9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ab9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26aba0:
    // 0x26aba0: 0xc089990  jal         func_226640
label_26aba4:
    if (ctx->pc == 0x26ABA4u) {
        ctx->pc = 0x26ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABA0u;
        // 0x26aba4: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ABA8u;
        goto label_26aba8;
    }
    ctx->pc = 0x26ABA0u;
    SET_GPR_U32(ctx, 31, 0x26ABA8u);
    ctx->pc = 0x26ABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ABA0u;
    // 0x26aba4: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26ABA0u, 0x26ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ABA8u;
label_26aba8:
    // 0x26aba8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_26abac:
    if (ctx->pc == 0x26ABACu) {
        ctx->pc = 0x26ABB0u;
        goto label_26abb0;
    }
    ctx->pc = 0x26ABA8u;
    {
        const bool branch_taken_0x26aba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aba8) {
            ctx->pc = 0x26ABE8u;
            goto label_26abe8;
        }
    }
    ctx->pc = 0x26ABB0u;
label_26abb0:
    // 0x26abb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26abb4:
    // 0x26abb4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26abb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26abb8:
    // 0x26abb8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26abbc:
    // 0x26abbc: 0x40f809  jalr        $v0
label_26abc0:
    if (ctx->pc == 0x26ABC0u) {
        ctx->pc = 0x26ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABBCu;
        // 0x26abc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ABC4u;
        goto label_26abc4;
    }
    ctx->pc = 0x26ABBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26ABC4u);
        ctx->pc = 0x26ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABBCu;
        // 0x26abc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ABBCu, 0x26ABC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26ABC4u;
label_26abc4:
    // 0x26abc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26abc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26abc8:
    // 0x26abc8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26abc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26abcc:
    // 0x26abcc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26abccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26abd0:
    // 0x26abd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26abd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26abd4:
    // 0x26abd4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26abd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26abd8:
    // 0x26abd8: 0x240600c6  addiu       $a2, $zero, 0xC6
    ctx->pc = 0x26abd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
label_26abdc:
    // 0x26abdc: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x26abdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_26abe0:
    // 0x26abe0: 0xc041664  jal         func_105990
label_26abe4:
    if (ctx->pc == 0x26ABE4u) {
        ctx->pc = 0x26ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABE0u;
        // 0x26abe4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ABE8u;
        goto label_26abe8;
    }
    ctx->pc = 0x26ABE0u;
    SET_GPR_U32(ctx, 31, 0x26ABE8u);
    ctx->pc = 0x26ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ABE0u;
    // 0x26abe4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26ABE0u, 0x26ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ABE8u;
label_26abe8:
    // 0x26abe8: 0x52a00013  beql        $s5, $zero, . + 4 + (0x13 << 2)
label_26abec:
    if (ctx->pc == 0x26ABECu) {
        ctx->pc = 0x26ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABE8u;
        // 0x26abec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ABF0u;
        goto label_26abf0;
    }
    ctx->pc = 0x26ABE8u;
    {
        const bool branch_taken_0x26abe8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x26abe8) {
            ctx->pc = 0x26ABECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26ABE8u;
            // 0x26abec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AC38u;
            goto label_26ac38;
        }
    }
    ctx->pc = 0x26ABF0u;
label_26abf0:
    // 0x26abf0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26abf4:
    // 0x26abf4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26abf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26abf8:
    // 0x26abf8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26abfc:
    // 0x26abfc: 0x40f809  jalr        $v0
label_26ac00:
    if (ctx->pc == 0x26AC00u) {
        ctx->pc = 0x26AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABFCu;
        // 0x26ac00: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AC04u;
        goto label_26ac04;
    }
    ctx->pc = 0x26ABFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AC04u);
        ctx->pc = 0x26AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABFCu;
        // 0x26ac00: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ABFCu, 0x26AC04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AC04u;
label_26ac04:
    // 0x26ac04: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x26ac04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_26ac08:
    // 0x26ac08: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x26ac08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_26ac0c:
    // 0x26ac0c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26ac0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26ac10:
    // 0x26ac10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26ac10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ac14:
    // 0x26ac14: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x26ac14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26ac18:
    // 0x26ac18: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x26ac18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26ac1c:
    // 0x26ac1c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26ac1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ac20:
    // 0x26ac20: 0x254aa1f8  addiu       $t2, $t2, -0x5E08
    ctx->pc = 0x26ac20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943224));
label_26ac24:
    // 0x26ac24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26ac24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26ac28:
    // 0x26ac28: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26ac28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26ac2c:
    // 0x26ac2c: 0xc041664  jal         func_105990
label_26ac30:
    if (ctx->pc == 0x26AC30u) {
        ctx->pc = 0x26AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC2Cu;
        // 0x26ac30: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AC34u;
        goto label_26ac34;
    }
    ctx->pc = 0x26AC2Cu;
    SET_GPR_U32(ctx, 31, 0x26AC34u);
    ctx->pc = 0x26AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AC2Cu;
    // 0x26ac30: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26AC2Cu, 0x26AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC34u;
label_26ac34:
    // 0x26ac34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26ac34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26ac38:
    // 0x26ac38: 0xc05d53a  jal         func_1754E8
label_26ac3c:
    if (ctx->pc == 0x26AC3Cu) {
        ctx->pc = 0x26AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC38u;
        // 0x26ac3c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AC40u;
        goto label_26ac40;
    }
    ctx->pc = 0x26AC38u;
    SET_GPR_U32(ctx, 31, 0x26AC40u);
    ctx->pc = 0x26AC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AC38u;
    // 0x26ac3c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26AC38u, 0x26AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC40u;
label_26ac40:
    // 0x26ac40: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26ac40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26ac44:
    // 0x26ac44: 0xc05d4f6  jal         func_1753D8
label_26ac48:
    if (ctx->pc == 0x26AC48u) {
        ctx->pc = 0x26AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC44u;
        // 0x26ac48: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AC4Cu;
        goto label_26ac4c;
    }
    ctx->pc = 0x26AC44u;
    SET_GPR_U32(ctx, 31, 0x26AC4Cu);
    ctx->pc = 0x26AC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AC44u;
    // 0x26ac48: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26AC44u, 0x26AC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC4Cu;
label_26ac4c:
    // 0x26ac4c: 0x1000005b  b           . + 4 + (0x5B << 2)
label_26ac50:
    if (ctx->pc == 0x26AC50u) {
        ctx->pc = 0x26AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC4Cu;
        // 0x26ac50: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AC54u;
        goto label_26ac54;
    }
    ctx->pc = 0x26AC4Cu;
    {
        const bool branch_taken_0x26ac4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC4Cu;
        // 0x26ac50: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac4c) {
            ctx->pc = 0x26ADBCu;
            goto label_26adbc;
        }
    }
    ctx->pc = 0x26AC54u;
label_26ac54:
    // 0x26ac54: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_26ac58:
    if (ctx->pc == 0x26AC58u) {
        ctx->pc = 0x26AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC54u;
        // 0x26ac58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AC5Cu;
        goto label_26ac5c;
    }
    ctx->pc = 0x26AC54u;
    {
        const bool branch_taken_0x26ac54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC54u;
        // 0x26ac58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac54) {
            ctx->pc = 0x26AC94u;
            goto label_26ac94;
        }
    }
    ctx->pc = 0x26AC5Cu;
label_26ac5c:
    // 0x26ac5c: 0xc08bd96  jal         func_22F658
label_26ac60:
    if (ctx->pc == 0x26AC60u) {
        ctx->pc = 0x26AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC5Cu;
        // 0x26ac60: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AC64u;
        goto label_26ac64;
    }
    ctx->pc = 0x26AC5Cu;
    SET_GPR_U32(ctx, 31, 0x26AC64u);
    ctx->pc = 0x26AC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AC5Cu;
    // 0x26ac60: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x26AC5Cu, 0x26AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC64u;
label_26ac64:
    // 0x26ac64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ac64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26ac68:
    // 0x26ac68: 0xc04062e  jal         func_1018B8
label_26ac6c:
    if (ctx->pc == 0x26AC6Cu) {
        ctx->pc = 0x26AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC68u;
        // 0x26ac6c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AC70u;
        goto label_26ac70;
    }
    ctx->pc = 0x26AC68u;
    SET_GPR_U32(ctx, 31, 0x26AC70u);
    ctx->pc = 0x26AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AC68u;
    // 0x26ac6c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1018B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1018B8u, 0x26AC68u, 0x26AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC70u;
label_26ac70:
    // 0x26ac70: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26ac70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26ac74:
    // 0x26ac74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26ac74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_26ac78:
    // 0x26ac78: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x26ac78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26ac7c:
    // 0x26ac7c: 0x0  nop
    ctx->pc = 0x26ac7cu;
    // NOP
label_26ac80:
    // 0x26ac80: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_26ac84:
    if (ctx->pc == 0x26AC84u) {
        ctx->pc = 0x26AC88u;
        goto label_26ac88;
    }
    ctx->pc = 0x26AC80u;
    {
        const bool branch_taken_0x26ac80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ac80) {
            ctx->pc = 0x26AC94u;
            goto label_26ac94;
        }
    }
    ctx->pc = 0x26AC88u;
label_26ac88:
    // 0x26ac88: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x26ac88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_26ac8c:
    // 0x26ac8c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26ac8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26ac90:
    // 0x26ac90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26ac90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26ac94:
    // 0x26ac94: 0xc088f88  jal         func_223E20
label_26ac98:
    if (ctx->pc == 0x26AC98u) {
        ctx->pc = 0x26AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC94u;
        // 0x26ac98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AC9Cu;
        goto label_26ac9c;
    }
    ctx->pc = 0x26AC94u;
    SET_GPR_U32(ctx, 31, 0x26AC9Cu);
    ctx->pc = 0x26AC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AC94u;
    // 0x26ac98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x26AC94u, 0x26AC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC9Cu;
label_26ac9c:
    // 0x26ac9c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_26aca0:
    if (ctx->pc == 0x26ACA0u) {
        ctx->pc = 0x26ACA4u;
        goto label_26aca4;
    }
    ctx->pc = 0x26AC9Cu;
    {
        const bool branch_taken_0x26ac9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ac9c) {
            ctx->pc = 0x26ACDCu;
            goto label_26acdc;
        }
    }
    ctx->pc = 0x26ACA4u;
label_26aca4:
    // 0x26aca4: 0xc0899ae  jal         func_2266B8
label_26aca8:
    if (ctx->pc == 0x26ACA8u) {
        ctx->pc = 0x26ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACA4u;
        // 0x26aca8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ACACu;
        goto label_26acac;
    }
    ctx->pc = 0x26ACA4u;
    SET_GPR_U32(ctx, 31, 0x26ACACu);
    ctx->pc = 0x26ACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ACA4u;
    // 0x26aca8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x26ACA4u, 0x26ACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ACACu;
label_26acac:
    // 0x26acac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26acacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26acb0:
    // 0x26acb0: 0x24020298  addiu       $v0, $zero, 0x298
    ctx->pc = 0x26acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
label_26acb4:
    // 0x26acb4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_26acb8:
    if (ctx->pc == 0x26ACB8u) {
        ctx->pc = 0x26ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACB4u;
        // 0x26acb8: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ACBCu;
        goto label_26acbc;
    }
    ctx->pc = 0x26ACB4u;
    {
        const bool branch_taken_0x26acb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACB4u;
        // 0x26acb8: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26acb4) {
            ctx->pc = 0x26ACD8u;
            goto label_26acd8;
        }
    }
    ctx->pc = 0x26ACBCu;
label_26acbc:
    // 0x26acbc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_26acc0:
    if (ctx->pc == 0x26ACC0u) {
        ctx->pc = 0x26ACC4u;
        goto label_26acc4;
    }
    ctx->pc = 0x26ACBCu;
    {
        const bool branch_taken_0x26acbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26acbc) {
            ctx->pc = 0x26ACDCu;
            goto label_26acdc;
        }
    }
    ctx->pc = 0x26ACC4u;
label_26acc4:
    // 0x26acc4: 0xc08c68e  jal         func_231A38
label_26acc8:
    if (ctx->pc == 0x26ACC8u) {
        ctx->pc = 0x26ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACC4u;
        // 0x26acc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ACCCu;
        goto label_26accc;
    }
    ctx->pc = 0x26ACC4u;
    SET_GPR_U32(ctx, 31, 0x26ACCCu);
    ctx->pc = 0x26ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ACC4u;
    // 0x26acc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x26ACC4u, 0x26ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ACCCu;
label_26accc:
    // 0x26accc: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x26acccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_26acd0:
    // 0x26acd0: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_26acd4:
    if (ctx->pc == 0x26ACD4u) {
        ctx->pc = 0x26ACD8u;
        goto label_26acd8;
    }
    ctx->pc = 0x26ACD0u;
    {
        const bool branch_taken_0x26acd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26acd0) {
            ctx->pc = 0x26ACDCu;
            goto label_26acdc;
        }
    }
    ctx->pc = 0x26ACD8u;
label_26acd8:
    // 0x26acd8: 0x2416004d  addiu       $s6, $zero, 0x4D
    ctx->pc = 0x26acd8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_26acdc:
    // 0x26acdc: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
label_26ace0:
    if (ctx->pc == 0x26ACE0u) {
        ctx->pc = 0x26ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACDCu;
        // 0x26ace0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ACE4u;
        goto label_26ace4;
    }
    ctx->pc = 0x26ACDCu;
    {
        const bool branch_taken_0x26acdc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACDCu;
        // 0x26ace0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26acdc) {
            ctx->pc = 0x26ACFCu;
            goto label_26acfc;
        }
    }
    ctx->pc = 0x26ACE4u;
label_26ace4:
    // 0x26ace4: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26ace4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26ace8:
    // 0x26ace8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26ace8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26acec:
    // 0x26acec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x26acecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_26acf0:
    // 0x26acf0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26acf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26acf4:
    // 0x26acf4: 0xc041b20  jal         func_106C80
label_26acf8:
    if (ctx->pc == 0x26ACF8u) {
        ctx->pc = 0x26ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACF4u;
        // 0x26acf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ACFCu;
        goto label_26acfc;
    }
    ctx->pc = 0x26ACF4u;
    SET_GPR_U32(ctx, 31, 0x26ACFCu);
    ctx->pc = 0x26ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ACF4u;
    // 0x26acf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26ACF4u, 0x26ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ACFCu;
label_26acfc:
    // 0x26acfc: 0xc05d484  jal         func_175210
label_26ad00:
    if (ctx->pc == 0x26AD00u) {
        ctx->pc = 0x26AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACFCu;
        // 0x26ad00: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AD04u;
        goto label_26ad04;
    }
    ctx->pc = 0x26ACFCu;
    SET_GPR_U32(ctx, 31, 0x26AD04u);
    ctx->pc = 0x26AD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ACFCu;
    // 0x26ad00: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26ACFCu, 0x26AD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD04u;
label_26ad04:
    // 0x26ad04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26ad08:
    // 0x26ad08: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26ad08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26ad0c:
    // 0x26ad0c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26ad0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26ad10:
    // 0x26ad10: 0xa0f809  jalr        $a1
label_26ad14:
    if (ctx->pc == 0x26AD14u) {
        ctx->pc = 0x26AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD10u;
        // 0x26ad14: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AD18u;
        goto label_26ad18;
    }
    ctx->pc = 0x26AD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26AD18u);
        ctx->pc = 0x26AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD10u;
        // 0x26ad14: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AD10u, 0x26AD18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AD18u;
label_26ad18:
    // 0x26ad18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ad18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26ad1c:
    // 0x26ad1c: 0xc087016  jal         func_21C058
label_26ad20:
    if (ctx->pc == 0x26AD20u) {
        ctx->pc = 0x26AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD1Cu;
        // 0x26ad20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AD24u;
        goto label_26ad24;
    }
    ctx->pc = 0x26AD1Cu;
    SET_GPR_U32(ctx, 31, 0x26AD24u);
    ctx->pc = 0x26AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AD1Cu;
    // 0x26ad20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26AD1Cu, 0x26AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD24u;
label_26ad24:
    // 0x26ad24: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_26ad28:
    if (ctx->pc == 0x26AD28u) {
        ctx->pc = 0x26AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD24u;
        // 0x26ad28: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AD2Cu;
        goto label_26ad2c;
    }
    ctx->pc = 0x26AD24u;
    {
        const bool branch_taken_0x26ad24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD24u;
        // 0x26ad28: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad24) {
            ctx->pc = 0x26AD48u;
            goto label_26ad48;
        }
    }
    ctx->pc = 0x26AD2Cu;
label_26ad2c:
    // 0x26ad2c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26ad30:
    // 0x26ad30: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26ad30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26ad34:
    // 0x26ad34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26ad34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26ad38:
    // 0x26ad38: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26ad38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26ad3c:
    // 0x26ad3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26ad3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ad40:
    // 0x26ad40: 0xc04159e  jal         func_105678
label_26ad44:
    if (ctx->pc == 0x26AD44u) {
        ctx->pc = 0x26AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD40u;
        // 0x26ad44: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AD48u;
        goto label_26ad48;
    }
    ctx->pc = 0x26AD40u;
    SET_GPR_U32(ctx, 31, 0x26AD48u);
    ctx->pc = 0x26AD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AD40u;
    // 0x26ad44: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26AD40u, 0x26AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD48u;
label_26ad48:
    // 0x26ad48: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26ad4c:
    // 0x26ad4c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x26ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_26ad50:
    // 0x26ad50: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
label_26ad54:
    if (ctx->pc == 0x26AD54u) {
        ctx->pc = 0x26AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD50u;
        // 0x26ad54: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AD58u;
        goto label_26ad58;
    }
    ctx->pc = 0x26AD50u;
    {
        const bool branch_taken_0x26ad50 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD50u;
        // 0x26ad54: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad50) {
            ctx->pc = 0x26AD94u;
            goto label_26ad94;
        }
    }
    ctx->pc = 0x26AD58u;
label_26ad58:
    // 0x26ad58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26ad5c:
    // 0x26ad5c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26ad5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26ad60:
    // 0x26ad60: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26ad64:
    // 0x26ad64: 0x40f809  jalr        $v0
label_26ad68:
    if (ctx->pc == 0x26AD68u) {
        ctx->pc = 0x26AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD64u;
        // 0x26ad68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AD6Cu;
        goto label_26ad6c;
    }
    ctx->pc = 0x26AD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AD6Cu);
        ctx->pc = 0x26AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD64u;
        // 0x26ad68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AD64u, 0x26AD6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AD6Cu;
label_26ad6c:
    // 0x26ad6c: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x26ad6cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_26ad70:
    // 0x26ad70: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x26ad70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26ad74:
    // 0x26ad74: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26ad74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26ad78:
    // 0x26ad78: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26ad78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ad7c:
    // 0x26ad7c: 0x254aa1f0  addiu       $t2, $t2, -0x5E10
    ctx->pc = 0x26ad7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943216));
label_26ad80:
    // 0x26ad80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26ad80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_26ad84:
    // 0x26ad84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26ad84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26ad88:
    // 0x26ad88: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26ad88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26ad8c:
    // 0x26ad8c: 0xc041664  jal         func_105990
label_26ad90:
    if (ctx->pc == 0x26AD90u) {
        ctx->pc = 0x26AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD8Cu;
        // 0x26ad90: 0x24080400  addiu       $t0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AD94u;
        goto label_26ad94;
    }
    ctx->pc = 0x26AD8Cu;
    SET_GPR_U32(ctx, 31, 0x26AD94u);
    ctx->pc = 0x26AD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AD8Cu;
    // 0x26ad90: 0x24080400  addiu       $t0, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26AD8Cu, 0x26AD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD94u;
label_26ad94:
    // 0x26ad94: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26ad94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26ad98:
    // 0x26ad98: 0xc05d53a  jal         func_1754E8
label_26ad9c:
    if (ctx->pc == 0x26AD9Cu) {
        ctx->pc = 0x26AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD98u;
        // 0x26ad9c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ADA0u;
        goto label_26ada0;
    }
    ctx->pc = 0x26AD98u;
    SET_GPR_U32(ctx, 31, 0x26ADA0u);
    ctx->pc = 0x26AD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AD98u;
    // 0x26ad9c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26AD98u, 0x26ADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ADA0u;
label_26ada0:
    // 0x26ada0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26ada0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26ada4:
    // 0x26ada4: 0xc05d4f6  jal         func_1753D8
label_26ada8:
    if (ctx->pc == 0x26ADA8u) {
        ctx->pc = 0x26ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADA4u;
        // 0x26ada8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ADACu;
        goto label_26adac;
    }
    ctx->pc = 0x26ADA4u;
    SET_GPR_U32(ctx, 31, 0x26ADACu);
    ctx->pc = 0x26ADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ADA4u;
    // 0x26ada8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26ADA4u, 0x26ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ADACu;
label_26adac:
    // 0x26adac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26adacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26adb0:
    // 0x26adb0: 0xc089990  jal         func_226640
label_26adb4:
    if (ctx->pc == 0x26ADB4u) {
        ctx->pc = 0x26ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADB0u;
        // 0x26adb4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ADB8u;
        goto label_26adb8;
    }
    ctx->pc = 0x26ADB0u;
    SET_GPR_U32(ctx, 31, 0x26ADB8u);
    ctx->pc = 0x26ADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ADB0u;
    // 0x26adb4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26ADB0u, 0x26ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ADB8u;
label_26adb8:
    // 0x26adb8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x26adb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_26adbc:
    // 0x26adbc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x26adbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26adc0:
    // 0x26adc0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x26adc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26adc4:
    // 0x26adc4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x26adc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26adc8:
    // 0x26adc8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x26adc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26adcc:
    // 0x26adcc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26adccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26add0:
    // 0x26add0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x26add0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26add4:
    // 0x26add4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x26add4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26add8:
    // 0x26add8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x26add8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26addc:
    // 0x26addc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26addcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26ade0:
    // 0x26ade0: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x26ade0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_26ade4:
    // 0x26ade4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x26ade4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26ade8:
    // 0x26ade8: 0x3e00008  jr          $ra
label_26adec:
    if (ctx->pc == 0x26ADECu) {
        ctx->pc = 0x26ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADE8u;
        // 0x26adec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ADF0u;
        goto label_fallthrough_0x26ade8;
    }
    ctx->pc = 0x26ADE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADE8u;
        // 0x26adec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ADE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26ade8:
    ctx->pc = 0x26ADF0u;
}
