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

// Function: sub_002DC9F8
// Address: 0x2dc9f8 - 0x2dd0c8
void sub_002DC9F8_0x2dc9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC9F8_0x2dc9f8");
#endif

    switch (ctx->pc) {
        case 0x2dc9f8u: goto label_2dc9f8;
        case 0x2dc9fcu: goto label_2dc9fc;
        case 0x2dca00u: goto label_2dca00;
        case 0x2dca04u: goto label_2dca04;
        case 0x2dca08u: goto label_2dca08;
        case 0x2dca0cu: goto label_2dca0c;
        case 0x2dca10u: goto label_2dca10;
        case 0x2dca14u: goto label_2dca14;
        case 0x2dca18u: goto label_2dca18;
        case 0x2dca1cu: goto label_2dca1c;
        case 0x2dca20u: goto label_2dca20;
        case 0x2dca24u: goto label_2dca24;
        case 0x2dca28u: goto label_2dca28;
        case 0x2dca2cu: goto label_2dca2c;
        case 0x2dca30u: goto label_2dca30;
        case 0x2dca34u: goto label_2dca34;
        case 0x2dca38u: goto label_2dca38;
        case 0x2dca3cu: goto label_2dca3c;
        case 0x2dca40u: goto label_2dca40;
        case 0x2dca44u: goto label_2dca44;
        case 0x2dca48u: goto label_2dca48;
        case 0x2dca4cu: goto label_2dca4c;
        case 0x2dca50u: goto label_2dca50;
        case 0x2dca54u: goto label_2dca54;
        case 0x2dca58u: goto label_2dca58;
        case 0x2dca5cu: goto label_2dca5c;
        case 0x2dca60u: goto label_2dca60;
        case 0x2dca64u: goto label_2dca64;
        case 0x2dca68u: goto label_2dca68;
        case 0x2dca6cu: goto label_2dca6c;
        case 0x2dca70u: goto label_2dca70;
        case 0x2dca74u: goto label_2dca74;
        case 0x2dca78u: goto label_2dca78;
        case 0x2dca7cu: goto label_2dca7c;
        case 0x2dca80u: goto label_2dca80;
        case 0x2dca84u: goto label_2dca84;
        case 0x2dca88u: goto label_2dca88;
        case 0x2dca8cu: goto label_2dca8c;
        case 0x2dca90u: goto label_2dca90;
        case 0x2dca94u: goto label_2dca94;
        case 0x2dca98u: goto label_2dca98;
        case 0x2dca9cu: goto label_2dca9c;
        case 0x2dcaa0u: goto label_2dcaa0;
        case 0x2dcaa4u: goto label_2dcaa4;
        case 0x2dcaa8u: goto label_2dcaa8;
        case 0x2dcaacu: goto label_2dcaac;
        case 0x2dcab0u: goto label_2dcab0;
        case 0x2dcab4u: goto label_2dcab4;
        case 0x2dcab8u: goto label_2dcab8;
        case 0x2dcabcu: goto label_2dcabc;
        case 0x2dcac0u: goto label_2dcac0;
        case 0x2dcac4u: goto label_2dcac4;
        case 0x2dcac8u: goto label_2dcac8;
        case 0x2dcaccu: goto label_2dcacc;
        case 0x2dcad0u: goto label_2dcad0;
        case 0x2dcad4u: goto label_2dcad4;
        case 0x2dcad8u: goto label_2dcad8;
        case 0x2dcadcu: goto label_2dcadc;
        case 0x2dcae0u: goto label_2dcae0;
        case 0x2dcae4u: goto label_2dcae4;
        case 0x2dcae8u: goto label_2dcae8;
        case 0x2dcaecu: goto label_2dcaec;
        case 0x2dcaf0u: goto label_2dcaf0;
        case 0x2dcaf4u: goto label_2dcaf4;
        case 0x2dcaf8u: goto label_2dcaf8;
        case 0x2dcafcu: goto label_2dcafc;
        case 0x2dcb00u: goto label_2dcb00;
        case 0x2dcb04u: goto label_2dcb04;
        case 0x2dcb08u: goto label_2dcb08;
        case 0x2dcb0cu: goto label_2dcb0c;
        case 0x2dcb10u: goto label_2dcb10;
        case 0x2dcb14u: goto label_2dcb14;
        case 0x2dcb18u: goto label_2dcb18;
        case 0x2dcb1cu: goto label_2dcb1c;
        case 0x2dcb20u: goto label_2dcb20;
        case 0x2dcb24u: goto label_2dcb24;
        case 0x2dcb28u: goto label_2dcb28;
        case 0x2dcb2cu: goto label_2dcb2c;
        case 0x2dcb30u: goto label_2dcb30;
        case 0x2dcb34u: goto label_2dcb34;
        case 0x2dcb38u: goto label_2dcb38;
        case 0x2dcb3cu: goto label_2dcb3c;
        case 0x2dcb40u: goto label_2dcb40;
        case 0x2dcb44u: goto label_2dcb44;
        case 0x2dcb48u: goto label_2dcb48;
        case 0x2dcb4cu: goto label_2dcb4c;
        case 0x2dcb50u: goto label_2dcb50;
        case 0x2dcb54u: goto label_2dcb54;
        case 0x2dcb58u: goto label_2dcb58;
        case 0x2dcb5cu: goto label_2dcb5c;
        case 0x2dcb60u: goto label_2dcb60;
        case 0x2dcb64u: goto label_2dcb64;
        case 0x2dcb68u: goto label_2dcb68;
        case 0x2dcb6cu: goto label_2dcb6c;
        case 0x2dcb70u: goto label_2dcb70;
        case 0x2dcb74u: goto label_2dcb74;
        case 0x2dcb78u: goto label_2dcb78;
        case 0x2dcb7cu: goto label_2dcb7c;
        case 0x2dcb80u: goto label_2dcb80;
        case 0x2dcb84u: goto label_2dcb84;
        case 0x2dcb88u: goto label_2dcb88;
        case 0x2dcb8cu: goto label_2dcb8c;
        case 0x2dcb90u: goto label_2dcb90;
        case 0x2dcb94u: goto label_2dcb94;
        case 0x2dcb98u: goto label_2dcb98;
        case 0x2dcb9cu: goto label_2dcb9c;
        case 0x2dcba0u: goto label_2dcba0;
        case 0x2dcba4u: goto label_2dcba4;
        case 0x2dcba8u: goto label_2dcba8;
        case 0x2dcbacu: goto label_2dcbac;
        case 0x2dcbb0u: goto label_2dcbb0;
        case 0x2dcbb4u: goto label_2dcbb4;
        case 0x2dcbb8u: goto label_2dcbb8;
        case 0x2dcbbcu: goto label_2dcbbc;
        case 0x2dcbc0u: goto label_2dcbc0;
        case 0x2dcbc4u: goto label_2dcbc4;
        case 0x2dcbc8u: goto label_2dcbc8;
        case 0x2dcbccu: goto label_2dcbcc;
        case 0x2dcbd0u: goto label_2dcbd0;
        case 0x2dcbd4u: goto label_2dcbd4;
        case 0x2dcbd8u: goto label_2dcbd8;
        case 0x2dcbdcu: goto label_2dcbdc;
        case 0x2dcbe0u: goto label_2dcbe0;
        case 0x2dcbe4u: goto label_2dcbe4;
        case 0x2dcbe8u: goto label_2dcbe8;
        case 0x2dcbecu: goto label_2dcbec;
        case 0x2dcbf0u: goto label_2dcbf0;
        case 0x2dcbf4u: goto label_2dcbf4;
        case 0x2dcbf8u: goto label_2dcbf8;
        case 0x2dcbfcu: goto label_2dcbfc;
        case 0x2dcc00u: goto label_2dcc00;
        case 0x2dcc04u: goto label_2dcc04;
        case 0x2dcc08u: goto label_2dcc08;
        case 0x2dcc0cu: goto label_2dcc0c;
        case 0x2dcc10u: goto label_2dcc10;
        case 0x2dcc14u: goto label_2dcc14;
        case 0x2dcc18u: goto label_2dcc18;
        case 0x2dcc1cu: goto label_2dcc1c;
        case 0x2dcc20u: goto label_2dcc20;
        case 0x2dcc24u: goto label_2dcc24;
        case 0x2dcc28u: goto label_2dcc28;
        case 0x2dcc2cu: goto label_2dcc2c;
        case 0x2dcc30u: goto label_2dcc30;
        case 0x2dcc34u: goto label_2dcc34;
        case 0x2dcc38u: goto label_2dcc38;
        case 0x2dcc3cu: goto label_2dcc3c;
        case 0x2dcc40u: goto label_2dcc40;
        case 0x2dcc44u: goto label_2dcc44;
        case 0x2dcc48u: goto label_2dcc48;
        case 0x2dcc4cu: goto label_2dcc4c;
        case 0x2dcc50u: goto label_2dcc50;
        case 0x2dcc54u: goto label_2dcc54;
        case 0x2dcc58u: goto label_2dcc58;
        case 0x2dcc5cu: goto label_2dcc5c;
        case 0x2dcc60u: goto label_2dcc60;
        case 0x2dcc64u: goto label_2dcc64;
        case 0x2dcc68u: goto label_2dcc68;
        case 0x2dcc6cu: goto label_2dcc6c;
        case 0x2dcc70u: goto label_2dcc70;
        case 0x2dcc74u: goto label_2dcc74;
        case 0x2dcc78u: goto label_2dcc78;
        case 0x2dcc7cu: goto label_2dcc7c;
        case 0x2dcc80u: goto label_2dcc80;
        case 0x2dcc84u: goto label_2dcc84;
        case 0x2dcc88u: goto label_2dcc88;
        case 0x2dcc8cu: goto label_2dcc8c;
        case 0x2dcc90u: goto label_2dcc90;
        case 0x2dcc94u: goto label_2dcc94;
        case 0x2dcc98u: goto label_2dcc98;
        case 0x2dcc9cu: goto label_2dcc9c;
        case 0x2dcca0u: goto label_2dcca0;
        case 0x2dcca4u: goto label_2dcca4;
        case 0x2dcca8u: goto label_2dcca8;
        case 0x2dccacu: goto label_2dccac;
        case 0x2dccb0u: goto label_2dccb0;
        case 0x2dccb4u: goto label_2dccb4;
        case 0x2dccb8u: goto label_2dccb8;
        case 0x2dccbcu: goto label_2dccbc;
        case 0x2dccc0u: goto label_2dccc0;
        case 0x2dccc4u: goto label_2dccc4;
        case 0x2dccc8u: goto label_2dccc8;
        case 0x2dccccu: goto label_2dcccc;
        case 0x2dccd0u: goto label_2dccd0;
        case 0x2dccd4u: goto label_2dccd4;
        case 0x2dccd8u: goto label_2dccd8;
        case 0x2dccdcu: goto label_2dccdc;
        case 0x2dcce0u: goto label_2dcce0;
        case 0x2dcce4u: goto label_2dcce4;
        case 0x2dcce8u: goto label_2dcce8;
        case 0x2dccecu: goto label_2dccec;
        case 0x2dccf0u: goto label_2dccf0;
        case 0x2dccf4u: goto label_2dccf4;
        case 0x2dccf8u: goto label_2dccf8;
        case 0x2dccfcu: goto label_2dccfc;
        case 0x2dcd00u: goto label_2dcd00;
        case 0x2dcd04u: goto label_2dcd04;
        case 0x2dcd08u: goto label_2dcd08;
        case 0x2dcd0cu: goto label_2dcd0c;
        case 0x2dcd10u: goto label_2dcd10;
        case 0x2dcd14u: goto label_2dcd14;
        case 0x2dcd18u: goto label_2dcd18;
        case 0x2dcd1cu: goto label_2dcd1c;
        case 0x2dcd20u: goto label_2dcd20;
        case 0x2dcd24u: goto label_2dcd24;
        case 0x2dcd28u: goto label_2dcd28;
        case 0x2dcd2cu: goto label_2dcd2c;
        case 0x2dcd30u: goto label_2dcd30;
        case 0x2dcd34u: goto label_2dcd34;
        case 0x2dcd38u: goto label_2dcd38;
        case 0x2dcd3cu: goto label_2dcd3c;
        case 0x2dcd40u: goto label_2dcd40;
        case 0x2dcd44u: goto label_2dcd44;
        case 0x2dcd48u: goto label_2dcd48;
        case 0x2dcd4cu: goto label_2dcd4c;
        case 0x2dcd50u: goto label_2dcd50;
        case 0x2dcd54u: goto label_2dcd54;
        case 0x2dcd58u: goto label_2dcd58;
        case 0x2dcd5cu: goto label_2dcd5c;
        case 0x2dcd60u: goto label_2dcd60;
        case 0x2dcd64u: goto label_2dcd64;
        case 0x2dcd68u: goto label_2dcd68;
        case 0x2dcd6cu: goto label_2dcd6c;
        case 0x2dcd70u: goto label_2dcd70;
        case 0x2dcd74u: goto label_2dcd74;
        case 0x2dcd78u: goto label_2dcd78;
        case 0x2dcd7cu: goto label_2dcd7c;
        case 0x2dcd80u: goto label_2dcd80;
        case 0x2dcd84u: goto label_2dcd84;
        case 0x2dcd88u: goto label_2dcd88;
        case 0x2dcd8cu: goto label_2dcd8c;
        case 0x2dcd90u: goto label_2dcd90;
        case 0x2dcd94u: goto label_2dcd94;
        case 0x2dcd98u: goto label_2dcd98;
        case 0x2dcd9cu: goto label_2dcd9c;
        case 0x2dcda0u: goto label_2dcda0;
        case 0x2dcda4u: goto label_2dcda4;
        case 0x2dcda8u: goto label_2dcda8;
        case 0x2dcdacu: goto label_2dcdac;
        case 0x2dcdb0u: goto label_2dcdb0;
        case 0x2dcdb4u: goto label_2dcdb4;
        case 0x2dcdb8u: goto label_2dcdb8;
        case 0x2dcdbcu: goto label_2dcdbc;
        case 0x2dcdc0u: goto label_2dcdc0;
        case 0x2dcdc4u: goto label_2dcdc4;
        case 0x2dcdc8u: goto label_2dcdc8;
        case 0x2dcdccu: goto label_2dcdcc;
        case 0x2dcdd0u: goto label_2dcdd0;
        case 0x2dcdd4u: goto label_2dcdd4;
        case 0x2dcdd8u: goto label_2dcdd8;
        case 0x2dcddcu: goto label_2dcddc;
        case 0x2dcde0u: goto label_2dcde0;
        case 0x2dcde4u: goto label_2dcde4;
        case 0x2dcde8u: goto label_2dcde8;
        case 0x2dcdecu: goto label_2dcdec;
        case 0x2dcdf0u: goto label_2dcdf0;
        case 0x2dcdf4u: goto label_2dcdf4;
        case 0x2dcdf8u: goto label_2dcdf8;
        case 0x2dcdfcu: goto label_2dcdfc;
        case 0x2dce00u: goto label_2dce00;
        case 0x2dce04u: goto label_2dce04;
        case 0x2dce08u: goto label_2dce08;
        case 0x2dce0cu: goto label_2dce0c;
        case 0x2dce10u: goto label_2dce10;
        case 0x2dce14u: goto label_2dce14;
        case 0x2dce18u: goto label_2dce18;
        case 0x2dce1cu: goto label_2dce1c;
        case 0x2dce20u: goto label_2dce20;
        case 0x2dce24u: goto label_2dce24;
        case 0x2dce28u: goto label_2dce28;
        case 0x2dce2cu: goto label_2dce2c;
        case 0x2dce30u: goto label_2dce30;
        case 0x2dce34u: goto label_2dce34;
        case 0x2dce38u: goto label_2dce38;
        case 0x2dce3cu: goto label_2dce3c;
        case 0x2dce40u: goto label_2dce40;
        case 0x2dce44u: goto label_2dce44;
        case 0x2dce48u: goto label_2dce48;
        case 0x2dce4cu: goto label_2dce4c;
        case 0x2dce50u: goto label_2dce50;
        case 0x2dce54u: goto label_2dce54;
        case 0x2dce58u: goto label_2dce58;
        case 0x2dce5cu: goto label_2dce5c;
        case 0x2dce60u: goto label_2dce60;
        case 0x2dce64u: goto label_2dce64;
        case 0x2dce68u: goto label_2dce68;
        case 0x2dce6cu: goto label_2dce6c;
        case 0x2dce70u: goto label_2dce70;
        case 0x2dce74u: goto label_2dce74;
        case 0x2dce78u: goto label_2dce78;
        case 0x2dce7cu: goto label_2dce7c;
        case 0x2dce80u: goto label_2dce80;
        case 0x2dce84u: goto label_2dce84;
        case 0x2dce88u: goto label_2dce88;
        case 0x2dce8cu: goto label_2dce8c;
        case 0x2dce90u: goto label_2dce90;
        case 0x2dce94u: goto label_2dce94;
        case 0x2dce98u: goto label_2dce98;
        case 0x2dce9cu: goto label_2dce9c;
        case 0x2dcea0u: goto label_2dcea0;
        case 0x2dcea4u: goto label_2dcea4;
        case 0x2dcea8u: goto label_2dcea8;
        case 0x2dceacu: goto label_2dceac;
        case 0x2dceb0u: goto label_2dceb0;
        case 0x2dceb4u: goto label_2dceb4;
        case 0x2dceb8u: goto label_2dceb8;
        case 0x2dcebcu: goto label_2dcebc;
        case 0x2dcec0u: goto label_2dcec0;
        case 0x2dcec4u: goto label_2dcec4;
        case 0x2dcec8u: goto label_2dcec8;
        case 0x2dceccu: goto label_2dcecc;
        case 0x2dced0u: goto label_2dced0;
        case 0x2dced4u: goto label_2dced4;
        case 0x2dced8u: goto label_2dced8;
        case 0x2dcedcu: goto label_2dcedc;
        case 0x2dcee0u: goto label_2dcee0;
        case 0x2dcee4u: goto label_2dcee4;
        case 0x2dcee8u: goto label_2dcee8;
        case 0x2dceecu: goto label_2dceec;
        case 0x2dcef0u: goto label_2dcef0;
        case 0x2dcef4u: goto label_2dcef4;
        case 0x2dcef8u: goto label_2dcef8;
        case 0x2dcefcu: goto label_2dcefc;
        case 0x2dcf00u: goto label_2dcf00;
        case 0x2dcf04u: goto label_2dcf04;
        case 0x2dcf08u: goto label_2dcf08;
        case 0x2dcf0cu: goto label_2dcf0c;
        case 0x2dcf10u: goto label_2dcf10;
        case 0x2dcf14u: goto label_2dcf14;
        case 0x2dcf18u: goto label_2dcf18;
        case 0x2dcf1cu: goto label_2dcf1c;
        case 0x2dcf20u: goto label_2dcf20;
        case 0x2dcf24u: goto label_2dcf24;
        case 0x2dcf28u: goto label_2dcf28;
        case 0x2dcf2cu: goto label_2dcf2c;
        case 0x2dcf30u: goto label_2dcf30;
        case 0x2dcf34u: goto label_2dcf34;
        case 0x2dcf38u: goto label_2dcf38;
        case 0x2dcf3cu: goto label_2dcf3c;
        case 0x2dcf40u: goto label_2dcf40;
        case 0x2dcf44u: goto label_2dcf44;
        case 0x2dcf48u: goto label_2dcf48;
        case 0x2dcf4cu: goto label_2dcf4c;
        case 0x2dcf50u: goto label_2dcf50;
        case 0x2dcf54u: goto label_2dcf54;
        case 0x2dcf58u: goto label_2dcf58;
        case 0x2dcf5cu: goto label_2dcf5c;
        case 0x2dcf60u: goto label_2dcf60;
        case 0x2dcf64u: goto label_2dcf64;
        case 0x2dcf68u: goto label_2dcf68;
        case 0x2dcf6cu: goto label_2dcf6c;
        case 0x2dcf70u: goto label_2dcf70;
        case 0x2dcf74u: goto label_2dcf74;
        case 0x2dcf78u: goto label_2dcf78;
        case 0x2dcf7cu: goto label_2dcf7c;
        case 0x2dcf80u: goto label_2dcf80;
        case 0x2dcf84u: goto label_2dcf84;
        case 0x2dcf88u: goto label_2dcf88;
        case 0x2dcf8cu: goto label_2dcf8c;
        case 0x2dcf90u: goto label_2dcf90;
        case 0x2dcf94u: goto label_2dcf94;
        case 0x2dcf98u: goto label_2dcf98;
        case 0x2dcf9cu: goto label_2dcf9c;
        case 0x2dcfa0u: goto label_2dcfa0;
        case 0x2dcfa4u: goto label_2dcfa4;
        case 0x2dcfa8u: goto label_2dcfa8;
        case 0x2dcfacu: goto label_2dcfac;
        case 0x2dcfb0u: goto label_2dcfb0;
        case 0x2dcfb4u: goto label_2dcfb4;
        case 0x2dcfb8u: goto label_2dcfb8;
        case 0x2dcfbcu: goto label_2dcfbc;
        case 0x2dcfc0u: goto label_2dcfc0;
        case 0x2dcfc4u: goto label_2dcfc4;
        case 0x2dcfc8u: goto label_2dcfc8;
        case 0x2dcfccu: goto label_2dcfcc;
        case 0x2dcfd0u: goto label_2dcfd0;
        case 0x2dcfd4u: goto label_2dcfd4;
        case 0x2dcfd8u: goto label_2dcfd8;
        case 0x2dcfdcu: goto label_2dcfdc;
        case 0x2dcfe0u: goto label_2dcfe0;
        case 0x2dcfe4u: goto label_2dcfe4;
        case 0x2dcfe8u: goto label_2dcfe8;
        case 0x2dcfecu: goto label_2dcfec;
        case 0x2dcff0u: goto label_2dcff0;
        case 0x2dcff4u: goto label_2dcff4;
        case 0x2dcff8u: goto label_2dcff8;
        case 0x2dcffcu: goto label_2dcffc;
        case 0x2dd000u: goto label_2dd000;
        case 0x2dd004u: goto label_2dd004;
        case 0x2dd008u: goto label_2dd008;
        case 0x2dd00cu: goto label_2dd00c;
        case 0x2dd010u: goto label_2dd010;
        case 0x2dd014u: goto label_2dd014;
        case 0x2dd018u: goto label_2dd018;
        case 0x2dd01cu: goto label_2dd01c;
        case 0x2dd020u: goto label_2dd020;
        case 0x2dd024u: goto label_2dd024;
        case 0x2dd028u: goto label_2dd028;
        case 0x2dd02cu: goto label_2dd02c;
        case 0x2dd030u: goto label_2dd030;
        case 0x2dd034u: goto label_2dd034;
        case 0x2dd038u: goto label_2dd038;
        case 0x2dd03cu: goto label_2dd03c;
        case 0x2dd040u: goto label_2dd040;
        case 0x2dd044u: goto label_2dd044;
        case 0x2dd048u: goto label_2dd048;
        case 0x2dd04cu: goto label_2dd04c;
        case 0x2dd050u: goto label_2dd050;
        case 0x2dd054u: goto label_2dd054;
        case 0x2dd058u: goto label_2dd058;
        case 0x2dd05cu: goto label_2dd05c;
        case 0x2dd060u: goto label_2dd060;
        case 0x2dd064u: goto label_2dd064;
        case 0x2dd068u: goto label_2dd068;
        case 0x2dd06cu: goto label_2dd06c;
        case 0x2dd070u: goto label_2dd070;
        case 0x2dd074u: goto label_2dd074;
        case 0x2dd078u: goto label_2dd078;
        case 0x2dd07cu: goto label_2dd07c;
        case 0x2dd080u: goto label_2dd080;
        case 0x2dd084u: goto label_2dd084;
        case 0x2dd088u: goto label_2dd088;
        case 0x2dd08cu: goto label_2dd08c;
        case 0x2dd090u: goto label_2dd090;
        case 0x2dd094u: goto label_2dd094;
        case 0x2dd098u: goto label_2dd098;
        case 0x2dd09cu: goto label_2dd09c;
        case 0x2dd0a0u: goto label_2dd0a0;
        case 0x2dd0a4u: goto label_2dd0a4;
        case 0x2dd0a8u: goto label_2dd0a8;
        case 0x2dd0acu: goto label_2dd0ac;
        case 0x2dd0b0u: goto label_2dd0b0;
        case 0x2dd0b4u: goto label_2dd0b4;
        case 0x2dd0b8u: goto label_2dd0b8;
        case 0x2dd0bcu: goto label_2dd0bc;
        case 0x2dd0c0u: goto label_2dd0c0;
        case 0x2dd0c4u: goto label_2dd0c4;
        default: break;
    }

    ctx->pc = 0x2dc9f8u;

