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

// Function: sub_0013A818
// Address: 0x13a818 - 0x13b118
void sub_0013A818_0x13a818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A818_0x13a818");
#endif

    switch (ctx->pc) {
        case 0x13a818u: goto label_13a818;
        case 0x13a81cu: goto label_13a81c;
        case 0x13a820u: goto label_13a820;
        case 0x13a824u: goto label_13a824;
        case 0x13a828u: goto label_13a828;
        case 0x13a82cu: goto label_13a82c;
        case 0x13a830u: goto label_13a830;
        case 0x13a834u: goto label_13a834;
        case 0x13a838u: goto label_13a838;
        case 0x13a83cu: goto label_13a83c;
        case 0x13a840u: goto label_13a840;
        case 0x13a844u: goto label_13a844;
        case 0x13a848u: goto label_13a848;
        case 0x13a84cu: goto label_13a84c;
        case 0x13a850u: goto label_13a850;
        case 0x13a854u: goto label_13a854;
        case 0x13a858u: goto label_13a858;
        case 0x13a85cu: goto label_13a85c;
        case 0x13a860u: goto label_13a860;
        case 0x13a864u: goto label_13a864;
        case 0x13a868u: goto label_13a868;
        case 0x13a86cu: goto label_13a86c;
        case 0x13a870u: goto label_13a870;
        case 0x13a874u: goto label_13a874;
        case 0x13a878u: goto label_13a878;
        case 0x13a87cu: goto label_13a87c;
        case 0x13a880u: goto label_13a880;
        case 0x13a884u: goto label_13a884;
        case 0x13a888u: goto label_13a888;
        case 0x13a88cu: goto label_13a88c;
        case 0x13a890u: goto label_13a890;
        case 0x13a894u: goto label_13a894;
        case 0x13a898u: goto label_13a898;
        case 0x13a89cu: goto label_13a89c;
        case 0x13a8a0u: goto label_13a8a0;
        case 0x13a8a4u: goto label_13a8a4;
        case 0x13a8a8u: goto label_13a8a8;
        case 0x13a8acu: goto label_13a8ac;
        case 0x13a8b0u: goto label_13a8b0;
        case 0x13a8b4u: goto label_13a8b4;
        case 0x13a8b8u: goto label_13a8b8;
        case 0x13a8bcu: goto label_13a8bc;
        case 0x13a8c0u: goto label_13a8c0;
        case 0x13a8c4u: goto label_13a8c4;
        case 0x13a8c8u: goto label_13a8c8;
        case 0x13a8ccu: goto label_13a8cc;
        case 0x13a8d0u: goto label_13a8d0;
        case 0x13a8d4u: goto label_13a8d4;
        case 0x13a8d8u: goto label_13a8d8;
        case 0x13a8dcu: goto label_13a8dc;
        case 0x13a8e0u: goto label_13a8e0;
        case 0x13a8e4u: goto label_13a8e4;
        case 0x13a8e8u: goto label_13a8e8;
        case 0x13a8ecu: goto label_13a8ec;
        case 0x13a8f0u: goto label_13a8f0;
        case 0x13a8f4u: goto label_13a8f4;
        case 0x13a8f8u: goto label_13a8f8;
        case 0x13a8fcu: goto label_13a8fc;
        case 0x13a900u: goto label_13a900;
        case 0x13a904u: goto label_13a904;
        case 0x13a908u: goto label_13a908;
        case 0x13a90cu: goto label_13a90c;
        case 0x13a910u: goto label_13a910;
        case 0x13a914u: goto label_13a914;
        case 0x13a918u: goto label_13a918;
        case 0x13a91cu: goto label_13a91c;
        case 0x13a920u: goto label_13a920;
        case 0x13a924u: goto label_13a924;
        case 0x13a928u: goto label_13a928;
        case 0x13a92cu: goto label_13a92c;
        case 0x13a930u: goto label_13a930;
        case 0x13a934u: goto label_13a934;
        case 0x13a938u: goto label_13a938;
        case 0x13a93cu: goto label_13a93c;
        case 0x13a940u: goto label_13a940;
        case 0x13a944u: goto label_13a944;
        case 0x13a948u: goto label_13a948;
        case 0x13a94cu: goto label_13a94c;
        case 0x13a950u: goto label_13a950;
        case 0x13a954u: goto label_13a954;
        case 0x13a958u: goto label_13a958;
        case 0x13a95cu: goto label_13a95c;
        case 0x13a960u: goto label_13a960;
        case 0x13a964u: goto label_13a964;
        case 0x13a968u: goto label_13a968;
        case 0x13a96cu: goto label_13a96c;
        case 0x13a970u: goto label_13a970;
        case 0x13a974u: goto label_13a974;
        case 0x13a978u: goto label_13a978;
        case 0x13a97cu: goto label_13a97c;
        case 0x13a980u: goto label_13a980;
        case 0x13a984u: goto label_13a984;
        case 0x13a988u: goto label_13a988;
        case 0x13a98cu: goto label_13a98c;
        case 0x13a990u: goto label_13a990;
        case 0x13a994u: goto label_13a994;
        case 0x13a998u: goto label_13a998;
        case 0x13a99cu: goto label_13a99c;
        case 0x13a9a0u: goto label_13a9a0;
        case 0x13a9a4u: goto label_13a9a4;
        case 0x13a9a8u: goto label_13a9a8;
        case 0x13a9acu: goto label_13a9ac;
        case 0x13a9b0u: goto label_13a9b0;
        case 0x13a9b4u: goto label_13a9b4;
        case 0x13a9b8u: goto label_13a9b8;
        case 0x13a9bcu: goto label_13a9bc;
        case 0x13a9c0u: goto label_13a9c0;
        case 0x13a9c4u: goto label_13a9c4;
        case 0x13a9c8u: goto label_13a9c8;
        case 0x13a9ccu: goto label_13a9cc;
        case 0x13a9d0u: goto label_13a9d0;
        case 0x13a9d4u: goto label_13a9d4;
        case 0x13a9d8u: goto label_13a9d8;
        case 0x13a9dcu: goto label_13a9dc;
        case 0x13a9e0u: goto label_13a9e0;
        case 0x13a9e4u: goto label_13a9e4;
        case 0x13a9e8u: goto label_13a9e8;
        case 0x13a9ecu: goto label_13a9ec;
        case 0x13a9f0u: goto label_13a9f0;
        case 0x13a9f4u: goto label_13a9f4;
        case 0x13a9f8u: goto label_13a9f8;
        case 0x13a9fcu: goto label_13a9fc;
        case 0x13aa00u: goto label_13aa00;
        case 0x13aa04u: goto label_13aa04;
        case 0x13aa08u: goto label_13aa08;
        case 0x13aa0cu: goto label_13aa0c;
        case 0x13aa10u: goto label_13aa10;
        case 0x13aa14u: goto label_13aa14;
        case 0x13aa18u: goto label_13aa18;
        case 0x13aa1cu: goto label_13aa1c;
        case 0x13aa20u: goto label_13aa20;
        case 0x13aa24u: goto label_13aa24;
        case 0x13aa28u: goto label_13aa28;
        case 0x13aa2cu: goto label_13aa2c;
        case 0x13aa30u: goto label_13aa30;
        case 0x13aa34u: goto label_13aa34;
        case 0x13aa38u: goto label_13aa38;
        case 0x13aa3cu: goto label_13aa3c;
        case 0x13aa40u: goto label_13aa40;
        case 0x13aa44u: goto label_13aa44;
        case 0x13aa48u: goto label_13aa48;
        case 0x13aa4cu: goto label_13aa4c;
        case 0x13aa50u: goto label_13aa50;
        case 0x13aa54u: goto label_13aa54;
        case 0x13aa58u: goto label_13aa58;
        case 0x13aa5cu: goto label_13aa5c;
        case 0x13aa60u: goto label_13aa60;
        case 0x13aa64u: goto label_13aa64;
        case 0x13aa68u: goto label_13aa68;
        case 0x13aa6cu: goto label_13aa6c;
        case 0x13aa70u: goto label_13aa70;
        case 0x13aa74u: goto label_13aa74;
        case 0x13aa78u: goto label_13aa78;
        case 0x13aa7cu: goto label_13aa7c;
        case 0x13aa80u: goto label_13aa80;
        case 0x13aa84u: goto label_13aa84;
        case 0x13aa88u: goto label_13aa88;
        case 0x13aa8cu: goto label_13aa8c;
        case 0x13aa90u: goto label_13aa90;
        case 0x13aa94u: goto label_13aa94;
        case 0x13aa98u: goto label_13aa98;
        case 0x13aa9cu: goto label_13aa9c;
        case 0x13aaa0u: goto label_13aaa0;
        case 0x13aaa4u: goto label_13aaa4;
        case 0x13aaa8u: goto label_13aaa8;
        case 0x13aaacu: goto label_13aaac;
        case 0x13aab0u: goto label_13aab0;
        case 0x13aab4u: goto label_13aab4;
        case 0x13aab8u: goto label_13aab8;
        case 0x13aabcu: goto label_13aabc;
        case 0x13aac0u: goto label_13aac0;
        case 0x13aac4u: goto label_13aac4;
        case 0x13aac8u: goto label_13aac8;
        case 0x13aaccu: goto label_13aacc;
        case 0x13aad0u: goto label_13aad0;
        case 0x13aad4u: goto label_13aad4;
        case 0x13aad8u: goto label_13aad8;
        case 0x13aadcu: goto label_13aadc;
        case 0x13aae0u: goto label_13aae0;
        case 0x13aae4u: goto label_13aae4;
        case 0x13aae8u: goto label_13aae8;
        case 0x13aaecu: goto label_13aaec;
        case 0x13aaf0u: goto label_13aaf0;
        case 0x13aaf4u: goto label_13aaf4;
        case 0x13aaf8u: goto label_13aaf8;
        case 0x13aafcu: goto label_13aafc;
        case 0x13ab00u: goto label_13ab00;
        case 0x13ab04u: goto label_13ab04;
        case 0x13ab08u: goto label_13ab08;
        case 0x13ab0cu: goto label_13ab0c;
        case 0x13ab10u: goto label_13ab10;
        case 0x13ab14u: goto label_13ab14;
        case 0x13ab18u: goto label_13ab18;
        case 0x13ab1cu: goto label_13ab1c;
        case 0x13ab20u: goto label_13ab20;
        case 0x13ab24u: goto label_13ab24;
        case 0x13ab28u: goto label_13ab28;
        case 0x13ab2cu: goto label_13ab2c;
        case 0x13ab30u: goto label_13ab30;
        case 0x13ab34u: goto label_13ab34;
        case 0x13ab38u: goto label_13ab38;
        case 0x13ab3cu: goto label_13ab3c;
        case 0x13ab40u: goto label_13ab40;
        case 0x13ab44u: goto label_13ab44;
        case 0x13ab48u: goto label_13ab48;
        case 0x13ab4cu: goto label_13ab4c;
        case 0x13ab50u: goto label_13ab50;
        case 0x13ab54u: goto label_13ab54;
        case 0x13ab58u: goto label_13ab58;
        case 0x13ab5cu: goto label_13ab5c;
        case 0x13ab60u: goto label_13ab60;
        case 0x13ab64u: goto label_13ab64;
        case 0x13ab68u: goto label_13ab68;
        case 0x13ab6cu: goto label_13ab6c;
        case 0x13ab70u: goto label_13ab70;
        case 0x13ab74u: goto label_13ab74;
        case 0x13ab78u: goto label_13ab78;
        case 0x13ab7cu: goto label_13ab7c;
        case 0x13ab80u: goto label_13ab80;
        case 0x13ab84u: goto label_13ab84;
        case 0x13ab88u: goto label_13ab88;
        case 0x13ab8cu: goto label_13ab8c;
        case 0x13ab90u: goto label_13ab90;
        case 0x13ab94u: goto label_13ab94;
        case 0x13ab98u: goto label_13ab98;
        case 0x13ab9cu: goto label_13ab9c;
        case 0x13aba0u: goto label_13aba0;
        case 0x13aba4u: goto label_13aba4;
        case 0x13aba8u: goto label_13aba8;
        case 0x13abacu: goto label_13abac;
        case 0x13abb0u: goto label_13abb0;
        case 0x13abb4u: goto label_13abb4;
        case 0x13abb8u: goto label_13abb8;
        case 0x13abbcu: goto label_13abbc;
        case 0x13abc0u: goto label_13abc0;
        case 0x13abc4u: goto label_13abc4;
        case 0x13abc8u: goto label_13abc8;
        case 0x13abccu: goto label_13abcc;
        case 0x13abd0u: goto label_13abd0;
        case 0x13abd4u: goto label_13abd4;
        case 0x13abd8u: goto label_13abd8;
        case 0x13abdcu: goto label_13abdc;
        case 0x13abe0u: goto label_13abe0;
        case 0x13abe4u: goto label_13abe4;
        case 0x13abe8u: goto label_13abe8;
        case 0x13abecu: goto label_13abec;
        case 0x13abf0u: goto label_13abf0;
        case 0x13abf4u: goto label_13abf4;
        case 0x13abf8u: goto label_13abf8;
        case 0x13abfcu: goto label_13abfc;
        case 0x13ac00u: goto label_13ac00;
        case 0x13ac04u: goto label_13ac04;
        case 0x13ac08u: goto label_13ac08;
        case 0x13ac0cu: goto label_13ac0c;
        case 0x13ac10u: goto label_13ac10;
        case 0x13ac14u: goto label_13ac14;
        case 0x13ac18u: goto label_13ac18;
        case 0x13ac1cu: goto label_13ac1c;
        case 0x13ac20u: goto label_13ac20;
        case 0x13ac24u: goto label_13ac24;
        case 0x13ac28u: goto label_13ac28;
        case 0x13ac2cu: goto label_13ac2c;
        case 0x13ac30u: goto label_13ac30;
        case 0x13ac34u: goto label_13ac34;
        case 0x13ac38u: goto label_13ac38;
        case 0x13ac3cu: goto label_13ac3c;
        case 0x13ac40u: goto label_13ac40;
        case 0x13ac44u: goto label_13ac44;
        case 0x13ac48u: goto label_13ac48;
        case 0x13ac4cu: goto label_13ac4c;
        case 0x13ac50u: goto label_13ac50;
        case 0x13ac54u: goto label_13ac54;
        case 0x13ac58u: goto label_13ac58;
        case 0x13ac5cu: goto label_13ac5c;
        case 0x13ac60u: goto label_13ac60;
        case 0x13ac64u: goto label_13ac64;
        case 0x13ac68u: goto label_13ac68;
        case 0x13ac6cu: goto label_13ac6c;
        case 0x13ac70u: goto label_13ac70;
        case 0x13ac74u: goto label_13ac74;
        case 0x13ac78u: goto label_13ac78;
        case 0x13ac7cu: goto label_13ac7c;
        case 0x13ac80u: goto label_13ac80;
        case 0x13ac84u: goto label_13ac84;
        case 0x13ac88u: goto label_13ac88;
        case 0x13ac8cu: goto label_13ac8c;
        case 0x13ac90u: goto label_13ac90;
        case 0x13ac94u: goto label_13ac94;
        case 0x13ac98u: goto label_13ac98;
        case 0x13ac9cu: goto label_13ac9c;
        case 0x13aca0u: goto label_13aca0;
        case 0x13aca4u: goto label_13aca4;
        case 0x13aca8u: goto label_13aca8;
        case 0x13acacu: goto label_13acac;
        case 0x13acb0u: goto label_13acb0;
        case 0x13acb4u: goto label_13acb4;
        case 0x13acb8u: goto label_13acb8;
        case 0x13acbcu: goto label_13acbc;
        case 0x13acc0u: goto label_13acc0;
        case 0x13acc4u: goto label_13acc4;
        case 0x13acc8u: goto label_13acc8;
        case 0x13acccu: goto label_13accc;
        case 0x13acd0u: goto label_13acd0;
        case 0x13acd4u: goto label_13acd4;
        case 0x13acd8u: goto label_13acd8;
        case 0x13acdcu: goto label_13acdc;
        case 0x13ace0u: goto label_13ace0;
        case 0x13ace4u: goto label_13ace4;
        case 0x13ace8u: goto label_13ace8;
        case 0x13acecu: goto label_13acec;
        case 0x13acf0u: goto label_13acf0;
        case 0x13acf4u: goto label_13acf4;
        case 0x13acf8u: goto label_13acf8;
        case 0x13acfcu: goto label_13acfc;
        case 0x13ad00u: goto label_13ad00;
        case 0x13ad04u: goto label_13ad04;
        case 0x13ad08u: goto label_13ad08;
        case 0x13ad0cu: goto label_13ad0c;
        case 0x13ad10u: goto label_13ad10;
        case 0x13ad14u: goto label_13ad14;
        case 0x13ad18u: goto label_13ad18;
        case 0x13ad1cu: goto label_13ad1c;
        case 0x13ad20u: goto label_13ad20;
        case 0x13ad24u: goto label_13ad24;
        case 0x13ad28u: goto label_13ad28;
        case 0x13ad2cu: goto label_13ad2c;
        case 0x13ad30u: goto label_13ad30;
        case 0x13ad34u: goto label_13ad34;
        case 0x13ad38u: goto label_13ad38;
        case 0x13ad3cu: goto label_13ad3c;
        case 0x13ad40u: goto label_13ad40;
        case 0x13ad44u: goto label_13ad44;
        case 0x13ad48u: goto label_13ad48;
        case 0x13ad4cu: goto label_13ad4c;
        case 0x13ad50u: goto label_13ad50;
        case 0x13ad54u: goto label_13ad54;
        case 0x13ad58u: goto label_13ad58;
        case 0x13ad5cu: goto label_13ad5c;
        case 0x13ad60u: goto label_13ad60;
        case 0x13ad64u: goto label_13ad64;
        case 0x13ad68u: goto label_13ad68;
        case 0x13ad6cu: goto label_13ad6c;
        case 0x13ad70u: goto label_13ad70;
        case 0x13ad74u: goto label_13ad74;
        case 0x13ad78u: goto label_13ad78;
        case 0x13ad7cu: goto label_13ad7c;
        case 0x13ad80u: goto label_13ad80;
        case 0x13ad84u: goto label_13ad84;
        case 0x13ad88u: goto label_13ad88;
        case 0x13ad8cu: goto label_13ad8c;
        case 0x13ad90u: goto label_13ad90;
        case 0x13ad94u: goto label_13ad94;
        case 0x13ad98u: goto label_13ad98;
        case 0x13ad9cu: goto label_13ad9c;
        case 0x13ada0u: goto label_13ada0;
        case 0x13ada4u: goto label_13ada4;
        case 0x13ada8u: goto label_13ada8;
        case 0x13adacu: goto label_13adac;
        case 0x13adb0u: goto label_13adb0;
        case 0x13adb4u: goto label_13adb4;
        case 0x13adb8u: goto label_13adb8;
        case 0x13adbcu: goto label_13adbc;
        case 0x13adc0u: goto label_13adc0;
        case 0x13adc4u: goto label_13adc4;
        case 0x13adc8u: goto label_13adc8;
        case 0x13adccu: goto label_13adcc;
        case 0x13add0u: goto label_13add0;
        case 0x13add4u: goto label_13add4;
        case 0x13add8u: goto label_13add8;
        case 0x13addcu: goto label_13addc;
        case 0x13ade0u: goto label_13ade0;
        case 0x13ade4u: goto label_13ade4;
        case 0x13ade8u: goto label_13ade8;
        case 0x13adecu: goto label_13adec;
        case 0x13adf0u: goto label_13adf0;
        case 0x13adf4u: goto label_13adf4;
        case 0x13adf8u: goto label_13adf8;
        case 0x13adfcu: goto label_13adfc;
        case 0x13ae00u: goto label_13ae00;
        case 0x13ae04u: goto label_13ae04;
        case 0x13ae08u: goto label_13ae08;
        case 0x13ae0cu: goto label_13ae0c;
        case 0x13ae10u: goto label_13ae10;
        case 0x13ae14u: goto label_13ae14;
        case 0x13ae18u: goto label_13ae18;
        case 0x13ae1cu: goto label_13ae1c;
        case 0x13ae20u: goto label_13ae20;
        case 0x13ae24u: goto label_13ae24;
        case 0x13ae28u: goto label_13ae28;
        case 0x13ae2cu: goto label_13ae2c;
        case 0x13ae30u: goto label_13ae30;
        case 0x13ae34u: goto label_13ae34;
        case 0x13ae38u: goto label_13ae38;
        case 0x13ae3cu: goto label_13ae3c;
        case 0x13ae40u: goto label_13ae40;
        case 0x13ae44u: goto label_13ae44;
        case 0x13ae48u: goto label_13ae48;
        case 0x13ae4cu: goto label_13ae4c;
        case 0x13ae50u: goto label_13ae50;
        case 0x13ae54u: goto label_13ae54;
        case 0x13ae58u: goto label_13ae58;
        case 0x13ae5cu: goto label_13ae5c;
        case 0x13ae60u: goto label_13ae60;
        case 0x13ae64u: goto label_13ae64;
        case 0x13ae68u: goto label_13ae68;
        case 0x13ae6cu: goto label_13ae6c;
        case 0x13ae70u: goto label_13ae70;
        case 0x13ae74u: goto label_13ae74;
        case 0x13ae78u: goto label_13ae78;
        case 0x13ae7cu: goto label_13ae7c;
        case 0x13ae80u: goto label_13ae80;
        case 0x13ae84u: goto label_13ae84;
        case 0x13ae88u: goto label_13ae88;
        case 0x13ae8cu: goto label_13ae8c;
        case 0x13ae90u: goto label_13ae90;
        case 0x13ae94u: goto label_13ae94;
        case 0x13ae98u: goto label_13ae98;
        case 0x13ae9cu: goto label_13ae9c;
        case 0x13aea0u: goto label_13aea0;
        case 0x13aea4u: goto label_13aea4;
        case 0x13aea8u: goto label_13aea8;
        case 0x13aeacu: goto label_13aeac;
        case 0x13aeb0u: goto label_13aeb0;
        case 0x13aeb4u: goto label_13aeb4;
        case 0x13aeb8u: goto label_13aeb8;
        case 0x13aebcu: goto label_13aebc;
        case 0x13aec0u: goto label_13aec0;
        case 0x13aec4u: goto label_13aec4;
        case 0x13aec8u: goto label_13aec8;
        case 0x13aeccu: goto label_13aecc;
        case 0x13aed0u: goto label_13aed0;
        case 0x13aed4u: goto label_13aed4;
        case 0x13aed8u: goto label_13aed8;
        case 0x13aedcu: goto label_13aedc;
        case 0x13aee0u: goto label_13aee0;
        case 0x13aee4u: goto label_13aee4;
        case 0x13aee8u: goto label_13aee8;
        case 0x13aeecu: goto label_13aeec;
        case 0x13aef0u: goto label_13aef0;
        case 0x13aef4u: goto label_13aef4;
        case 0x13aef8u: goto label_13aef8;
        case 0x13aefcu: goto label_13aefc;
        case 0x13af00u: goto label_13af00;
        case 0x13af04u: goto label_13af04;
        case 0x13af08u: goto label_13af08;
        case 0x13af0cu: goto label_13af0c;
        case 0x13af10u: goto label_13af10;
        case 0x13af14u: goto label_13af14;
        case 0x13af18u: goto label_13af18;
        case 0x13af1cu: goto label_13af1c;
        case 0x13af20u: goto label_13af20;
        case 0x13af24u: goto label_13af24;
        case 0x13af28u: goto label_13af28;
        case 0x13af2cu: goto label_13af2c;
        case 0x13af30u: goto label_13af30;
        case 0x13af34u: goto label_13af34;
        case 0x13af38u: goto label_13af38;
        case 0x13af3cu: goto label_13af3c;
        case 0x13af40u: goto label_13af40;
        case 0x13af44u: goto label_13af44;
        case 0x13af48u: goto label_13af48;
        case 0x13af4cu: goto label_13af4c;
        case 0x13af50u: goto label_13af50;
        case 0x13af54u: goto label_13af54;
        case 0x13af58u: goto label_13af58;
        case 0x13af5cu: goto label_13af5c;
        case 0x13af60u: goto label_13af60;
        case 0x13af64u: goto label_13af64;
        case 0x13af68u: goto label_13af68;
        case 0x13af6cu: goto label_13af6c;
        case 0x13af70u: goto label_13af70;
        case 0x13af74u: goto label_13af74;
        case 0x13af78u: goto label_13af78;
        case 0x13af7cu: goto label_13af7c;
        case 0x13af80u: goto label_13af80;
        case 0x13af84u: goto label_13af84;
        case 0x13af88u: goto label_13af88;
        case 0x13af8cu: goto label_13af8c;
        case 0x13af90u: goto label_13af90;
        case 0x13af94u: goto label_13af94;
        case 0x13af98u: goto label_13af98;
        case 0x13af9cu: goto label_13af9c;
        case 0x13afa0u: goto label_13afa0;
        case 0x13afa4u: goto label_13afa4;
        case 0x13afa8u: goto label_13afa8;
        case 0x13afacu: goto label_13afac;
        case 0x13afb0u: goto label_13afb0;
        case 0x13afb4u: goto label_13afb4;
        case 0x13afb8u: goto label_13afb8;
        case 0x13afbcu: goto label_13afbc;
        case 0x13afc0u: goto label_13afc0;
        case 0x13afc4u: goto label_13afc4;
        case 0x13afc8u: goto label_13afc8;
        case 0x13afccu: goto label_13afcc;
        case 0x13afd0u: goto label_13afd0;
        case 0x13afd4u: goto label_13afd4;
        case 0x13afd8u: goto label_13afd8;
        case 0x13afdcu: goto label_13afdc;
        case 0x13afe0u: goto label_13afe0;
        case 0x13afe4u: goto label_13afe4;
        case 0x13afe8u: goto label_13afe8;
        case 0x13afecu: goto label_13afec;
        case 0x13aff0u: goto label_13aff0;
        case 0x13aff4u: goto label_13aff4;
        case 0x13aff8u: goto label_13aff8;
        case 0x13affcu: goto label_13affc;
        case 0x13b000u: goto label_13b000;
        case 0x13b004u: goto label_13b004;
        case 0x13b008u: goto label_13b008;
        case 0x13b00cu: goto label_13b00c;
        case 0x13b010u: goto label_13b010;
        case 0x13b014u: goto label_13b014;
        case 0x13b018u: goto label_13b018;
        case 0x13b01cu: goto label_13b01c;
        case 0x13b020u: goto label_13b020;
        case 0x13b024u: goto label_13b024;
        case 0x13b028u: goto label_13b028;
        case 0x13b02cu: goto label_13b02c;
        case 0x13b030u: goto label_13b030;
        case 0x13b034u: goto label_13b034;
        case 0x13b038u: goto label_13b038;
        case 0x13b03cu: goto label_13b03c;
        case 0x13b040u: goto label_13b040;
        case 0x13b044u: goto label_13b044;
        case 0x13b048u: goto label_13b048;
        case 0x13b04cu: goto label_13b04c;
        case 0x13b050u: goto label_13b050;
        case 0x13b054u: goto label_13b054;
        case 0x13b058u: goto label_13b058;
        case 0x13b05cu: goto label_13b05c;
        case 0x13b060u: goto label_13b060;
        case 0x13b064u: goto label_13b064;
        case 0x13b068u: goto label_13b068;
        case 0x13b06cu: goto label_13b06c;
        case 0x13b070u: goto label_13b070;
        case 0x13b074u: goto label_13b074;
        case 0x13b078u: goto label_13b078;
        case 0x13b07cu: goto label_13b07c;
        case 0x13b080u: goto label_13b080;
        case 0x13b084u: goto label_13b084;
        case 0x13b088u: goto label_13b088;
        case 0x13b08cu: goto label_13b08c;
        case 0x13b090u: goto label_13b090;
        case 0x13b094u: goto label_13b094;
        case 0x13b098u: goto label_13b098;
        case 0x13b09cu: goto label_13b09c;
        case 0x13b0a0u: goto label_13b0a0;
        case 0x13b0a4u: goto label_13b0a4;
        case 0x13b0a8u: goto label_13b0a8;
        case 0x13b0acu: goto label_13b0ac;
        case 0x13b0b0u: goto label_13b0b0;
        case 0x13b0b4u: goto label_13b0b4;
        case 0x13b0b8u: goto label_13b0b8;
        case 0x13b0bcu: goto label_13b0bc;
        case 0x13b0c0u: goto label_13b0c0;
        case 0x13b0c4u: goto label_13b0c4;
        case 0x13b0c8u: goto label_13b0c8;
        case 0x13b0ccu: goto label_13b0cc;
        case 0x13b0d0u: goto label_13b0d0;
        case 0x13b0d4u: goto label_13b0d4;
        case 0x13b0d8u: goto label_13b0d8;
        case 0x13b0dcu: goto label_13b0dc;
        case 0x13b0e0u: goto label_13b0e0;
        case 0x13b0e4u: goto label_13b0e4;
        case 0x13b0e8u: goto label_13b0e8;
        case 0x13b0ecu: goto label_13b0ec;
        case 0x13b0f0u: goto label_13b0f0;
        case 0x13b0f4u: goto label_13b0f4;
        case 0x13b0f8u: goto label_13b0f8;
        case 0x13b0fcu: goto label_13b0fc;
        case 0x13b100u: goto label_13b100;
        case 0x13b104u: goto label_13b104;
        case 0x13b108u: goto label_13b108;
        case 0x13b10cu: goto label_13b10c;
        case 0x13b110u: goto label_13b110;
        case 0x13b114u: goto label_13b114;
        default: break;
    }

    ctx->pc = 0x13a818u;

