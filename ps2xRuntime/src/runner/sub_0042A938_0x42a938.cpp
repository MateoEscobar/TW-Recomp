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

// Function: sub_0042A938
// Address: 0x42a938 - 0x42b020
void sub_0042A938_0x42a938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042A938_0x42a938");
#endif

    switch (ctx->pc) {
        case 0x42a938u: goto label_42a938;
        case 0x42a93cu: goto label_42a93c;
        case 0x42a940u: goto label_42a940;
        case 0x42a944u: goto label_42a944;
        case 0x42a948u: goto label_42a948;
        case 0x42a94cu: goto label_42a94c;
        case 0x42a950u: goto label_42a950;
        case 0x42a954u: goto label_42a954;
        case 0x42a958u: goto label_42a958;
        case 0x42a95cu: goto label_42a95c;
        case 0x42a960u: goto label_42a960;
        case 0x42a964u: goto label_42a964;
        case 0x42a968u: goto label_42a968;
        case 0x42a96cu: goto label_42a96c;
        case 0x42a970u: goto label_42a970;
        case 0x42a974u: goto label_42a974;
        case 0x42a978u: goto label_42a978;
        case 0x42a97cu: goto label_42a97c;
        case 0x42a980u: goto label_42a980;
        case 0x42a984u: goto label_42a984;
        case 0x42a988u: goto label_42a988;
        case 0x42a98cu: goto label_42a98c;
        case 0x42a990u: goto label_42a990;
        case 0x42a994u: goto label_42a994;
        case 0x42a998u: goto label_42a998;
        case 0x42a99cu: goto label_42a99c;
        case 0x42a9a0u: goto label_42a9a0;
        case 0x42a9a4u: goto label_42a9a4;
        case 0x42a9a8u: goto label_42a9a8;
        case 0x42a9acu: goto label_42a9ac;
        case 0x42a9b0u: goto label_42a9b0;
        case 0x42a9b4u: goto label_42a9b4;
        case 0x42a9b8u: goto label_42a9b8;
        case 0x42a9bcu: goto label_42a9bc;
        case 0x42a9c0u: goto label_42a9c0;
        case 0x42a9c4u: goto label_42a9c4;
        case 0x42a9c8u: goto label_42a9c8;
        case 0x42a9ccu: goto label_42a9cc;
        case 0x42a9d0u: goto label_42a9d0;
        case 0x42a9d4u: goto label_42a9d4;
        case 0x42a9d8u: goto label_42a9d8;
        case 0x42a9dcu: goto label_42a9dc;
        case 0x42a9e0u: goto label_42a9e0;
        case 0x42a9e4u: goto label_42a9e4;
        case 0x42a9e8u: goto label_42a9e8;
        case 0x42a9ecu: goto label_42a9ec;
        case 0x42a9f0u: goto label_42a9f0;
        case 0x42a9f4u: goto label_42a9f4;
        case 0x42a9f8u: goto label_42a9f8;
        case 0x42a9fcu: goto label_42a9fc;
        case 0x42aa00u: goto label_42aa00;
        case 0x42aa04u: goto label_42aa04;
        case 0x42aa08u: goto label_42aa08;
        case 0x42aa0cu: goto label_42aa0c;
        case 0x42aa10u: goto label_42aa10;
        case 0x42aa14u: goto label_42aa14;
        case 0x42aa18u: goto label_42aa18;
        case 0x42aa1cu: goto label_42aa1c;
        case 0x42aa20u: goto label_42aa20;
        case 0x42aa24u: goto label_42aa24;
        case 0x42aa28u: goto label_42aa28;
        case 0x42aa2cu: goto label_42aa2c;
        case 0x42aa30u: goto label_42aa30;
        case 0x42aa34u: goto label_42aa34;
        case 0x42aa38u: goto label_42aa38;
        case 0x42aa3cu: goto label_42aa3c;
        case 0x42aa40u: goto label_42aa40;
        case 0x42aa44u: goto label_42aa44;
        case 0x42aa48u: goto label_42aa48;
        case 0x42aa4cu: goto label_42aa4c;
        case 0x42aa50u: goto label_42aa50;
        case 0x42aa54u: goto label_42aa54;
        case 0x42aa58u: goto label_42aa58;
        case 0x42aa5cu: goto label_42aa5c;
        case 0x42aa60u: goto label_42aa60;
        case 0x42aa64u: goto label_42aa64;
        case 0x42aa68u: goto label_42aa68;
        case 0x42aa6cu: goto label_42aa6c;
        case 0x42aa70u: goto label_42aa70;
        case 0x42aa74u: goto label_42aa74;
        case 0x42aa78u: goto label_42aa78;
        case 0x42aa7cu: goto label_42aa7c;
        case 0x42aa80u: goto label_42aa80;
        case 0x42aa84u: goto label_42aa84;
        case 0x42aa88u: goto label_42aa88;
        case 0x42aa8cu: goto label_42aa8c;
        case 0x42aa90u: goto label_42aa90;
        case 0x42aa94u: goto label_42aa94;
        case 0x42aa98u: goto label_42aa98;
        case 0x42aa9cu: goto label_42aa9c;
        case 0x42aaa0u: goto label_42aaa0;
        case 0x42aaa4u: goto label_42aaa4;
        case 0x42aaa8u: goto label_42aaa8;
        case 0x42aaacu: goto label_42aaac;
        case 0x42aab0u: goto label_42aab0;
        case 0x42aab4u: goto label_42aab4;
        case 0x42aab8u: goto label_42aab8;
        case 0x42aabcu: goto label_42aabc;
        case 0x42aac0u: goto label_42aac0;
        case 0x42aac4u: goto label_42aac4;
        case 0x42aac8u: goto label_42aac8;
        case 0x42aaccu: goto label_42aacc;
        case 0x42aad0u: goto label_42aad0;
        case 0x42aad4u: goto label_42aad4;
        case 0x42aad8u: goto label_42aad8;
        case 0x42aadcu: goto label_42aadc;
        case 0x42aae0u: goto label_42aae0;
        case 0x42aae4u: goto label_42aae4;
        case 0x42aae8u: goto label_42aae8;
        case 0x42aaecu: goto label_42aaec;
        case 0x42aaf0u: goto label_42aaf0;
        case 0x42aaf4u: goto label_42aaf4;
        case 0x42aaf8u: goto label_42aaf8;
        case 0x42aafcu: goto label_42aafc;
        case 0x42ab00u: goto label_42ab00;
        case 0x42ab04u: goto label_42ab04;
        case 0x42ab08u: goto label_42ab08;
        case 0x42ab0cu: goto label_42ab0c;
        case 0x42ab10u: goto label_42ab10;
        case 0x42ab14u: goto label_42ab14;
        case 0x42ab18u: goto label_42ab18;
        case 0x42ab1cu: goto label_42ab1c;
        case 0x42ab20u: goto label_42ab20;
        case 0x42ab24u: goto label_42ab24;
        case 0x42ab28u: goto label_42ab28;
        case 0x42ab2cu: goto label_42ab2c;
        case 0x42ab30u: goto label_42ab30;
        case 0x42ab34u: goto label_42ab34;
        case 0x42ab38u: goto label_42ab38;
        case 0x42ab3cu: goto label_42ab3c;
        case 0x42ab40u: goto label_42ab40;
        case 0x42ab44u: goto label_42ab44;
        case 0x42ab48u: goto label_42ab48;
        case 0x42ab4cu: goto label_42ab4c;
        case 0x42ab50u: goto label_42ab50;
        case 0x42ab54u: goto label_42ab54;
        case 0x42ab58u: goto label_42ab58;
        case 0x42ab5cu: goto label_42ab5c;
        case 0x42ab60u: goto label_42ab60;
        case 0x42ab64u: goto label_42ab64;
        case 0x42ab68u: goto label_42ab68;
        case 0x42ab6cu: goto label_42ab6c;
        case 0x42ab70u: goto label_42ab70;
        case 0x42ab74u: goto label_42ab74;
        case 0x42ab78u: goto label_42ab78;
        case 0x42ab7cu: goto label_42ab7c;
        case 0x42ab80u: goto label_42ab80;
        case 0x42ab84u: goto label_42ab84;
        case 0x42ab88u: goto label_42ab88;
        case 0x42ab8cu: goto label_42ab8c;
        case 0x42ab90u: goto label_42ab90;
        case 0x42ab94u: goto label_42ab94;
        case 0x42ab98u: goto label_42ab98;
        case 0x42ab9cu: goto label_42ab9c;
        case 0x42aba0u: goto label_42aba0;
        case 0x42aba4u: goto label_42aba4;
        case 0x42aba8u: goto label_42aba8;
        case 0x42abacu: goto label_42abac;
        case 0x42abb0u: goto label_42abb0;
        case 0x42abb4u: goto label_42abb4;
        case 0x42abb8u: goto label_42abb8;
        case 0x42abbcu: goto label_42abbc;
        case 0x42abc0u: goto label_42abc0;
        case 0x42abc4u: goto label_42abc4;
        case 0x42abc8u: goto label_42abc8;
        case 0x42abccu: goto label_42abcc;
        case 0x42abd0u: goto label_42abd0;
        case 0x42abd4u: goto label_42abd4;
        case 0x42abd8u: goto label_42abd8;
        case 0x42abdcu: goto label_42abdc;
        case 0x42abe0u: goto label_42abe0;
        case 0x42abe4u: goto label_42abe4;
        case 0x42abe8u: goto label_42abe8;
        case 0x42abecu: goto label_42abec;
        case 0x42abf0u: goto label_42abf0;
        case 0x42abf4u: goto label_42abf4;
        case 0x42abf8u: goto label_42abf8;
        case 0x42abfcu: goto label_42abfc;
        case 0x42ac00u: goto label_42ac00;
        case 0x42ac04u: goto label_42ac04;
        case 0x42ac08u: goto label_42ac08;
        case 0x42ac0cu: goto label_42ac0c;
        case 0x42ac10u: goto label_42ac10;
        case 0x42ac14u: goto label_42ac14;
        case 0x42ac18u: goto label_42ac18;
        case 0x42ac1cu: goto label_42ac1c;
        case 0x42ac20u: goto label_42ac20;
        case 0x42ac24u: goto label_42ac24;
        case 0x42ac28u: goto label_42ac28;
        case 0x42ac2cu: goto label_42ac2c;
        case 0x42ac30u: goto label_42ac30;
        case 0x42ac34u: goto label_42ac34;
        case 0x42ac38u: goto label_42ac38;
        case 0x42ac3cu: goto label_42ac3c;
        case 0x42ac40u: goto label_42ac40;
        case 0x42ac44u: goto label_42ac44;
        case 0x42ac48u: goto label_42ac48;
        case 0x42ac4cu: goto label_42ac4c;
        case 0x42ac50u: goto label_42ac50;
        case 0x42ac54u: goto label_42ac54;
        case 0x42ac58u: goto label_42ac58;
        case 0x42ac5cu: goto label_42ac5c;
        case 0x42ac60u: goto label_42ac60;
        case 0x42ac64u: goto label_42ac64;
        case 0x42ac68u: goto label_42ac68;
        case 0x42ac6cu: goto label_42ac6c;
        case 0x42ac70u: goto label_42ac70;
        case 0x42ac74u: goto label_42ac74;
        case 0x42ac78u: goto label_42ac78;
        case 0x42ac7cu: goto label_42ac7c;
        case 0x42ac80u: goto label_42ac80;
        case 0x42ac84u: goto label_42ac84;
        case 0x42ac88u: goto label_42ac88;
        case 0x42ac8cu: goto label_42ac8c;
        case 0x42ac90u: goto label_42ac90;
        case 0x42ac94u: goto label_42ac94;
        case 0x42ac98u: goto label_42ac98;
        case 0x42ac9cu: goto label_42ac9c;
        case 0x42aca0u: goto label_42aca0;
        case 0x42aca4u: goto label_42aca4;
        case 0x42aca8u: goto label_42aca8;
        case 0x42acacu: goto label_42acac;
        case 0x42acb0u: goto label_42acb0;
        case 0x42acb4u: goto label_42acb4;
        case 0x42acb8u: goto label_42acb8;
        case 0x42acbcu: goto label_42acbc;
        case 0x42acc0u: goto label_42acc0;
        case 0x42acc4u: goto label_42acc4;
        case 0x42acc8u: goto label_42acc8;
        case 0x42acccu: goto label_42accc;
        case 0x42acd0u: goto label_42acd0;
        case 0x42acd4u: goto label_42acd4;
        case 0x42acd8u: goto label_42acd8;
        case 0x42acdcu: goto label_42acdc;
        case 0x42ace0u: goto label_42ace0;
        case 0x42ace4u: goto label_42ace4;
        case 0x42ace8u: goto label_42ace8;
        case 0x42acecu: goto label_42acec;
        case 0x42acf0u: goto label_42acf0;
        case 0x42acf4u: goto label_42acf4;
        case 0x42acf8u: goto label_42acf8;
        case 0x42acfcu: goto label_42acfc;
        case 0x42ad00u: goto label_42ad00;
        case 0x42ad04u: goto label_42ad04;
        case 0x42ad08u: goto label_42ad08;
        case 0x42ad0cu: goto label_42ad0c;
        case 0x42ad10u: goto label_42ad10;
        case 0x42ad14u: goto label_42ad14;
        case 0x42ad18u: goto label_42ad18;
        case 0x42ad1cu: goto label_42ad1c;
        case 0x42ad20u: goto label_42ad20;
        case 0x42ad24u: goto label_42ad24;
        case 0x42ad28u: goto label_42ad28;
        case 0x42ad2cu: goto label_42ad2c;
        case 0x42ad30u: goto label_42ad30;
        case 0x42ad34u: goto label_42ad34;
        case 0x42ad38u: goto label_42ad38;
        case 0x42ad3cu: goto label_42ad3c;
        case 0x42ad40u: goto label_42ad40;
        case 0x42ad44u: goto label_42ad44;
        case 0x42ad48u: goto label_42ad48;
        case 0x42ad4cu: goto label_42ad4c;
        case 0x42ad50u: goto label_42ad50;
        case 0x42ad54u: goto label_42ad54;
        case 0x42ad58u: goto label_42ad58;
        case 0x42ad5cu: goto label_42ad5c;
        case 0x42ad60u: goto label_42ad60;
        case 0x42ad64u: goto label_42ad64;
        case 0x42ad68u: goto label_42ad68;
        case 0x42ad6cu: goto label_42ad6c;
        case 0x42ad70u: goto label_42ad70;
        case 0x42ad74u: goto label_42ad74;
        case 0x42ad78u: goto label_42ad78;
        case 0x42ad7cu: goto label_42ad7c;
        case 0x42ad80u: goto label_42ad80;
        case 0x42ad84u: goto label_42ad84;
        case 0x42ad88u: goto label_42ad88;
        case 0x42ad8cu: goto label_42ad8c;
        case 0x42ad90u: goto label_42ad90;
        case 0x42ad94u: goto label_42ad94;
        case 0x42ad98u: goto label_42ad98;
        case 0x42ad9cu: goto label_42ad9c;
        case 0x42ada0u: goto label_42ada0;
        case 0x42ada4u: goto label_42ada4;
        case 0x42ada8u: goto label_42ada8;
        case 0x42adacu: goto label_42adac;
        case 0x42adb0u: goto label_42adb0;
        case 0x42adb4u: goto label_42adb4;
        case 0x42adb8u: goto label_42adb8;
        case 0x42adbcu: goto label_42adbc;
        case 0x42adc0u: goto label_42adc0;
        case 0x42adc4u: goto label_42adc4;
        case 0x42adc8u: goto label_42adc8;
        case 0x42adccu: goto label_42adcc;
        case 0x42add0u: goto label_42add0;
        case 0x42add4u: goto label_42add4;
        case 0x42add8u: goto label_42add8;
        case 0x42addcu: goto label_42addc;
        case 0x42ade0u: goto label_42ade0;
        case 0x42ade4u: goto label_42ade4;
        case 0x42ade8u: goto label_42ade8;
        case 0x42adecu: goto label_42adec;
        case 0x42adf0u: goto label_42adf0;
        case 0x42adf4u: goto label_42adf4;
        case 0x42adf8u: goto label_42adf8;
        case 0x42adfcu: goto label_42adfc;
        case 0x42ae00u: goto label_42ae00;
        case 0x42ae04u: goto label_42ae04;
        case 0x42ae08u: goto label_42ae08;
        case 0x42ae0cu: goto label_42ae0c;
        case 0x42ae10u: goto label_42ae10;
        case 0x42ae14u: goto label_42ae14;
        case 0x42ae18u: goto label_42ae18;
        case 0x42ae1cu: goto label_42ae1c;
        case 0x42ae20u: goto label_42ae20;
        case 0x42ae24u: goto label_42ae24;
        case 0x42ae28u: goto label_42ae28;
        case 0x42ae2cu: goto label_42ae2c;
        case 0x42ae30u: goto label_42ae30;
        case 0x42ae34u: goto label_42ae34;
        case 0x42ae38u: goto label_42ae38;
        case 0x42ae3cu: goto label_42ae3c;
        case 0x42ae40u: goto label_42ae40;
        case 0x42ae44u: goto label_42ae44;
        case 0x42ae48u: goto label_42ae48;
        case 0x42ae4cu: goto label_42ae4c;
        case 0x42ae50u: goto label_42ae50;
        case 0x42ae54u: goto label_42ae54;
        case 0x42ae58u: goto label_42ae58;
        case 0x42ae5cu: goto label_42ae5c;
        case 0x42ae60u: goto label_42ae60;
        case 0x42ae64u: goto label_42ae64;
        case 0x42ae68u: goto label_42ae68;
        case 0x42ae6cu: goto label_42ae6c;
        case 0x42ae70u: goto label_42ae70;
        case 0x42ae74u: goto label_42ae74;
        case 0x42ae78u: goto label_42ae78;
        case 0x42ae7cu: goto label_42ae7c;
        case 0x42ae80u: goto label_42ae80;
        case 0x42ae84u: goto label_42ae84;
        case 0x42ae88u: goto label_42ae88;
        case 0x42ae8cu: goto label_42ae8c;
        case 0x42ae90u: goto label_42ae90;
        case 0x42ae94u: goto label_42ae94;
        case 0x42ae98u: goto label_42ae98;
        case 0x42ae9cu: goto label_42ae9c;
        case 0x42aea0u: goto label_42aea0;
        case 0x42aea4u: goto label_42aea4;
        case 0x42aea8u: goto label_42aea8;
        case 0x42aeacu: goto label_42aeac;
        case 0x42aeb0u: goto label_42aeb0;
        case 0x42aeb4u: goto label_42aeb4;
        case 0x42aeb8u: goto label_42aeb8;
        case 0x42aebcu: goto label_42aebc;
        case 0x42aec0u: goto label_42aec0;
        case 0x42aec4u: goto label_42aec4;
        case 0x42aec8u: goto label_42aec8;
        case 0x42aeccu: goto label_42aecc;
        case 0x42aed0u: goto label_42aed0;
        case 0x42aed4u: goto label_42aed4;
        case 0x42aed8u: goto label_42aed8;
        case 0x42aedcu: goto label_42aedc;
        case 0x42aee0u: goto label_42aee0;
        case 0x42aee4u: goto label_42aee4;
        case 0x42aee8u: goto label_42aee8;
        case 0x42aeecu: goto label_42aeec;
        case 0x42aef0u: goto label_42aef0;
        case 0x42aef4u: goto label_42aef4;
        case 0x42aef8u: goto label_42aef8;
        case 0x42aefcu: goto label_42aefc;
        case 0x42af00u: goto label_42af00;
        case 0x42af04u: goto label_42af04;
        case 0x42af08u: goto label_42af08;
        case 0x42af0cu: goto label_42af0c;
        case 0x42af10u: goto label_42af10;
        case 0x42af14u: goto label_42af14;
        case 0x42af18u: goto label_42af18;
        case 0x42af1cu: goto label_42af1c;
        case 0x42af20u: goto label_42af20;
        case 0x42af24u: goto label_42af24;
        case 0x42af28u: goto label_42af28;
        case 0x42af2cu: goto label_42af2c;
        case 0x42af30u: goto label_42af30;
        case 0x42af34u: goto label_42af34;
        case 0x42af38u: goto label_42af38;
        case 0x42af3cu: goto label_42af3c;
        case 0x42af40u: goto label_42af40;
        case 0x42af44u: goto label_42af44;
        case 0x42af48u: goto label_42af48;
        case 0x42af4cu: goto label_42af4c;
        case 0x42af50u: goto label_42af50;
        case 0x42af54u: goto label_42af54;
        case 0x42af58u: goto label_42af58;
        case 0x42af5cu: goto label_42af5c;
        case 0x42af60u: goto label_42af60;
        case 0x42af64u: goto label_42af64;
        case 0x42af68u: goto label_42af68;
        case 0x42af6cu: goto label_42af6c;
        case 0x42af70u: goto label_42af70;
        case 0x42af74u: goto label_42af74;
        case 0x42af78u: goto label_42af78;
        case 0x42af7cu: goto label_42af7c;
        case 0x42af80u: goto label_42af80;
        case 0x42af84u: goto label_42af84;
        case 0x42af88u: goto label_42af88;
        case 0x42af8cu: goto label_42af8c;
        case 0x42af90u: goto label_42af90;
        case 0x42af94u: goto label_42af94;
        case 0x42af98u: goto label_42af98;
        case 0x42af9cu: goto label_42af9c;
        case 0x42afa0u: goto label_42afa0;
        case 0x42afa4u: goto label_42afa4;
        case 0x42afa8u: goto label_42afa8;
        case 0x42afacu: goto label_42afac;
        case 0x42afb0u: goto label_42afb0;
        case 0x42afb4u: goto label_42afb4;
        case 0x42afb8u: goto label_42afb8;
        case 0x42afbcu: goto label_42afbc;
        case 0x42afc0u: goto label_42afc0;
        case 0x42afc4u: goto label_42afc4;
        case 0x42afc8u: goto label_42afc8;
        case 0x42afccu: goto label_42afcc;
        case 0x42afd0u: goto label_42afd0;
        case 0x42afd4u: goto label_42afd4;
        case 0x42afd8u: goto label_42afd8;
        case 0x42afdcu: goto label_42afdc;
        case 0x42afe0u: goto label_42afe0;
        case 0x42afe4u: goto label_42afe4;
        case 0x42afe8u: goto label_42afe8;
        case 0x42afecu: goto label_42afec;
        case 0x42aff0u: goto label_42aff0;
        case 0x42aff4u: goto label_42aff4;
        case 0x42aff8u: goto label_42aff8;
        case 0x42affcu: goto label_42affc;
        case 0x42b000u: goto label_42b000;
        case 0x42b004u: goto label_42b004;
        case 0x42b008u: goto label_42b008;
        case 0x42b00cu: goto label_42b00c;
        case 0x42b010u: goto label_42b010;
        case 0x42b014u: goto label_42b014;
        case 0x42b018u: goto label_42b018;
        case 0x42b01cu: goto label_42b01c;
        default: break;
    }

    ctx->pc = 0x42a938u;