label_2dc9f8:
    // 0x2dc9f8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2dc9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_2dc9fc:
    // 0x2dc9fc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2dc9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2dca00:
    // 0x2dca00: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2dca00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_2dca04:
    // 0x2dca04: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2dca04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_2dca08:
    // 0x2dca08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dca08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dca0c:
    // 0x2dca0c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2dca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_2dca10:
    // 0x2dca10: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2dca10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2dca14:
    // 0x2dca14: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2dca14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_2dca18:
    // 0x2dca18: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2dca18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2dca1c:
    // 0x2dca1c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2dca1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_2dca20:
    // 0x2dca20: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2dca20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_2dca24:
    // 0x2dca24: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2dca24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_2dca28:
    // 0x2dca28: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2dca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2dca2c:
    // 0x2dca2c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2dca2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2dca30:
    // 0x2dca30: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2dca30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2dca34:
    // 0x2dca34: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x2dca34u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_2dca38:
    // 0x2dca38: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2dca38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_2dca3c:
    // 0x2dca3c: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2dca3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2dca40:
    // 0x2dca40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2dca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dca44:
    // 0x2dca44: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x2dca44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dca48:
    // 0x2dca48: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2dca48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2dca4c:
    // 0x2dca4c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2dca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2dca50:
    // 0x2dca50: 0xc0e4060  jal         func_390180