label_13a818:
    // 0x13a818: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x13a818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
label_13a81c:
    // 0x13a81c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x13a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_13a820:
    // 0x13a820: 0xafa50220  sw          $a1, 0x220($sp)
    ctx->pc = 0x13a820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 5));
label_13a824:
    // 0x13a824: 0x7fb002c0  sq          $s0, 0x2C0($sp)
    ctx->pc = 0x13a824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 16));
label_13a828:
    // 0x13a828: 0x7fb102b0  sq          $s1, 0x2B0($sp)
    ctx->pc = 0x13a828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 17));
label_13a82c:
    // 0x13a82c: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x13a82cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_13a830:
    // 0x13a830: 0x7fb30290  sq          $s3, 0x290($sp)
    ctx->pc = 0x13a830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 19));
label_13a834:
    // 0x13a834: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x13a834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_13a838:
    // 0x13a838: 0x7fb202a0  sq          $s2, 0x2A0($sp)
    ctx->pc = 0x13a838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 18));
label_13a83c:
    // 0x13a83c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13a83cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13a840:
    // 0x13a840: 0x7fb40280  sq          $s4, 0x280($sp)
    ctx->pc = 0x13a840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 20));
label_13a844:
    // 0x13a844: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13a844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13a848:
    // 0x13a848: 0x7fb50270  sq          $s5, 0x270($sp)
    ctx->pc = 0x13a848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 21));