label_42a938:
    // 0x42a938: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x42a938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_42a93c:
    // 0x42a93c: 0x7fb201e0  sq          $s2, 0x1E0($sp)
    ctx->pc = 0x42a93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 18));
label_42a940:
    // 0x42a940: 0x7fb501b0  sq          $s5, 0x1B0($sp)
    ctx->pc = 0x42a940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 21));
label_42a944:
    // 0x42a944: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x42a944u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
label_42a948:
    // 0x42a948: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x42a948u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42a94c:
    // 0x42a94c: 0xafa50168  sw          $a1, 0x168($sp)
    ctx->pc = 0x42a94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 5));
label_42a950:
    // 0x42a950: 0x8e445340  lw          $a0, 0x5340($s2)
    ctx->pc = 0x42a950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21312)));
label_42a954:
    // 0x42a954: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42a954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a958:
    // 0x42a958: 0x7fb00200  sq          $s0, 0x200($sp)
    ctx->pc = 0x42a958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 16));
label_42a95c:
    // 0x42a95c: 0x7fb301d0  sq          $s3, 0x1D0($sp)
    ctx->pc = 0x42a95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 19));
label_42a960:
    // 0x42a960: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x42a960u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_42a964:
    // 0x42a964: 0x7fb401c0  sq          $s4, 0x1C0($sp)
    ctx->pc = 0x42a964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 20));