label_2dca54:
    if (ctx->pc == 0x2DCA54u) {
        ctx->pc = 0x2DCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA50u;
        // 0x2dca54: 0x54f021  addu        $fp, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCA58u;
        goto label_2dca58;
    }
    ctx->pc = 0x2DCA50u;
    SET_GPR_U32(ctx, 31, 0x2DCA58u);
    ctx->pc = 0x2DCA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA50u;
    // 0x2dca54: 0x54f021  addu        $fp, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DCA50u, 0x2DCA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCA58u;
label_2dca58:
    // 0x2dca58: 0xc0e57ce  jal         func_395F38
label_2dca5c:
    if (ctx->pc == 0x2DCA5Cu) {
        ctx->pc = 0x2DCA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA58u;
        // 0x2dca5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCA60u;
        goto label_2dca60;
    }
    ctx->pc = 0x2DCA58u;
    SET_GPR_U32(ctx, 31, 0x2DCA60u);
    ctx->pc = 0x2DCA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA58u;
    // 0x2dca5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2DCA58u, 0x2DCA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCA60u;
label_2dca60:
    // 0x2dca60: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2dca60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dca64:
    // 0x2dca64: 0x12a00077  beqz        $s5, . + 4 + (0x77 << 2)
label_2dca68:
    if (ctx->pc == 0x2DCA68u) {
        ctx->pc = 0x2DCA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA64u;
        // 0x2dca68: 0x26640284  addiu       $a0, $s3, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCA6Cu;
        goto label_2dca6c;
    }
    ctx->pc = 0x2DCA64u;
    {
        const bool branch_taken_0x2dca64 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA64u;
        // 0x2dca68: 0x26640284  addiu       $a0, $s3, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dca64) {
            ctx->pc = 0x2DCC44u;
            goto label_2dcc44;
        }
    }
    ctx->pc = 0x2DCA6Cu;
label_2dca6c:
    // 0x2dca6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dca6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2dca70:
    // 0x2dca70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dca70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dca74:
    // 0x2dca74: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2dca74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dca78:
    // 0x2dca78: 0x240601f4  addiu       $a2, $zero, 0x1F4
    ctx->pc = 0x2dca78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_2dca7c:
    // 0x2dca7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dca7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dca80:
    // 0x2dca80: 0xc0a6800  jal         func_29A000
label_2dca84:
    if (ctx->pc == 0x2DCA84u) {
        ctx->pc = 0x2DCA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA80u;
        // 0x2dca84: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCA88u;
        goto label_2dca88;
    }
    ctx->pc = 0x2DCA80u;
    SET_GPR_U32(ctx, 31, 0x2DCA88u);
    ctx->pc = 0x2DCA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA80u;
    // 0x2dca84: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2DCA80u, 0x2DCA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCA88u;
label_2dca88:
    // 0x2dca88: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2dca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2dca8c:
    // 0x2dca8c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2dca8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2dca90:
    // 0x2dca90: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2dca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2dca94:
    // 0x2dca94: 0x40f809  jalr        $v0
label_2dca98:
    if (ctx->pc == 0x2DCA98u) {
        ctx->pc = 0x2DCA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA94u;
        // 0x2dca98: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCA9Cu;
        goto label_2dca9c;
    }
    ctx->pc = 0x2DCA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DCA9Cu);
        ctx->pc = 0x2DCA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA94u;
        // 0x2dca98: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCA94u, 0x2DCA9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DCA9Cu;
label_2dca9c:
    // 0x2dca9c: 0x21683  sra         $v0, $v0, 26
    ctx->pc = 0x2dca9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 26));
label_2dcaa0:
    // 0x2dcaa0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dcaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2dcaa4:
    // 0x2dcaa4: 0x10520178  beq         $v0, $s2, . + 4 + (0x178 << 2)
label_2dcaa8:
    if (ctx->pc == 0x2DCAA8u) {
        ctx->pc = 0x2DCAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAA4u;
        // 0x2dcaa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCAACu;
        goto label_2dcaac;
    }
    ctx->pc = 0x2DCAA4u;
    {
        const bool branch_taken_0x2dcaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2DCAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAA4u;
        // 0x2dcaa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcaa4) {
            ctx->pc = 0x2DD088u;
            goto label_2dd088;
        }
    }
    ctx->pc = 0x2DCAACu;
label_2dcaac:
    // 0x2dcaac: 0xc08a102  jal         func_228408
label_2dcab0:
    if (ctx->pc == 0x2DCAB0u) {
        ctx->pc = 0x2DCAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAACu;
        // 0x2dcab0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCAB4u;
        goto label_2dcab4;
    }
    ctx->pc = 0x2DCAACu;
    SET_GPR_U32(ctx, 31, 0x2DCAB4u);
    ctx->pc = 0x2DCAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCAACu;
    // 0x2dcab0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228408u, 0x2DCAACu, 0x2DCAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCAB4u;
label_2dcab4:
    // 0x2dcab4: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
label_2dcab8:
    if (ctx->pc == 0x2DCAB8u) {
        ctx->pc = 0x2DCABCu;
        goto label_2dcabc;
    }
    ctx->pc = 0x2DCAB4u;
    {
        const bool branch_taken_0x2dcab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2dcab4) {
            ctx->pc = 0x2DCAC4u;
            goto label_2dcac4;
        }
    }
    ctx->pc = 0x2DCABCu;
label_2dcabc:
    // 0x2dcabc: 0x10000171  b           . + 4 + (0x171 << 2)
label_2dcac0:
    if (ctx->pc == 0x2DCAC0u) {
        ctx->pc = 0x2DCAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCABCu;
        // 0x2dcac0: 0xa2320031  sb          $s2, 0x31($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCAC4u;
        goto label_2dcac4;
    }
    ctx->pc = 0x2DCABCu;
    {
        const bool branch_taken_0x2dcabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCABCu;
        // 0x2dcac0: 0xa2320031  sb          $s2, 0x31($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcabc) {
            ctx->pc = 0x2DD084u;
            goto label_2dd084;
        }
    }
    ctx->pc = 0x2DCAC4u;
label_2dcac4:
    // 0x2dcac4: 0xc0e5476  jal         func_3951D8
label_2dcac8:
    if (ctx->pc == 0x2DCAC8u) {
        ctx->pc = 0x2DCAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAC4u;
        // 0x2dcac8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCACCu;
        goto label_2dcacc;
    }
    ctx->pc = 0x2DCAC4u;
    SET_GPR_U32(ctx, 31, 0x2DCACCu);
    ctx->pc = 0x2DCAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCAC4u;
    // 0x2dcac8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3951D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951D8u, 0x2DCAC4u, 0x2DCACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCACCu;
label_2dcacc:
    // 0x2dcacc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dcaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcad0:
    // 0x2dcad0: 0x52000052  beql        $s0, $zero, . + 4 + (0x52 << 2)
label_2dcad4:
    if (ctx->pc == 0x2DCAD4u) {
        ctx->pc = 0x2DCAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAD0u;
        // 0x2dcad4: 0x92220031  lbu         $v0, 0x31($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCAD8u;
        goto label_2dcad8;
    }
    ctx->pc = 0x2DCAD0u;
    {
        const bool branch_taken_0x2dcad0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcad0) {
            ctx->pc = 0x2DCAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCAD0u;
            // 0x2dcad4: 0x92220031  lbu         $v0, 0x31($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCC1Cu;
            goto label_2dcc1c;
        }
    }
    ctx->pc = 0x2DCAD8u;
label_2dcad8:
    // 0x2dcad8: 0x1213016b  beq         $s0, $s3, . + 4 + (0x16B << 2)
label_2dcadc:
    if (ctx->pc == 0x2DCADCu) {
        ctx->pc = 0x2DCADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAD8u;
        // 0x2dcadc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCAE0u;
        goto label_2dcae0;
    }
    ctx->pc = 0x2DCAD8u;
    {
        const bool branch_taken_0x2dcad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x2DCADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAD8u;
        // 0x2dcadc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcad8) {
            ctx->pc = 0x2DD088u;
            goto label_2dd088;
        }
    }
    ctx->pc = 0x2DCAE0u;
label_2dcae0:
    // 0x2dcae0: 0xc087502  jal         func_21D408
label_2dcae4:
    if (ctx->pc == 0x2DCAE4u) {
        ctx->pc = 0x2DCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAE0u;
        // 0x2dcae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCAE8u;
        goto label_2dcae8;
    }
    ctx->pc = 0x2DCAE0u;
    SET_GPR_U32(ctx, 31, 0x2DCAE8u);
    ctx->pc = 0x2DCAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCAE0u;
    // 0x2dcae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DCAE0u, 0x2DCAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCAE8u;
label_2dcae8:
    // 0x2dcae8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dcae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcaec:
    // 0x2dcaec: 0xc0a408c  jal         func_290230
label_2dcaf0:
    if (ctx->pc == 0x2DCAF0u) {
        ctx->pc = 0x2DCAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAECu;
        // 0x2dcaf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCAF4u;
        goto label_2dcaf4;
    }
    ctx->pc = 0x2DCAECu;
    SET_GPR_U32(ctx, 31, 0x2DCAF4u);
    ctx->pc = 0x2DCAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCAECu;
    // 0x2dcaf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2DCAECu, 0x2DCAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCAF4u;
label_2dcaf4:
    // 0x2dcaf4: 0x10520053  beq         $v0, $s2, . + 4 + (0x53 << 2)
label_2dcaf8:
    if (ctx->pc == 0x2DCAF8u) {
        ctx->pc = 0x2DCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAF4u;
        // 0x2dcaf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCAFCu;
        goto label_2dcafc;
    }
    ctx->pc = 0x2DCAF4u;
    {
        const bool branch_taken_0x2dcaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2DCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAF4u;
        // 0x2dcaf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcaf4) {
            ctx->pc = 0x2DCC44u;
            goto label_2dcc44;
        }
    }
    ctx->pc = 0x2DCAFCu;
label_2dcafc:
    // 0x2dcafc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dcafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcb00:
    // 0x2dcb00: 0xc0a33f8  jal         func_28CFE0
label_2dcb04:
    if (ctx->pc == 0x2DCB04u) {
        ctx->pc = 0x2DCB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB00u;
        // 0x2dcb04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCB08u;
        goto label_2dcb08;
    }
    ctx->pc = 0x2DCB00u;
    SET_GPR_U32(ctx, 31, 0x2DCB08u);
    ctx->pc = 0x2DCB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB00u;
    // 0x2dcb04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2DCB00u, 0x2DCB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB08u;
label_2dcb08:
    // 0x2dcb08: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x2dcb08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2dcb0c:
    // 0x2dcb0c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2dcb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2dcb10:
    // 0x2dcb10: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2dcb10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2dcb14:
    // 0x2dcb14: 0xc0cdb38  jal         func_336CE0