label_13a84c:
    // 0x13a84c: 0x7fb60260  sq          $s6, 0x260($sp)
    ctx->pc = 0x13a84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 22));
label_13a850:
    // 0x13a850: 0x7fb70250  sq          $s7, 0x250($sp)
    ctx->pc = 0x13a850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 23));
label_13a854:
    // 0x13a854: 0x7fbe0240  sq          $fp, 0x240($sp)
    ctx->pc = 0x13a854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 30));
label_13a858:
    // 0x13a858: 0xffbf0230  sd          $ra, 0x230($sp)
    ctx->pc = 0x13a858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 31));
label_13a85c:
    // 0x13a85c: 0xe7b702e8  swc1        $f23, 0x2E8($sp)
    ctx->pc = 0x13a85cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 744), bits); }
label_13a860:
    // 0x13a860: 0xe7b602e0  swc1        $f22, 0x2E0($sp)
    ctx->pc = 0x13a860u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
label_13a864:
    // 0x13a864: 0xe7b502d8  swc1        $f21, 0x2D8($sp)
    ctx->pc = 0x13a864u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
label_13a868:
    // 0x13a868: 0xe7b402d0  swc1        $f20, 0x2D0($sp)
    ctx->pc = 0x13a868u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_13a86c:
    // 0x13a86c: 0x24479158  addiu       $a3, $v0, -0x6EA8
    ctx->pc = 0x13a86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938968));
label_13a870:
    // 0x13a870: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x13a870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_13a874:
    // 0x13a874: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x13a874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_13a878:
    // 0x13a878: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x13a878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_13a87c:
    // 0x13a87c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x13a87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13a880:
    // 0x13a880: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x13a880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13a884:
    // 0x13a884: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x13a884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_13a888:
    // 0x13a888: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x13a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_13a88c:
    // 0x13a88c: 0x24510090  addiu       $s1, $v0, 0x90
    ctx->pc = 0x13a88cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_13a890:
    // 0x13a890: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x13a890u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_13a894:
    // 0x13a894: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x13a894u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_13a898:
    // 0x13a898: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x13a898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_13a89c:
    // 0x13a89c: 0xc0cd8ec  jal         func_3363B0
label_13a8a0:
    if (ctx->pc == 0x13A8A0u) {
        ctx->pc = 0x13A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A89Cu;
        // 0x13a8a0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A8A4u;
        goto label_13a8a4;
    }
    ctx->pc = 0x13A89Cu;
    SET_GPR_U32(ctx, 31, 0x13A8A4u);
    ctx->pc = 0x13A8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A89Cu;
    // 0x13a8a0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x13A89Cu, 0x13A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A8A4u;
label_13a8a4:
    // 0x13a8a4: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x13a8a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_13a8a8:
    // 0x13a8a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13a8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a8ac:
    // 0x13a8ac: 0x8fa30220  lw          $v1, 0x220($sp)
    ctx->pc = 0x13a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_13a8b0:
    // 0x13a8b0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_13a8b4:
    // 0x13a8b4: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x13a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_13a8b8:
    // 0x13a8b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_13a8bc:
    // 0x13a8bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13a8bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13a8c0:
    // 0x13a8c0: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_13a8c4:
    if (ctx->pc == 0x13A8C4u) {
        ctx->pc = 0x13A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8C0u;
        // 0x13a8c4: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A8C8u;
        goto label_13a8c8;
    }
    ctx->pc = 0x13A8C0u;
    {
        const bool branch_taken_0x13a8c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8C0u;
        // 0x13a8c4: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a8c0) {
            ctx->pc = 0x13A904u;
            goto label_13a904;
        }
    }
    ctx->pc = 0x13A8C8u;
label_13a8c8:
    // 0x13a8c8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x13a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_13a8cc:
    // 0x13a8cc: 0x240200e1  addiu       $v0, $zero, 0xE1
    ctx->pc = 0x13a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
label_13a8d0:
    // 0x13a8d0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_13a8d4:
    if (ctx->pc == 0x13A8D4u) {
        ctx->pc = 0x13A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8D0u;
        // 0x13a8d4: 0x240200e3  addiu       $v0, $zero, 0xE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A8D8u;
        goto label_13a8d8;
    }
    ctx->pc = 0x13A8D0u;
    {
        const bool branch_taken_0x13a8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8D0u;
        // 0x13a8d4: 0x240200e3  addiu       $v0, $zero, 0xE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a8d0) {
            ctx->pc = 0x13A900u;
            goto label_13a900;
        }
    }
    ctx->pc = 0x13A8D8u;
label_13a8d8:
    // 0x13a8d8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_13a8dc:
    if (ctx->pc == 0x13A8DCu) {
        ctx->pc = 0x13A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8D8u;
        // 0x13a8dc: 0x240200e5  addiu       $v0, $zero, 0xE5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A8E0u;
        goto label_13a8e0;
    }
    ctx->pc = 0x13A8D8u;
    {
        const bool branch_taken_0x13a8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8D8u;
        // 0x13a8dc: 0x240200e5  addiu       $v0, $zero, 0xE5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a8d8) {
            ctx->pc = 0x13A900u;
            goto label_13a900;
        }
    }
    ctx->pc = 0x13A8E0u;
label_13a8e0:
    // 0x13a8e0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_13a8e4:
    if (ctx->pc == 0x13A8E4u) {
        ctx->pc = 0x13A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8E0u;
        // 0x13a8e4: 0x240200e7  addiu       $v0, $zero, 0xE7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A8E8u;
        goto label_13a8e8;
    }
    ctx->pc = 0x13A8E0u;
    {
        const bool branch_taken_0x13a8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8E0u;
        // 0x13a8e4: 0x240200e7  addiu       $v0, $zero, 0xE7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a8e0) {
            ctx->pc = 0x13A900u;
            goto label_13a900;
        }
    }
    ctx->pc = 0x13A8E8u;
label_13a8e8:
    // 0x13a8e8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_13a8ec:
    if (ctx->pc == 0x13A8ECu) {
        ctx->pc = 0x13A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8E8u;
        // 0x13a8ec: 0x240200e9  addiu       $v0, $zero, 0xE9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A8F0u;
        goto label_13a8f0;
    }
    ctx->pc = 0x13A8E8u;
    {
        const bool branch_taken_0x13a8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8E8u;
        // 0x13a8ec: 0x240200e9  addiu       $v0, $zero, 0xE9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a8e8) {
            ctx->pc = 0x13A900u;
            goto label_13a900;
        }
    }
    ctx->pc = 0x13A8F0u;
label_13a8f0:
    // 0x13a8f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_13a8f4:
    if (ctx->pc == 0x13A8F4u) {
        ctx->pc = 0x13A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8F0u;
        // 0x13a8f4: 0x240200eb  addiu       $v0, $zero, 0xEB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A8F8u;
        goto label_13a8f8;
    }
    ctx->pc = 0x13A8F0u;
    {
        const bool branch_taken_0x13a8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8F0u;
        // 0x13a8f4: 0x240200eb  addiu       $v0, $zero, 0xEB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a8f0) {
            ctx->pc = 0x13A900u;
            goto label_13a900;
        }
    }
    ctx->pc = 0x13A8F8u;
label_13a8f8:
    // 0x13a8f8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_13a8fc:
    if (ctx->pc == 0x13A8FCu) {
        ctx->pc = 0x13A900u;
        goto label_13a900;
    }
    ctx->pc = 0x13A8F8u;
    {
        const bool branch_taken_0x13a8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13a8f8) {
            ctx->pc = 0x13A904u;
            goto label_13a904;
        }
    }
    ctx->pc = 0x13A900u;
label_13a900:
    // 0x13a900: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a904:
    // 0x13a904: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_13a908:
    if (ctx->pc == 0x13A908u) {
        ctx->pc = 0x13A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A904u;
        // 0x13a908: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A90Cu;
        goto label_13a90c;
    }
    ctx->pc = 0x13A904u;
    {
        const bool branch_taken_0x13a904 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A904u;
        // 0x13a908: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a904) {
            ctx->pc = 0x13A920u;
            goto label_13a920;
        }
    }
    ctx->pc = 0x13A90Cu;
label_13a90c:
    // 0x13a90c: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x13a90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
label_13a910:
    // 0x13a910: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x13a910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_13a914:
    // 0x13a914: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13a914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13a918:
    // 0x13a918: 0x10000005  b           . + 4 + (0x5 << 2)
label_13a91c:
    if (ctx->pc == 0x13A91Cu) {
        ctx->pc = 0x13A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A918u;
        // 0x13a91c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A920u;
        goto label_13a920;
    }
    ctx->pc = 0x13A918u;
    {
        const bool branch_taken_0x13a918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A918u;
        // 0x13a91c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a918) {
            ctx->pc = 0x13A930u;
            goto label_13a930;
        }
    }
    ctx->pc = 0x13A920u;
label_13a920:
    // 0x13a920: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x13a920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_13a924:
    // 0x13a924: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13a924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13a928:
    // 0x13a928: 0x0  nop
    ctx->pc = 0x13a928u;
    // NOP
label_13a92c:
    // 0x13a92c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a92cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13a930:
    // 0x13a930: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x13a930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_13a934:
    // 0x13a934: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x13a934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13a938:
    // 0x13a938: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x13a938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_13a93c:
    // 0x13a93c: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x13a93cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_13a940:
    // 0x13a940: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x13a940u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_13a944:
    // 0x13a944: 0x24a59168  addiu       $a1, $a1, -0x6E98
    ctx->pc = 0x13a944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938984));
label_13a948:
    // 0x13a948: 0x25089180  addiu       $t0, $t0, -0x6E80
    ctx->pc = 0x13a948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939008));
label_13a94c:
    // 0x13a94c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x13a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_13a950:
    // 0x13a950: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x13a950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_13a954:
    // 0x13a954: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x13a954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_13a958:
    // 0x13a958: 0x2409018f  addiu       $t1, $zero, 0x18F
    ctx->pc = 0x13a958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
label_13a95c:
    // 0x13a95c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x13a95cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_13a960:
    // 0x13a960: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13a960u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a964:
    // 0x13a964: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x13a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_13a968:
    // 0x13a968: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x13a968u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a96c:
    // 0x13a96c: 0x40f809  jalr        $v0
label_13a970:
    if (ctx->pc == 0x13A970u) {
        ctx->pc = 0x13A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A96Cu;
        // 0x13a970: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A974u;
        goto label_13a974;
    }
    ctx->pc = 0x13A96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A974u);
        ctx->pc = 0x13A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A96Cu;
        // 0x13a970: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A96Cu, 0x13A974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A974u;
label_13a974:
    // 0x13a974: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x13a974u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a978:
    // 0x13a978: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_13a97c:
    if (ctx->pc == 0x13A97Cu) {
        ctx->pc = 0x13A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A978u;
        // 0x13a97c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A980u;
        goto label_13a980;
    }
    ctx->pc = 0x13A978u;
    {
        const bool branch_taken_0x13a978 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A978u;
        // 0x13a97c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a978) {
            ctx->pc = 0x13A990u;
            goto label_13a990;
        }
    }
    ctx->pc = 0x13A980u;
label_13a980:
    // 0x13a980: 0xc0d0aa8  jal         func_342AA0
label_13a984:
    if (ctx->pc == 0x13A984u) {
        ctx->pc = 0x13A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A980u;
        // 0x13a984: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A988u;
        goto label_13a988;
    }
    ctx->pc = 0x13A980u;
    SET_GPR_U32(ctx, 31, 0x13A988u);
    ctx->pc = 0x13A984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A980u;
    // 0x13a984: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AA0u, 0x13A980u, 0x13A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A988u;
label_13a988:
    // 0x13a988: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x13a988u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a98c:
    // 0x13a98c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x13a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13a990:
    // 0x13a990: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x13a990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_13a994:
    // 0x13a994: 0x8c43b1dc  lw          $v1, -0x4E24($v0)
    ctx->pc = 0x13a994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947292)));
label_13a998:
    // 0x13a998: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x13a998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_13a99c:
    // 0x13a99c: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x13a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