label_42a968:
    // 0x42a968: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x42a968u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a96c:
    // 0x42a96c: 0x7fb70190  sq          $s7, 0x190($sp)
    ctx->pc = 0x42a96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 23));
label_42a970:
    // 0x42a970: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x42a970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a974:
    // 0x42a974: 0x7fb101f0  sq          $s1, 0x1F0($sp)
    ctx->pc = 0x42a974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 17));
label_42a978:
    // 0x42a978: 0x7fb601a0  sq          $s6, 0x1A0($sp)
    ctx->pc = 0x42a978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 22));
label_42a97c:
    // 0x42a97c: 0x7fbe0180  sq          $fp, 0x180($sp)
    ctx->pc = 0x42a97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 30));
label_42a980:
    // 0x42a980: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x42a980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
label_42a984:
    // 0x42a984: 0xc0552b8  jal         func_154AE0
label_42a988:
    if (ctx->pc == 0x42A988u) {
        ctx->pc = 0x42A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A984u;
        // 0x42a988: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A98Cu;
        goto label_42a98c;
    }
    ctx->pc = 0x42A984u;
    SET_GPR_U32(ctx, 31, 0x42A98Cu);
    ctx->pc = 0x42A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A984u;
    // 0x42a988: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x42A984u, 0x42A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A98Cu;
label_42a98c:
    // 0x42a98c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x42a98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_42a990:
    // 0x42a990: 0xc044152  jal         func_110548
label_42a994:
    if (ctx->pc == 0x42A994u) {
        ctx->pc = 0x42A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A990u;
        // 0x42a994: 0xafa0016c  sw          $zero, 0x16C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A998u;
        goto label_42a998;
    }
    ctx->pc = 0x42A990u;
    SET_GPR_U32(ctx, 31, 0x42A998u);
    ctx->pc = 0x42A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A990u;
    // 0x42a994: 0xafa0016c  sw          $zero, 0x16C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110548u, 0x42A990u, 0x42A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A998u;
label_42a998:
    // 0x42a998: 0xc043eea  jal         func_10FBA8
label_42a99c:
    if (ctx->pc == 0x42A99Cu) {
        ctx->pc = 0x42A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A998u;
        // 0x42a99c: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A9A0u;
        goto label_42a9a0;
    }
    ctx->pc = 0x42A998u;
    SET_GPR_U32(ctx, 31, 0x42A9A0u);
    ctx->pc = 0x42A99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A998u;
    // 0x42a99c: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FBA8u, 0x42A998u, 0x42A9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A9A0u;
label_42a9a0:
    // 0x42a9a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x42a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_42a9a4:
    // 0x42a9a4: 0x8c45bce4  lw          $a1, -0x431C($v0)
    ctx->pc = 0x42a9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_42a9a8:
    // 0x42a9a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x42a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_42a9ac:
    // 0x42a9ac: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x42a9acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_42a9b0:
    // 0x42a9b0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x42a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_42a9b4:
    // 0x42a9b4: 0x40f809  jalr        $v0
label_42a9b8:
    if (ctx->pc == 0x42A9B8u) {
        ctx->pc = 0x42A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A9B4u;
        // 0x42a9b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A9BCu;
        goto label_42a9bc;
    }
    ctx->pc = 0x42A9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42A9BCu);
        ctx->pc = 0x42A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A9B4u;
        // 0x42a9b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A9B4u, 0x42A9BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A9BCu;
label_42a9bc:
    // 0x42a9bc: 0xc053eba  jal         func_14FAE8
label_42a9c0:
    if (ctx->pc == 0x42A9C0u) {
        ctx->pc = 0x42A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A9BCu;
        // 0x42a9c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A9C4u;
        goto label_42a9c4;
    }
    ctx->pc = 0x42A9BCu;
    SET_GPR_U32(ctx, 31, 0x42A9C4u);
    ctx->pc = 0x42A9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A9BCu;
    // 0x42a9c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAE8u, 0x42A9BCu, 0x42A9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A9C4u;
label_42a9c4:
    // 0x42a9c4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_42a9c8:
    // 0x42a9c8: 0x8c62ea74  lw          $v0, -0x158C($v1)
    ctx->pc = 0x42a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961780)));
label_42a9cc:
    // 0x42a9cc: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
label_42a9d0:
    if (ctx->pc == 0x42A9D0u) {
        ctx->pc = 0x42A9D4u;
        goto label_42a9d4;
    }
    ctx->pc = 0x42A9CCu;
    {
        const bool branch_taken_0x42a9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a9cc) {
            ctx->pc = 0x42ABCCu;
            goto label_42abcc;
        }
    }
    ctx->pc = 0x42A9D4u;
label_42a9d4:
    // 0x42a9d4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42a9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_42a9d8:
    // 0x42a9d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x42a9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_42a9dc:
    // 0x42a9dc: 0x24a5bf90  addiu       $a1, $a1, -0x4070
    ctx->pc = 0x42a9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950800));
label_42a9e0:
    // 0x42a9e0: 0xc10ca28  jal         func_4328A0
label_42a9e4:
    if (ctx->pc == 0x42A9E4u) {
        ctx->pc = 0x42A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A9E0u;
        // 0x42a9e4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A9E8u;
        goto label_42a9e8;
    }
    ctx->pc = 0x42A9E0u;
    SET_GPR_U32(ctx, 31, 0x42A9E8u);
    ctx->pc = 0x42A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A9E0u;
    // 0x42a9e4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x42A9E0u, 0x42A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A9E8u;
label_42a9e8:
    // 0x42a9e8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x42a9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_42a9ec:
    // 0x42a9ec: 0x8e02b788  lw          $v0, -0x4878($s0)
    ctx->pc = 0x42a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948744)));
label_42a9f0:
    // 0x42a9f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x42a9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_42a9f4:
    // 0x42a9f4: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x42a9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_42a9f8:
    // 0x42a9f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x42a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42a9fc:
    // 0x42a9fc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x42a9fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_42aa00:
    // 0x42aa00: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x42aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_42aa04:
    // 0x42aa04: 0x40f809  jalr        $v0
label_42aa08:
    if (ctx->pc == 0x42AA08u) {
        ctx->pc = 0x42AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA04u;
        // 0x42aa08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AA0Cu;
        goto label_42aa0c;
    }
    ctx->pc = 0x42AA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42AA0Cu);
        ctx->pc = 0x42AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA04u;
        // 0x42aa08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AA04u, 0x42AA0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42AA0Cu;
label_42aa0c:
    // 0x42aa0c: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
label_42aa10:
    if (ctx->pc == 0x42AA10u) {
        ctx->pc = 0x42AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA0Cu;
        // 0x42aa10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AA14u;
        goto label_42aa14;
    }
    ctx->pc = 0x42AA0Cu;
    {
        const bool branch_taken_0x42aa0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA0Cu;
        // 0x42aa10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aa0c) {
            ctx->pc = 0x42ABCCu;
            goto label_42abcc;
        }
    }
    ctx->pc = 0x42AA14u;
label_42aa14:
    // 0x42aa14: 0x3c16006f  lui         $s6, 0x6F
    ctx->pc = 0x42aa14u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
label_42aa18:
    // 0x42aa18: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x42aa18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_42aa1c:
    // 0x42aa1c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_42aa20:
    // 0x42aa20: 0x8ec5b9b8  lw          $a1, -0x4648($s6)
    ctx->pc = 0x42aa20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949304)));
label_42aa24:
    // 0x42aa24: 0x2451bfa8  addiu       $s1, $v0, -0x4058
    ctx->pc = 0x42aa24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950824));
label_42aa28:
    // 0x42aa28: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x42aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42aa2c:
    // 0x42aa2c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x42aa2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_42aa30:
    // 0x42aa30: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x42aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_42aa34:
    // 0x42aa34: 0x60f809  jalr        $v1