label_2dcb18:
    if (ctx->pc == 0x2DCB18u) {
        ctx->pc = 0x2DCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB14u;
        // 0x2dcb18: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCB1Cu;
        goto label_2dcb1c;
    }
    ctx->pc = 0x2DCB14u;
    SET_GPR_U32(ctx, 31, 0x2DCB1Cu);
    ctx->pc = 0x2DCB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB14u;
    // 0x2dcb18: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DCB14u, 0x2DCB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB1Cu;
label_2dcb1c:
    // 0x2dcb1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2dcb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcb20:
    // 0x2dcb20: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2dcb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2dcb24:
    // 0x2dcb24: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dcb24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2dcb28:
    // 0x2dcb28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dcb28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2dcb2c:
    // 0x2dcb2c: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x2dcb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dcb30:
    // 0x2dcb30: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2dcb30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2dcb34:
    // 0x2dcb34: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2dcb34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2dcb38:
    // 0x2dcb38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dcb38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dcb3c:
    // 0x2dcb3c: 0x0  nop
    ctx->pc = 0x2dcb3cu;
    // NOP
label_2dcb40:
    // 0x2dcb40: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_2dcb44:
    if (ctx->pc == 0x2DCB44u) {
        ctx->pc = 0x2DCB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB40u;
        // 0x2dcb44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCB48u;
        goto label_2dcb48;
    }
    ctx->pc = 0x2DCB40u;
    {
        const bool branch_taken_0x2dcb40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DCB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB40u;
        // 0x2dcb44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb40) {
            ctx->pc = 0x2DCBCCu;
            goto label_2dcbcc;
        }
    }
    ctx->pc = 0x2DCB48u;
label_2dcb48:
    // 0x2dcb48: 0xc088fa8  jal         func_223EA0
label_2dcb4c:
    if (ctx->pc == 0x2DCB4Cu) {
        ctx->pc = 0x2DCB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB48u;
        // 0x2dcb4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCB50u;
        goto label_2dcb50;
    }
    ctx->pc = 0x2DCB48u;
    SET_GPR_U32(ctx, 31, 0x2DCB50u);
    ctx->pc = 0x2DCB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB48u;
    // 0x2dcb4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2DCB48u, 0x2DCB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB50u;
label_2dcb50:
    // 0x2dcb50: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2dcb54:
    if (ctx->pc == 0x2DCB54u) {
        ctx->pc = 0x2DCB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB50u;
        // 0x2dcb54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCB58u;
        goto label_2dcb58;
    }
    ctx->pc = 0x2DCB50u;
    {
        const bool branch_taken_0x2dcb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB50u;
        // 0x2dcb54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb50) {
            ctx->pc = 0x2DCBCCu;
            goto label_2dcbcc;
        }
    }
    ctx->pc = 0x2DCB58u;
label_2dcb58:
    // 0x2dcb58: 0xc089000  jal         func_224000
label_2dcb5c:
    if (ctx->pc == 0x2DCB5Cu) {
        ctx->pc = 0x2DCB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB58u;
        // 0x2dcb5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCB60u;
        goto label_2dcb60;
    }
    ctx->pc = 0x2DCB58u;
    SET_GPR_U32(ctx, 31, 0x2DCB60u);
    ctx->pc = 0x2DCB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB58u;
    // 0x2dcb5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2DCB58u, 0x2DCB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB60u;
label_2dcb60:
    // 0x2dcb60: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2dcb64:
    if (ctx->pc == 0x2DCB64u) {
        ctx->pc = 0x2DCB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB60u;
        // 0x2dcb64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCB68u;
        goto label_2dcb68;
    }
    ctx->pc = 0x2DCB60u;
    {
        const bool branch_taken_0x2dcb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB60u;
        // 0x2dcb64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb60) {
            ctx->pc = 0x2DCBCCu;
            goto label_2dcbcc;
        }
    }
    ctx->pc = 0x2DCB68u;
label_2dcb68:
    // 0x2dcb68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dcb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcb6c:
    // 0x2dcb6c: 0xc0a4162  jal         func_290588
label_2dcb70:
    if (ctx->pc == 0x2DCB70u) {
        ctx->pc = 0x2DCB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB6Cu;
        // 0x2dcb70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCB74u;
        goto label_2dcb74;
    }
    ctx->pc = 0x2DCB6Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB74u);
    ctx->pc = 0x2DCB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB6Cu;
    // 0x2dcb70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290588u, 0x2DCB6Cu, 0x2DCB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB74u;
label_2dcb74:
    // 0x2dcb74: 0x10400144  beqz        $v0, . + 4 + (0x144 << 2)
label_2dcb78:
    if (ctx->pc == 0x2DCB78u) {
        ctx->pc = 0x2DCB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB74u;
        // 0x2dcb78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCB7Cu;
        goto label_2dcb7c;
    }
    ctx->pc = 0x2DCB74u;
    {
        const bool branch_taken_0x2dcb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB74u;
        // 0x2dcb78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb74) {
            ctx->pc = 0x2DD088u;
            goto label_2dd088;
        }
    }
    ctx->pc = 0x2DCB7Cu;
label_2dcb7c:
    // 0x2dcb7c: 0xc0a4e54  jal         func_293950
label_2dcb80:
    if (ctx->pc == 0x2DCB80u) {
        ctx->pc = 0x2DCB84u;
        goto label_2dcb84;
    }
    ctx->pc = 0x2DCB7Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB84u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DCB7Cu, 0x2DCB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB84u;
label_2dcb84:
    // 0x2dcb84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dcb84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcb88:
    // 0x2dcb88: 0x5240000c  beql        $s2, $zero, . + 4 + (0xC << 2)
label_2dcb8c:
    if (ctx->pc == 0x2DCB8Cu) {
        ctx->pc = 0x2DCB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB88u;
        // 0x2dcb8c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCB90u;
        goto label_2dcb90;
    }
    ctx->pc = 0x2DCB88u;
    {
        const bool branch_taken_0x2dcb88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcb88) {
            ctx->pc = 0x2DCB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCB88u;
            // 0x2dcb8c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCBBCu;
            goto label_2dcbbc;
        }
    }
    ctx->pc = 0x2DCB90u;
label_2dcb90:
    // 0x2dcb90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2dcb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dcb94:
    // 0x2dcb94: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2dcb94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2dcb98:
    // 0x2dcb98: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2dcb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2dcb9c:
    // 0x2dcb9c: 0x40f809  jalr        $v0
label_2dcba0:
    if (ctx->pc == 0x2DCBA0u) {
        ctx->pc = 0x2DCBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB9Cu;
        // 0x2dcba0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCBA4u;
        goto label_2dcba4;
    }
    ctx->pc = 0x2DCB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DCBA4u);
        ctx->pc = 0x2DCBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB9Cu;
        // 0x2dcba0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCB9Cu, 0x2DCBA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DCBA4u;
label_2dcba4:
    // 0x2dcba4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dcba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcba8:
    // 0x2dcba8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dcba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcbac:
    // 0x2dcbac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dcbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dcbb0:
    // 0x2dcbb0: 0xc0abd6c  jal         func_2AF5B0
label_2dcbb4:
    if (ctx->pc == 0x2DCBB4u) {
        ctx->pc = 0x2DCBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBB0u;
        // 0x2dcbb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCBB8u;
        goto label_2dcbb8;
    }
    ctx->pc = 0x2DCBB0u;
    SET_GPR_U32(ctx, 31, 0x2DCBB8u);
    ctx->pc = 0x2DCBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCBB0u;
    // 0x2dcbb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2DCBB0u, 0x2DCBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCBB8u;
label_2dcbb8:
    // 0x2dcbb8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dcbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcbbc:
    // 0x2dcbbc: 0xc0a35d6  jal         func_28D758
label_2dcbc0:
    if (ctx->pc == 0x2DCBC0u) {
        ctx->pc = 0x2DCBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBBCu;
        // 0x2dcbc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCBC4u;
        goto label_2dcbc4;
    }
    ctx->pc = 0x2DCBBCu;
    SET_GPR_U32(ctx, 31, 0x2DCBC4u);
    ctx->pc = 0x2DCBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCBBCu;
    // 0x2dcbc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DCBBCu, 0x2DCBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCBC4u;
label_2dcbc4:
    // 0x2dcbc4: 0x10000130  b           . + 4 + (0x130 << 2)
label_2dcbc8:
    if (ctx->pc == 0x2DCBC8u) {
        ctx->pc = 0x2DCBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBC4u;
        // 0x2dcbc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCBCCu;
        goto label_2dcbcc;
    }
    ctx->pc = 0x2DCBC4u;
    {
        const bool branch_taken_0x2dcbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBC4u;
        // 0x2dcbc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcbc4) {
            ctx->pc = 0x2DD088u;
            goto label_2dd088;
        }
    }
    ctx->pc = 0x2DCBCCu;
label_2dcbcc:
    // 0x2dcbcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dcbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcbd0:
    // 0x2dcbd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dcbd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dcbd4:
    // 0x2dcbd4: 0xc0888a2  jal         func_222288
label_2dcbd8:
    if (ctx->pc == 0x2DCBD8u) {
        ctx->pc = 0x2DCBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBD4u;
        // 0x2dcbd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCBDCu;
        goto label_2dcbdc;
    }
    ctx->pc = 0x2DCBD4u;
    SET_GPR_U32(ctx, 31, 0x2DCBDCu);
    ctx->pc = 0x2DCBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCBD4u;
    // 0x2dcbd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2DCBD4u, 0x2DCBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCBDCu;
label_2dcbdc:
    // 0x2dcbdc: 0x5040ffe3  beql        $v0, $zero, . + 4 + (-0x1D << 2)
label_2dcbe0:
    if (ctx->pc == 0x2DCBE0u) {
        ctx->pc = 0x2DCBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBDCu;
        // 0x2dcbe0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCBE4u;
        goto label_2dcbe4;
    }
    ctx->pc = 0x2DCBDCu;
    {
        const bool branch_taken_0x2dcbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcbdc) {
            ctx->pc = 0x2DCBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCBDCu;
            // 0x2dcbe0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCB6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcb6c;
        }
    }
    ctx->pc = 0x2DCBE4u;
label_2dcbe4:
    // 0x2dcbe4: 0xc0a4e54  jal         func_293950
label_2dcbe8:
    if (ctx->pc == 0x2DCBE8u) {
        ctx->pc = 0x2DCBECu;
        goto label_2dcbec;
    }
    ctx->pc = 0x2DCBE4u;
    SET_GPR_U32(ctx, 31, 0x2DCBECu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DCBE4u, 0x2DCBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCBECu;
label_2dcbec:
    // 0x2dcbec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dcbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcbf0:
    // 0x2dcbf0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2dcbf4:
    if (ctx->pc == 0x2DCBF4u) {
        ctx->pc = 0x2DCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBF0u;
        // 0x2dcbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCBF8u;
        goto label_2dcbf8;
    }
    ctx->pc = 0x2DCBF0u;
    {
        const bool branch_taken_0x2dcbf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBF0u;
        // 0x2dcbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcbf0) {
            ctx->pc = 0x2DCC08u;
            goto label_2dcc08;
        }
    }
    ctx->pc = 0x2DCBF8u;
label_2dcbf8:
    // 0x2dcbf8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dcbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcbfc:
    // 0x2dcbfc: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2dcbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2dcc00:
    // 0x2dcc00: 0xc0acb08  jal         func_2B2C20
label_2dcc04:
    if (ctx->pc == 0x2DCC04u) {
        ctx->pc = 0x2DCC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC00u;
        // 0x2dcc04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCC08u;
        goto label_2dcc08;
    }
    ctx->pc = 0x2DCC00u;
    SET_GPR_U32(ctx, 31, 0x2DCC08u);
    ctx->pc = 0x2DCC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCC00u;
    // 0x2dcc04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x2DCC00u, 0x2DCC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC08u;
label_2dcc08:
    // 0x2dcc08: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dcc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcc0c:
    // 0x2dcc0c: 0xc0a35d6  jal         func_28D758
label_2dcc10:
    if (ctx->pc == 0x2DCC10u) {
        ctx->pc = 0x2DCC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC0Cu;
        // 0x2dcc10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCC14u;
        goto label_2dcc14;
    }
    ctx->pc = 0x2DCC0Cu;
    SET_GPR_U32(ctx, 31, 0x2DCC14u);
    ctx->pc = 0x2DCC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCC0Cu;
    // 0x2dcc10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DCC0Cu, 0x2DCC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC14u;