label_13a9a0:
    // 0x13a9a0: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x13a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_13a9a4:
    // 0x13a9a4: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x13a9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_13a9a8:
    // 0x13a9a8: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x13a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_13a9ac:
    // 0x13a9ac: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x13a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_13a9b0:
    // 0x13a9b0: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x13a9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_13a9b4:
    // 0x13a9b4: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x13a9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_13a9b8:
    // 0x13a9b8: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x13a9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
label_13a9bc:
    // 0x13a9bc: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x13a9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_13a9c0:
    // 0x13a9c0: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x13a9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_13a9c4:
    // 0x13a9c4: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x13a9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_13a9c8:
    // 0x13a9c8: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x13a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
label_13a9cc:
    // 0x13a9cc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_13a9d0:
    if (ctx->pc == 0x13A9D0u) {
        ctx->pc = 0x13A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9CCu;
        // 0x13a9d0: 0xafa00128  sw          $zero, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A9D4u;
        goto label_13a9d4;
    }
    ctx->pc = 0x13A9CCu;
    {
        const bool branch_taken_0x13a9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9CCu;
        // 0x13a9d0: 0xafa00128  sw          $zero, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a9cc) {
            ctx->pc = 0x13AA00u;
            goto label_13aa00;
        }
    }
    ctx->pc = 0x13A9D4u;
label_13a9d4:
    // 0x13a9d4: 0xc086618  jal         func_219860
label_13a9d8:
    if (ctx->pc == 0x13A9D8u) {
        ctx->pc = 0x13A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9D4u;
        // 0x13a9d8: 0x8fa40220  lw          $a0, 0x220($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A9DCu;
        goto label_13a9dc;
    }
    ctx->pc = 0x13A9D4u;
    SET_GPR_U32(ctx, 31, 0x13A9DCu);
    ctx->pc = 0x13A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A9D4u;
    // 0x13a9d8: 0x8fa40220  lw          $a0, 0x220($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x13A9D4u, 0x13A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A9DCu;
label_13a9dc:
    // 0x13a9dc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x13a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13a9e0:
    // 0x13a9e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13a9e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_13a9e4:
    // 0x13a9e4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x13a9e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_13a9e8:
    // 0x13a9e8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x13a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13a9ec:
    // 0x13a9ec: 0x60f809  jalr        $v1
label_13a9f0:
    if (ctx->pc == 0x13A9F0u) {
        ctx->pc = 0x13A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9ECu;
        // 0x13a9f0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A9F4u;
        goto label_13a9f4;
    }
    ctx->pc = 0x13A9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13A9F4u);
        ctx->pc = 0x13A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9ECu;
        // 0x13a9f0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A9ECu, 0x13A9F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A9F4u;
label_13a9f4:
    // 0x13a9f4: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x13a9f4u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
label_13a9f8:
    // 0x13a9f8: 0x1000000b  b           . + 4 + (0xB << 2)
label_13a9fc:
    if (ctx->pc == 0x13A9FCu) {
        ctx->pc = 0x13A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9F8u;
        // 0x13a9fc: 0xe6f40040  swc1        $f20, 0x40($s7) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA00u;
        goto label_13aa00;
    }
    ctx->pc = 0x13A9F8u;
    {
        const bool branch_taken_0x13a9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9F8u;
        // 0x13a9fc: 0xe6f40040  swc1        $f20, 0x40($s7) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a9f8) {
            ctx->pc = 0x13AA28u;
            goto label_13aa28;
        }
    }
    ctx->pc = 0x13AA00u;
label_13aa00:
    // 0x13aa00: 0xc086618  jal         func_219860
label_13aa04:
    if (ctx->pc == 0x13AA04u) {
        ctx->pc = 0x13AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA00u;
        // 0x13aa04: 0x8fa40220  lw          $a0, 0x220($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA08u;
        goto label_13aa08;
    }
    ctx->pc = 0x13AA00u;
    SET_GPR_U32(ctx, 31, 0x13AA08u);
    ctx->pc = 0x13AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA00u;
    // 0x13aa04: 0x8fa40220  lw          $a0, 0x220($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x13AA00u, 0x13AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA08u;
label_13aa08:
    // 0x13aa08: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x13aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13aa0c:
    // 0x13aa0c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13aa0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_13aa10:
    // 0x13aa10: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x13aa10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_13aa14:
    // 0x13aa14: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x13aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13aa18:
    // 0x13aa18: 0x60f809  jalr        $v1
label_13aa1c:
    if (ctx->pc == 0x13AA1Cu) {
        ctx->pc = 0x13AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA18u;
        // 0x13aa1c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA20u;
        goto label_13aa20;
    }
    ctx->pc = 0x13AA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13AA20u);
        ctx->pc = 0x13AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA18u;
        // 0x13aa1c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AA18u, 0x13AA20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13AA20u;
label_13aa20:
    // 0x13aa20: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x13aa20u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
label_13aa24:
    // 0x13aa24: 0xe6f40040  swc1        $f20, 0x40($s7)
    ctx->pc = 0x13aa24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 64), bits); }
label_13aa28:
    // 0x13aa28: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x13aa28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_13aa2c:
    // 0x13aa2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13aa2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13aa30:
    // 0x13aa30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13aa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13aa34:
    // 0x13aa34: 0xc0d065c  jal         func_341970
label_13aa38:
    if (ctx->pc == 0x13AA38u) {
        ctx->pc = 0x13AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA34u;
        // 0x13aa38: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA3Cu;
        goto label_13aa3c;
    }
    ctx->pc = 0x13AA34u;
    SET_GPR_U32(ctx, 31, 0x13AA3Cu);
    ctx->pc = 0x13AA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA34u;
    // 0x13aa38: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341970u, 0x13AA34u, 0x13AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA3Cu;
label_13aa3c:
    // 0x13aa3c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x13aa3cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_13aa40:
    // 0x13aa40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13aa40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13aa44:
    // 0x13aa44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13aa44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13aa48:
    // 0x13aa48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13aa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13aa4c:
    // 0x13aa4c: 0xc0d06aa  jal         func_341AA8
label_13aa50:
    if (ctx->pc == 0x13AA50u) {
        ctx->pc = 0x13AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA4Cu;
        // 0x13aa50: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA54u;
        goto label_13aa54;
    }
    ctx->pc = 0x13AA4Cu;
    SET_GPR_U32(ctx, 31, 0x13AA54u);
    ctx->pc = 0x13AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA4Cu;
    // 0x13aa50: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341AA8u, 0x13AA4Cu, 0x13AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA54u;
label_13aa54:
    // 0x13aa54: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x13aa54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13aa58:
    // 0x13aa58: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x13aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_13aa5c:
    // 0x13aa5c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_13aa60:
    // 0x13aa60: 0x8fa60220  lw          $a2, 0x220($sp)
    ctx->pc = 0x13aa60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_13aa64:
    // 0x13aa64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13aa64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13aa68:
    // 0x13aa68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13aa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13aa6c:
    // 0x13aa6c: 0x8e247198  lw          $a0, 0x7198($s1)
    ctx->pc = 0x13aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29080)));
label_13aa70:
    // 0x13aa70: 0x24d100c4  addiu       $s1, $a2, 0xC4
    ctx->pc = 0x13aa70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 196));
label_13aa74:
    // 0x13aa74: 0xc0d019a  jal         func_340668
label_13aa78:
    if (ctx->pc == 0x13AA78u) {
        ctx->pc = 0x13AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA74u;
        // 0x13aa78: 0xafa20180  sw          $v0, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA7Cu;
        goto label_13aa7c;
    }
    ctx->pc = 0x13AA74u;
    SET_GPR_U32(ctx, 31, 0x13AA7Cu);
    ctx->pc = 0x13AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA74u;
    // 0x13aa78: 0xafa20180  sw          $v0, 0x180($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340668u, 0x13AA74u, 0x13AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA7Cu;
label_13aa7c:
    // 0x13aa7c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x13aa7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13aa80:
    // 0x13aa80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13aa80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13aa84:
    // 0x13aa84: 0xc0d0704  jal         func_341C10
label_13aa88:
    if (ctx->pc == 0x13AA88u) {
        ctx->pc = 0x13AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA84u;
        // 0x13aa88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA8Cu;
        goto label_13aa8c;
    }
    ctx->pc = 0x13AA84u;
    SET_GPR_U32(ctx, 31, 0x13AA8Cu);
    ctx->pc = 0x13AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA84u;
    // 0x13aa88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x13AA84u, 0x13AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA8Cu;
label_13aa8c:
    // 0x13aa8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13aa8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13aa90:
    // 0x13aa90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13aa90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13aa94:
    // 0x13aa94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13aa94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13aa98:
    // 0x13aa98: 0xafa70108  sw          $a3, 0x108($sp)
    ctx->pc = 0x13aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 7));
label_13aa9c:
    // 0x13aa9c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x13aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_13aaa0:
    // 0x13aaa0: 0x8fa70220  lw          $a3, 0x220($sp)
    ctx->pc = 0x13aaa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_13aaa4:
    // 0x13aaa4: 0x34422813  ori         $v0, $v0, 0x2813
    ctx->pc = 0x13aaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10259);
label_13aaa8:
    // 0x13aaa8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x13aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_13aaac:
    // 0x13aaac: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x13aaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_13aab0:
    // 0x13aab0: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x13aab0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
label_13aab4:
    // 0x13aab4: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x13aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_13aab8:
    // 0x13aab8: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x13aab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
label_13aabc:
    // 0x13aabc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13aabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13aac0:
    // 0x13aac0: 0xafa50104  sw          $a1, 0x104($sp)
    ctx->pc = 0x13aac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 5));
label_13aac4:
    // 0x13aac4: 0xafa60114  sw          $a2, 0x114($sp)
    ctx->pc = 0x13aac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 6));
label_13aac8:
    // 0x13aac8: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x13aac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_13aacc:
    // 0x13aacc: 0xafb000f0  sw          $s0, 0xF0($sp)
    ctx->pc = 0x13aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 16));
label_13aad0:
    // 0x13aad0: 0xafb700f4  sw          $s7, 0xF4($sp)
    ctx->pc = 0x13aad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 23));
label_13aad4:
    // 0x13aad4: 0xafa700fc  sw          $a3, 0xFC($sp)
    ctx->pc = 0x13aad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 7));
label_13aad8:
    // 0x13aad8: 0xc0e409a  jal         func_390268
label_13aadc:
    if (ctx->pc == 0x13AADCu) {
        ctx->pc = 0x13AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAD8u;
        // 0x13aadc: 0xafa00120  sw          $zero, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AAE0u;
        goto label_13aae0;
    }
    ctx->pc = 0x13AAD8u;
    SET_GPR_U32(ctx, 31, 0x13AAE0u);
    ctx->pc = 0x13AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AAD8u;
    // 0x13aadc: 0xafa00120  sw          $zero, 0x120($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x13AAD8u, 0x13AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AAE0u;
label_13aae0:
    // 0x13aae0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_13aae4:
    if (ctx->pc == 0x13AAE4u) {
        ctx->pc = 0x13AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAE0u;
        // 0x13aae4: 0xae42b27c  sw          $v0, -0x4D84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294947452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AAE8u;
        goto label_13aae8;
    }
    ctx->pc = 0x13AAE0u;
    {
        const bool branch_taken_0x13aae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAE0u;
        // 0x13aae4: 0xae42b27c  sw          $v0, -0x4D84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294947452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aae0) {
            ctx->pc = 0x13AB04u;
            goto label_13ab04;
        }
    }
    ctx->pc = 0x13AAE8u;
label_13aae8:
    // 0x13aae8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x13aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_13aaec:
    // 0x13aaec: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x13aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_13aaf0:
    // 0x13aaf0: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x13aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
label_13aaf4:
    // 0x13aaf4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13aaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_13aaf8:
    // 0x13aaf8: 0x24636040  addiu       $v1, $v1, 0x6040
    ctx->pc = 0x13aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24640));
label_13aafc:
    // 0x13aafc: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x13aafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_13ab00:
    // 0x13ab00: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x13ab00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
label_13ab04:
    // 0x13ab04: 0xc089a76  jal         func_2269D8
label_13ab08:
    if (ctx->pc == 0x13AB08u) {
        ctx->pc = 0x13AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB04u;
        // 0x13ab08: 0x8fa40220  lw          $a0, 0x220($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB0Cu;
        goto label_13ab0c;
    }
    ctx->pc = 0x13AB04u;
    SET_GPR_U32(ctx, 31, 0x13AB0Cu);
    ctx->pc = 0x13AB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB04u;
    // 0x13ab08: 0x8fa40220  lw          $a0, 0x220($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x13AB04u, 0x13AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB0Cu;
label_13ab0c:
    // 0x13ab0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ab0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ab10:
    // 0x13ab10: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_13ab14:
    if (ctx->pc == 0x13AB14u) {
        ctx->pc = 0x13AB18u;
        goto label_13ab18;
    }
    ctx->pc = 0x13AB10u;
    {
        const bool branch_taken_0x13ab10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ab10) {
            ctx->pc = 0x13AB48u;
            goto label_13ab48;
        }
    }
    ctx->pc = 0x13AB18u;
label_13ab18:
    // 0x13ab18: 0xc088e78  jal         func_2239E0
label_13ab1c:
    if (ctx->pc == 0x13AB1Cu) {
        ctx->pc = 0x13AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB18u;
        // 0x13ab1c: 0x8fa40220  lw          $a0, 0x220($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB20u;
        goto label_13ab20;
    }
    ctx->pc = 0x13AB18u;
    SET_GPR_U32(ctx, 31, 0x13AB20u);
    ctx->pc = 0x13AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB18u;
    // 0x13ab1c: 0x8fa40220  lw          $a0, 0x220($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x13AB18u, 0x13AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB20u;
label_13ab20:
    // 0x13ab20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_13ab24:
    if (ctx->pc == 0x13AB24u) {
        ctx->pc = 0x13AB28u;
        goto label_13ab28;
    }
    ctx->pc = 0x13AB20u;
    {
        const bool branch_taken_0x13ab20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ab20) {
            ctx->pc = 0x13AB48u;
            goto label_13ab48;
        }
    }
    ctx->pc = 0x13AB28u;
label_13ab28:
    // 0x13ab28: 0xc088e80  jal         func_223A00
label_13ab2c:
    if (ctx->pc == 0x13AB2Cu) {
        ctx->pc = 0x13AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB28u;
        // 0x13ab2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB30u;
        goto label_13ab30;
    }
    ctx->pc = 0x13AB28u;
    SET_GPR_U32(ctx, 31, 0x13AB30u);
    ctx->pc = 0x13AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB28u;
    // 0x13ab2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x13AB28u, 0x13AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB30u;