label_42aa38:
    if (ctx->pc == 0x42AA38u) {
        ctx->pc = 0x42AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA34u;
        // 0x42aa38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AA3Cu;
        goto label_42aa3c;
    }
    ctx->pc = 0x42AA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42AA3Cu);
        ctx->pc = 0x42AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA34u;
        // 0x42aa38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AA34u, 0x42AA3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42AA3Cu;
label_42aa3c:
    // 0x42aa3c: 0x8e02b788  lw          $v0, -0x4878($s0)
    ctx->pc = 0x42aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948744)));
label_42aa40:
    // 0x42aa40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x42aa40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_42aa44:
    // 0x42aa44: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x42aa44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_42aa48:
    // 0x42aa48: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x42aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42aa4c:
    // 0x42aa4c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x42aa4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_42aa50:
    // 0x42aa50: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x42aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_42aa54:
    // 0x42aa54: 0x40f809  jalr        $v0
label_42aa58:
    if (ctx->pc == 0x42AA58u) {
        ctx->pc = 0x42AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA54u;
        // 0x42aa58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AA5Cu;
        goto label_42aa5c;
    }
    ctx->pc = 0x42AA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42AA5Cu);
        ctx->pc = 0x42AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA54u;
        // 0x42aa58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AA54u, 0x42AA5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42AA5Cu;
label_42aa5c:
    // 0x42aa5c: 0x8e445340  lw          $a0, 0x5340($s2)
    ctx->pc = 0x42aa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21312)));
label_42aa60:
    // 0x42aa60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42aa60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42aa64:
    // 0x42aa64: 0xc0552b8  jal         func_154AE0
label_42aa68:
    if (ctx->pc == 0x42AA68u) {
        ctx->pc = 0x42AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA64u;
        // 0x42aa68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AA6Cu;
        goto label_42aa6c;
    }
    ctx->pc = 0x42AA64u;
    SET_GPR_U32(ctx, 31, 0x42AA6Cu);
    ctx->pc = 0x42AA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AA64u;
    // 0x42aa68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x42AA64u, 0x42AA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AA6Cu;
label_42aa6c:
    // 0x42aa6c: 0x8e445340  lw          $a0, 0x5340($s2)
    ctx->pc = 0x42aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21312)));
label_42aa70:
    // 0x42aa70: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x42aa70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
label_42aa74:
    // 0x42aa74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x42aa74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_42aa78:
    // 0x42aa78: 0x24e7a930  addiu       $a3, $a3, -0x56D0
    ctx->pc = 0x42aa78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945072));
label_42aa7c:
    // 0x42aa7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x42aa7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42aa80:
    // 0x42aa80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x42aa80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42aa84:
    // 0x42aa84: 0xc055354  jal         func_154D50
label_42aa88:
    if (ctx->pc == 0x42AA88u) {
        ctx->pc = 0x42AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA84u;
        // 0x42aa88: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AA8Cu;
        goto label_42aa8c;
    }
    ctx->pc = 0x42AA84u;
    SET_GPR_U32(ctx, 31, 0x42AA8Cu);
    ctx->pc = 0x42AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AA84u;
    // 0x42aa88: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D50u, 0x42AA84u, 0x42AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AA8Cu;
label_42aa8c:
    // 0x42aa8c: 0x8e445340  lw          $a0, 0x5340($s2)
    ctx->pc = 0x42aa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21312)));
label_42aa90:
    // 0x42aa90: 0xc0552b8  jal         func_154AE0
label_42aa94:
    if (ctx->pc == 0x42AA94u) {
        ctx->pc = 0x42AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA90u;
        // 0x42aa94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AA98u;
        goto label_42aa98;
    }
    ctx->pc = 0x42AA90u;
    SET_GPR_U32(ctx, 31, 0x42AA98u);
    ctx->pc = 0x42AA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AA90u;
    // 0x42aa94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x42AA90u, 0x42AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AA98u;
label_42aa98:
    // 0x42aa98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x42aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_42aa9c:
    // 0x42aa9c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42aa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_42aaa0:
    // 0x42aaa0: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x42aaa0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_42aaa4:
    // 0x42aaa4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x42aaa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_42aaa8:
    // 0x42aaa8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x42aaa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42aaac:
    // 0x42aaac: 0x24090068  addiu       $t1, $zero, 0x68
    ctx->pc = 0x42aaacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_42aab0:
    // 0x42aab0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x42aab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_42aab4:
    // 0x42aab4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x42aab4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42aab8:
    // 0x42aab8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x42aab8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42aabc:
    // 0x42aabc: 0x24a5bfa0  addiu       $a1, $a1, -0x4060
    ctx->pc = 0x42aabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950816));
label_42aac0:
    // 0x42aac0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x42aac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_42aac4:
    // 0x42aac4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x42aac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42aac8:
    // 0x42aac8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x42aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_42aacc:
    // 0x42aacc: 0x40f809  jalr        $v0
label_42aad0:
    if (ctx->pc == 0x42AAD0u) {
        ctx->pc = 0x42AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AACCu;
        // 0x42aad0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AAD4u;
        goto label_42aad4;
    }
    ctx->pc = 0x42AACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42AAD4u);
        ctx->pc = 0x42AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AACCu;
        // 0x42aad0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AACCu, 0x42AAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42AAD4u;
label_42aad4:
    // 0x42aad4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x42aad4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42aad8:
    // 0x42aad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42aad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42aadc:
    // 0x42aadc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x42aadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_42aae0:
    // 0x42aae0: 0xc0d4826  jal         func_352098
label_42aae4:
    if (ctx->pc == 0x42AAE4u) {
        ctx->pc = 0x42AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AAE0u;
        // 0x42aae4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AAE8u;
        goto label_42aae8;
    }
    ctx->pc = 0x42AAE0u;
    SET_GPR_U32(ctx, 31, 0x42AAE8u);
    ctx->pc = 0x42AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AAE0u;
    // 0x42aae4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352098u, 0x42AAE0u, 0x42AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AAE8u;
label_42aae8:
    // 0x42aae8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x42aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_42aaec:
    // 0x42aaec: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42aaecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_42aaf0:
    // 0x42aaf0: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x42aaf0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_42aaf4:
    // 0x42aaf4: 0x24a5bfd0  addiu       $a1, $a1, -0x4030
    ctx->pc = 0x42aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950864));
label_42aaf8:
    // 0x42aaf8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x42aaf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42aafc:
    // 0x42aafc: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x42aafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_42ab00:
    // 0x42ab00: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x42ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_42ab04:
    // 0x42ab04: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x42ab04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_42ab08:
    // 0x42ab08: 0x24090070  addiu       $t1, $zero, 0x70
    ctx->pc = 0x42ab08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_42ab0c:
    // 0x42ab0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x42ab0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ab10:
    // 0x42ab10: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x42ab10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_42ab14:
    // 0x42ab14: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x42ab14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ab18:
    // 0x42ab18: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x42ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_42ab1c:
    // 0x42ab1c: 0x40f809  jalr        $v0
label_42ab20:
    if (ctx->pc == 0x42AB20u) {
        ctx->pc = 0x42AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AB1Cu;
        // 0x42ab20: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AB24u;
        goto label_42ab24;
    }
    ctx->pc = 0x42AB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42AB24u);
        ctx->pc = 0x42AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AB1Cu;
        // 0x42ab20: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AB1Cu, 0x42AB24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42AB24u;
label_42ab24:
    // 0x42ab24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x42ab24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42ab28:
    // 0x42ab28: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
label_42ab2c:
    if (ctx->pc == 0x42AB2Cu) {
        ctx->pc = 0x42AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AB28u;
        // 0x42ab2c: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AB30u;
        goto label_42ab30;
    }
    ctx->pc = 0x42AB28u;
    {
        const bool branch_taken_0x42ab28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x42ab28) {
            ctx->pc = 0x42AB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42AB28u;
            // 0x42ab2c: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42AB40u;
            goto label_42ab40;
        }
    }
    ctx->pc = 0x42AB30u;
label_42ab30:
    // 0x42ab30: 0xc0d5320  jal         func_354C80
label_42ab34:
    if (ctx->pc == 0x42AB34u) {
        ctx->pc = 0x42AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AB30u;
        // 0x42ab34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AB38u;
        goto label_42ab38;
    }
    ctx->pc = 0x42AB30u;
    SET_GPR_U32(ctx, 31, 0x42AB38u);
    ctx->pc = 0x42AB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AB30u;
    // 0x42ab34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354C80u, 0x42AB30u, 0x42AB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AB38u;
label_42ab38:
    // 0x42ab38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x42ab38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42ab3c:
    // 0x42ab3c: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x42ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_42ab40:
    // 0x42ab40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x42ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_42ab44:
    // 0x42ab44: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x42ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_42ab48:
    // 0x42ab48: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x42ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_42ab4c:
    // 0x42ab4c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x42ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_42ab50:
    // 0x42ab50: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x42ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_42ab54:
    // 0x42ab54: 0x24a51780  addiu       $a1, $a1, 0x1780
    ctx->pc = 0x42ab54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6016));
label_42ab58:
    // 0x42ab58: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x42ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42ab5c:
    // 0x42ab5c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x42ab5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_42ab60:
    // 0x42ab60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x42ab60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ab64:
    // 0x42ab64: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x42ab64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_42ab68:
    // 0x42ab68: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x42ab68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_42ab6c:
    // 0x42ab6c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x42ab6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_42ab70:
    // 0x42ab70: 0xc04786c  jal         func_11E1B0
label_42ab74:
    if (ctx->pc == 0x42AB74u) {
        ctx->pc = 0x42AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AB70u;
        // 0x42ab74: 0x8e850098  lw          $a1, 0x98($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AB78u;
        goto label_42ab78;
    }
    ctx->pc = 0x42AB70u;
    SET_GPR_U32(ctx, 31, 0x42AB78u);
    ctx->pc = 0x42AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AB70u;
    // 0x42ab74: 0x8e850098  lw          $a1, 0x98($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B0u, 0x42AB70u, 0x42AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AB78u;
label_42ab78:
    // 0x42ab78: 0x8e8300a8  lw          $v1, 0xA8($s4)
    ctx->pc = 0x42ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
label_42ab7c:
    // 0x42ab7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x42ab7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42ab80:
    // 0x42ab80: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x42ab80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_42ab84:
    // 0x42ab84: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x42ab84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_42ab88:
    // 0x42ab88: 0x8e820098  lw          $v0, 0x98($s4)
    ctx->pc = 0x42ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
label_42ab8c:
    // 0x42ab8c: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x42ab8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_42ab90:
    // 0x42ab90: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x42ab90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42ab94:
    // 0x42ab94: 0xc0d58a4  jal         func_356290