label_2dcc14:
    // 0x2dcc14: 0x1000011c  b           . + 4 + (0x11C << 2)
label_2dcc18:
    if (ctx->pc == 0x2DCC18u) {
        ctx->pc = 0x2DCC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC14u;
        // 0x2dcc18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCC1Cu;
        goto label_2dcc1c;
    }
    ctx->pc = 0x2DCC14u;
    {
        const bool branch_taken_0x2dcc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC14u;
        // 0x2dcc18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc14) {
            ctx->pc = 0x2DD088u;
            goto label_2dd088;
        }
    }
    ctx->pc = 0x2DCC1Cu;
label_2dcc1c:
    // 0x2dcc1c: 0x1052011a  beq         $v0, $s2, . + 4 + (0x11A << 2)
label_2dcc20:
    if (ctx->pc == 0x2DCC20u) {
        ctx->pc = 0x2DCC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC1Cu;
        // 0x2dcc20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCC24u;
        goto label_2dcc24;
    }
    ctx->pc = 0x2DCC1Cu;
    {
        const bool branch_taken_0x2dcc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2DCC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC1Cu;
        // 0x2dcc20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc1c) {
            ctx->pc = 0x2DD088u;
            goto label_2dd088;
        }
    }
    ctx->pc = 0x2DCC24u;
label_2dcc24:
    // 0x2dcc24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2dcc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcc28:
    // 0x2dcc28: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2dcc28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2dcc2c:
    // 0x2dcc2c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2dcc2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2dcc30:
    // 0x2dcc30: 0x10520115  beq         $v0, $s2, . + 4 + (0x115 << 2)
label_2dcc34:
    if (ctx->pc == 0x2DCC34u) {
        ctx->pc = 0x2DCC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC30u;
        // 0x2dcc34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCC38u;
        goto label_2dcc38;
    }
    ctx->pc = 0x2DCC30u;
    {
        const bool branch_taken_0x2dcc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2DCC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC30u;
        // 0x2dcc34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc30) {
            ctx->pc = 0x2DD088u;
            goto label_2dd088;
        }
    }
    ctx->pc = 0x2DCC38u;
label_2dcc38:
    // 0x2dcc38: 0x92220032  lbu         $v0, 0x32($s1)
    ctx->pc = 0x2dcc38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
label_2dcc3c:
    // 0x2dcc3c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2dcc40:
    if (ctx->pc == 0x2DCC40u) {
        ctx->pc = 0x2DCC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC3Cu;
        // 0x2dcc40: 0x8c620284  lw          $v0, 0x284($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCC44u;
        goto label_2dcc44;
    }
    ctx->pc = 0x2DCC3Cu;
    {
        const bool branch_taken_0x2dcc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcc3c) {
            ctx->pc = 0x2DCC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCC3Cu;
            // 0x2dcc40: 0x8c620284  lw          $v0, 0x284($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCC4Cu;
            goto label_2dcc4c;
        }
    }
    ctx->pc = 0x2DCC44u;
label_2dcc44:
    // 0x2dcc44: 0x10000110  b           . + 4 + (0x110 << 2)
label_2dcc48:
    if (ctx->pc == 0x2DCC48u) {
        ctx->pc = 0x2DCC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC44u;
        // 0x2dcc48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCC4Cu;
        goto label_2dcc4c;
    }
    ctx->pc = 0x2DCC44u;
    {
        const bool branch_taken_0x2dcc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC44u;
        // 0x2dcc48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc44) {
            ctx->pc = 0x2DD088u;
            goto label_2dd088;
        }
    }
    ctx->pc = 0x2DCC4Cu;
label_2dcc4c:
    // 0x2dcc4c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2dcc50:
    if (ctx->pc == 0x2DCC50u) {
        ctx->pc = 0x2DCC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC4Cu;
        // 0x2dcc50: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCC54u;
        goto label_2dcc54;
    }
    ctx->pc = 0x2DCC4Cu;
    {
        const bool branch_taken_0x2dcc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcc4c) {
            ctx->pc = 0x2DCC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCC4Cu;
            // 0x2dcc50: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCC5Cu;
            goto label_2dcc5c;
        }
    }
    ctx->pc = 0x2DCC54u;
label_2dcc54:
    // 0x2dcc54: 0x1000fffb  b           . + 4 + (-0x5 << 2)
label_2dcc58:
    if (ctx->pc == 0x2DCC58u) {
        ctx->pc = 0x2DCC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC54u;
        // 0x2dcc58: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCC5Cu;
        goto label_2dcc5c;
    }
    ctx->pc = 0x2DCC54u;
    {
        const bool branch_taken_0x2dcc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC54u;
        // 0x2dcc58: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc54) {
            ctx->pc = 0x2DCC44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcc44;
        }
    }
    ctx->pc = 0x2DCC5Cu;
label_2dcc5c:
    // 0x2dcc5c: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x2dcc5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_2dcc60:
    // 0x2dcc60: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_2dcc64:
    if (ctx->pc == 0x2DCC64u) {
        ctx->pc = 0x2DCC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC60u;
        // 0x2dcc64: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCC68u;
        goto label_2dcc68;
    }
    ctx->pc = 0x2DCC60u;
    {
        const bool branch_taken_0x2dcc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC60u;
        // 0x2dcc64: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc60) {
            ctx->pc = 0x2DCC44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcc44;
        }
    }
    ctx->pc = 0x2DCC68u;
label_2dcc68:
    // 0x2dcc68: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2dcc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2dcc6c:
    // 0x2dcc6c: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x2dcc6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_2dcc70:
    // 0x2dcc70: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x2dcc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_2dcc74:
    // 0x2dcc74: 0x60f809  jalr        $v1
label_2dcc78:
    if (ctx->pc == 0x2DCC78u) {
        ctx->pc = 0x2DCC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC74u;
        // 0x2dcc78: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCC7Cu;
        goto label_2dcc7c;
    }
    ctx->pc = 0x2DCC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DCC7Cu);
        ctx->pc = 0x2DCC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC74u;
        // 0x2dcc78: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCC74u, 0x2DCC7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DCC7Cu;
label_2dcc7c:
    // 0x2dcc7c: 0x7bc30000  lq          $v1, 0x0($fp)
    ctx->pc = 0x2dcc7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2dcc80:
    // 0x2dcc80: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2dcc80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2dcc84:
    // 0x2dcc84: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dcc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcc88:
    // 0x2dcc88: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2dcc88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2dcc8c:
    // 0x2dcc8c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2dcc8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2dcc90:
    // 0x2dcc90: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2dcc90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2dcc94:
    // 0x2dcc94: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2dcc94u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2dcc98:
    // 0x2dcc98: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2dcc98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2dcc9c:
    // 0x2dcc9c: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x2dcc9cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dcca0:
    // 0x2dcca0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2dcca0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2dcca4:
    // 0x2dcca4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2dcca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2dcca8:
    // 0x2dcca8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2dcca8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2dccac:
    // 0x2dccac: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2dccacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2dccb0:
    // 0x2dccb0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2dccb0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2dccb4:
    // 0x2dccb4: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x2dccb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2dccb8:
    // 0x2dccb8: 0x248401a4  addiu       $a0, $a0, 0x1A4
    ctx->pc = 0x2dccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
label_2dccbc:
    // 0x2dccbc: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x2dccbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_2dccc0:
    // 0x2dccc0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2dccc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2dccc4:
    // 0x2dccc4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2dccc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2dccc8:
    // 0x2dccc8: 0xc136b80  jal         func_4DAE00
label_2dcccc:
    if (ctx->pc == 0x2DCCCCu) {
        ctx->pc = 0x2DCCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCCC8u;
        // 0x2dcccc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCCD0u;
        goto label_2dccd0;
    }
    ctx->pc = 0x2DCCC8u;
    SET_GPR_U32(ctx, 31, 0x2DCCD0u);
    ctx->pc = 0x2DCCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCCC8u;
    // 0x2dcccc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2DCCC8u, 0x2DCCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCCD0u;
label_2dccd0:
    // 0x2dccd0: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_2dccd4:
    if (ctx->pc == 0x2DCCD4u) {
        ctx->pc = 0x2DCCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCCD0u;
        // 0x2dccd4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCCD8u;
        goto label_2dccd8;
    }
    ctx->pc = 0x2DCCD0u;
    {
        const bool branch_taken_0x2dccd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCCD0u;
        // 0x2dccd4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dccd0) {
            ctx->pc = 0x2DCE2Cu;
            goto label_2dce2c;
        }
    }
    ctx->pc = 0x2DCCD8u;
label_2dccd8:
    // 0x2dccd8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2dccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dccdc:
    // 0x2dccdc: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2dccdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2dcce0:
    // 0x2dcce0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2dcce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2dcce4:
    // 0x2dcce4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2dcce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2dcce8:
    // 0x2dcce8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2dcce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dccec:
    // 0x2dccec: 0x245701a4  addiu       $s7, $v0, 0x1A4
    ctx->pc = 0x2dccecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
label_2dccf0:
    // 0x2dccf0: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x2dccf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2dccf4:
    // 0x2dccf4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2dccf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2dccf8:
    // 0x2dccf8: 0xc137866  jal         func_4DE198
label_2dccfc:
    if (ctx->pc == 0x2DCCFCu) {
        ctx->pc = 0x2DCCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCCF8u;
        // 0x2dccfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCD00u;
        goto label_2dcd00;
    }
    ctx->pc = 0x2DCCF8u;
    SET_GPR_U32(ctx, 31, 0x2DCD00u);
    ctx->pc = 0x2DCCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCCF8u;
    // 0x2dccfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x2DCCF8u, 0x2DCD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD00u;
label_2dcd00:
    // 0x2dcd00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2dcd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2dcd04:
    // 0x2dcd04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2dcd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2dcd08:
    // 0x2dcd08: 0xc0e409a  jal         func_390268
label_2dcd0c:
    if (ctx->pc == 0x2DCD0Cu) {
        ctx->pc = 0x2DCD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD08u;
        // 0x2dcd0c: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCD10u;
        goto label_2dcd10;
    }
    ctx->pc = 0x2DCD08u;
    SET_GPR_U32(ctx, 31, 0x2DCD10u);
    ctx->pc = 0x2DCD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD08u;
    // 0x2dcd0c: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2DCD08u, 0x2DCD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD10u;
label_2dcd10:
    // 0x2dcd10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dcd10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcd14:
    // 0x2dcd14: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
label_2dcd18:
    if (ctx->pc == 0x2DCD18u) {
        ctx->pc = 0x2DCD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD14u;
        // 0x2dcd18: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCD1Cu;
        goto label_2dcd1c;
    }
    ctx->pc = 0x2DCD14u;
    {
        const bool branch_taken_0x2dcd14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd14) {
            ctx->pc = 0x2DCD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCD14u;
            // 0x2dcd18: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCD80u;
            goto label_2dcd80;
        }
    }
    ctx->pc = 0x2DCD1Cu;
label_2dcd1c:
    // 0x2dcd1c: 0xc087502  jal         func_21D408
label_2dcd20:
    if (ctx->pc == 0x2DCD20u) {
        ctx->pc = 0x2DCD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD1Cu;
        // 0x2dcd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCD24u;
        goto label_2dcd24;
    }
    ctx->pc = 0x2DCD1Cu;
    SET_GPR_U32(ctx, 31, 0x2DCD24u);
    ctx->pc = 0x2DCD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD1Cu;
    // 0x2dcd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DCD1Cu, 0x2DCD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD24u;
label_2dcd24:
    // 0x2dcd24: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dcd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcd28:
    // 0x2dcd28: 0xc0a408c  jal         func_290230
label_2dcd2c:
    if (ctx->pc == 0x2DCD2Cu) {
        ctx->pc = 0x2DCD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD28u;
        // 0x2dcd2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCD30u;
        goto label_2dcd30;
    }
    ctx->pc = 0x2DCD28u;
    SET_GPR_U32(ctx, 31, 0x2DCD30u);
    ctx->pc = 0x2DCD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD28u;
    // 0x2dcd2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2DCD28u, 0x2DCD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD30u;
label_2dcd30:
    // 0x2dcd30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dcd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dcd34:
    // 0x2dcd34: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