label_13ab30:
    // 0x13ab30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13ab34:
    if (ctx->pc == 0x13AB34u) {
        ctx->pc = 0x13AB38u;
        goto label_13ab38;
    }
    ctx->pc = 0x13AB30u;
    {
        const bool branch_taken_0x13ab30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ab30) {
            ctx->pc = 0x13AB48u;
            goto label_13ab48;
        }
    }
    ctx->pc = 0x13AB38u;
label_13ab38:
    // 0x13ab38: 0xc0e409a  jal         func_390268
label_13ab3c:
    if (ctx->pc == 0x13AB3Cu) {
        ctx->pc = 0x13AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB38u;
        // 0x13ab3c: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB40u;
        goto label_13ab40;
    }
    ctx->pc = 0x13AB38u;
    SET_GPR_U32(ctx, 31, 0x13AB40u);
    ctx->pc = 0x13AB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB38u;
    // 0x13ab3c: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x13AB38u, 0x13AB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB40u;
label_13ab40:
    // 0x13ab40: 0x10000011  b           . + 4 + (0x11 << 2)
label_13ab44:
    if (ctx->pc == 0x13AB44u) {
        ctx->pc = 0x13AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB40u;
        // 0x13ab44: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB48u;
        goto label_13ab48;
    }
    ctx->pc = 0x13AB40u;
    {
        const bool branch_taken_0x13ab40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB40u;
        // 0x13ab44: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab40) {
            ctx->pc = 0x13AB88u;
            goto label_13ab88;
        }
    }
    ctx->pc = 0x13AB48u;
label_13ab48:
    // 0x13ab48: 0xc0e409a  jal         func_390268
label_13ab4c:
    if (ctx->pc == 0x13AB4Cu) {
        ctx->pc = 0x13AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB48u;
        // 0x13ab4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB50u;
        goto label_13ab50;
    }
    ctx->pc = 0x13AB48u;
    SET_GPR_U32(ctx, 31, 0x13AB50u);
    ctx->pc = 0x13AB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB48u;
    // 0x13ab4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x13AB48u, 0x13AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB50u;
label_13ab50:
    // 0x13ab50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ab50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ab54:
    // 0x13ab54: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
label_13ab58:
    if (ctx->pc == 0x13AB58u) {
        ctx->pc = 0x13AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB54u;
        // 0x13ab58: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB5Cu;
        goto label_13ab5c;
    }
    ctx->pc = 0x13AB54u;
    {
        const bool branch_taken_0x13ab54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ab54) {
            ctx->pc = 0x13AB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AB54u;
            // 0x13ab58: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13ABC0u;
            goto label_13abc0;
        }
    }
    ctx->pc = 0x13AB5Cu;
label_13ab5c:
    // 0x13ab5c: 0xc088e78  jal         func_2239E0
label_13ab60:
    if (ctx->pc == 0x13AB60u) {
        ctx->pc = 0x13AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB5Cu;
        // 0x13ab60: 0x8fa40220  lw          $a0, 0x220($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB64u;
        goto label_13ab64;
    }
    ctx->pc = 0x13AB5Cu;
    SET_GPR_U32(ctx, 31, 0x13AB64u);
    ctx->pc = 0x13AB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB5Cu;
    // 0x13ab60: 0x8fa40220  lw          $a0, 0x220($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x13AB5Cu, 0x13AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB64u;
label_13ab64:
    // 0x13ab64: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_13ab68:
    if (ctx->pc == 0x13AB68u) {
        ctx->pc = 0x13AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB64u;
        // 0x13ab68: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB6Cu;
        goto label_13ab6c;
    }
    ctx->pc = 0x13AB64u;
    {
        const bool branch_taken_0x13ab64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ab64) {
            ctx->pc = 0x13AB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AB64u;
            // 0x13ab68: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13ABC0u;
            goto label_13abc0;
        }
    }
    ctx->pc = 0x13AB6Cu;
label_13ab6c:
    // 0x13ab6c: 0xc088e80  jal         func_223A00
label_13ab70:
    if (ctx->pc == 0x13AB70u) {
        ctx->pc = 0x13AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB6Cu;
        // 0x13ab70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB74u;
        goto label_13ab74;
    }
    ctx->pc = 0x13AB6Cu;
    SET_GPR_U32(ctx, 31, 0x13AB74u);
    ctx->pc = 0x13AB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB6Cu;
    // 0x13ab70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x13AB6Cu, 0x13AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB74u;
label_13ab74:
    // 0x13ab74: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_13ab78:
    if (ctx->pc == 0x13AB78u) {
        ctx->pc = 0x13AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB74u;
        // 0x13ab78: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB7Cu;
        goto label_13ab7c;
    }
    ctx->pc = 0x13AB74u;
    {
        const bool branch_taken_0x13ab74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ab74) {
            ctx->pc = 0x13AB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AB74u;
            // 0x13ab78: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13ABC0u;
            goto label_13abc0;
        }
    }
    ctx->pc = 0x13AB7Cu;
label_13ab7c:
    // 0x13ab7c: 0xc089a76  jal         func_2269D8
label_13ab80:
    if (ctx->pc == 0x13AB80u) {
        ctx->pc = 0x13AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB7Cu;
        // 0x13ab80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB84u;
        goto label_13ab84;
    }
    ctx->pc = 0x13AB7Cu;
    SET_GPR_U32(ctx, 31, 0x13AB84u);
    ctx->pc = 0x13AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB7Cu;
    // 0x13ab80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x13AB7Cu, 0x13AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB84u;
label_13ab84:
    // 0x13ab84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13ab84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ab88:
    // 0x13ab88: 0xc088e78  jal         func_2239E0
label_13ab8c:
    if (ctx->pc == 0x13AB8Cu) {
        ctx->pc = 0x13AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB88u;
        // 0x13ab8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB90u;
        goto label_13ab90;
    }
    ctx->pc = 0x13AB88u;
    SET_GPR_U32(ctx, 31, 0x13AB90u);
    ctx->pc = 0x13AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB88u;
    // 0x13ab8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x13AB88u, 0x13AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB90u;
label_13ab90:
    // 0x13ab90: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_13ab94:
    if (ctx->pc == 0x13AB94u) {
        ctx->pc = 0x13AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB90u;
        // 0x13ab94: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB98u;
        goto label_13ab98;
    }
    ctx->pc = 0x13AB90u;
    {
        const bool branch_taken_0x13ab90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB90u;
        // 0x13ab94: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab90) {
            ctx->pc = 0x13ABBCu;
            goto label_13abbc;
        }
    }
    ctx->pc = 0x13AB98u;
label_13ab98:
    // 0x13ab98: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x13ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_13ab9c:
    // 0x13ab9c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x13ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_13aba0:
    // 0x13aba0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x13aba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_13aba4:
    // 0x13aba4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13aba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_13aba8:
    // 0x13aba8: 0x24426040  addiu       $v0, $v0, 0x6040
    ctx->pc = 0x13aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24640));
label_13abac:
    // 0x13abac: 0xaeb0b27c  sw          $s0, -0x4D84($s5)
    ctx->pc = 0x13abacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294947452), GPR_U32(ctx, 16));
label_13abb0:
    // 0x13abb0: 0xacb1b280  sw          $s1, -0x4D80($a1)
    ctx->pc = 0x13abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294947456), GPR_U32(ctx, 17));
label_13abb4:
    // 0x13abb4: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x13abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_13abb8:
    // 0x13abb8: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x13abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_13abbc:
    // 0x13abbc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x13abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13abc0:
    // 0x13abc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13abc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13abc4:
    // 0x13abc4: 0xc6f50040  lwc1        $f21, 0x40($s7)
    ctx->pc = 0x13abc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_13abc8:
    // 0x13abc8: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x13abc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_13abcc:
    // 0x13abcc: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x13abccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_13abd0:
    // 0x13abd0: 0x40f809  jalr        $v0
label_13abd4:
    if (ctx->pc == 0x13ABD4u) {
        ctx->pc = 0x13ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ABD0u;
        // 0x13abd4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ABD8u;
        goto label_13abd8;
    }
    ctx->pc = 0x13ABD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13ABD8u);
        ctx->pc = 0x13ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ABD0u;
        // 0x13abd4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ABD0u, 0x13ABD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13ABD8u;
label_13abd8:
    // 0x13abd8: 0x8e630320  lw          $v1, 0x320($s3)
    ctx->pc = 0x13abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 800)));
label_13abdc:
    // 0x13abdc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x13abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_13abe0:
    // 0x13abe0: 0x24444b00  addiu       $a0, $v0, 0x4B00
    ctx->pc = 0x13abe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_13abe4:
    // 0x13abe4: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x13abe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_13abe8:
    // 0x13abe8: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x13abe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_13abec:
    // 0x13abec: 0x82650331  lb          $a1, 0x331($s3)
    ctx->pc = 0x13abecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
label_13abf0:
    // 0x13abf0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_13abf4:
    // 0x13abf4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13abf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13abf8:
    // 0x13abf8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_13abfc:
    // 0x13abfc: 0x460105e8  max.s       $f23, $f0, $f1
    ctx->pc = 0x13abfcu;
    ctx->f[23] = std::max(ctx->f[0], ctx->f[1]);
label_13ac00:
    // 0x13ac00: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13ac00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13ac04:
    // 0x13ac04: 0xa660032c  sh          $zero, 0x32C($s3)
    ctx->pc = 0x13ac04u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 812), (uint16_t)GPR_U32(ctx, 0));
label_13ac08:
    // 0x13ac08: 0x18a00088  blez        $a1, . + 4 + (0x88 << 2)
label_13ac0c:
    if (ctx->pc == 0x13AC0Cu) {
        ctx->pc = 0x13AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC08u;
        // 0x13ac0c: 0x7fa301e0  sq          $v1, 0x1E0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AC10u;
        goto label_13ac10;
    }
    ctx->pc = 0x13AC08u;
    {
        const bool branch_taken_0x13ac08 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x13AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC08u;
        // 0x13ac0c: 0x7fa301e0  sq          $v1, 0x1E0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ac08) {
            ctx->pc = 0x13AE2Cu;
            goto label_13ae2c;
        }
    }
    ctx->pc = 0x13AC10u;
label_13ac10:
    // 0x13ac10: 0x8fa30220  lw          $v1, 0x220($sp)
    ctx->pc = 0x13ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_13ac14:
    // 0x13ac14: 0x27b60200  addiu       $s6, $sp, 0x200
    ctx->pc = 0x13ac14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_13ac18:
    // 0x13ac18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13ac18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13ac1c:
    // 0x13ac1c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x13ac1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_13ac20:
    // 0x13ac20: 0x267501e0  addiu       $s5, $s3, 0x1E0
    ctx->pc = 0x13ac20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
label_13ac24:
    // 0x13ac24: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x13ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_13ac28:
    // 0x13ac28: 0x267e0280  addiu       $fp, $s3, 0x280
    ctx->pc = 0x13ac28u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
label_13ac2c:
    // 0x13ac2c: 0xafa30224  sw          $v1, 0x224($sp)
    ctx->pc = 0x13ac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 3));
label_13ac30:
    // 0x13ac30: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13ac30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13ac34:
    // 0x13ac34: 0xc0cd8ec  jal         func_3363B0
label_13ac38:
    if (ctx->pc == 0x13AC38u) {
        ctx->pc = 0x13AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC34u;
        // 0x13ac38: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AC3Cu;
        goto label_13ac3c;
    }
    ctx->pc = 0x13AC34u;
    SET_GPR_U32(ctx, 31, 0x13AC3Cu);
    ctx->pc = 0x13AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AC34u;
    // 0x13ac38: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x13AC34u, 0x13AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC3Cu;
label_13ac3c:
    // 0x13ac3c: 0xc7a20200  lwc1        $f2, 0x200($sp)
    ctx->pc = 0x13ac3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13ac40:
    // 0x13ac40: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x13ac40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13ac44:
    // 0x13ac44: 0xc7a10204  lwc1        $f1, 0x204($sp)
    ctx->pc = 0x13ac44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13ac48:
    // 0x13ac48: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x13ac48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13ac4c:
    // 0x13ac4c: 0xc7a00208  lwc1        $f0, 0x208($sp)
    ctx->pc = 0x13ac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13ac50:
    // 0x13ac50: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x13ac50u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_13ac54:
    // 0x13ac54: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x13ac54u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_13ac58:
    // 0x13ac58: 0xc7a3020c  lwc1        $f3, 0x20C($sp)
    ctx->pc = 0x13ac58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13ac5c:
    // 0x13ac5c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x13ac5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_13ac60:
    // 0x13ac60: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13ac60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13ac64:
    // 0x13ac64: 0xe7a20210  swc1        $f2, 0x210($sp)
    ctx->pc = 0x13ac64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_13ac68:
    // 0x13ac68: 0xe7a10214  swc1        $f1, 0x214($sp)
    ctx->pc = 0x13ac68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_13ac6c:
    // 0x13ac6c: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x13ac6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_13ac70:
    // 0x13ac70: 0xe7a3021c  swc1        $f3, 0x21C($sp)
    ctx->pc = 0x13ac70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_13ac74:
    // 0x13ac74: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x13ac74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_13ac78:
    // 0x13ac78: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x13ac78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
label_13ac7c:
    // 0x13ac7c: 0xc136afa  jal         func_4DABE8
label_13ac80:
    if (ctx->pc == 0x13AC80u) {
        ctx->pc = 0x13AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC7Cu;
        // 0x13ac80: 0x7fa201f0  sq          $v0, 0x1F0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AC84u;
        goto label_13ac84;
    }
    ctx->pc = 0x13AC7Cu;
    SET_GPR_U32(ctx, 31, 0x13AC84u);
    ctx->pc = 0x13AC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AC7Cu;
    // 0x13ac80: 0x7fa201f0  sq          $v0, 0x1F0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13AC7Cu, 0x13AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC84u;
label_13ac84:
    // 0x13ac84: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x13ac84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_13ac88:
    // 0x13ac88: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13ac88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13ac8c:
    // 0x13ac8c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x13ac8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ac90:
    // 0x13ac90: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13ac90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ac94:
    // 0x13ac94: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13ac94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13ac98:
    // 0x13ac98: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13ac98u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13ac9c:
    // 0x13ac9c: 0x4a0003bf  vwaitq
    ctx->pc = 0x13ac9cu;
    // VWAITQ (Q already resolved in this runtime)