label_42ab98:
    if (ctx->pc == 0x42AB98u) {
        ctx->pc = 0x42AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AB94u;
        // 0x42ab98: 0x8c46006c  lw          $a2, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AB9Cu;
        goto label_42ab9c;
    }
    ctx->pc = 0x42AB94u;
    SET_GPR_U32(ctx, 31, 0x42AB9Cu);
    ctx->pc = 0x42AB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AB94u;
    // 0x42ab98: 0x8c46006c  lw          $a2, 0x6C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356290u, 0x42AB94u, 0x42AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AB9Cu;
label_42ab9c:
    // 0x42ab9c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x42ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_42aba0:
    // 0x42aba0: 0x26850008  addiu       $a1, $s4, 0x8
    ctx->pc = 0x42aba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_42aba4:
    // 0x42aba4: 0xc072b4e  jal         func_1CAD38
label_42aba8:
    if (ctx->pc == 0x42ABA8u) {
        ctx->pc = 0x42ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ABA4u;
        // 0x42aba8: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ABACu;
        goto label_42abac;
    }
    ctx->pc = 0x42ABA4u;
    SET_GPR_U32(ctx, 31, 0x42ABACu);
    ctx->pc = 0x42ABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42ABA4u;
    // 0x42aba8: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD38u, 0x42ABA4u, 0x42ABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ABACu;
label_42abac:
    // 0x42abac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x42abacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_42abb0:
    // 0x42abb0: 0x8ec5b9b8  lw          $a1, -0x4648($s6)
    ctx->pc = 0x42abb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949304)));
label_42abb4:
    // 0x42abb4: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x42abb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_42abb8:
    // 0x42abb8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x42abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42abbc:
    // 0x42abbc: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x42abbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_42abc0:
    // 0x42abc0: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x42abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_42abc4:
    // 0x42abc4: 0x60f809  jalr        $v1
label_42abc8:
    if (ctx->pc == 0x42ABC8u) {
        ctx->pc = 0x42ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ABC4u;
        // 0x42abc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ABCCu;
        goto label_42abcc;
    }
    ctx->pc = 0x42ABC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42ABCCu);
        ctx->pc = 0x42ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ABC4u;
        // 0x42abc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42ABC4u, 0x42ABCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42ABCCu;
label_42abcc:
    // 0x42abcc: 0xc054590  jal         func_151640
label_42abd0:
    if (ctx->pc == 0x42ABD0u) {
        ctx->pc = 0x42ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ABCCu;
        // 0x42abd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ABD4u;
        goto label_42abd4;
    }
    ctx->pc = 0x42ABCCu;
    SET_GPR_U32(ctx, 31, 0x42ABD4u);
    ctx->pc = 0x42ABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42ABCCu;
    // 0x42abd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151640u, 0x42ABCCu, 0x42ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ABD4u;
label_42abd4:
    // 0x42abd4: 0xc053eba  jal         func_14FAE8
label_42abd8:
    if (ctx->pc == 0x42ABD8u) {
        ctx->pc = 0x42ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ABD4u;
        // 0x42abd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ABDCu;
        goto label_42abdc;
    }
    ctx->pc = 0x42ABD4u;
    SET_GPR_U32(ctx, 31, 0x42ABDCu);
    ctx->pc = 0x42ABD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42ABD4u;
    // 0x42abd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAE8u, 0x42ABD4u, 0x42ABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ABDCu;
label_42abdc:
    // 0x42abdc: 0xc0540b6  jal         func_1502D8
label_42abe0:
    if (ctx->pc == 0x42ABE0u) {
        ctx->pc = 0x42ABE4u;
        goto label_42abe4;
    }
    ctx->pc = 0x42ABDCu;
    SET_GPR_U32(ctx, 31, 0x42ABE4u);
    ctx->pc = 0x1502D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1502D8u, 0x42ABDCu, 0x42ABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ABE4u;
label_42abe4:
    // 0x42abe4: 0xc0540a8  jal         func_1502A0
label_42abe8:
    if (ctx->pc == 0x42ABE8u) {
        ctx->pc = 0x42ABECu;
        goto label_42abec;
    }
    ctx->pc = 0x42ABE4u;
    SET_GPR_U32(ctx, 31, 0x42ABECu);
    ctx->pc = 0x1502A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1502A0u, 0x42ABE4u, 0x42ABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ABECu;
label_42abec:
    // 0x42abec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x42abecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42abf0:
    // 0x42abf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42abf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42abf4:
    // 0x42abf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x42abf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42abf8:
    // 0x42abf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42abf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42abfc:
    // 0x42abfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x42abfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ac00:
    // 0x42ac00: 0xc053f36  jal         func_14FCD8
label_42ac04:
    if (ctx->pc == 0x42AC04u) {
        ctx->pc = 0x42AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC00u;
        // 0x42ac04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AC08u;
        goto label_42ac08;
    }
    ctx->pc = 0x42AC00u;
    SET_GPR_U32(ctx, 31, 0x42AC08u);
    ctx->pc = 0x42AC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AC00u;
    // 0x42ac04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FCD8u, 0x42AC00u, 0x42AC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AC08u;
label_42ac08:
    // 0x42ac08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x42ac08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ac0c:
    // 0x42ac0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42ac0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ac10:
    // 0x42ac10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x42ac10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ac14:
    // 0x42ac14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x42ac14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ac18:
    // 0x42ac18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42ac1c:
    // 0x42ac1c: 0xc053f36  jal         func_14FCD8
label_42ac20:
    if (ctx->pc == 0x42AC20u) {
        ctx->pc = 0x42AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC1Cu;
        // 0x42ac20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AC24u;
        goto label_42ac24;
    }
    ctx->pc = 0x42AC1Cu;
    SET_GPR_U32(ctx, 31, 0x42AC24u);
    ctx->pc = 0x42AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AC1Cu;
    // 0x42ac20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FCD8u, 0x42AC1Cu, 0x42AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AC24u;
label_42ac24:
    // 0x42ac24: 0x8ee4aa84  lw          $a0, -0x557C($s7)
    ctx->pc = 0x42ac24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
label_42ac28:
    // 0x42ac28: 0xc04443a  jal         func_1110E8
label_42ac2c:
    if (ctx->pc == 0x42AC2Cu) {
        ctx->pc = 0x42AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC28u;
        // 0x42ac2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AC30u;
        goto label_42ac30;
    }
    ctx->pc = 0x42AC28u;
    SET_GPR_U32(ctx, 31, 0x42AC30u);
    ctx->pc = 0x42AC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AC28u;
    // 0x42ac2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1110E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110E8u, 0x42AC28u, 0x42AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AC30u;
label_42ac30:
    // 0x42ac30: 0xc053eba  jal         func_14FAE8
label_42ac34:
    if (ctx->pc == 0x42AC34u) {
        ctx->pc = 0x42AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC30u;
        // 0x42ac34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AC38u;
        goto label_42ac38;
    }
    ctx->pc = 0x42AC30u;
    SET_GPR_U32(ctx, 31, 0x42AC38u);
    ctx->pc = 0x42AC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AC30u;
    // 0x42ac34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAE8u, 0x42AC30u, 0x42AC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AC38u;
label_42ac38:
    // 0x42ac38: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_42ac3c:
    // 0x42ac3c: 0x8c83cdb4  lw          $v1, -0x324C($a0)
    ctx->pc = 0x42ac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954420)));
label_42ac40:
    // 0x42ac40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42ac44:
    // 0x42ac44: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x42ac44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_42ac48:
    // 0x42ac48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_42ac4c:
    if (ctx->pc == 0x42AC4Cu) {
        ctx->pc = 0x42AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC48u;
        // 0x42ac4c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AC50u;
        goto label_42ac50;
    }
    ctx->pc = 0x42AC48u;
    {
        const bool branch_taken_0x42ac48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC48u;
        // 0x42ac4c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ac48) {
            ctx->pc = 0x42AC70u;
            goto label_42ac70;
        }
    }
    ctx->pc = 0x42AC50u;
label_42ac50:
    // 0x42ac50: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x42ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_42ac54:
    // 0x42ac54: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42ac54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_42ac58:
    // 0x42ac58: 0x24a5bfe0  addiu       $a1, $a1, -0x4020
    ctx->pc = 0x42ac58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950880));
label_42ac5c:
    // 0x42ac5c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x42ac5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42ac60:
    // 0x42ac60: 0xc10ca28  jal         func_4328A0
label_42ac64:
    if (ctx->pc == 0x42AC64u) {
        ctx->pc = 0x42AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC60u;
        // 0x42ac64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AC68u;
        goto label_42ac68;
    }
    ctx->pc = 0x42AC60u;
    SET_GPR_U32(ctx, 31, 0x42AC68u);
    ctx->pc = 0x42AC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AC60u;
    // 0x42ac64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x42AC60u, 0x42AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AC68u;
label_42ac68:
    // 0x42ac68: 0x10000008  b           . + 4 + (0x8 << 2)
label_42ac6c:
    if (ctx->pc == 0x42AC6Cu) {
        ctx->pc = 0x42AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC68u;
        // 0x42ac6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AC70u;
        goto label_42ac70;
    }
    ctx->pc = 0x42AC68u;
    {
        const bool branch_taken_0x42ac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC68u;
        // 0x42ac6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ac68) {
            ctx->pc = 0x42AC8Cu;
            goto label_42ac8c;
        }
    }
    ctx->pc = 0x42AC70u;
label_42ac70:
    // 0x42ac70: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x42ac70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_42ac74:
    // 0x42ac74: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42ac74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_42ac78:
    // 0x42ac78: 0x24a5bfe0  addiu       $a1, $a1, -0x4020
    ctx->pc = 0x42ac78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950880));
label_42ac7c:
    // 0x42ac7c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x42ac7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42ac80:
    // 0x42ac80: 0xc10ca28  jal         func_4328A0
label_42ac84:
    if (ctx->pc == 0x42AC84u) {
        ctx->pc = 0x42AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC80u;
        // 0x42ac84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AC88u;
        goto label_42ac88;
    }
    ctx->pc = 0x42AC80u;
    SET_GPR_U32(ctx, 31, 0x42AC88u);
    ctx->pc = 0x42AC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AC80u;
    // 0x42ac84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x42AC80u, 0x42AC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AC88u;
label_42ac88:
    // 0x42ac88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x42ac88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ac8c:
    // 0x42ac8c: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x42ac8cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_42ac90:
    // 0x42ac90: 0x27be0164  addiu       $fp, $sp, 0x164
    ctx->pc = 0x42ac90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_42ac94:
    // 0x42ac94: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x42ac94u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_42ac98:
    // 0x42ac98: 0x27b10160  addiu       $s1, $sp, 0x160
    ctx->pc = 0x42ac98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_42ac9c:
    // 0x42ac9c: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x42ac9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_42aca0:
    // 0x42aca0: 0x8e42cdb4  lw          $v0, -0x324C($s2)
    ctx->pc = 0x42aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_42aca4:
    // 0x42aca4: 0x0  nop
    ctx->pc = 0x42aca4u;
    // NOP