label_2dcd38:
    if (ctx->pc == 0x2DCD38u) {
        ctx->pc = 0x2DCD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD34u;
        // 0x2dcd38: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCD3Cu;
        goto label_2dcd3c;
    }
    ctx->pc = 0x2DCD34u;
    {
        const bool branch_taken_0x2dcd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DCD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD34u;
        // 0x2dcd38: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcd34) {
            ctx->pc = 0x2DCD7Cu;
            goto label_2dcd7c;
        }
    }
    ctx->pc = 0x2DCD3Cu;
label_2dcd3c:
    // 0x2dcd3c: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x2dcd3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2dcd40:
    // 0x2dcd40: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2dcd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2dcd44:
    // 0x2dcd44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dcd44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2dcd48:
    // 0x2dcd48: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2dcd48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2dcd4c:
    // 0x2dcd4c: 0xc0cdb38  jal         func_336CE0
label_2dcd50:
    if (ctx->pc == 0x2DCD50u) {
        ctx->pc = 0x2DCD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD4Cu;
        // 0x2dcd50: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCD54u;
        goto label_2dcd54;
    }
    ctx->pc = 0x2DCD4Cu;
    SET_GPR_U32(ctx, 31, 0x2DCD54u);
    ctx->pc = 0x2DCD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD4Cu;
    // 0x2dcd50: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DCD4Cu, 0x2DCD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD54u;
label_2dcd54:
    // 0x2dcd54: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2dcd54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dcd58:
    // 0x2dcd58: 0x0  nop
    ctx->pc = 0x2dcd58u;
    // NOP
label_2dcd5c:
    // 0x2dcd5c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_2dcd60:
    if (ctx->pc == 0x2DCD60u) {
        ctx->pc = 0x2DCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD5Cu;
        // 0x2dcd60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCD64u;
        goto label_2dcd64;
    }
    ctx->pc = 0x2DCD5Cu;
    {
        const bool branch_taken_0x2dcd5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dcd5c) {
            ctx->pc = 0x2DCD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCD5Cu;
            // 0x2dcd60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCD80u;
            goto label_2dcd80;
        }
    }
    ctx->pc = 0x2DCD64u;
label_2dcd64:
    // 0x2dcd64: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2dcd64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dcd68:
    // 0x2dcd68: 0x0  nop
    ctx->pc = 0x2dcd68u;
    // NOP
label_2dcd6c:
    // 0x2dcd6c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2dcd70:
    if (ctx->pc == 0x2DCD70u) {
        ctx->pc = 0x2DCD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD6Cu;
        // 0x2dcd70: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCD74u;
        goto label_2dcd74;
    }
    ctx->pc = 0x2DCD6Cu;
    {
        const bool branch_taken_0x2dcd6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dcd6c) {
            ctx->pc = 0x2DCD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCD6Cu;
            // 0x2dcd70: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCD80u;
            goto label_2dcd80;
        }
    }
    ctx->pc = 0x2DCD74u;
label_2dcd74:
    // 0x2dcd74: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2dcd74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcd78:
    // 0x2dcd78: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2dcd78u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2dcd7c:
    // 0x2dcd7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2dcd7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2dcd80:
    // 0x2dcd80: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x2dcd80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2dcd84:
    // 0x2dcd84: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_2dcd88:
    if (ctx->pc == 0x2DCD88u) {
        ctx->pc = 0x2DCD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD84u;
        // 0x2dcd88: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCD8Cu;
        goto label_2dcd8c;
    }
    ctx->pc = 0x2DCD84u;
    {
        const bool branch_taken_0x2dcd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD84u;
        // 0x2dcd88: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcd84) {
            ctx->pc = 0x2DCCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dccf8;
        }
    }
    ctx->pc = 0x2DCD8Cu;
label_2dcd8c:
    // 0x2dcd8c: 0x12800028  beqz        $s4, . + 4 + (0x28 << 2)
label_2dcd90:
    if (ctx->pc == 0x2DCD90u) {
        ctx->pc = 0x2DCD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD8Cu;
        // 0x2dcd90: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCD94u;
        goto label_2dcd94;
    }
    ctx->pc = 0x2DCD8Cu;
    {
        const bool branch_taken_0x2dcd8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD8Cu;
        // 0x2dcd90: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcd8c) {
            ctx->pc = 0x2DCE30u;
            goto label_2dce30;
        }
    }
    ctx->pc = 0x2DCD94u;
label_2dcd94:
    // 0x2dcd94: 0xc08a200  jal         func_228800
label_2dcd98:
    if (ctx->pc == 0x2DCD98u) {
        ctx->pc = 0x2DCD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD94u;
        // 0x2dcd98: 0x8e8400cc  lw          $a0, 0xCC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCD9Cu;
        goto label_2dcd9c;
    }
    ctx->pc = 0x2DCD94u;
    SET_GPR_U32(ctx, 31, 0x2DCD9Cu);
    ctx->pc = 0x2DCD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD94u;
    // 0x2dcd98: 0x8e8400cc  lw          $a0, 0xCC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2DCD94u, 0x2DCD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD9Cu;
label_2dcd9c:
    // 0x2dcd9c: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x2dcd9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_2dcda0:
    // 0x2dcda0: 0x3863000d  xori        $v1, $v1, 0xD
    ctx->pc = 0x2dcda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)13);
label_2dcda4:
    // 0x2dcda4: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_2dcda8:
    if (ctx->pc == 0x2DCDA8u) {
        ctx->pc = 0x2DCDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDA4u;
        // 0x2dcda8: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCDACu;
        goto label_2dcdac;
    }
    ctx->pc = 0x2DCDA4u;
    {
        const bool branch_taken_0x2dcda4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDA4u;
        // 0x2dcda8: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcda4) {
            ctx->pc = 0x2DCE2Cu;
            goto label_2dce2c;
        }
    }
    ctx->pc = 0x2DCDACu;
label_2dcdac:
    // 0x2dcdac: 0x86850092  lh          $a1, 0x92($s4)
    ctx->pc = 0x2dcdacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2dcdb0:
    // 0x2dcdb0: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2dcdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2dcdb4:
    // 0x2dcdb4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2dcdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2dcdb8:
    // 0x2dcdb8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2dcdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2dcdbc:
    // 0x2dcdbc: 0xc0cdb38  jal         func_336CE0
label_2dcdc0:
    if (ctx->pc == 0x2DCDC0u) {
        ctx->pc = 0x2DCDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDBCu;
        // 0x2dcdc0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCDC4u;
        goto label_2dcdc4;
    }
    ctx->pc = 0x2DCDBCu;
    SET_GPR_U32(ctx, 31, 0x2DCDC4u);
    ctx->pc = 0x2DCDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCDBCu;
    // 0x2dcdc0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DCDBCu, 0x2DCDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCDC4u;
label_2dcdc4:
    // 0x2dcdc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dcdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2dcdc8:
    // 0x2dcdc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dcdc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dcdcc:
    // 0x2dcdcc: 0x0  nop
    ctx->pc = 0x2dcdccu;
    // NOP
label_2dcdd0:
    // 0x2dcdd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dcdd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dcdd4:
    // 0x2dcdd4: 0x0  nop
    ctx->pc = 0x2dcdd4u;
    // NOP
label_2dcdd8:
    // 0x2dcdd8: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_2dcddc:
    if (ctx->pc == 0x2DCDDCu) {
        ctx->pc = 0x2DCDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDD8u;
        // 0x2dcddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCDE0u;
        goto label_2dcde0;
    }
    ctx->pc = 0x2DCDD8u;
    {
        const bool branch_taken_0x2dcdd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DCDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDD8u;
        // 0x2dcddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcdd8) {
            ctx->pc = 0x2DCE2Cu;
            goto label_2dce2c;
        }
    }
    ctx->pc = 0x2DCDE0u;
label_2dcde0:
    // 0x2dcde0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2dcde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dcde4:
    // 0x2dcde4: 0xc0891de  jal         func_224778
label_2dcde8:
    if (ctx->pc == 0x2DCDE8u) {
        ctx->pc = 0x2DCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDE4u;
        // 0x2dcde8: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCDECu;
        goto label_2dcdec;
    }
    ctx->pc = 0x2DCDE4u;
    SET_GPR_U32(ctx, 31, 0x2DCDECu);
    ctx->pc = 0x2DCDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCDE4u;
    // 0x2dcde8: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2DCDE4u, 0x2DCDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCDECu;
label_2dcdec:
    // 0x2dcdec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dcdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dcdf0:
    // 0x2dcdf0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_2dcdf4:
    if (ctx->pc == 0x2DCDF4u) {
        ctx->pc = 0x2DCDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDF0u;
        // 0x2dcdf4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCDF8u;
        goto label_2dcdf8;
    }
    ctx->pc = 0x2DCDF0u;
    {
        const bool branch_taken_0x2dcdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DCDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDF0u;
        // 0x2dcdf4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcdf0) {
            ctx->pc = 0x2DCE30u;
            goto label_2dce30;
        }
    }
    ctx->pc = 0x2DCDF8u;
label_2dcdf8:
    // 0x2dcdf8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dcdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcdfc:
    // 0x2dcdfc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2dcdfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dce00:
    // 0x2dce00: 0xc0a33f8  jal         func_28CFE0
label_2dce04:
    if (ctx->pc == 0x2DCE04u) {
        ctx->pc = 0x2DCE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE00u;
        // 0x2dce04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE08u;
        goto label_2dce08;
    }
    ctx->pc = 0x2DCE00u;
    SET_GPR_U32(ctx, 31, 0x2DCE08u);
    ctx->pc = 0x2DCE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCE00u;
    // 0x2dce04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2DCE00u, 0x2DCE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE08u;
label_2dce08:
    // 0x2dce08: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dce08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dce0c:
    // 0x2dce0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2dce0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dce10:
    // 0x2dce10: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2dce10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2dce14:
    // 0x2dce14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dce14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dce18:
    // 0x2dce18: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x2dce18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2dce1c:
    // 0x2dce1c: 0xc0a3892  jal         func_28E248
label_2dce20:
    if (ctx->pc == 0x2DCE20u) {
        ctx->pc = 0x2DCE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE1Cu;
        // 0x2dce20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE24u;
        goto label_2dce24;
    }
    ctx->pc = 0x2DCE1Cu;
    SET_GPR_U32(ctx, 31, 0x2DCE24u);
    ctx->pc = 0x2DCE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCE1Cu;
    // 0x2dce20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2DCE1Cu, 0x2DCE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE24u;
label_2dce24:
    // 0x2dce24: 0x10000098  b           . + 4 + (0x98 << 2)
label_2dce28:
    if (ctx->pc == 0x2DCE28u) {
        ctx->pc = 0x2DCE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE24u;
        // 0x2dce28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE2Cu;
        goto label_2dce2c;
    }
    ctx->pc = 0x2DCE24u;
    {
        const bool branch_taken_0x2dce24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE24u;
        // 0x2dce28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dce24) {
            ctx->pc = 0x2DD088u;
            goto label_2dd088;
        }
    }
    ctx->pc = 0x2DCE2Cu;
label_2dce2c:
    // 0x2dce2c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2dce2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dce30:
    // 0x2dce30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dce30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dce34:
    // 0x2dce34: 0xafb00054  sw          $s0, 0x54($sp)
    ctx->pc = 0x2dce34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
label_2dce38:
    // 0x2dce38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dce38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2dce3c:
    // 0x2dce3c: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x2dce3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_2dce40:
    // 0x2dce40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dce40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dce44:
    // 0x2dce44: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x2dce44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_2dce48:
    // 0x2dce48: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2dce48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2dce4c:
    // 0x2dce4c: 0xc0888dc  jal         func_222370
label_2dce50:
    if (ctx->pc == 0x2DCE50u) {
        ctx->pc = 0x2DCE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE4Cu;
        // 0x2dce50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE54u;
        goto label_2dce54;
    }
    ctx->pc = 0x2DCE4Cu;
    SET_GPR_U32(ctx, 31, 0x2DCE54u);
    ctx->pc = 0x2DCE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCE4Cu;
    // 0x2dce50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222370u, 0x2DCE4Cu, 0x2DCE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE54u;
label_2dce54:
    // 0x2dce54: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x2dce54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dce58:
    // 0x2dce58: 0x0  nop
    ctx->pc = 0x2dce58u;
    // NOP
label_2dce5c:
    // 0x2dce5c: 0x4500006e  bc1f        . + 4 + (0x6E << 2)