label_13aca0:
    // 0x13aca0: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13aca0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13aca4:
    // 0x13aca4: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x13aca4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_13aca8:
    // 0x13aca8: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x13aca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_13acac:
    // 0x13acac: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x13acacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13acb0:
    // 0x13acb0: 0xc086618  jal         func_219860
label_13acb4:
    if (ctx->pc == 0x13ACB4u) {
        ctx->pc = 0x13ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACB0u;
        // 0x13acb4: 0x7fa201f0  sq          $v0, 0x1F0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ACB8u;
        goto label_13acb8;
    }
    ctx->pc = 0x13ACB0u;
    SET_GPR_U32(ctx, 31, 0x13ACB8u);
    ctx->pc = 0x13ACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ACB0u;
    // 0x13acb4: 0x7fa201f0  sq          $v0, 0x1F0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x13ACB0u, 0x13ACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ACB8u;
label_13acb8:
    // 0x13acb8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x13acb8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_13acbc:
    // 0x13acbc: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x13acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_13acc0:
    // 0x13acc0: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x13acc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_13acc4:
    // 0x13acc4: 0xc136b24  jal         func_4DAC90
label_13acc8:
    if (ctx->pc == 0x13ACC8u) {
        ctx->pc = 0x13ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACC4u;
        // 0x13acc8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ACCCu;
        goto label_13accc;
    }
    ctx->pc = 0x13ACC4u;
    SET_GPR_U32(ctx, 31, 0x13ACCCu);
    ctx->pc = 0x13ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ACC4u;
    // 0x13acc8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13ACC4u, 0x13ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ACCCu;
label_13accc:
    // 0x13accc: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x13acccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_13acd0:
    // 0x13acd0: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x13acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_13acd4:
    // 0x13acd4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13acd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13acd8:
    // 0x13acd8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x13acd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13acdc:
    // 0x13acdc: 0xc136afa  jal         func_4DABE8
label_13ace0:
    if (ctx->pc == 0x13ACE0u) {
        ctx->pc = 0x13ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACDCu;
        // 0x13ace0: 0x7fa20200  sq          $v0, 0x200($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ACE4u;
        goto label_13ace4;
    }
    ctx->pc = 0x13ACDCu;
    SET_GPR_U32(ctx, 31, 0x13ACE4u);
    ctx->pc = 0x13ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ACDCu;
    // 0x13ace0: 0x7fa20200  sq          $v0, 0x200($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13ACDCu, 0x13ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ACE4u;
label_13ace4:
    // 0x13ace4: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x13ace4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13ace8:
    // 0x13ace8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x13ace8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_13acec:
    // 0x13acec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13acecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_13acf0:
    // 0x13acf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13acf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13acf4:
    // 0x13acf4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x13acf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_13acf8:
    // 0x13acf8: 0xc7a201e8  lwc1        $f2, 0x1E8($sp)
    ctx->pc = 0x13acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13acfc:
    // 0x13acfc: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x13acfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_13ad00:
    // 0x13ad00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13ad00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_13ad04:
    // 0x13ad04: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x13ad04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
label_13ad08:
    // 0x13ad08: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x13ad08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13ad0c:
    // 0x13ad0c: 0x0  nop
    ctx->pc = 0x13ad0cu;
    // NOP
label_13ad10:
    // 0x13ad10: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_13ad14:
    if (ctx->pc == 0x13AD14u) {
        ctx->pc = 0x13AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD10u;
        // 0x13ad14: 0x7fa201f0  sq          $v0, 0x1F0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AD18u;
        goto label_13ad18;
    }
    ctx->pc = 0x13AD10u;
    {
        const bool branch_taken_0x13ad10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD10u;
        // 0x13ad14: 0x7fa201f0  sq          $v0, 0x1F0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad10) {
            ctx->pc = 0x13AD24u;
            goto label_13ad24;
        }
    }
    ctx->pc = 0x13AD18u;
label_13ad18:
    // 0x13ad18: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x13ad18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13ad1c:
    // 0x13ad1c: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x13ad1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_13ad20:
    // 0x13ad20: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x13ad20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_13ad24:
    // 0x13ad24: 0x7ba201c0  lq          $v0, 0x1C0($sp)
    ctx->pc = 0x13ad24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_13ad28:
    // 0x13ad28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13ad28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13ad2c:
    // 0x13ad2c: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x13ad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_13ad30:
    // 0x13ad30: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13ad30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13ad34:
    // 0x13ad34: 0xc136b24  jal         func_4DAC90
label_13ad38:
    if (ctx->pc == 0x13AD38u) {
        ctx->pc = 0x13AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD34u;
        // 0x13ad38: 0x7ee20050  sq          $v0, 0x50($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AD3Cu;
        goto label_13ad3c;
    }
    ctx->pc = 0x13AD34u;
    SET_GPR_U32(ctx, 31, 0x13AD3Cu);
    ctx->pc = 0x13AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AD34u;
    // 0x13ad38: 0x7ee20050  sq          $v0, 0x50($s7) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 23), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13AD34u, 0x13AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AD3Cu;
label_13ad3c:
    // 0x13ad3c: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x13ad3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_13ad40:
    // 0x13ad40: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x13ad40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_13ad44:
    // 0x13ad44: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x13ad44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13ad48:
    // 0x13ad48: 0x27b200f0  addiu       $s2, $sp, 0xF0
    ctx->pc = 0x13ad48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_13ad4c:
    // 0x13ad4c: 0x27b40130  addiu       $s4, $sp, 0x130
    ctx->pc = 0x13ad4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_13ad50:
    // 0x13ad50: 0x8cc47198  lw          $a0, 0x7198($a2)
    ctx->pc = 0x13ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 29080)));
label_13ad54:
    // 0x13ad54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13ad54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13ad58:
    // 0x13ad58: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x13ad58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_13ad5c:
    // 0x13ad5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13ad5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13ad60:
    // 0x13ad60: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x13ad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
label_13ad64:
    // 0x13ad64: 0xc0cf9fc  jal         func_33E7F0
label_13ad68:
    if (ctx->pc == 0x13AD68u) {
        ctx->pc = 0x13AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD64u;
        // 0x13ad68: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AD6Cu;
        goto label_13ad6c;
    }
    ctx->pc = 0x13AD64u;
    SET_GPR_U32(ctx, 31, 0x13AD6Cu);
    ctx->pc = 0x13AD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AD64u;
    // 0x13ad68: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E7F0u, 0x13AD64u, 0x13AD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AD6Cu;
label_13ad6c:
    // 0x13ad6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13ad70:
    if (ctx->pc == 0x13AD70u) {
        ctx->pc = 0x13AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD6Cu;
        // 0x13ad70: 0xc7a000b0  lwc1        $f0, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AD74u;
        goto label_13ad74;
    }
    ctx->pc = 0x13AD6Cu;
    {
        const bool branch_taken_0x13ad6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD6Cu;
        // 0x13ad70: 0xc7a000b0  lwc1        $f0, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad6c) {
            ctx->pc = 0x13AD84u;
            goto label_13ad84;
        }
    }
    ctx->pc = 0x13AD74u;
label_13ad74:
    // 0x13ad74: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x13ad74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13ad78:
    // 0x13ad78: 0x0  nop
    ctx->pc = 0x13ad78u;
    // NOP
label_13ad7c:
    // 0x13ad7c: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
label_13ad80:
    if (ctx->pc == 0x13AD80u) {
        ctx->pc = 0x13AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD7Cu;
        // 0x13ad80: 0x82620331  lb          $v0, 0x331($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AD84u;
        goto label_13ad84;
    }
    ctx->pc = 0x13AD7Cu;
    {
        const bool branch_taken_0x13ad7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ad7c) {
            ctx->pc = 0x13AD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AD7Cu;
            // 0x13ad80: 0x82620331  lb          $v0, 0x331($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AE18u;
            goto label_13ae18;
        }
    }
    ctx->pc = 0x13AD84u;
label_13ad84:
    // 0x13ad84: 0x8fa70224  lw          $a3, 0x224($sp)
    ctx->pc = 0x13ad84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_13ad88:
    // 0x13ad88: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x13ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_13ad8c:
    // 0x13ad8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13ad8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13ad90:
    // 0x13ad90: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13ad90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13ad94:
    // 0x13ad94: 0x84e30002  lh          $v1, 0x2($a3)
    ctx->pc = 0x13ad94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_13ad98:
    // 0x13ad98: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x13ad98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_13ad9c:
    // 0x13ad9c: 0x24474b00  addiu       $a3, $v0, 0x4B00
    ctx->pc = 0x13ad9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_13ada0:
    // 0x13ada0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x13ada0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_13ada4:
    // 0x13ada4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x13ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_13ada8:
    // 0x13ada8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13ada8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_13adac:
    // 0x13adac: 0xc136afa  jal         func_4DABE8
label_13adb0:
    if (ctx->pc == 0x13ADB0u) {
        ctx->pc = 0x13ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADACu;
        // 0x13adb0: 0x7fa201c0  sq          $v0, 0x1C0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ADB4u;
        goto label_13adb4;
    }
    ctx->pc = 0x13ADACu;
    SET_GPR_U32(ctx, 31, 0x13ADB4u);
    ctx->pc = 0x13ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ADACu;
    // 0x13adb0: 0x7fa201c0  sq          $v0, 0x1C0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13ADACu, 0x13ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ADB4u;
label_13adb4:
    // 0x13adb4: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x13adb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_13adb8:
    // 0x13adb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13adb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13adbc:
    // 0x13adbc: 0x7ba301c0  lq          $v1, 0x1C0($sp)
    ctx->pc = 0x13adbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_13adc0:
    // 0x13adc0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13adc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13adc4:
    // 0x13adc4: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x13adc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
label_13adc8:
    // 0x13adc8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x13adc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13adcc:
    // 0x13adcc: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x13adccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
label_13add0:
    // 0x13add0: 0x7ee30050  sq          $v1, 0x50($s7)
    ctx->pc = 0x13add0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 80), GPR_VEC(ctx, 3));
label_13add4:
    // 0x13add4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x13add4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_13add8:
    // 0x13add8: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x13add8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_13addc:
    // 0x13addc: 0x8c647198  lw          $a0, 0x7198($v1)
    ctx->pc = 0x13addcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29080)));
label_13ade0:
    // 0x13ade0: 0xc0cf9fc  jal         func_33E7F0
label_13ade4:
    if (ctx->pc == 0x13ADE4u) {
        ctx->pc = 0x13ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADE0u;
        // 0x13ade4: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ADE8u;
        goto label_13ade8;
    }
    ctx->pc = 0x13ADE0u;
    SET_GPR_U32(ctx, 31, 0x13ADE8u);
    ctx->pc = 0x13ADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ADE0u;
    // 0x13ade4: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E7F0u, 0x13ADE0u, 0x13ADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ADE8u;
label_13ade8:
    // 0x13ade8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13adec:
    if (ctx->pc == 0x13ADECu) {
        ctx->pc = 0x13ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADE8u;
        // 0x13adec: 0xc7a000b0  lwc1        $f0, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ADF0u;
        goto label_13adf0;
    }
    ctx->pc = 0x13ADE8u;
    {
        const bool branch_taken_0x13ade8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADE8u;
        // 0x13adec: 0xc7a000b0  lwc1        $f0, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ade8) {
            ctx->pc = 0x13AE00u;
            goto label_13ae00;
        }
    }
    ctx->pc = 0x13ADF0u;
label_13adf0:
    // 0x13adf0: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x13adf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13adf4:
    // 0x13adf4: 0x0  nop
    ctx->pc = 0x13adf4u;
    // NOP
label_13adf8:
    // 0x13adf8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_13adfc:
    if (ctx->pc == 0x13ADFCu) {
        ctx->pc = 0x13ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADF8u;
        // 0x13adfc: 0x82620331  lb          $v0, 0x331($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AE00u;
        goto label_13ae00;
    }
    ctx->pc = 0x13ADF8u;
    {
        const bool branch_taken_0x13adf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13adf8) {
            ctx->pc = 0x13ADFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13ADF8u;
            // 0x13adfc: 0x82620331  lb          $v0, 0x331($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AE18u;
            goto label_13ae18;
        }
    }
    ctx->pc = 0x13AE00u;
label_13ae00:
    // 0x13ae00: 0x9663032c  lhu         $v1, 0x32C($s3)
    ctx->pc = 0x13ae00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 812)));
label_13ae04:
    // 0x13ae04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13ae08:
    // 0x13ae08: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x13ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_13ae0c:
    // 0x13ae0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13ae0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_13ae10:
    // 0x13ae10: 0xa663032c  sh          $v1, 0x32C($s3)
    ctx->pc = 0x13ae10u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 812), (uint16_t)GPR_U32(ctx, 3));
label_13ae14:
    // 0x13ae14: 0x82620331  lb          $v0, 0x331($s3)
    ctx->pc = 0x13ae14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
label_13ae18:
    // 0x13ae18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13ae18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13ae1c:
    // 0x13ae1c: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x13ae1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_13ae20:
    // 0x13ae20: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13ae20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13ae24:
    // 0x13ae24: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
label_13ae28:
    if (ctx->pc == 0x13AE28u) {
        ctx->pc = 0x13AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE24u;
        // 0x13ae28: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AE2Cu;
        goto label_13ae2c;
    }
    ctx->pc = 0x13AE24u;
    {
        const bool branch_taken_0x13ae24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE24u;
        // 0x13ae28: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae24) {
            ctx->pc = 0x13AC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ac30;
        }
    }
    ctx->pc = 0x13AE2Cu;
label_13ae2c:
    // 0x13ae2c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x13ae2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_13ae30:
    // 0x13ae30: 0x8ca47198  lw          $a0, 0x7198($a1)
    ctx->pc = 0x13ae30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 29080)));
label_13ae34:
    // 0x13ae34: 0xc0d01c0  jal         func_340700
label_13ae38:
    if (ctx->pc == 0x13AE38u) {
        ctx->pc = 0x13AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE34u;
        // 0x13ae38: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AE3Cu;
        goto label_13ae3c;
    }
    ctx->pc = 0x13AE34u;
    SET_GPR_U32(ctx, 31, 0x13AE3Cu);
    ctx->pc = 0x13AE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AE34u;
    // 0x13ae38: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340700u, 0x13AE34u, 0x13AE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AE3Cu;