label_42aca8:
    // 0x42aca8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x42aca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_42acac:
    // 0x42acac: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x42acacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_42acb0:
    // 0x42acb0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x42acb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_42acb4:
    // 0x42acb4: 0xa3a00160  sb          $zero, 0x160($sp)
    ctx->pc = 0x42acb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 352), (uint8_t)GPR_U32(ctx, 0));
label_42acb8:
    // 0x42acb8: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x42acb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_42acbc:
    // 0x42acbc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x42acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_42acc0:
    // 0x42acc0: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x42acc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_42acc4:
    // 0x42acc4: 0xa2350003  sb          $s5, 0x3($s1)
    ctx->pc = 0x42acc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 21));
label_42acc8:
    // 0x42acc8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x42acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_42accc:
    // 0x42accc: 0x40f809  jalr        $v0
label_42acd0:
    if (ctx->pc == 0x42ACD0u) {
        ctx->pc = 0x42ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACCCu;
        // 0x42acd0: 0x8fa50160  lw          $a1, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ACD4u;
        goto label_42acd4;
    }
    ctx->pc = 0x42ACCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42ACD4u);
        ctx->pc = 0x42ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACCCu;
        // 0x42acd0: 0x8fa50160  lw          $a1, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42ACCCu, 0x42ACD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42ACD4u;
label_42acd4:
    // 0x42acd4: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x42acd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_42acd8:
    // 0x42acd8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x42acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_42acdc:
    // 0x42acdc: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x42acdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_42ace0:
    // 0x42ace0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x42ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_42ace4:
    // 0x42ace4: 0x40f809  jalr        $v0
label_42ace8:
    if (ctx->pc == 0x42ACE8u) {
        ctx->pc = 0x42ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACE4u;
        // 0x42ace8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ACECu;
        goto label_42acec;
    }
    ctx->pc = 0x42ACE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42ACECu);
        ctx->pc = 0x42ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACE4u;
        // 0x42ace8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42ACE4u, 0x42ACECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42ACECu;
label_42acec:
    // 0x42acec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x42acecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42acf0:
    // 0x42acf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42acf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42acf4:
    // 0x42acf4: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x42acf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_42acf8:
    // 0x42acf8: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x42acf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_42acfc:
    // 0x42acfc: 0xc0f809  jalr        $a2
label_42ad00:
    if (ctx->pc == 0x42AD00u) {
        ctx->pc = 0x42AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACFCu;
        // 0x42ad00: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD04u;
        goto label_42ad04;
    }
    ctx->pc = 0x42ACFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x42AD04u);
        ctx->pc = 0x42AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACFCu;
        // 0x42ad00: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42ACFCu, 0x42AD04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42AD04u;
label_42ad04:
    // 0x42ad04: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x42ad04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_42ad08:
    // 0x42ad08: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_42ad0c:
    if (ctx->pc == 0x42AD0Cu) {
        ctx->pc = 0x42AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD08u;
        // 0x42ad0c: 0x8e42cdb4  lw          $v0, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD10u;
        goto label_42ad10;
    }
    ctx->pc = 0x42AD08u;
    {
        const bool branch_taken_0x42ad08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD08u;
        // 0x42ad0c: 0x8e42cdb4  lw          $v0, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad08) {
            ctx->pc = 0x42ACA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42aca8;
        }
    }
    ctx->pc = 0x42AD10u;
label_42ad10:
    // 0x42ad10: 0x8ec5cdb4  lw          $a1, -0x324C($s6)
    ctx->pc = 0x42ad10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
label_42ad14:
    // 0x42ad14: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_42ad18:
    // 0x42ad18: 0x2451bfa8  addiu       $s1, $v0, -0x4058
    ctx->pc = 0x42ad18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950824));
label_42ad1c:
    // 0x42ad1c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x42ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_42ad20:
    // 0x42ad20: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x42ad20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_42ad24:
    // 0x42ad24: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x42ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_42ad28:
    // 0x42ad28: 0x60f809  jalr        $v1
label_42ad2c:
    if (ctx->pc == 0x42AD2Cu) {
        ctx->pc = 0x42AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD28u;
        // 0x42ad2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD30u;
        goto label_42ad30;
    }
    ctx->pc = 0x42AD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42AD30u);
        ctx->pc = 0x42AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD28u;
        // 0x42ad2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AD28u, 0x42AD30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42AD30u;
label_42ad30:
    // 0x42ad30: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x42ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_42ad34:
    // 0x42ad34: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42ad34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_42ad38:
    // 0x42ad38: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x42ad38u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_42ad3c:
    // 0x42ad3c: 0x24a5bff0  addiu       $a1, $a1, -0x4010
    ctx->pc = 0x42ad3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950896));
label_42ad40:
    // 0x42ad40: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x42ad40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_42ad44:
    // 0x42ad44: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x42ad44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_42ad48:
    // 0x42ad48: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x42ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_42ad4c:
    // 0x42ad4c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x42ad4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42ad50:
    // 0x42ad50: 0x240900ca  addiu       $t1, $zero, 0xCA
    ctx->pc = 0x42ad50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
label_42ad54:
    // 0x42ad54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x42ad54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ad58:
    // 0x42ad58: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x42ad58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_42ad5c:
    // 0x42ad5c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x42ad5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ad60:
    // 0x42ad60: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x42ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_42ad64:
    // 0x42ad64: 0x40f809  jalr        $v0
label_42ad68:
    if (ctx->pc == 0x42AD68u) {
        ctx->pc = 0x42AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD64u;
        // 0x42ad68: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD6Cu;
        goto label_42ad6c;
    }
    ctx->pc = 0x42AD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42AD6Cu);
        ctx->pc = 0x42AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD64u;
        // 0x42ad68: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AD64u, 0x42AD6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42AD6Cu;
label_42ad6c:
    // 0x42ad6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_42ad70:
    if (ctx->pc == 0x42AD70u) {
        ctx->pc = 0x42AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD6Cu;
        // 0x42ad70: 0x8fa60168  lw          $a2, 0x168($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD74u;
        goto label_42ad74;
    }
    ctx->pc = 0x42AD6Cu;
    {
        const bool branch_taken_0x42ad6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD6Cu;
        // 0x42ad70: 0x8fa60168  lw          $a2, 0x168($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad6c) {
            ctx->pc = 0x42AD84u;
            goto label_42ad84;
        }
    }
    ctx->pc = 0x42AD74u;
label_42ad74:
    // 0x42ad74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42ad74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42ad78:
    // 0x42ad78: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x42ad78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_42ad7c:
    // 0x42ad7c: 0xc10a7fa  jal         func_429FE8
label_42ad80:
    if (ctx->pc == 0x42AD80u) {
        ctx->pc = 0x42AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD7Cu;
        // 0x42ad80: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD84u;
        goto label_42ad84;
    }
    ctx->pc = 0x42AD7Cu;
    SET_GPR_U32(ctx, 31, 0x42AD84u);
    ctx->pc = 0x42AD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AD7Cu;
    // 0x42ad80: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429FE8u, 0x42AD7Cu, 0x42AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AD84u;
label_42ad84:
    // 0x42ad84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_42ad88:
    if (ctx->pc == 0x42AD88u) {
        ctx->pc = 0x42AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD84u;
        // 0x42ad88: 0xaee25474  sw          $v0, 0x5474($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 21620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD8Cu;
        goto label_42ad8c;
    }
    ctx->pc = 0x42AD84u;
    {
        const bool branch_taken_0x42ad84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD84u;
        // 0x42ad88: 0xaee25474  sw          $v0, 0x5474($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 21620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad84) {
            ctx->pc = 0x42ADA0u;
            goto label_42ada0;
        }
    }
    ctx->pc = 0x42AD8Cu;
label_42ad8c:
    // 0x42ad8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42ad8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42ad90:
    // 0x42ad90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42ad90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42ad94:
    // 0x42ad94: 0xc13d940  jal         func_4F6500
label_42ad98:
    if (ctx->pc == 0x42AD98u) {
        ctx->pc = 0x42AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD94u;
        // 0x42ad98: 0x240600cf  addiu       $a2, $zero, 0xCF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD9Cu;
        goto label_42ad9c;
    }
    ctx->pc = 0x42AD94u;
    SET_GPR_U32(ctx, 31, 0x42AD9Cu);
    ctx->pc = 0x42AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AD94u;
    // 0x42ad98: 0x240600cf  addiu       $a2, $zero, 0xCF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F6500u, 0x42AD94u, 0x42AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AD9Cu;
label_42ad9c:
    // 0x42ad9c: 0xaee05474  sw          $zero, 0x5474($s7)
    ctx->pc = 0x42ad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 21620), GPR_U32(ctx, 0));
label_42ada0:
    // 0x42ada0: 0xc054086  jal         func_150218
label_42ada4:
    if (ctx->pc == 0x42ADA4u) {
        ctx->pc = 0x42ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADA0u;
        // 0x42ada4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ADA8u;
        goto label_42ada8;
    }
    ctx->pc = 0x42ADA0u;
    SET_GPR_U32(ctx, 31, 0x42ADA8u);
    ctx->pc = 0x42ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42ADA0u;
    // 0x42ada4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150218u, 0x42ADA0u, 0x42ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ADA8u;
label_42ada8:
    // 0x42ada8: 0xc054086  jal         func_150218
label_42adac:
    if (ctx->pc == 0x42ADACu) {
        ctx->pc = 0x42ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADA8u;
        // 0x42adac: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ADB0u;
        goto label_42adb0;
    }
    ctx->pc = 0x42ADA8u;
    SET_GPR_U32(ctx, 31, 0x42ADB0u);
    ctx->pc = 0x42ADACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42ADA8u;
    // 0x42adac: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150218u, 0x42ADA8u, 0x42ADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ADB0u;
label_42adb0:
    // 0x42adb0: 0xc0540c4  jal         func_150310
label_42adb4:
    if (ctx->pc == 0x42ADB4u) {
        ctx->pc = 0x42ADB8u;
        goto label_42adb8;
    }
    ctx->pc = 0x42ADB0u;
    SET_GPR_U32(ctx, 31, 0x42ADB8u);
    ctx->pc = 0x150310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150310u, 0x42ADB0u, 0x42ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ADB8u;
label_42adb8:
    // 0x42adb8: 0xc054590  jal         func_151640
label_42adbc:
    if (ctx->pc == 0x42ADBCu) {
        ctx->pc = 0x42ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADB8u;
        // 0x42adbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ADC0u;
        goto label_42adc0;
    }
    ctx->pc = 0x42ADB8u;
    SET_GPR_U32(ctx, 31, 0x42ADC0u);
    ctx->pc = 0x42ADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42ADB8u;
    // 0x42adbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151640u, 0x42ADB8u, 0x42ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ADC0u;