label_2dce60:
    if (ctx->pc == 0x2DCE60u) {
        ctx->pc = 0x2DCE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE5Cu;
        // 0x2dce60: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE64u;
        goto label_2dce64;
    }
    ctx->pc = 0x2DCE5Cu;
    {
        const bool branch_taken_0x2dce5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DCE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE5Cu;
        // 0x2dce60: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dce5c) {
            ctx->pc = 0x2DD018u;
            goto label_2dd018;
        }
    }
    ctx->pc = 0x2DCE64u;
label_2dce64:
    // 0x2dce64: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2dce64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2dce68:
    // 0x2dce68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dce68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dce6c:
    // 0x2dce6c: 0xc089998  jal         func_226660
label_2dce70:
    if (ctx->pc == 0x2DCE70u) {
        ctx->pc = 0x2DCE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE6Cu;
        // 0x2dce70: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE74u;
        goto label_2dce74;
    }
    ctx->pc = 0x2DCE6Cu;
    SET_GPR_U32(ctx, 31, 0x2DCE74u);
    ctx->pc = 0x2DCE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCE6Cu;
    // 0x2dce70: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2DCE6Cu, 0x2DCE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE74u;
label_2dce74:
    // 0x2dce74: 0x10500084  beq         $v0, $s0, . + 4 + (0x84 << 2)
label_2dce78:
    if (ctx->pc == 0x2DCE78u) {
        ctx->pc = 0x2DCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE74u;
        // 0x2dce78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE7Cu;
        goto label_2dce7c;
    }
    ctx->pc = 0x2DCE74u;
    {
        const bool branch_taken_0x2dce74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2DCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE74u;
        // 0x2dce78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dce74) {
            ctx->pc = 0x2DD088u;
            goto label_2dd088;
        }
    }
    ctx->pc = 0x2DCE7Cu;
label_2dce7c:
    // 0x2dce7c: 0x56500040  bnel        $s2, $s0, . + 4 + (0x40 << 2)
label_2dce80:
    if (ctx->pc == 0x2DCE80u) {
        ctx->pc = 0x2DCE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE7Cu;
        // 0x2dce80: 0x86640092  lh          $a0, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE84u;
        goto label_2dce84;
    }
    ctx->pc = 0x2DCE7Cu;
    {
        const bool branch_taken_0x2dce7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x2dce7c) {
            ctx->pc = 0x2DCE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCE7Cu;
            // 0x2dce80: 0x86640092  lh          $a0, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCF80u;
            goto label_2dcf80;
        }
    }
    ctx->pc = 0x2DCE84u;
label_2dce84:
    // 0x2dce84: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x2dce84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2dce88:
    // 0x2dce88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dce8c:
    // 0x2dce8c: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
label_2dce90:
    if (ctx->pc == 0x2DCE90u) {
        ctx->pc = 0x2DCE94u;
        goto label_2dce94;
    }
    ctx->pc = 0x2DCE8Cu;
    {
        const bool branch_taken_0x2dce8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dce8c) {
            ctx->pc = 0x2DCF4Cu;
            goto label_2dcf4c;
        }
    }
    ctx->pc = 0x2DCE94u;
label_2dce94:
    // 0x2dce94: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x2dce94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
label_2dce98:
    // 0x2dce98: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x2dce98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
label_2dce9c:
    // 0x2dce9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dce9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dcea0:
    // 0x2dcea0: 0x0  nop
    ctx->pc = 0x2dcea0u;
    // NOP
label_2dcea4:
    // 0x2dcea4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2dcea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dcea8:
    // 0x2dcea8: 0x0  nop
    ctx->pc = 0x2dcea8u;
    // NOP
label_2dceac:
    // 0x2dceac: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_2dceb0:
    if (ctx->pc == 0x2DCEB0u) {
        ctx->pc = 0x2DCEB4u;
        goto label_2dceb4;
    }
    ctx->pc = 0x2DCEACu;
    {
        const bool branch_taken_0x2dceac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dceac) {
            ctx->pc = 0x2DCEF4u;
            goto label_2dcef4;
        }
    }
    ctx->pc = 0x2DCEB4u;
label_2dceb4:
    // 0x2dceb4: 0xc0a367c  jal         func_28D9F0
label_2dceb8:
    if (ctx->pc == 0x2DCEB8u) {
        ctx->pc = 0x2DCEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCEB4u;
        // 0x2dceb8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCEBCu;
        goto label_2dcebc;
    }
    ctx->pc = 0x2DCEB4u;
    SET_GPR_U32(ctx, 31, 0x2DCEBCu);
    ctx->pc = 0x2DCEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCEB4u;
    // 0x2dceb8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DCEB4u, 0x2DCEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCEBCu;
label_2dcebc:
    // 0x2dcebc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dcebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcec0:
    // 0x2dcec0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2dcec4:
    if (ctx->pc == 0x2DCEC4u) {
        ctx->pc = 0x2DCEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCEC0u;
        // 0x2dcec4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCEC8u;
        goto label_2dcec8;
    }
    ctx->pc = 0x2DCEC0u;
    {
        const bool branch_taken_0x2dcec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCEC0u;
        // 0x2dcec4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcec0) {
            ctx->pc = 0x2DCEF4u;
            goto label_2dcef4;
        }
    }
    ctx->pc = 0x2DCEC8u;
label_2dcec8:
    // 0x2dcec8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dcec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcecc:
    // 0x2dcecc: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2dceccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2dced0:
    // 0x2dced0: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x2dced0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2dced4:
    // 0x2dced4: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x2dced4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
label_2dced8:
    // 0x2dced8: 0x342151eb  ori         $at, $at, 0x51EB
    ctx->pc = 0x2dced8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20971);
label_2dcedc:
    // 0x2dcedc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dcedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dcee0:
    // 0x2dcee0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2dcee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2dcee4:
    // 0x2dcee4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dcee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dcee8:
    // 0x2dcee8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dcee8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dceec:
    // 0x2dceec: 0xc0bee7a  jal         func_2FB9E8
label_2dcef0:
    if (ctx->pc == 0x2DCEF0u) {
        ctx->pc = 0x2DCEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCEECu;
        // 0x2dcef0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCEF4u;
        goto label_2dcef4;
    }
    ctx->pc = 0x2DCEECu;
    SET_GPR_U32(ctx, 31, 0x2DCEF4u);
    ctx->pc = 0x2DCEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCEECu;
    // 0x2dcef0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2DCEECu, 0x2DCEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCEF4u;
label_2dcef4:
    // 0x2dcef4: 0xc0a367c  jal         func_28D9F0
label_2dcef8:
    if (ctx->pc == 0x2DCEF8u) {
        ctx->pc = 0x2DCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCEF4u;
        // 0x2dcef8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCEFCu;
        goto label_2dcefc;
    }
    ctx->pc = 0x2DCEF4u;
    SET_GPR_U32(ctx, 31, 0x2DCEFCu);
    ctx->pc = 0x2DCEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCEF4u;
    // 0x2dcef8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DCEF4u, 0x2DCEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCEFCu;
label_2dcefc:
    // 0x2dcefc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dcefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcf00:
    // 0x2dcf00: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_2dcf04:
    if (ctx->pc == 0x2DCF04u) {
        ctx->pc = 0x2DCF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF00u;
        // 0x2dcf04: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF08u;
        goto label_2dcf08;
    }
    ctx->pc = 0x2DCF00u;
    {
        const bool branch_taken_0x2dcf00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcf00) {
            ctx->pc = 0x2DCF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCF00u;
            // 0x2dcf04: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCF2Cu;
            goto label_2dcf2c;
        }
    }
    ctx->pc = 0x2DCF08u;
label_2dcf08:
    // 0x2dcf08: 0xc0884f6  jal         func_2213D8
label_2dcf0c:
    if (ctx->pc == 0x2DCF0Cu) {
        ctx->pc = 0x2DCF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF08u;
        // 0x2dcf0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF10u;
        goto label_2dcf10;
    }
    ctx->pc = 0x2DCF08u;
    SET_GPR_U32(ctx, 31, 0x2DCF10u);
    ctx->pc = 0x2DCF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF08u;
    // 0x2dcf0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2DCF08u, 0x2DCF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF10u;
label_2dcf10:
    // 0x2dcf10: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dcf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcf14:
    // 0x2dcf14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcf18:
    // 0x2dcf18: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2dcf18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2dcf1c:
    // 0x2dcf1c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2dcf1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2dcf20:
    // 0x2dcf20: 0xc0bf800  jal         func_2FE000
label_2dcf24:
    if (ctx->pc == 0x2DCF24u) {
        ctx->pc = 0x2DCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF20u;
        // 0x2dcf24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF28u;
        goto label_2dcf28;
    }
    ctx->pc = 0x2DCF20u;
    SET_GPR_U32(ctx, 31, 0x2DCF28u);
    ctx->pc = 0x2DCF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF20u;
    // 0x2dcf24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2DCF20u, 0x2DCF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF28u;
label_2dcf28:
    // 0x2dcf28: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dcf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcf2c:
    // 0x2dcf2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2dcf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dcf30:
    // 0x2dcf30: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2dcf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2dcf34:
    // 0x2dcf34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dcf34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dcf38:
    // 0x2dcf38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dcf38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dcf3c:
    // 0x2dcf3c: 0xc0a3892  jal         func_28E248
label_2dcf40:
    if (ctx->pc == 0x2DCF40u) {
        ctx->pc = 0x2DCF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF3Cu;
        // 0x2dcf40: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF44u;
        goto label_2dcf44;
    }
    ctx->pc = 0x2DCF3Cu;
    SET_GPR_U32(ctx, 31, 0x2DCF44u);
    ctx->pc = 0x2DCF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF3Cu;
    // 0x2dcf40: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2DCF3Cu, 0x2DCF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF44u;
label_2dcf44:
    // 0x2dcf44: 0x10000050  b           . + 4 + (0x50 << 2)
label_2dcf48:
    if (ctx->pc == 0x2DCF48u) {
        ctx->pc = 0x2DCF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF44u;
        // 0x2dcf48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF4Cu;
        goto label_2dcf4c;
    }
    ctx->pc = 0x2DCF44u;
    {
        const bool branch_taken_0x2dcf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF44u;
        // 0x2dcf48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf44) {
            ctx->pc = 0x2DD088u;
            goto label_2dd088;
        }
    }
    ctx->pc = 0x2DCF4Cu;
label_2dcf4c:
    // 0x2dcf4c: 0xc0a367c  jal         func_28D9F0
label_2dcf50:
    if (ctx->pc == 0x2DCF50u) {
        ctx->pc = 0x2DCF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF4Cu;
        // 0x2dcf50: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF54u;
        goto label_2dcf54;
    }
    ctx->pc = 0x2DCF4Cu;
    SET_GPR_U32(ctx, 31, 0x2DCF54u);
    ctx->pc = 0x2DCF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF4Cu;
    // 0x2dcf50: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DCF4Cu, 0x2DCF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF54u;
label_2dcf54:
    // 0x2dcf54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2dcf58:
    if (ctx->pc == 0x2DCF58u) {
        ctx->pc = 0x2DCF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF54u;
        // 0x2dcf58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF5Cu;
        goto label_2dcf5c;
    }
    ctx->pc = 0x2DCF54u;
    {
        const bool branch_taken_0x2dcf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF54u;
        // 0x2dcf58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf54) {
            ctx->pc = 0x2DCF6Cu;
            goto label_2dcf6c;
        }
    }
    ctx->pc = 0x2DCF5Cu;
label_2dcf5c:
    // 0x2dcf5c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dcf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcf60:
    // 0x2dcf60: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2dcf60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dcf64:
    // 0x2dcf64: 0xc0bebe6  jal         func_2FAF98
label_2dcf68:
    if (ctx->pc == 0x2DCF68u) {
        ctx->pc = 0x2DCF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF64u;
        // 0x2dcf68: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF6Cu;
        goto label_2dcf6c;
    }
    ctx->pc = 0x2DCF64u;
    SET_GPR_U32(ctx, 31, 0x2DCF6Cu);
    ctx->pc = 0x2DCF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF64u;
    // 0x2dcf68: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF98u, 0x2DCF64u, 0x2DCF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF6Cu;
label_2dcf6c:
    // 0x2dcf6c: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2dcf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2dcf70:
    // 0x2dcf70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dcf70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dcf74:
    // 0x2dcf74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dcf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2dcf78:
    // 0x2dcf78: 0x10000043  b           . + 4 + (0x43 << 2)