label_13ae3c:
    // 0x13ae3c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x13ae3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_13ae40:
    // 0x13ae40: 0x82660331  lb          $a2, 0x331($s3)
    ctx->pc = 0x13ae40u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
label_13ae44:
    // 0x13ae44: 0x8ce2b2a0  lw          $v0, -0x4D60($a3)
    ctx->pc = 0x13ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294947488)));
label_13ae48:
    // 0x13ae48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13ae48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13ae4c:
    // 0x13ae4c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_13ae50:
    if (ctx->pc == 0x13AE50u) {
        ctx->pc = 0x13AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE4Cu;
        // 0x13ae50: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AE54u;
        goto label_13ae54;
    }
    ctx->pc = 0x13AE4Cu;
    {
        const bool branch_taken_0x13ae4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ae4c) {
            ctx->pc = 0x13AE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AE4Cu;
            // 0x13ae50: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AE54u;
            goto label_13ae54;
        }
    }
    ctx->pc = 0x13AE54u;
label_13ae54:
    // 0x13ae54: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x13ae54u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_13ae58:
    // 0x13ae58: 0x9665032c  lhu         $a1, 0x32C($s3)
    ctx->pc = 0x13ae58u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 812)));
label_13ae5c:
    // 0x13ae5c: 0xa2630333  sb          $v1, 0x333($s3)
    ctx->pc = 0x13ae5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 819), (uint8_t)GPR_U32(ctx, 3));
label_13ae60:
    // 0x13ae60: 0x2010  mfhi        $a0
    ctx->pc = 0x13ae60u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_13ae64:
    // 0x13ae64: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x13ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_13ae68:
    // 0x13ae68: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x13ae68u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_13ae6c:
    // 0x13ae6c: 0x3810  mfhi        $a3
    ctx->pc = 0x13ae6cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_13ae70:
    // 0x13ae70: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_13ae74:
    if (ctx->pc == 0x13AE74u) {
        ctx->pc = 0x13AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE70u;
        // 0x13ae74: 0xa2630332  sb          $v1, 0x332($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 818), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AE78u;
        goto label_13ae78;
    }
    ctx->pc = 0x13AE70u;
    {
        const bool branch_taken_0x13ae70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE70u;
        // 0x13ae74: 0xa2630332  sb          $v1, 0x332($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 818), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae70) {
            ctx->pc = 0x13AE8Cu;
            goto label_13ae8c;
        }
    }
    ctx->pc = 0x13AE78u;
label_13ae78:
    // 0x13ae78: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x13ae78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_13ae7c:
    // 0x13ae7c: 0xc0d0680  jal         func_341A00
label_13ae80:
    if (ctx->pc == 0x13AE80u) {
        ctx->pc = 0x13AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE7Cu;
        // 0x13ae80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AE84u;
        goto label_13ae84;
    }
    ctx->pc = 0x13AE7Cu;
    SET_GPR_U32(ctx, 31, 0x13AE84u);
    ctx->pc = 0x13AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AE7Cu;
    // 0x13ae80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A00u, 0x13AE7Cu, 0x13AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AE84u;
label_13ae84:
    // 0x13ae84: 0x10000095  b           . + 4 + (0x95 << 2)
label_13ae88:
    if (ctx->pc == 0x13AE88u) {
        ctx->pc = 0x13AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE84u;
        // 0x13ae88: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AE8Cu;
        goto label_13ae8c;
    }
    ctx->pc = 0x13AE84u;
    {
        const bool branch_taken_0x13ae84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE84u;
        // 0x13ae88: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae84) {
            ctx->pc = 0x13B0DCu;
            goto label_13b0dc;
        }
    }
    ctx->pc = 0x13AE8Cu;
label_13ae8c:
    // 0x13ae8c: 0x82620330  lb          $v0, 0x330($s3)
    ctx->pc = 0x13ae8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 816)));
label_13ae90:
    // 0x13ae90: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x13ae90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_13ae94:
    // 0x13ae94: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_13ae98:
    if (ctx->pc == 0x13AE98u) {
        ctx->pc = 0x13AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE94u;
        // 0x13ae98: 0x82620332  lb          $v0, 0x332($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 818)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AE9Cu;
        goto label_13ae9c;
    }
    ctx->pc = 0x13AE94u;
    {
        const bool branch_taken_0x13ae94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ae94) {
            ctx->pc = 0x13AE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AE94u;
            // 0x13ae98: 0x82620332  lb          $v0, 0x332($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 818)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AF34u;
            goto label_13af34;
        }
    }
    ctx->pc = 0x13AE9Cu;
label_13ae9c:
    // 0x13ae9c: 0x18c00024  blez        $a2, . + 4 + (0x24 << 2)
label_13aea0:
    if (ctx->pc == 0x13AEA0u) {
        ctx->pc = 0x13AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE9Cu;
        // 0x13aea0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AEA4u;
        goto label_13aea4;
    }
    ctx->pc = 0x13AE9Cu;
    {
        const bool branch_taken_0x13ae9c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x13AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE9Cu;
        // 0x13aea0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae9c) {
            ctx->pc = 0x13AF30u;
            goto label_13af30;
        }
    }
    ctx->pc = 0x13AEA4u;
label_13aea4:
    // 0x13aea4: 0x9663032c  lhu         $v1, 0x32C($s3)
    ctx->pc = 0x13aea4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 812)));
label_13aea8:
    // 0x13aea8: 0x831007  srav        $v0, $v1, $a0
    ctx->pc = 0x13aea8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_13aeac:
    // 0x13aeac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13aeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_13aeb0:
    // 0x13aeb0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_13aeb4:
    if (ctx->pc == 0x13AEB4u) {
        ctx->pc = 0x13AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AEB0u;
        // 0x13aeb4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AEB8u;
        goto label_13aeb8;
    }
    ctx->pc = 0x13AEB0u;
    {
        const bool branch_taken_0x13aeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AEB0u;
        // 0x13aeb4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aeb0) {
            ctx->pc = 0x13AED8u;
            goto label_13aed8;
        }
    }
    ctx->pc = 0x13AEB8u;
label_13aeb8:
    // 0x13aeb8: 0xe61007  srav        $v0, $a2, $a3
    ctx->pc = 0x13aeb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
label_13aebc:
    // 0x13aebc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13aebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_13aec0:
    // 0x13aec0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_13aec4:
    if (ctx->pc == 0x13AEC4u) {
        ctx->pc = 0x13AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AEC0u;
        // 0x13aec4: 0x82630331  lb          $v1, 0x331($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AEC8u;
        goto label_13aec8;
    }
    ctx->pc = 0x13AEC0u;
    {
        const bool branch_taken_0x13aec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aec0) {
            ctx->pc = 0x13AEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AEC0u;
            // 0x13aec4: 0x82630331  lb          $v1, 0x331($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AEDCu;
            goto label_13aedc;
        }
    }
    ctx->pc = 0x13AEC8u;
label_13aec8:
    // 0x13aec8: 0xa2640332  sb          $a0, 0x332($s3)
    ctx->pc = 0x13aec8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 818), (uint8_t)GPR_U32(ctx, 4));
label_13aecc:
    // 0x13aecc: 0x10000018  b           . + 4 + (0x18 << 2)
label_13aed0:
    if (ctx->pc == 0x13AED0u) {
        ctx->pc = 0x13AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AECCu;
        // 0x13aed0: 0xa2670333  sb          $a3, 0x333($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 819), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AED4u;
        goto label_13aed4;
    }
    ctx->pc = 0x13AECCu;
    {
        const bool branch_taken_0x13aecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AECCu;
        // 0x13aed0: 0xa2670333  sb          $a3, 0x333($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 819), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aecc) {
            ctx->pc = 0x13AF30u;
            goto label_13af30;
        }
    }
    ctx->pc = 0x13AED4u;
label_13aed4:
    // 0x13aed4: 0x0  nop
    ctx->pc = 0x13aed4u;
    // NOP
label_13aed8:
    // 0x13aed8: 0x82630331  lb          $v1, 0x331($s3)
    ctx->pc = 0x13aed8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
label_13aedc:
    // 0x13aedc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x13aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_13aee0:
    // 0x13aee0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13aee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13aee4:
    // 0x13aee4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x13aee4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_13aee8:
    // 0x13aee8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_13aeec:
    if (ctx->pc == 0x13AEECu) {
        ctx->pc = 0x13AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AEE8u;
        // 0x13aeec: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AEF0u;
        goto label_13aef0;
    }
    ctx->pc = 0x13AEE8u;
    {
        const bool branch_taken_0x13aee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aee8) {
            ctx->pc = 0x13AEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AEE8u;
            // 0x13aeec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AEF0u;
            goto label_13aef0;
        }
    }
    ctx->pc = 0x13AEF0u;
label_13aef0:
    // 0x13aef0: 0x203282a  slt         $a1, $s0, $v1
    ctx->pc = 0x13aef0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_13aef4:
    // 0x13aef4: 0x2010  mfhi        $a0
    ctx->pc = 0x13aef4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_13aef8:
    // 0x13aef8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x13aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_13aefc:
    // 0x13aefc: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x13aefcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_13af00:
    // 0x13af00: 0x1810  mfhi        $v1
    ctx->pc = 0x13af00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_13af04:
    // 0x13af04: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_13af08:
    if (ctx->pc == 0x13AF08u) {
        ctx->pc = 0x13AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF04u;
        // 0x13af08: 0x861007  srav        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AF0Cu;
        goto label_13af0c;
    }
    ctx->pc = 0x13AF04u;
    {
        const bool branch_taken_0x13af04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF04u;
        // 0x13af08: 0x861007  srav        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af04) {
            ctx->pc = 0x13AF30u;
            goto label_13af30;
        }
    }
    ctx->pc = 0x13AF0Cu;
label_13af0c:
    // 0x13af0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13af0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_13af10:
    // 0x13af10: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
label_13af14:
    if (ctx->pc == 0x13AF14u) {
        ctx->pc = 0x13AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF10u;
        // 0x13af14: 0x82630331  lb          $v1, 0x331($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AF18u;
        goto label_13af18;
    }
    ctx->pc = 0x13AF10u;
    {
        const bool branch_taken_0x13af10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13af10) {
            ctx->pc = 0x13AF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AF10u;
            // 0x13af14: 0x82630331  lb          $v1, 0x331($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AEDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13aedc;
        }
    }
    ctx->pc = 0x13AF18u;
label_13af18:
    // 0x13af18: 0x661007  srav        $v0, $a2, $v1
    ctx->pc = 0x13af18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_13af1c:
    // 0x13af1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13af1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_13af20:
    // 0x13af20: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
label_13af24:
    if (ctx->pc == 0x13AF24u) {
        ctx->pc = 0x13AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF20u;
        // 0x13af24: 0x82630331  lb          $v1, 0x331($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AF28u;
        goto label_13af28;
    }
    ctx->pc = 0x13AF20u;
    {
        const bool branch_taken_0x13af20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13af20) {
            ctx->pc = 0x13AF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AF20u;
            // 0x13af24: 0x82630331  lb          $v1, 0x331($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AEDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13aedc;
        }
    }
    ctx->pc = 0x13AF28u;
label_13af28:
    // 0x13af28: 0xa2640332  sb          $a0, 0x332($s3)
    ctx->pc = 0x13af28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 818), (uint8_t)GPR_U32(ctx, 4));
label_13af2c:
    // 0x13af2c: 0xa2630333  sb          $v1, 0x333($s3)
    ctx->pc = 0x13af2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 819), (uint8_t)GPR_U32(ctx, 3));
label_13af30:
    // 0x13af30: 0x82620332  lb          $v0, 0x332($s3)
    ctx->pc = 0x13af30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 818)));
label_13af34:
    // 0x13af34: 0x4430023  bgezl       $v0, . + 4 + (0x23 << 2)
label_13af38:
    if (ctx->pc == 0x13AF38u) {
        ctx->pc = 0x13AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF34u;
        // 0x13af38: 0x82620330  lb          $v0, 0x330($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 816)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AF3Cu;
        goto label_13af3c;
    }
    ctx->pc = 0x13AF34u;
    {
        const bool branch_taken_0x13af34 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13af34) {
            ctx->pc = 0x13AF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AF34u;
            // 0x13af38: 0x82620330  lb          $v0, 0x330($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 816)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AFC4u;
            goto label_13afc4;
        }
    }
    ctx->pc = 0x13AF3Cu;
label_13af3c:
    // 0x13af3c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x13af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_13af40:
    // 0x13af40: 0x82630331  lb          $v1, 0x331($s3)
    ctx->pc = 0x13af40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
label_13af44:
    // 0x13af44: 0x8c82b2a0  lw          $v0, -0x4D60($a0)
    ctx->pc = 0x13af44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947488)));
label_13af48:
    // 0x13af48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13af48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13af4c:
    // 0x13af4c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_13af50:
    if (ctx->pc == 0x13AF50u) {
        ctx->pc = 0x13AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF4Cu;
        // 0x13af50: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AF54u;
        goto label_13af54;
    }
    ctx->pc = 0x13AF4Cu;
    {
        const bool branch_taken_0x13af4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13af4c) {
            ctx->pc = 0x13AF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AF4Cu;
            // 0x13af50: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AF54u;
            goto label_13af54;
        }
    }
    ctx->pc = 0x13AF54u;
label_13af54:
    // 0x13af54: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x13af54u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_13af58:
    // 0x13af58: 0x2010  mfhi        $a0
    ctx->pc = 0x13af58u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_13af5c:
    // 0x13af5c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
label_13af60:
    if (ctx->pc == 0x13AF60u) {
        ctx->pc = 0x13AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF5Cu;
        // 0x13af60: 0x92650331  lbu         $a1, 0x331($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AF64u;
        goto label_13af64;
    }
    ctx->pc = 0x13AF5Cu;
    {
        const bool branch_taken_0x13af5c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x13AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF5Cu;
        // 0x13af60: 0x92650331  lbu         $a1, 0x331($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 817)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af5c) {
            ctx->pc = 0x13AFC0u;
            goto label_13afc0;
        }
    }
    ctx->pc = 0x13AF64u;
label_13af64:
    // 0x13af64: 0x9663032c  lhu         $v1, 0x32C($s3)
    ctx->pc = 0x13af64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 812)));