label_42adc0:
    // 0x42adc0: 0xc054590  jal         func_151640
label_42adc4:
    if (ctx->pc == 0x42ADC4u) {
        ctx->pc = 0x42ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADC0u;
        // 0x42adc4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ADC8u;
        goto label_42adc8;
    }
    ctx->pc = 0x42ADC0u;
    SET_GPR_U32(ctx, 31, 0x42ADC8u);
    ctx->pc = 0x42ADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42ADC0u;
    // 0x42adc4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151640u, 0x42ADC0u, 0x42ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ADC8u;
label_42adc8:
    // 0x42adc8: 0xc054590  jal         func_151640
label_42adcc:
    if (ctx->pc == 0x42ADCCu) {
        ctx->pc = 0x42ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADC8u;
        // 0x42adcc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ADD0u;
        goto label_42add0;
    }
    ctx->pc = 0x42ADC8u;
    SET_GPR_U32(ctx, 31, 0x42ADD0u);
    ctx->pc = 0x42ADCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42ADC8u;
    // 0x42adcc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151640u, 0x42ADC8u, 0x42ADD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ADD0u;
label_42add0:
    // 0x42add0: 0xc0545e6  jal         func_151798
label_42add4:
    if (ctx->pc == 0x42ADD4u) {
        ctx->pc = 0x42ADD8u;
        goto label_42add8;
    }
    ctx->pc = 0x42ADD0u;
    SET_GPR_U32(ctx, 31, 0x42ADD8u);
    ctx->pc = 0x151798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151798u, 0x42ADD0u, 0x42ADD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ADD8u;
label_42add8:
    // 0x42add8: 0xc0545d4  jal         func_151750
label_42addc:
    if (ctx->pc == 0x42ADDCu) {
        ctx->pc = 0x42ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADD8u;
        // 0x42addc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ADE0u;
        goto label_42ade0;
    }
    ctx->pc = 0x42ADD8u;
    SET_GPR_U32(ctx, 31, 0x42ADE0u);
    ctx->pc = 0x42ADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42ADD8u;
    // 0x42addc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151750u, 0x42ADD8u, 0x42ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ADE0u;
label_42ade0:
    // 0x42ade0: 0xc0545d4  jal         func_151750
label_42ade4:
    if (ctx->pc == 0x42ADE4u) {
        ctx->pc = 0x42ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADE0u;
        // 0x42ade4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ADE8u;
        goto label_42ade8;
    }
    ctx->pc = 0x42ADE0u;
    SET_GPR_U32(ctx, 31, 0x42ADE8u);
    ctx->pc = 0x42ADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42ADE0u;
    // 0x42ade4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151750u, 0x42ADE0u, 0x42ADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ADE8u;
label_42ade8:
    // 0x42ade8: 0xc053eba  jal         func_14FAE8
label_42adec:
    if (ctx->pc == 0x42ADECu) {
        ctx->pc = 0x42ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADE8u;
        // 0x42adec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ADF0u;
        goto label_42adf0;
    }
    ctx->pc = 0x42ADE8u;
    SET_GPR_U32(ctx, 31, 0x42ADF0u);
    ctx->pc = 0x42ADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42ADE8u;
    // 0x42adec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAE8u, 0x42ADE8u, 0x42ADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ADF0u;
label_42adf0:
    // 0x42adf0: 0x1280001c  beqz        $s4, . + 4 + (0x1C << 2)
label_42adf4:
    if (ctx->pc == 0x42ADF4u) {
        ctx->pc = 0x42ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADF0u;
        // 0x42adf4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ADF8u;
        goto label_42adf8;
    }
    ctx->pc = 0x42ADF0u;
    {
        const bool branch_taken_0x42adf0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x42ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADF0u;
        // 0x42adf4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42adf0) {
            ctx->pc = 0x42AE64u;
            goto label_42ae64;
        }
    }
    ctx->pc = 0x42ADF8u;
label_42adf8:
    // 0x42adf8: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x42adf8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_42adfc:
    // 0x42adfc: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x42adfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_42ae00:
    // 0x42ae00: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x42ae00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_42ae04:
    // 0x42ae04: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x42ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42ae08:
    // 0x42ae08: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x42ae08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_42ae0c:
    // 0x42ae0c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x42ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_42ae10:
    // 0x42ae10: 0x60f809  jalr        $v1
label_42ae14:
    if (ctx->pc == 0x42AE14u) {
        ctx->pc = 0x42AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE10u;
        // 0x42ae14: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AE18u;
        goto label_42ae18;
    }
    ctx->pc = 0x42AE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42AE18u);
        ctx->pc = 0x42AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE10u;
        // 0x42ae14: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AE10u, 0x42AE18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42AE18u;
label_42ae18:
    // 0x42ae18: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x42ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_42ae1c:
    // 0x42ae1c: 0xc047910  jal         func_11E440
label_42ae20:
    if (ctx->pc == 0x42AE20u) {
        ctx->pc = 0x42AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE1Cu;
        // 0x42ae20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AE24u;
        goto label_42ae24;
    }
    ctx->pc = 0x42AE1Cu;
    SET_GPR_U32(ctx, 31, 0x42AE24u);
    ctx->pc = 0x42AE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AE1Cu;
    // 0x42ae20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E440u, 0x42AE1Cu, 0x42AE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AE24u;
label_42ae24:
    // 0x42ae24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x42ae24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42ae28:
    // 0x42ae28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42ae28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42ae2c:
    // 0x42ae2c: 0xc13c4da  jal         func_4F1368
label_42ae30:
    if (ctx->pc == 0x42AE30u) {
        ctx->pc = 0x42AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE2Cu;
        // 0x42ae30: 0x240600f5  addiu       $a2, $zero, 0xF5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AE34u;
        goto label_42ae34;
    }
    ctx->pc = 0x42AE2Cu;
    SET_GPR_U32(ctx, 31, 0x42AE34u);
    ctx->pc = 0x42AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AE2Cu;
    // 0x42ae30: 0x240600f5  addiu       $a2, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1368u, 0x42AE2Cu, 0x42AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AE34u;
label_42ae34:
    // 0x42ae34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x42ae34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_42ae38:
    // 0x42ae38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42ae38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42ae3c:
    // 0x42ae3c: 0xc136ac2  jal         func_4DAB08
label_42ae40:
    if (ctx->pc == 0x42AE40u) {
        ctx->pc = 0x42AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE3Cu;
        // 0x42ae40: 0x240600f7  addiu       $a2, $zero, 0xF7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AE44u;
        goto label_42ae44;
    }
    ctx->pc = 0x42AE3Cu;
    SET_GPR_U32(ctx, 31, 0x42AE44u);
    ctx->pc = 0x42AE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AE3Cu;
    // 0x42ae40: 0x240600f7  addiu       $a2, $zero, 0xF7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB08u, 0x42AE3Cu, 0x42AE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AE44u;
label_42ae44:
    // 0x42ae44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x42ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_42ae48:
    // 0x42ae48: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x42ae48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_42ae4c:
    // 0x42ae4c: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x42ae4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_42ae50:
    // 0x42ae50: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x42ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42ae54:
    // 0x42ae54: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x42ae54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_42ae58:
    // 0x42ae58: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x42ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_42ae5c:
    // 0x42ae5c: 0x60f809  jalr        $v1
label_42ae60:
    if (ctx->pc == 0x42AE60u) {
        ctx->pc = 0x42AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE5Cu;
        // 0x42ae60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AE64u;
        goto label_42ae64;
    }
    ctx->pc = 0x42AE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42AE64u);
        ctx->pc = 0x42AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE5Cu;
        // 0x42ae60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AE5Cu, 0x42AE64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42AE64u;
label_42ae64:
    // 0x42ae64: 0x8ec5cdb4  lw          $a1, -0x324C($s6)
    ctx->pc = 0x42ae64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
label_42ae68:
    // 0x42ae68: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x42ae68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_42ae6c:
    // 0x42ae6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42ae6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ae70:
    // 0x42ae70: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x42ae70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_42ae74:
    // 0x42ae74: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x42ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_42ae78:
    // 0x42ae78: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x42ae78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_42ae7c:
    // 0x42ae7c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x42ae7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_42ae80:
    // 0x42ae80: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x42ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_42ae84:
    // 0x42ae84: 0x60f809  jalr        $v1
label_42ae88:
    if (ctx->pc == 0x42AE88u) {
        ctx->pc = 0x42AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE84u;
        // 0x42ae88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AE8Cu;
        goto label_42ae8c;
    }
    ctx->pc = 0x42AE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42AE8Cu);
        ctx->pc = 0x42AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE84u;
        // 0x42ae88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AE84u, 0x42AE8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42AE8Cu;
label_42ae8c:
    // 0x42ae8c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x42ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_42ae90:
    // 0x42ae90: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x42ae90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_42ae94:
    // 0x42ae94: 0x8e62cdb4  lw          $v0, -0x324C($s3)
    ctx->pc = 0x42ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954420)));
label_42ae98:
    // 0x42ae98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x42ae98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_42ae9c:
    // 0x42ae9c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x42ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_42aea0:
    // 0x42aea0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x42aea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_42aea4:
    // 0x42aea4: 0xa3a00164  sb          $zero, 0x164($sp)
    ctx->pc = 0x42aea4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 356), (uint8_t)GPR_U32(ctx, 0));
label_42aea8:
    // 0x42aea8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x42aea8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_42aeac:
    // 0x42aeac: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x42aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_42aeb0:
    // 0x42aeb0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x42aeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_42aeb4:
    // 0x42aeb4: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x42aeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
label_42aeb8:
    // 0x42aeb8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x42aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_42aebc:
    // 0x42aebc: 0x40f809  jalr        $v0
label_42aec0:
    if (ctx->pc == 0x42AEC0u) {
        ctx->pc = 0x42AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AEBCu;
        // 0x42aec0: 0x8fa50164  lw          $a1, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AEC4u;
        goto label_42aec4;
    }
    ctx->pc = 0x42AEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42AEC4u);
        ctx->pc = 0x42AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AEBCu;
        // 0x42aec0: 0x8fa50164  lw          $a1, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AEBCu, 0x42AEC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42AEC4u;
label_42aec4:
    // 0x42aec4: 0x8e65cdb4  lw          $a1, -0x324C($s3)
    ctx->pc = 0x42aec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954420)));
label_42aec8:
    // 0x42aec8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x42aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_42aecc:
    // 0x42aecc: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x42aeccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_42aed0:
    // 0x42aed0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x42aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_42aed4:
    // 0x42aed4: 0x40f809  jalr        $v0