label_2dcf7c:
    if (ctx->pc == 0x2DCF7Cu) {
        ctx->pc = 0x2DCF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF78u;
        // 0x2dcf7c: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF80u;
        goto label_2dcf80;
    }
    ctx->pc = 0x2DCF78u;
    {
        const bool branch_taken_0x2dcf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF78u;
        // 0x2dcf7c: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf78) {
            ctx->pc = 0x2DD088u;
            goto label_2dd088;
        }
    }
    ctx->pc = 0x2DCF80u;
label_2dcf80:
    // 0x2dcf80: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2dcf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2dcf84:
    // 0x2dcf84: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2dcf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2dcf88:
    // 0x2dcf88: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2dcf88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2dcf8c:
    // 0x2dcf8c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2dcf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2dcf90:
    // 0x2dcf90: 0xc0cd7d2  jal         func_335F48
label_2dcf94:
    if (ctx->pc == 0x2DCF94u) {
        ctx->pc = 0x2DCF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF90u;
        // 0x2dcf94: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF98u;
        goto label_2dcf98;
    }
    ctx->pc = 0x2DCF90u;
    SET_GPR_U32(ctx, 31, 0x2DCF98u);
    ctx->pc = 0x2DCF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF90u;
    // 0x2dcf94: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2DCF90u, 0x2DCF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF98u;
label_2dcf98:
    // 0x2dcf98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2dcf98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2dcf9c:
    // 0x2dcf9c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2dcf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2dcfa0:
    // 0x2dcfa0: 0xc0cd780  jal         func_335E00
label_2dcfa4:
    if (ctx->pc == 0x2DCFA4u) {
        ctx->pc = 0x2DCFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFA0u;
        // 0x2dcfa4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFA8u;
        goto label_2dcfa8;
    }
    ctx->pc = 0x2DCFA0u;
    SET_GPR_U32(ctx, 31, 0x2DCFA8u);
    ctx->pc = 0x2DCFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCFA0u;
    // 0x2dcfa4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2DCFA0u, 0x2DCFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCFA8u;
label_2dcfa8:
    // 0x2dcfa8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dcfa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2dcfac:
    // 0x2dcfac: 0xc0cdd2e  jal         func_3374B8
label_2dcfb0:
    if (ctx->pc == 0x2DCFB0u) {
        ctx->pc = 0x2DCFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFACu;
        // 0x2dcfb0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFB4u;
        goto label_2dcfb4;
    }
    ctx->pc = 0x2DCFACu;
    SET_GPR_U32(ctx, 31, 0x2DCFB4u);
    ctx->pc = 0x2DCFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCFACu;
    // 0x2dcfb0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2DCFACu, 0x2DCFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCFB4u;
label_2dcfb4:
    // 0x2dcfb4: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2dcfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2dcfb8:
    // 0x2dcfb8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2dcfb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2dcfbc:
    // 0x2dcfbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dcfbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dcfc0:
    // 0x2dcfc0: 0x0  nop
    ctx->pc = 0x2dcfc0u;
    // NOP
label_2dcfc4:
    // 0x2dcfc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dcfc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dcfc8:
    // 0x2dcfc8: 0x0  nop
    ctx->pc = 0x2dcfc8u;
    // NOP
label_2dcfcc:
    // 0x2dcfcc: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_2dcfd0:
    if (ctx->pc == 0x2DCFD0u) {
        ctx->pc = 0x2DCFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFCCu;
        // 0x2dcfd0: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFD4u;
        goto label_2dcfd4;
    }
    ctx->pc = 0x2DCFCCu;
    {
        const bool branch_taken_0x2dcfcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dcfcc) {
            ctx->pc = 0x2DCFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCFCCu;
            // 0x2dcfd0: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD010u;
            goto label_2dd010;
        }
    }
    ctx->pc = 0x2DCFD4u;
label_2dcfd4:
    // 0x2dcfd4: 0xc0a367c  jal         func_28D9F0
label_2dcfd8:
    if (ctx->pc == 0x2DCFD8u) {
        ctx->pc = 0x2DCFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFD4u;
        // 0x2dcfd8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFDCu;
        goto label_2dcfdc;
    }
    ctx->pc = 0x2DCFD4u;
    SET_GPR_U32(ctx, 31, 0x2DCFDCu);
    ctx->pc = 0x2DCFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCFD4u;
    // 0x2dcfd8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DCFD4u, 0x2DCFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCFDCu;
label_2dcfdc:
    // 0x2dcfdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dcfdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcfe0:
    // 0x2dcfe0: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
label_2dcfe4:
    if (ctx->pc == 0x2DCFE4u) {
        ctx->pc = 0x2DCFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFE0u;
        // 0x2dcfe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFE8u;
        goto label_2dcfe8;
    }
    ctx->pc = 0x2DCFE0u;
    {
        const bool branch_taken_0x2dcfe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFE0u;
        // 0x2dcfe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcfe0) {
            ctx->pc = 0x2DD088u;
            goto label_2dd088;
        }
    }
    ctx->pc = 0x2DCFE8u;
label_2dcfe8:
    // 0x2dcfe8: 0xc0884f6  jal         func_2213D8
label_2dcfec:
    if (ctx->pc == 0x2DCFECu) {
        ctx->pc = 0x2DCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFE8u;
        // 0x2dcfec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFF0u;
        goto label_2dcff0;
    }
    ctx->pc = 0x2DCFE8u;
    SET_GPR_U32(ctx, 31, 0x2DCFF0u);
    ctx->pc = 0x2DCFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCFE8u;
    // 0x2dcfec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2DCFE8u, 0x2DCFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCFF0u;
label_2dcff0:
    // 0x2dcff0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dcff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dcff4:
    // 0x2dcff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcff8:
    // 0x2dcff8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2dcff8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2dcffc:
    // 0x2dcffc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2dcffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2dd000:
    // 0x2dd000: 0xc0bf800  jal         func_2FE000
label_2dd004:
    if (ctx->pc == 0x2DD004u) {
        ctx->pc = 0x2DD004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD000u;
        // 0x2dd004: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD008u;
        goto label_2dd008;
    }
    ctx->pc = 0x2DD000u;
    SET_GPR_U32(ctx, 31, 0x2DD008u);
    ctx->pc = 0x2DD004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD000u;
    // 0x2dd004: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2DD000u, 0x2DD008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD008u;
label_2dd008:
    // 0x2dd008: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2dd00c:
    if (ctx->pc == 0x2DD00Cu) {
        ctx->pc = 0x2DD00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD008u;
        // 0x2dd00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD010u;
        goto label_2dd010;
    }
    ctx->pc = 0x2DD008u;
    {
        const bool branch_taken_0x2dd008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD008u;
        // 0x2dd00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd008) {
            ctx->pc = 0x2DD088u;
            goto label_2dd088;
        }
    }
    ctx->pc = 0x2DD010u;
label_2dd010:
    // 0x2dd010: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dd010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2dd014:
    // 0x2dd014: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2dd014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_2dd018:
    // 0x2dd018: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dd018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dd01c:
    // 0x2dd01c: 0xc08bfbc  jal         func_22FEF0
label_2dd020:
    if (ctx->pc == 0x2DD020u) {
        ctx->pc = 0x2DD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD01Cu;
        // 0x2dd020: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD024u;
        goto label_2dd024;
    }
    ctx->pc = 0x2DD01Cu;
    SET_GPR_U32(ctx, 31, 0x2DD024u);
    ctx->pc = 0x2DD020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD01Cu;
    // 0x2dd020: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2DD01Cu, 0x2DD024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD024u;
label_2dd024:
    // 0x2dd024: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2dd024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2dd028:
    // 0x2dd028: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd02c:
    // 0x2dd02c: 0x0  nop
    ctx->pc = 0x2dd02cu;
    // NOP
label_2dd030:
    // 0x2dd030: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2dd030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_2dd034:
    // 0x2dd034: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x2dd034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd038:
    // 0x2dd038: 0x0  nop
    ctx->pc = 0x2dd038u;
    // NOP
label_2dd03c:
    // 0x2dd03c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2dd040:
    if (ctx->pc == 0x2DD040u) {
        ctx->pc = 0x2DD040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD03Cu;
        // 0x2dd040: 0x8e300028  lw          $s0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD044u;
        goto label_2dd044;
    }
    ctx->pc = 0x2DD03Cu;
    {
        const bool branch_taken_0x2dd03c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd03c) {
            ctx->pc = 0x2DD040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD03Cu;
            // 0x2dd040: 0x8e300028  lw          $s0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD044u;
            goto label_2dd044;
        }
    }
    ctx->pc = 0x2DD044u;
label_2dd044:
    // 0x2dd044: 0xc0a367c  jal         func_28D9F0
label_2dd048:
    if (ctx->pc == 0x2DD048u) {
        ctx->pc = 0x2DD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD044u;
        // 0x2dd048: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD04Cu;
        goto label_2dd04c;
    }
    ctx->pc = 0x2DD044u;
    SET_GPR_U32(ctx, 31, 0x2DD04Cu);
    ctx->pc = 0x2DD048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD044u;
    // 0x2dd048: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DD044u, 0x2DD04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD04Cu;
label_2dd04c:
    // 0x2dd04c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dd04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd050:
    // 0x2dd050: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2dd054:
    if (ctx->pc == 0x2DD054u) {
        ctx->pc = 0x2DD054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD050u;
        // 0x2dd054: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD058u;
        goto label_2dd058;
    }
    ctx->pc = 0x2DD050u;
    {
        const bool branch_taken_0x2dd050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD050u;
        // 0x2dd054: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd050) {
            ctx->pc = 0x2DD084u;
            goto label_2dd084;
        }
    }
    ctx->pc = 0x2DD058u;
label_2dd058:
    // 0x2dd058: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dd058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dd05c:
    // 0x2dd05c: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2dd05cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2dd060:
    // 0x2dd060: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x2dd060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2dd064:
    // 0x2dd064: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x2dd064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
label_2dd068:
    // 0x2dd068: 0x342151eb  ori         $at, $at, 0x51EB
    ctx->pc = 0x2dd068u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20971);
label_2dd06c:
    // 0x2dd06c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dd06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dd070:
    // 0x2dd070: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2dd070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd074:
    // 0x2dd074: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dd074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd078:
    // 0x2dd078: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dd078u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd07c:
    // 0x2dd07c: 0xc0bee7a  jal         func_2FB9E8
label_2dd080:
    if (ctx->pc == 0x2DD080u) {
        ctx->pc = 0x2DD080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD07Cu;
        // 0x2dd080: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD084u;
        goto label_2dd084;
    }
    ctx->pc = 0x2DD07Cu;
    SET_GPR_U32(ctx, 31, 0x2DD084u);
    ctx->pc = 0x2DD080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD07Cu;
    // 0x2dd080: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2DD07Cu, 0x2DD084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD084u;
label_2dd084:
    // 0x2dd084: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dd084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd088:
    // 0x2dd088: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2dd088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2dd08c:
    // 0x2dd08c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2dd08cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2dd090:
    // 0x2dd090: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2dd090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2dd094:
    // 0x2dd094: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2dd094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2dd098:
    // 0x2dd098: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2dd098u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2dd09c:
    // 0x2dd09c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2dd09cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2dd0a0:
    // 0x2dd0a0: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2dd0a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2dd0a4:
    // 0x2dd0a4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2dd0a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2dd0a8:
    // 0x2dd0a8: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2dd0a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2dd0ac:
    // 0x2dd0ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2dd0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2dd0b0:
    // 0x2dd0b0: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x2dd0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2dd0b4:
    // 0x2dd0b4: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2dd0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2dd0b8:
    // 0x2dd0b8: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2dd0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dd0bc:
    // 0x2dd0bc: 0x3e00008  jr          $ra
label_2dd0c0:
    if (ctx->pc == 0x2DD0C0u) {
        ctx->pc = 0x2DD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0BCu;
        // 0x2dd0c0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0C4u;
        goto label_2dd0c4;
    }
    ctx->pc = 0x2DD0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0BCu;
        // 0x2dd0c0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD0C4u;
label_2dd0c4:
    // 0x2dd0c4: 0x0  nop
    ctx->pc = 0x2dd0c4u;
    // NOP
    ctx->pc = 0x2dd0c8u;
}