label_13af68:
    // 0x13af68: 0x831007  srav        $v0, $v1, $a0
    ctx->pc = 0x13af68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_13af6c:
    // 0x13af6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13af6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_13af70:
    // 0x13af70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13af74:
    if (ctx->pc == 0x13AF74u) {
        ctx->pc = 0x13AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF70u;
        // 0x13af74: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AF78u;
        goto label_13af78;
    }
    ctx->pc = 0x13AF70u;
    {
        const bool branch_taken_0x13af70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF70u;
        // 0x13af74: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af70) {
            ctx->pc = 0x13AF80u;
            goto label_13af80;
        }
    }
    ctx->pc = 0x13AF78u;
label_13af78:
    // 0x13af78: 0x10000011  b           . + 4 + (0x11 << 2)
label_13af7c:
    if (ctx->pc == 0x13AF7Cu) {
        ctx->pc = 0x13AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF78u;
        // 0x13af7c: 0xa2640332  sb          $a0, 0x332($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 818), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AF80u;
        goto label_13af80;
    }
    ctx->pc = 0x13AF78u;
    {
        const bool branch_taken_0x13af78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF78u;
        // 0x13af7c: 0xa2640332  sb          $a0, 0x332($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 818), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af78) {
            ctx->pc = 0x13AFC0u;
            goto label_13afc0;
        }
    }
    ctx->pc = 0x13AF80u;
label_13af80:
    // 0x13af80: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x13af80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_13af84:
    // 0x13af84: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x13af84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_13af88:
    // 0x13af88: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x13af88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_13af8c:
    // 0x13af8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13af8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13af90:
    // 0x13af90: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x13af90u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_13af94:
    // 0x13af94: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_13af98:
    if (ctx->pc == 0x13AF98u) {
        ctx->pc = 0x13AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF94u;
        // 0x13af98: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AF9Cu;
        goto label_13af9c;
    }
    ctx->pc = 0x13AF94u;
    {
        const bool branch_taken_0x13af94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13af94) {
            ctx->pc = 0x13AF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AF94u;
            // 0x13af98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AF9Cu;
            goto label_13af9c;
        }
    }
    ctx->pc = 0x13AF9Cu;
label_13af9c:
    // 0x13af9c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13af9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13afa0:
    // 0x13afa0: 0x1810  mfhi        $v1
    ctx->pc = 0x13afa0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_13afa4:
    // 0x13afa4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_13afa8:
    if (ctx->pc == 0x13AFA8u) {
        ctx->pc = 0x13AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFA4u;
        // 0x13afa8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AFACu;
        goto label_13afac;
    }
    ctx->pc = 0x13AFA4u;
    {
        const bool branch_taken_0x13afa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFA4u;
        // 0x13afa8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13afa4) {
            ctx->pc = 0x13AFC0u;
            goto label_13afc0;
        }
    }
    ctx->pc = 0x13AFACu;
label_13afac:
    // 0x13afac: 0x661007  srav        $v0, $a2, $v1
    ctx->pc = 0x13afacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_13afb0:
    // 0x13afb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13afb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_13afb4:
    // 0x13afb4: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
label_13afb8:
    if (ctx->pc == 0x13AFB8u) {
        ctx->pc = 0x13AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFB4u;
        // 0x13afb8: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AFBCu;
        goto label_13afbc;
    }
    ctx->pc = 0x13AFB4u;
    {
        const bool branch_taken_0x13afb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFB4u;
        // 0x13afb8: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13afb4) {
            ctx->pc = 0x13AF84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13af84;
        }
    }
    ctx->pc = 0x13AFBCu;
label_13afbc:
    // 0x13afbc: 0xa2630332  sb          $v1, 0x332($s3)
    ctx->pc = 0x13afbcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 818), (uint8_t)GPR_U32(ctx, 3));
label_13afc0:
    // 0x13afc0: 0x82620330  lb          $v0, 0x330($s3)
    ctx->pc = 0x13afc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 816)));
label_13afc4:
    // 0x13afc4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x13afc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_13afc8:
    // 0x13afc8: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_13afcc:
    if (ctx->pc == 0x13AFCCu) {
        ctx->pc = 0x13AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFC8u;
        // 0x13afcc: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AFD0u;
        goto label_13afd0;
    }
    ctx->pc = 0x13AFC8u;
    {
        const bool branch_taken_0x13afc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFC8u;
        // 0x13afcc: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13afc8) {
            ctx->pc = 0x13B0A0u;
            goto label_13b0a0;
        }
    }
    ctx->pc = 0x13AFD0u;
label_13afd0:
    // 0x13afd0: 0x82620333  lb          $v0, 0x333($s3)
    ctx->pc = 0x13afd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 819)));
label_13afd4:
    // 0x13afd4: 0x4420033  bltzl       $v0, . + 4 + (0x33 << 2)
label_13afd8:
    if (ctx->pc == 0x13AFD8u) {
        ctx->pc = 0x13AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFD4u;
        // 0x13afd8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AFDCu;
        goto label_13afdc;
    }
    ctx->pc = 0x13AFD4u;
    {
        const bool branch_taken_0x13afd4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13afd4) {
            ctx->pc = 0x13AFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AFD4u;
            // 0x13afd8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B0A4u;
            goto label_13b0a4;
        }
    }
    ctx->pc = 0x13AFDCu;
label_13afdc:
    // 0x13afdc: 0x8e650334  lw          $a1, 0x334($s3)
    ctx->pc = 0x13afdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_13afe0:
    // 0x13afe0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_13afe4:
    // 0x13afe4: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13afe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13afe8:
    // 0x13afe8: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13afec:
    // 0x13afec: 0x40f809  jalr        $v0
label_13aff0:
    if (ctx->pc == 0x13AFF0u) {
        ctx->pc = 0x13AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFECu;
        // 0x13aff0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AFF4u;
        goto label_13aff4;
    }
    ctx->pc = 0x13AFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13AFF4u);
        ctx->pc = 0x13AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFECu;
        // 0x13aff0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AFECu, 0x13AFF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13AFF4u;
label_13aff4:
    // 0x13aff4: 0x82660332  lb          $a2, 0x332($s3)
    ctx->pc = 0x13aff4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 818)));
label_13aff8:
    // 0x13aff8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13aff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13affc:
    // 0x13affc: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x13affcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_13b000:
    // 0x13b000: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13b000u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_13b004:
    // 0x13b004: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x13b004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_13b008:
    // 0x13b008: 0xc136afa  jal         func_4DABE8
label_13b00c:
    if (ctx->pc == 0x13B00Cu) {
        ctx->pc = 0x13B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B008u;
        // 0x13b00c: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B010u;
        goto label_13b010;
    }
    ctx->pc = 0x13B008u;
    SET_GPR_U32(ctx, 31, 0x13B010u);
    ctx->pc = 0x13B00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B008u;
    // 0x13b00c: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13B008u, 0x13B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B010u;
label_13b010:
    // 0x13b010: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x13b010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_13b014:
    // 0x13b014: 0x8e650334  lw          $a1, 0x334($s3)
    ctx->pc = 0x13b014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_13b018:
    // 0x13b018: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13b018u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13b01c:
    // 0x13b01c: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13b01cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13b020:
    // 0x13b020: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13b020u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13b024:
    // 0x13b024: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13b024u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_13b028:
    // 0x13b028: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x13b028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
label_13b02c:
    // 0x13b02c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x13b02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13b030:
    // 0x13b030: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13b030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_13b034:
    // 0x13b034: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13b034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13b038:
    // 0x13b038: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13b03c:
    // 0x13b03c: 0x40f809  jalr        $v0
label_13b040:
    if (ctx->pc == 0x13B040u) {
        ctx->pc = 0x13B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B03Cu;
        // 0x13b040: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B044u;
        goto label_13b044;
    }
    ctx->pc = 0x13B03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13B044u);
        ctx->pc = 0x13B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B03Cu;
        // 0x13b040: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B03Cu, 0x13B044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B044u;
label_13b044:
    // 0x13b044: 0x82660333  lb          $a2, 0x333($s3)
    ctx->pc = 0x13b044u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 819)));
label_13b048:
    // 0x13b048: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13b048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13b04c:
    // 0x13b04c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x13b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_13b050:
    // 0x13b050: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13b050u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_13b054:
    // 0x13b054: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x13b054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_13b058:
    // 0x13b058: 0xc136afa  jal         func_4DABE8
label_13b05c:
    if (ctx->pc == 0x13B05Cu) {
        ctx->pc = 0x13B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B058u;
        // 0x13b05c: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B060u;
        goto label_13b060;
    }
    ctx->pc = 0x13B058u;
    SET_GPR_U32(ctx, 31, 0x13B060u);
    ctx->pc = 0x13B05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B058u;
    // 0x13b05c: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13B058u, 0x13B060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B060u;
label_13b060:
    // 0x13b060: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x13b060u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_13b064:
    // 0x13b064: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13b064u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13b068:
    // 0x13b068: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13b068u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13b06c:
    // 0x13b06c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13b06cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13b070:
    // 0x13b070: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x13b070u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_13b074:
    // 0x13b074: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13b074u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13b078:
    // 0x13b078: 0x0  nop
    ctx->pc = 0x13b078u;
    // NOP
label_13b07c:
    // 0x13b07c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x13b07cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13b080:
    // 0x13b080: 0x0  nop
    ctx->pc = 0x13b080u;
    // NOP
label_13b084:
    // 0x13b084: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_13b088:
    if (ctx->pc == 0x13B088u) {
        ctx->pc = 0x13B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B084u;
        // 0x13b088: 0x7fa201f0  sq          $v0, 0x1F0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B08Cu;
        goto label_13b08c;
    }
    ctx->pc = 0x13B084u;
    {
        const bool branch_taken_0x13b084 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B084u;
        // 0x13b088: 0x7fa201f0  sq          $v0, 0x1F0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b084) {
            ctx->pc = 0x13B09Cu;
            goto label_13b09c;
        }
    }
    ctx->pc = 0x13B08Cu;
label_13b08c:
    // 0x13b08c: 0x82620332  lb          $v0, 0x332($s3)
    ctx->pc = 0x13b08cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 818)));
label_13b090:
    // 0x13b090: 0x92630333  lbu         $v1, 0x333($s3)
    ctx->pc = 0x13b090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 819)));
label_13b094:
    // 0x13b094: 0xa2620333  sb          $v0, 0x333($s3)
    ctx->pc = 0x13b094u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 819), (uint8_t)GPR_U32(ctx, 2));
label_13b098:
    // 0x13b098: 0xa2630332  sb          $v1, 0x332($s3)
    ctx->pc = 0x13b098u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 818), (uint8_t)GPR_U32(ctx, 3));
label_13b09c:
    // 0x13b09c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x13b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_13b0a0:
    // 0x13b0a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x13b0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13b0a4:
    // 0x13b0a4: 0x8ca2b2a0  lw          $v0, -0x4D60($a1)
    ctx->pc = 0x13b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294947488)));
label_13b0a8:
    // 0x13b0a8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x13b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_13b0ac:
    // 0x13b0ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13b0b0:
    // 0x13b0b0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x13b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13b0b4:
    // 0x13b0b4: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x13b0b4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_13b0b8:
    // 0x13b0b8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x13b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_13b0bc:
    // 0x13b0bc: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x13b0bcu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_13b0c0:
    // 0x13b0c0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x13b0c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_13b0c4:
    // 0x13b0c4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x13b0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_13b0c8:
    // 0x13b0c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x13b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_13b0cc:
    // 0x13b0cc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13b0d0:
    // 0x13b0d0: 0xc0d0680  jal         func_341A00
label_13b0d4:
    if (ctx->pc == 0x13B0D4u) {
        ctx->pc = 0x13B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0D0u;
        // 0x13b0d4: 0xacc3b2a0  sw          $v1, -0x4D60($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294947488), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B0D8u;
        goto label_13b0d8;
    }
    ctx->pc = 0x13B0D0u;
    SET_GPR_U32(ctx, 31, 0x13B0D8u);
    ctx->pc = 0x13B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B0D0u;
    // 0x13b0d4: 0xacc3b2a0  sw          $v1, -0x4D60($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294947488), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A00u, 0x13B0D0u, 0x13B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B0D8u;
label_13b0d8:
    // 0x13b0d8: 0x7bb002c0  lq          $s0, 0x2C0($sp)
    ctx->pc = 0x13b0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_13b0dc:
    // 0x13b0dc: 0x7bb102b0  lq          $s1, 0x2B0($sp)
    ctx->pc = 0x13b0dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_13b0e0:
    // 0x13b0e0: 0x7bb202a0  lq          $s2, 0x2A0($sp)
    ctx->pc = 0x13b0e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_13b0e4:
    // 0x13b0e4: 0x7bb30290  lq          $s3, 0x290($sp)
    ctx->pc = 0x13b0e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_13b0e8:
    // 0x13b0e8: 0x7bb40280  lq          $s4, 0x280($sp)
    ctx->pc = 0x13b0e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_13b0ec:
    // 0x13b0ec: 0x7bb50270  lq          $s5, 0x270($sp)
    ctx->pc = 0x13b0ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_13b0f0:
    // 0x13b0f0: 0x7bb60260  lq          $s6, 0x260($sp)
    ctx->pc = 0x13b0f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_13b0f4:
    // 0x13b0f4: 0x7bb70250  lq          $s7, 0x250($sp)
    ctx->pc = 0x13b0f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_13b0f8:
    // 0x13b0f8: 0x7bbe0240  lq          $fp, 0x240($sp)
    ctx->pc = 0x13b0f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_13b0fc:
    // 0x13b0fc: 0xdfbf0230  ld          $ra, 0x230($sp)
    ctx->pc = 0x13b0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 560)));
label_13b100:
    // 0x13b100: 0xc7b702e8  lwc1        $f23, 0x2E8($sp)
    ctx->pc = 0x13b100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_13b104:
    // 0x13b104: 0xc7b602e0  lwc1        $f22, 0x2E0($sp)
    ctx->pc = 0x13b104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_13b108:
    // 0x13b108: 0xc7b502d8  lwc1        $f21, 0x2D8($sp)
    ctx->pc = 0x13b108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_13b10c:
    // 0x13b10c: 0xc7b402d0  lwc1        $f20, 0x2D0($sp)
    ctx->pc = 0x13b10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13b110:
    // 0x13b110: 0x3e00008  jr          $ra
label_13b114:
    if (ctx->pc == 0x13B114u) {
        ctx->pc = 0x13B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B110u;
        // 0x13b114: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B118u;
        goto label_fallthrough_0x13b110;
    }
    ctx->pc = 0x13B110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B110u;
        // 0x13b114: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13b110:
    ctx->pc = 0x13B118u;
}