label_42aed8:
    if (ctx->pc == 0x42AED8u) {
        ctx->pc = 0x42AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AED4u;
        // 0x42aed8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AEDCu;
        goto label_42aedc;
    }
    ctx->pc = 0x42AED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42AEDCu);
        ctx->pc = 0x42AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AED4u;
        // 0x42aed8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AED4u, 0x42AEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42AEDCu;
label_42aedc:
    // 0x42aedc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x42aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42aee0:
    // 0x42aee0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42aee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42aee4:
    // 0x42aee4: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x42aee4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_42aee8:
    // 0x42aee8: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x42aee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_42aeec:
    // 0x42aeec: 0xc0f809  jalr        $a2
label_42aef0:
    if (ctx->pc == 0x42AEF0u) {
        ctx->pc = 0x42AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AEECu;
        // 0x42aef0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AEF4u;
        goto label_42aef4;
    }
    ctx->pc = 0x42AEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x42AEF4u);
        ctx->pc = 0x42AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AEECu;
        // 0x42aef0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AEECu, 0x42AEF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42AEF4u;
label_42aef4:
    // 0x42aef4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x42aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_42aef8:
    // 0x42aef8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x42aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42aefc:
    // 0x42aefc: 0x8c46d260  lw          $a2, -0x2DA0($v0)
    ctx->pc = 0x42aefcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955616)));
label_42af00:
    // 0x42af00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42af00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42af04:
    // 0x42af04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42af04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42af08:
    // 0x42af08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42af08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42af0c:
    // 0x42af0c: 0xc063318  jal         func_18CC60
label_42af10:
    if (ctx->pc == 0x42AF10u) {
        ctx->pc = 0x42AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF0Cu;
        // 0x42af10: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AF14u;
        goto label_42af14;
    }
    ctx->pc = 0x42AF0Cu;
    SET_GPR_U32(ctx, 31, 0x42AF14u);
    ctx->pc = 0x42AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AF0Cu;
    // 0x42af10: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CC60u, 0x42AF0Cu, 0x42AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AF14u;
label_42af14:
    // 0x42af14: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x42af14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_42af18:
    // 0x42af18: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_42af1c:
    if (ctx->pc == 0x42AF1Cu) {
        ctx->pc = 0x42AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF18u;
        // 0x42af1c: 0x8e62cdb4  lw          $v0, -0x324C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AF20u;
        goto label_42af20;
    }
    ctx->pc = 0x42AF18u;
    {
        const bool branch_taken_0x42af18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF18u;
        // 0x42af1c: 0x8e62cdb4  lw          $v0, -0x324C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42af18) {
            ctx->pc = 0x42AE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ae98;
        }
    }
    ctx->pc = 0x42AF20u;
label_42af20:
    // 0x42af20: 0x8ec5cdb4  lw          $a1, -0x324C($s6)
    ctx->pc = 0x42af20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
label_42af24:
    // 0x42af24: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x42af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_42af28:
    // 0x42af28: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x42af28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_42af2c:
    // 0x42af2c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x42af2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_42af30:
    // 0x42af30: 0x60f809  jalr        $v1
label_42af34:
    if (ctx->pc == 0x42AF34u) {
        ctx->pc = 0x42AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF30u;
        // 0x42af34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AF38u;
        goto label_42af38;
    }
    ctx->pc = 0x42AF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42AF38u);
        ctx->pc = 0x42AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF30u;
        // 0x42af34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AF30u, 0x42AF38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42AF38u;
label_42af38:
    // 0x42af38: 0x7bb00200  lq          $s0, 0x200($sp)
    ctx->pc = 0x42af38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_42af3c:
    // 0x42af3c: 0x7bb101f0  lq          $s1, 0x1F0($sp)
    ctx->pc = 0x42af3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_42af40:
    // 0x42af40: 0x7bb201e0  lq          $s2, 0x1E0($sp)
    ctx->pc = 0x42af40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_42af44:
    // 0x42af44: 0x7bb301d0  lq          $s3, 0x1D0($sp)
    ctx->pc = 0x42af44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_42af48:
    // 0x42af48: 0x7bb401c0  lq          $s4, 0x1C0($sp)
    ctx->pc = 0x42af48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_42af4c:
    // 0x42af4c: 0x7bb501b0  lq          $s5, 0x1B0($sp)
    ctx->pc = 0x42af4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_42af50:
    // 0x42af50: 0x7bb601a0  lq          $s6, 0x1A0($sp)
    ctx->pc = 0x42af50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_42af54:
    // 0x42af54: 0x7bb70190  lq          $s7, 0x190($sp)
    ctx->pc = 0x42af54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_42af58:
    // 0x42af58: 0x7bbe0180  lq          $fp, 0x180($sp)
    ctx->pc = 0x42af58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_42af5c:
    // 0x42af5c: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x42af5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_42af60:
    // 0x42af60: 0x3e00008  jr          $ra
label_42af64:
    if (ctx->pc == 0x42AF64u) {
        ctx->pc = 0x42AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF60u;
        // 0x42af64: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AF68u;
        goto label_42af68;
    }
    ctx->pc = 0x42AF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF60u;
        // 0x42af64: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42AF68u;
label_42af68:
    // 0x42af68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x42af68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_42af6c:
    // 0x42af6c: 0x0  nop
    ctx->pc = 0x42af6cu;
    // NOP
label_42af70:
    // 0x42af70: 0x3c070053  lui         $a3, 0x53
    ctx->pc = 0x42af70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)83 << 16));
label_42af74:
    // 0x42af74: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42af74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42af78:
    // 0x42af78: 0x8ce54060  lw          $a1, 0x4060($a3)
    ctx->pc = 0x42af78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16480)));
label_42af7c:
    // 0x42af7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_42af80:
    // 0x42af80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42af80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42af84:
    // 0x42af84: 0x24e34060  addiu       $v1, $a3, 0x4060
    ctx->pc = 0x42af84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16480));
label_42af88:
    // 0x42af88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x42af88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_42af8c:
    // 0x42af8c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_42af90:
    if (ctx->pc == 0x42AF90u) {
        ctx->pc = 0x42AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF8Cu;
        // 0x42af90: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AF94u;
        goto label_42af94;
    }
    ctx->pc = 0x42AF8Cu;
    {
        const bool branch_taken_0x42af8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x42AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF8Cu;
        // 0x42af90: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42af8c) {
            ctx->pc = 0x42AFD4u;
            goto label_42afd4;
        }
    }
    ctx->pc = 0x42AF94u;
label_42af94:
    // 0x42af94: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x42af94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_42af98:
    // 0x42af98: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_42af9c:
    if (ctx->pc == 0x42AF9Cu) {
        ctx->pc = 0x42AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF98u;
        // 0x42af9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AFA0u;
        goto label_42afa0;
    }
    ctx->pc = 0x42AF98u;
    {
        const bool branch_taken_0x42af98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF98u;
        // 0x42af9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42af98) {
            ctx->pc = 0x42AFD4u;
            goto label_42afd4;
        }
    }
    ctx->pc = 0x42AFA0u;
label_42afa0:
    // 0x42afa0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42afa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42afa4:
    // 0x42afa4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x42afa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_42afa8:
    // 0x42afa8: 0x24e44060  addiu       $a0, $a3, 0x4060
    ctx->pc = 0x42afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16480));
label_42afac:
    // 0x42afac: 0x0  nop
    ctx->pc = 0x42afacu;
    // NOP
label_42afb0:
    // 0x42afb0: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x42afb0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_42afb4:
    // 0x42afb4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x42afb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_42afb8:
    // 0x42afb8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x42afb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_42afbc:
    // 0x42afbc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x42afbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_42afc0:
    // 0x42afc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x42afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_42afc4:
    // 0x42afc4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x42afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_42afc8:
    // 0x42afc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x42afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42afcc:
    // 0x42afcc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_42afd0:
    if (ctx->pc == 0x42AFD0u) {
        ctx->pc = 0x42AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFCCu;
        // 0x42afd0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AFD4u;
        goto label_42afd4;
    }
    ctx->pc = 0x42AFCCu;
    {
        const bool branch_taken_0x42afcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42afcc) {
            ctx->pc = 0x42AFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42AFCCu;
            // 0x42afd0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42AFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42afb0;
        }
    }
    ctx->pc = 0x42AFD4u;
label_42afd4:
    // 0x42afd4: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x42afd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_42afd8:
    // 0x42afd8: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x42afd8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_42afdc:
    // 0x42afdc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_42afe0:
    if (ctx->pc == 0x42AFE0u) {
        ctx->pc = 0x42AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFDCu;
        // 0x42afe0: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AFE4u;
        goto label_42afe4;
    }
    ctx->pc = 0x42AFDCu;
    {
        const bool branch_taken_0x42afdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFDCu;
        // 0x42afe0: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42afdc) {
            ctx->pc = 0x42B00Cu;
            goto label_42b00c;
        }
    }
    ctx->pc = 0x42AFE4u;
label_42afe4:
    // 0x42afe4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x42afe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_42afe8:
    // 0x42afe8: 0x24424060  addiu       $v0, $v0, 0x4060
    ctx->pc = 0x42afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16480));
label_42afec:
    // 0x42afec: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x42afecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_42aff0:
    // 0x42aff0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x42aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42aff4:
    // 0x42aff4: 0x0  nop
    ctx->pc = 0x42aff4u;
    // NOP
label_42aff8:
    // 0x42aff8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x42aff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_42affc:
    // 0x42affc: 0x40f809  jalr        $v0
label_42b000:
    if (ctx->pc == 0x42B000u) {
        ctx->pc = 0x42B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFFCu;
        // 0x42b000: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B004u;
        goto label_42b004;
    }
    ctx->pc = 0x42AFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42B004u);
        ctx->pc = 0x42B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFFCu;
        // 0x42b000: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AFFCu, 0x42B004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42B004u;
label_42b004:
    // 0x42b004: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_42b008:
    if (ctx->pc == 0x42B008u) {
        ctx->pc = 0x42B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B004u;
        // 0x42b008: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B00Cu;
        goto label_42b00c;
    }
    ctx->pc = 0x42B004u;
    {
        const bool branch_taken_0x42b004 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x42b004) {
            ctx->pc = 0x42B008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B004u;
            // 0x42b008: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42AFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42aff8;
        }
    }
    ctx->pc = 0x42B00Cu;
label_42b00c:
    // 0x42b00c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42b00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42b010:
    // 0x42b010: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x42b010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42b014:
    // 0x42b014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42b014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42b018:
    // 0x42b018: 0x3e00008  jr          $ra
label_42b01c:
    if (ctx->pc == 0x42B01Cu) {
        ctx->pc = 0x42B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B018u;
        // 0x42b01c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B020u;
        goto label_fallthrough_0x42b018;
    }
    ctx->pc = 0x42B018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B018u;
        // 0x42b01c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42B018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x42b018:
    ctx->pc = 0x42B020u;
}
