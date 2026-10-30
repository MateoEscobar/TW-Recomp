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

// Function: sub_001ECAE0
// Address: 0x1ecae0 - 0x1eecc0
void sub_001ECAE0_0x1ecae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECAE0_0x1ecae0");
#endif

    switch (ctx->pc) {
        case 0x1ecae0u: goto label_1ecae0;
        case 0x1ecae4u: goto label_1ecae4;
        case 0x1ecae8u: goto label_1ecae8;
        case 0x1ecaecu: goto label_1ecaec;
        case 0x1ecaf0u: goto label_1ecaf0;
        case 0x1ecaf4u: goto label_1ecaf4;
        case 0x1ecaf8u: goto label_1ecaf8;
        case 0x1ecafcu: goto label_1ecafc;
        case 0x1ecb00u: goto label_1ecb00;
        case 0x1ecb04u: goto label_1ecb04;
        case 0x1ecb08u: goto label_1ecb08;
        case 0x1ecb0cu: goto label_1ecb0c;
        case 0x1ecb10u: goto label_1ecb10;
        case 0x1ecb14u: goto label_1ecb14;
        case 0x1ecb18u: goto label_1ecb18;
        case 0x1ecb1cu: goto label_1ecb1c;
        case 0x1ecb20u: goto label_1ecb20;
        case 0x1ecb24u: goto label_1ecb24;
        case 0x1ecb28u: goto label_1ecb28;
        case 0x1ecb2cu: goto label_1ecb2c;
        case 0x1ecb30u: goto label_1ecb30;
        case 0x1ecb34u: goto label_1ecb34;
        case 0x1ecb38u: goto label_1ecb38;
        case 0x1ecb3cu: goto label_1ecb3c;
        case 0x1ecb40u: goto label_1ecb40;
        case 0x1ecb44u: goto label_1ecb44;
        case 0x1ecb48u: goto label_1ecb48;
        case 0x1ecb4cu: goto label_1ecb4c;
        case 0x1ecb50u: goto label_1ecb50;
        case 0x1ecb54u: goto label_1ecb54;
        case 0x1ecb58u: goto label_1ecb58;
        case 0x1ecb5cu: goto label_1ecb5c;
        case 0x1ecb60u: goto label_1ecb60;
        case 0x1ecb64u: goto label_1ecb64;
        case 0x1ecb68u: goto label_1ecb68;
        case 0x1ecb6cu: goto label_1ecb6c;
        case 0x1ecb70u: goto label_1ecb70;
        case 0x1ecb74u: goto label_1ecb74;
        case 0x1ecb78u: goto label_1ecb78;
        case 0x1ecb7cu: goto label_1ecb7c;
        case 0x1ecb80u: goto label_1ecb80;
        case 0x1ecb84u: goto label_1ecb84;
        case 0x1ecb88u: goto label_1ecb88;
        case 0x1ecb8cu: goto label_1ecb8c;
        case 0x1ecb90u: goto label_1ecb90;
        case 0x1ecb94u: goto label_1ecb94;
        case 0x1ecb98u: goto label_1ecb98;
        case 0x1ecb9cu: goto label_1ecb9c;
        case 0x1ecba0u: goto label_1ecba0;
        case 0x1ecba4u: goto label_1ecba4;
        case 0x1ecba8u: goto label_1ecba8;
        case 0x1ecbacu: goto label_1ecbac;
        case 0x1ecbb0u: goto label_1ecbb0;
        case 0x1ecbb4u: goto label_1ecbb4;
        case 0x1ecbb8u: goto label_1ecbb8;
        case 0x1ecbbcu: goto label_1ecbbc;
        case 0x1ecbc0u: goto label_1ecbc0;
        case 0x1ecbc4u: goto label_1ecbc4;
        case 0x1ecbc8u: goto label_1ecbc8;
        case 0x1ecbccu: goto label_1ecbcc;
        case 0x1ecbd0u: goto label_1ecbd0;
        case 0x1ecbd4u: goto label_1ecbd4;
        case 0x1ecbd8u: goto label_1ecbd8;
        case 0x1ecbdcu: goto label_1ecbdc;
        case 0x1ecbe0u: goto label_1ecbe0;
        case 0x1ecbe4u: goto label_1ecbe4;
        case 0x1ecbe8u: goto label_1ecbe8;
        case 0x1ecbecu: goto label_1ecbec;
        case 0x1ecbf0u: goto label_1ecbf0;
        case 0x1ecbf4u: goto label_1ecbf4;
        case 0x1ecbf8u: goto label_1ecbf8;
        case 0x1ecbfcu: goto label_1ecbfc;
        case 0x1ecc00u: goto label_1ecc00;
        case 0x1ecc04u: goto label_1ecc04;
        case 0x1ecc08u: goto label_1ecc08;
        case 0x1ecc0cu: goto label_1ecc0c;
        case 0x1ecc10u: goto label_1ecc10;
        case 0x1ecc14u: goto label_1ecc14;
        case 0x1ecc18u: goto label_1ecc18;
        case 0x1ecc1cu: goto label_1ecc1c;
        case 0x1ecc20u: goto label_1ecc20;
        case 0x1ecc24u: goto label_1ecc24;
        case 0x1ecc28u: goto label_1ecc28;
        case 0x1ecc2cu: goto label_1ecc2c;
        case 0x1ecc30u: goto label_1ecc30;
        case 0x1ecc34u: goto label_1ecc34;
        case 0x1ecc38u: goto label_1ecc38;
        case 0x1ecc3cu: goto label_1ecc3c;
        case 0x1ecc40u: goto label_1ecc40;
        case 0x1ecc44u: goto label_1ecc44;
        case 0x1ecc48u: goto label_1ecc48;
        case 0x1ecc4cu: goto label_1ecc4c;
        case 0x1ecc50u: goto label_1ecc50;
        case 0x1ecc54u: goto label_1ecc54;
        case 0x1ecc58u: goto label_1ecc58;
        case 0x1ecc5cu: goto label_1ecc5c;
        case 0x1ecc60u: goto label_1ecc60;
        case 0x1ecc64u: goto label_1ecc64;
        case 0x1ecc68u: goto label_1ecc68;
        case 0x1ecc6cu: goto label_1ecc6c;
        case 0x1ecc70u: goto label_1ecc70;
        case 0x1ecc74u: goto label_1ecc74;
        case 0x1ecc78u: goto label_1ecc78;
        case 0x1ecc7cu: goto label_1ecc7c;
        case 0x1ecc80u: goto label_1ecc80;
        case 0x1ecc84u: goto label_1ecc84;
        case 0x1ecc88u: goto label_1ecc88;
        case 0x1ecc8cu: goto label_1ecc8c;
        case 0x1ecc90u: goto label_1ecc90;
        case 0x1ecc94u: goto label_1ecc94;
        case 0x1ecc98u: goto label_1ecc98;
        case 0x1ecc9cu: goto label_1ecc9c;
        case 0x1ecca0u: goto label_1ecca0;
        case 0x1ecca4u: goto label_1ecca4;
        case 0x1ecca8u: goto label_1ecca8;
        case 0x1eccacu: goto label_1eccac;
        case 0x1eccb0u: goto label_1eccb0;
        case 0x1eccb4u: goto label_1eccb4;
        case 0x1eccb8u: goto label_1eccb8;
        case 0x1eccbcu: goto label_1eccbc;
        case 0x1eccc0u: goto label_1eccc0;
        case 0x1eccc4u: goto label_1eccc4;
        case 0x1eccc8u: goto label_1eccc8;
        case 0x1eccccu: goto label_1ecccc;
        case 0x1eccd0u: goto label_1eccd0;
        case 0x1eccd4u: goto label_1eccd4;
        case 0x1eccd8u: goto label_1eccd8;
        case 0x1eccdcu: goto label_1eccdc;
        case 0x1ecce0u: goto label_1ecce0;
        case 0x1ecce4u: goto label_1ecce4;
        case 0x1ecce8u: goto label_1ecce8;
        case 0x1eccecu: goto label_1eccec;
        case 0x1eccf0u: goto label_1eccf0;
        case 0x1eccf4u: goto label_1eccf4;
        case 0x1eccf8u: goto label_1eccf8;
        case 0x1eccfcu: goto label_1eccfc;
        case 0x1ecd00u: goto label_1ecd00;
        case 0x1ecd04u: goto label_1ecd04;
        case 0x1ecd08u: goto label_1ecd08;
        case 0x1ecd0cu: goto label_1ecd0c;
        case 0x1ecd10u: goto label_1ecd10;
        case 0x1ecd14u: goto label_1ecd14;
        case 0x1ecd18u: goto label_1ecd18;
        case 0x1ecd1cu: goto label_1ecd1c;
        case 0x1ecd20u: goto label_1ecd20;
        case 0x1ecd24u: goto label_1ecd24;
        case 0x1ecd28u: goto label_1ecd28;
        case 0x1ecd2cu: goto label_1ecd2c;
        case 0x1ecd30u: goto label_1ecd30;
        case 0x1ecd34u: goto label_1ecd34;
        case 0x1ecd38u: goto label_1ecd38;
        case 0x1ecd3cu: goto label_1ecd3c;
        case 0x1ecd40u: goto label_1ecd40;
        case 0x1ecd44u: goto label_1ecd44;
        case 0x1ecd48u: goto label_1ecd48;
        case 0x1ecd4cu: goto label_1ecd4c;
        case 0x1ecd50u: goto label_1ecd50;
        case 0x1ecd54u: goto label_1ecd54;
        case 0x1ecd58u: goto label_1ecd58;
        case 0x1ecd5cu: goto label_1ecd5c;
        case 0x1ecd60u: goto label_1ecd60;
        case 0x1ecd64u: goto label_1ecd64;
        case 0x1ecd68u: goto label_1ecd68;
        case 0x1ecd6cu: goto label_1ecd6c;
        case 0x1ecd70u: goto label_1ecd70;
        case 0x1ecd74u: goto label_1ecd74;
        case 0x1ecd78u: goto label_1ecd78;
        case 0x1ecd7cu: goto label_1ecd7c;
        case 0x1ecd80u: goto label_1ecd80;
        case 0x1ecd84u: goto label_1ecd84;
        case 0x1ecd88u: goto label_1ecd88;
        case 0x1ecd8cu: goto label_1ecd8c;
        case 0x1ecd90u: goto label_1ecd90;
        case 0x1ecd94u: goto label_1ecd94;
        case 0x1ecd98u: goto label_1ecd98;
        case 0x1ecd9cu: goto label_1ecd9c;
        case 0x1ecda0u: goto label_1ecda0;
        case 0x1ecda4u: goto label_1ecda4;
        case 0x1ecda8u: goto label_1ecda8;
        case 0x1ecdacu: goto label_1ecdac;
        case 0x1ecdb0u: goto label_1ecdb0;
        case 0x1ecdb4u: goto label_1ecdb4;
        case 0x1ecdb8u: goto label_1ecdb8;
        case 0x1ecdbcu: goto label_1ecdbc;
        case 0x1ecdc0u: goto label_1ecdc0;
        case 0x1ecdc4u: goto label_1ecdc4;
        case 0x1ecdc8u: goto label_1ecdc8;
        case 0x1ecdccu: goto label_1ecdcc;
        case 0x1ecdd0u: goto label_1ecdd0;
        case 0x1ecdd4u: goto label_1ecdd4;
        case 0x1ecdd8u: goto label_1ecdd8;
        case 0x1ecddcu: goto label_1ecddc;
        case 0x1ecde0u: goto label_1ecde0;
        case 0x1ecde4u: goto label_1ecde4;
        case 0x1ecde8u: goto label_1ecde8;
        case 0x1ecdecu: goto label_1ecdec;
        case 0x1ecdf0u: goto label_1ecdf0;
        case 0x1ecdf4u: goto label_1ecdf4;
        case 0x1ecdf8u: goto label_1ecdf8;
        case 0x1ecdfcu: goto label_1ecdfc;
        case 0x1ece00u: goto label_1ece00;
        case 0x1ece04u: goto label_1ece04;
        case 0x1ece08u: goto label_1ece08;
        case 0x1ece0cu: goto label_1ece0c;
        case 0x1ece10u: goto label_1ece10;
        case 0x1ece14u: goto label_1ece14;
        case 0x1ece18u: goto label_1ece18;
        case 0x1ece1cu: goto label_1ece1c;
        case 0x1ece20u: goto label_1ece20;
        case 0x1ece24u: goto label_1ece24;
        case 0x1ece28u: goto label_1ece28;
        case 0x1ece2cu: goto label_1ece2c;
        case 0x1ece30u: goto label_1ece30;
        case 0x1ece34u: goto label_1ece34;
        case 0x1ece38u: goto label_1ece38;
        case 0x1ece3cu: goto label_1ece3c;
        case 0x1ece40u: goto label_1ece40;
        case 0x1ece44u: goto label_1ece44;
        case 0x1ece48u: goto label_1ece48;
        case 0x1ece4cu: goto label_1ece4c;
        case 0x1ece50u: goto label_1ece50;
        case 0x1ece54u: goto label_1ece54;
        case 0x1ece58u: goto label_1ece58;
        case 0x1ece5cu: goto label_1ece5c;
        case 0x1ece60u: goto label_1ece60;
        case 0x1ece64u: goto label_1ece64;
        case 0x1ece68u: goto label_1ece68;
        case 0x1ece6cu: goto label_1ece6c;
        case 0x1ece70u: goto label_1ece70;
        case 0x1ece74u: goto label_1ece74;
        case 0x1ece78u: goto label_1ece78;
        case 0x1ece7cu: goto label_1ece7c;
        case 0x1ece80u: goto label_1ece80;
        case 0x1ece84u: goto label_1ece84;
        case 0x1ece88u: goto label_1ece88;
        case 0x1ece8cu: goto label_1ece8c;
        case 0x1ece90u: goto label_1ece90;
        case 0x1ece94u: goto label_1ece94;
        case 0x1ece98u: goto label_1ece98;
        case 0x1ece9cu: goto label_1ece9c;
        case 0x1ecea0u: goto label_1ecea0;
        case 0x1ecea4u: goto label_1ecea4;
        case 0x1ecea8u: goto label_1ecea8;
        case 0x1eceacu: goto label_1eceac;
        case 0x1eceb0u: goto label_1eceb0;
        case 0x1eceb4u: goto label_1eceb4;
        case 0x1eceb8u: goto label_1eceb8;
        case 0x1ecebcu: goto label_1ecebc;
        case 0x1ecec0u: goto label_1ecec0;
        case 0x1ecec4u: goto label_1ecec4;
        case 0x1ecec8u: goto label_1ecec8;
        case 0x1ececcu: goto label_1ececc;
        case 0x1eced0u: goto label_1eced0;
        case 0x1eced4u: goto label_1eced4;
        case 0x1eced8u: goto label_1eced8;
        case 0x1ecedcu: goto label_1ecedc;
        case 0x1ecee0u: goto label_1ecee0;
        case 0x1ecee4u: goto label_1ecee4;
        case 0x1ecee8u: goto label_1ecee8;
        case 0x1eceecu: goto label_1eceec;
        case 0x1ecef0u: goto label_1ecef0;
        case 0x1ecef4u: goto label_1ecef4;
        case 0x1ecef8u: goto label_1ecef8;
        case 0x1ecefcu: goto label_1ecefc;
        case 0x1ecf00u: goto label_1ecf00;
        case 0x1ecf04u: goto label_1ecf04;
        case 0x1ecf08u: goto label_1ecf08;
        case 0x1ecf0cu: goto label_1ecf0c;
        case 0x1ecf10u: goto label_1ecf10;
        case 0x1ecf14u: goto label_1ecf14;
        case 0x1ecf18u: goto label_1ecf18;
        case 0x1ecf1cu: goto label_1ecf1c;
        case 0x1ecf20u: goto label_1ecf20;
        case 0x1ecf24u: goto label_1ecf24;
        case 0x1ecf28u: goto label_1ecf28;
        case 0x1ecf2cu: goto label_1ecf2c;
        case 0x1ecf30u: goto label_1ecf30;
        case 0x1ecf34u: goto label_1ecf34;
        case 0x1ecf38u: goto label_1ecf38;
        case 0x1ecf3cu: goto label_1ecf3c;
        case 0x1ecf40u: goto label_1ecf40;
        case 0x1ecf44u: goto label_1ecf44;
        case 0x1ecf48u: goto label_1ecf48;
        case 0x1ecf4cu: goto label_1ecf4c;
        case 0x1ecf50u: goto label_1ecf50;
        case 0x1ecf54u: goto label_1ecf54;
        case 0x1ecf58u: goto label_1ecf58;
        case 0x1ecf5cu: goto label_1ecf5c;
        case 0x1ecf60u: goto label_1ecf60;
        case 0x1ecf64u: goto label_1ecf64;
        case 0x1ecf68u: goto label_1ecf68;
        case 0x1ecf6cu: goto label_1ecf6c;
        case 0x1ecf70u: goto label_1ecf70;
        case 0x1ecf74u: goto label_1ecf74;
        case 0x1ecf78u: goto label_1ecf78;
        case 0x1ecf7cu: goto label_1ecf7c;
        case 0x1ecf80u: goto label_1ecf80;
        case 0x1ecf84u: goto label_1ecf84;
        case 0x1ecf88u: goto label_1ecf88;
        case 0x1ecf8cu: goto label_1ecf8c;
        case 0x1ecf90u: goto label_1ecf90;
        case 0x1ecf94u: goto label_1ecf94;
        case 0x1ecf98u: goto label_1ecf98;
        case 0x1ecf9cu: goto label_1ecf9c;
        case 0x1ecfa0u: goto label_1ecfa0;
        case 0x1ecfa4u: goto label_1ecfa4;
        case 0x1ecfa8u: goto label_1ecfa8;
        case 0x1ecfacu: goto label_1ecfac;
        case 0x1ecfb0u: goto label_1ecfb0;
        case 0x1ecfb4u: goto label_1ecfb4;
        case 0x1ecfb8u: goto label_1ecfb8;
        case 0x1ecfbcu: goto label_1ecfbc;
        case 0x1ecfc0u: goto label_1ecfc0;
        case 0x1ecfc4u: goto label_1ecfc4;
        case 0x1ecfc8u: goto label_1ecfc8;
        case 0x1ecfccu: goto label_1ecfcc;
        case 0x1ecfd0u: goto label_1ecfd0;
        case 0x1ecfd4u: goto label_1ecfd4;
        case 0x1ecfd8u: goto label_1ecfd8;
        case 0x1ecfdcu: goto label_1ecfdc;
        case 0x1ecfe0u: goto label_1ecfe0;
        case 0x1ecfe4u: goto label_1ecfe4;
        case 0x1ecfe8u: goto label_1ecfe8;
        case 0x1ecfecu: goto label_1ecfec;
        case 0x1ecff0u: goto label_1ecff0;
        case 0x1ecff4u: goto label_1ecff4;
        case 0x1ecff8u: goto label_1ecff8;
        case 0x1ecffcu: goto label_1ecffc;
        case 0x1ed000u: goto label_1ed000;
        case 0x1ed004u: goto label_1ed004;
        case 0x1ed008u: goto label_1ed008;
        case 0x1ed00cu: goto label_1ed00c;
        case 0x1ed010u: goto label_1ed010;
        case 0x1ed014u: goto label_1ed014;
        case 0x1ed018u: goto label_1ed018;
        case 0x1ed01cu: goto label_1ed01c;
        case 0x1ed020u: goto label_1ed020;
        case 0x1ed024u: goto label_1ed024;
        case 0x1ed028u: goto label_1ed028;
        case 0x1ed02cu: goto label_1ed02c;
        case 0x1ed030u: goto label_1ed030;
        case 0x1ed034u: goto label_1ed034;
        case 0x1ed038u: goto label_1ed038;
        case 0x1ed03cu: goto label_1ed03c;
        case 0x1ed040u: goto label_1ed040;
        case 0x1ed044u: goto label_1ed044;
        case 0x1ed048u: goto label_1ed048;
        case 0x1ed04cu: goto label_1ed04c;
        case 0x1ed050u: goto label_1ed050;
        case 0x1ed054u: goto label_1ed054;
        case 0x1ed058u: goto label_1ed058;
        case 0x1ed05cu: goto label_1ed05c;
        case 0x1ed060u: goto label_1ed060;
        case 0x1ed064u: goto label_1ed064;
        case 0x1ed068u: goto label_1ed068;
        case 0x1ed06cu: goto label_1ed06c;
        case 0x1ed070u: goto label_1ed070;
        case 0x1ed074u: goto label_1ed074;
        case 0x1ed078u: goto label_1ed078;
        case 0x1ed07cu: goto label_1ed07c;
        case 0x1ed080u: goto label_1ed080;
        case 0x1ed084u: goto label_1ed084;
        case 0x1ed088u: goto label_1ed088;
        case 0x1ed08cu: goto label_1ed08c;
        case 0x1ed090u: goto label_1ed090;
        case 0x1ed094u: goto label_1ed094;
        case 0x1ed098u: goto label_1ed098;
        case 0x1ed09cu: goto label_1ed09c;
        case 0x1ed0a0u: goto label_1ed0a0;
        case 0x1ed0a4u: goto label_1ed0a4;
        case 0x1ed0a8u: goto label_1ed0a8;
        case 0x1ed0acu: goto label_1ed0ac;
        case 0x1ed0b0u: goto label_1ed0b0;
        case 0x1ed0b4u: goto label_1ed0b4;
        case 0x1ed0b8u: goto label_1ed0b8;
        case 0x1ed0bcu: goto label_1ed0bc;
        case 0x1ed0c0u: goto label_1ed0c0;
        case 0x1ed0c4u: goto label_1ed0c4;
        case 0x1ed0c8u: goto label_1ed0c8;
        case 0x1ed0ccu: goto label_1ed0cc;
        case 0x1ed0d0u: goto label_1ed0d0;
        case 0x1ed0d4u: goto label_1ed0d4;
        case 0x1ed0d8u: goto label_1ed0d8;
        case 0x1ed0dcu: goto label_1ed0dc;
        case 0x1ed0e0u: goto label_1ed0e0;
        case 0x1ed0e4u: goto label_1ed0e4;
        case 0x1ed0e8u: goto label_1ed0e8;
        case 0x1ed0ecu: goto label_1ed0ec;
        case 0x1ed0f0u: goto label_1ed0f0;
        case 0x1ed0f4u: goto label_1ed0f4;
        case 0x1ed0f8u: goto label_1ed0f8;
        case 0x1ed0fcu: goto label_1ed0fc;
        case 0x1ed100u: goto label_1ed100;
        case 0x1ed104u: goto label_1ed104;
        case 0x1ed108u: goto label_1ed108;
        case 0x1ed10cu: goto label_1ed10c;
        case 0x1ed110u: goto label_1ed110;
        case 0x1ed114u: goto label_1ed114;
        case 0x1ed118u: goto label_1ed118;
        case 0x1ed11cu: goto label_1ed11c;
        case 0x1ed120u: goto label_1ed120;
        case 0x1ed124u: goto label_1ed124;
        case 0x1ed128u: goto label_1ed128;
        case 0x1ed12cu: goto label_1ed12c;
        case 0x1ed130u: goto label_1ed130;
        case 0x1ed134u: goto label_1ed134;
        case 0x1ed138u: goto label_1ed138;
        case 0x1ed13cu: goto label_1ed13c;
        case 0x1ed140u: goto label_1ed140;
        case 0x1ed144u: goto label_1ed144;
        case 0x1ed148u: goto label_1ed148;
        case 0x1ed14cu: goto label_1ed14c;
        case 0x1ed150u: goto label_1ed150;
        case 0x1ed154u: goto label_1ed154;
        case 0x1ed158u: goto label_1ed158;
        case 0x1ed15cu: goto label_1ed15c;
        case 0x1ed160u: goto label_1ed160;
        case 0x1ed164u: goto label_1ed164;
        case 0x1ed168u: goto label_1ed168;
        case 0x1ed16cu: goto label_1ed16c;
        case 0x1ed170u: goto label_1ed170;
        case 0x1ed174u: goto label_1ed174;
        case 0x1ed178u: goto label_1ed178;
        case 0x1ed17cu: goto label_1ed17c;
        case 0x1ed180u: goto label_1ed180;
        case 0x1ed184u: goto label_1ed184;
        case 0x1ed188u: goto label_1ed188;
        case 0x1ed18cu: goto label_1ed18c;
        case 0x1ed190u: goto label_1ed190;
        case 0x1ed194u: goto label_1ed194;
        case 0x1ed198u: goto label_1ed198;
        case 0x1ed19cu: goto label_1ed19c;
        case 0x1ed1a0u: goto label_1ed1a0;
        case 0x1ed1a4u: goto label_1ed1a4;
        case 0x1ed1a8u: goto label_1ed1a8;
        case 0x1ed1acu: goto label_1ed1ac;
        case 0x1ed1b0u: goto label_1ed1b0;
        case 0x1ed1b4u: goto label_1ed1b4;
        case 0x1ed1b8u: goto label_1ed1b8;
        case 0x1ed1bcu: goto label_1ed1bc;
        case 0x1ed1c0u: goto label_1ed1c0;
        case 0x1ed1c4u: goto label_1ed1c4;
        case 0x1ed1c8u: goto label_1ed1c8;
        case 0x1ed1ccu: goto label_1ed1cc;
        case 0x1ed1d0u: goto label_1ed1d0;
        case 0x1ed1d4u: goto label_1ed1d4;
        case 0x1ed1d8u: goto label_1ed1d8;
        case 0x1ed1dcu: goto label_1ed1dc;
        case 0x1ed1e0u: goto label_1ed1e0;
        case 0x1ed1e4u: goto label_1ed1e4;
        case 0x1ed1e8u: goto label_1ed1e8;
        case 0x1ed1ecu: goto label_1ed1ec;
        case 0x1ed1f0u: goto label_1ed1f0;
        case 0x1ed1f4u: goto label_1ed1f4;
        case 0x1ed1f8u: goto label_1ed1f8;
        case 0x1ed1fcu: goto label_1ed1fc;
        case 0x1ed200u: goto label_1ed200;
        case 0x1ed204u: goto label_1ed204;
        case 0x1ed208u: goto label_1ed208;
        case 0x1ed20cu: goto label_1ed20c;
        case 0x1ed210u: goto label_1ed210;
        case 0x1ed214u: goto label_1ed214;
        case 0x1ed218u: goto label_1ed218;
        case 0x1ed21cu: goto label_1ed21c;
        case 0x1ed220u: goto label_1ed220;
        case 0x1ed224u: goto label_1ed224;
        case 0x1ed228u: goto label_1ed228;
        case 0x1ed22cu: goto label_1ed22c;
        case 0x1ed230u: goto label_1ed230;
        case 0x1ed234u: goto label_1ed234;
        case 0x1ed238u: goto label_1ed238;
        case 0x1ed23cu: goto label_1ed23c;
        case 0x1ed240u: goto label_1ed240;
        case 0x1ed244u: goto label_1ed244;
        case 0x1ed248u: goto label_1ed248;
        case 0x1ed24cu: goto label_1ed24c;
        case 0x1ed250u: goto label_1ed250;
        case 0x1ed254u: goto label_1ed254;
        case 0x1ed258u: goto label_1ed258;
        case 0x1ed25cu: goto label_1ed25c;
        case 0x1ed260u: goto label_1ed260;
        case 0x1ed264u: goto label_1ed264;
        case 0x1ed268u: goto label_1ed268;
        case 0x1ed26cu: goto label_1ed26c;
        case 0x1ed270u: goto label_1ed270;
        case 0x1ed274u: goto label_1ed274;
        case 0x1ed278u: goto label_1ed278;
        case 0x1ed27cu: goto label_1ed27c;
        case 0x1ed280u: goto label_1ed280;
        case 0x1ed284u: goto label_1ed284;
        case 0x1ed288u: goto label_1ed288;
        case 0x1ed28cu: goto label_1ed28c;
        case 0x1ed290u: goto label_1ed290;
        case 0x1ed294u: goto label_1ed294;
        case 0x1ed298u: goto label_1ed298;
        case 0x1ed29cu: goto label_1ed29c;
        case 0x1ed2a0u: goto label_1ed2a0;
        case 0x1ed2a4u: goto label_1ed2a4;
        case 0x1ed2a8u: goto label_1ed2a8;
        case 0x1ed2acu: goto label_1ed2ac;
        case 0x1ed2b0u: goto label_1ed2b0;
        case 0x1ed2b4u: goto label_1ed2b4;
        case 0x1ed2b8u: goto label_1ed2b8;
        case 0x1ed2bcu: goto label_1ed2bc;
        case 0x1ed2c0u: goto label_1ed2c0;
        case 0x1ed2c4u: goto label_1ed2c4;
        case 0x1ed2c8u: goto label_1ed2c8;
        case 0x1ed2ccu: goto label_1ed2cc;
        case 0x1ed2d0u: goto label_1ed2d0;
        case 0x1ed2d4u: goto label_1ed2d4;
        case 0x1ed2d8u: goto label_1ed2d8;
        case 0x1ed2dcu: goto label_1ed2dc;
        case 0x1ed2e0u: goto label_1ed2e0;
        case 0x1ed2e4u: goto label_1ed2e4;
        case 0x1ed2e8u: goto label_1ed2e8;
        case 0x1ed2ecu: goto label_1ed2ec;
        case 0x1ed2f0u: goto label_1ed2f0;
        case 0x1ed2f4u: goto label_1ed2f4;
        case 0x1ed2f8u: goto label_1ed2f8;
        case 0x1ed2fcu: goto label_1ed2fc;
        case 0x1ed300u: goto label_1ed300;
        case 0x1ed304u: goto label_1ed304;
        case 0x1ed308u: goto label_1ed308;
        case 0x1ed30cu: goto label_1ed30c;
        case 0x1ed310u: goto label_1ed310;
        case 0x1ed314u: goto label_1ed314;
        case 0x1ed318u: goto label_1ed318;
        case 0x1ed31cu: goto label_1ed31c;
        case 0x1ed320u: goto label_1ed320;
        case 0x1ed324u: goto label_1ed324;
        case 0x1ed328u: goto label_1ed328;
        case 0x1ed32cu: goto label_1ed32c;
        case 0x1ed330u: goto label_1ed330;
        case 0x1ed334u: goto label_1ed334;
        case 0x1ed338u: goto label_1ed338;
        case 0x1ed33cu: goto label_1ed33c;
        case 0x1ed340u: goto label_1ed340;
        case 0x1ed344u: goto label_1ed344;
        case 0x1ed348u: goto label_1ed348;
        case 0x1ed34cu: goto label_1ed34c;
        case 0x1ed350u: goto label_1ed350;
        case 0x1ed354u: goto label_1ed354;
        case 0x1ed358u: goto label_1ed358;
        case 0x1ed35cu: goto label_1ed35c;
        case 0x1ed360u: goto label_1ed360;
        case 0x1ed364u: goto label_1ed364;
        case 0x1ed368u: goto label_1ed368;
        case 0x1ed36cu: goto label_1ed36c;
        case 0x1ed370u: goto label_1ed370;
        case 0x1ed374u: goto label_1ed374;
        case 0x1ed378u: goto label_1ed378;
        case 0x1ed37cu: goto label_1ed37c;
        case 0x1ed380u: goto label_1ed380;
        case 0x1ed384u: goto label_1ed384;
        case 0x1ed388u: goto label_1ed388;
        case 0x1ed38cu: goto label_1ed38c;
        case 0x1ed390u: goto label_1ed390;
        case 0x1ed394u: goto label_1ed394;
        case 0x1ed398u: goto label_1ed398;
        case 0x1ed39cu: goto label_1ed39c;
        case 0x1ed3a0u: goto label_1ed3a0;
        case 0x1ed3a4u: goto label_1ed3a4;
        case 0x1ed3a8u: goto label_1ed3a8;
        case 0x1ed3acu: goto label_1ed3ac;
        case 0x1ed3b0u: goto label_1ed3b0;
        case 0x1ed3b4u: goto label_1ed3b4;
        case 0x1ed3b8u: goto label_1ed3b8;
        case 0x1ed3bcu: goto label_1ed3bc;
        case 0x1ed3c0u: goto label_1ed3c0;
        case 0x1ed3c4u: goto label_1ed3c4;
        case 0x1ed3c8u: goto label_1ed3c8;
        case 0x1ed3ccu: goto label_1ed3cc;
        case 0x1ed3d0u: goto label_1ed3d0;
        case 0x1ed3d4u: goto label_1ed3d4;
        case 0x1ed3d8u: goto label_1ed3d8;
        case 0x1ed3dcu: goto label_1ed3dc;
        case 0x1ed3e0u: goto label_1ed3e0;
        case 0x1ed3e4u: goto label_1ed3e4;
        case 0x1ed3e8u: goto label_1ed3e8;
        case 0x1ed3ecu: goto label_1ed3ec;
        case 0x1ed3f0u: goto label_1ed3f0;
        case 0x1ed3f4u: goto label_1ed3f4;
        case 0x1ed3f8u: goto label_1ed3f8;
        case 0x1ed3fcu: goto label_1ed3fc;
        case 0x1ed400u: goto label_1ed400;
        case 0x1ed404u: goto label_1ed404;
        case 0x1ed408u: goto label_1ed408;
        case 0x1ed40cu: goto label_1ed40c;
        case 0x1ed410u: goto label_1ed410;
        case 0x1ed414u: goto label_1ed414;
        case 0x1ed418u: goto label_1ed418;
        case 0x1ed41cu: goto label_1ed41c;
        case 0x1ed420u: goto label_1ed420;
        case 0x1ed424u: goto label_1ed424;
        case 0x1ed428u: goto label_1ed428;
        case 0x1ed42cu: goto label_1ed42c;
        case 0x1ed430u: goto label_1ed430;
        case 0x1ed434u: goto label_1ed434;
        case 0x1ed438u: goto label_1ed438;
        case 0x1ed43cu: goto label_1ed43c;
        case 0x1ed440u: goto label_1ed440;
        case 0x1ed444u: goto label_1ed444;
        case 0x1ed448u: goto label_1ed448;
        case 0x1ed44cu: goto label_1ed44c;
        case 0x1ed450u: goto label_1ed450;
        case 0x1ed454u: goto label_1ed454;
        case 0x1ed458u: goto label_1ed458;
        case 0x1ed45cu: goto label_1ed45c;
        case 0x1ed460u: goto label_1ed460;
        case 0x1ed464u: goto label_1ed464;
        case 0x1ed468u: goto label_1ed468;
        case 0x1ed46cu: goto label_1ed46c;
        case 0x1ed470u: goto label_1ed470;
        case 0x1ed474u: goto label_1ed474;
        case 0x1ed478u: goto label_1ed478;
        case 0x1ed47cu: goto label_1ed47c;
        case 0x1ed480u: goto label_1ed480;
        case 0x1ed484u: goto label_1ed484;
        case 0x1ed488u: goto label_1ed488;
        case 0x1ed48cu: goto label_1ed48c;
        case 0x1ed490u: goto label_1ed490;
        case 0x1ed494u: goto label_1ed494;
        case 0x1ed498u: goto label_1ed498;
        case 0x1ed49cu: goto label_1ed49c;
        case 0x1ed4a0u: goto label_1ed4a0;
        case 0x1ed4a4u: goto label_1ed4a4;
        case 0x1ed4a8u: goto label_1ed4a8;
        case 0x1ed4acu: goto label_1ed4ac;
        case 0x1ed4b0u: goto label_1ed4b0;
        case 0x1ed4b4u: goto label_1ed4b4;
        case 0x1ed4b8u: goto label_1ed4b8;
        case 0x1ed4bcu: goto label_1ed4bc;
        case 0x1ed4c0u: goto label_1ed4c0;
        case 0x1ed4c4u: goto label_1ed4c4;
        case 0x1ed4c8u: goto label_1ed4c8;
        case 0x1ed4ccu: goto label_1ed4cc;
        case 0x1ed4d0u: goto label_1ed4d0;
        case 0x1ed4d4u: goto label_1ed4d4;
        case 0x1ed4d8u: goto label_1ed4d8;
        case 0x1ed4dcu: goto label_1ed4dc;
        case 0x1ed4e0u: goto label_1ed4e0;
        case 0x1ed4e4u: goto label_1ed4e4;
        case 0x1ed4e8u: goto label_1ed4e8;
        case 0x1ed4ecu: goto label_1ed4ec;
        case 0x1ed4f0u: goto label_1ed4f0;
        case 0x1ed4f4u: goto label_1ed4f4;
        case 0x1ed4f8u: goto label_1ed4f8;
        case 0x1ed4fcu: goto label_1ed4fc;
        case 0x1ed500u: goto label_1ed500;
        case 0x1ed504u: goto label_1ed504;
        case 0x1ed508u: goto label_1ed508;
        case 0x1ed50cu: goto label_1ed50c;
        case 0x1ed510u: goto label_1ed510;
        case 0x1ed514u: goto label_1ed514;
        case 0x1ed518u: goto label_1ed518;
        case 0x1ed51cu: goto label_1ed51c;
        case 0x1ed520u: goto label_1ed520;
        case 0x1ed524u: goto label_1ed524;
        case 0x1ed528u: goto label_1ed528;
        case 0x1ed52cu: goto label_1ed52c;
        case 0x1ed530u: goto label_1ed530;
        case 0x1ed534u: goto label_1ed534;
        case 0x1ed538u: goto label_1ed538;
        case 0x1ed53cu: goto label_1ed53c;
        case 0x1ed540u: goto label_1ed540;
        case 0x1ed544u: goto label_1ed544;
        case 0x1ed548u: goto label_1ed548;
        case 0x1ed54cu: goto label_1ed54c;
        case 0x1ed550u: goto label_1ed550;
        case 0x1ed554u: goto label_1ed554;
        case 0x1ed558u: goto label_1ed558;
        case 0x1ed55cu: goto label_1ed55c;
        case 0x1ed560u: goto label_1ed560;
        case 0x1ed564u: goto label_1ed564;
        case 0x1ed568u: goto label_1ed568;
        case 0x1ed56cu: goto label_1ed56c;
        case 0x1ed570u: goto label_1ed570;
        case 0x1ed574u: goto label_1ed574;
        case 0x1ed578u: goto label_1ed578;
        case 0x1ed57cu: goto label_1ed57c;
        case 0x1ed580u: goto label_1ed580;
        case 0x1ed584u: goto label_1ed584;
        case 0x1ed588u: goto label_1ed588;
        case 0x1ed58cu: goto label_1ed58c;
        case 0x1ed590u: goto label_1ed590;
        case 0x1ed594u: goto label_1ed594;
        case 0x1ed598u: goto label_1ed598;
        case 0x1ed59cu: goto label_1ed59c;
        case 0x1ed5a0u: goto label_1ed5a0;
        case 0x1ed5a4u: goto label_1ed5a4;
        case 0x1ed5a8u: goto label_1ed5a8;
        case 0x1ed5acu: goto label_1ed5ac;
        case 0x1ed5b0u: goto label_1ed5b0;
        case 0x1ed5b4u: goto label_1ed5b4;
        case 0x1ed5b8u: goto label_1ed5b8;
        case 0x1ed5bcu: goto label_1ed5bc;
        case 0x1ed5c0u: goto label_1ed5c0;
        case 0x1ed5c4u: goto label_1ed5c4;
        case 0x1ed5c8u: goto label_1ed5c8;
        case 0x1ed5ccu: goto label_1ed5cc;
        case 0x1ed5d0u: goto label_1ed5d0;
        case 0x1ed5d4u: goto label_1ed5d4;
        case 0x1ed5d8u: goto label_1ed5d8;
        case 0x1ed5dcu: goto label_1ed5dc;
        case 0x1ed5e0u: goto label_1ed5e0;
        case 0x1ed5e4u: goto label_1ed5e4;
        case 0x1ed5e8u: goto label_1ed5e8;
        case 0x1ed5ecu: goto label_1ed5ec;
        case 0x1ed5f0u: goto label_1ed5f0;
        case 0x1ed5f4u: goto label_1ed5f4;
        case 0x1ed5f8u: goto label_1ed5f8;
        case 0x1ed5fcu: goto label_1ed5fc;
        case 0x1ed600u: goto label_1ed600;
        case 0x1ed604u: goto label_1ed604;
        case 0x1ed608u: goto label_1ed608;
        case 0x1ed60cu: goto label_1ed60c;
        case 0x1ed610u: goto label_1ed610;
        case 0x1ed614u: goto label_1ed614;
        case 0x1ed618u: goto label_1ed618;
        case 0x1ed61cu: goto label_1ed61c;
        case 0x1ed620u: goto label_1ed620;
        case 0x1ed624u: goto label_1ed624;
        case 0x1ed628u: goto label_1ed628;
        case 0x1ed62cu: goto label_1ed62c;
        case 0x1ed630u: goto label_1ed630;
        case 0x1ed634u: goto label_1ed634;
        case 0x1ed638u: goto label_1ed638;
        case 0x1ed63cu: goto label_1ed63c;
        case 0x1ed640u: goto label_1ed640;
        case 0x1ed644u: goto label_1ed644;
        case 0x1ed648u: goto label_1ed648;
        case 0x1ed64cu: goto label_1ed64c;
        case 0x1ed650u: goto label_1ed650;
        case 0x1ed654u: goto label_1ed654;
        case 0x1ed658u: goto label_1ed658;
        case 0x1ed65cu: goto label_1ed65c;
        case 0x1ed660u: goto label_1ed660;
        case 0x1ed664u: goto label_1ed664;
        case 0x1ed668u: goto label_1ed668;
        case 0x1ed66cu: goto label_1ed66c;
        case 0x1ed670u: goto label_1ed670;
        case 0x1ed674u: goto label_1ed674;
        case 0x1ed678u: goto label_1ed678;
        case 0x1ed67cu: goto label_1ed67c;
        case 0x1ed680u: goto label_1ed680;
        case 0x1ed684u: goto label_1ed684;
        case 0x1ed688u: goto label_1ed688;
        case 0x1ed68cu: goto label_1ed68c;
        case 0x1ed690u: goto label_1ed690;
        case 0x1ed694u: goto label_1ed694;
        case 0x1ed698u: goto label_1ed698;
        case 0x1ed69cu: goto label_1ed69c;
        case 0x1ed6a0u: goto label_1ed6a0;
        case 0x1ed6a4u: goto label_1ed6a4;
        case 0x1ed6a8u: goto label_1ed6a8;
        case 0x1ed6acu: goto label_1ed6ac;
        case 0x1ed6b0u: goto label_1ed6b0;
        case 0x1ed6b4u: goto label_1ed6b4;
        case 0x1ed6b8u: goto label_1ed6b8;
        case 0x1ed6bcu: goto label_1ed6bc;
        case 0x1ed6c0u: goto label_1ed6c0;
        case 0x1ed6c4u: goto label_1ed6c4;
        case 0x1ed6c8u: goto label_1ed6c8;
        case 0x1ed6ccu: goto label_1ed6cc;
        case 0x1ed6d0u: goto label_1ed6d0;
        case 0x1ed6d4u: goto label_1ed6d4;
        case 0x1ed6d8u: goto label_1ed6d8;
        case 0x1ed6dcu: goto label_1ed6dc;
        case 0x1ed6e0u: goto label_1ed6e0;
        case 0x1ed6e4u: goto label_1ed6e4;
        case 0x1ed6e8u: goto label_1ed6e8;
        case 0x1ed6ecu: goto label_1ed6ec;
        case 0x1ed6f0u: goto label_1ed6f0;
        case 0x1ed6f4u: goto label_1ed6f4;
        case 0x1ed6f8u: goto label_1ed6f8;
        case 0x1ed6fcu: goto label_1ed6fc;
        case 0x1ed700u: goto label_1ed700;
        case 0x1ed704u: goto label_1ed704;
        case 0x1ed708u: goto label_1ed708;
        case 0x1ed70cu: goto label_1ed70c;
        case 0x1ed710u: goto label_1ed710;
        case 0x1ed714u: goto label_1ed714;
        case 0x1ed718u: goto label_1ed718;
        case 0x1ed71cu: goto label_1ed71c;
        case 0x1ed720u: goto label_1ed720;
        case 0x1ed724u: goto label_1ed724;
        case 0x1ed728u: goto label_1ed728;
        case 0x1ed72cu: goto label_1ed72c;
        case 0x1ed730u: goto label_1ed730;
        case 0x1ed734u: goto label_1ed734;
        case 0x1ed738u: goto label_1ed738;
        case 0x1ed73cu: goto label_1ed73c;
        case 0x1ed740u: goto label_1ed740;
        case 0x1ed744u: goto label_1ed744;
        case 0x1ed748u: goto label_1ed748;
        case 0x1ed74cu: goto label_1ed74c;
        case 0x1ed750u: goto label_1ed750;
        case 0x1ed754u: goto label_1ed754;
        case 0x1ed758u: goto label_1ed758;
        case 0x1ed75cu: goto label_1ed75c;
        case 0x1ed760u: goto label_1ed760;
        case 0x1ed764u: goto label_1ed764;
        case 0x1ed768u: goto label_1ed768;
        case 0x1ed76cu: goto label_1ed76c;
        case 0x1ed770u: goto label_1ed770;
        case 0x1ed774u: goto label_1ed774;
        case 0x1ed778u: goto label_1ed778;
        case 0x1ed77cu: goto label_1ed77c;
        case 0x1ed780u: goto label_1ed780;
        case 0x1ed784u: goto label_1ed784;
        case 0x1ed788u: goto label_1ed788;
        case 0x1ed78cu: goto label_1ed78c;
        case 0x1ed790u: goto label_1ed790;
        case 0x1ed794u: goto label_1ed794;
        case 0x1ed798u: goto label_1ed798;
        case 0x1ed79cu: goto label_1ed79c;
        case 0x1ed7a0u: goto label_1ed7a0;
        case 0x1ed7a4u: goto label_1ed7a4;
        case 0x1ed7a8u: goto label_1ed7a8;
        case 0x1ed7acu: goto label_1ed7ac;
        case 0x1ed7b0u: goto label_1ed7b0;
        case 0x1ed7b4u: goto label_1ed7b4;
        case 0x1ed7b8u: goto label_1ed7b8;
        case 0x1ed7bcu: goto label_1ed7bc;
        case 0x1ed7c0u: goto label_1ed7c0;
        case 0x1ed7c4u: goto label_1ed7c4;
        case 0x1ed7c8u: goto label_1ed7c8;
        case 0x1ed7ccu: goto label_1ed7cc;
        case 0x1ed7d0u: goto label_1ed7d0;
        case 0x1ed7d4u: goto label_1ed7d4;
        case 0x1ed7d8u: goto label_1ed7d8;
        case 0x1ed7dcu: goto label_1ed7dc;
        case 0x1ed7e0u: goto label_1ed7e0;
        case 0x1ed7e4u: goto label_1ed7e4;
        case 0x1ed7e8u: goto label_1ed7e8;
        case 0x1ed7ecu: goto label_1ed7ec;
        case 0x1ed7f0u: goto label_1ed7f0;
        case 0x1ed7f4u: goto label_1ed7f4;
        case 0x1ed7f8u: goto label_1ed7f8;
        case 0x1ed7fcu: goto label_1ed7fc;
        case 0x1ed800u: goto label_1ed800;
        case 0x1ed804u: goto label_1ed804;
        case 0x1ed808u: goto label_1ed808;
        case 0x1ed80cu: goto label_1ed80c;
        case 0x1ed810u: goto label_1ed810;
        case 0x1ed814u: goto label_1ed814;
        case 0x1ed818u: goto label_1ed818;
        case 0x1ed81cu: goto label_1ed81c;
        case 0x1ed820u: goto label_1ed820;
        case 0x1ed824u: goto label_1ed824;
        case 0x1ed828u: goto label_1ed828;
        case 0x1ed82cu: goto label_1ed82c;
        case 0x1ed830u: goto label_1ed830;
        case 0x1ed834u: goto label_1ed834;
        case 0x1ed838u: goto label_1ed838;
        case 0x1ed83cu: goto label_1ed83c;
        case 0x1ed840u: goto label_1ed840;
        case 0x1ed844u: goto label_1ed844;
        case 0x1ed848u: goto label_1ed848;
        case 0x1ed84cu: goto label_1ed84c;
        case 0x1ed850u: goto label_1ed850;
        case 0x1ed854u: goto label_1ed854;
        case 0x1ed858u: goto label_1ed858;
        case 0x1ed85cu: goto label_1ed85c;
        case 0x1ed860u: goto label_1ed860;
        case 0x1ed864u: goto label_1ed864;
        case 0x1ed868u: goto label_1ed868;
        case 0x1ed86cu: goto label_1ed86c;
        case 0x1ed870u: goto label_1ed870;
        case 0x1ed874u: goto label_1ed874;
        case 0x1ed878u: goto label_1ed878;
        case 0x1ed87cu: goto label_1ed87c;
        case 0x1ed880u: goto label_1ed880;
        case 0x1ed884u: goto label_1ed884;
        case 0x1ed888u: goto label_1ed888;
        case 0x1ed88cu: goto label_1ed88c;
        case 0x1ed890u: goto label_1ed890;
        case 0x1ed894u: goto label_1ed894;
        case 0x1ed898u: goto label_1ed898;
        case 0x1ed89cu: goto label_1ed89c;
        case 0x1ed8a0u: goto label_1ed8a0;
        case 0x1ed8a4u: goto label_1ed8a4;
        case 0x1ed8a8u: goto label_1ed8a8;
        case 0x1ed8acu: goto label_1ed8ac;
        case 0x1ed8b0u: goto label_1ed8b0;
        case 0x1ed8b4u: goto label_1ed8b4;
        case 0x1ed8b8u: goto label_1ed8b8;
        case 0x1ed8bcu: goto label_1ed8bc;
        case 0x1ed8c0u: goto label_1ed8c0;
        case 0x1ed8c4u: goto label_1ed8c4;
        case 0x1ed8c8u: goto label_1ed8c8;
        case 0x1ed8ccu: goto label_1ed8cc;
        case 0x1ed8d0u: goto label_1ed8d0;
        case 0x1ed8d4u: goto label_1ed8d4;
        case 0x1ed8d8u: goto label_1ed8d8;
        case 0x1ed8dcu: goto label_1ed8dc;
        case 0x1ed8e0u: goto label_1ed8e0;
        case 0x1ed8e4u: goto label_1ed8e4;
        case 0x1ed8e8u: goto label_1ed8e8;
        case 0x1ed8ecu: goto label_1ed8ec;
        case 0x1ed8f0u: goto label_1ed8f0;
        case 0x1ed8f4u: goto label_1ed8f4;
        case 0x1ed8f8u: goto label_1ed8f8;
        case 0x1ed8fcu: goto label_1ed8fc;
        case 0x1ed900u: goto label_1ed900;
        case 0x1ed904u: goto label_1ed904;
        case 0x1ed908u: goto label_1ed908;
        case 0x1ed90cu: goto label_1ed90c;
        case 0x1ed910u: goto label_1ed910;
        case 0x1ed914u: goto label_1ed914;
        case 0x1ed918u: goto label_1ed918;
        case 0x1ed91cu: goto label_1ed91c;
        case 0x1ed920u: goto label_1ed920;
        case 0x1ed924u: goto label_1ed924;
        case 0x1ed928u: goto label_1ed928;
        case 0x1ed92cu: goto label_1ed92c;
        case 0x1ed930u: goto label_1ed930;
        case 0x1ed934u: goto label_1ed934;
        case 0x1ed938u: goto label_1ed938;
        case 0x1ed93cu: goto label_1ed93c;
        case 0x1ed940u: goto label_1ed940;
        case 0x1ed944u: goto label_1ed944;
        case 0x1ed948u: goto label_1ed948;
        case 0x1ed94cu: goto label_1ed94c;
        case 0x1ed950u: goto label_1ed950;
        case 0x1ed954u: goto label_1ed954;
        case 0x1ed958u: goto label_1ed958;
        case 0x1ed95cu: goto label_1ed95c;
        case 0x1ed960u: goto label_1ed960;
        case 0x1ed964u: goto label_1ed964;
        case 0x1ed968u: goto label_1ed968;
        case 0x1ed96cu: goto label_1ed96c;
        case 0x1ed970u: goto label_1ed970;
        case 0x1ed974u: goto label_1ed974;
        case 0x1ed978u: goto label_1ed978;
        case 0x1ed97cu: goto label_1ed97c;
        case 0x1ed980u: goto label_1ed980;
        case 0x1ed984u: goto label_1ed984;
        case 0x1ed988u: goto label_1ed988;
        case 0x1ed98cu: goto label_1ed98c;
        case 0x1ed990u: goto label_1ed990;
        case 0x1ed994u: goto label_1ed994;
        case 0x1ed998u: goto label_1ed998;
        case 0x1ed99cu: goto label_1ed99c;
        case 0x1ed9a0u: goto label_1ed9a0;
        case 0x1ed9a4u: goto label_1ed9a4;
        case 0x1ed9a8u: goto label_1ed9a8;
        case 0x1ed9acu: goto label_1ed9ac;
        case 0x1ed9b0u: goto label_1ed9b0;
        case 0x1ed9b4u: goto label_1ed9b4;
        case 0x1ed9b8u: goto label_1ed9b8;
        case 0x1ed9bcu: goto label_1ed9bc;
        case 0x1ed9c0u: goto label_1ed9c0;
        case 0x1ed9c4u: goto label_1ed9c4;
        case 0x1ed9c8u: goto label_1ed9c8;
        case 0x1ed9ccu: goto label_1ed9cc;
        case 0x1ed9d0u: goto label_1ed9d0;
        case 0x1ed9d4u: goto label_1ed9d4;
        case 0x1ed9d8u: goto label_1ed9d8;
        case 0x1ed9dcu: goto label_1ed9dc;
        case 0x1ed9e0u: goto label_1ed9e0;
        case 0x1ed9e4u: goto label_1ed9e4;
        case 0x1ed9e8u: goto label_1ed9e8;
        case 0x1ed9ecu: goto label_1ed9ec;
        case 0x1ed9f0u: goto label_1ed9f0;
        case 0x1ed9f4u: goto label_1ed9f4;
        case 0x1ed9f8u: goto label_1ed9f8;
        case 0x1ed9fcu: goto label_1ed9fc;
        case 0x1eda00u: goto label_1eda00;
        case 0x1eda04u: goto label_1eda04;
        case 0x1eda08u: goto label_1eda08;
        case 0x1eda0cu: goto label_1eda0c;
        case 0x1eda10u: goto label_1eda10;
        case 0x1eda14u: goto label_1eda14;
        case 0x1eda18u: goto label_1eda18;
        case 0x1eda1cu: goto label_1eda1c;
        case 0x1eda20u: goto label_1eda20;
        case 0x1eda24u: goto label_1eda24;
        case 0x1eda28u: goto label_1eda28;
        case 0x1eda2cu: goto label_1eda2c;
        case 0x1eda30u: goto label_1eda30;
        case 0x1eda34u: goto label_1eda34;
        case 0x1eda38u: goto label_1eda38;
        case 0x1eda3cu: goto label_1eda3c;
        case 0x1eda40u: goto label_1eda40;
        case 0x1eda44u: goto label_1eda44;
        case 0x1eda48u: goto label_1eda48;
        case 0x1eda4cu: goto label_1eda4c;
        case 0x1eda50u: goto label_1eda50;
        case 0x1eda54u: goto label_1eda54;
        case 0x1eda58u: goto label_1eda58;
        case 0x1eda5cu: goto label_1eda5c;
        case 0x1eda60u: goto label_1eda60;
        case 0x1eda64u: goto label_1eda64;
        case 0x1eda68u: goto label_1eda68;
        case 0x1eda6cu: goto label_1eda6c;
        case 0x1eda70u: goto label_1eda70;
        case 0x1eda74u: goto label_1eda74;
        case 0x1eda78u: goto label_1eda78;
        case 0x1eda7cu: goto label_1eda7c;
        case 0x1eda80u: goto label_1eda80;
        case 0x1eda84u: goto label_1eda84;
        case 0x1eda88u: goto label_1eda88;
        case 0x1eda8cu: goto label_1eda8c;
        case 0x1eda90u: goto label_1eda90;
        case 0x1eda94u: goto label_1eda94;
        case 0x1eda98u: goto label_1eda98;
        case 0x1eda9cu: goto label_1eda9c;
        case 0x1edaa0u: goto label_1edaa0;
        case 0x1edaa4u: goto label_1edaa4;
        case 0x1edaa8u: goto label_1edaa8;
        case 0x1edaacu: goto label_1edaac;
        case 0x1edab0u: goto label_1edab0;
        case 0x1edab4u: goto label_1edab4;
        case 0x1edab8u: goto label_1edab8;
        case 0x1edabcu: goto label_1edabc;
        case 0x1edac0u: goto label_1edac0;
        case 0x1edac4u: goto label_1edac4;
        case 0x1edac8u: goto label_1edac8;
        case 0x1edaccu: goto label_1edacc;
        case 0x1edad0u: goto label_1edad0;
        case 0x1edad4u: goto label_1edad4;
        case 0x1edad8u: goto label_1edad8;
        case 0x1edadcu: goto label_1edadc;
        case 0x1edae0u: goto label_1edae0;
        case 0x1edae4u: goto label_1edae4;
        case 0x1edae8u: goto label_1edae8;
        case 0x1edaecu: goto label_1edaec;
        case 0x1edaf0u: goto label_1edaf0;
        case 0x1edaf4u: goto label_1edaf4;
        case 0x1edaf8u: goto label_1edaf8;
        case 0x1edafcu: goto label_1edafc;
        case 0x1edb00u: goto label_1edb00;
        case 0x1edb04u: goto label_1edb04;
        case 0x1edb08u: goto label_1edb08;
        case 0x1edb0cu: goto label_1edb0c;
        case 0x1edb10u: goto label_1edb10;
        case 0x1edb14u: goto label_1edb14;
        case 0x1edb18u: goto label_1edb18;
        case 0x1edb1cu: goto label_1edb1c;
        case 0x1edb20u: goto label_1edb20;
        case 0x1edb24u: goto label_1edb24;
        case 0x1edb28u: goto label_1edb28;
        case 0x1edb2cu: goto label_1edb2c;
        case 0x1edb30u: goto label_1edb30;
        case 0x1edb34u: goto label_1edb34;
        case 0x1edb38u: goto label_1edb38;
        case 0x1edb3cu: goto label_1edb3c;
        case 0x1edb40u: goto label_1edb40;
        case 0x1edb44u: goto label_1edb44;
        case 0x1edb48u: goto label_1edb48;
        case 0x1edb4cu: goto label_1edb4c;
        case 0x1edb50u: goto label_1edb50;
        case 0x1edb54u: goto label_1edb54;
        case 0x1edb58u: goto label_1edb58;
        case 0x1edb5cu: goto label_1edb5c;
        case 0x1edb60u: goto label_1edb60;
        case 0x1edb64u: goto label_1edb64;
        case 0x1edb68u: goto label_1edb68;
        case 0x1edb6cu: goto label_1edb6c;
        case 0x1edb70u: goto label_1edb70;
        case 0x1edb74u: goto label_1edb74;
        case 0x1edb78u: goto label_1edb78;
        case 0x1edb7cu: goto label_1edb7c;
        case 0x1edb80u: goto label_1edb80;
        case 0x1edb84u: goto label_1edb84;
        case 0x1edb88u: goto label_1edb88;
        case 0x1edb8cu: goto label_1edb8c;
        case 0x1edb90u: goto label_1edb90;
        case 0x1edb94u: goto label_1edb94;
        case 0x1edb98u: goto label_1edb98;
        case 0x1edb9cu: goto label_1edb9c;
        case 0x1edba0u: goto label_1edba0;
        case 0x1edba4u: goto label_1edba4;
        case 0x1edba8u: goto label_1edba8;
        case 0x1edbacu: goto label_1edbac;
        case 0x1edbb0u: goto label_1edbb0;
        case 0x1edbb4u: goto label_1edbb4;
        case 0x1edbb8u: goto label_1edbb8;
        case 0x1edbbcu: goto label_1edbbc;
        case 0x1edbc0u: goto label_1edbc0;
        case 0x1edbc4u: goto label_1edbc4;
        case 0x1edbc8u: goto label_1edbc8;
        case 0x1edbccu: goto label_1edbcc;
        case 0x1edbd0u: goto label_1edbd0;
        case 0x1edbd4u: goto label_1edbd4;
        case 0x1edbd8u: goto label_1edbd8;
        case 0x1edbdcu: goto label_1edbdc;
        case 0x1edbe0u: goto label_1edbe0;
        case 0x1edbe4u: goto label_1edbe4;
        case 0x1edbe8u: goto label_1edbe8;
        case 0x1edbecu: goto label_1edbec;
        case 0x1edbf0u: goto label_1edbf0;
        case 0x1edbf4u: goto label_1edbf4;
        case 0x1edbf8u: goto label_1edbf8;
        case 0x1edbfcu: goto label_1edbfc;
        case 0x1edc00u: goto label_1edc00;
        case 0x1edc04u: goto label_1edc04;
        case 0x1edc08u: goto label_1edc08;
        case 0x1edc0cu: goto label_1edc0c;
        case 0x1edc10u: goto label_1edc10;
        case 0x1edc14u: goto label_1edc14;
        case 0x1edc18u: goto label_1edc18;
        case 0x1edc1cu: goto label_1edc1c;
        case 0x1edc20u: goto label_1edc20;
        case 0x1edc24u: goto label_1edc24;
        case 0x1edc28u: goto label_1edc28;
        case 0x1edc2cu: goto label_1edc2c;
        case 0x1edc30u: goto label_1edc30;
        case 0x1edc34u: goto label_1edc34;
        case 0x1edc38u: goto label_1edc38;
        case 0x1edc3cu: goto label_1edc3c;
        case 0x1edc40u: goto label_1edc40;
        case 0x1edc44u: goto label_1edc44;
        case 0x1edc48u: goto label_1edc48;
        case 0x1edc4cu: goto label_1edc4c;
        case 0x1edc50u: goto label_1edc50;
        case 0x1edc54u: goto label_1edc54;
        case 0x1edc58u: goto label_1edc58;
        case 0x1edc5cu: goto label_1edc5c;
        case 0x1edc60u: goto label_1edc60;
        case 0x1edc64u: goto label_1edc64;
        case 0x1edc68u: goto label_1edc68;
        case 0x1edc6cu: goto label_1edc6c;
        case 0x1edc70u: goto label_1edc70;
        case 0x1edc74u: goto label_1edc74;
        case 0x1edc78u: goto label_1edc78;
        case 0x1edc7cu: goto label_1edc7c;
        case 0x1edc80u: goto label_1edc80;
        case 0x1edc84u: goto label_1edc84;
        case 0x1edc88u: goto label_1edc88;
        case 0x1edc8cu: goto label_1edc8c;
        case 0x1edc90u: goto label_1edc90;
        case 0x1edc94u: goto label_1edc94;
        case 0x1edc98u: goto label_1edc98;
        case 0x1edc9cu: goto label_1edc9c;
        case 0x1edca0u: goto label_1edca0;
        case 0x1edca4u: goto label_1edca4;
        case 0x1edca8u: goto label_1edca8;
        case 0x1edcacu: goto label_1edcac;
        case 0x1edcb0u: goto label_1edcb0;
        case 0x1edcb4u: goto label_1edcb4;
        case 0x1edcb8u: goto label_1edcb8;
        case 0x1edcbcu: goto label_1edcbc;
        case 0x1edcc0u: goto label_1edcc0;
        case 0x1edcc4u: goto label_1edcc4;
        case 0x1edcc8u: goto label_1edcc8;
        case 0x1edcccu: goto label_1edccc;
        case 0x1edcd0u: goto label_1edcd0;
        case 0x1edcd4u: goto label_1edcd4;
        case 0x1edcd8u: goto label_1edcd8;
        case 0x1edcdcu: goto label_1edcdc;
        case 0x1edce0u: goto label_1edce0;
        case 0x1edce4u: goto label_1edce4;
        case 0x1edce8u: goto label_1edce8;
        case 0x1edcecu: goto label_1edcec;
        case 0x1edcf0u: goto label_1edcf0;
        case 0x1edcf4u: goto label_1edcf4;
        case 0x1edcf8u: goto label_1edcf8;
        case 0x1edcfcu: goto label_1edcfc;
        case 0x1edd00u: goto label_1edd00;
        case 0x1edd04u: goto label_1edd04;
        case 0x1edd08u: goto label_1edd08;
        case 0x1edd0cu: goto label_1edd0c;
        case 0x1edd10u: goto label_1edd10;
        case 0x1edd14u: goto label_1edd14;
        case 0x1edd18u: goto label_1edd18;
        case 0x1edd1cu: goto label_1edd1c;
        case 0x1edd20u: goto label_1edd20;
        case 0x1edd24u: goto label_1edd24;
        case 0x1edd28u: goto label_1edd28;
        case 0x1edd2cu: goto label_1edd2c;
        case 0x1edd30u: goto label_1edd30;
        case 0x1edd34u: goto label_1edd34;
        case 0x1edd38u: goto label_1edd38;
        case 0x1edd3cu: goto label_1edd3c;
        case 0x1edd40u: goto label_1edd40;
        case 0x1edd44u: goto label_1edd44;
        case 0x1edd48u: goto label_1edd48;
        case 0x1edd4cu: goto label_1edd4c;
        case 0x1edd50u: goto label_1edd50;
        case 0x1edd54u: goto label_1edd54;
        case 0x1edd58u: goto label_1edd58;
        case 0x1edd5cu: goto label_1edd5c;
        case 0x1edd60u: goto label_1edd60;
        case 0x1edd64u: goto label_1edd64;
        case 0x1edd68u: goto label_1edd68;
        case 0x1edd6cu: goto label_1edd6c;
        case 0x1edd70u: goto label_1edd70;
        case 0x1edd74u: goto label_1edd74;
        case 0x1edd78u: goto label_1edd78;
        case 0x1edd7cu: goto label_1edd7c;
        case 0x1edd80u: goto label_1edd80;
        case 0x1edd84u: goto label_1edd84;
        case 0x1edd88u: goto label_1edd88;
        case 0x1edd8cu: goto label_1edd8c;
        case 0x1edd90u: goto label_1edd90;
        case 0x1edd94u: goto label_1edd94;
        case 0x1edd98u: goto label_1edd98;
        case 0x1edd9cu: goto label_1edd9c;
        case 0x1edda0u: goto label_1edda0;
        case 0x1edda4u: goto label_1edda4;
        case 0x1edda8u: goto label_1edda8;
        case 0x1eddacu: goto label_1eddac;
        case 0x1eddb0u: goto label_1eddb0;
        case 0x1eddb4u: goto label_1eddb4;
        case 0x1eddb8u: goto label_1eddb8;
        case 0x1eddbcu: goto label_1eddbc;
        case 0x1eddc0u: goto label_1eddc0;
        case 0x1eddc4u: goto label_1eddc4;
        case 0x1eddc8u: goto label_1eddc8;
        case 0x1eddccu: goto label_1eddcc;
        case 0x1eddd0u: goto label_1eddd0;
        case 0x1eddd4u: goto label_1eddd4;
        case 0x1eddd8u: goto label_1eddd8;
        case 0x1edddcu: goto label_1edddc;
        case 0x1edde0u: goto label_1edde0;
        case 0x1edde4u: goto label_1edde4;
        case 0x1edde8u: goto label_1edde8;
        case 0x1eddecu: goto label_1eddec;
        case 0x1eddf0u: goto label_1eddf0;
        case 0x1eddf4u: goto label_1eddf4;
        case 0x1eddf8u: goto label_1eddf8;
        case 0x1eddfcu: goto label_1eddfc;
        case 0x1ede00u: goto label_1ede00;
        case 0x1ede04u: goto label_1ede04;
        case 0x1ede08u: goto label_1ede08;
        case 0x1ede0cu: goto label_1ede0c;
        case 0x1ede10u: goto label_1ede10;
        case 0x1ede14u: goto label_1ede14;
        case 0x1ede18u: goto label_1ede18;
        case 0x1ede1cu: goto label_1ede1c;
        case 0x1ede20u: goto label_1ede20;
        case 0x1ede24u: goto label_1ede24;
        case 0x1ede28u: goto label_1ede28;
        case 0x1ede2cu: goto label_1ede2c;
        case 0x1ede30u: goto label_1ede30;
        case 0x1ede34u: goto label_1ede34;
        case 0x1ede38u: goto label_1ede38;
        case 0x1ede3cu: goto label_1ede3c;
        case 0x1ede40u: goto label_1ede40;
        case 0x1ede44u: goto label_1ede44;
        case 0x1ede48u: goto label_1ede48;
        case 0x1ede4cu: goto label_1ede4c;
        case 0x1ede50u: goto label_1ede50;
        case 0x1ede54u: goto label_1ede54;
        case 0x1ede58u: goto label_1ede58;
        case 0x1ede5cu: goto label_1ede5c;
        case 0x1ede60u: goto label_1ede60;
        case 0x1ede64u: goto label_1ede64;
        case 0x1ede68u: goto label_1ede68;
        case 0x1ede6cu: goto label_1ede6c;
        case 0x1ede70u: goto label_1ede70;
        case 0x1ede74u: goto label_1ede74;
        case 0x1ede78u: goto label_1ede78;
        case 0x1ede7cu: goto label_1ede7c;
        case 0x1ede80u: goto label_1ede80;
        case 0x1ede84u: goto label_1ede84;
        case 0x1ede88u: goto label_1ede88;
        case 0x1ede8cu: goto label_1ede8c;
        case 0x1ede90u: goto label_1ede90;
        case 0x1ede94u: goto label_1ede94;
        case 0x1ede98u: goto label_1ede98;
        case 0x1ede9cu: goto label_1ede9c;
        case 0x1edea0u: goto label_1edea0;
        case 0x1edea4u: goto label_1edea4;
        case 0x1edea8u: goto label_1edea8;
        case 0x1edeacu: goto label_1edeac;
        case 0x1edeb0u: goto label_1edeb0;
        case 0x1edeb4u: goto label_1edeb4;
        case 0x1edeb8u: goto label_1edeb8;
        case 0x1edebcu: goto label_1edebc;
        case 0x1edec0u: goto label_1edec0;
        case 0x1edec4u: goto label_1edec4;
        case 0x1edec8u: goto label_1edec8;
        case 0x1edeccu: goto label_1edecc;
        case 0x1eded0u: goto label_1eded0;
        case 0x1eded4u: goto label_1eded4;
        case 0x1eded8u: goto label_1eded8;
        case 0x1ededcu: goto label_1ededc;
        case 0x1edee0u: goto label_1edee0;
        case 0x1edee4u: goto label_1edee4;
        case 0x1edee8u: goto label_1edee8;
        case 0x1edeecu: goto label_1edeec;
        case 0x1edef0u: goto label_1edef0;
        case 0x1edef4u: goto label_1edef4;
        case 0x1edef8u: goto label_1edef8;
        case 0x1edefcu: goto label_1edefc;
        case 0x1edf00u: goto label_1edf00;
        case 0x1edf04u: goto label_1edf04;
        case 0x1edf08u: goto label_1edf08;
        case 0x1edf0cu: goto label_1edf0c;
        case 0x1edf10u: goto label_1edf10;
        case 0x1edf14u: goto label_1edf14;
        case 0x1edf18u: goto label_1edf18;
        case 0x1edf1cu: goto label_1edf1c;
        case 0x1edf20u: goto label_1edf20;
        case 0x1edf24u: goto label_1edf24;
        case 0x1edf28u: goto label_1edf28;
        case 0x1edf2cu: goto label_1edf2c;
        case 0x1edf30u: goto label_1edf30;
        case 0x1edf34u: goto label_1edf34;
        case 0x1edf38u: goto label_1edf38;
        case 0x1edf3cu: goto label_1edf3c;
        case 0x1edf40u: goto label_1edf40;
        case 0x1edf44u: goto label_1edf44;
        case 0x1edf48u: goto label_1edf48;
        case 0x1edf4cu: goto label_1edf4c;
        case 0x1edf50u: goto label_1edf50;
        case 0x1edf54u: goto label_1edf54;
        case 0x1edf58u: goto label_1edf58;
        case 0x1edf5cu: goto label_1edf5c;
        case 0x1edf60u: goto label_1edf60;
        case 0x1edf64u: goto label_1edf64;
        case 0x1edf68u: goto label_1edf68;
        case 0x1edf6cu: goto label_1edf6c;
        case 0x1edf70u: goto label_1edf70;
        case 0x1edf74u: goto label_1edf74;
        case 0x1edf78u: goto label_1edf78;
        case 0x1edf7cu: goto label_1edf7c;
        case 0x1edf80u: goto label_1edf80;
        case 0x1edf84u: goto label_1edf84;
        case 0x1edf88u: goto label_1edf88;
        case 0x1edf8cu: goto label_1edf8c;
        case 0x1edf90u: goto label_1edf90;
        case 0x1edf94u: goto label_1edf94;
        case 0x1edf98u: goto label_1edf98;
        case 0x1edf9cu: goto label_1edf9c;
        case 0x1edfa0u: goto label_1edfa0;
        case 0x1edfa4u: goto label_1edfa4;
        case 0x1edfa8u: goto label_1edfa8;
        case 0x1edfacu: goto label_1edfac;
        case 0x1edfb0u: goto label_1edfb0;
        case 0x1edfb4u: goto label_1edfb4;
        case 0x1edfb8u: goto label_1edfb8;
        case 0x1edfbcu: goto label_1edfbc;
        case 0x1edfc0u: goto label_1edfc0;
        case 0x1edfc4u: goto label_1edfc4;
        case 0x1edfc8u: goto label_1edfc8;
        case 0x1edfccu: goto label_1edfcc;
        case 0x1edfd0u: goto label_1edfd0;
        case 0x1edfd4u: goto label_1edfd4;
        case 0x1edfd8u: goto label_1edfd8;
        case 0x1edfdcu: goto label_1edfdc;
        case 0x1edfe0u: goto label_1edfe0;
        case 0x1edfe4u: goto label_1edfe4;
        case 0x1edfe8u: goto label_1edfe8;
        case 0x1edfecu: goto label_1edfec;
        case 0x1edff0u: goto label_1edff0;
        case 0x1edff4u: goto label_1edff4;
        case 0x1edff8u: goto label_1edff8;
        case 0x1edffcu: goto label_1edffc;
        case 0x1ee000u: goto label_1ee000;
        case 0x1ee004u: goto label_1ee004;
        case 0x1ee008u: goto label_1ee008;
        case 0x1ee00cu: goto label_1ee00c;
        case 0x1ee010u: goto label_1ee010;
        case 0x1ee014u: goto label_1ee014;
        case 0x1ee018u: goto label_1ee018;
        case 0x1ee01cu: goto label_1ee01c;
        case 0x1ee020u: goto label_1ee020;
        case 0x1ee024u: goto label_1ee024;
        case 0x1ee028u: goto label_1ee028;
        case 0x1ee02cu: goto label_1ee02c;
        case 0x1ee030u: goto label_1ee030;
        case 0x1ee034u: goto label_1ee034;
        case 0x1ee038u: goto label_1ee038;
        case 0x1ee03cu: goto label_1ee03c;
        case 0x1ee040u: goto label_1ee040;
        case 0x1ee044u: goto label_1ee044;
        case 0x1ee048u: goto label_1ee048;
        case 0x1ee04cu: goto label_1ee04c;
        case 0x1ee050u: goto label_1ee050;
        case 0x1ee054u: goto label_1ee054;
        case 0x1ee058u: goto label_1ee058;
        case 0x1ee05cu: goto label_1ee05c;
        case 0x1ee060u: goto label_1ee060;
        case 0x1ee064u: goto label_1ee064;
        case 0x1ee068u: goto label_1ee068;
        case 0x1ee06cu: goto label_1ee06c;
        case 0x1ee070u: goto label_1ee070;
        case 0x1ee074u: goto label_1ee074;
        case 0x1ee078u: goto label_1ee078;
        case 0x1ee07cu: goto label_1ee07c;
        case 0x1ee080u: goto label_1ee080;
        case 0x1ee084u: goto label_1ee084;
        case 0x1ee088u: goto label_1ee088;
        case 0x1ee08cu: goto label_1ee08c;
        case 0x1ee090u: goto label_1ee090;
        case 0x1ee094u: goto label_1ee094;
        case 0x1ee098u: goto label_1ee098;
        case 0x1ee09cu: goto label_1ee09c;
        case 0x1ee0a0u: goto label_1ee0a0;
        case 0x1ee0a4u: goto label_1ee0a4;
        case 0x1ee0a8u: goto label_1ee0a8;
        case 0x1ee0acu: goto label_1ee0ac;
        case 0x1ee0b0u: goto label_1ee0b0;
        case 0x1ee0b4u: goto label_1ee0b4;
        case 0x1ee0b8u: goto label_1ee0b8;
        case 0x1ee0bcu: goto label_1ee0bc;
        case 0x1ee0c0u: goto label_1ee0c0;
        case 0x1ee0c4u: goto label_1ee0c4;
        case 0x1ee0c8u: goto label_1ee0c8;
        case 0x1ee0ccu: goto label_1ee0cc;
        case 0x1ee0d0u: goto label_1ee0d0;
        case 0x1ee0d4u: goto label_1ee0d4;
        case 0x1ee0d8u: goto label_1ee0d8;
        case 0x1ee0dcu: goto label_1ee0dc;
        case 0x1ee0e0u: goto label_1ee0e0;
        case 0x1ee0e4u: goto label_1ee0e4;
        case 0x1ee0e8u: goto label_1ee0e8;
        case 0x1ee0ecu: goto label_1ee0ec;
        case 0x1ee0f0u: goto label_1ee0f0;
        case 0x1ee0f4u: goto label_1ee0f4;
        case 0x1ee0f8u: goto label_1ee0f8;
        case 0x1ee0fcu: goto label_1ee0fc;
        case 0x1ee100u: goto label_1ee100;
        case 0x1ee104u: goto label_1ee104;
        case 0x1ee108u: goto label_1ee108;
        case 0x1ee10cu: goto label_1ee10c;
        case 0x1ee110u: goto label_1ee110;
        case 0x1ee114u: goto label_1ee114;
        case 0x1ee118u: goto label_1ee118;
        case 0x1ee11cu: goto label_1ee11c;
        case 0x1ee120u: goto label_1ee120;
        case 0x1ee124u: goto label_1ee124;
        case 0x1ee128u: goto label_1ee128;
        case 0x1ee12cu: goto label_1ee12c;
        case 0x1ee130u: goto label_1ee130;
        case 0x1ee134u: goto label_1ee134;
        case 0x1ee138u: goto label_1ee138;
        case 0x1ee13cu: goto label_1ee13c;
        case 0x1ee140u: goto label_1ee140;
        case 0x1ee144u: goto label_1ee144;
        case 0x1ee148u: goto label_1ee148;
        case 0x1ee14cu: goto label_1ee14c;
        case 0x1ee150u: goto label_1ee150;
        case 0x1ee154u: goto label_1ee154;
        case 0x1ee158u: goto label_1ee158;
        case 0x1ee15cu: goto label_1ee15c;
        case 0x1ee160u: goto label_1ee160;
        case 0x1ee164u: goto label_1ee164;
        case 0x1ee168u: goto label_1ee168;
        case 0x1ee16cu: goto label_1ee16c;
        case 0x1ee170u: goto label_1ee170;
        case 0x1ee174u: goto label_1ee174;
        case 0x1ee178u: goto label_1ee178;
        case 0x1ee17cu: goto label_1ee17c;
        case 0x1ee180u: goto label_1ee180;
        case 0x1ee184u: goto label_1ee184;
        case 0x1ee188u: goto label_1ee188;
        case 0x1ee18cu: goto label_1ee18c;
        case 0x1ee190u: goto label_1ee190;
        case 0x1ee194u: goto label_1ee194;
        case 0x1ee198u: goto label_1ee198;
        case 0x1ee19cu: goto label_1ee19c;
        case 0x1ee1a0u: goto label_1ee1a0;
        case 0x1ee1a4u: goto label_1ee1a4;
        case 0x1ee1a8u: goto label_1ee1a8;
        case 0x1ee1acu: goto label_1ee1ac;
        case 0x1ee1b0u: goto label_1ee1b0;
        case 0x1ee1b4u: goto label_1ee1b4;
        case 0x1ee1b8u: goto label_1ee1b8;
        case 0x1ee1bcu: goto label_1ee1bc;
        case 0x1ee1c0u: goto label_1ee1c0;
        case 0x1ee1c4u: goto label_1ee1c4;
        case 0x1ee1c8u: goto label_1ee1c8;
        case 0x1ee1ccu: goto label_1ee1cc;
        case 0x1ee1d0u: goto label_1ee1d0;
        case 0x1ee1d4u: goto label_1ee1d4;
        case 0x1ee1d8u: goto label_1ee1d8;
        case 0x1ee1dcu: goto label_1ee1dc;
        case 0x1ee1e0u: goto label_1ee1e0;
        case 0x1ee1e4u: goto label_1ee1e4;
        case 0x1ee1e8u: goto label_1ee1e8;
        case 0x1ee1ecu: goto label_1ee1ec;
        case 0x1ee1f0u: goto label_1ee1f0;
        case 0x1ee1f4u: goto label_1ee1f4;
        case 0x1ee1f8u: goto label_1ee1f8;
        case 0x1ee1fcu: goto label_1ee1fc;
        case 0x1ee200u: goto label_1ee200;
        case 0x1ee204u: goto label_1ee204;
        case 0x1ee208u: goto label_1ee208;
        case 0x1ee20cu: goto label_1ee20c;
        case 0x1ee210u: goto label_1ee210;
        case 0x1ee214u: goto label_1ee214;
        case 0x1ee218u: goto label_1ee218;
        case 0x1ee21cu: goto label_1ee21c;
        case 0x1ee220u: goto label_1ee220;
        case 0x1ee224u: goto label_1ee224;
        case 0x1ee228u: goto label_1ee228;
        case 0x1ee22cu: goto label_1ee22c;
        case 0x1ee230u: goto label_1ee230;
        case 0x1ee234u: goto label_1ee234;
        case 0x1ee238u: goto label_1ee238;
        case 0x1ee23cu: goto label_1ee23c;
        case 0x1ee240u: goto label_1ee240;
        case 0x1ee244u: goto label_1ee244;
        case 0x1ee248u: goto label_1ee248;
        case 0x1ee24cu: goto label_1ee24c;
        case 0x1ee250u: goto label_1ee250;
        case 0x1ee254u: goto label_1ee254;
        case 0x1ee258u: goto label_1ee258;
        case 0x1ee25cu: goto label_1ee25c;
        case 0x1ee260u: goto label_1ee260;
        case 0x1ee264u: goto label_1ee264;
        case 0x1ee268u: goto label_1ee268;
        case 0x1ee26cu: goto label_1ee26c;
        case 0x1ee270u: goto label_1ee270;
        case 0x1ee274u: goto label_1ee274;
        case 0x1ee278u: goto label_1ee278;
        case 0x1ee27cu: goto label_1ee27c;
        case 0x1ee280u: goto label_1ee280;
        case 0x1ee284u: goto label_1ee284;
        case 0x1ee288u: goto label_1ee288;
        case 0x1ee28cu: goto label_1ee28c;
        case 0x1ee290u: goto label_1ee290;
        case 0x1ee294u: goto label_1ee294;
        case 0x1ee298u: goto label_1ee298;
        case 0x1ee29cu: goto label_1ee29c;
        case 0x1ee2a0u: goto label_1ee2a0;
        case 0x1ee2a4u: goto label_1ee2a4;
        case 0x1ee2a8u: goto label_1ee2a8;
        case 0x1ee2acu: goto label_1ee2ac;
        case 0x1ee2b0u: goto label_1ee2b0;
        case 0x1ee2b4u: goto label_1ee2b4;
        case 0x1ee2b8u: goto label_1ee2b8;
        case 0x1ee2bcu: goto label_1ee2bc;
        case 0x1ee2c0u: goto label_1ee2c0;
        case 0x1ee2c4u: goto label_1ee2c4;
        case 0x1ee2c8u: goto label_1ee2c8;
        case 0x1ee2ccu: goto label_1ee2cc;
        case 0x1ee2d0u: goto label_1ee2d0;
        case 0x1ee2d4u: goto label_1ee2d4;
        case 0x1ee2d8u: goto label_1ee2d8;
        case 0x1ee2dcu: goto label_1ee2dc;
        case 0x1ee2e0u: goto label_1ee2e0;
        case 0x1ee2e4u: goto label_1ee2e4;
        case 0x1ee2e8u: goto label_1ee2e8;
        case 0x1ee2ecu: goto label_1ee2ec;
        case 0x1ee2f0u: goto label_1ee2f0;
        case 0x1ee2f4u: goto label_1ee2f4;
        case 0x1ee2f8u: goto label_1ee2f8;
        case 0x1ee2fcu: goto label_1ee2fc;
        case 0x1ee300u: goto label_1ee300;
        case 0x1ee304u: goto label_1ee304;
        case 0x1ee308u: goto label_1ee308;
        case 0x1ee30cu: goto label_1ee30c;
        case 0x1ee310u: goto label_1ee310;
        case 0x1ee314u: goto label_1ee314;
        case 0x1ee318u: goto label_1ee318;
        case 0x1ee31cu: goto label_1ee31c;
        case 0x1ee320u: goto label_1ee320;
        case 0x1ee324u: goto label_1ee324;
        case 0x1ee328u: goto label_1ee328;
        case 0x1ee32cu: goto label_1ee32c;
        case 0x1ee330u: goto label_1ee330;
        case 0x1ee334u: goto label_1ee334;
        case 0x1ee338u: goto label_1ee338;
        case 0x1ee33cu: goto label_1ee33c;
        case 0x1ee340u: goto label_1ee340;
        case 0x1ee344u: goto label_1ee344;
        case 0x1ee348u: goto label_1ee348;
        case 0x1ee34cu: goto label_1ee34c;
        case 0x1ee350u: goto label_1ee350;
        case 0x1ee354u: goto label_1ee354;
        case 0x1ee358u: goto label_1ee358;
        case 0x1ee35cu: goto label_1ee35c;
        case 0x1ee360u: goto label_1ee360;
        case 0x1ee364u: goto label_1ee364;
        case 0x1ee368u: goto label_1ee368;
        case 0x1ee36cu: goto label_1ee36c;
        case 0x1ee370u: goto label_1ee370;
        case 0x1ee374u: goto label_1ee374;
        case 0x1ee378u: goto label_1ee378;
        case 0x1ee37cu: goto label_1ee37c;
        case 0x1ee380u: goto label_1ee380;
        case 0x1ee384u: goto label_1ee384;
        case 0x1ee388u: goto label_1ee388;
        case 0x1ee38cu: goto label_1ee38c;
        case 0x1ee390u: goto label_1ee390;
        case 0x1ee394u: goto label_1ee394;
        case 0x1ee398u: goto label_1ee398;
        case 0x1ee39cu: goto label_1ee39c;
        case 0x1ee3a0u: goto label_1ee3a0;
        case 0x1ee3a4u: goto label_1ee3a4;
        case 0x1ee3a8u: goto label_1ee3a8;
        case 0x1ee3acu: goto label_1ee3ac;
        case 0x1ee3b0u: goto label_1ee3b0;
        case 0x1ee3b4u: goto label_1ee3b4;
        case 0x1ee3b8u: goto label_1ee3b8;
        case 0x1ee3bcu: goto label_1ee3bc;
        case 0x1ee3c0u: goto label_1ee3c0;
        case 0x1ee3c4u: goto label_1ee3c4;
        case 0x1ee3c8u: goto label_1ee3c8;
        case 0x1ee3ccu: goto label_1ee3cc;
        case 0x1ee3d0u: goto label_1ee3d0;
        case 0x1ee3d4u: goto label_1ee3d4;
        case 0x1ee3d8u: goto label_1ee3d8;
        case 0x1ee3dcu: goto label_1ee3dc;
        case 0x1ee3e0u: goto label_1ee3e0;
        case 0x1ee3e4u: goto label_1ee3e4;
        case 0x1ee3e8u: goto label_1ee3e8;
        case 0x1ee3ecu: goto label_1ee3ec;
        case 0x1ee3f0u: goto label_1ee3f0;
        case 0x1ee3f4u: goto label_1ee3f4;
        case 0x1ee3f8u: goto label_1ee3f8;
        case 0x1ee3fcu: goto label_1ee3fc;
        case 0x1ee400u: goto label_1ee400;
        case 0x1ee404u: goto label_1ee404;
        case 0x1ee408u: goto label_1ee408;
        case 0x1ee40cu: goto label_1ee40c;
        case 0x1ee410u: goto label_1ee410;
        case 0x1ee414u: goto label_1ee414;
        case 0x1ee418u: goto label_1ee418;
        case 0x1ee41cu: goto label_1ee41c;
        case 0x1ee420u: goto label_1ee420;
        case 0x1ee424u: goto label_1ee424;
        case 0x1ee428u: goto label_1ee428;
        case 0x1ee42cu: goto label_1ee42c;
        case 0x1ee430u: goto label_1ee430;
        case 0x1ee434u: goto label_1ee434;
        case 0x1ee438u: goto label_1ee438;
        case 0x1ee43cu: goto label_1ee43c;
        case 0x1ee440u: goto label_1ee440;
        case 0x1ee444u: goto label_1ee444;
        case 0x1ee448u: goto label_1ee448;
        case 0x1ee44cu: goto label_1ee44c;
        case 0x1ee450u: goto label_1ee450;
        case 0x1ee454u: goto label_1ee454;
        case 0x1ee458u: goto label_1ee458;
        case 0x1ee45cu: goto label_1ee45c;
        case 0x1ee460u: goto label_1ee460;
        case 0x1ee464u: goto label_1ee464;
        case 0x1ee468u: goto label_1ee468;
        case 0x1ee46cu: goto label_1ee46c;
        case 0x1ee470u: goto label_1ee470;
        case 0x1ee474u: goto label_1ee474;
        case 0x1ee478u: goto label_1ee478;
        case 0x1ee47cu: goto label_1ee47c;
        case 0x1ee480u: goto label_1ee480;
        case 0x1ee484u: goto label_1ee484;
        case 0x1ee488u: goto label_1ee488;
        case 0x1ee48cu: goto label_1ee48c;
        case 0x1ee490u: goto label_1ee490;
        case 0x1ee494u: goto label_1ee494;
        case 0x1ee498u: goto label_1ee498;
        case 0x1ee49cu: goto label_1ee49c;
        case 0x1ee4a0u: goto label_1ee4a0;
        case 0x1ee4a4u: goto label_1ee4a4;
        case 0x1ee4a8u: goto label_1ee4a8;
        case 0x1ee4acu: goto label_1ee4ac;
        case 0x1ee4b0u: goto label_1ee4b0;
        case 0x1ee4b4u: goto label_1ee4b4;
        case 0x1ee4b8u: goto label_1ee4b8;
        case 0x1ee4bcu: goto label_1ee4bc;
        case 0x1ee4c0u: goto label_1ee4c0;
        case 0x1ee4c4u: goto label_1ee4c4;
        case 0x1ee4c8u: goto label_1ee4c8;
        case 0x1ee4ccu: goto label_1ee4cc;
        case 0x1ee4d0u: goto label_1ee4d0;
        case 0x1ee4d4u: goto label_1ee4d4;
        case 0x1ee4d8u: goto label_1ee4d8;
        case 0x1ee4dcu: goto label_1ee4dc;
        case 0x1ee4e0u: goto label_1ee4e0;
        case 0x1ee4e4u: goto label_1ee4e4;
        case 0x1ee4e8u: goto label_1ee4e8;
        case 0x1ee4ecu: goto label_1ee4ec;
        case 0x1ee4f0u: goto label_1ee4f0;
        case 0x1ee4f4u: goto label_1ee4f4;
        case 0x1ee4f8u: goto label_1ee4f8;
        case 0x1ee4fcu: goto label_1ee4fc;
        case 0x1ee500u: goto label_1ee500;
        case 0x1ee504u: goto label_1ee504;
        case 0x1ee508u: goto label_1ee508;
        case 0x1ee50cu: goto label_1ee50c;
        case 0x1ee510u: goto label_1ee510;
        case 0x1ee514u: goto label_1ee514;
        case 0x1ee518u: goto label_1ee518;
        case 0x1ee51cu: goto label_1ee51c;
        case 0x1ee520u: goto label_1ee520;
        case 0x1ee524u: goto label_1ee524;
        case 0x1ee528u: goto label_1ee528;
        case 0x1ee52cu: goto label_1ee52c;
        case 0x1ee530u: goto label_1ee530;
        case 0x1ee534u: goto label_1ee534;
        case 0x1ee538u: goto label_1ee538;
        case 0x1ee53cu: goto label_1ee53c;
        case 0x1ee540u: goto label_1ee540;
        case 0x1ee544u: goto label_1ee544;
        case 0x1ee548u: goto label_1ee548;
        case 0x1ee54cu: goto label_1ee54c;
        case 0x1ee550u: goto label_1ee550;
        case 0x1ee554u: goto label_1ee554;
        case 0x1ee558u: goto label_1ee558;
        case 0x1ee55cu: goto label_1ee55c;
        case 0x1ee560u: goto label_1ee560;
        case 0x1ee564u: goto label_1ee564;
        case 0x1ee568u: goto label_1ee568;
        case 0x1ee56cu: goto label_1ee56c;
        case 0x1ee570u: goto label_1ee570;
        case 0x1ee574u: goto label_1ee574;
        case 0x1ee578u: goto label_1ee578;
        case 0x1ee57cu: goto label_1ee57c;
        case 0x1ee580u: goto label_1ee580;
        case 0x1ee584u: goto label_1ee584;
        case 0x1ee588u: goto label_1ee588;
        case 0x1ee58cu: goto label_1ee58c;
        case 0x1ee590u: goto label_1ee590;
        case 0x1ee594u: goto label_1ee594;
        case 0x1ee598u: goto label_1ee598;
        case 0x1ee59cu: goto label_1ee59c;
        case 0x1ee5a0u: goto label_1ee5a0;
        case 0x1ee5a4u: goto label_1ee5a4;
        case 0x1ee5a8u: goto label_1ee5a8;
        case 0x1ee5acu: goto label_1ee5ac;
        case 0x1ee5b0u: goto label_1ee5b0;
        case 0x1ee5b4u: goto label_1ee5b4;
        case 0x1ee5b8u: goto label_1ee5b8;
        case 0x1ee5bcu: goto label_1ee5bc;
        case 0x1ee5c0u: goto label_1ee5c0;
        case 0x1ee5c4u: goto label_1ee5c4;
        case 0x1ee5c8u: goto label_1ee5c8;
        case 0x1ee5ccu: goto label_1ee5cc;
        case 0x1ee5d0u: goto label_1ee5d0;
        case 0x1ee5d4u: goto label_1ee5d4;
        case 0x1ee5d8u: goto label_1ee5d8;
        case 0x1ee5dcu: goto label_1ee5dc;
        case 0x1ee5e0u: goto label_1ee5e0;
        case 0x1ee5e4u: goto label_1ee5e4;
        case 0x1ee5e8u: goto label_1ee5e8;
        case 0x1ee5ecu: goto label_1ee5ec;
        case 0x1ee5f0u: goto label_1ee5f0;
        case 0x1ee5f4u: goto label_1ee5f4;
        case 0x1ee5f8u: goto label_1ee5f8;
        case 0x1ee5fcu: goto label_1ee5fc;
        case 0x1ee600u: goto label_1ee600;
        case 0x1ee604u: goto label_1ee604;
        case 0x1ee608u: goto label_1ee608;
        case 0x1ee60cu: goto label_1ee60c;
        case 0x1ee610u: goto label_1ee610;
        case 0x1ee614u: goto label_1ee614;
        case 0x1ee618u: goto label_1ee618;
        case 0x1ee61cu: goto label_1ee61c;
        case 0x1ee620u: goto label_1ee620;
        case 0x1ee624u: goto label_1ee624;
        case 0x1ee628u: goto label_1ee628;
        case 0x1ee62cu: goto label_1ee62c;
        case 0x1ee630u: goto label_1ee630;
        case 0x1ee634u: goto label_1ee634;
        case 0x1ee638u: goto label_1ee638;
        case 0x1ee63cu: goto label_1ee63c;
        case 0x1ee640u: goto label_1ee640;
        case 0x1ee644u: goto label_1ee644;
        case 0x1ee648u: goto label_1ee648;
        case 0x1ee64cu: goto label_1ee64c;
        case 0x1ee650u: goto label_1ee650;
        case 0x1ee654u: goto label_1ee654;
        case 0x1ee658u: goto label_1ee658;
        case 0x1ee65cu: goto label_1ee65c;
        case 0x1ee660u: goto label_1ee660;
        case 0x1ee664u: goto label_1ee664;
        case 0x1ee668u: goto label_1ee668;
        case 0x1ee66cu: goto label_1ee66c;
        case 0x1ee670u: goto label_1ee670;
        case 0x1ee674u: goto label_1ee674;
        case 0x1ee678u: goto label_1ee678;
        case 0x1ee67cu: goto label_1ee67c;
        case 0x1ee680u: goto label_1ee680;
        case 0x1ee684u: goto label_1ee684;
        case 0x1ee688u: goto label_1ee688;
        case 0x1ee68cu: goto label_1ee68c;
        case 0x1ee690u: goto label_1ee690;
        case 0x1ee694u: goto label_1ee694;
        case 0x1ee698u: goto label_1ee698;
        case 0x1ee69cu: goto label_1ee69c;
        case 0x1ee6a0u: goto label_1ee6a0;
        case 0x1ee6a4u: goto label_1ee6a4;
        case 0x1ee6a8u: goto label_1ee6a8;
        case 0x1ee6acu: goto label_1ee6ac;
        case 0x1ee6b0u: goto label_1ee6b0;
        case 0x1ee6b4u: goto label_1ee6b4;
        case 0x1ee6b8u: goto label_1ee6b8;
        case 0x1ee6bcu: goto label_1ee6bc;
        case 0x1ee6c0u: goto label_1ee6c0;
        case 0x1ee6c4u: goto label_1ee6c4;
        case 0x1ee6c8u: goto label_1ee6c8;
        case 0x1ee6ccu: goto label_1ee6cc;
        case 0x1ee6d0u: goto label_1ee6d0;
        case 0x1ee6d4u: goto label_1ee6d4;
        case 0x1ee6d8u: goto label_1ee6d8;
        case 0x1ee6dcu: goto label_1ee6dc;
        case 0x1ee6e0u: goto label_1ee6e0;
        case 0x1ee6e4u: goto label_1ee6e4;
        case 0x1ee6e8u: goto label_1ee6e8;
        case 0x1ee6ecu: goto label_1ee6ec;
        case 0x1ee6f0u: goto label_1ee6f0;
        case 0x1ee6f4u: goto label_1ee6f4;
        case 0x1ee6f8u: goto label_1ee6f8;
        case 0x1ee6fcu: goto label_1ee6fc;
        case 0x1ee700u: goto label_1ee700;
        case 0x1ee704u: goto label_1ee704;
        case 0x1ee708u: goto label_1ee708;
        case 0x1ee70cu: goto label_1ee70c;
        case 0x1ee710u: goto label_1ee710;
        case 0x1ee714u: goto label_1ee714;
        case 0x1ee718u: goto label_1ee718;
        case 0x1ee71cu: goto label_1ee71c;
        case 0x1ee720u: goto label_1ee720;
        case 0x1ee724u: goto label_1ee724;
        case 0x1ee728u: goto label_1ee728;
        case 0x1ee72cu: goto label_1ee72c;
        case 0x1ee730u: goto label_1ee730;
        case 0x1ee734u: goto label_1ee734;
        case 0x1ee738u: goto label_1ee738;
        case 0x1ee73cu: goto label_1ee73c;
        case 0x1ee740u: goto label_1ee740;
        case 0x1ee744u: goto label_1ee744;
        case 0x1ee748u: goto label_1ee748;
        case 0x1ee74cu: goto label_1ee74c;
        case 0x1ee750u: goto label_1ee750;
        case 0x1ee754u: goto label_1ee754;
        case 0x1ee758u: goto label_1ee758;
        case 0x1ee75cu: goto label_1ee75c;
        case 0x1ee760u: goto label_1ee760;
        case 0x1ee764u: goto label_1ee764;
        case 0x1ee768u: goto label_1ee768;
        case 0x1ee76cu: goto label_1ee76c;
        case 0x1ee770u: goto label_1ee770;
        case 0x1ee774u: goto label_1ee774;
        case 0x1ee778u: goto label_1ee778;
        case 0x1ee77cu: goto label_1ee77c;
        case 0x1ee780u: goto label_1ee780;
        case 0x1ee784u: goto label_1ee784;
        case 0x1ee788u: goto label_1ee788;
        case 0x1ee78cu: goto label_1ee78c;
        case 0x1ee790u: goto label_1ee790;
        case 0x1ee794u: goto label_1ee794;
        case 0x1ee798u: goto label_1ee798;
        case 0x1ee79cu: goto label_1ee79c;
        case 0x1ee7a0u: goto label_1ee7a0;
        case 0x1ee7a4u: goto label_1ee7a4;
        case 0x1ee7a8u: goto label_1ee7a8;
        case 0x1ee7acu: goto label_1ee7ac;
        case 0x1ee7b0u: goto label_1ee7b0;
        case 0x1ee7b4u: goto label_1ee7b4;
        case 0x1ee7b8u: goto label_1ee7b8;
        case 0x1ee7bcu: goto label_1ee7bc;
        case 0x1ee7c0u: goto label_1ee7c0;
        case 0x1ee7c4u: goto label_1ee7c4;
        case 0x1ee7c8u: goto label_1ee7c8;
        case 0x1ee7ccu: goto label_1ee7cc;
        case 0x1ee7d0u: goto label_1ee7d0;
        case 0x1ee7d4u: goto label_1ee7d4;
        case 0x1ee7d8u: goto label_1ee7d8;
        case 0x1ee7dcu: goto label_1ee7dc;
        case 0x1ee7e0u: goto label_1ee7e0;
        case 0x1ee7e4u: goto label_1ee7e4;
        case 0x1ee7e8u: goto label_1ee7e8;
        case 0x1ee7ecu: goto label_1ee7ec;
        case 0x1ee7f0u: goto label_1ee7f0;
        case 0x1ee7f4u: goto label_1ee7f4;
        case 0x1ee7f8u: goto label_1ee7f8;
        case 0x1ee7fcu: goto label_1ee7fc;
        case 0x1ee800u: goto label_1ee800;
        case 0x1ee804u: goto label_1ee804;
        case 0x1ee808u: goto label_1ee808;
        case 0x1ee80cu: goto label_1ee80c;
        case 0x1ee810u: goto label_1ee810;
        case 0x1ee814u: goto label_1ee814;
        case 0x1ee818u: goto label_1ee818;
        case 0x1ee81cu: goto label_1ee81c;
        case 0x1ee820u: goto label_1ee820;
        case 0x1ee824u: goto label_1ee824;
        case 0x1ee828u: goto label_1ee828;
        case 0x1ee82cu: goto label_1ee82c;
        case 0x1ee830u: goto label_1ee830;
        case 0x1ee834u: goto label_1ee834;
        case 0x1ee838u: goto label_1ee838;
        case 0x1ee83cu: goto label_1ee83c;
        case 0x1ee840u: goto label_1ee840;
        case 0x1ee844u: goto label_1ee844;
        case 0x1ee848u: goto label_1ee848;
        case 0x1ee84cu: goto label_1ee84c;
        case 0x1ee850u: goto label_1ee850;
        case 0x1ee854u: goto label_1ee854;
        case 0x1ee858u: goto label_1ee858;
        case 0x1ee85cu: goto label_1ee85c;
        case 0x1ee860u: goto label_1ee860;
        case 0x1ee864u: goto label_1ee864;
        case 0x1ee868u: goto label_1ee868;
        case 0x1ee86cu: goto label_1ee86c;
        case 0x1ee870u: goto label_1ee870;
        case 0x1ee874u: goto label_1ee874;
        case 0x1ee878u: goto label_1ee878;
        case 0x1ee87cu: goto label_1ee87c;
        case 0x1ee880u: goto label_1ee880;
        case 0x1ee884u: goto label_1ee884;
        case 0x1ee888u: goto label_1ee888;
        case 0x1ee88cu: goto label_1ee88c;
        case 0x1ee890u: goto label_1ee890;
        case 0x1ee894u: goto label_1ee894;
        case 0x1ee898u: goto label_1ee898;
        case 0x1ee89cu: goto label_1ee89c;
        case 0x1ee8a0u: goto label_1ee8a0;
        case 0x1ee8a4u: goto label_1ee8a4;
        case 0x1ee8a8u: goto label_1ee8a8;
        case 0x1ee8acu: goto label_1ee8ac;
        case 0x1ee8b0u: goto label_1ee8b0;
        case 0x1ee8b4u: goto label_1ee8b4;
        case 0x1ee8b8u: goto label_1ee8b8;
        case 0x1ee8bcu: goto label_1ee8bc;
        case 0x1ee8c0u: goto label_1ee8c0;
        case 0x1ee8c4u: goto label_1ee8c4;
        case 0x1ee8c8u: goto label_1ee8c8;
        case 0x1ee8ccu: goto label_1ee8cc;
        case 0x1ee8d0u: goto label_1ee8d0;
        case 0x1ee8d4u: goto label_1ee8d4;
        case 0x1ee8d8u: goto label_1ee8d8;
        case 0x1ee8dcu: goto label_1ee8dc;
        case 0x1ee8e0u: goto label_1ee8e0;
        case 0x1ee8e4u: goto label_1ee8e4;
        case 0x1ee8e8u: goto label_1ee8e8;
        case 0x1ee8ecu: goto label_1ee8ec;
        case 0x1ee8f0u: goto label_1ee8f0;
        case 0x1ee8f4u: goto label_1ee8f4;
        case 0x1ee8f8u: goto label_1ee8f8;
        case 0x1ee8fcu: goto label_1ee8fc;
        case 0x1ee900u: goto label_1ee900;
        case 0x1ee904u: goto label_1ee904;
        case 0x1ee908u: goto label_1ee908;
        case 0x1ee90cu: goto label_1ee90c;
        case 0x1ee910u: goto label_1ee910;
        case 0x1ee914u: goto label_1ee914;
        case 0x1ee918u: goto label_1ee918;
        case 0x1ee91cu: goto label_1ee91c;
        case 0x1ee920u: goto label_1ee920;
        case 0x1ee924u: goto label_1ee924;
        case 0x1ee928u: goto label_1ee928;
        case 0x1ee92cu: goto label_1ee92c;
        case 0x1ee930u: goto label_1ee930;
        case 0x1ee934u: goto label_1ee934;
        case 0x1ee938u: goto label_1ee938;
        case 0x1ee93cu: goto label_1ee93c;
        case 0x1ee940u: goto label_1ee940;
        case 0x1ee944u: goto label_1ee944;
        case 0x1ee948u: goto label_1ee948;
        case 0x1ee94cu: goto label_1ee94c;
        case 0x1ee950u: goto label_1ee950;
        case 0x1ee954u: goto label_1ee954;
        case 0x1ee958u: goto label_1ee958;
        case 0x1ee95cu: goto label_1ee95c;
        case 0x1ee960u: goto label_1ee960;
        case 0x1ee964u: goto label_1ee964;
        case 0x1ee968u: goto label_1ee968;
        case 0x1ee96cu: goto label_1ee96c;
        case 0x1ee970u: goto label_1ee970;
        case 0x1ee974u: goto label_1ee974;
        case 0x1ee978u: goto label_1ee978;
        case 0x1ee97cu: goto label_1ee97c;
        case 0x1ee980u: goto label_1ee980;
        case 0x1ee984u: goto label_1ee984;
        case 0x1ee988u: goto label_1ee988;
        case 0x1ee98cu: goto label_1ee98c;
        case 0x1ee990u: goto label_1ee990;
        case 0x1ee994u: goto label_1ee994;
        case 0x1ee998u: goto label_1ee998;
        case 0x1ee99cu: goto label_1ee99c;
        case 0x1ee9a0u: goto label_1ee9a0;
        case 0x1ee9a4u: goto label_1ee9a4;
        case 0x1ee9a8u: goto label_1ee9a8;
        case 0x1ee9acu: goto label_1ee9ac;
        case 0x1ee9b0u: goto label_1ee9b0;
        case 0x1ee9b4u: goto label_1ee9b4;
        case 0x1ee9b8u: goto label_1ee9b8;
        case 0x1ee9bcu: goto label_1ee9bc;
        case 0x1ee9c0u: goto label_1ee9c0;
        case 0x1ee9c4u: goto label_1ee9c4;
        case 0x1ee9c8u: goto label_1ee9c8;
        case 0x1ee9ccu: goto label_1ee9cc;
        case 0x1ee9d0u: goto label_1ee9d0;
        case 0x1ee9d4u: goto label_1ee9d4;
        case 0x1ee9d8u: goto label_1ee9d8;
        case 0x1ee9dcu: goto label_1ee9dc;
        case 0x1ee9e0u: goto label_1ee9e0;
        case 0x1ee9e4u: goto label_1ee9e4;
        case 0x1ee9e8u: goto label_1ee9e8;
        case 0x1ee9ecu: goto label_1ee9ec;
        case 0x1ee9f0u: goto label_1ee9f0;
        case 0x1ee9f4u: goto label_1ee9f4;
        case 0x1ee9f8u: goto label_1ee9f8;
        case 0x1ee9fcu: goto label_1ee9fc;
        case 0x1eea00u: goto label_1eea00;
        case 0x1eea04u: goto label_1eea04;
        case 0x1eea08u: goto label_1eea08;
        case 0x1eea0cu: goto label_1eea0c;
        case 0x1eea10u: goto label_1eea10;
        case 0x1eea14u: goto label_1eea14;
        case 0x1eea18u: goto label_1eea18;
        case 0x1eea1cu: goto label_1eea1c;
        case 0x1eea20u: goto label_1eea20;
        case 0x1eea24u: goto label_1eea24;
        case 0x1eea28u: goto label_1eea28;
        case 0x1eea2cu: goto label_1eea2c;
        case 0x1eea30u: goto label_1eea30;
        case 0x1eea34u: goto label_1eea34;
        case 0x1eea38u: goto label_1eea38;
        case 0x1eea3cu: goto label_1eea3c;
        case 0x1eea40u: goto label_1eea40;
        case 0x1eea44u: goto label_1eea44;
        case 0x1eea48u: goto label_1eea48;
        case 0x1eea4cu: goto label_1eea4c;
        case 0x1eea50u: goto label_1eea50;
        case 0x1eea54u: goto label_1eea54;
        case 0x1eea58u: goto label_1eea58;
        case 0x1eea5cu: goto label_1eea5c;
        case 0x1eea60u: goto label_1eea60;
        case 0x1eea64u: goto label_1eea64;
        case 0x1eea68u: goto label_1eea68;
        case 0x1eea6cu: goto label_1eea6c;
        case 0x1eea70u: goto label_1eea70;
        case 0x1eea74u: goto label_1eea74;
        case 0x1eea78u: goto label_1eea78;
        case 0x1eea7cu: goto label_1eea7c;
        case 0x1eea80u: goto label_1eea80;
        case 0x1eea84u: goto label_1eea84;
        case 0x1eea88u: goto label_1eea88;
        case 0x1eea8cu: goto label_1eea8c;
        case 0x1eea90u: goto label_1eea90;
        case 0x1eea94u: goto label_1eea94;
        case 0x1eea98u: goto label_1eea98;
        case 0x1eea9cu: goto label_1eea9c;
        case 0x1eeaa0u: goto label_1eeaa0;
        case 0x1eeaa4u: goto label_1eeaa4;
        case 0x1eeaa8u: goto label_1eeaa8;
        case 0x1eeaacu: goto label_1eeaac;
        case 0x1eeab0u: goto label_1eeab0;
        case 0x1eeab4u: goto label_1eeab4;
        case 0x1eeab8u: goto label_1eeab8;
        case 0x1eeabcu: goto label_1eeabc;
        case 0x1eeac0u: goto label_1eeac0;
        case 0x1eeac4u: goto label_1eeac4;
        case 0x1eeac8u: goto label_1eeac8;
        case 0x1eeaccu: goto label_1eeacc;
        case 0x1eead0u: goto label_1eead0;
        case 0x1eead4u: goto label_1eead4;
        case 0x1eead8u: goto label_1eead8;
        case 0x1eeadcu: goto label_1eeadc;
        case 0x1eeae0u: goto label_1eeae0;
        case 0x1eeae4u: goto label_1eeae4;
        case 0x1eeae8u: goto label_1eeae8;
        case 0x1eeaecu: goto label_1eeaec;
        case 0x1eeaf0u: goto label_1eeaf0;
        case 0x1eeaf4u: goto label_1eeaf4;
        case 0x1eeaf8u: goto label_1eeaf8;
        case 0x1eeafcu: goto label_1eeafc;
        case 0x1eeb00u: goto label_1eeb00;
        case 0x1eeb04u: goto label_1eeb04;
        case 0x1eeb08u: goto label_1eeb08;
        case 0x1eeb0cu: goto label_1eeb0c;
        case 0x1eeb10u: goto label_1eeb10;
        case 0x1eeb14u: goto label_1eeb14;
        case 0x1eeb18u: goto label_1eeb18;
        case 0x1eeb1cu: goto label_1eeb1c;
        case 0x1eeb20u: goto label_1eeb20;
        case 0x1eeb24u: goto label_1eeb24;
        case 0x1eeb28u: goto label_1eeb28;
        case 0x1eeb2cu: goto label_1eeb2c;
        case 0x1eeb30u: goto label_1eeb30;
        case 0x1eeb34u: goto label_1eeb34;
        case 0x1eeb38u: goto label_1eeb38;
        case 0x1eeb3cu: goto label_1eeb3c;
        case 0x1eeb40u: goto label_1eeb40;
        case 0x1eeb44u: goto label_1eeb44;
        case 0x1eeb48u: goto label_1eeb48;
        case 0x1eeb4cu: goto label_1eeb4c;
        case 0x1eeb50u: goto label_1eeb50;
        case 0x1eeb54u: goto label_1eeb54;
        case 0x1eeb58u: goto label_1eeb58;
        case 0x1eeb5cu: goto label_1eeb5c;
        case 0x1eeb60u: goto label_1eeb60;
        case 0x1eeb64u: goto label_1eeb64;
        case 0x1eeb68u: goto label_1eeb68;
        case 0x1eeb6cu: goto label_1eeb6c;
        case 0x1eeb70u: goto label_1eeb70;
        case 0x1eeb74u: goto label_1eeb74;
        case 0x1eeb78u: goto label_1eeb78;
        case 0x1eeb7cu: goto label_1eeb7c;
        case 0x1eeb80u: goto label_1eeb80;
        case 0x1eeb84u: goto label_1eeb84;
        case 0x1eeb88u: goto label_1eeb88;
        case 0x1eeb8cu: goto label_1eeb8c;
        case 0x1eeb90u: goto label_1eeb90;
        case 0x1eeb94u: goto label_1eeb94;
        case 0x1eeb98u: goto label_1eeb98;
        case 0x1eeb9cu: goto label_1eeb9c;
        case 0x1eeba0u: goto label_1eeba0;
        case 0x1eeba4u: goto label_1eeba4;
        case 0x1eeba8u: goto label_1eeba8;
        case 0x1eebacu: goto label_1eebac;
        case 0x1eebb0u: goto label_1eebb0;
        case 0x1eebb4u: goto label_1eebb4;
        case 0x1eebb8u: goto label_1eebb8;
        case 0x1eebbcu: goto label_1eebbc;
        case 0x1eebc0u: goto label_1eebc0;
        case 0x1eebc4u: goto label_1eebc4;
        case 0x1eebc8u: goto label_1eebc8;
        case 0x1eebccu: goto label_1eebcc;
        case 0x1eebd0u: goto label_1eebd0;
        case 0x1eebd4u: goto label_1eebd4;
        case 0x1eebd8u: goto label_1eebd8;
        case 0x1eebdcu: goto label_1eebdc;
        case 0x1eebe0u: goto label_1eebe0;
        case 0x1eebe4u: goto label_1eebe4;
        case 0x1eebe8u: goto label_1eebe8;
        case 0x1eebecu: goto label_1eebec;
        case 0x1eebf0u: goto label_1eebf0;
        case 0x1eebf4u: goto label_1eebf4;
        case 0x1eebf8u: goto label_1eebf8;
        case 0x1eebfcu: goto label_1eebfc;
        case 0x1eec00u: goto label_1eec00;
        case 0x1eec04u: goto label_1eec04;
        case 0x1eec08u: goto label_1eec08;
        case 0x1eec0cu: goto label_1eec0c;
        case 0x1eec10u: goto label_1eec10;
        case 0x1eec14u: goto label_1eec14;
        case 0x1eec18u: goto label_1eec18;
        case 0x1eec1cu: goto label_1eec1c;
        case 0x1eec20u: goto label_1eec20;
        case 0x1eec24u: goto label_1eec24;
        case 0x1eec28u: goto label_1eec28;
        case 0x1eec2cu: goto label_1eec2c;
        case 0x1eec30u: goto label_1eec30;
        case 0x1eec34u: goto label_1eec34;
        case 0x1eec38u: goto label_1eec38;
        case 0x1eec3cu: goto label_1eec3c;
        case 0x1eec40u: goto label_1eec40;
        case 0x1eec44u: goto label_1eec44;
        case 0x1eec48u: goto label_1eec48;
        case 0x1eec4cu: goto label_1eec4c;
        case 0x1eec50u: goto label_1eec50;
        case 0x1eec54u: goto label_1eec54;
        case 0x1eec58u: goto label_1eec58;
        case 0x1eec5cu: goto label_1eec5c;
        case 0x1eec60u: goto label_1eec60;
        case 0x1eec64u: goto label_1eec64;
        case 0x1eec68u: goto label_1eec68;
        case 0x1eec6cu: goto label_1eec6c;
        case 0x1eec70u: goto label_1eec70;
        case 0x1eec74u: goto label_1eec74;
        case 0x1eec78u: goto label_1eec78;
        case 0x1eec7cu: goto label_1eec7c;
        case 0x1eec80u: goto label_1eec80;
        case 0x1eec84u: goto label_1eec84;
        case 0x1eec88u: goto label_1eec88;
        case 0x1eec8cu: goto label_1eec8c;
        case 0x1eec90u: goto label_1eec90;
        case 0x1eec94u: goto label_1eec94;
        case 0x1eec98u: goto label_1eec98;
        case 0x1eec9cu: goto label_1eec9c;
        case 0x1eeca0u: goto label_1eeca0;
        case 0x1eeca4u: goto label_1eeca4;
        case 0x1eeca8u: goto label_1eeca8;
        case 0x1eecacu: goto label_1eecac;
        case 0x1eecb0u: goto label_1eecb0;
        case 0x1eecb4u: goto label_1eecb4;
        case 0x1eecb8u: goto label_1eecb8;
        case 0x1eecbcu: goto label_1eecbc;
        default: break;
    }

    ctx->pc = 0x1ecae0u;

label_1ecae0:
    // 0x1ecae0: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1ecae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_1ecae4:
    // 0x1ecae4: 0x7fb501f0  sq          $s5, 0x1F0($sp)
    ctx->pc = 0x1ecae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 21));
label_1ecae8:
    // 0x1ecae8: 0x7fb00240  sq          $s0, 0x240($sp)
    ctx->pc = 0x1ecae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 16));
label_1ecaec:
    // 0x1ecaec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ecaecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ecaf0:
    // 0x1ecaf0: 0x7fb10230  sq          $s1, 0x230($sp)
    ctx->pc = 0x1ecaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 17));
label_1ecaf4:
    // 0x1ecaf4: 0x7fb20220  sq          $s2, 0x220($sp)
    ctx->pc = 0x1ecaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 18));
label_1ecaf8:
    // 0x1ecaf8: 0x7fb30210  sq          $s3, 0x210($sp)
    ctx->pc = 0x1ecaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 19));
label_1ecafc:
    // 0x1ecafc: 0x7fb40200  sq          $s4, 0x200($sp)
    ctx->pc = 0x1ecafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 20));
label_1ecb00:
    // 0x1ecb00: 0x7fb601e0  sq          $s6, 0x1E0($sp)
    ctx->pc = 0x1ecb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 22));
label_1ecb04:
    // 0x1ecb04: 0x7fb701d0  sq          $s7, 0x1D0($sp)
    ctx->pc = 0x1ecb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 23));
label_1ecb08:
    // 0x1ecb08: 0x7fbe01c0  sq          $fp, 0x1C0($sp)
    ctx->pc = 0x1ecb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 30));
label_1ecb0c:
    // 0x1ecb0c: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x1ecb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
label_1ecb10:
    // 0x1ecb10: 0xe7ba0280  swc1        $f26, 0x280($sp)
    ctx->pc = 0x1ecb10u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_1ecb14:
    // 0x1ecb14: 0xe7b90278  swc1        $f25, 0x278($sp)
    ctx->pc = 0x1ecb14u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_1ecb18:
    // 0x1ecb18: 0xe7b80270  swc1        $f24, 0x270($sp)
    ctx->pc = 0x1ecb18u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_1ecb1c:
    // 0x1ecb1c: 0xe7b70268  swc1        $f23, 0x268($sp)
    ctx->pc = 0x1ecb1cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_1ecb20:
    // 0x1ecb20: 0xe7b60260  swc1        $f22, 0x260($sp)
    ctx->pc = 0x1ecb20u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_1ecb24:
    // 0x1ecb24: 0xe7b50258  swc1        $f21, 0x258($sp)
    ctx->pc = 0x1ecb24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_1ecb28:
    // 0x1ecb28: 0xe7b40250  swc1        $f20, 0x250($sp)
    ctx->pc = 0x1ecb28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_1ecb2c:
    // 0x1ecb2c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1ecb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1ecb30:
    // 0x1ecb30: 0x14400850  bnez        $v0, . + 4 + (0x850 << 2)
label_1ecb34:
    if (ctx->pc == 0x1ECB34u) {
        ctx->pc = 0x1ECB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB30u;
        // 0x1ecb34: 0x7bb00240  lq          $s0, 0x240($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECB38u;
        goto label_1ecb38;
    }
    ctx->pc = 0x1ECB30u;
    {
        const bool branch_taken_0x1ecb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB30u;
        // 0x1ecb34: 0x7bb00240  lq          $s0, 0x240($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb30) {
            ctx->pc = 0x1EEC74u;
            goto label_1eec74;
        }
    }
    ctx->pc = 0x1ECB38u;
label_1ecb38:
    // 0x1ecb38: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ecb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ecb3c:
    // 0x1ecb3c: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1ecb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1ecb40:
    // 0x1ecb40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ecb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ecb44:
    // 0x1ecb44: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1ecb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1ecb48:
    // 0x1ecb48: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
label_1ecb4c:
    if (ctx->pc == 0x1ECB4Cu) {
        ctx->pc = 0x1ECB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB48u;
        // 0x1ecb4c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECB50u;
        goto label_1ecb50;
    }
    ctx->pc = 0x1ECB48u;
    {
        const bool branch_taken_0x1ecb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB48u;
        // 0x1ecb4c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb48) {
            ctx->pc = 0x1ECDB0u;
            goto label_1ecdb0;
        }
    }
    ctx->pc = 0x1ECB50u;
label_1ecb50:
    // 0x1ecb50: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_1ecb54:
    if (ctx->pc == 0x1ECB54u) {
        ctx->pc = 0x1ECB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB50u;
        // 0x1ecb54: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECB58u;
        goto label_1ecb58;
    }
    ctx->pc = 0x1ECB50u;
    {
        const bool branch_taken_0x1ecb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB50u;
        // 0x1ecb54: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb50) {
            ctx->pc = 0x1ECC44u;
            goto label_1ecc44;
        }
    }
    ctx->pc = 0x1ECB58u;
label_1ecb58:
    // 0x1ecb58: 0x3c01bf93  lui         $at, 0xBF93
    ctx->pc = 0x1ecb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49043 << 16));
label_1ecb5c:
    // 0x1ecb5c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ecb5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1ecb60:
    // 0x1ecb60: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ecb60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ecb64:
    // 0x1ecb64: 0x3c0140b6  lui         $at, 0x40B6
    ctx->pc = 0x1ecb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16566 << 16));
label_1ecb68:
    // 0x1ecb68: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ecb68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ecb6c:
    // 0x1ecb6c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ecb6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ecb70:
    // 0x1ecb70: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ecb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ecb74:
    // 0x1ecb74: 0x3c01bf86  lui         $at, 0xBF86
    ctx->pc = 0x1ecb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49030 << 16));
label_1ecb78:
    // 0x1ecb78: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ecb78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ecb7c:
    // 0x1ecb7c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ecb7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ecb80:
    // 0x1ecb80: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1ecb80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1ecb84:
    // 0x1ecb84: 0x3c013e91  lui         $at, 0x3E91
    ctx->pc = 0x1ecb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16017 << 16));
label_1ecb88:
    // 0x1ecb88: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1ecb88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1ecb8c:
    // 0x1ecb8c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1ecb8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1ecb90:
    // 0x1ecb90: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1ecb90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1ecb94:
    // 0x1ecb94: 0x3c013f48  lui         $at, 0x3F48
    ctx->pc = 0x1ecb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16200 << 16));
label_1ecb98:
    // 0x1ecb98: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1ecb98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1ecb9c:
    // 0x1ecb9c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ecb9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1ecba0:
    // 0x1ecba0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1ecba0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1ecba4:
    // 0x1ecba4: 0x3c013f1e  lui         $at, 0x3F1E
    ctx->pc = 0x1ecba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16158 << 16));
label_1ecba8:
    // 0x1ecba8: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1ecba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1ecbac:
    // 0x1ecbac: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1ecbacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1ecbb0:
    // 0x1ecbb0: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1ecbb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1ecbb4:
    // 0x1ecbb4: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1ecbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
label_1ecbb8:
    // 0x1ecbb8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ecbb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ecbbc:
    // 0x1ecbbc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1ecbbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1ecbc0:
    // 0x1ecbc0: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1ecbc0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1ecbc4:
    // 0x1ecbc4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ecbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1ecbc8:
    // 0x1ecbc8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ecbc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ecbcc:
    // 0x1ecbcc: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1ecbccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1ecbd0:
    // 0x1ecbd0: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1ecbd0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1ecbd4:
    // 0x1ecbd4: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1ecbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_1ecbd8:
    // 0x1ecbd8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ecbd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ecbdc:
    // 0x1ecbdc: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1ecbdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1ecbe0:
    // 0x1ecbe0: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1ecbe0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1ecbe4:
    // 0x1ecbe4: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1ecbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_1ecbe8:
    // 0x1ecbe8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ecbe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ecbec:
    // 0x1ecbec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ecbecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ecbf0:
    // 0x1ecbf0: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1ecbf0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1ecbf4:
    // 0x1ecbf4: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x1ecbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
label_1ecbf8:
    // 0x1ecbf8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ecbf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ecbfc:
    // 0x1ecbfc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ecbfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ecc00:
    // 0x1ecc00: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1ecc00u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1ecc04:
    // 0x1ecc04: 0x3c013f46  lui         $at, 0x3F46
    ctx->pc = 0x1ecc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16198 << 16));
label_1ecc08:
    // 0x1ecc08: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ecc08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ecc0c:
    // 0x1ecc0c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1ecc0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1ecc10:
    // 0x1ecc10: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1ecc10u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1ecc14:
    // 0x1ecc14: 0x3c013e6b  lui         $at, 0x3E6B
    ctx->pc = 0x1ecc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15979 << 16));
label_1ecc18:
    // 0x1ecc18: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1ecc18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1ecc1c:
    // 0x1ecc1c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1ecc1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1ecc20:
    // 0x1ecc20: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1ecc20u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1ecc24:
    // 0x1ecc24: 0x3c013ead  lui         $at, 0x3EAD
    ctx->pc = 0x1ecc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16045 << 16));
label_1ecc28:
    // 0x1ecc28: 0x34219168  ori         $at, $at, 0x9168
    ctx->pc = 0x1ecc28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37224);
label_1ecc2c:
    // 0x1ecc2c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1ecc2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1ecc30:
    // 0x1ecc30: 0x3c013e7a  lui         $at, 0x3E7A
    ctx->pc = 0x1ecc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15994 << 16));
label_1ecc34:
    // 0x1ecc34: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1ecc34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_1ecc38:
    // 0x1ecc38: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1ecc38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_1ecc3c:
    // 0x1ecc3c: 0x10000130  b           . + 4 + (0x130 << 2)
label_1ecc40:
    if (ctx->pc == 0x1ECC40u) {
        ctx->pc = 0x1ECC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC3Cu;
        // 0x1ecc40: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC44u;
        goto label_1ecc44;
    }
    ctx->pc = 0x1ECC3Cu;
    {
        const bool branch_taken_0x1ecc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC3Cu;
        // 0x1ecc40: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc3c) {
            ctx->pc = 0x1ED100u;
            goto label_1ed100;
        }
    }
    ctx->pc = 0x1ECC44u;
label_1ecc44:
    // 0x1ecc44: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1ecc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_1ecc48:
    // 0x1ecc48: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ecc48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ecc4c:
    // 0x1ecc4c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1ecc4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_1ecc50:
    // 0x1ecc50: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ecc50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ecc54:
    // 0x1ecc54: 0x3c01bf93  lui         $at, 0xBF93
    ctx->pc = 0x1ecc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49043 << 16));
label_1ecc58:
    // 0x1ecc58: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ecc58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1ecc5c:
    // 0x1ecc5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ecc5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ecc60:
    // 0x1ecc60: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1ecc60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1ecc64:
    // 0x1ecc64: 0x3c0140b6  lui         $at, 0x40B6
    ctx->pc = 0x1ecc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16566 << 16));
label_1ecc68:
    // 0x1ecc68: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ecc68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ecc6c:
    // 0x1ecc6c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ecc6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ecc70:
    // 0x1ecc70: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1ecc70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1ecc74:
    // 0x1ecc74: 0x3c01bf86  lui         $at, 0xBF86
    ctx->pc = 0x1ecc74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49030 << 16));
label_1ecc78:
    // 0x1ecc78: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ecc78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ecc7c:
    // 0x1ecc7c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ecc7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ecc80:
    // 0x1ecc80: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1ecc80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1ecc84:
    // 0x1ecc84: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1ecc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1ecc88:
    // 0x1ecc88: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ecc88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ecc8c:
    // 0x1ecc8c: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1ecc8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1ecc90:
    // 0x1ecc90: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1ecc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1ecc94:
    // 0x1ecc94: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1ecc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1ecc98:
    // 0x1ecc98: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1ecc98u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1ecc9c:
    // 0x1ecc9c: 0x3c013f1e  lui         $at, 0x3F1E
    ctx->pc = 0x1ecc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16158 << 16));
label_1ecca0:
    // 0x1ecca0: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1ecca0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1ecca4:
    // 0x1ecca4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ecca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1ecca8:
    // 0x1ecca8: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1ecca8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1eccac:
    // 0x1eccac: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1eccacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1eccb0:
    // 0x1eccb0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1eccb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1eccb4:
    // 0x1eccb4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1eccb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1eccb8:
    // 0x1eccb8: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1eccb8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1eccbc:
    // 0x1eccbc: 0x3c01bc9b  lui         $at, 0xBC9B
    ctx->pc = 0x1eccbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48283 << 16));
label_1eccc0:
    // 0x1eccc0: 0x3421a5e3  ori         $at, $at, 0xA5E3
    ctx->pc = 0x1eccc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42467);
label_1eccc4:
    // 0x1eccc4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1eccc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1eccc8:
    // 0x1eccc8: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1eccc8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1ecccc:
    // 0x1ecccc: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1eccccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_1eccd0:
    // 0x1eccd0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1eccd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1eccd4:
    // 0x1eccd4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1eccd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1eccd8:
    // 0x1eccd8: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1eccd8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1eccdc:
    // 0x1eccdc: 0x3c013e87  lui         $at, 0x3E87
    ctx->pc = 0x1eccdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16007 << 16));
label_1ecce0:
    // 0x1ecce0: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1ecce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_1ecce4:
    // 0x1ecce4: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1ecce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1ecce8:
    // 0x1ecce8: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1ecce8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1eccec:
    // 0x1eccec: 0x3c013f3e  lui         $at, 0x3F3E
    ctx->pc = 0x1eccecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16190 << 16));
label_1eccf0:
    // 0x1eccf0: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1eccf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1eccf4:
    // 0x1eccf4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1eccf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1eccf8:
    // 0x1eccf8: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1eccf8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1eccfc:
    // 0x1eccfc: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x1eccfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
label_1ecd00:
    // 0x1ecd00: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1ecd00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1ecd04:
    // 0x1ecd04: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ecd04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ecd08:
    // 0x1ecd08: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1ecd08u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1ecd0c:
    // 0x1ecd0c: 0x3c013eb0  lui         $at, 0x3EB0
    ctx->pc = 0x1ecd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16048 << 16));
label_1ecd10:
    // 0x1ecd10: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1ecd10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_1ecd14:
    // 0x1ecd14: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1ecd14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1ecd18:
    // 0x1ecd18: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1ecd18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1ecd1c:
    // 0x1ecd1c: 0x3c013e91  lui         $at, 0x3E91
    ctx->pc = 0x1ecd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16017 << 16));
label_1ecd20:
    // 0x1ecd20: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1ecd20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1ecd24:
    // 0x1ecd24: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1ecd24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1ecd28:
    // 0x1ecd28: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1ecd28u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1ecd2c:
    // 0x1ecd2c: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1ecd2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_1ecd30:
    // 0x1ecd30: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ecd30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ecd34:
    // 0x1ecd34: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1ecd34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1ecd38:
    // 0x1ecd38: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1ecd38u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1ecd3c:
    // 0x1ecd3c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1ecd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1ecd40:
    // 0x1ecd40: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ecd40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ecd44:
    // 0x1ecd44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ecd44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ecd48:
    // 0x1ecd48: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1ecd48u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1ecd4c:
    // 0x1ecd4c: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1ecd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
label_1ecd50:
    // 0x1ecd50: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ecd50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ecd54:
    // 0x1ecd54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ecd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ecd58:
    // 0x1ecd58: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ecd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ecd5c:
    // 0x1ecd5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ecd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ecd60:
    // 0x1ecd60: 0xe482f394  swc1        $f2, -0xC6C($a0)
    ctx->pc = 0x1ecd60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964116), bits); }
label_1ecd64:
    // 0x1ecd64: 0xe440f3d4  swc1        $f0, -0xC2C($v0)
    ctx->pc = 0x1ecd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964180), bits); }
label_1ecd68:
    // 0x1ecd68: 0xe4a3f398  swc1        $f3, -0xC68($a1)
    ctx->pc = 0x1ecd68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964120), bits); }
label_1ecd6c:
    // 0x1ecd6c: 0xe4c4f39c  swc1        $f4, -0xC64($a2)
    ctx->pc = 0x1ecd6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294964124), bits); }
label_1ecd70:
    // 0x1ecd70: 0xe4e5f3a0  swc1        $f5, -0xC60($a3)
    ctx->pc = 0x1ecd70u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964128), bits); }
label_1ecd74:
    // 0x1ecd74: 0xe506f3a4  swc1        $f6, -0xC5C($t0)
    ctx->pc = 0x1ecd74u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964132), bits); }
label_1ecd78:
    // 0x1ecd78: 0xe527f3a8  swc1        $f7, -0xC58($t1)
    ctx->pc = 0x1ecd78u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294964136), bits); }
label_1ecd7c:
    // 0x1ecd7c: 0xe548f3ac  swc1        $f8, -0xC54($t2)
    ctx->pc = 0x1ecd7cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294964140), bits); }
label_1ecd80:
    // 0x1ecd80: 0xe569f3b0  swc1        $f9, -0xC50($t3)
    ctx->pc = 0x1ecd80u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294964144), bits); }
label_1ecd84:
    // 0x1ecd84: 0xe58af3b4  swc1        $f10, -0xC4C($t4)
    ctx->pc = 0x1ecd84u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294964148), bits); }
label_1ecd88:
    // 0x1ecd88: 0xe5abf3bc  swc1        $f11, -0xC44($t5)
    ctx->pc = 0x1ecd88u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294964156), bits); }
label_1ecd8c:
    // 0x1ecd8c: 0xe5ccf3c0  swc1        $f12, -0xC40($t6)
    ctx->pc = 0x1ecd8cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294964160), bits); }
label_1ecd90:
    // 0x1ecd90: 0xe5edf3c4  swc1        $f13, -0xC3C($t7)
    ctx->pc = 0x1ecd90u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294964164), bits); }
label_1ecd94:
    // 0x1ecd94: 0xe60ef3c8  swc1        $f14, -0xC38($s0)
    ctx->pc = 0x1ecd94u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964168), bits); }
label_1ecd98:
    // 0x1ecd98: 0xe62ff3cc  swc1        $f15, -0xC34($s1)
    ctx->pc = 0x1ecd98u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294964172), bits); }
label_1ecd9c:
    // 0x1ecd9c: 0xe650f3d0  swc1        $f16, -0xC30($s2)
    ctx->pc = 0x1ecd9cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294964176), bits); }
label_1ecda0:
    // 0x1ecda0: 0xe661f3d8  swc1        $f1, -0xC28($s3)
    ctx->pc = 0x1ecda0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294964184), bits); }
label_1ecda4:
    // 0x1ecda4: 0xe471f3dc  swc1        $f17, -0xC24($v1)
    ctx->pc = 0x1ecda4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964188), bits); }
label_1ecda8:
    // 0x1ecda8: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_1ecdac:
    if (ctx->pc == 0x1ECDACu) {
        ctx->pc = 0x1ECDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDA8u;
        // 0x1ecdac: 0xe691f3b8  swc1        $f17, -0xC48($s4) (Delay Slot)
        { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294964152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECDB0u;
        goto label_1ecdb0;
    }
    ctx->pc = 0x1ECDA8u;
    {
        const bool branch_taken_0x1ecda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDA8u;
        // 0x1ecdac: 0xe691f3b8  swc1        $f17, -0xC48($s4) (Delay Slot)
        { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294964152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecda8) {
            ctx->pc = 0x1ED190u;
            goto label_1ed190;
        }
    }
    ctx->pc = 0x1ECDB0u;
label_1ecdb0:
    // 0x1ecdb0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1ecdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1ecdb4:
    // 0x1ecdb4: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_1ecdb8:
    if (ctx->pc == 0x1ECDB8u) {
        ctx->pc = 0x1ECDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDB4u;
        // 0x1ecdb8: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECDBCu;
        goto label_1ecdbc;
    }
    ctx->pc = 0x1ECDB4u;
    {
        const bool branch_taken_0x1ecdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDB4u;
        // 0x1ecdb8: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecdb4) {
            ctx->pc = 0x1ECEE8u;
            goto label_1ecee8;
        }
    }
    ctx->pc = 0x1ECDBCu;
label_1ecdbc:
    // 0x1ecdbc: 0x3c01bf93  lui         $at, 0xBF93
    ctx->pc = 0x1ecdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49043 << 16));
label_1ecdc0:
    // 0x1ecdc0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ecdc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1ecdc4:
    // 0x1ecdc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ecdc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ecdc8:
    // 0x1ecdc8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ecdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ecdcc:
    // 0x1ecdcc: 0x3c0140b6  lui         $at, 0x40B6
    ctx->pc = 0x1ecdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16566 << 16));
label_1ecdd0:
    // 0x1ecdd0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ecdd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ecdd4:
    // 0x1ecdd4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ecdd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ecdd8:
    // 0x1ecdd8: 0x3c01bf86  lui         $at, 0xBF86
    ctx->pc = 0x1ecdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49030 << 16));
label_1ecddc:
    // 0x1ecddc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ecddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ecde0:
    // 0x1ecde0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ecde0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ecde4:
    // 0x1ecde4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1ecde4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1ecde8:
    // 0x1ecde8: 0x3c013e91  lui         $at, 0x3E91
    ctx->pc = 0x1ecde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16017 << 16));
label_1ecdec:
    // 0x1ecdec: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1ecdecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1ecdf0:
    // 0x1ecdf0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ecdf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ecdf4:
    // 0x1ecdf4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1ecdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1ecdf8:
    // 0x1ecdf8: 0x3c013f48  lui         $at, 0x3F48
    ctx->pc = 0x1ecdf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16200 << 16));
label_1ecdfc:
    // 0x1ecdfc: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1ecdfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1ece00:
    // 0x1ece00: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1ece00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1ece04:
    // 0x1ece04: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1ece04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1ece08:
    // 0x1ece08: 0x3c013f1e  lui         $at, 0x3F1E
    ctx->pc = 0x1ece08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16158 << 16));
label_1ece0c:
    // 0x1ece0c: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1ece0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1ece10:
    // 0x1ece10: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ece10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1ece14:
    // 0x1ece14: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1ece14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1ece18:
    // 0x1ece18: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1ece18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_1ece1c:
    // 0x1ece1c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ece1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ece20:
    // 0x1ece20: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1ece20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1ece24:
    // 0x1ece24: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1ece24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1ece28:
    // 0x1ece28: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x1ece28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
label_1ece2c:
    // 0x1ece2c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1ece2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1ece30:
    // 0x1ece30: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1ece30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1ece34:
    // 0x1ece34: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1ece34u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1ece38:
    // 0x1ece38: 0x3c013f3a  lui         $at, 0x3F3A
    ctx->pc = 0x1ece38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16186 << 16));
label_1ece3c:
    // 0x1ece3c: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1ece3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_1ece40:
    // 0x1ece40: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1ece40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1ece44:
    // 0x1ece44: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1ece44u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1ece48:
    // 0x1ece48: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ece48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1ece4c:
    // 0x1ece4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ece4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ece50:
    // 0x1ece50: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1ece50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1ece54:
    // 0x1ece54: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1ece54u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1ece58:
    // 0x1ece58: 0x3c013eb5  lui         $at, 0x3EB5
    ctx->pc = 0x1ece58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16053 << 16));
label_1ece5c:
    // 0x1ece5c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ece5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ece60:
    // 0x1ece60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ece60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ece64:
    // 0x1ece64: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1ece64u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1ece68:
    // 0x1ece68: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1ece68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
label_1ece6c:
    // 0x1ece6c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1ece6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1ece70:
    // 0x1ece70: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ece70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ece74:
    // 0x1ece74: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1ece74u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1ece78:
    // 0x1ece78: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1ece78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_1ece7c:
    // 0x1ece7c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ece7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ece80:
    // 0x1ece80: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1ece80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1ece84:
    // 0x1ece84: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1ece84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1ece88:
    // 0x1ece88: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ece88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1ece8c:
    // 0x1ece8c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ece8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ece90:
    // 0x1ece90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ece90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ece94:
    // 0x1ece94: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1ece94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1ece98:
    // 0x1ece98: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1ece98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
label_1ece9c:
    // 0x1ece9c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ece9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ecea0:
    // 0x1ecea0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ecea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ecea4:
    // 0x1ecea4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ecea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ecea8:
    // 0x1ecea8: 0xe440f3d4  swc1        $f0, -0xC2C($v0)
    ctx->pc = 0x1ecea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964180), bits); }
label_1eceac:
    // 0x1eceac: 0xe462f394  swc1        $f2, -0xC6C($v1)
    ctx->pc = 0x1eceacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964116), bits); }
label_1eceb0:
    // 0x1eceb0: 0xe483f398  swc1        $f3, -0xC68($a0)
    ctx->pc = 0x1eceb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964120), bits); }
label_1eceb4:
    // 0x1eceb4: 0xe4a4f39c  swc1        $f4, -0xC64($a1)
    ctx->pc = 0x1eceb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964124), bits); }
label_1eceb8:
    // 0x1eceb8: 0xe4c5f3a0  swc1        $f5, -0xC60($a2)
    ctx->pc = 0x1eceb8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294964128), bits); }
label_1ecebc:
    // 0x1ecebc: 0xe4e6f3a4  swc1        $f6, -0xC5C($a3)
    ctx->pc = 0x1ecebcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964132), bits); }
label_1ecec0:
    // 0x1ecec0: 0xe507f3a8  swc1        $f7, -0xC58($t0)
    ctx->pc = 0x1ecec0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964136), bits); }
label_1ecec4:
    // 0x1ecec4: 0xe528f3b8  swc1        $f8, -0xC48($t1)
    ctx->pc = 0x1ecec4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294964152), bits); }
label_1ecec8:
    // 0x1ecec8: 0xe549f3bc  swc1        $f9, -0xC44($t2)
    ctx->pc = 0x1ecec8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294964156), bits); }
label_1ececc:
    // 0x1ececc: 0xe56af3c0  swc1        $f10, -0xC40($t3)
    ctx->pc = 0x1ececcu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294964160), bits); }
label_1eced0:
    // 0x1eced0: 0xe58bf3c4  swc1        $f11, -0xC3C($t4)
    ctx->pc = 0x1eced0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294964164), bits); }
label_1eced4:
    // 0x1eced4: 0xe5acf3c8  swc1        $f12, -0xC38($t5)
    ctx->pc = 0x1eced4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294964168), bits); }
label_1eced8:
    // 0x1eced8: 0xe5cdf3cc  swc1        $f13, -0xC34($t6)
    ctx->pc = 0x1eced8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294964172), bits); }
label_1ecedc:
    // 0x1ecedc: 0xe5eef3d0  swc1        $f14, -0xC30($t7)
    ctx->pc = 0x1ecedcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294964176), bits); }
label_1ecee0:
    // 0x1ecee0: 0x100000ab  b           . + 4 + (0xAB << 2)
label_1ecee4:
    if (ctx->pc == 0x1ECEE4u) {
        ctx->pc = 0x1ECEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEE0u;
        // 0x1ecee4: 0xe601f3d8  swc1        $f1, -0xC28($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECEE8u;
        goto label_1ecee8;
    }
    ctx->pc = 0x1ECEE0u;
    {
        const bool branch_taken_0x1ecee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEE0u;
        // 0x1ecee4: 0xe601f3d8  swc1        $f1, -0xC28($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecee0) {
            ctx->pc = 0x1ED190u;
            goto label_1ed190;
        }
    }
    ctx->pc = 0x1ECEE8u;
label_1ecee8:
    // 0x1ecee8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1ecee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1eceec:
    // 0x1eceec: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_1ecef0:
    if (ctx->pc == 0x1ECEF0u) {
        ctx->pc = 0x1ECEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEECu;
        // 0x1ecef0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECEF4u;
        goto label_1ecef4;
    }
    ctx->pc = 0x1ECEECu;
    {
        const bool branch_taken_0x1eceec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEECu;
        // 0x1ecef0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eceec) {
            ctx->pc = 0x1ED014u;
            goto label_1ed014;
        }
    }
    ctx->pc = 0x1ECEF4u;
label_1ecef4:
    // 0x1ecef4: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1ecef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
label_1ecef8:
    // 0x1ecef8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ecef8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ecefc:
    // 0x1ecefc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ecefcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ecf00:
    // 0x1ecf00: 0x3c01bf93  lui         $at, 0xBF93
    ctx->pc = 0x1ecf00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49043 << 16));
label_1ecf04:
    // 0x1ecf04: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ecf04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1ecf08:
    // 0x1ecf08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ecf08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ecf0c:
    // 0x1ecf0c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ecf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ecf10:
    // 0x1ecf10: 0x3c0140b6  lui         $at, 0x40B6
    ctx->pc = 0x1ecf10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16566 << 16));
label_1ecf14:
    // 0x1ecf14: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ecf14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ecf18:
    // 0x1ecf18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ecf18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ecf1c:
    // 0x1ecf1c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ecf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ecf20:
    // 0x1ecf20: 0x3c01bf86  lui         $at, 0xBF86
    ctx->pc = 0x1ecf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49030 << 16));
label_1ecf24:
    // 0x1ecf24: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ecf24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ecf28:
    // 0x1ecf28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ecf28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ecf2c:
    // 0x1ecf2c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1ecf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1ecf30:
    // 0x1ecf30: 0x3c013e91  lui         $at, 0x3E91
    ctx->pc = 0x1ecf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16017 << 16));
label_1ecf34:
    // 0x1ecf34: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1ecf34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1ecf38:
    // 0x1ecf38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ecf38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ecf3c:
    // 0x1ecf3c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1ecf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1ecf40:
    // 0x1ecf40: 0x3c013f48  lui         $at, 0x3F48
    ctx->pc = 0x1ecf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16200 << 16));
label_1ecf44:
    // 0x1ecf44: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1ecf44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1ecf48:
    // 0x1ecf48: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ecf48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ecf4c:
    // 0x1ecf4c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1ecf4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1ecf50:
    // 0x1ecf50: 0x3c013f1e  lui         $at, 0x3F1E
    ctx->pc = 0x1ecf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16158 << 16));
label_1ecf54:
    // 0x1ecf54: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1ecf54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1ecf58:
    // 0x1ecf58: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ecf58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ecf5c:
    // 0x1ecf5c: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1ecf5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1ecf60:
    // 0x1ecf60: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1ecf60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_1ecf64:
    // 0x1ecf64: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ecf64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ecf68:
    // 0x1ecf68: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ecf68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ecf6c:
    // 0x1ecf6c: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1ecf6cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1ecf70:
    // 0x1ecf70: 0x3c013e84  lui         $at, 0x3E84
    ctx->pc = 0x1ecf70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16004 << 16));
label_1ecf74:
    // 0x1ecf74: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1ecf74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_1ecf78:
    // 0x1ecf78: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1ecf78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1ecf7c:
    // 0x1ecf7c: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1ecf7cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1ecf80:
    // 0x1ecf80: 0x3c013f41  lui         $at, 0x3F41
    ctx->pc = 0x1ecf80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16193 << 16));
label_1ecf84:
    // 0x1ecf84: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1ecf84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1ecf88:
    // 0x1ecf88: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ecf88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1ecf8c:
    // 0x1ecf8c: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1ecf8cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1ecf90:
    // 0x1ecf90: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x1ecf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
label_1ecf94:
    // 0x1ecf94: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ecf94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ecf98:
    // 0x1ecf98: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1ecf98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1ecf9c:
    // 0x1ecf9c: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1ecf9cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1ecfa0:
    // 0x1ecfa0: 0x3c013ead  lui         $at, 0x3EAD
    ctx->pc = 0x1ecfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16045 << 16));
label_1ecfa4:
    // 0x1ecfa4: 0x34219168  ori         $at, $at, 0x9168
    ctx->pc = 0x1ecfa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37224);
label_1ecfa8:
    // 0x1ecfa8: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1ecfa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1ecfac:
    // 0x1ecfac: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1ecfacu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1ecfb0:
    // 0x1ecfb0: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x1ecfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
label_1ecfb4:
    // 0x1ecfb4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1ecfb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1ecfb8:
    // 0x1ecfb8: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1ecfb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1ecfbc:
    // 0x1ecfbc: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1ecfbcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1ecfc0:
    // 0x1ecfc0: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1ecfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_1ecfc4:
    // 0x1ecfc4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ecfc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ecfc8:
    // 0x1ecfc8: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1ecfc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1ecfcc:
    // 0x1ecfcc: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1ecfccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1ecfd0:
    // 0x1ecfd0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1ecfd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1ecfd4:
    // 0x1ecfd4: 0xe44cf394  swc1        $f12, -0xC6C($v0)
    ctx->pc = 0x1ecfd4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964116), bits); }
label_1ecfd8:
    // 0x1ecfd8: 0xe460f398  swc1        $f0, -0xC68($v1)
    ctx->pc = 0x1ecfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964120), bits); }
label_1ecfdc:
    // 0x1ecfdc: 0xe481f39c  swc1        $f1, -0xC64($a0)
    ctx->pc = 0x1ecfdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964124), bits); }
label_1ecfe0:
    // 0x1ecfe0: 0xe4a2f3a0  swc1        $f2, -0xC60($a1)
    ctx->pc = 0x1ecfe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964128), bits); }
label_1ecfe4:
    // 0x1ecfe4: 0xe4c3f3a4  swc1        $f3, -0xC5C($a2)
    ctx->pc = 0x1ecfe4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294964132), bits); }
label_1ecfe8:
    // 0x1ecfe8: 0xe4e4f3a8  swc1        $f4, -0xC58($a3)
    ctx->pc = 0x1ecfe8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964136), bits); }
label_1ecfec:
    // 0x1ecfec: 0xe505f3b8  swc1        $f5, -0xC48($t0)
    ctx->pc = 0x1ecfecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964152), bits); }
label_1ecff0:
    // 0x1ecff0: 0xe526f3bc  swc1        $f6, -0xC44($t1)
    ctx->pc = 0x1ecff0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294964156), bits); }
label_1ecff4:
    // 0x1ecff4: 0xe547f3c0  swc1        $f7, -0xC40($t2)
    ctx->pc = 0x1ecff4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294964160), bits); }
label_1ecff8:
    // 0x1ecff8: 0xe568f3c4  swc1        $f8, -0xC3C($t3)
    ctx->pc = 0x1ecff8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294964164), bits); }
label_1ecffc:
    // 0x1ecffc: 0xe589f3c8  swc1        $f9, -0xC38($t4)
    ctx->pc = 0x1ecffcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294964168), bits); }
label_1ed000:
    // 0x1ed000: 0xe5aaf3cc  swc1        $f10, -0xC34($t5)
    ctx->pc = 0x1ed000u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294964172), bits); }
label_1ed004:
    // 0x1ed004: 0xe5cbf3d0  swc1        $f11, -0xC30($t6)
    ctx->pc = 0x1ed004u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294964176), bits); }
label_1ed008:
    // 0x1ed008: 0xe60df3d4  swc1        $f13, -0xC2C($s0)
    ctx->pc = 0x1ed008u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964180), bits); }
label_1ed00c:
    // 0x1ed00c: 0x10000060  b           . + 4 + (0x60 << 2)
label_1ed010:
    if (ctx->pc == 0x1ED010u) {
        ctx->pc = 0x1ED010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED00Cu;
        // 0x1ed010: 0xe5edf3d8  swc1        $f13, -0xC28($t7) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294964184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED014u;
        goto label_1ed014;
    }
    ctx->pc = 0x1ED00Cu;
    {
        const bool branch_taken_0x1ed00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED00Cu;
        // 0x1ed010: 0xe5edf3d8  swc1        $f13, -0xC28($t7) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294964184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed00c) {
            ctx->pc = 0x1ED190u;
            goto label_1ed190;
        }
    }
    ctx->pc = 0x1ED014u;
label_1ed014:
    // 0x1ed014: 0x3c01bf93  lui         $at, 0xBF93
    ctx->pc = 0x1ed014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49043 << 16));
label_1ed018:
    // 0x1ed018: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ed018u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1ed01c:
    // 0x1ed01c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ed01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ed020:
    // 0x1ed020: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ed020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ed024:
    // 0x1ed024: 0x3c0140b6  lui         $at, 0x40B6
    ctx->pc = 0x1ed024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16566 << 16));
label_1ed028:
    // 0x1ed028: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ed028u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ed02c:
    // 0x1ed02c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ed02cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ed030:
    // 0x1ed030: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ed030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ed034:
    // 0x1ed034: 0x3c01bf86  lui         $at, 0xBF86
    ctx->pc = 0x1ed034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49030 << 16));
label_1ed038:
    // 0x1ed038: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ed038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ed03c:
    // 0x1ed03c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ed03cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ed040:
    // 0x1ed040: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1ed040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1ed044:
    // 0x1ed044: 0x3c013e91  lui         $at, 0x3E91
    ctx->pc = 0x1ed044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16017 << 16));
label_1ed048:
    // 0x1ed048: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1ed048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1ed04c:
    // 0x1ed04c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1ed04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1ed050:
    // 0x1ed050: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1ed050u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1ed054:
    // 0x1ed054: 0x3c013f48  lui         $at, 0x3F48
    ctx->pc = 0x1ed054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16200 << 16));
label_1ed058:
    // 0x1ed058: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1ed058u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1ed05c:
    // 0x1ed05c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ed05cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1ed060:
    // 0x1ed060: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1ed060u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1ed064:
    // 0x1ed064: 0x3c013f1e  lui         $at, 0x3F1E
    ctx->pc = 0x1ed064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16158 << 16));
label_1ed068:
    // 0x1ed068: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1ed068u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1ed06c:
    // 0x1ed06c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1ed06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1ed070:
    // 0x1ed070: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1ed070u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1ed074:
    // 0x1ed074: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x1ed074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
label_1ed078:
    // 0x1ed078: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1ed078u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_1ed07c:
    // 0x1ed07c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1ed07cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1ed080:
    // 0x1ed080: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1ed080u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1ed084:
    // 0x1ed084: 0x3c01bc13  lui         $at, 0xBC13
    ctx->pc = 0x1ed084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48147 << 16));
label_1ed088:
    // 0x1ed088: 0x342174bc  ori         $at, $at, 0x74BC
    ctx->pc = 0x1ed088u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29884);
label_1ed08c:
    // 0x1ed08c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1ed08cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1ed090:
    // 0x1ed090: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1ed090u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1ed094:
    // 0x1ed094: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x1ed094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
label_1ed098:
    // 0x1ed098: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1ed098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1ed09c:
    // 0x1ed09c: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1ed09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1ed0a0:
    // 0x1ed0a0: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1ed0a0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1ed0a4:
    // 0x1ed0a4: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1ed0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_1ed0a8:
    // 0x1ed0a8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ed0a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ed0ac:
    // 0x1ed0ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ed0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ed0b0:
    // 0x1ed0b0: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1ed0b0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1ed0b4:
    // 0x1ed0b4: 0x3c013e84  lui         $at, 0x3E84
    ctx->pc = 0x1ed0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16004 << 16));
label_1ed0b8:
    // 0x1ed0b8: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1ed0b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_1ed0bc:
    // 0x1ed0bc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ed0bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ed0c0:
    // 0x1ed0c0: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1ed0c0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1ed0c4:
    // 0x1ed0c4: 0x3c013f3e  lui         $at, 0x3F3E
    ctx->pc = 0x1ed0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16190 << 16));
label_1ed0c8:
    // 0x1ed0c8: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1ed0c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1ed0cc:
    // 0x1ed0cc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1ed0ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1ed0d0:
    // 0x1ed0d0: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1ed0d0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1ed0d4:
    // 0x1ed0d4: 0x3c013e42  lui         $at, 0x3E42
    ctx->pc = 0x1ed0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15938 << 16));
label_1ed0d8:
    // 0x1ed0d8: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1ed0d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1ed0dc:
    // 0x1ed0dc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1ed0dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1ed0e0:
    // 0x1ed0e0: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1ed0e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1ed0e4:
    // 0x1ed0e4: 0x3c013ead  lui         $at, 0x3EAD
    ctx->pc = 0x1ed0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16045 << 16));
label_1ed0e8:
    // 0x1ed0e8: 0x34219168  ori         $at, $at, 0x9168
    ctx->pc = 0x1ed0e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37224);
label_1ed0ec:
    // 0x1ed0ec: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1ed0ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1ed0f0:
    // 0x1ed0f0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1ed0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1ed0f4:
    // 0x1ed0f4: 0x3c013e51  lui         $at, 0x3E51
    ctx->pc = 0x1ed0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15953 << 16));
label_1ed0f8:
    // 0x1ed0f8: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1ed0f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1ed0fc:
    // 0x1ed0fc: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1ed0fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_1ed100:
    // 0x1ed100: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1ed100u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1ed104:
    // 0x1ed104: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1ed104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_1ed108:
    // 0x1ed108: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ed108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ed10c:
    // 0x1ed10c: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x1ed10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_1ed110:
    // 0x1ed110: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1ed110u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1ed114:
    // 0x1ed114: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1ed114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1ed118:
    // 0x1ed118: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ed118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ed11c:
    // 0x1ed11c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed11cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ed120:
    // 0x1ed120: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1ed120u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1ed124:
    // 0x1ed124: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1ed124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
label_1ed128:
    // 0x1ed128: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ed128u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ed12c:
    // 0x1ed12c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ed12cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ed130:
    // 0x1ed130: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1ed130u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1ed134:
    // 0x1ed134: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x1ed134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
label_1ed138:
    // 0x1ed138: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ed138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ed13c:
    // 0x1ed13c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ed13cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ed140:
    // 0x1ed140: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ed140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ed144:
    // 0x1ed144: 0xe440f3d4  swc1        $f0, -0xC2C($v0)
    ctx->pc = 0x1ed144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964180), bits); }
label_1ed148:
    // 0x1ed148: 0xe463f394  swc1        $f3, -0xC6C($v1)
    ctx->pc = 0x1ed148u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964116), bits); }
label_1ed14c:
    // 0x1ed14c: 0xe484f398  swc1        $f4, -0xC68($a0)
    ctx->pc = 0x1ed14cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964120), bits); }
label_1ed150:
    // 0x1ed150: 0xe4a5f39c  swc1        $f5, -0xC64($a1)
    ctx->pc = 0x1ed150u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964124), bits); }
label_1ed154:
    // 0x1ed154: 0xe4c6f3a0  swc1        $f6, -0xC60($a2)
    ctx->pc = 0x1ed154u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294964128), bits); }
label_1ed158:
    // 0x1ed158: 0xe4e7f3a4  swc1        $f7, -0xC5C($a3)
    ctx->pc = 0x1ed158u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964132), bits); }
label_1ed15c:
    // 0x1ed15c: 0xe508f3a8  swc1        $f8, -0xC58($t0)
    ctx->pc = 0x1ed15cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964136), bits); }
label_1ed160:
    // 0x1ed160: 0xe529f3ac  swc1        $f9, -0xC54($t1)
    ctx->pc = 0x1ed160u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294964140), bits); }
label_1ed164:
    // 0x1ed164: 0xe54af3b0  swc1        $f10, -0xC50($t2)
    ctx->pc = 0x1ed164u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294964144), bits); }
label_1ed168:
    // 0x1ed168: 0xe56bf3b4  swc1        $f11, -0xC4C($t3)
    ctx->pc = 0x1ed168u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294964148), bits); }
label_1ed16c:
    // 0x1ed16c: 0xe58cf3b8  swc1        $f12, -0xC48($t4)
    ctx->pc = 0x1ed16cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294964152), bits); }
label_1ed170:
    // 0x1ed170: 0xe5adf3bc  swc1        $f13, -0xC44($t5)
    ctx->pc = 0x1ed170u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294964156), bits); }
label_1ed174:
    // 0x1ed174: 0xe5cef3c0  swc1        $f14, -0xC40($t6)
    ctx->pc = 0x1ed174u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294964160), bits); }
label_1ed178:
    // 0x1ed178: 0xe5eff3c4  swc1        $f15, -0xC3C($t7)
    ctx->pc = 0x1ed178u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294964164), bits); }
label_1ed17c:
    // 0x1ed17c: 0xe610f3c8  swc1        $f16, -0xC38($s0)
    ctx->pc = 0x1ed17cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964168), bits); }
label_1ed180:
    // 0x1ed180: 0xe631f3cc  swc1        $f17, -0xC34($s1)
    ctx->pc = 0x1ed180u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294964172), bits); }
label_1ed184:
    // 0x1ed184: 0xe652f3d0  swc1        $f18, -0xC30($s2)
    ctx->pc = 0x1ed184u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294964176), bits); }
label_1ed188:
    // 0x1ed188: 0xe661f3d8  swc1        $f1, -0xC28($s3)
    ctx->pc = 0x1ed188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294964184), bits); }
label_1ed18c:
    // 0x1ed18c: 0xe682f3dc  swc1        $f2, -0xC24($s4)
    ctx->pc = 0x1ed18cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294964188), bits); }
label_1ed190:
    // 0x1ed190: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1ed190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1ed194:
    // 0x1ed194: 0x2442eec0  addiu       $v0, $v0, -0x1140
    ctx->pc = 0x1ed194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
label_1ed198:
    // 0x1ed198: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x1ed198u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_1ed19c:
    // 0x1ed19c: 0x2c640006  sltiu       $a0, $v1, 0x6
    ctx->pc = 0x1ed19cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1ed1a0:
    // 0x1ed1a0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_1ed1a4:
    if (ctx->pc == 0x1ED1A4u) {
        ctx->pc = 0x1ED1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1A0u;
        // 0x1ed1a4: 0xaea301dc  sw          $v1, 0x1DC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 476), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED1A8u;
        goto label_1ed1a8;
    }
    ctx->pc = 0x1ED1A0u;
    {
        const bool branch_taken_0x1ed1a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1A0u;
        // 0x1ed1a4: 0xaea301dc  sw          $v1, 0x1DC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 476), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1a0) {
            ctx->pc = 0x1ED1B0u;
            goto label_1ed1b0;
        }
    }
    ctx->pc = 0x1ED1A8u;
label_1ed1a8:
    // 0x1ed1a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ed1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ed1ac:
    // 0x1ed1ac: 0xaea201dc  sw          $v0, 0x1DC($s5)
    ctx->pc = 0x1ed1acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 476), GPR_U32(ctx, 2));
label_1ed1b0:
    // 0x1ed1b0: 0x8ea201dc  lw          $v0, 0x1DC($s5)
    ctx->pc = 0x1ed1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 476)));
label_1ed1b4:
    // 0x1ed1b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ed1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ed1b8:
    // 0x1ed1b8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ed1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ed1bc:
    // 0x1ed1bc: 0xc07b112  jal         func_1EC448
label_1ed1c0:
    if (ctx->pc == 0x1ED1C0u) {
        ctx->pc = 0x1ED1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1BCu;
        // 0x1ed1c0: 0xaea201e0  sw          $v0, 0x1E0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED1C4u;
        goto label_1ed1c4;
    }
    ctx->pc = 0x1ED1BCu;
    SET_GPR_U32(ctx, 31, 0x1ED1C4u);
    ctx->pc = 0x1ED1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED1BCu;
    // 0x1ed1c0: 0xaea201e0  sw          $v0, 0x1E0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 480), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC448u, 0x1ED1BCu, 0x1ED1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED1C4u;
label_1ed1c4:
    // 0x1ed1c4: 0x3c013b83  lui         $at, 0x3B83
    ctx->pc = 0x1ed1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15235 << 16));
label_1ed1c8:
    // 0x1ed1c8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1ed1c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1ed1cc:
    // 0x1ed1cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed1ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ed1d0:
    // 0x1ed1d0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1ed1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1ed1d4:
    // 0x1ed1d4: 0xaea00154  sw          $zero, 0x154($s5)
    ctx->pc = 0x1ed1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 340), GPR_U32(ctx, 0));
label_1ed1d8:
    // 0x1ed1d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed1dc:
    // 0x1ed1dc: 0xe6a001c0  swc1        $f0, 0x1C0($s5)
    ctx->pc = 0x1ed1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 448), bits); }
label_1ed1e0:
    // 0x1ed1e0: 0x9482eec0  lhu         $v0, -0x1140($a0)
    ctx->pc = 0x1ed1e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294962880)));
label_1ed1e4:
    // 0x1ed1e4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1ed1e8:
    if (ctx->pc == 0x1ED1E8u) {
        ctx->pc = 0x1ED1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1E4u;
        // 0x1ed1e8: 0xaea20150  sw          $v0, 0x150($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED1ECu;
        goto label_1ed1ec;
    }
    ctx->pc = 0x1ED1E4u;
    {
        const bool branch_taken_0x1ed1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ED1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1E4u;
        // 0x1ed1e8: 0xaea20150  sw          $v0, 0x150($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1e4) {
            ctx->pc = 0x1ED1F8u;
            goto label_1ed1f8;
        }
    }
    ctx->pc = 0x1ED1ECu;
label_1ed1ec:
    // 0x1ed1ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ed1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ed1f0:
    // 0x1ed1f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ed1f4:
    if (ctx->pc == 0x1ED1F4u) {
        ctx->pc = 0x1ED1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1F0u;
        // 0x1ed1f4: 0xaea20150  sw          $v0, 0x150($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED1F8u;
        goto label_1ed1f8;
    }
    ctx->pc = 0x1ED1F0u;
    {
        const bool branch_taken_0x1ed1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1F0u;
        // 0x1ed1f4: 0xaea20150  sw          $v0, 0x150($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1f0) {
            ctx->pc = 0x1ED1FCu;
            goto label_1ed1fc;
        }
    }
    ctx->pc = 0x1ED1F8u;
label_1ed1f8:
    // 0x1ed1f8: 0xaea30150  sw          $v1, 0x150($s5)
    ctx->pc = 0x1ed1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 336), GPR_U32(ctx, 3));
label_1ed1fc:
    // 0x1ed1fc: 0x8ea301dc  lw          $v1, 0x1DC($s5)
    ctx->pc = 0x1ed1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 476)));
label_1ed200:
    // 0x1ed200: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ed200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1ed204:
    // 0x1ed204: 0x24500840  addiu       $s0, $v0, 0x840
    ctx->pc = 0x1ed204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_1ed208:
    // 0x1ed208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ed208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed20c:
    // 0x1ed20c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1ed20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1ed210:
    // 0x1ed210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ed214:
    // 0x1ed214: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1ed214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ed218:
    // 0x1ed218: 0xc06ba26  jal         func_1AE898
label_1ed21c:
    if (ctx->pc == 0x1ED21Cu) {
        ctx->pc = 0x1ED21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED218u;
        // 0x1ed21c: 0xaea301e4  sw          $v1, 0x1E4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED220u;
        goto label_1ed220;
    }
    ctx->pc = 0x1ED218u;
    SET_GPR_U32(ctx, 31, 0x1ED220u);
    ctx->pc = 0x1ED21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED218u;
    // 0x1ed21c: 0xaea301e4  sw          $v1, 0x1E4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 484), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1ED218u, 0x1ED220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED220u;
label_1ed220:
    // 0x1ed220: 0x8ea30150  lw          $v1, 0x150($s5)
    ctx->pc = 0x1ed220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
label_1ed224:
    // 0x1ed224: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x1ed224u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ed228:
    // 0x1ed228: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1ed22c:
    if (ctx->pc == 0x1ED22Cu) {
        ctx->pc = 0x1ED22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED228u;
        // 0x1ed22c: 0xaea20168  sw          $v0, 0x168($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED230u;
        goto label_1ed230;
    }
    ctx->pc = 0x1ED228u;
    {
        const bool branch_taken_0x1ed228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED228u;
        // 0x1ed22c: 0xaea20168  sw          $v0, 0x168($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed228) {
            ctx->pc = 0x1ED240u;
            goto label_1ed240;
        }
    }
    ctx->pc = 0x1ED230u;
label_1ed230:
    // 0x1ed230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ed234:
    // 0x1ed234: 0xc06ba26  jal         func_1AE898
label_1ed238:
    if (ctx->pc == 0x1ED238u) {
        ctx->pc = 0x1ED238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED234u;
        // 0x1ed238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED23Cu;
        goto label_1ed23c;
    }
    ctx->pc = 0x1ED234u;
    SET_GPR_U32(ctx, 31, 0x1ED23Cu);
    ctx->pc = 0x1ED238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED234u;
    // 0x1ed238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1ED234u, 0x1ED23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED23Cu;
label_1ed23c:
    // 0x1ed23c: 0xaea2016c  sw          $v0, 0x16C($s5)
    ctx->pc = 0x1ed23cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 364), GPR_U32(ctx, 2));
label_1ed240:
    // 0x1ed240: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ed240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ed244:
    // 0x1ed244: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1ed244u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1ed248:
    // 0x1ed248: 0x8c4a27e4  lw          $t2, 0x27E4($v0)
    ctx->pc = 0x1ed248u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1ed24c:
    // 0x1ed24c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ed24cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ed250:
    // 0x1ed250: 0x24a56f58  addiu       $a1, $a1, 0x6F58
    ctx->pc = 0x1ed250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28504));
label_1ed254:
    // 0x1ed254: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1ed254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ed258:
    // 0x1ed258: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1ed258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1ed25c:
    // 0x1ed25c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ed25cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ed260:
    // 0x1ed260: 0x25086f20  addiu       $t0, $t0, 0x6F20
    ctx->pc = 0x1ed260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28448));
label_1ed264:
    // 0x1ed264: 0x240901a4  addiu       $t1, $zero, 0x1A4
    ctx->pc = 0x1ed264u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
label_1ed268:
    // 0x1ed268: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ed268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ed26c:
    // 0x1ed26c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ed26cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed270:
    // 0x1ed270: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ed270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ed274:
    // 0x1ed274: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1ed274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1ed278:
    // 0x1ed278: 0x40f809  jalr        $v0
label_1ed27c:
    if (ctx->pc == 0x1ED27Cu) {
        ctx->pc = 0x1ED27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED278u;
        // 0x1ed27c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED280u;
        goto label_1ed280;
    }
    ctx->pc = 0x1ED278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED280u);
        ctx->pc = 0x1ED27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED278u;
        // 0x1ed27c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED278u, 0x1ED280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED280u;
label_1ed280:
    // 0x1ed280: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ed280u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ed284:
    // 0x1ed284: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1ed288:
    if (ctx->pc == 0x1ED288u) {
        ctx->pc = 0x1ED288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED284u;
        // 0x1ed288: 0xaea3008c  sw          $v1, 0x8C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED28Cu;
        goto label_1ed28c;
    }
    ctx->pc = 0x1ED284u;
    {
        const bool branch_taken_0x1ed284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed284) {
            ctx->pc = 0x1ED288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED284u;
            // 0x1ed288: 0xaea3008c  sw          $v1, 0x8C($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED29Cu;
            goto label_1ed29c;
        }
    }
    ctx->pc = 0x1ED28Cu;
label_1ed28c:
    // 0x1ed28c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ed28cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1ed290:
    // 0x1ed290: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1ed290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1ed294:
    // 0x1ed294: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1ed294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1ed298:
    // 0x1ed298: 0xaea3008c  sw          $v1, 0x8C($s5)
    ctx->pc = 0x1ed298u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 3));
label_1ed29c:
    // 0x1ed29c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1ed29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1ed2a0:
    // 0x1ed2a0: 0xac43ee4c  sw          $v1, -0x11B4($v0)
    ctx->pc = 0x1ed2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962764), GPR_U32(ctx, 3));
label_1ed2a4:
    // 0x1ed2a4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1ed2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1ed2a8:
    // 0x1ed2a8: 0x26a60050  addiu       $a2, $s5, 0x50
    ctx->pc = 0x1ed2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
label_1ed2ac:
    // 0x1ed2ac: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1ed2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ed2b0:
    // 0x1ed2b0: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x1ed2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1ed2b4:
    // 0x1ed2b4: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x1ed2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1ed2b8:
    // 0x1ed2b8: 0x27a30134  addiu       $v1, $sp, 0x134
    ctx->pc = 0x1ed2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_1ed2bc:
    // 0x1ed2bc: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x1ed2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_1ed2c0:
    // 0x1ed2c0: 0xafa50180  sw          $a1, 0x180($sp)
    ctx->pc = 0x1ed2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 5));
label_1ed2c4:
    // 0x1ed2c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ed2c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed2c8:
    // 0x1ed2c8: 0xafa60190  sw          $a2, 0x190($sp)
    ctx->pc = 0x1ed2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 6));
label_1ed2cc:
    // 0x1ed2cc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ed2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ed2d0:
    // 0x1ed2d0: 0xafa70184  sw          $a3, 0x184($sp)
    ctx->pc = 0x1ed2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 7));
label_1ed2d4:
    // 0x1ed2d4: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1ed2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1ed2d8:
    // 0x1ed2d8: 0xafa80188  sw          $t0, 0x188($sp)
    ctx->pc = 0x1ed2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 8));
label_1ed2dc:
    // 0x1ed2dc: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x1ed2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1ed2e0:
    // 0x1ed2e0: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1ed2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_1ed2e4:
    // 0x1ed2e4: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x1ed2e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1ed2e8:
    // 0x1ed2e8: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x1ed2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
label_1ed2ec:
    // 0x1ed2ec: 0x26a20198  addiu       $v0, $s5, 0x198
    ctx->pc = 0x1ed2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 408));
label_1ed2f0:
    // 0x1ed2f0: 0xafa40158  sw          $a0, 0x158($sp)
    ctx->pc = 0x1ed2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 4));
label_1ed2f4:
    // 0x1ed2f4: 0x26a301a8  addiu       $v1, $s5, 0x1A8
    ctx->pc = 0x1ed2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 424));
label_1ed2f8:
    // 0x1ed2f8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1ed2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1ed2fc:
    // 0x1ed2fc: 0xafa5018c  sw          $a1, 0x18C($sp)
    ctx->pc = 0x1ed2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 5));
label_1ed300:
    // 0x1ed300: 0xafa60194  sw          $a2, 0x194($sp)
    ctx->pc = 0x1ed300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 6));
label_1ed304:
    // 0x1ed304: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x1ed304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_1ed308:
    // 0x1ed308: 0xafa70198  sw          $a3, 0x198($sp)
    ctx->pc = 0x1ed308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 7));
label_1ed30c:
    // 0x1ed30c: 0x26a601e8  addiu       $a2, $s5, 0x1E8
    ctx->pc = 0x1ed30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 488));
label_1ed310:
    // 0x1ed310: 0xafa8019c  sw          $t0, 0x19C($sp)
    ctx->pc = 0x1ed310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 8));
label_1ed314:
    // 0x1ed314: 0x26a70160  addiu       $a3, $s5, 0x160
    ctx->pc = 0x1ed314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 352));
label_1ed318:
    // 0x1ed318: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x1ed318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
label_1ed31c:
    // 0x1ed31c: 0x26a80158  addiu       $t0, $s5, 0x158
    ctx->pc = 0x1ed31cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 344));
label_1ed320:
    // 0x1ed320: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x1ed320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
label_1ed324:
    // 0x1ed324: 0x26a20138  addiu       $v0, $s5, 0x138
    ctx->pc = 0x1ed324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 312));
label_1ed328:
    // 0x1ed328: 0xafa4015c  sw          $a0, 0x15C($sp)
    ctx->pc = 0x1ed328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
label_1ed32c:
    // 0x1ed32c: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1ed32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1ed330:
    // 0x1ed330: 0x26a40140  addiu       $a0, $s5, 0x140
    ctx->pc = 0x1ed330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
label_1ed334:
    // 0x1ed334: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x1ed334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_1ed338:
    // 0x1ed338: 0xafa6017c  sw          $a2, 0x17C($sp)
    ctx->pc = 0x1ed338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 6));
label_1ed33c:
    // 0x1ed33c: 0x3c160064  lui         $s6, 0x64
    ctx->pc = 0x1ed33cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
label_1ed340:
    // 0x1ed340: 0xafa70170  sw          $a3, 0x170($sp)
    ctx->pc = 0x1ed340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 7));
label_1ed344:
    // 0x1ed344: 0x27b70070  addiu       $s7, $sp, 0x70
    ctx->pc = 0x1ed344u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ed348:
    // 0x1ed348: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x1ed348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_1ed34c:
    // 0x1ed34c: 0x27be0080  addiu       $fp, $sp, 0x80
    ctx->pc = 0x1ed34cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1ed350:
    // 0x1ed350: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x1ed350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_1ed354:
    // 0x1ed354: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x1ed354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
label_1ed358:
    // 0x1ed358: 0xafa40168  sw          $a0, 0x168($sp)
    ctx->pc = 0x1ed358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 4));
label_1ed35c:
    // 0x1ed35c: 0x26c4ef80  addiu       $a0, $s6, -0x1080
    ctx->pc = 0x1ed35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294963072));
label_1ed360:
    // 0x1ed360: 0xc080ad4  jal         func_202B50
label_1ed364:
    if (ctx->pc == 0x1ED364u) {
        ctx->pc = 0x1ED364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED360u;
        // 0x1ed364: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED368u;
        goto label_1ed368;
    }
    ctx->pc = 0x1ED360u;
    SET_GPR_U32(ctx, 31, 0x1ED368u);
    ctx->pc = 0x1ED364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED360u;
    // 0x1ed364: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B50u, 0x1ED360u, 0x1ED368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED368u;
label_1ed368:
    // 0x1ed368: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1ed36c:
    if (ctx->pc == 0x1ED36Cu) {
        ctx->pc = 0x1ED36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED368u;
        // 0x1ed36c: 0x26930001  addiu       $s3, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED370u;
        goto label_1ed370;
    }
    ctx->pc = 0x1ED368u;
    {
        const bool branch_taken_0x1ed368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED368u;
        // 0x1ed36c: 0x26930001  addiu       $s3, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed368) {
            ctx->pc = 0x1ED3C0u;
            goto label_1ed3c0;
        }
    }
    ctx->pc = 0x1ED370u;
label_1ed370:
    // 0x1ed370: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1ed370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ed374:
    // 0x1ed374: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ed374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed378:
    // 0x1ed378: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1ed378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ed37c:
    // 0x1ed37c: 0x0  nop
    ctx->pc = 0x1ed37cu;
    // NOP
label_1ed380:
    // 0x1ed380: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ed380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ed384:
    // 0x1ed384: 0x26c4ef80  addiu       $a0, $s6, -0x1080
    ctx->pc = 0x1ed384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294963072));
label_1ed388:
    // 0x1ed388: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ed388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ed38c:
    // 0x1ed38c: 0xc080b38  jal         func_202CE0
label_1ed390:
    if (ctx->pc == 0x1ED390u) {
        ctx->pc = 0x1ED390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED38Cu;
        // 0x1ed390: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED394u;
        goto label_1ed394;
    }
    ctx->pc = 0x1ED38Cu;
    SET_GPR_U32(ctx, 31, 0x1ED394u);
    ctx->pc = 0x1ED390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED38Cu;
    // 0x1ed390: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CE0u, 0x1ED38Cu, 0x1ED394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED394u;
label_1ed394:
    // 0x1ed394: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ed394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ed398:
    // 0x1ed398: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x1ed398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1ed39c:
    // 0x1ed39c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1ed3a0:
    if (ctx->pc == 0x1ED3A0u) {
        ctx->pc = 0x1ED3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED39Cu;
        // 0x1ed3a0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED3A4u;
        goto label_1ed3a4;
    }
    ctx->pc = 0x1ED39Cu;
    {
        const bool branch_taken_0x1ed39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED39Cu;
        // 0x1ed3a0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed39c) {
            ctx->pc = 0x1ED380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed380;
        }
    }
    ctx->pc = 0x1ED3A4u;
label_1ed3a4:
    // 0x1ed3a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ed3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ed3a8:
    // 0x1ed3a8: 0xc080b32  jal         func_202CC8
label_1ed3ac:
    if (ctx->pc == 0x1ED3ACu) {
        ctx->pc = 0x1ED3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3A8u;
        // 0x1ed3ac: 0x26c4ef80  addiu       $a0, $s6, -0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294963072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED3B0u;
        goto label_1ed3b0;
    }
    ctx->pc = 0x1ED3A8u;
    SET_GPR_U32(ctx, 31, 0x1ED3B0u);
    ctx->pc = 0x1ED3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED3A8u;
    // 0x1ed3ac: 0x26c4ef80  addiu       $a0, $s6, -0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294963072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CC8u, 0x1ED3A8u, 0x1ED3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3B0u;
label_1ed3b0:
    // 0x1ed3b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ed3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ed3b4:
    // 0x1ed3b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ed3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ed3b8:
    // 0x1ed3b8: 0xc07b260  jal         func_1EC980
label_1ed3bc:
    if (ctx->pc == 0x1ED3BCu) {
        ctx->pc = 0x1ED3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3B8u;
        // 0x1ed3bc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED3C0u;
        goto label_1ed3c0;
    }
    ctx->pc = 0x1ED3B8u;
    SET_GPR_U32(ctx, 31, 0x1ED3C0u);
    ctx->pc = 0x1ED3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED3B8u;
    // 0x1ed3bc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC980u, 0x1ED3B8u, 0x1ED3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3C0u;
label_1ed3c0:
    // 0x1ed3c0: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x1ed3c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ed3c4:
    // 0x1ed3c4: 0x2e82000a  sltiu       $v0, $s4, 0xA
    ctx->pc = 0x1ed3c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1ed3c8:
    // 0x1ed3c8: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
label_1ed3cc:
    if (ctx->pc == 0x1ED3CCu) {
        ctx->pc = 0x1ED3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3C8u;
        // 0x1ed3cc: 0x26c4ef80  addiu       $a0, $s6, -0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294963072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED3D0u;
        goto label_1ed3d0;
    }
    ctx->pc = 0x1ED3C8u;
    {
        const bool branch_taken_0x1ed3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed3c8) {
            ctx->pc = 0x1ED3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED3C8u;
            // 0x1ed3cc: 0x26c4ef80  addiu       $a0, $s6, -0x1080 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294963072));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed360;
        }
    }
    ctx->pc = 0x1ED3D0u;
label_1ed3d0:
    // 0x1ed3d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ed3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ed3d4:
    // 0x1ed3d4: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1ed3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_1ed3d8:
    // 0x1ed3d8: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x1ed3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_1ed3dc:
    // 0x1ed3dc: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1ed3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1ed3e0:
    // 0x1ed3e0: 0x24446f78  addiu       $a0, $v0, 0x6F78
    ctx->pc = 0x1ed3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28536));
label_1ed3e4:
    // 0x1ed3e4: 0x68870007  ldl         $a3, 0x7($a0)
    ctx->pc = 0x1ed3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1ed3e8:
    // 0x1ed3e8: 0x6c870000  ldr         $a3, 0x0($a0)
    ctx->pc = 0x1ed3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1ed3ec:
    // 0x1ed3ec: 0xb3a70067  sdl         $a3, 0x67($sp)
    ctx->pc = 0x1ed3ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ed3f0:
    // 0x1ed3f0: 0xb7a70060  sdr         $a3, 0x60($sp)
    ctx->pc = 0x1ed3f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ed3f4:
    // 0x1ed3f4: 0x3c070055  lui         $a3, 0x55
    ctx->pc = 0x1ed3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)85 << 16));
label_1ed3f8:
    // 0x1ed3f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ed3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ed3fc:
    // 0x1ed3fc: 0x24f06f20  addiu       $s0, $a3, 0x6F20
    ctx->pc = 0x1ed3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 28448));
label_1ed400:
    // 0x1ed400: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ed400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ed404:
    // 0x1ed404: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ed404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ed408:
    // 0x1ed408: 0x60f809  jalr        $v1
label_1ed40c:
    if (ctx->pc == 0x1ED40Cu) {
        ctx->pc = 0x1ED40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED408u;
        // 0x1ed40c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED410u;
        goto label_1ed410;
    }
    ctx->pc = 0x1ED408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ED410u);
        ctx->pc = 0x1ED40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED408u;
        // 0x1ed40c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED408u, 0x1ED410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED410u;
label_1ed410:
    // 0x1ed410: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1ed410u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1ed414:
    // 0x1ed414: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ed414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ed418:
    // 0x1ed418: 0x8d0c27e4  lw          $t4, 0x27E4($t0)
    ctx->pc = 0x1ed418u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10212)));
label_1ed41c:
    // 0x1ed41c: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x1ed41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1ed420:
    // 0x1ed420: 0x24a56f80  addiu       $a1, $a1, 0x6F80
    ctx->pc = 0x1ed420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28544));
label_1ed424:
    // 0x1ed424: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ed424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ed428:
    // 0x1ed428: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ed428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ed42c:
    // 0x1ed42c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1ed42cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ed430:
    // 0x1ed430: 0x240901b7  addiu       $t1, $zero, 0x1B7
    ctx->pc = 0x1ed430u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
label_1ed434:
    // 0x1ed434: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ed434u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed438:
    // 0x1ed438: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ed438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ed43c:
    // 0x1ed43c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ed43cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed440:
    // 0x1ed440: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ed440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ed444:
    // 0x1ed444: 0x40f809  jalr        $v0
label_1ed448:
    if (ctx->pc == 0x1ED448u) {
        ctx->pc = 0x1ED448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED444u;
        // 0x1ed448: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED44Cu;
        goto label_1ed44c;
    }
    ctx->pc = 0x1ED444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED44Cu);
        ctx->pc = 0x1ED448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED444u;
        // 0x1ed448: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED444u, 0x1ED44Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED44Cu;
label_1ed44c:
    // 0x1ed44c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ed44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ed450:
    // 0x1ed450: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_1ed454:
    if (ctx->pc == 0x1ED454u) {
        ctx->pc = 0x1ED454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED450u;
        // 0x1ed454: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED458u;
        goto label_1ed458;
    }
    ctx->pc = 0x1ED450u;
    {
        const bool branch_taken_0x1ed450 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED450u;
        // 0x1ed454: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed450) {
            ctx->pc = 0x1ED478u;
            goto label_1ed478;
        }
    }
    ctx->pc = 0x1ED458u;
label_1ed458:
    // 0x1ed458: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1ed458u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
label_1ed45c:
    // 0x1ed45c: 0x2442cec8  addiu       $v0, $v0, -0x3138
    ctx->pc = 0x1ed45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954696));
label_1ed460:
    // 0x1ed460: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1ed460u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_1ed464:
    // 0x1ed464: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1ed464u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_1ed468:
    // 0x1ed468: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x1ed468u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_1ed46c:
    // 0x1ed46c: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x1ed46cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
label_1ed470:
    // 0x1ed470: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1ed470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_1ed474:
    // 0x1ed474: 0xacc20020  sw          $v0, 0x20($a2)
    ctx->pc = 0x1ed474u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
label_1ed478:
    // 0x1ed478: 0xaea60090  sw          $a2, 0x90($s5)
    ctx->pc = 0x1ed478u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 6));
label_1ed47c:
    // 0x1ed47c: 0x8ea5016c  lw          $a1, 0x16C($s5)
    ctx->pc = 0x1ed47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 364)));
label_1ed480:
    // 0x1ed480: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x1ed480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_1ed484:
    // 0x1ed484: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ed484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ed488:
    // 0x1ed488: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ed488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1ed48c:
    // 0x1ed48c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1ed48cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1ed490:
    // 0x1ed490: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1ed490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1ed494:
    // 0x1ed494: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ed494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ed498:
    // 0x1ed498: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1ed498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1ed49c:
    // 0x1ed49c: 0x60f809  jalr        $v1
label_1ed4a0:
    if (ctx->pc == 0x1ED4A0u) {
        ctx->pc = 0x1ED4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED49Cu;
        // 0x1ed4a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED4A4u;
        goto label_1ed4a4;
    }
    ctx->pc = 0x1ED49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ED4A4u);
        ctx->pc = 0x1ED4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED49Cu;
        // 0x1ed4a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED49Cu, 0x1ED4A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED4A4u;
label_1ed4a4:
    // 0x1ed4a4: 0xc07f728  jal         func_1FDCA0
label_1ed4a8:
    if (ctx->pc == 0x1ED4A8u) {
        ctx->pc = 0x1ED4ACu;
        goto label_1ed4ac;
    }
    ctx->pc = 0x1ED4A4u;
    SET_GPR_U32(ctx, 31, 0x1ED4ACu);
    ctx->pc = 0x1FDCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCA0u, 0x1ED4A4u, 0x1ED4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED4ACu;
label_1ed4ac:
    // 0x1ed4ac: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1ed4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1ed4b0:
    // 0x1ed4b0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ed4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ed4b4:
    // 0x1ed4b4: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x1ed4b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ed4b8:
    // 0x1ed4b8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ed4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ed4bc:
    // 0x1ed4bc: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1ed4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_1ed4c0:
    // 0x1ed4c0: 0x24a56f98  addiu       $a1, $a1, 0x6F98
    ctx->pc = 0x1ed4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28568));
label_1ed4c4:
    // 0x1ed4c4: 0xe6f6000c  swc1        $f22, 0xC($s7)
    ctx->pc = 0x1ed4c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1ed4c8:
    // 0x1ed4c8: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1ed4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1ed4cc:
    // 0x1ed4cc: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1ed4ccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1ed4d0:
    // 0x1ed4d0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ed4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ed4d4:
    // 0x1ed4d4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1ed4d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ed4d8:
    // 0x1ed4d8: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x1ed4d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ed4dc:
    // 0x1ed4dc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ed4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ed4e0:
    // 0x1ed4e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ed4e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed4e4:
    // 0x1ed4e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ed4e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed4e8:
    // 0x1ed4e8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ed4e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ed4ec:
    // 0x1ed4ec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ed4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ed4f0:
    // 0x1ed4f0: 0x40f809  jalr        $v0
label_1ed4f4:
    if (ctx->pc == 0x1ED4F4u) {
        ctx->pc = 0x1ED4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4F0u;
        // 0x1ed4f4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED4F8u;
        goto label_1ed4f8;
    }
    ctx->pc = 0x1ED4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED4F8u);
        ctx->pc = 0x1ED4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4F0u;
        // 0x1ed4f4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED4F0u, 0x1ED4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED4F8u;
label_1ed4f8:
    // 0x1ed4f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ed4fc:
    if (ctx->pc == 0x1ED4FCu) {
        ctx->pc = 0x1ED500u;
        goto label_1ed500;
    }
    ctx->pc = 0x1ED4F8u;
    {
        const bool branch_taken_0x1ed4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed4f8) {
            ctx->pc = 0x1ED508u;
            goto label_1ed508;
        }
    }
    ctx->pc = 0x1ED500u;
label_1ed500:
    // 0x1ed500: 0xc0733e2  jal         func_1CCF88
label_1ed504:
    if (ctx->pc == 0x1ED504u) {
        ctx->pc = 0x1ED504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED500u;
        // 0x1ed504: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED508u;
        goto label_1ed508;
    }
    ctx->pc = 0x1ED500u;
    SET_GPR_U32(ctx, 31, 0x1ED508u);
    ctx->pc = 0x1ED504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED500u;
    // 0x1ed504: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1ED500u, 0x1ED508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED508u;
label_1ed508:
    // 0x1ed508: 0x3c01400e  lui         $at, 0x400E
    ctx->pc = 0x1ed508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16398 << 16));
label_1ed50c:
    // 0x1ed50c: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1ed50cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1ed510:
    // 0x1ed510: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ed510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ed514:
    // 0x1ed514: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x1ed514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_1ed518:
    // 0x1ed518: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ed518u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1ed51c:
    // 0x1ed51c: 0xc05e602  jal         func_179808
label_1ed520:
    if (ctx->pc == 0x1ED520u) {
        ctx->pc = 0x1ED520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED51Cu;
        // 0x1ed520: 0xaea2017c  sw          $v0, 0x17C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED524u;
        goto label_1ed524;
    }
    ctx->pc = 0x1ED51Cu;
    SET_GPR_U32(ctx, 31, 0x1ED524u);
    ctx->pc = 0x1ED520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED51Cu;
    // 0x1ed520: 0xaea2017c  sw          $v0, 0x17C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 380), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1ED51Cu, 0x1ED524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED524u;
label_1ed524:
    // 0x1ed524: 0x8ea2017c  lw          $v0, 0x17C($s5)
    ctx->pc = 0x1ed524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 380)));
label_1ed528:
    // 0x1ed528: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ed528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1ed52c:
    // 0x1ed52c: 0x8c87d310  lw          $a3, -0x2CF0($a0)
    ctx->pc = 0x1ed52cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955792)));
label_1ed530:
    // 0x1ed530: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ed530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ed534:
    // 0x1ed534: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ed534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ed538:
    // 0x1ed538: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ed538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed53c:
    // 0x1ed53c: 0x8fa60184  lw          $a2, 0x184($sp)
    ctx->pc = 0x1ed53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_1ed540:
    // 0x1ed540: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ed540u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed544:
    // 0x1ed544: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1ed544u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1ed548:
    // 0x1ed548: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ed548u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed54c:
    // 0x1ed54c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1ed54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1ed550:
    // 0x1ed550: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1ed550u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ed554:
    // 0x1ed554: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1ed554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ed558:
    // 0x1ed558: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1ed558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1ed55c:
    // 0x1ed55c: 0x40f809  jalr        $v0
label_1ed560:
    if (ctx->pc == 0x1ED560u) {
        ctx->pc = 0x1ED560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED55Cu;
        // 0x1ed560: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED564u;
        goto label_1ed564;
    }
    ctx->pc = 0x1ED55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED564u);
        ctx->pc = 0x1ED560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED55Cu;
        // 0x1ed560: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED55Cu, 0x1ED564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED564u;
label_1ed564:
    // 0x1ed564: 0xc067b9c  jal         func_19EE70
label_1ed568:
    if (ctx->pc == 0x1ED568u) {
        ctx->pc = 0x1ED568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED564u;
        // 0x1ed568: 0x2404002b  addiu       $a0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED56Cu;
        goto label_1ed56c;
    }
    ctx->pc = 0x1ED564u;
    SET_GPR_U32(ctx, 31, 0x1ED56Cu);
    ctx->pc = 0x1ED568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED564u;
    // 0x1ed568: 0x2404002b  addiu       $a0, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1ED564u, 0x1ED56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED56Cu;
label_1ed56c:
    // 0x1ed56c: 0x8ea4017c  lw          $a0, 0x17C($s5)
    ctx->pc = 0x1ed56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 380)));
label_1ed570:
    // 0x1ed570: 0xc073478  jal         func_1CD1E0
label_1ed574:
    if (ctx->pc == 0x1ED574u) {
        ctx->pc = 0x1ED574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED570u;
        // 0x1ed574: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED578u;
        goto label_1ed578;
    }
    ctx->pc = 0x1ED570u;
    SET_GPR_U32(ctx, 31, 0x1ED578u);
    ctx->pc = 0x1ED574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED570u;
    // 0x1ed574: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1ED570u, 0x1ED578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED578u;
label_1ed578:
    // 0x1ed578: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x1ed578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_1ed57c:
    // 0x1ed57c: 0xc05e602  jal         func_179808
label_1ed580:
    if (ctx->pc == 0x1ED580u) {
        ctx->pc = 0x1ED580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED57Cu;
        // 0x1ed580: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED584u;
        goto label_1ed584;
    }
    ctx->pc = 0x1ED57Cu;
    SET_GPR_U32(ctx, 31, 0x1ED584u);
    ctx->pc = 0x1ED580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED57Cu;
    // 0x1ed580: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1ED57Cu, 0x1ED584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED584u;
label_1ed584:
    // 0x1ed584: 0x3c013db0  lui         $at, 0x3DB0
    ctx->pc = 0x1ed584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15792 << 16));
label_1ed588:
    // 0x1ed588: 0x342120c4  ori         $at, $at, 0x20C4
    ctx->pc = 0x1ed588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8388);
label_1ed58c:
    // 0x1ed58c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed58cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ed590:
    // 0x1ed590: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1ed590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1ed594:
    // 0x1ed594: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x1ed594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ed598:
    // 0x1ed598: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1ed598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed59c:
    // 0x1ed59c: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x1ed59cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1ed5a0:
    // 0x1ed5a0: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1ed5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_1ed5a4:
    // 0x1ed5a4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1ed5a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_1ed5a8:
    // 0x1ed5a8: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x1ed5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_1ed5ac:
    // 0x1ed5ac: 0xe7d6000c  swc1        $f22, 0xC($fp)
    ctx->pc = 0x1ed5acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_1ed5b0:
    // 0x1ed5b0: 0x3c013f82  lui         $at, 0x3F82
    ctx->pc = 0x1ed5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16258 << 16));
label_1ed5b4:
    // 0x1ed5b4: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1ed5b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1ed5b8:
    // 0x1ed5b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ed5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ed5bc:
    // 0x1ed5bc: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1ed5bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1ed5c0:
    // 0x1ed5c0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1ed5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed5c4:
    // 0x1ed5c4: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x1ed5c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ed5c8:
    // 0x1ed5c8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1ed5c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1ed5cc:
    // 0x1ed5cc: 0xe4a3ee50  swc1        $f3, -0x11B0($a1)
    ctx->pc = 0x1ed5ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962768), bits); }
label_1ed5d0:
    // 0x1ed5d0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1ed5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_1ed5d4:
    // 0x1ed5d4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1ed5d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1ed5d8:
    // 0x1ed5d8: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x1ed5d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1ed5dc:
    // 0x1ed5dc: 0xc07f734  jal         func_1FDCD0
label_1ed5e0:
    if (ctx->pc == 0x1ED5E0u) {
        ctx->pc = 0x1ED5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5DCu;
        // 0x1ed5e0: 0xe6f6000c  swc1        $f22, 0xC($s7) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED5E4u;
        goto label_1ed5e4;
    }
    ctx->pc = 0x1ED5DCu;
    SET_GPR_U32(ctx, 31, 0x1ED5E4u);
    ctx->pc = 0x1ED5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED5DCu;
    // 0x1ed5e0: 0xe6f6000c  swc1        $f22, 0xC($s7) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCD0u, 0x1ED5DCu, 0x1ED5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED5E4u;
label_1ed5e4:
    // 0x1ed5e4: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x1ed5e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ed5e8:
    // 0x1ed5e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ed5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ed5ec:
    // 0x1ed5ec: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1ed5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1ed5f0:
    // 0x1ed5f0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ed5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ed5f4:
    // 0x1ed5f4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1ed5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_1ed5f8:
    // 0x1ed5f8: 0x24a56fa8  addiu       $a1, $a1, 0x6FA8
    ctx->pc = 0x1ed5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28584));
label_1ed5fc:
    // 0x1ed5fc: 0xe6f6000c  swc1        $f22, 0xC($s7)
    ctx->pc = 0x1ed5fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1ed600:
    // 0x1ed600: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1ed600u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ed604:
    // 0x1ed604: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1ed604u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1ed608:
    // 0x1ed608: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x1ed608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_1ed60c:
    // 0x1ed60c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ed60cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ed610:
    // 0x1ed610: 0x240901ca  addiu       $t1, $zero, 0x1CA
    ctx->pc = 0x1ed610u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 458));
label_1ed614:
    // 0x1ed614: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ed614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ed618:
    // 0x1ed618: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ed618u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed61c:
    // 0x1ed61c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ed61cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed620:
    // 0x1ed620: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ed620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ed624:
    // 0x1ed624: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ed624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ed628:
    // 0x1ed628: 0x40f809  jalr        $v0
label_1ed62c:
    if (ctx->pc == 0x1ED62Cu) {
        ctx->pc = 0x1ED62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED628u;
        // 0x1ed62c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED630u;
        goto label_1ed630;
    }
    ctx->pc = 0x1ED628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED630u);
        ctx->pc = 0x1ED62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED628u;
        // 0x1ed62c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED628u, 0x1ED630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED630u;
label_1ed630:
    // 0x1ed630: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ed634:
    if (ctx->pc == 0x1ED634u) {
        ctx->pc = 0x1ED634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED630u;
        // 0x1ed634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED638u;
        goto label_1ed638;
    }
    ctx->pc = 0x1ED630u;
    {
        const bool branch_taken_0x1ed630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED630u;
        // 0x1ed634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed630) {
            ctx->pc = 0x1ED644u;
            goto label_1ed644;
        }
    }
    ctx->pc = 0x1ED638u;
label_1ed638:
    // 0x1ed638: 0xc073a9c  jal         func_1CEA70
label_1ed63c:
    if (ctx->pc == 0x1ED63Cu) {
        ctx->pc = 0x1ED63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED638u;
        // 0x1ed63c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED640u;
        goto label_1ed640;
    }
    ctx->pc = 0x1ED638u;
    SET_GPR_U32(ctx, 31, 0x1ED640u);
    ctx->pc = 0x1ED63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED638u;
    // 0x1ed63c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x1ED638u, 0x1ED640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED640u;
label_1ed640:
    // 0x1ed640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ed640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ed644:
    // 0x1ed644: 0xaea20180  sw          $v0, 0x180($s5)
    ctx->pc = 0x1ed644u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 384), GPR_U32(ctx, 2));
label_1ed648:
    // 0x1ed648: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ed648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ed64c:
    // 0x1ed64c: 0xc073ad0  jal         func_1CEB40
label_1ed650:
    if (ctx->pc == 0x1ED650u) {
        ctx->pc = 0x1ED650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED64Cu;
        // 0x1ed650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED654u;
        goto label_1ed654;
    }
    ctx->pc = 0x1ED64Cu;
    SET_GPR_U32(ctx, 31, 0x1ED654u);
    ctx->pc = 0x1ED650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED64Cu;
    // 0x1ed650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1ED64Cu, 0x1ED654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED654u;
label_1ed654:
    // 0x1ed654: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1ed654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1ed658:
    // 0x1ed658: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ed658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ed65c:
    // 0x1ed65c: 0x9483eec0  lhu         $v1, -0x1140($a0)
    ctx->pc = 0x1ed65cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294962880)));
label_1ed660:
    // 0x1ed660: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1ed664:
    if (ctx->pc == 0x1ED664u) {
        ctx->pc = 0x1ED668u;
        goto label_1ed668;
    }
    ctx->pc = 0x1ED660u;
    {
        const bool branch_taken_0x1ed660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed660) {
            ctx->pc = 0x1ED684u;
            goto label_1ed684;
        }
    }
    ctx->pc = 0x1ED668u;
label_1ed668:
    // 0x1ed668: 0xc067b9c  jal         func_19EE70
label_1ed66c:
    if (ctx->pc == 0x1ED66Cu) {
        ctx->pc = 0x1ED66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED668u;
        // 0x1ed66c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED670u;
        goto label_1ed670;
    }
    ctx->pc = 0x1ED668u;
    SET_GPR_U32(ctx, 31, 0x1ED670u);
    ctx->pc = 0x1ED66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED668u;
    // 0x1ed66c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1ED668u, 0x1ED670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED670u;
label_1ed670:
    // 0x1ed670: 0x8ea40180  lw          $a0, 0x180($s5)
    ctx->pc = 0x1ed670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
label_1ed674:
    // 0x1ed674: 0xc073b0a  jal         func_1CEC28
label_1ed678:
    if (ctx->pc == 0x1ED678u) {
        ctx->pc = 0x1ED678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED674u;
        // 0x1ed678: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED67Cu;
        goto label_1ed67c;
    }
    ctx->pc = 0x1ED674u;
    SET_GPR_U32(ctx, 31, 0x1ED67Cu);
    ctx->pc = 0x1ED678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED674u;
    // 0x1ed678: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1ED674u, 0x1ED67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED67Cu;
label_1ed67c:
    // 0x1ed67c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ed680:
    if (ctx->pc == 0x1ED680u) {
        ctx->pc = 0x1ED680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED67Cu;
        // 0x1ed680: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED684u;
        goto label_1ed684;
    }
    ctx->pc = 0x1ED67Cu;
    {
        const bool branch_taken_0x1ed67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED67Cu;
        // 0x1ed680: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed67c) {
            ctx->pc = 0x1ED69Cu;
            goto label_1ed69c;
        }
    }
    ctx->pc = 0x1ED684u;
label_1ed684:
    // 0x1ed684: 0xc067b9c  jal         func_19EE70
label_1ed688:
    if (ctx->pc == 0x1ED688u) {
        ctx->pc = 0x1ED688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED684u;
        // 0x1ed688: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED68Cu;
        goto label_1ed68c;
    }
    ctx->pc = 0x1ED684u;
    SET_GPR_U32(ctx, 31, 0x1ED68Cu);
    ctx->pc = 0x1ED688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED684u;
    // 0x1ed688: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1ED684u, 0x1ED68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED68Cu;
label_1ed68c:
    // 0x1ed68c: 0x8ea40180  lw          $a0, 0x180($s5)
    ctx->pc = 0x1ed68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
label_1ed690:
    // 0x1ed690: 0xc073b0a  jal         func_1CEC28
label_1ed694:
    if (ctx->pc == 0x1ED694u) {
        ctx->pc = 0x1ED694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED690u;
        // 0x1ed694: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED698u;
        goto label_1ed698;
    }
    ctx->pc = 0x1ED690u;
    SET_GPR_U32(ctx, 31, 0x1ED698u);
    ctx->pc = 0x1ED694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED690u;
    // 0x1ed694: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1ED690u, 0x1ED698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED698u;
label_1ed698:
    // 0x1ed698: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1ed698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1ed69c:
    // 0x1ed69c: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x1ed69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ed6a0:
    // 0x1ed6a0: 0xc4a1ee50  lwc1        $f1, -0x11B0($a1)
    ctx->pc = 0x1ed6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed6a4:
    // 0x1ed6a4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ed6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ed6a8:
    // 0x1ed6a8: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1ed6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_1ed6ac:
    // 0x1ed6ac: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ed6acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1ed6b0:
    // 0x1ed6b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed6b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ed6b4:
    // 0x1ed6b4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ed6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ed6b8:
    // 0x1ed6b8: 0x24a56fb8  addiu       $a1, $a1, 0x6FB8
    ctx->pc = 0x1ed6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28600));
label_1ed6bc:
    // 0x1ed6bc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1ed6bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1ed6c0:
    // 0x1ed6c0: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x1ed6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_1ed6c4:
    // 0x1ed6c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ed6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ed6c8:
    // 0x1ed6c8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ed6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1ed6cc:
    // 0x1ed6cc: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1ed6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1ed6d0:
    // 0x1ed6d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ed6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ed6d4:
    // 0x1ed6d4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1ed6d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1ed6d8:
    // 0x1ed6d8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ed6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ed6dc:
    // 0x1ed6dc: 0x3c013f3a  lui         $at, 0x3F3A
    ctx->pc = 0x1ed6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16186 << 16));
label_1ed6e0:
    // 0x1ed6e0: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1ed6e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_1ed6e4:
    // 0x1ed6e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ed6e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ed6e8:
    // 0x1ed6e8: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1ed6e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_1ed6ec:
    // 0x1ed6ec: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1ed6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1ed6f0:
    // 0x1ed6f0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1ed6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1ed6f4:
    // 0x1ed6f4: 0x25086f20  addiu       $t0, $t0, 0x6F20
    ctx->pc = 0x1ed6f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28448));
label_1ed6f8:
    // 0x1ed6f8: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1ed6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_1ed6fc:
    // 0x1ed6fc: 0x240901e3  addiu       $t1, $zero, 0x1E3
    ctx->pc = 0x1ed6fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 483));
label_1ed700:
    // 0x1ed700: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x1ed700u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1ed704:
    // 0x1ed704: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ed704u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed708:
    // 0x1ed708: 0xe456000c  swc1        $f22, 0xC($v0)
    ctx->pc = 0x1ed708u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1ed70c:
    // 0x1ed70c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ed70cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed710:
    // 0x1ed710: 0xe7b500a0  swc1        $f21, 0xA0($sp)
    ctx->pc = 0x1ed710u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1ed714:
    // 0x1ed714: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1ed714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1ed718:
    // 0x1ed718: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1ed718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_1ed71c:
    // 0x1ed71c: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x1ed71cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1ed720:
    // 0x1ed720: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1ed720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_1ed724:
    // 0x1ed724: 0xe476000c  swc1        $f22, 0xC($v1)
    ctx->pc = 0x1ed724u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1ed728:
    // 0x1ed728: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1ed728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1ed72c:
    // 0x1ed72c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ed72cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ed730:
    // 0x1ed730: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1ed730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_1ed734:
    // 0x1ed734: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1ed734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed738:
    // 0x1ed738: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1ed738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_1ed73c:
    // 0x1ed73c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1ed73cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1ed740:
    // 0x1ed740: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1ed740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1ed744:
    // 0x1ed744: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1ed744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1ed748:
    // 0x1ed748: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1ed748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_1ed74c:
    // 0x1ed74c: 0x8c8c27e4  lw          $t4, 0x27E4($a0)
    ctx->pc = 0x1ed74cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_1ed750:
    // 0x1ed750: 0xe443ee54  swc1        $f3, -0x11AC($v0)
    ctx->pc = 0x1ed750u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962772), bits); }
label_1ed754:
    // 0x1ed754: 0x46190001  sub.s       $f0, $f0, $f25
    ctx->pc = 0x1ed754u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
label_1ed758:
    // 0x1ed758: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x1ed758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
label_1ed75c:
    // 0x1ed75c: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1ed75cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
label_1ed760:
    // 0x1ed760: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1ed760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_1ed764:
    // 0x1ed764: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1ed764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1ed768:
    // 0x1ed768: 0xe7d70008  swc1        $f23, 0x8($fp)
    ctx->pc = 0x1ed768u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_1ed76c:
    // 0x1ed76c: 0xe7d6000c  swc1        $f22, 0xC($fp)
    ctx->pc = 0x1ed76cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_1ed770:
    // 0x1ed770: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1ed770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1ed774:
    // 0x1ed774: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x1ed774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ed778:
    // 0x1ed778: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1ed778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed77c:
    // 0x1ed77c: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x1ed77cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_1ed780:
    // 0x1ed780: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1ed780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed784:
    // 0x1ed784: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1ed784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_1ed788:
    // 0x1ed788: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1ed788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_1ed78c:
    // 0x1ed78c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1ed78cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1ed790:
    // 0x1ed790: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ed790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ed794:
    // 0x1ed794: 0x461a0000  add.s       $f0, $f0, $f26
    ctx->pc = 0x1ed794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
label_1ed798:
    // 0x1ed798: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1ed798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ed79c:
    // 0x1ed79c: 0xe6f6000c  swc1        $f22, 0xC($s7)
    ctx->pc = 0x1ed79cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1ed7a0:
    // 0x1ed7a0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1ed7a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ed7a4:
    // 0x1ed7a4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1ed7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1ed7a8:
    // 0x1ed7a8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1ed7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed7ac:
    // 0x1ed7ac: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1ed7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1ed7b0:
    // 0x1ed7b0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ed7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ed7b4:
    // 0x1ed7b4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ed7b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ed7b8:
    // 0x1ed7b8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ed7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ed7bc:
    // 0x1ed7bc: 0x40f809  jalr        $v0
label_1ed7c0:
    if (ctx->pc == 0x1ED7C0u) {
        ctx->pc = 0x1ED7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7BCu;
        // 0x1ed7c0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED7C4u;
        goto label_1ed7c4;
    }
    ctx->pc = 0x1ED7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED7C4u);
        ctx->pc = 0x1ED7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7BCu;
        // 0x1ed7c0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED7BCu, 0x1ED7C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED7C4u;
label_1ed7c4:
    // 0x1ed7c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ed7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ed7c8:
    // 0x1ed7c8: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_1ed7cc:
    if (ctx->pc == 0x1ED7CCu) {
        ctx->pc = 0x1ED7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7C8u;
        // 0x1ed7cc: 0xaeb001b8  sw          $s0, 0x1B8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 440), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED7D0u;
        goto label_1ed7d0;
    }
    ctx->pc = 0x1ED7C8u;
    {
        const bool branch_taken_0x1ed7c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed7c8) {
            ctx->pc = 0x1ED7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED7C8u;
            // 0x1ed7cc: 0xaeb001b8  sw          $s0, 0x1B8($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 440), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED7FCu;
            goto label_1ed7fc;
        }
    }
    ctx->pc = 0x1ED7D0u;
label_1ed7d0:
    // 0x1ed7d0: 0xc0733e2  jal         func_1CCF88
label_1ed7d4:
    if (ctx->pc == 0x1ED7D4u) {
        ctx->pc = 0x1ED7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7D0u;
        // 0x1ed7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED7D8u;
        goto label_1ed7d8;
    }
    ctx->pc = 0x1ED7D0u;
    SET_GPR_U32(ctx, 31, 0x1ED7D8u);
    ctx->pc = 0x1ED7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7D0u;
    // 0x1ed7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1ED7D0u, 0x1ED7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED7D8u;
label_1ed7d8:
    // 0x1ed7d8: 0xc06a38c  jal         func_1A8E30
label_1ed7dc:
    if (ctx->pc == 0x1ED7DCu) {
        ctx->pc = 0x1ED7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7D8u;
        // 0x1ed7dc: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED7E0u;
        goto label_1ed7e0;
    }
    ctx->pc = 0x1ED7D8u;
    SET_GPR_U32(ctx, 31, 0x1ED7E0u);
    ctx->pc = 0x1ED7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7D8u;
    // 0x1ed7dc: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1ED7D8u, 0x1ED7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED7E0u;
label_1ed7e0:
    // 0x1ed7e0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1ed7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1ed7e4:
    // 0x1ed7e4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ed7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1ed7e8:
    // 0x1ed7e8: 0x2463c968  addiu       $v1, $v1, -0x3698
    ctx->pc = 0x1ed7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953320));
label_1ed7ec:
    // 0x1ed7ec: 0x2442c8e8  addiu       $v0, $v0, -0x3718
    ctx->pc = 0x1ed7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953192));
label_1ed7f0:
    // 0x1ed7f0: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1ed7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_1ed7f4:
    // 0x1ed7f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ed7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ed7f8:
    // 0x1ed7f8: 0xaeb001b8  sw          $s0, 0x1B8($s5)
    ctx->pc = 0x1ed7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 440), GPR_U32(ctx, 16));
label_1ed7fc:
    // 0x1ed7fc: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x1ed7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
label_1ed800:
    // 0x1ed800: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1ed800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_1ed804:
    // 0x1ed804: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ed804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ed808:
    // 0x1ed808: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ed808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ed80c:
    // 0x1ed80c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ed80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ed810:
    // 0x1ed810: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ed810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed814:
    // 0x1ed814: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1ed814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ed818:
    // 0x1ed818: 0x8ea90178  lw          $t1, 0x178($s5)
    ctx->pc = 0x1ed818u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
label_1ed81c:
    // 0x1ed81c: 0x3c070055  lui         $a3, 0x55
    ctx->pc = 0x1ed81cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)85 << 16));
label_1ed820:
    // 0x1ed820: 0x24e76fc8  addiu       $a3, $a3, 0x6FC8
    ctx->pc = 0x1ed820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28616));
label_1ed824:
    // 0x1ed824: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1ed824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1ed828:
    // 0x1ed828: 0x3508000a  ori         $t0, $t0, 0xA
    ctx->pc = 0x1ed828u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)10);
label_1ed82c:
    // 0x1ed82c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1ed82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1ed830:
    // 0x1ed830: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ed830u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1ed834:
    // 0x1ed834: 0x60f809  jalr        $v1
label_1ed838:
    if (ctx->pc == 0x1ED838u) {
        ctx->pc = 0x1ED838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED834u;
        // 0x1ed838: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED83Cu;
        goto label_1ed83c;
    }
    ctx->pc = 0x1ED834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ED83Cu);
        ctx->pc = 0x1ED838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED834u;
        // 0x1ed838: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED834u, 0x1ED83Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED83Cu;
label_1ed83c:
    // 0x1ed83c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ed83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ed840:
    // 0x1ed840: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ed840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ed844:
    // 0x1ed844: 0x24a56fd0  addiu       $a1, $a1, 0x6FD0
    ctx->pc = 0x1ed844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28624));
label_1ed848:
    // 0x1ed848: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1ed848u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1ed84c:
    // 0x1ed84c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1ed84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1ed850:
    // 0x1ed850: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ed850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ed854:
    // 0x1ed854: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1ed854u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1ed858:
    // 0x1ed858: 0x25086f20  addiu       $t0, $t0, 0x6F20
    ctx->pc = 0x1ed858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28448));
label_1ed85c:
    // 0x1ed85c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ed85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ed860:
    // 0x1ed860: 0x240901e7  addiu       $t1, $zero, 0x1E7
    ctx->pc = 0x1ed860u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 487));
label_1ed864:
    // 0x1ed864: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ed864u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed868:
    // 0x1ed868: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ed868u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed86c:
    // 0x1ed86c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ed86cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ed870:
    // 0x1ed870: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ed870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ed874:
    // 0x1ed874: 0x40f809  jalr        $v0
label_1ed878:
    if (ctx->pc == 0x1ED878u) {
        ctx->pc = 0x1ED878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED874u;
        // 0x1ed878: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED87Cu;
        goto label_1ed87c;
    }
    ctx->pc = 0x1ED874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED87Cu);
        ctx->pc = 0x1ED878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED874u;
        // 0x1ed878: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED874u, 0x1ED87Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED87Cu;
label_1ed87c:
    // 0x1ed87c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1ed880:
    if (ctx->pc == 0x1ED880u) {
        ctx->pc = 0x1ED880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED87Cu;
        // 0x1ed880: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED884u;
        goto label_1ed884;
    }
    ctx->pc = 0x1ED87Cu;
    {
        const bool branch_taken_0x1ed87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed87c) {
            ctx->pc = 0x1ED880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED87Cu;
            // 0x1ed880: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED890u;
            goto label_1ed890;
        }
    }
    ctx->pc = 0x1ED884u;
label_1ed884:
    // 0x1ed884: 0xc0686fe  jal         func_1A1BF8
label_1ed888:
    if (ctx->pc == 0x1ED888u) {
        ctx->pc = 0x1ED888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED884u;
        // 0x1ed888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED88Cu;
        goto label_1ed88c;
    }
    ctx->pc = 0x1ED884u;
    SET_GPR_U32(ctx, 31, 0x1ED88Cu);
    ctx->pc = 0x1ED888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED884u;
    // 0x1ed888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1ED884u, 0x1ED88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED88Cu;
label_1ed88c:
    // 0x1ed88c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ed88cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ed890:
    // 0x1ed890: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1ed890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed894:
    // 0x1ed894: 0xc482f3ac  lwc1        $f2, -0xC54($a0)
    ctx->pc = 0x1ed894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ed898:
    // 0x1ed898: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1ed898u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1ed89c:
    // 0x1ed89c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1ed89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed8a0:
    // 0x1ed8a0: 0x241400bf  addiu       $s4, $zero, 0xBF
    ctx->pc = 0x1ed8a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_1ed8a4:
    // 0x1ed8a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ed8a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1ed8a8:
    // 0x1ed8a8: 0xaea201c4  sw          $v0, 0x1C4($s5)
    ctx->pc = 0x1ed8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 452), GPR_U32(ctx, 2));
label_1ed8ac:
    // 0x1ed8ac: 0x8eaa0178  lw          $t2, 0x178($s5)
    ctx->pc = 0x1ed8acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
label_1ed8b0:
    // 0x1ed8b0: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x1ed8b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ed8b4:
    // 0x1ed8b4: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1ed8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1ed8b8:
    // 0x1ed8b8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ed8b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed8bc:
    // 0x1ed8bc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1ed8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ed8c0:
    // 0x1ed8c0: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x1ed8c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_1ed8c4:
    // 0x1ed8c4: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1ed8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1ed8c8:
    // 0x1ed8c8: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1ed8c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1ed8cc:
    // 0x1ed8cc: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1ed8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1ed8d0:
    // 0x1ed8d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ed8d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed8d4:
    // 0x1ed8d4: 0xc4c0f3b4  lwc1        $f0, -0xC4C($a2)
    ctx->pc = 0x1ed8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed8d8:
    // 0x1ed8d8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ed8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ed8dc:
    // 0x1ed8dc: 0xa3b40130  sb          $s4, 0x130($sp)
    ctx->pc = 0x1ed8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 304), (uint8_t)GPR_U32(ctx, 20));
label_1ed8e0:
    // 0x1ed8e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ed8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed8e4:
    // 0x1ed8e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ed8e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ed8e8:
    // 0x1ed8e8: 0x35290017  ori         $t1, $t1, 0x17
    ctx->pc = 0x1ed8e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)23);
label_1ed8ec:
    // 0x1ed8ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ed8ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed8f0:
    // 0x1ed8f0: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1ed8f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_1ed8f4:
    // 0x1ed8f4: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1ed8f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1ed8f8:
    // 0x1ed8f8: 0xa0760003  sb          $s6, 0x3($v1)
    ctx->pc = 0x1ed8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 22));
label_1ed8fc:
    // 0x1ed8fc: 0xa0740001  sb          $s4, 0x1($v1)
    ctx->pc = 0x1ed8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 20));
label_1ed900:
    // 0x1ed900: 0xa0740002  sb          $s4, 0x2($v1)
    ctx->pc = 0x1ed900u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 20));
label_1ed904:
    // 0x1ed904: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ed904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ed908:
    // 0x1ed908: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x1ed908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1ed90c:
    // 0x1ed90c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1ed90cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1ed910:
    // 0x1ed910: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ed910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ed914:
    // 0x1ed914: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x1ed914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
label_1ed918:
    // 0x1ed918: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1ed918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ed91c:
    // 0x1ed91c: 0xafb60010  sw          $s6, 0x10($sp)
    ctx->pc = 0x1ed91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 22));
label_1ed920:
    // 0x1ed920: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1ed920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1ed924:
    // 0x1ed924: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ed924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ed928:
    // 0x1ed928: 0x40f809  jalr        $v0
label_1ed92c:
    if (ctx->pc == 0x1ED92Cu) {
        ctx->pc = 0x1ED92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED928u;
        // 0x1ed92c: 0xc46cf3dc  lwc1        $f12, -0xC24($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED930u;
        goto label_1ed930;
    }
    ctx->pc = 0x1ED928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED930u);
        ctx->pc = 0x1ED92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED928u;
        // 0x1ed92c: 0xc46cf3dc  lwc1        $f12, -0xC24($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED928u, 0x1ED930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED930u;
label_1ed930:
    // 0x1ed930: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1ed930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1ed934:
    // 0x1ed934: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1ed934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1ed938:
    // 0x1ed938: 0xc480ee50  lwc1        $f0, -0x11B0($a0)
    ctx->pc = 0x1ed938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294962768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed93c:
    // 0x1ed93c: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1ed93cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1ed940:
    // 0x1ed940: 0xc4c1ee54  lwc1        $f1, -0x11AC($a2)
    ctx->pc = 0x1ed940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294962772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed944:
    // 0x1ed944: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ed944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ed948:
    // 0x1ed948: 0x24a56fb8  addiu       $a1, $a1, 0x6FB8
    ctx->pc = 0x1ed948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28600));
label_1ed94c:
    // 0x1ed94c: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x1ed94cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ed950:
    // 0x1ed950: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1ed950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1ed954:
    // 0x1ed954: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ed954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ed958:
    // 0x1ed958: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1ed958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_1ed95c:
    // 0x1ed95c: 0x8d0c27e4  lw          $t4, 0x27E4($t0)
    ctx->pc = 0x1ed95cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10212)));
label_1ed960:
    // 0x1ed960: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ed960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ed964:
    // 0x1ed964: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1ed964u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1ed968:
    // 0x1ed968: 0x25086f20  addiu       $t0, $t0, 0x6F20
    ctx->pc = 0x1ed968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28448));
label_1ed96c:
    // 0x1ed96c: 0x240901f1  addiu       $t1, $zero, 0x1F1
    ctx->pc = 0x1ed96cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 497));
label_1ed970:
    // 0x1ed970: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1ed970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1ed974:
    // 0x1ed974: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ed974u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed978:
    // 0x1ed978: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ed978u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed97c:
    // 0x1ed97c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1ed97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1ed980:
    // 0x1ed980: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1ed980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1ed984:
    // 0x1ed984: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ed984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1ed988:
    // 0x1ed988: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ed98c:
    // 0x1ed98c: 0xe6f6000c  swc1        $f22, 0xC($s7)
    ctx->pc = 0x1ed98cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1ed990:
    // 0x1ed990: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1ed990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1ed994:
    // 0x1ed994: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1ed994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_1ed998:
    // 0x1ed998: 0xe7d70008  swc1        $f23, 0x8($fp)
    ctx->pc = 0x1ed998u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_1ed99c:
    // 0x1ed99c: 0xe7d6000c  swc1        $f22, 0xC($fp)
    ctx->pc = 0x1ed99cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_1ed9a0:
    // 0x1ed9a0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ed9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ed9a4:
    // 0x1ed9a4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ed9a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ed9a8:
    // 0x1ed9a8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ed9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ed9ac:
    // 0x1ed9ac: 0x40f809  jalr        $v0
label_1ed9b0:
    if (ctx->pc == 0x1ED9B0u) {
        ctx->pc = 0x1ED9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9ACu;
        // 0x1ed9b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED9B4u;
        goto label_1ed9b4;
    }
    ctx->pc = 0x1ED9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED9B4u);
        ctx->pc = 0x1ED9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9ACu;
        // 0x1ed9b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED9ACu, 0x1ED9B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED9B4u;
label_1ed9b4:
    // 0x1ed9b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ed9b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ed9b8:
    // 0x1ed9b8: 0x5240000c  beql        $s2, $zero, . + 4 + (0xC << 2)
label_1ed9bc:
    if (ctx->pc == 0x1ED9BCu) {
        ctx->pc = 0x1ED9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9B8u;
        // 0x1ed9bc: 0xaeb201cc  sw          $s2, 0x1CC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 460), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED9C0u;
        goto label_1ed9c0;
    }
    ctx->pc = 0x1ED9B8u;
    {
        const bool branch_taken_0x1ed9b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed9b8) {
            ctx->pc = 0x1ED9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED9B8u;
            // 0x1ed9bc: 0xaeb201cc  sw          $s2, 0x1CC($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 460), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED9ECu;
            goto label_1ed9ec;
        }
    }
    ctx->pc = 0x1ED9C0u;
label_1ed9c0:
    // 0x1ed9c0: 0xc0733e2  jal         func_1CCF88
label_1ed9c4:
    if (ctx->pc == 0x1ED9C4u) {
        ctx->pc = 0x1ED9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9C0u;
        // 0x1ed9c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED9C8u;
        goto label_1ed9c8;
    }
    ctx->pc = 0x1ED9C0u;
    SET_GPR_U32(ctx, 31, 0x1ED9C8u);
    ctx->pc = 0x1ED9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9C0u;
    // 0x1ed9c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1ED9C0u, 0x1ED9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9C8u;
label_1ed9c8:
    // 0x1ed9c8: 0xc06a38c  jal         func_1A8E30
label_1ed9cc:
    if (ctx->pc == 0x1ED9CCu) {
        ctx->pc = 0x1ED9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9C8u;
        // 0x1ed9cc: 0x264400d0  addiu       $a0, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED9D0u;
        goto label_1ed9d0;
    }
    ctx->pc = 0x1ED9C8u;
    SET_GPR_U32(ctx, 31, 0x1ED9D0u);
    ctx->pc = 0x1ED9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9C8u;
    // 0x1ed9cc: 0x264400d0  addiu       $a0, $s2, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1ED9C8u, 0x1ED9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9D0u;
label_1ed9d0:
    // 0x1ed9d0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1ed9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1ed9d4:
    // 0x1ed9d4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ed9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1ed9d8:
    // 0x1ed9d8: 0x2463c968  addiu       $v1, $v1, -0x3698
    ctx->pc = 0x1ed9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953320));
label_1ed9dc:
    // 0x1ed9dc: 0x2442c8e8  addiu       $v0, $v0, -0x3718
    ctx->pc = 0x1ed9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953192));
label_1ed9e0:
    // 0x1ed9e0: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x1ed9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
label_1ed9e4:
    // 0x1ed9e4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1ed9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1ed9e8:
    // 0x1ed9e8: 0xaeb201cc  sw          $s2, 0x1CC($s5)
    ctx->pc = 0x1ed9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 460), GPR_U32(ctx, 18));
label_1ed9ec:
    // 0x1ed9ec: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x1ed9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_1ed9f0:
    // 0x1ed9f0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1ed9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ed9f4:
    // 0x1ed9f4: 0x86110070  lh          $s1, 0x70($s0)
    ctx->pc = 0x1ed9f4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
label_1ed9f8:
    // 0x1ed9f8: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x1ed9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1ed9fc:
    // 0x1ed9fc: 0xc067b9c  jal         func_19EE70
label_1eda00:
    if (ctx->pc == 0x1EDA00u) {
        ctx->pc = 0x1EDA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9FCu;
        // 0x1eda00: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA04u;
        goto label_1eda04;
    }
    ctx->pc = 0x1ED9FCu;
    SET_GPR_U32(ctx, 31, 0x1EDA04u);
    ctx->pc = 0x1EDA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9FCu;
    // 0x1eda00: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1ED9FCu, 0x1EDA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDA04u;
label_1eda04:
    // 0x1eda04: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1eda04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1eda08:
    // 0x1eda08: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x1eda08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
label_1eda0c:
    // 0x1eda0c: 0x8ea90178  lw          $t1, 0x178($s5)
    ctx->pc = 0x1eda0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
label_1eda10:
    // 0x1eda10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1eda10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eda14:
    // 0x1eda14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eda14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eda18:
    // 0x1eda18: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1eda18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1eda1c:
    // 0x1eda1c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1eda1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1eda20:
    // 0x1eda20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1eda20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1eda24:
    // 0x1eda24: 0x60f809  jalr        $v1
label_1eda28:
    if (ctx->pc == 0x1EDA28u) {
        ctx->pc = 0x1EDA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA24u;
        // 0x1eda28: 0x3508000a  ori         $t0, $t0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA2Cu;
        goto label_1eda2c;
    }
    ctx->pc = 0x1EDA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EDA2Cu);
        ctx->pc = 0x1EDA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA24u;
        // 0x1eda28: 0x3508000a  ori         $t0, $t0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDA24u, 0x1EDA2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDA2Cu;
label_1eda2c:
    // 0x1eda2c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1eda2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eda30:
    // 0x1eda30: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1eda30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1eda34:
    // 0x1eda34: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1eda34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1eda38:
    // 0x1eda38: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1eda38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1eda3c:
    // 0x1eda3c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1eda3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1eda40:
    // 0x1eda40: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1eda40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_1eda44:
    // 0x1eda44: 0xc461ee54  lwc1        $f1, -0x11AC($v1)
    ctx->pc = 0x1eda44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eda48:
    // 0x1eda48: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1eda48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1eda4c:
    // 0x1eda4c: 0x24a56fb8  addiu       $a1, $a1, 0x6FB8
    ctx->pc = 0x1eda4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28600));
label_1eda50:
    // 0x1eda50: 0x8c8c27e4  lw          $t4, 0x27E4($a0)
    ctx->pc = 0x1eda50u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_1eda54:
    // 0x1eda54: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1eda54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1eda58:
    // 0x1eda58: 0x46190001  sub.s       $f0, $f0, $f25
    ctx->pc = 0x1eda58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
label_1eda5c:
    // 0x1eda5c: 0xc443ee50  lwc1        $f3, -0x11B0($v0)
    ctx->pc = 0x1eda5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1eda60:
    // 0x1eda60: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1eda60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eda64:
    // 0x1eda64: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1eda64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1eda68:
    // 0x1eda68: 0x25086f20  addiu       $t0, $t0, 0x6F20
    ctx->pc = 0x1eda68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28448));
label_1eda6c:
    // 0x1eda6c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1eda6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1eda70:
    // 0x1eda70: 0x240901fb  addiu       $t1, $zero, 0x1FB
    ctx->pc = 0x1eda70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 507));
label_1eda74:
    // 0x1eda74: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1eda74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1eda78:
    // 0x1eda78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1eda78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eda7c:
    // 0x1eda7c: 0xe7d70008  swc1        $f23, 0x8($fp)
    ctx->pc = 0x1eda7cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_1eda80:
    // 0x1eda80: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1eda80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eda84:
    // 0x1eda84: 0xe7d6000c  swc1        $f22, 0xC($fp)
    ctx->pc = 0x1eda84u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_1eda88:
    // 0x1eda88: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x1eda88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
label_1eda8c:
    // 0x1eda8c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1eda8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_1eda90:
    // 0x1eda90: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x1eda90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1eda94:
    // 0x1eda94: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1eda94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eda98:
    // 0x1eda98: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x1eda98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_1eda9c:
    // 0x1eda9c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1eda9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1edaa0:
    // 0x1edaa0: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x1edaa0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1edaa4:
    // 0x1edaa4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1edaa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_1edaa8:
    // 0x1edaa8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1edaa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1edaac:
    // 0x1edaac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1edaacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1edab0:
    // 0x1edab0: 0x461a0001  sub.s       $f0, $f0, $f26
    ctx->pc = 0x1edab0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
label_1edab4:
    // 0x1edab4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1edab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1edab8:
    // 0x1edab8: 0xe6f6000c  swc1        $f22, 0xC($s7)
    ctx->pc = 0x1edab8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1edabc:
    // 0x1edabc: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1edabcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1edac0:
    // 0x1edac0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1edac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1edac4:
    // 0x1edac4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1edac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1edac8:
    // 0x1edac8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1edac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1edacc:
    // 0x1edacc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1edaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1edad0:
    // 0x1edad0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1edad0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1edad4:
    // 0x1edad4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1edad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1edad8:
    // 0x1edad8: 0x40f809  jalr        $v0
label_1edadc:
    if (ctx->pc == 0x1EDADCu) {
        ctx->pc = 0x1EDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAD8u;
        // 0x1edadc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDAE0u;
        goto label_1edae0;
    }
    ctx->pc = 0x1EDAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EDAE0u);
        ctx->pc = 0x1EDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAD8u;
        // 0x1edadc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDAD8u, 0x1EDAE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDAE0u;
label_1edae0:
    // 0x1edae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1edae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1edae4:
    // 0x1edae4: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_1edae8:
    if (ctx->pc == 0x1EDAE8u) {
        ctx->pc = 0x1EDAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAE4u;
        // 0x1edae8: 0xaeb001bc  sw          $s0, 0x1BC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 444), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDAECu;
        goto label_1edaec;
    }
    ctx->pc = 0x1EDAE4u;
    {
        const bool branch_taken_0x1edae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edae4) {
            ctx->pc = 0x1EDAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EDAE4u;
            // 0x1edae8: 0xaeb001bc  sw          $s0, 0x1BC($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 444), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EDB18u;
            goto label_1edb18;
        }
    }
    ctx->pc = 0x1EDAECu;
label_1edaec:
    // 0x1edaec: 0xc0733e2  jal         func_1CCF88
label_1edaf0:
    if (ctx->pc == 0x1EDAF0u) {
        ctx->pc = 0x1EDAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAECu;
        // 0x1edaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDAF4u;
        goto label_1edaf4;
    }
    ctx->pc = 0x1EDAECu;
    SET_GPR_U32(ctx, 31, 0x1EDAF4u);
    ctx->pc = 0x1EDAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDAECu;
    // 0x1edaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1EDAECu, 0x1EDAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDAF4u;
label_1edaf4:
    // 0x1edaf4: 0xc06a38c  jal         func_1A8E30
label_1edaf8:
    if (ctx->pc == 0x1EDAF8u) {
        ctx->pc = 0x1EDAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAF4u;
        // 0x1edaf8: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDAFCu;
        goto label_1edafc;
    }
    ctx->pc = 0x1EDAF4u;
    SET_GPR_U32(ctx, 31, 0x1EDAFCu);
    ctx->pc = 0x1EDAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDAF4u;
    // 0x1edaf8: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1EDAF4u, 0x1EDAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDAFCu;
label_1edafc:
    // 0x1edafc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1edafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1edb00:
    // 0x1edb00: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1edb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1edb04:
    // 0x1edb04: 0x2463c968  addiu       $v1, $v1, -0x3698
    ctx->pc = 0x1edb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953320));
label_1edb08:
    // 0x1edb08: 0x2442c8e8  addiu       $v0, $v0, -0x3718
    ctx->pc = 0x1edb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953192));
label_1edb0c:
    // 0x1edb0c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1edb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_1edb10:
    // 0x1edb10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1edb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1edb14:
    // 0x1edb14: 0xaeb001bc  sw          $s0, 0x1BC($s5)
    ctx->pc = 0x1edb14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 444), GPR_U32(ctx, 16));
label_1edb18:
    // 0x1edb18: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x1edb18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
label_1edb1c:
    // 0x1edb1c: 0x8ea90178  lw          $t1, 0x178($s5)
    ctx->pc = 0x1edb1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
label_1edb20:
    // 0x1edb20: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1edb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1edb24:
    // 0x1edb24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1edb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1edb28:
    // 0x1edb28: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1edb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1edb2c:
    // 0x1edb2c: 0x3c070055  lui         $a3, 0x55
    ctx->pc = 0x1edb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)85 << 16));
label_1edb30:
    // 0x1edb30: 0x24e76fc8  addiu       $a3, $a3, 0x6FC8
    ctx->pc = 0x1edb30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28616));
label_1edb34:
    // 0x1edb34: 0x3508000a  ori         $t0, $t0, 0xA
    ctx->pc = 0x1edb34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)10);
label_1edb38:
    // 0x1edb38: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1edb38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1edb3c:
    // 0x1edb3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1edb3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1edb40:
    // 0x1edb40: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1edb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1edb44:
    // 0x1edb44: 0x40f809  jalr        $v0
label_1edb48:
    if (ctx->pc == 0x1EDB48u) {
        ctx->pc = 0x1EDB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB44u;
        // 0x1edb48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB4Cu;
        goto label_1edb4c;
    }
    ctx->pc = 0x1EDB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EDB4Cu);
        ctx->pc = 0x1EDB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB44u;
        // 0x1edb48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDB44u, 0x1EDB4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDB4Cu;
label_1edb4c:
    // 0x1edb4c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1edb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1edb50:
    // 0x1edb50: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1edb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1edb54:
    // 0x1edb54: 0x8cac27e4  lw          $t4, 0x27E4($a1)
    ctx->pc = 0x1edb54u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10212)));
label_1edb58:
    // 0x1edb58: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1edb58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1edb5c:
    // 0x1edb5c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1edb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1edb60:
    // 0x1edb60: 0x24a56fd0  addiu       $a1, $a1, 0x6FD0
    ctx->pc = 0x1edb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28624));
label_1edb64:
    // 0x1edb64: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1edb64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1edb68:
    // 0x1edb68: 0x25086f20  addiu       $t0, $t0, 0x6F20
    ctx->pc = 0x1edb68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28448));
label_1edb6c:
    // 0x1edb6c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1edb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1edb70:
    // 0x1edb70: 0x240901ff  addiu       $t1, $zero, 0x1FF
    ctx->pc = 0x1edb70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_1edb74:
    // 0x1edb74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1edb74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edb78:
    // 0x1edb78: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1edb78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edb7c:
    // 0x1edb7c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1edb7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1edb80:
    // 0x1edb80: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1edb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1edb84:
    // 0x1edb84: 0x40f809  jalr        $v0
label_1edb88:
    if (ctx->pc == 0x1EDB88u) {
        ctx->pc = 0x1EDB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB84u;
        // 0x1edb88: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB8Cu;
        goto label_1edb8c;
    }
    ctx->pc = 0x1EDB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EDB8Cu);
        ctx->pc = 0x1EDB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB84u;
        // 0x1edb88: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDB84u, 0x1EDB8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDB8Cu;
label_1edb8c:
    // 0x1edb8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1edb90:
    if (ctx->pc == 0x1EDB90u) {
        ctx->pc = 0x1EDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB8Cu;
        // 0x1edb90: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB94u;
        goto label_1edb94;
    }
    ctx->pc = 0x1EDB8Cu;
    {
        const bool branch_taken_0x1edb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB8Cu;
        // 0x1edb90: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb8c) {
            ctx->pc = 0x1EDBA0u;
            goto label_1edba0;
        }
    }
    ctx->pc = 0x1EDB94u;
label_1edb94:
    // 0x1edb94: 0xc0686fe  jal         func_1A1BF8
label_1edb98:
    if (ctx->pc == 0x1EDB98u) {
        ctx->pc = 0x1EDB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB94u;
        // 0x1edb98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB9Cu;
        goto label_1edb9c;
    }
    ctx->pc = 0x1EDB94u;
    SET_GPR_U32(ctx, 31, 0x1EDB9Cu);
    ctx->pc = 0x1EDB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDB94u;
    // 0x1edb98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1EDB94u, 0x1EDB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB9Cu;
label_1edb9c:
    // 0x1edb9c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1edb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1edba0:
    // 0x1edba0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1edba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1edba4:
    // 0x1edba4: 0xc4c2f3b0  lwc1        $f2, -0xC50($a2)
    ctx->pc = 0x1edba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1edba8:
    // 0x1edba8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1edba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1edbac:
    // 0x1edbac: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1edbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1edbb0:
    // 0x1edbb0: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x1edbb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_1edbb4:
    // 0x1edbb4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1edbb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1edbb8:
    // 0x1edbb8: 0xaea201c8  sw          $v0, 0x1C8($s5)
    ctx->pc = 0x1edbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 456), GPR_U32(ctx, 2));
label_1edbbc:
    // 0x1edbbc: 0x8eaa0178  lw          $t2, 0x178($s5)
    ctx->pc = 0x1edbbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
label_1edbc0:
    // 0x1edbc0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1edbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1edbc4:
    // 0x1edbc4: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x1edbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_1edbc8:
    // 0x1edbc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1edbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edbcc:
    // 0x1edbcc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1edbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1edbd0:
    // 0x1edbd0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1edbd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edbd4:
    // 0x1edbd4: 0x35290017  ori         $t1, $t1, 0x17
    ctx->pc = 0x1edbd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)23);
label_1edbd8:
    // 0x1edbd8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1edbd8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edbdc:
    // 0x1edbdc: 0xc460f3b4  lwc1        $f0, -0xC4C($v1)
    ctx->pc = 0x1edbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1edbe0:
    // 0x1edbe0: 0xa3b40134  sb          $s4, 0x134($sp)
    ctx->pc = 0x1edbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 308), (uint8_t)GPR_U32(ctx, 20));
label_1edbe4:
    // 0x1edbe4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1edbe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1edbe8:
    // 0x1edbe8: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1edbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1edbec:
    // 0x1edbec: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1edbecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1edbf0:
    // 0x1edbf0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1edbf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1edbf4:
    // 0x1edbf4: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1edbf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1edbf8:
    // 0x1edbf8: 0xa0940002  sb          $s4, 0x2($a0)
    ctx->pc = 0x1edbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 20));
label_1edbfc:
    // 0x1edbfc: 0xa0960003  sb          $s6, 0x3($a0)
    ctx->pc = 0x1edbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 22));
label_1edc00:
    // 0x1edc00: 0xa0940001  sb          $s4, 0x1($a0)
    ctx->pc = 0x1edc00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 20));
label_1edc04:
    // 0x1edc04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1edc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1edc08:
    // 0x1edc08: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x1edc08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_1edc0c:
    // 0x1edc0c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1edc0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1edc10:
    // 0x1edc10: 0xafb60010  sw          $s6, 0x10($sp)
    ctx->pc = 0x1edc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 22));
label_1edc14:
    // 0x1edc14: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1edc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1edc18:
    // 0x1edc18: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1edc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1edc1c:
    // 0x1edc1c: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x1edc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
label_1edc20:
    // 0x1edc20: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1edc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1edc24:
    // 0x1edc24: 0xc44cf3dc  lwc1        $f12, -0xC24($v0)
    ctx->pc = 0x1edc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1edc28:
    // 0x1edc28: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1edc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1edc2c:
    // 0x1edc2c: 0x40f809  jalr        $v0
label_1edc30:
    if (ctx->pc == 0x1EDC30u) {
        ctx->pc = 0x1EDC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC2Cu;
        // 0x1edc30: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC34u;
        goto label_1edc34;
    }
    ctx->pc = 0x1EDC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EDC34u);
        ctx->pc = 0x1EDC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC2Cu;
        // 0x1edc30: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDC2Cu, 0x1EDC34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDC34u;
label_1edc34:
    // 0x1edc34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1edc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1edc38:
    // 0x1edc38: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1edc38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1edc3c:
    // 0x1edc3c: 0x8c8c27e4  lw          $t4, 0x27E4($a0)
    ctx->pc = 0x1edc3cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_1edc40:
    // 0x1edc40: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1edc40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1edc44:
    // 0x1edc44: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x1edc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
label_1edc48:
    // 0x1edc48: 0x24a56fe0  addiu       $a1, $a1, 0x6FE0
    ctx->pc = 0x1edc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28640));
label_1edc4c:
    // 0x1edc4c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1edc4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1edc50:
    // 0x1edc50: 0x25086f20  addiu       $t0, $t0, 0x6F20
    ctx->pc = 0x1edc50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28448));
label_1edc54:
    // 0x1edc54: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1edc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1edc58:
    // 0x1edc58: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1edc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1edc5c:
    // 0x1edc5c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1edc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1edc60:
    // 0x1edc60: 0x24090207  addiu       $t1, $zero, 0x207
    ctx->pc = 0x1edc60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
label_1edc64:
    // 0x1edc64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1edc64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edc68:
    // 0x1edc68: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1edc68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1edc6c:
    // 0x1edc6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1edc6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edc70:
    // 0x1edc70: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1edc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1edc74:
    // 0x1edc74: 0x40f809  jalr        $v0
label_1edc78:
    if (ctx->pc == 0x1EDC78u) {
        ctx->pc = 0x1EDC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC74u;
        // 0x1edc78: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC7Cu;
        goto label_1edc7c;
    }
    ctx->pc = 0x1EDC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EDC7Cu);
        ctx->pc = 0x1EDC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC74u;
        // 0x1edc78: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDC74u, 0x1EDC7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDC7Cu;
label_1edc7c:
    // 0x1edc7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1edc80:
    if (ctx->pc == 0x1EDC80u) {
        ctx->pc = 0x1EDC84u;
        goto label_1edc84;
    }
    ctx->pc = 0x1EDC7Cu;
    {
        const bool branch_taken_0x1edc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edc7c) {
            ctx->pc = 0x1EDC8Cu;
            goto label_1edc8c;
        }
    }
    ctx->pc = 0x1EDC84u;
label_1edc84:
    // 0x1edc84: 0xc074fbc  jal         func_1D3EF0
label_1edc88:
    if (ctx->pc == 0x1EDC88u) {
        ctx->pc = 0x1EDC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC84u;
        // 0x1edc88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC8Cu;
        goto label_1edc8c;
    }
    ctx->pc = 0x1EDC84u;
    SET_GPR_U32(ctx, 31, 0x1EDC8Cu);
    ctx->pc = 0x1EDC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC84u;
    // 0x1edc88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x1EDC84u, 0x1EDC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC8Cu;
label_1edc8c:
    // 0x1edc8c: 0xc07f72c  jal         func_1FDCB0
label_1edc90:
    if (ctx->pc == 0x1EDC90u) {
        ctx->pc = 0x1EDC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC8Cu;
        // 0x1edc90: 0xaea20184  sw          $v0, 0x184($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC94u;
        goto label_1edc94;
    }
    ctx->pc = 0x1EDC8Cu;
    SET_GPR_U32(ctx, 31, 0x1EDC94u);
    ctx->pc = 0x1EDC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC8Cu;
    // 0x1edc90: 0xaea20184  sw          $v0, 0x184($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 388), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCB0u, 0x1EDC8Cu, 0x1EDC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC94u;
label_1edc94:
    // 0x1edc94: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1edc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1edc98:
    // 0x1edc98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1edc98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edc9c:
    // 0x1edc9c: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x1edc9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1edca0:
    // 0x1edca0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1edca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_1edca4:
    // 0x1edca4: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x1edca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_1edca8:
    // 0x1edca8: 0x8fa70190  lw          $a3, 0x190($sp)
    ctx->pc = 0x1edca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_1edcac:
    // 0x1edcac: 0xe6f6000c  swc1        $f22, 0xC($s7)
    ctx->pc = 0x1edcacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1edcb0:
    // 0x1edcb0: 0x8ea40184  lw          $a0, 0x184($s5)
    ctx->pc = 0x1edcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 388)));
label_1edcb4:
    // 0x1edcb4: 0xc075044  jal         func_1D4110
label_1edcb8:
    if (ctx->pc == 0x1EDCB8u) {
        ctx->pc = 0x1EDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCB4u;
        // 0x1edcb8: 0xc7ac0078  lwc1        $f12, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDCBCu;
        goto label_1edcbc;
    }
    ctx->pc = 0x1EDCB4u;
    SET_GPR_U32(ctx, 31, 0x1EDCBCu);
    ctx->pc = 0x1EDCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDCB4u;
    // 0x1edcb8: 0xc7ac0078  lwc1        $f12, 0x78($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1EDCB4u, 0x1EDCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDCBCu;
label_1edcbc:
    // 0x1edcbc: 0x8ea20150  lw          $v0, 0x150($s5)
    ctx->pc = 0x1edcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
label_1edcc0:
    // 0x1edcc0: 0x1453001f  bne         $v0, $s3, . + 4 + (0x1F << 2)
label_1edcc4:
    if (ctx->pc == 0x1EDCC4u) {
        ctx->pc = 0x1EDCC8u;
        goto label_1edcc8;
    }
    ctx->pc = 0x1EDCC0u;
    {
        const bool branch_taken_0x1edcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1edcc0) {
            ctx->pc = 0x1EDD40u;
            goto label_1edd40;
        }
    }
    ctx->pc = 0x1EDCC8u;
label_1edcc8:
    // 0x1edcc8: 0xc067b9c  jal         func_19EE70
label_1edccc:
    if (ctx->pc == 0x1EDCCCu) {
        ctx->pc = 0x1EDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCC8u;
        // 0x1edccc: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDCD0u;
        goto label_1edcd0;
    }
    ctx->pc = 0x1EDCC8u;
    SET_GPR_U32(ctx, 31, 0x1EDCD0u);
    ctx->pc = 0x1EDCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDCC8u;
    // 0x1edccc: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EDCC8u, 0x1EDCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDCD0u;
label_1edcd0:
    // 0x1edcd0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1edcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1edcd4:
    // 0x1edcd4: 0x8ea40184  lw          $a0, 0x184($s5)
    ctx->pc = 0x1edcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 388)));
label_1edcd8:
    // 0x1edcd8: 0x8c70d320  lw          $s0, -0x2CE0($v1)
    ctx->pc = 0x1edcd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955808)));
label_1edcdc:
    // 0x1edcdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1edcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1edce0:
    // 0x1edce0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1edce0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1edce4:
    // 0x1edce4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1edce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edce8:
    // 0x1edce8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1edce8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edcec:
    // 0x1edcec: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1edcecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1edcf0:
    // 0x1edcf0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1edcf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edcf4:
    // 0x1edcf4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1edcf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1edcf8:
    // 0x1edcf8: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1edcf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1edcfc:
    // 0x1edcfc: 0xc07508c  jal         func_1D4230
label_1edd00:
    if (ctx->pc == 0x1EDD00u) {
        ctx->pc = 0x1EDD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCFCu;
        // 0x1edd00: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD04u;
        goto label_1edd04;
    }
    ctx->pc = 0x1EDCFCu;
    SET_GPR_U32(ctx, 31, 0x1EDD04u);
    ctx->pc = 0x1EDD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDCFCu;
    // 0x1edd00: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1EDCFCu, 0x1EDD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD04u;
label_1edd04:
    // 0x1edd04: 0xc067b9c  jal         func_19EE70
label_1edd08:
    if (ctx->pc == 0x1EDD08u) {
        ctx->pc = 0x1EDD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD04u;
        // 0x1edd08: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD0Cu;
        goto label_1edd0c;
    }
    ctx->pc = 0x1EDD04u;
    SET_GPR_U32(ctx, 31, 0x1EDD0Cu);
    ctx->pc = 0x1EDD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD04u;
    // 0x1edd08: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EDD04u, 0x1EDD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD0Cu;
label_1edd0c:
    // 0x1edd0c: 0x8ea40184  lw          $a0, 0x184($s5)
    ctx->pc = 0x1edd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 388)));
label_1edd10:
    // 0x1edd10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1edd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1edd14:
    // 0x1edd14: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1edd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_1edd18:
    // 0x1edd18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1edd18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1edd1c:
    // 0x1edd1c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1edd1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1edd20:
    // 0x1edd20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1edd20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edd24:
    // 0x1edd24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1edd24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edd28:
    // 0x1edd28: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1edd28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1edd2c:
    // 0x1edd2c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1edd2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edd30:
    // 0x1edd30: 0xc07508c  jal         func_1D4230
label_1edd34:
    if (ctx->pc == 0x1EDD34u) {
        ctx->pc = 0x1EDD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD30u;
        // 0x1edd34: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD38u;
        goto label_1edd38;
    }
    ctx->pc = 0x1EDD30u;
    SET_GPR_U32(ctx, 31, 0x1EDD38u);
    ctx->pc = 0x1EDD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD30u;
    // 0x1edd34: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1EDD30u, 0x1EDD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD38u;
label_1edd38:
    // 0x1edd38: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1edd3c:
    if (ctx->pc == 0x1EDD3Cu) {
        ctx->pc = 0x1EDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD38u;
        // 0x1edd3c: 0x8ea50184  lw          $a1, 0x184($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD40u;
        goto label_1edd40;
    }
    ctx->pc = 0x1EDD38u;
    {
        const bool branch_taken_0x1edd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD38u;
        // 0x1edd3c: 0x8ea50184  lw          $a1, 0x184($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd38) {
            ctx->pc = 0x1EDDB4u;
            goto label_1eddb4;
        }
    }
    ctx->pc = 0x1EDD40u;
label_1edd40:
    // 0x1edd40: 0xc067b9c  jal         func_19EE70
label_1edd44:
    if (ctx->pc == 0x1EDD44u) {
        ctx->pc = 0x1EDD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD40u;
        // 0x1edd44: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD48u;
        goto label_1edd48;
    }
    ctx->pc = 0x1EDD40u;
    SET_GPR_U32(ctx, 31, 0x1EDD48u);
    ctx->pc = 0x1EDD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD40u;
    // 0x1edd44: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EDD40u, 0x1EDD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD48u;
label_1edd48:
    // 0x1edd48: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1edd48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1edd4c:
    // 0x1edd4c: 0x8ea40184  lw          $a0, 0x184($s5)
    ctx->pc = 0x1edd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 388)));
label_1edd50:
    // 0x1edd50: 0x8cb0d310  lw          $s0, -0x2CF0($a1)
    ctx->pc = 0x1edd50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955792)));
label_1edd54:
    // 0x1edd54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1edd54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1edd58:
    // 0x1edd58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1edd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1edd5c:
    // 0x1edd5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1edd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edd60:
    // 0x1edd60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1edd60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edd64:
    // 0x1edd64: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1edd64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1edd68:
    // 0x1edd68: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1edd68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edd6c:
    // 0x1edd6c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1edd6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1edd70:
    // 0x1edd70: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1edd70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1edd74:
    // 0x1edd74: 0xc07508c  jal         func_1D4230
label_1edd78:
    if (ctx->pc == 0x1EDD78u) {
        ctx->pc = 0x1EDD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD74u;
        // 0x1edd78: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD7Cu;
        goto label_1edd7c;
    }
    ctx->pc = 0x1EDD74u;
    SET_GPR_U32(ctx, 31, 0x1EDD7Cu);
    ctx->pc = 0x1EDD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD74u;
    // 0x1edd78: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1EDD74u, 0x1EDD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD7Cu;
label_1edd7c:
    // 0x1edd7c: 0xc067b9c  jal         func_19EE70
label_1edd80:
    if (ctx->pc == 0x1EDD80u) {
        ctx->pc = 0x1EDD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD7Cu;
        // 0x1edd80: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD84u;
        goto label_1edd84;
    }
    ctx->pc = 0x1EDD7Cu;
    SET_GPR_U32(ctx, 31, 0x1EDD84u);
    ctx->pc = 0x1EDD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD7Cu;
    // 0x1edd80: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EDD7Cu, 0x1EDD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD84u;
label_1edd84:
    // 0x1edd84: 0x8ea40184  lw          $a0, 0x184($s5)
    ctx->pc = 0x1edd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 388)));
label_1edd88:
    // 0x1edd88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1edd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1edd8c:
    // 0x1edd8c: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1edd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_1edd90:
    // 0x1edd90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1edd90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1edd94:
    // 0x1edd94: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1edd94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1edd98:
    // 0x1edd98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1edd98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edd9c:
    // 0x1edd9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1edd9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edda0:
    // 0x1edda0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1edda0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1edda4:
    // 0x1edda4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1edda4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edda8:
    // 0x1edda8: 0xc07508c  jal         func_1D4230
label_1eddac:
    if (ctx->pc == 0x1EDDACu) {
        ctx->pc = 0x1EDDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDA8u;
        // 0x1eddac: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDDB0u;
        goto label_1eddb0;
    }
    ctx->pc = 0x1EDDA8u;
    SET_GPR_U32(ctx, 31, 0x1EDDB0u);
    ctx->pc = 0x1EDDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDDA8u;
    // 0x1eddac: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1EDDA8u, 0x1EDDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDDB0u;
label_1eddb0:
    // 0x1eddb0: 0x8ea50184  lw          $a1, 0x184($s5)
    ctx->pc = 0x1eddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 388)));
label_1eddb4:
    // 0x1eddb4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1eddb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eddb8:
    // 0x1eddb8: 0x8fb00174  lw          $s0, 0x174($sp)
    ctx->pc = 0x1eddb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_1eddbc:
    // 0x1eddbc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1eddbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eddc0:
    // 0x1eddc0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1eddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eddc4:
    // 0x1eddc4: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x1eddc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1eddc8:
    // 0x1eddc8: 0x8fb1018c  lw          $s1, 0x18C($sp)
    ctx->pc = 0x1eddc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_1eddcc:
    // 0x1eddcc: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1eddccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1eddd0:
    // 0x1eddd0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1eddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1eddd4:
    // 0x1eddd4: 0x40f809  jalr        $v0
label_1eddd8:
    if (ctx->pc == 0x1EDDD8u) {
        ctx->pc = 0x1EDDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDD4u;
        // 0x1eddd8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDDDCu;
        goto label_1edddc;
    }
    ctx->pc = 0x1EDDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EDDDCu);
        ctx->pc = 0x1EDDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDD4u;
        // 0x1eddd8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDDD4u, 0x1EDDDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDDDCu;
label_1edddc:
    // 0x1edddc: 0x8ea50184  lw          $a1, 0x184($s5)
    ctx->pc = 0x1edddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 388)));
label_1edde0:
    // 0x1edde0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1edde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1edde4:
    // 0x1edde4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1edde4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1edde8:
    // 0x1edde8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1edde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1eddec:
    // 0x1eddec: 0x60f809  jalr        $v1
label_1eddf0:
    if (ctx->pc == 0x1EDDF0u) {
        ctx->pc = 0x1EDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDECu;
        // 0x1eddf0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDDF4u;
        goto label_1eddf4;
    }
    ctx->pc = 0x1EDDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EDDF4u);
        ctx->pc = 0x1EDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDECu;
        // 0x1eddf0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDDECu, 0x1EDDF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDDF4u;
label_1eddf4:
    // 0x1eddf4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1eddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1eddf8:
    // 0x1eddf8: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1eddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1eddfc:
    // 0x1eddfc: 0x24a56ff0  addiu       $a1, $a1, 0x6FF0
    ctx->pc = 0x1eddfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28656));
label_1ede00:
    // 0x1ede00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ede00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ede04:
    // 0x1ede04: 0xc05a872  jal         func_16A1C8
label_1ede08:
    if (ctx->pc == 0x1EDE08u) {
        ctx->pc = 0x1EDE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE04u;
        // 0x1ede08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDE0Cu;
        goto label_1ede0c;
    }
    ctx->pc = 0x1EDE04u;
    SET_GPR_U32(ctx, 31, 0x1EDE0Cu);
    ctx->pc = 0x1EDE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDE04u;
    // 0x1ede08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A1C8u, 0x1EDE04u, 0x1EDE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE0Cu;
label_1ede0c:
    // 0x1ede0c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ede0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ede10:
    // 0x1ede10: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1ede10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1ede14:
    // 0x1ede14: 0x24a57000  addiu       $a1, $a1, 0x7000
    ctx->pc = 0x1ede14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
label_1ede18:
    // 0x1ede18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ede18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ede1c:
    // 0x1ede1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ede1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ede20:
    // 0x1ede20: 0xc05a872  jal         func_16A1C8
label_1ede24:
    if (ctx->pc == 0x1EDE24u) {
        ctx->pc = 0x1EDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE20u;
        // 0x1ede24: 0xa6a20134  sh          $v0, 0x134($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 308), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDE28u;
        goto label_1ede28;
    }
    ctx->pc = 0x1EDE20u;
    SET_GPR_U32(ctx, 31, 0x1EDE28u);
    ctx->pc = 0x1EDE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDE20u;
    // 0x1ede24: 0xa6a20134  sh          $v0, 0x134($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 308), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A1C8u, 0x1EDE20u, 0x1EDE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE28u;
label_1ede28:
    // 0x1ede28: 0x8ea401b8  lw          $a0, 0x1B8($s5)
    ctx->pc = 0x1ede28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 440)));
label_1ede2c:
    // 0x1ede2c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1ede2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1ede30:
    // 0x1ede30: 0xa6a20136  sh          $v0, 0x136($s5)
    ctx->pc = 0x1ede30u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 310), (uint16_t)GPR_U32(ctx, 2));
label_1ede34:
    // 0x1ede34: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1ede34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1ede38:
    // 0x1ede38: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ede38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ede3c:
    // 0x1ede3c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ede3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ede40:
    // 0x1ede40: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1ede40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1ede44:
    // 0x1ede44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ede44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ede48:
    // 0x1ede48: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ede48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ede4c:
    // 0x1ede4c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1ede4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_1ede50:
    // 0x1ede50: 0x8fa7018c  lw          $a3, 0x18C($sp)
    ctx->pc = 0x1ede50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_1ede54:
    // 0x1ede54: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x1ede54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1ede58:
    // 0x1ede58: 0x8ea501bc  lw          $a1, 0x1BC($s5)
    ctx->pc = 0x1ede58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 444)));
label_1ede5c:
    // 0x1ede5c: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x1ede5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_1ede60:
    // 0x1ede60: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x1ede60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ede64:
    // 0x1ede64: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x1ede64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
label_1ede68:
    // 0x1ede68: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1ede68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_1ede6c:
    // 0x1ede6c: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x1ede6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ede70:
    // 0x1ede70: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1ede70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_1ede74:
    // 0x1ede74: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x1ede74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ede78:
    // 0x1ede78: 0xc4c3f3d0  lwc1        $f3, -0xC30($a2)
    ctx->pc = 0x1ede78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ede7c:
    // 0x1ede7c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1ede7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1ede80:
    // 0x1ede80: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x1ede80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1ede84:
    // 0x1ede84: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x1ede84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_1ede88:
    // 0x1ede88: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ede88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ede8c:
    // 0x1ede8c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1ede8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1ede90:
    // 0x1ede90: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x1ede90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1ede94:
    // 0x1ede94: 0xe4e5000c  swc1        $f5, 0xC($a3)
    ctx->pc = 0x1ede94u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_1ede98:
    // 0x1ede98: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1ede98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1ede9c:
    // 0x1ede9c: 0x8fa80194  lw          $t0, 0x194($sp)
    ctx->pc = 0x1ede9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_1edea0:
    // 0x1edea0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1edea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_1edea4:
    // 0x1edea4: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x1edea4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1edea8:
    // 0x1edea8: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x1edea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1edeac:
    // 0x1edeac: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x1edeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_1edeb0:
    // 0x1edeb0: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1edeb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_1edeb4:
    // 0x1edeb4: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x1edeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1edeb8:
    // 0x1edeb8: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1edeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_1edebc:
    // 0x1edebc: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x1edebcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1edec0:
    // 0x1edec0: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x1edec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1edec4:
    // 0x1edec4: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x1edec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_1edec8:
    // 0x1edec8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1edec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1edecc:
    // 0x1edecc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1edeccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1eded0:
    // 0x1eded0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1eded0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1eded4:
    // 0x1eded4: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x1eded4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1eded8:
    // 0x1eded8: 0xe505000c  swc1        $f5, 0xC($t0)
    ctx->pc = 0x1eded8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_1ededc:
    // 0x1ededc: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x1ededcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_1edee0:
    // 0x1edee0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1edee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_1edee4:
    // 0x1edee4: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x1edee4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_1edee8:
    // 0x1edee8: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x1edee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_1edeec:
    // 0x1edeec: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x1edeecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_1edef0:
    // 0x1edef0: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x1edef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1edef4:
    // 0x1edef4: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1edef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_1edef8:
    // 0x1edef8: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x1edef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1edefc:
    // 0x1edefc: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x1edefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1edf00:
    // 0x1edf00: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1edf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1edf04:
    // 0x1edf04: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1edf04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1edf08:
    // 0x1edf08: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x1edf08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1edf0c:
    // 0x1edf0c: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x1edf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_1edf10:
    // 0x1edf10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1edf10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1edf14:
    // 0x1edf14: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1edf14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1edf18:
    // 0x1edf18: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x1edf18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1edf1c:
    // 0x1edf1c: 0xe445000c  swc1        $f5, 0xC($v0)
    ctx->pc = 0x1edf1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1edf20:
    // 0x1edf20: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x1edf20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_1edf24:
    // 0x1edf24: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1edf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_1edf28:
    // 0x1edf28: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x1edf28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_1edf2c:
    // 0x1edf2c: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x1edf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1edf30:
    // 0x1edf30: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x1edf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_1edf34:
    // 0x1edf34: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x1edf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_1edf38:
    // 0x1edf38: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x1edf38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_1edf3c:
    // 0x1edf3c: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x1edf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1edf40:
    // 0x1edf40: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1edf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_1edf44:
    // 0x1edf44: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x1edf44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1edf48:
    // 0x1edf48: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x1edf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1edf4c:
    // 0x1edf4c: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x1edf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_1edf50:
    // 0x1edf50: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1edf50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1edf54:
    // 0x1edf54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1edf54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1edf58:
    // 0x1edf58: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1edf58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1edf5c:
    // 0x1edf5c: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x1edf5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1edf60:
    // 0x1edf60: 0xe465000c  swc1        $f5, 0xC($v1)
    ctx->pc = 0x1edf60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1edf64:
    // 0x1edf64: 0x0  nop
    ctx->pc = 0x1edf64u;
    // NOP
label_1edf68:
    // 0x1edf68: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1edf68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1edf6c:
    // 0x1edf6c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1edf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1edf70:
    // 0x1edf70: 0x8c8c27e4  lw          $t4, 0x27E4($a0)
    ctx->pc = 0x1edf70u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_1edf74:
    // 0x1edf74: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1edf74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1edf78:
    // 0x1edf78: 0x24486f20  addiu       $t0, $v0, 0x6F20
    ctx->pc = 0x1edf78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 28448));
label_1edf7c:
    // 0x1edf7c: 0x24c56fd0  addiu       $a1, $a2, 0x6FD0
    ctx->pc = 0x1edf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 28624));
label_1edf80:
    // 0x1edf80: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1edf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1edf84:
    // 0x1edf84: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1edf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1edf88:
    // 0x1edf88: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1edf88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1edf8c:
    // 0x1edf8c: 0x24090222  addiu       $t1, $zero, 0x222
    ctx->pc = 0x1edf8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
label_1edf90:
    // 0x1edf90: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1edf90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1edf94:
    // 0x1edf94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1edf94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edf98:
    // 0x1edf98: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1edf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1edf9c:
    // 0x1edf9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1edf9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edfa0:
    // 0x1edfa0: 0x40f809  jalr        $v0
label_1edfa4:
    if (ctx->pc == 0x1EDFA4u) {
        ctx->pc = 0x1EDFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDFA0u;
        // 0x1edfa4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDFA8u;
        goto label_1edfa8;
    }
    ctx->pc = 0x1EDFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EDFA8u);
        ctx->pc = 0x1EDFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDFA0u;
        // 0x1edfa4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDFA0u, 0x1EDFA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDFA8u;
label_1edfa8:
    // 0x1edfa8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1edfac:
    if (ctx->pc == 0x1EDFACu) {
        ctx->pc = 0x1EDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDFA8u;
        // 0x1edfac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDFB0u;
        goto label_1edfb0;
    }
    ctx->pc = 0x1EDFA8u;
    {
        const bool branch_taken_0x1edfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edfa8) {
            ctx->pc = 0x1EDFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EDFA8u;
            // 0x1edfac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EDFBCu;
            goto label_1edfbc;
        }
    }
    ctx->pc = 0x1EDFB0u;
label_1edfb0:
    // 0x1edfb0: 0xc0686fe  jal         func_1A1BF8
label_1edfb4:
    if (ctx->pc == 0x1EDFB4u) {
        ctx->pc = 0x1EDFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDFB0u;
        // 0x1edfb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDFB8u;
        goto label_1edfb8;
    }
    ctx->pc = 0x1EDFB0u;
    SET_GPR_U32(ctx, 31, 0x1EDFB8u);
    ctx->pc = 0x1EDFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDFB0u;
    // 0x1edfb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1EDFB0u, 0x1EDFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDFB8u;
label_1edfb8:
    // 0x1edfb8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1edfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1edfbc:
    // 0x1edfbc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1edfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1edfc0:
    // 0x1edfc0: 0x8c86d310  lw          $a2, -0x2CF0($a0)
    ctx->pc = 0x1edfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955792)));
label_1edfc4:
    // 0x1edfc4: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x1edfc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_1edfc8:
    // 0x1edfc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1edfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1edfcc:
    // 0x1edfcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1edfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1edfd0:
    // 0x1edfd0: 0x3c013cb4  lui         $at, 0x3CB4
    ctx->pc = 0x1edfd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15540 << 16));
label_1edfd4:
    // 0x1edfd4: 0x34213958  ori         $at, $at, 0x3958
    ctx->pc = 0x1edfd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14680);
label_1edfd8:
    // 0x1edfd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1edfd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1edfdc:
    // 0x1edfdc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1edfdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edfe0:
    // 0x1edfe0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1edfe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1edfe4:
    // 0x1edfe4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1edfe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edfe8:
    // 0x1edfe8: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1edfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_1edfec:
    // 0x1edfec: 0x3529001e  ori         $t1, $t1, 0x1E
    ctx->pc = 0x1edfecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)30);
label_1edff0:
    // 0x1edff0: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x1edff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
label_1edff4:
    // 0x1edff4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1edff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1edff8:
    // 0x1edff8: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x1edff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
label_1edffc:
    // 0x1edffc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1edffcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee000:
    // 0x1ee000: 0x3c0145fd  lui         $at, 0x45FD
    ctx->pc = 0x1ee000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17917 << 16));
label_1ee004:
    // 0x1ee004: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x1ee004u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_1ee008:
    // 0x1ee008: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ee008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ee00c:
    // 0x1ee00c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1ee00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1ee010:
    // 0x1ee010: 0x40f809  jalr        $v0
label_1ee014:
    if (ctx->pc == 0x1EE014u) {
        ctx->pc = 0x1EE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE010u;
        // 0x1ee014: 0x8eaa0178  lw          $t2, 0x178($s5) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE018u;
        goto label_1ee018;
    }
    ctx->pc = 0x1EE010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE018u);
        ctx->pc = 0x1EE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE010u;
        // 0x1ee014: 0x8eaa0178  lw          $t2, 0x178($s5) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE010u, 0x1EE018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE018u;
label_1ee018:
    // 0x1ee018: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1ee018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ee01c:
    // 0x1ee01c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ee01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee020:
    // 0x1ee020: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ee020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ee024:
    // 0x1ee024: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1ee024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1ee028:
    // 0x1ee028: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1ee028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1ee02c:
    // 0x1ee02c: 0x60f809  jalr        $v1
label_1ee030:
    if (ctx->pc == 0x1EE030u) {
        ctx->pc = 0x1EE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE02Cu;
        // 0x1ee030: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE034u;
        goto label_1ee034;
    }
    ctx->pc = 0x1EE02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EE034u);
        ctx->pc = 0x1EE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE02Cu;
        // 0x1ee030: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE02Cu, 0x1EE034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE034u;
label_1ee034:
    // 0x1ee034: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1ee034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_1ee038:
    // 0x1ee038: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1ee03c:
    if (ctx->pc == 0x1EE03Cu) {
        ctx->pc = 0x1EE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE038u;
        // 0x1ee03c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE040u;
        goto label_1ee040;
    }
    ctx->pc = 0x1EE038u;
    {
        const bool branch_taken_0x1ee038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee038) {
            ctx->pc = 0x1EE03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE038u;
            // 0x1ee03c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE068u;
            goto label_1ee068;
        }
    }
    ctx->pc = 0x1EE040u;
label_1ee040:
    // 0x1ee040: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ee040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ee044:
    // 0x1ee044: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1ee044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1ee048:
    // 0x1ee048: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1ee048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1ee04c:
    // 0x1ee04c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ee04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ee050:
    // 0x1ee050: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ee050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ee054:
    // 0x1ee054: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1ee054u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1ee058:
    // 0x1ee058: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1ee058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1ee05c:
    // 0x1ee05c: 0x60f809  jalr        $v1
label_1ee060:
    if (ctx->pc == 0x1EE060u) {
        ctx->pc = 0x1EE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE05Cu;
        // 0x1ee060: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE064u;
        goto label_1ee064;
    }
    ctx->pc = 0x1EE05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EE064u);
        ctx->pc = 0x1EE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE05Cu;
        // 0x1ee060: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE05Cu, 0x1EE064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE064u;
label_1ee064:
    // 0x1ee064: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ee064u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ee068:
    // 0x1ee068: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1ee068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1ee06c:
    // 0x1ee06c: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1ee06cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1ee070:
    // 0x1ee070: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
label_1ee074:
    if (ctx->pc == 0x1EE074u) {
        ctx->pc = 0x1EE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE070u;
        // 0x1ee074: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE078u;
        goto label_1ee078;
    }
    ctx->pc = 0x1EE070u;
    {
        const bool branch_taken_0x1ee070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE070u;
        // 0x1ee074: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee070) {
            ctx->pc = 0x1EDF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1edf68;
        }
    }
    ctx->pc = 0x1EE078u;
label_1ee078:
    // 0x1ee078: 0x8fb1018c  lw          $s1, 0x18C($sp)
    ctx->pc = 0x1ee078u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_1ee07c:
    // 0x1ee07c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ee07cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee080:
    // 0x1ee080: 0x8fb00178  lw          $s0, 0x178($sp)
    ctx->pc = 0x1ee080u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_1ee084:
    // 0x1ee084: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1ee084u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee088:
    // 0x1ee088: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x1ee088u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ee08c:
    // 0x1ee08c: 0x0  nop
    ctx->pc = 0x1ee08cu;
    // NOP
label_1ee090:
    // 0x1ee090: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1ee090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1ee094:
    // 0x1ee094: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1ee094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1ee098:
    // 0x1ee098: 0x8cac27e4  lw          $t4, 0x27E4($a1)
    ctx->pc = 0x1ee098u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10212)));
label_1ee09c:
    // 0x1ee09c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1ee09cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1ee0a0:
    // 0x1ee0a0: 0x24486f20  addiu       $t0, $v0, 0x6F20
    ctx->pc = 0x1ee0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 28448));
label_1ee0a4:
    // 0x1ee0a4: 0x24c56fd0  addiu       $a1, $a2, 0x6FD0
    ctx->pc = 0x1ee0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 28624));
label_1ee0a8:
    // 0x1ee0a8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ee0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ee0ac:
    // 0x1ee0ac: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1ee0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1ee0b0:
    // 0x1ee0b0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ee0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ee0b4:
    // 0x1ee0b4: 0x2409022c  addiu       $t1, $zero, 0x22C
    ctx->pc = 0x1ee0b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
label_1ee0b8:
    // 0x1ee0b8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ee0b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ee0bc:
    // 0x1ee0bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ee0bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee0c0:
    // 0x1ee0c0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ee0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ee0c4:
    // 0x1ee0c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ee0c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee0c8:
    // 0x1ee0c8: 0x40f809  jalr        $v0
label_1ee0cc:
    if (ctx->pc == 0x1EE0CCu) {
        ctx->pc = 0x1EE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0C8u;
        // 0x1ee0cc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE0D0u;
        goto label_1ee0d0;
    }
    ctx->pc = 0x1EE0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE0D0u);
        ctx->pc = 0x1EE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0C8u;
        // 0x1ee0cc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE0C8u, 0x1EE0D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE0D0u;
label_1ee0d0:
    // 0x1ee0d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1ee0d4:
    if (ctx->pc == 0x1EE0D4u) {
        ctx->pc = 0x1EE0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0D0u;
        // 0x1ee0d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE0D8u;
        goto label_1ee0d8;
    }
    ctx->pc = 0x1EE0D0u;
    {
        const bool branch_taken_0x1ee0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee0d0) {
            ctx->pc = 0x1EE0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE0D0u;
            // 0x1ee0d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE0E4u;
            goto label_1ee0e4;
        }
    }
    ctx->pc = 0x1EE0D8u;
label_1ee0d8:
    // 0x1ee0d8: 0xc0686fe  jal         func_1A1BF8
label_1ee0dc:
    if (ctx->pc == 0x1EE0DCu) {
        ctx->pc = 0x1EE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0D8u;
        // 0x1ee0dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE0E0u;
        goto label_1ee0e0;
    }
    ctx->pc = 0x1EE0D8u;
    SET_GPR_U32(ctx, 31, 0x1EE0E0u);
    ctx->pc = 0x1EE0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE0D8u;
    // 0x1ee0dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1EE0D8u, 0x1EE0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE0E0u;
label_1ee0e0:
    // 0x1ee0e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ee0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ee0e4:
    // 0x1ee0e4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ee0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1ee0e8:
    // 0x1ee0e8: 0x8c66d310  lw          $a2, -0x2CF0($v1)
    ctx->pc = 0x1ee0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955792)));
label_1ee0ec:
    // 0x1ee0ec: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x1ee0ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_1ee0f0:
    // 0x1ee0f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ee0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ee0f4:
    // 0x1ee0f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ee0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee0f8:
    // 0x1ee0f8: 0x8eaa0178  lw          $t2, 0x178($s5)
    ctx->pc = 0x1ee0f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
label_1ee0fc:
    // 0x1ee0fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee100:
    // 0x1ee100: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1ee100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1ee104:
    // 0x1ee104: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ee104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee108:
    // 0x1ee108: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ee108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ee10c:
    // 0x1ee10c: 0x3529001e  ori         $t1, $t1, 0x1E
    ctx->pc = 0x1ee10cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)30);
label_1ee110:
    // 0x1ee110: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x1ee110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
label_1ee114:
    // 0x1ee114: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1ee114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ee118:
    // 0x1ee118: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1ee118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
label_1ee11c:
    // 0x1ee11c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ee11cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee120:
    // 0x1ee120: 0x3c0145fd  lui         $at, 0x45FD
    ctx->pc = 0x1ee120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17917 << 16));
label_1ee124:
    // 0x1ee124: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x1ee124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_1ee128:
    // 0x1ee128: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ee128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ee12c:
    // 0x1ee12c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1ee12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1ee130:
    // 0x1ee130: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ee130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ee134:
    // 0x1ee134: 0x40f809  jalr        $v0
label_1ee138:
    if (ctx->pc == 0x1EE138u) {
        ctx->pc = 0x1EE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE134u;
        // 0x1ee138: 0xc46cf3d8  lwc1        $f12, -0xC28($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE13Cu;
        goto label_1ee13c;
    }
    ctx->pc = 0x1EE134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE13Cu);
        ctx->pc = 0x1EE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE134u;
        // 0x1ee138: 0xc46cf3d8  lwc1        $f12, -0xC28($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE134u, 0x1EE13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE13Cu;
label_1ee13c:
    // 0x1ee13c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1ee13cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ee140:
    // 0x1ee140: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ee140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee144:
    // 0x1ee144: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ee144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ee148:
    // 0x1ee148: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1ee148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1ee14c:
    // 0x1ee14c: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1ee14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1ee150:
    // 0x1ee150: 0x60f809  jalr        $v1
label_1ee154:
    if (ctx->pc == 0x1EE154u) {
        ctx->pc = 0x1EE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE150u;
        // 0x1ee154: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE158u;
        goto label_1ee158;
    }
    ctx->pc = 0x1EE150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EE158u);
        ctx->pc = 0x1EE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE150u;
        // 0x1ee154: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE150u, 0x1EE158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE158u;
label_1ee158:
    // 0x1ee158: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1ee158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_1ee15c:
    // 0x1ee15c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1ee160:
    if (ctx->pc == 0x1EE160u) {
        ctx->pc = 0x1EE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE15Cu;
        // 0x1ee160: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE164u;
        goto label_1ee164;
    }
    ctx->pc = 0x1EE15Cu;
    {
        const bool branch_taken_0x1ee15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE15Cu;
        // 0x1ee160: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee15c) {
            ctx->pc = 0x1EE18Cu;
            goto label_1ee18c;
        }
    }
    ctx->pc = 0x1EE164u;
label_1ee164:
    // 0x1ee164: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1ee164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_1ee168:
    // 0x1ee168: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1ee168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1ee16c:
    // 0x1ee16c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ee16cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ee170:
    // 0x1ee170: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ee170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ee174:
    // 0x1ee174: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1ee174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1ee178:
    // 0x1ee178: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1ee178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1ee17c:
    // 0x1ee17c: 0x60f809  jalr        $v1
label_1ee180:
    if (ctx->pc == 0x1EE180u) {
        ctx->pc = 0x1EE180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE17Cu;
        // 0x1ee180: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE184u;
        goto label_1ee184;
    }
    ctx->pc = 0x1EE17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EE184u);
        ctx->pc = 0x1EE180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE17Cu;
        // 0x1ee180: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE17Cu, 0x1EE184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE184u;
label_1ee184:
    // 0x1ee184: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ee188:
    if (ctx->pc == 0x1EE188u) {
        ctx->pc = 0x1EE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE184u;
        // 0x1ee188: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE18Cu;
        goto label_1ee18c;
    }
    ctx->pc = 0x1EE184u;
    {
        const bool branch_taken_0x1ee184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE184u;
        // 0x1ee188: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee184) {
            ctx->pc = 0x1EE1B0u;
            goto label_1ee1b0;
        }
    }
    ctx->pc = 0x1EE18Cu;
label_1ee18c:
    // 0x1ee18c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1ee18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1ee190:
    // 0x1ee190: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1ee190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1ee194:
    // 0x1ee194: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ee194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ee198:
    // 0x1ee198: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ee198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ee19c:
    // 0x1ee19c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1ee19cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1ee1a0:
    // 0x1ee1a0: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1ee1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1ee1a4:
    // 0x1ee1a4: 0x60f809  jalr        $v1
label_1ee1a8:
    if (ctx->pc == 0x1EE1A8u) {
        ctx->pc = 0x1EE1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1A4u;
        // 0x1ee1a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1ACu;
        goto label_1ee1ac;
    }
    ctx->pc = 0x1EE1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EE1ACu);
        ctx->pc = 0x1EE1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1A4u;
        // 0x1ee1a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE1A4u, 0x1EE1ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE1ACu;
label_1ee1ac:
    // 0x1ee1ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ee1acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ee1b0:
    // 0x1ee1b0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1ee1b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1ee1b4:
    // 0x1ee1b4: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1ee1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1ee1b8:
    // 0x1ee1b8: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
label_1ee1bc:
    if (ctx->pc == 0x1EE1BCu) {
        ctx->pc = 0x1EE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1B8u;
        // 0x1ee1bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1C0u;
        goto label_1ee1c0;
    }
    ctx->pc = 0x1EE1B8u;
    {
        const bool branch_taken_0x1ee1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1B8u;
        // 0x1ee1bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1b8) {
            ctx->pc = 0x1EE090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee090;
        }
    }
    ctx->pc = 0x1EE1C0u;
label_1ee1c0:
    // 0x1ee1c0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ee1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ee1c4:
    // 0x1ee1c4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1ee1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1ee1c8:
    // 0x1ee1c8: 0xc4a0f3a8  lwc1        $f0, -0xC58($a1)
    ctx->pc = 0x1ee1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294964136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee1cc:
    // 0x1ee1cc: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1ee1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1ee1d0:
    // 0x1ee1d0: 0xc481f3a0  lwc1        $f1, -0xC60($a0)
    ctx->pc = 0x1ee1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee1d4:
    // 0x1ee1d4: 0x24507010  addiu       $s0, $v0, 0x7010
    ctx->pc = 0x1ee1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28688));
label_1ee1d8:
    // 0x1ee1d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ee1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ee1dc:
    // 0x1ee1dc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ee1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1ee1e0:
    // 0x1ee1e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ee1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ee1e4:
    // 0x1ee1e4: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1ee1e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ee1e8:
    // 0x1ee1e8: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1ee1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1ee1ec:
    // 0x1ee1ec: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1ee1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1ee1f0:
    // 0x1ee1f0: 0x24d16f20  addiu       $s1, $a2, 0x6F20
    ctx->pc = 0x1ee1f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 28448));
label_1ee1f4:
    // 0x1ee1f4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1ee1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_1ee1f8:
    // 0x1ee1f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ee1fc:
    // 0x1ee1fc: 0xe6f5000c  swc1        $f21, 0xC($s7)
    ctx->pc = 0x1ee1fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1ee200:
    // 0x1ee200: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x1ee200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ee204:
    // 0x1ee204: 0x3c013e0a  lui         $at, 0x3E0A
    ctx->pc = 0x1ee204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15882 << 16));
label_1ee208:
    // 0x1ee208: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1ee208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1ee20c:
    // 0x1ee20c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ee20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ee210:
    // 0x1ee210: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ee210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ee214:
    // 0x1ee214: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1ee214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee218:
    // 0x1ee218: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ee218u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee21c:
    // 0x1ee21c: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1ee21cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1ee220:
    // 0x1ee220: 0x2409023b  addiu       $t1, $zero, 0x23B
    ctx->pc = 0x1ee220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 571));
label_1ee224:
    // 0x1ee224: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1ee224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1ee228:
    // 0x1ee228: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ee228u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee22c:
    // 0x1ee22c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ee22cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee230:
    // 0x1ee230: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1ee230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ee234:
    // 0x1ee234: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ee234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ee238:
    // 0x1ee238: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ee238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ee23c:
    // 0x1ee23c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ee23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ee240:
    // 0x1ee240: 0x40f809  jalr        $v0
label_1ee244:
    if (ctx->pc == 0x1EE244u) {
        ctx->pc = 0x1EE244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE240u;
        // 0x1ee244: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE248u;
        goto label_1ee248;
    }
    ctx->pc = 0x1EE240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE248u);
        ctx->pc = 0x1EE244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE240u;
        // 0x1ee244: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE240u, 0x1EE248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE248u;
label_1ee248:
    // 0x1ee248: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee24c:
    // 0x1ee24c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_1ee250:
    if (ctx->pc == 0x1EE250u) {
        ctx->pc = 0x1EE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE24Cu;
        // 0x1ee250: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE254u;
        goto label_1ee254;
    }
    ctx->pc = 0x1EE24Cu;
    {
        const bool branch_taken_0x1ee24c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE24Cu;
        // 0x1ee250: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee24c) {
            ctx->pc = 0x1EE2B4u;
            goto label_1ee2b4;
        }
    }
    ctx->pc = 0x1EE254u;
label_1ee254:
    // 0x1ee254: 0x27a3013c  addiu       $v1, $sp, 0x13C
    ctx->pc = 0x1ee254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_1ee258:
    // 0x1ee258: 0xa3a6013c  sb          $a2, 0x13C($sp)
    ctx->pc = 0x1ee258u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 316), (uint8_t)GPR_U32(ctx, 6));
label_1ee25c:
    // 0x1ee25c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ee25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ee260:
    // 0x1ee260: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1ee260u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1ee264:
    // 0x1ee264: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ee264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ee268:
    // 0x1ee268: 0xa0660002  sb          $a2, 0x2($v1)
    ctx->pc = 0x1ee268u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 6));
label_1ee26c:
    // 0x1ee26c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ee26cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee270:
    // 0x1ee270: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x1ee270u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 6));
label_1ee274:
    // 0x1ee274: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ee274u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee278:
    // 0x1ee278: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x1ee278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
label_1ee27c:
    // 0x1ee27c: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1ee27cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1ee280:
    // 0x1ee280: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ee280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ee284:
    // 0x1ee284: 0x8ea70178  lw          $a3, 0x178($s5)
    ctx->pc = 0x1ee284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
label_1ee288:
    // 0x1ee288: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x1ee288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_1ee28c:
    // 0x1ee28c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1ee28cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1ee290:
    // 0x1ee290: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1ee290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_1ee294:
    // 0x1ee294: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ee294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ee298:
    // 0x1ee298: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ee298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ee29c:
    // 0x1ee29c: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1ee29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_1ee2a0:
    // 0x1ee2a0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ee2a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ee2a4:
    // 0x1ee2a4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1ee2a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1ee2a8:
    // 0x1ee2a8: 0xc0683f4  jal         func_1A0FD0
label_1ee2ac:
    if (ctx->pc == 0x1EE2ACu) {
        ctx->pc = 0x1EE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2A8u;
        // 0x1ee2ac: 0x34e7000c  ori         $a3, $a3, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE2B0u;
        goto label_1ee2b0;
    }
    ctx->pc = 0x1EE2A8u;
    SET_GPR_U32(ctx, 31, 0x1EE2B0u);
    ctx->pc = 0x1EE2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2A8u;
    // 0x1ee2ac: 0x34e7000c  ori         $a3, $a3, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x1EE2A8u, 0x1EE2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE2B0u;
label_1ee2b0:
    // 0x1ee2b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee2b4:
    // 0x1ee2b4: 0xaea40190  sw          $a0, 0x190($s5)
    ctx->pc = 0x1ee2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 400), GPR_U32(ctx, 4));
label_1ee2b8:
    // 0x1ee2b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ee2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ee2bc:
    // 0x1ee2bc: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x1ee2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_1ee2c0:
    // 0x1ee2c0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1ee2c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee2c4:
    // 0x1ee2c4: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1ee2c4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1ee2c8:
    // 0x1ee2c8: 0x241e0086  addiu       $fp, $zero, 0x86
    ctx->pc = 0x1ee2c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_1ee2cc:
    // 0x1ee2cc: 0x8ea20190  lw          $v0, 0x190($s5)
    ctx->pc = 0x1ee2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 400)));
label_1ee2d0:
    // 0x1ee2d0: 0x2413001a  addiu       $s3, $zero, 0x1A
    ctx->pc = 0x1ee2d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1ee2d4:
    // 0x1ee2d4: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x1ee2d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ee2d8:
    // 0x1ee2d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ee2dc:
    // 0x1ee2dc: 0xac560054  sw          $s6, 0x54($v0)
    ctx->pc = 0x1ee2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 22));
label_1ee2e0:
    // 0x1ee2e0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ee2e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee2e4:
    // 0x1ee2e4: 0xa3be0140  sb          $fp, 0x140($sp)
    ctx->pc = 0x1ee2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 320), (uint8_t)GPR_U32(ctx, 30));
label_1ee2e8:
    // 0x1ee2e8: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x1ee2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ee2ec:
    // 0x1ee2ec: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x1ee2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_1ee2f0:
    // 0x1ee2f0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ee2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ee2f4:
    // 0x1ee2f4: 0x24090243  addiu       $t1, $zero, 0x243
    ctx->pc = 0x1ee2f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
label_1ee2f8:
    // 0x1ee2f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ee2f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee2fc:
    // 0x1ee2fc: 0xa0940003  sb          $s4, 0x3($a0)
    ctx->pc = 0x1ee2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 20));
label_1ee300:
    // 0x1ee300: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ee300u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee304:
    // 0x1ee304: 0xa0930001  sb          $s3, 0x1($a0)
    ctx->pc = 0x1ee304u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 19));
label_1ee308:
    // 0x1ee308: 0xa0930002  sb          $s3, 0x2($a0)
    ctx->pc = 0x1ee308u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 19));
label_1ee30c:
    // 0x1ee30c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ee30cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ee310:
    // 0x1ee310: 0xc480f3a4  lwc1        $f0, -0xC5C($a0)
    ctx->pc = 0x1ee310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee314:
    // 0x1ee314: 0x8ea30190  lw          $v1, 0x190($s5)
    ctx->pc = 0x1ee314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 400)));
label_1ee318:
    // 0x1ee318: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ee318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ee31c:
    // 0x1ee31c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1ee31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1ee320:
    // 0x1ee320: 0xc481f3a8  lwc1        $f1, -0xC58($a0)
    ctx->pc = 0x1ee320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee324:
    // 0x1ee324: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x1ee324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_1ee328:
    // 0x1ee328: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1ee328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ee32c:
    // 0x1ee32c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1ee32cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1ee330:
    // 0x1ee330: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1ee330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_1ee334:
    // 0x1ee334: 0xe6f5000c  swc1        $f21, 0xC($s7)
    ctx->pc = 0x1ee334u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1ee338:
    // 0x1ee338: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1ee338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee33c:
    // 0x1ee33c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1ee33cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1ee340:
    // 0x1ee340: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1ee340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ee344:
    // 0x1ee344: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ee344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ee348:
    // 0x1ee348: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ee348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ee34c:
    // 0x1ee34c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ee34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ee350:
    // 0x1ee350: 0x40f809  jalr        $v0
label_1ee354:
    if (ctx->pc == 0x1EE354u) {
        ctx->pc = 0x1EE354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE350u;
        // 0x1ee354: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE358u;
        goto label_1ee358;
    }
    ctx->pc = 0x1EE350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE358u);
        ctx->pc = 0x1EE354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE350u;
        // 0x1ee354: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE350u, 0x1EE358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE358u;
label_1ee358:
    // 0x1ee358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee35c:
    // 0x1ee35c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_1ee360:
    if (ctx->pc == 0x1EE360u) {
        ctx->pc = 0x1EE360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE35Cu;
        // 0x1ee360: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE364u;
        goto label_1ee364;
    }
    ctx->pc = 0x1EE35Cu;
    {
        const bool branch_taken_0x1ee35c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE35Cu;
        // 0x1ee360: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee35c) {
            ctx->pc = 0x1EE3C0u;
            goto label_1ee3c0;
        }
    }
    ctx->pc = 0x1EE364u;
label_1ee364:
    // 0x1ee364: 0x27a20144  addiu       $v0, $sp, 0x144
    ctx->pc = 0x1ee364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_1ee368:
    // 0x1ee368: 0xa3a30144  sb          $v1, 0x144($sp)
    ctx->pc = 0x1ee368u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 324), (uint8_t)GPR_U32(ctx, 3));
label_1ee36c:
    // 0x1ee36c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ee36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ee370:
    // 0x1ee370: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1ee370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1ee374:
    // 0x1ee374: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ee374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee378:
    // 0x1ee378: 0xa0540003  sb          $s4, 0x3($v0)
    ctx->pc = 0x1ee378u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 20));
label_1ee37c:
    // 0x1ee37c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ee37cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee380:
    // 0x1ee380: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1ee380u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1ee384:
    // 0x1ee384: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x1ee384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
label_1ee388:
    // 0x1ee388: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1ee388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1ee38c:
    // 0x1ee38c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ee38cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ee390:
    // 0x1ee390: 0x8ea70178  lw          $a3, 0x178($s5)
    ctx->pc = 0x1ee390u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
label_1ee394:
    // 0x1ee394: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x1ee394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_1ee398:
    // 0x1ee398: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1ee398u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1ee39c:
    // 0x1ee39c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1ee39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_1ee3a0:
    // 0x1ee3a0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ee3a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1ee3a4:
    // 0x1ee3a4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ee3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ee3a8:
    // 0x1ee3a8: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1ee3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_1ee3ac:
    // 0x1ee3ac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ee3acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ee3b0:
    // 0x1ee3b0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1ee3b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1ee3b4:
    // 0x1ee3b4: 0xc0683f4  jal         func_1A0FD0
label_1ee3b8:
    if (ctx->pc == 0x1EE3B8u) {
        ctx->pc = 0x1EE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3B4u;
        // 0x1ee3b8: 0x34e7000c  ori         $a3, $a3, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE3BCu;
        goto label_1ee3bc;
    }
    ctx->pc = 0x1EE3B4u;
    SET_GPR_U32(ctx, 31, 0x1EE3BCu);
    ctx->pc = 0x1EE3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE3B4u;
    // 0x1ee3b8: 0x34e7000c  ori         $a3, $a3, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x1EE3B4u, 0x1EE3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE3BCu;
label_1ee3bc:
    // 0x1ee3bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee3c0:
    // 0x1ee3c0: 0xaea40194  sw          $a0, 0x194($s5)
    ctx->pc = 0x1ee3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 404), GPR_U32(ctx, 4));
label_1ee3c4:
    // 0x1ee3c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ee3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ee3c8:
    // 0x1ee3c8: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x1ee3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_1ee3cc:
    // 0x1ee3cc: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x1ee3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
label_1ee3d0:
    // 0x1ee3d0: 0x8c45489c  lw          $a1, 0x489C($v0)
    ctx->pc = 0x1ee3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1ee3d4:
    // 0x1ee3d4: 0x3c11001c  lui         $s1, 0x1C
    ctx->pc = 0x1ee3d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28 << 16));
label_1ee3d8:
    // 0x1ee3d8: 0x8ea20194  lw          $v0, 0x194($s5)
    ctx->pc = 0x1ee3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 404)));
label_1ee3dc:
    // 0x1ee3dc: 0x3c12001c  lui         $s2, 0x1C
    ctx->pc = 0x1ee3dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)28 << 16));
label_1ee3e0:
    // 0x1ee3e0: 0x36100018  ori         $s0, $s0, 0x18
    ctx->pc = 0x1ee3e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)24);
label_1ee3e4:
    // 0x1ee3e4: 0x3631001a  ori         $s1, $s1, 0x1A
    ctx->pc = 0x1ee3e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)26);
label_1ee3e8:
    // 0x1ee3e8: 0xac560054  sw          $s6, 0x54($v0)
    ctx->pc = 0x1ee3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 22));
label_1ee3ec:
    // 0x1ee3ec: 0xa3be0148  sb          $fp, 0x148($sp)
    ctx->pc = 0x1ee3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 328), (uint8_t)GPR_U32(ctx, 30));
label_1ee3f0:
    // 0x1ee3f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ee3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee3f4:
    // 0x1ee3f4: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x1ee3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_1ee3f8:
    // 0x1ee3f8: 0xa0d40003  sb          $s4, 0x3($a2)
    ctx->pc = 0x1ee3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 20));
label_1ee3fc:
    // 0x1ee3fc: 0xa0d30002  sb          $s3, 0x2($a2)
    ctx->pc = 0x1ee3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 19));
label_1ee400:
    // 0x1ee400: 0xa0d30001  sb          $s3, 0x1($a2)
    ctx->pc = 0x1ee400u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 19));
label_1ee404:
    // 0x1ee404: 0x8ea30194  lw          $v1, 0x194($s5)
    ctx->pc = 0x1ee404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 404)));
label_1ee408:
    // 0x1ee408: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x1ee408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_1ee40c:
    // 0x1ee40c: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x1ee40cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_1ee410:
    // 0x1ee410: 0x8ca30120  lw          $v1, 0x120($a1)
    ctx->pc = 0x1ee410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 288)));
label_1ee414:
    // 0x1ee414: 0x10640018  beq         $v1, $a0, . + 4 + (0x18 << 2)
label_1ee418:
    if (ctx->pc == 0x1EE418u) {
        ctx->pc = 0x1EE418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE414u;
        // 0x1ee418: 0x36520014  ori         $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE41Cu;
        goto label_1ee41c;
    }
    ctx->pc = 0x1EE414u;
    {
        const bool branch_taken_0x1ee414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1EE418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE414u;
        // 0x1ee418: 0x36520014  ori         $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee414) {
            ctx->pc = 0x1EE478u;
            goto label_1ee478;
        }
    }
    ctx->pc = 0x1EE41Cu;
label_1ee41c:
    // 0x1ee41c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1ee41cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1ee420:
    // 0x1ee420: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ee424:
    if (ctx->pc == 0x1EE424u) {
        ctx->pc = 0x1EE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE420u;
        // 0x1ee424: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE428u;
        goto label_1ee428;
    }
    ctx->pc = 0x1EE420u;
    {
        const bool branch_taken_0x1ee420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE420u;
        // 0x1ee424: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee420) {
            ctx->pc = 0x1EE438u;
            goto label_1ee438;
        }
    }
    ctx->pc = 0x1EE428u;
label_1ee428:
    // 0x1ee428: 0x1076000e  beq         $v1, $s6, . + 4 + (0xE << 2)
label_1ee42c:
    if (ctx->pc == 0x1EE42Cu) {
        ctx->pc = 0x1EE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE428u;
        // 0x1ee42c: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE430u;
        goto label_1ee430;
    }
    ctx->pc = 0x1EE428u;
    {
        const bool branch_taken_0x1ee428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x1EE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE428u;
        // 0x1ee42c: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee428) {
            ctx->pc = 0x1EE464u;
            goto label_1ee464;
        }
    }
    ctx->pc = 0x1EE430u;
label_1ee430:
    // 0x1ee430: 0x10000019  b           . + 4 + (0x19 << 2)
label_1ee434:
    if (ctx->pc == 0x1EE434u) {
        ctx->pc = 0x1EE434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE430u;
        // 0x1ee434: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE438u;
        goto label_1ee438;
    }
    ctx->pc = 0x1EE430u;
    {
        const bool branch_taken_0x1ee430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE430u;
        // 0x1ee434: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee430) {
            ctx->pc = 0x1EE498u;
            goto label_1ee498;
        }
    }
    ctx->pc = 0x1EE438u;
label_1ee438:
    // 0x1ee438: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1ee43c:
    if (ctx->pc == 0x1EE43Cu) {
        ctx->pc = 0x1EE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE438u;
        // 0x1ee43c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE440u;
        goto label_1ee440;
    }
    ctx->pc = 0x1EE438u;
    {
        const bool branch_taken_0x1ee438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EE43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE438u;
        // 0x1ee43c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee438) {
            ctx->pc = 0x1EE464u;
            goto label_1ee464;
        }
    }
    ctx->pc = 0x1EE440u;
label_1ee440:
    // 0x1ee440: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_1ee444:
    if (ctx->pc == 0x1EE444u) {
        ctx->pc = 0x1EE444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE440u;
        // 0x1ee444: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE448u;
        goto label_1ee448;
    }
    ctx->pc = 0x1EE440u;
    {
        const bool branch_taken_0x1ee440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE440u;
        // 0x1ee444: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee440) {
            ctx->pc = 0x1EE494u;
            goto label_1ee494;
        }
    }
    ctx->pc = 0x1EE448u;
label_1ee448:
    // 0x1ee448: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x1ee448u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
label_1ee44c:
    // 0x1ee44c: 0x3c11001c  lui         $s1, 0x1C
    ctx->pc = 0x1ee44cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28 << 16));
label_1ee450:
    // 0x1ee450: 0x3c12001c  lui         $s2, 0x1C
    ctx->pc = 0x1ee450u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)28 << 16));
label_1ee454:
    // 0x1ee454: 0x36100019  ori         $s0, $s0, 0x19
    ctx->pc = 0x1ee454u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)25);
label_1ee458:
    // 0x1ee458: 0x3631001b  ori         $s1, $s1, 0x1B
    ctx->pc = 0x1ee458u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)27);
label_1ee45c:
    // 0x1ee45c: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ee460:
    if (ctx->pc == 0x1EE460u) {
        ctx->pc = 0x1EE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE45Cu;
        // 0x1ee460: 0x36520016  ori         $s2, $s2, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE464u;
        goto label_1ee464;
    }
    ctx->pc = 0x1EE45Cu;
    {
        const bool branch_taken_0x1ee45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE45Cu;
        // 0x1ee460: 0x36520016  ori         $s2, $s2, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee45c) {
            ctx->pc = 0x1EE494u;
            goto label_1ee494;
        }
    }
    ctx->pc = 0x1EE464u;
label_1ee464:
    // 0x1ee464: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x1ee464u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
label_1ee468:
    // 0x1ee468: 0x3c11001c  lui         $s1, 0x1C
    ctx->pc = 0x1ee468u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28 << 16));
label_1ee46c:
    // 0x1ee46c: 0x36100019  ori         $s0, $s0, 0x19
    ctx->pc = 0x1ee46cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)25);
label_1ee470:
    // 0x1ee470: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ee474:
    if (ctx->pc == 0x1EE474u) {
        ctx->pc = 0x1EE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE470u;
        // 0x1ee474: 0x3631001b  ori         $s1, $s1, 0x1B (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)27);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE478u;
        goto label_1ee478;
    }
    ctx->pc = 0x1EE470u;
    {
        const bool branch_taken_0x1ee470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE470u;
        // 0x1ee474: 0x3631001b  ori         $s1, $s1, 0x1B (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)27);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee470) {
            ctx->pc = 0x1EE490u;
            goto label_1ee490;
        }
    }
    ctx->pc = 0x1EE478u;
label_1ee478:
    // 0x1ee478: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x1ee478u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
label_1ee47c:
    // 0x1ee47c: 0x3c11001c  lui         $s1, 0x1C
    ctx->pc = 0x1ee47cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28 << 16));
label_1ee480:
    // 0x1ee480: 0x3c12001c  lui         $s2, 0x1C
    ctx->pc = 0x1ee480u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)28 << 16));
label_1ee484:
    // 0x1ee484: 0x36100019  ori         $s0, $s0, 0x19
    ctx->pc = 0x1ee484u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)25);
label_1ee488:
    // 0x1ee488: 0x3631001b  ori         $s1, $s1, 0x1B
    ctx->pc = 0x1ee488u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)27);
label_1ee48c:
    // 0x1ee48c: 0x36520015  ori         $s2, $s2, 0x15
    ctx->pc = 0x1ee48cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)21);
label_1ee490:
    // 0x1ee490: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1ee490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1ee494:
    // 0x1ee494: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ee494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ee498:
    // 0x1ee498: 0xc4e0f3bc  lwc1        $f0, -0xC44($a3)
    ctx->pc = 0x1ee498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294964156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee49c:
    // 0x1ee49c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1ee49cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1ee4a0:
    // 0x1ee4a0: 0xc441f3c4  lwc1        $f1, -0xC3C($v0)
    ctx->pc = 0x1ee4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee4a4:
    // 0x1ee4a4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ee4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ee4a8:
    // 0x1ee4a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ee4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ee4ac:
    // 0x1ee4ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ee4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ee4b0:
    // 0x1ee4b0: 0x25056fd0  addiu       $a1, $t0, 0x6FD0
    ctx->pc = 0x1ee4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 28624));
label_1ee4b4:
    // 0x1ee4b4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1ee4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ee4b8:
    // 0x1ee4b8: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x1ee4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_1ee4bc:
    // 0x1ee4bc: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1ee4bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1ee4c0:
    // 0x1ee4c0: 0x24686f20  addiu       $t0, $v1, 0x6F20
    ctx->pc = 0x1ee4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 28448));
label_1ee4c4:
    // 0x1ee4c4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1ee4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_1ee4c8:
    // 0x1ee4c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ee4c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee4cc:
    // 0x1ee4cc: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1ee4ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1ee4d0:
    // 0x1ee4d0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1ee4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1ee4d4:
    // 0x1ee4d4: 0x8c8c27e4  lw          $t4, 0x27E4($a0)
    ctx->pc = 0x1ee4d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_1ee4d8:
    // 0x1ee4d8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ee4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ee4dc:
    // 0x1ee4dc: 0x24090266  addiu       $t1, $zero, 0x266
    ctx->pc = 0x1ee4dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 614));
label_1ee4e0:
    // 0x1ee4e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ee4e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee4e4:
    // 0x1ee4e4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ee4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ee4e8:
    // 0x1ee4e8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ee4e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee4ec:
    // 0x1ee4ec: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ee4ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ee4f0:
    // 0x1ee4f0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ee4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ee4f4:
    // 0x1ee4f4: 0x40f809  jalr        $v0
label_1ee4f8:
    if (ctx->pc == 0x1EE4F8u) {
        ctx->pc = 0x1EE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4F4u;
        // 0x1ee4f8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE4FCu;
        goto label_1ee4fc;
    }
    ctx->pc = 0x1EE4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE4FCu);
        ctx->pc = 0x1EE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4F4u;
        // 0x1ee4f8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE4F4u, 0x1EE4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE4FCu;
label_1ee4fc:
    // 0x1ee4fc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1ee4fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee500:
    // 0x1ee500: 0x51600005  beql        $t3, $zero, . + 4 + (0x5 << 2)
label_1ee504:
    if (ctx->pc == 0x1EE504u) {
        ctx->pc = 0x1EE504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE500u;
        // 0x1ee504: 0xaeab01d0  sw          $t3, 0x1D0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 464), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE508u;
        goto label_1ee508;
    }
    ctx->pc = 0x1EE500u;
    {
        const bool branch_taken_0x1ee500 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee500) {
            ctx->pc = 0x1EE504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE500u;
            // 0x1ee504: 0xaeab01d0  sw          $t3, 0x1D0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 464), GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE518u;
            goto label_1ee518;
        }
    }
    ctx->pc = 0x1EE508u;
label_1ee508:
    // 0x1ee508: 0xc0686fe  jal         func_1A1BF8
label_1ee50c:
    if (ctx->pc == 0x1EE50Cu) {
        ctx->pc = 0x1EE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE508u;
        // 0x1ee50c: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE510u;
        goto label_1ee510;
    }
    ctx->pc = 0x1EE508u;
    SET_GPR_U32(ctx, 31, 0x1EE510u);
    ctx->pc = 0x1EE50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE508u;
    // 0x1ee50c: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1EE508u, 0x1EE510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE510u;
label_1ee510:
    // 0x1ee510: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1ee510u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee514:
    // 0x1ee514: 0xaeab01d0  sw          $t3, 0x1D0($s5)
    ctx->pc = 0x1ee514u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 464), GPR_U32(ctx, 11));
label_1ee518:
    // 0x1ee518: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ee518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ee51c:
    // 0x1ee51c: 0x8eaa0178  lw          $t2, 0x178($s5)
    ctx->pc = 0x1ee51cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
label_1ee520:
    // 0x1ee520: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1ee520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1ee524:
    // 0x1ee524: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1ee524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1ee528:
    // 0x1ee528: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ee528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ee52c:
    // 0x1ee52c: 0x8ca6d310  lw          $a2, -0x2CF0($a1)
    ctx->pc = 0x1ee52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955792)));
label_1ee530:
    // 0x1ee530: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee534:
    // 0x1ee534: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1ee534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1ee538:
    // 0x1ee538: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ee538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ee53c:
    // 0x1ee53c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1ee53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1ee540:
    // 0x1ee540: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ee540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee544:
    // 0x1ee544: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1ee544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_1ee548:
    // 0x1ee548: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1ee548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1ee54c:
    // 0x1ee54c: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x1ee54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
label_1ee550:
    // 0x1ee550: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ee550u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee554:
    // 0x1ee554: 0x3c0145fd  lui         $at, 0x45FD
    ctx->pc = 0x1ee554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17917 << 16));
label_1ee558:
    // 0x1ee558: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x1ee558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_1ee55c:
    // 0x1ee55c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ee55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ee560:
    // 0x1ee560: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1ee560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1ee564:
    // 0x1ee564: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ee564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ee568:
    // 0x1ee568: 0x40f809  jalr        $v0
label_1ee56c:
    if (ctx->pc == 0x1EE56Cu) {
        ctx->pc = 0x1EE56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE568u;
        // 0x1ee56c: 0xc46cf3b8  lwc1        $f12, -0xC48($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE570u;
        goto label_1ee570;
    }
    ctx->pc = 0x1EE568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE570u);
        ctx->pc = 0x1EE56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE568u;
        // 0x1ee56c: 0xc46cf3b8  lwc1        $f12, -0xC48($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE568u, 0x1EE570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE570u;
label_1ee570:
    // 0x1ee570: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1ee570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1ee574:
    // 0x1ee574: 0x9483eec0  lhu         $v1, -0x1140($a0)
    ctx->pc = 0x1ee574u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294962880)));
label_1ee578:
    // 0x1ee578: 0x14730006  bne         $v1, $s3, . + 4 + (0x6 << 2)
label_1ee57c:
    if (ctx->pc == 0x1EE57Cu) {
        ctx->pc = 0x1EE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE578u;
        // 0x1ee57c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE580u;
        goto label_1ee580;
    }
    ctx->pc = 0x1EE578u;
    {
        const bool branch_taken_0x1ee578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1EE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE578u;
        // 0x1ee57c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee578) {
            ctx->pc = 0x1EE594u;
            goto label_1ee594;
        }
    }
    ctx->pc = 0x1EE580u;
label_1ee580:
    // 0x1ee580: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1ee580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1ee584:
    // 0x1ee584: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1ee584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1ee588:
    // 0x1ee588: 0xc4a0f3c0  lwc1        $f0, -0xC40($a1)
    ctx->pc = 0x1ee588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294964160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee58c:
    // 0x1ee58c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ee590:
    if (ctx->pc == 0x1EE590u) {
        ctx->pc = 0x1EE590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE58Cu;
        // 0x1ee590: 0xc4c1f3c4  lwc1        $f1, -0xC3C($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE594u;
        goto label_1ee594;
    }
    ctx->pc = 0x1EE58Cu;
    {
        const bool branch_taken_0x1ee58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE58Cu;
        // 0x1ee590: 0xc4c1f3c4  lwc1        $f1, -0xC3C($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee58c) {
            ctx->pc = 0x1EE5ACu;
            goto label_1ee5ac;
        }
    }
    ctx->pc = 0x1EE594u;
label_1ee594:
    // 0x1ee594: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1ee598:
    if (ctx->pc == 0x1EE598u) {
        ctx->pc = 0x1EE598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE594u;
        // 0x1ee598: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE59Cu;
        goto label_1ee59c;
    }
    ctx->pc = 0x1EE594u;
    {
        const bool branch_taken_0x1ee594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee594) {
            ctx->pc = 0x1EE598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE594u;
            // 0x1ee598: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE5BCu;
            goto label_1ee5bc;
        }
    }
    ctx->pc = 0x1EE59Cu;
label_1ee59c:
    // 0x1ee59c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1ee59cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1ee5a0:
    // 0x1ee5a0: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1ee5a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1ee5a4:
    // 0x1ee5a4: 0xc4e0f3c8  lwc1        $f0, -0xC38($a3)
    ctx->pc = 0x1ee5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294964168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee5a8:
    // 0x1ee5a8: 0xc501f3cc  lwc1        $f1, -0xC34($t0)
    ctx->pc = 0x1ee5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294964172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee5ac:
    // 0x1ee5ac: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1ee5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ee5b0:
    // 0x1ee5b0: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1ee5b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1ee5b4:
    // 0x1ee5b4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1ee5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_1ee5b8:
    // 0x1ee5b8: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1ee5b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1ee5bc:
    // 0x1ee5bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ee5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ee5c0:
    // 0x1ee5c0: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x1ee5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_1ee5c4:
    // 0x1ee5c4: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1ee5c4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1ee5c8:
    // 0x1ee5c8: 0x24656fd0  addiu       $a1, $v1, 0x6FD0
    ctx->pc = 0x1ee5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28624));
label_1ee5cc:
    // 0x1ee5cc: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1ee5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1ee5d0:
    // 0x1ee5d0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ee5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ee5d4:
    // 0x1ee5d4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ee5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ee5d8:
    // 0x1ee5d8: 0x24886f20  addiu       $t0, $a0, 0x6F20
    ctx->pc = 0x1ee5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 28448));
label_1ee5dc:
    // 0x1ee5dc: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1ee5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1ee5e0:
    // 0x1ee5e0: 0x24090272  addiu       $t1, $zero, 0x272
    ctx->pc = 0x1ee5e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 626));
label_1ee5e4:
    // 0x1ee5e4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ee5e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ee5e8:
    // 0x1ee5e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ee5e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee5ec:
    // 0x1ee5ec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ee5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ee5f0:
    // 0x1ee5f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ee5f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee5f4:
    // 0x1ee5f4: 0x40f809  jalr        $v0
label_1ee5f8:
    if (ctx->pc == 0x1EE5F8u) {
        ctx->pc = 0x1EE5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5F4u;
        // 0x1ee5f8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE5FCu;
        goto label_1ee5fc;
    }
    ctx->pc = 0x1EE5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE5FCu);
        ctx->pc = 0x1EE5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5F4u;
        // 0x1ee5f8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE5F4u, 0x1EE5FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE5FCu;
label_1ee5fc:
    // 0x1ee5fc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ee5fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee600:
    // 0x1ee600: 0x50e00005  beql        $a3, $zero, . + 4 + (0x5 << 2)
label_1ee604:
    if (ctx->pc == 0x1EE604u) {
        ctx->pc = 0x1EE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE600u;
        // 0x1ee604: 0xaea701d4  sw          $a3, 0x1D4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 468), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE608u;
        goto label_1ee608;
    }
    ctx->pc = 0x1EE600u;
    {
        const bool branch_taken_0x1ee600 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee600) {
            ctx->pc = 0x1EE604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE600u;
            // 0x1ee604: 0xaea701d4  sw          $a3, 0x1D4($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 468), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE618u;
            goto label_1ee618;
        }
    }
    ctx->pc = 0x1EE608u;
label_1ee608:
    // 0x1ee608: 0xc0686fe  jal         func_1A1BF8
label_1ee60c:
    if (ctx->pc == 0x1EE60Cu) {
        ctx->pc = 0x1EE60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE608u;
        // 0x1ee60c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE610u;
        goto label_1ee610;
    }
    ctx->pc = 0x1EE608u;
    SET_GPR_U32(ctx, 31, 0x1EE610u);
    ctx->pc = 0x1EE60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE608u;
    // 0x1ee60c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1EE608u, 0x1EE610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE610u;
label_1ee610:
    // 0x1ee610: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ee610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee614:
    // 0x1ee614: 0xaea701d4  sw          $a3, 0x1D4($s5)
    ctx->pc = 0x1ee614u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 468), GPR_U32(ctx, 7));
label_1ee618:
    // 0x1ee618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee61c:
    // 0x1ee61c: 0x8eaa0178  lw          $t2, 0x178($s5)
    ctx->pc = 0x1ee61cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
label_1ee620:
    // 0x1ee620: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1ee620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ee624:
    // 0x1ee624: 0x8cec0000  lw          $t4, 0x0($a3)
    ctx->pc = 0x1ee624u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1ee628:
    // 0x1ee628: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1ee628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1ee62c:
    // 0x1ee62c: 0x8ca6d310  lw          $a2, -0x2CF0($a1)
    ctx->pc = 0x1ee62cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955792)));
label_1ee630:
    // 0x1ee630: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1ee630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ee634:
    // 0x1ee634: 0x85840068  lh          $a0, 0x68($t4)
    ctx->pc = 0x1ee634u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 104)));
label_1ee638:
    // 0x1ee638: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1ee638u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee63c:
    // 0x1ee63c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1ee63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_1ee640:
    // 0x1ee640: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ee640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ee644:
    // 0x1ee644: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ee644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1ee648:
    // 0x1ee648: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1ee648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1ee64c:
    // 0x1ee64c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1ee64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1ee650:
    // 0x1ee650: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ee650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ee654:
    // 0x1ee654: 0x3c0145fd  lui         $at, 0x45FD
    ctx->pc = 0x1ee654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17917 << 16));
label_1ee658:
    // 0x1ee658: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x1ee658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_1ee65c:
    // 0x1ee65c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ee65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ee660:
    // 0x1ee660: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee664:
    // 0x1ee664: 0x8d83006c  lw          $v1, 0x6C($t4)
    ctx->pc = 0x1ee664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 108)));
label_1ee668:
    // 0x1ee668: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ee668u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee66c:
    // 0x1ee66c: 0x60f809  jalr        $v1
label_1ee670:
    if (ctx->pc == 0x1EE670u) {
        ctx->pc = 0x1EE670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE66Cu;
        // 0x1ee670: 0xc44cf3b8  lwc1        $f12, -0xC48($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE674u;
        goto label_1ee674;
    }
    ctx->pc = 0x1EE66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EE674u);
        ctx->pc = 0x1EE670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE66Cu;
        // 0x1ee670: 0xc44cf3b8  lwc1        $f12, -0xC48($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE66Cu, 0x1EE674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE674u;
label_1ee674:
    // 0x1ee674: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1ee674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1ee678:
    // 0x1ee678: 0x9462eec0  lhu         $v0, -0x1140($v1)
    ctx->pc = 0x1ee678u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962880)));
label_1ee67c:
    // 0x1ee67c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1ee67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1ee680:
    // 0x1ee680: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ee680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ee684:
    // 0x1ee684: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1ee688:
    if (ctx->pc == 0x1EE688u) {
        ctx->pc = 0x1EE688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE684u;
        // 0x1ee688: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE68Cu;
        goto label_1ee68c;
    }
    ctx->pc = 0x1EE684u;
    {
        const bool branch_taken_0x1ee684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE684u;
        // 0x1ee688: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee684) {
            ctx->pc = 0x1EE6B8u;
            goto label_1ee6b8;
        }
    }
    ctx->pc = 0x1EE68Cu;
label_1ee68c:
    // 0x1ee68c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ee68cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ee690:
    // 0x1ee690: 0xc480f3c0  lwc1        $f0, -0xC40($a0)
    ctx->pc = 0x1ee690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee694:
    // 0x1ee694: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ee694u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee698:
    // 0x1ee698: 0xc4a1f3c4  lwc1        $f1, -0xC3C($a1)
    ctx->pc = 0x1ee698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294964164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee69c:
    // 0x1ee69c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ee69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ee6a0:
    // 0x1ee6a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ee6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ee6a4:
    // 0x1ee6a4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1ee6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ee6a8:
    // 0x1ee6a8: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1ee6a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1ee6ac:
    // 0x1ee6ac: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1ee6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_1ee6b0:
    // 0x1ee6b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ee6b4:
    if (ctx->pc == 0x1EE6B4u) {
        ctx->pc = 0x1EE6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6B0u;
        // 0x1ee6b4: 0xe6e2000c  swc1        $f2, 0xC($s7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE6B8u;
        goto label_1ee6b8;
    }
    ctx->pc = 0x1EE6B0u;
    {
        const bool branch_taken_0x1ee6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6B0u;
        // 0x1ee6b4: 0xe6e2000c  swc1        $f2, 0xC($s7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee6b0) {
            ctx->pc = 0x1EE6BCu;
            goto label_1ee6bc;
        }
    }
    ctx->pc = 0x1EE6B8u;
label_1ee6b8:
    // 0x1ee6b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ee6b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee6bc:
    // 0x1ee6bc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1ee6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1ee6c0:
    // 0x1ee6c0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1ee6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1ee6c4:
    // 0x1ee6c4: 0x8ccc27e4  lw          $t4, 0x27E4($a2)
    ctx->pc = 0x1ee6c4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10212)));
label_1ee6c8:
    // 0x1ee6c8: 0x3c070055  lui         $a3, 0x55
    ctx->pc = 0x1ee6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)85 << 16));
label_1ee6cc:
    // 0x1ee6cc: 0x24486f20  addiu       $t0, $v0, 0x6F20
    ctx->pc = 0x1ee6ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 28448));
label_1ee6d0:
    // 0x1ee6d0: 0x24e56fd0  addiu       $a1, $a3, 0x6FD0
    ctx->pc = 0x1ee6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 28624));
label_1ee6d4:
    // 0x1ee6d4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ee6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ee6d8:
    // 0x1ee6d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ee6d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee6dc:
    // 0x1ee6dc: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1ee6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1ee6e0:
    // 0x1ee6e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ee6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ee6e4:
    // 0x1ee6e4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ee6e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ee6e8:
    // 0x1ee6e8: 0x2409027b  addiu       $t1, $zero, 0x27B
    ctx->pc = 0x1ee6e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 635));
label_1ee6ec:
    // 0x1ee6ec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ee6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ee6f0:
    // 0x1ee6f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ee6f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee6f4:
    // 0x1ee6f4: 0x40f809  jalr        $v0
label_1ee6f8:
    if (ctx->pc == 0x1EE6F8u) {
        ctx->pc = 0x1EE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6F4u;
        // 0x1ee6f8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE6FCu;
        goto label_1ee6fc;
    }
    ctx->pc = 0x1EE6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE6FCu);
        ctx->pc = 0x1EE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6F4u;
        // 0x1ee6f8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE6F4u, 0x1EE6FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE6FCu;
label_1ee6fc:
    // 0x1ee6fc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1ee6fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee700:
    // 0x1ee700: 0x51600005  beql        $t3, $zero, . + 4 + (0x5 << 2)
label_1ee704:
    if (ctx->pc == 0x1EE704u) {
        ctx->pc = 0x1EE704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE700u;
        // 0x1ee704: 0xaeab01d8  sw          $t3, 0x1D8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 472), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE708u;
        goto label_1ee708;
    }
    ctx->pc = 0x1EE700u;
    {
        const bool branch_taken_0x1ee700 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee700) {
            ctx->pc = 0x1EE704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE700u;
            // 0x1ee704: 0xaeab01d8  sw          $t3, 0x1D8($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 472), GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE718u;
            goto label_1ee718;
        }
    }
    ctx->pc = 0x1EE708u;
label_1ee708:
    // 0x1ee708: 0xc0686fe  jal         func_1A1BF8
label_1ee70c:
    if (ctx->pc == 0x1EE70Cu) {
        ctx->pc = 0x1EE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE708u;
        // 0x1ee70c: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE710u;
        goto label_1ee710;
    }
    ctx->pc = 0x1EE708u;
    SET_GPR_U32(ctx, 31, 0x1EE710u);
    ctx->pc = 0x1EE70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE708u;
    // 0x1ee70c: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1EE708u, 0x1EE710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE710u;
label_1ee710:
    // 0x1ee710: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1ee710u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee714:
    // 0x1ee714: 0xaeab01d8  sw          $t3, 0x1D8($s5)
    ctx->pc = 0x1ee714u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 472), GPR_U32(ctx, 11));
label_1ee718:
    // 0x1ee718: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ee718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1ee71c:
    // 0x1ee71c: 0x8c66d310  lw          $a2, -0x2CF0($v1)
    ctx->pc = 0x1ee71cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955792)));
label_1ee720:
    // 0x1ee720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee724:
    // 0x1ee724: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1ee724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1ee728:
    // 0x1ee728: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1ee728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ee72c:
    // 0x1ee72c: 0x8eaa0178  lw          $t2, 0x178($s5)
    ctx->pc = 0x1ee72cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 376)));
label_1ee730:
    // 0x1ee730: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ee730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ee734:
    // 0x1ee734: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1ee734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1ee738:
    // 0x1ee738: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1ee738u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ee73c:
    // 0x1ee73c: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x1ee73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_1ee740:
    // 0x1ee740: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1ee740u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ee744:
    // 0x1ee744: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1ee744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_1ee748:
    // 0x1ee748: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1ee748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1ee74c:
    // 0x1ee74c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ee74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1ee750:
    // 0x1ee750: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee754:
    // 0x1ee754: 0x3c0145fd  lui         $at, 0x45FD
    ctx->pc = 0x1ee754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17917 << 16));
label_1ee758:
    // 0x1ee758: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x1ee758u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_1ee75c:
    // 0x1ee75c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ee75cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ee760:
    // 0x1ee760: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ee760u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee764:
    // 0x1ee764: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1ee764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1ee768:
    // 0x1ee768: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ee768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee76c:
    // 0x1ee76c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ee76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ee770:
    // 0x1ee770: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x1ee770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
label_1ee774:
    // 0x1ee774: 0xc46cf3b8  lwc1        $f12, -0xC48($v1)
    ctx->pc = 0x1ee774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ee778:
    // 0x1ee778: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ee778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ee77c:
    // 0x1ee77c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ee77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1ee780:
    // 0x1ee780: 0x40f809  jalr        $v0
label_1ee784:
    if (ctx->pc == 0x1EE784u) {
        ctx->pc = 0x1EE784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE780u;
        // 0x1ee784: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE788u;
        goto label_1ee788;
    }
    ctx->pc = 0x1EE780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE788u);
        ctx->pc = 0x1EE784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE780u;
        // 0x1ee784: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE780u, 0x1EE788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE788u;
label_1ee788:
    // 0x1ee788: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x1ee788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_1ee78c:
    // 0x1ee78c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ee78cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ee790:
    // 0x1ee790: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ee790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ee794:
    // 0x1ee794: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1ee794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1ee798:
    // 0x1ee798: 0x8ea201dc  lw          $v0, 0x1DC($s5)
    ctx->pc = 0x1ee798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 476)));
label_1ee79c:
    // 0x1ee79c: 0xc480f394  lwc1        $f0, -0xC6C($a0)
    ctx->pc = 0x1ee79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294964116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee7a0:
    // 0x1ee7a0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1ee7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1ee7a4:
    // 0x1ee7a4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1ee7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1ee7a8:
    // 0x1ee7a8: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1ee7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1ee7ac:
    // 0x1ee7ac: 0xc4a1f398  lwc1        $f1, -0xC68($a1)
    ctx->pc = 0x1ee7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294964120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee7b0:
    // 0x1ee7b0: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x1ee7b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1ee7b4:
    // 0x1ee7b4: 0xc4c0f39c  lwc1        $f0, -0xC64($a2)
    ctx->pc = 0x1ee7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee7b8:
    // 0x1ee7b8: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1ee7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1ee7bc:
    // 0x1ee7bc: 0x6ba70117  ldl         $a3, 0x117($sp)
    ctx->pc = 0x1ee7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1ee7c0:
    // 0x1ee7c0: 0x6fa70110  ldr         $a3, 0x110($sp)
    ctx->pc = 0x1ee7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1ee7c4:
    // 0x1ee7c4: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x1ee7c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_1ee7c8:
    // 0x1ee7c8: 0xb3a70107  sdl         $a3, 0x107($sp)
    ctx->pc = 0x1ee7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee7cc:
    // 0x1ee7cc: 0xb7a70100  sdr         $a3, 0x100($sp)
    ctx->pc = 0x1ee7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee7d0:
    // 0x1ee7d0: 0xafa80108  sw          $t0, 0x108($sp)
    ctx->pc = 0x1ee7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 8));
label_1ee7d4:
    // 0x1ee7d4: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_1ee7d8:
    if (ctx->pc == 0x1EE7D8u) {
        ctx->pc = 0x1EE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7D4u;
        // 0x1ee7d8: 0x26b400c0  addiu       $s4, $s5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE7DCu;
        goto label_1ee7dc;
    }
    ctx->pc = 0x1EE7D4u;
    {
        const bool branch_taken_0x1ee7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7D4u;
        // 0x1ee7d8: 0x26b400c0  addiu       $s4, $s5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7d4) {
            ctx->pc = 0x1EE98Cu;
            goto label_1ee98c;
        }
    }
    ctx->pc = 0x1EE7DCu;
label_1ee7dc:
    // 0x1ee7dc: 0x26b600bc  addiu       $s6, $s5, 0xBC
    ctx->pc = 0x1ee7dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 188));
label_1ee7e0:
    // 0x1ee7e0: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x1ee7e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ee7e4:
    // 0x1ee7e4: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x1ee7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_1ee7e8:
    // 0x1ee7e8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ee7e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ee7ec:
    // 0x1ee7ec: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1ee7ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1ee7f0:
    // 0x1ee7f0: 0x26b200c4  addiu       $s2, $s5, 0xC4
    ctx->pc = 0x1ee7f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 196));
label_1ee7f4:
    // 0x1ee7f4: 0x280f02d  daddu       $fp, $s4, $zero
    ctx->pc = 0x1ee7f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ee7f8:
    // 0x1ee7f8: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x1ee7f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ee7fc:
    // 0x1ee7fc: 0x0  nop
    ctx->pc = 0x1ee7fcu;
    // NOP
label_1ee800:
    // 0x1ee800: 0x8fa5014c  lw          $a1, 0x14C($sp)
    ctx->pc = 0x1ee800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_1ee804:
    // 0x1ee804: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1ee804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1ee808:
    // 0x1ee808: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1ee80c:
    if (ctx->pc == 0x1EE80Cu) {
        ctx->pc = 0x1EE810u;
        goto label_1ee810;
    }
    ctx->pc = 0x1EE808u;
    {
        const bool branch_taken_0x1ee808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee808) {
            ctx->pc = 0x1EE8A8u;
            goto label_1ee8a8;
        }
    }
    ctx->pc = 0x1EE810u;
label_1ee810:
    // 0x1ee810: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ee810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ee814:
    // 0x1ee814: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_1ee818:
    if (ctx->pc == 0x1EE818u) {
        ctx->pc = 0x1EE818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE814u;
        // 0x1ee818: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE81Cu;
        goto label_1ee81c;
    }
    ctx->pc = 0x1EE814u;
    {
        const bool branch_taken_0x1ee814 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1EE818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE814u;
        // 0x1ee818: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee814) {
            ctx->pc = 0x1EE830u;
            goto label_1ee830;
        }
    }
    ctx->pc = 0x1EE81Cu;
label_1ee81c:
    // 0x1ee81c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1ee81cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ee820:
    // 0x1ee820: 0x0  nop
    ctx->pc = 0x1ee820u;
    // NOP
label_1ee824:
    // 0x1ee824: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ee824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ee828:
    // 0x1ee828: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ee82c:
    if (ctx->pc == 0x1EE82Cu) {
        ctx->pc = 0x1EE82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE828u;
        // 0x1ee82c: 0x4600a802  mul.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE830u;
        goto label_1ee830;
    }
    ctx->pc = 0x1EE828u;
    {
        const bool branch_taken_0x1ee828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE828u;
        // 0x1ee82c: 0x4600a802  mul.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee828) {
            ctx->pc = 0x1EE850u;
            goto label_1ee850;
        }
    }
    ctx->pc = 0x1EE830u;
label_1ee830:
    // 0x1ee830: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1ee830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1ee834:
    // 0x1ee834: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1ee834u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_1ee838:
    // 0x1ee838: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ee838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ee83c:
    // 0x1ee83c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ee840:
    // 0x1ee840: 0x0  nop
    ctx->pc = 0x1ee840u;
    // NOP
label_1ee844:
    // 0x1ee844: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ee844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ee848:
    // 0x1ee848: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ee848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ee84c:
    // 0x1ee84c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1ee84cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1ee850:
    // 0x1ee850: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x1ee850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee854:
    // 0x1ee854: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1ee854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ee858:
    // 0x1ee858: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1ee858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1ee85c:
    // 0x1ee85c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ee85cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ee860:
    // 0x1ee860: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_1ee864:
    if (ctx->pc == 0x1EE864u) {
        ctx->pc = 0x1EE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE860u;
        // 0x1ee864: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE868u;
        goto label_1ee868;
    }
    ctx->pc = 0x1EE860u;
    {
        const bool branch_taken_0x1ee860 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1EE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE860u;
        // 0x1ee864: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee860) {
            ctx->pc = 0x1EE87Cu;
            goto label_1ee87c;
        }
    }
    ctx->pc = 0x1EE868u;
label_1ee868:
    // 0x1ee868: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1ee868u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ee86c:
    // 0x1ee86c: 0x0  nop
    ctx->pc = 0x1ee86cu;
    // NOP
label_1ee870:
    // 0x1ee870: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ee870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ee874:
    // 0x1ee874: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ee878:
    if (ctx->pc == 0x1EE878u) {
        ctx->pc = 0x1EE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE874u;
        // 0x1ee878: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE87Cu;
        goto label_1ee87c;
    }
    ctx->pc = 0x1EE874u;
    {
        const bool branch_taken_0x1ee874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE874u;
        // 0x1ee878: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee874) {
            ctx->pc = 0x1EE89Cu;
            goto label_1ee89c;
        }
    }
    ctx->pc = 0x1EE87Cu;
label_1ee87c:
    // 0x1ee87c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1ee87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1ee880:
    // 0x1ee880: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1ee880u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_1ee884:
    // 0x1ee884: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ee884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ee888:
    // 0x1ee888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ee88c:
    // 0x1ee88c: 0x0  nop
    ctx->pc = 0x1ee88cu;
    // NOP
label_1ee890:
    // 0x1ee890: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ee890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ee894:
    // 0x1ee894: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ee894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ee898:
    // 0x1ee898: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1ee898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1ee89c:
    // 0x1ee89c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x1ee89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee8a0:
    // 0x1ee8a0: 0x10000025  b           . + 4 + (0x25 << 2)
label_1ee8a4:
    if (ctx->pc == 0x1EE8A4u) {
        ctx->pc = 0x1EE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8A0u;
        // 0x1ee8a4: 0xc7a20108  lwc1        $f2, 0x108($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE8A8u;
        goto label_1ee8a8;
    }
    ctx->pc = 0x1EE8A0u;
    {
        const bool branch_taken_0x1ee8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8A0u;
        // 0x1ee8a4: 0xc7a20108  lwc1        $f2, 0x108($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8a0) {
            ctx->pc = 0x1EE938u;
            goto label_1ee938;
        }
    }
    ctx->pc = 0x1EE8A8u;
label_1ee8a8:
    // 0x1ee8a8: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1ee8ac:
    if (ctx->pc == 0x1EE8ACu) {
        ctx->pc = 0x1EE8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8A8u;
        // 0x1ee8ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE8B0u;
        goto label_1ee8b0;
    }
    ctx->pc = 0x1EE8A8u;
    {
        const bool branch_taken_0x1ee8a8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1EE8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8A8u;
        // 0x1ee8ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8a8) {
            ctx->pc = 0x1EE8C4u;
            goto label_1ee8c4;
        }
    }
    ctx->pc = 0x1EE8B0u;
label_1ee8b0:
    // 0x1ee8b0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1ee8b0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ee8b4:
    // 0x1ee8b4: 0x0  nop
    ctx->pc = 0x1ee8b4u;
    // NOP
label_1ee8b8:
    // 0x1ee8b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ee8b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ee8bc:
    // 0x1ee8bc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ee8c0:
    if (ctx->pc == 0x1EE8C0u) {
        ctx->pc = 0x1EE8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8BCu;
        // 0x1ee8c0: 0x4600a842  mul.s       $f1, $f21, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE8C4u;
        goto label_1ee8c4;
    }
    ctx->pc = 0x1EE8BCu;
    {
        const bool branch_taken_0x1ee8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8BCu;
        // 0x1ee8c0: 0x4600a842  mul.s       $f1, $f21, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8bc) {
            ctx->pc = 0x1EE8E4u;
            goto label_1ee8e4;
        }
    }
    ctx->pc = 0x1EE8C4u;
label_1ee8c4:
    // 0x1ee8c4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1ee8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1ee8c8:
    // 0x1ee8c8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1ee8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_1ee8cc:
    // 0x1ee8cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ee8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ee8d0:
    // 0x1ee8d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ee8d4:
    // 0x1ee8d4: 0x0  nop
    ctx->pc = 0x1ee8d4u;
    // NOP
label_1ee8d8:
    // 0x1ee8d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ee8d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ee8dc:
    // 0x1ee8dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ee8dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ee8e0:
    // 0x1ee8e0: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x1ee8e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1ee8e4:
    // 0x1ee8e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ee8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ee8e8:
    // 0x1ee8e8: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x1ee8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee8ec:
    // 0x1ee8ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ee8ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ee8f0:
    // 0x1ee8f0: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1ee8f4:
    if (ctx->pc == 0x1EE8F4u) {
        ctx->pc = 0x1EE8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8F0u;
        // 0x1ee8f4: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE8F8u;
        goto label_1ee8f8;
    }
    ctx->pc = 0x1EE8F0u;
    {
        const bool branch_taken_0x1ee8f0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1EE8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8F0u;
        // 0x1ee8f4: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8f0) {
            ctx->pc = 0x1EE90Cu;
            goto label_1ee90c;
        }
    }
    ctx->pc = 0x1EE8F8u;
label_1ee8f8:
    // 0x1ee8f8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1ee8f8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ee8fc:
    // 0x1ee8fc: 0x0  nop
    ctx->pc = 0x1ee8fcu;
    // NOP
label_1ee900:
    // 0x1ee900: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ee900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ee904:
    // 0x1ee904: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ee908:
    if (ctx->pc == 0x1EE908u) {
        ctx->pc = 0x1EE908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE904u;
        // 0x1ee908: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE90Cu;
        goto label_1ee90c;
    }
    ctx->pc = 0x1EE904u;
    {
        const bool branch_taken_0x1ee904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE904u;
        // 0x1ee908: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee904) {
            ctx->pc = 0x1EE92Cu;
            goto label_1ee92c;
        }
    }
    ctx->pc = 0x1EE90Cu;
label_1ee90c:
    // 0x1ee90c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1ee90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1ee910:
    // 0x1ee910: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1ee910u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_1ee914:
    // 0x1ee914: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ee914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ee918:
    // 0x1ee918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ee91c:
    // 0x1ee91c: 0x0  nop
    ctx->pc = 0x1ee91cu;
    // NOP
label_1ee920:
    // 0x1ee920: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ee920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ee924:
    // 0x1ee924: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ee924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ee928:
    // 0x1ee928: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1ee928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1ee92c:
    // 0x1ee92c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x1ee92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee930:
    // 0x1ee930: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x1ee930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ee934:
    // 0x1ee934: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ee934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ee938:
    // 0x1ee938: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ee938u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ee93c:
    // 0x1ee93c: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1ee93cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1ee940:
    // 0x1ee940: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x1ee940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1ee944:
    // 0x1ee944: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x1ee944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_1ee948:
    // 0x1ee948: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ee948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee94c:
    // 0x1ee94c: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x1ee94cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1ee950:
    // 0x1ee950: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x1ee950u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1ee954:
    // 0x1ee954: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ee954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ee958:
    // 0x1ee958: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1ee958u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_1ee95c:
    // 0x1ee95c: 0xafa6014c  sw          $a2, 0x14C($sp)
    ctx->pc = 0x1ee95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 6));
label_1ee960:
    // 0x1ee960: 0xc046e0e  jal         func_11B838
label_1ee964:
    if (ctx->pc == 0x1EE964u) {
        ctx->pc = 0x1EE964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE960u;
        // 0x1ee964: 0x27de000c  addiu       $fp, $fp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE968u;
        goto label_1ee968;
    }
    ctx->pc = 0x1EE960u;
    SET_GPR_U32(ctx, 31, 0x1EE968u);
    ctx->pc = 0x1EE964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE960u;
    // 0x1ee964: 0x27de000c  addiu       $fp, $fp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B838u, 0x1EE960u, 0x1EE968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE968u;
label_1ee968:
    // 0x1ee968: 0x26f7000c  addiu       $s7, $s7, 0xC
    ctx->pc = 0x1ee968u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
label_1ee96c:
    // 0x1ee96c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee970:
    // 0x1ee970: 0xc046e5c  jal         func_11B970
label_1ee974:
    if (ctx->pc == 0x1EE974u) {
        ctx->pc = 0x1EE974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE970u;
        // 0x1ee974: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE978u;
        goto label_1ee978;
    }
    ctx->pc = 0x1EE970u;
    SET_GPR_U32(ctx, 31, 0x1EE978u);
    ctx->pc = 0x1EE974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE970u;
    // 0x1ee974: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1EE970u, 0x1EE978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE978u;
label_1ee978:
    // 0x1ee978: 0x8ea201dc  lw          $v0, 0x1DC($s5)
    ctx->pc = 0x1ee978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 476)));
label_1ee97c:
    // 0x1ee97c: 0x8fa7014c  lw          $a3, 0x14C($sp)
    ctx->pc = 0x1ee97cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_1ee980:
    // 0x1ee980: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1ee980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ee984:
    // 0x1ee984: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
label_1ee988:
    if (ctx->pc == 0x1EE988u) {
        ctx->pc = 0x1EE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE984u;
        // 0x1ee988: 0x26d6000c  addiu       $s6, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE98Cu;
        goto label_1ee98c;
    }
    ctx->pc = 0x1EE984u;
    {
        const bool branch_taken_0x1ee984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE984u;
        // 0x1ee988: 0x26d6000c  addiu       $s6, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee984) {
            ctx->pc = 0x1EE800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee800;
        }
    }
    ctx->pc = 0x1EE98Cu;
label_1ee98c:
    // 0x1ee98c: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1ee98cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1ee990:
    // 0x1ee990: 0x8eb201dc  lw          $s2, 0x1DC($s5)
    ctx->pc = 0x1ee990u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 476)));
label_1ee994:
    // 0x1ee994: 0xc500f394  lwc1        $f0, -0xC6C($t0)
    ctx->pc = 0x1ee994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294964116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee998:
    // 0x1ee998: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ee998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee99c:
    // 0x1ee99c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1ee99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_1ee9a0:
    // 0x1ee9a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ee9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee9a4:
    // 0x1ee9a4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ee9a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1ee9a8:
    // 0x1ee9a8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1ee9a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ee9ac:
    // 0x1ee9ac: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_1ee9b0:
    if (ctx->pc == 0x1EE9B0u) {
        ctx->pc = 0x1EE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9ACu;
        // 0x1ee9b0: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE9B4u;
        goto label_1ee9b4;
    }
    ctx->pc = 0x1EE9ACu;
    {
        const bool branch_taken_0x1ee9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9ACu;
        // 0x1ee9b0: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9ac) {
            ctx->pc = 0x1EEB74u;
            goto label_1eeb74;
        }
    }
    ctx->pc = 0x1EE9B4u;
label_1ee9b4:
    // 0x1ee9b4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ee9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ee9b8:
    // 0x1ee9b8: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x1ee9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_1ee9bc:
    // 0x1ee9bc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ee9bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ee9c0:
    // 0x1ee9c0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1ee9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1ee9c4:
    // 0x1ee9c4: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1ee9c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1ee9c8:
    // 0x1ee9c8: 0x244300bc  addiu       $v1, $v0, 0xBC
    ctx->pc = 0x1ee9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
label_1ee9cc:
    // 0x1ee9cc: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x1ee9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1ee9d0:
    // 0x1ee9d0: 0x75b821  addu        $s7, $v1, $s5
    ctx->pc = 0x1ee9d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1ee9d4:
    // 0x1ee9d4: 0x95b021  addu        $s6, $a0, $s5
    ctx->pc = 0x1ee9d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_1ee9d8:
    // 0x1ee9d8: 0x244200c4  addiu       $v0, $v0, 0xC4
    ctx->pc = 0x1ee9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
label_1ee9dc:
    // 0x1ee9dc: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x1ee9dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ee9e0:
    // 0x1ee9e0: 0xafb601a4  sw          $s6, 0x1A4($sp)
    ctx->pc = 0x1ee9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 22));
label_1ee9e4:
    // 0x1ee9e4: 0x559821  addu        $s3, $v0, $s5
    ctx->pc = 0x1ee9e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1ee9e8:
    // 0x1ee9e8: 0x280f02d  daddu       $fp, $s4, $zero
    ctx->pc = 0x1ee9e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ee9ec:
    // 0x1ee9ec: 0x0  nop
    ctx->pc = 0x1ee9ecu;
    // NOP
label_1ee9f0:
    // 0x1ee9f0: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1ee9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_1ee9f4:
    // 0x1ee9f4: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_1ee9f8:
    if (ctx->pc == 0x1EE9F8u) {
        ctx->pc = 0x1EE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9F4u;
        // 0x1ee9f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE9FCu;
        goto label_1ee9fc;
    }
    ctx->pc = 0x1EE9F4u;
    {
        const bool branch_taken_0x1ee9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee9f4) {
            ctx->pc = 0x1EE9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE9F4u;
            // 0x1ee9f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEA90u;
            goto label_1eea90;
        }
    }
    ctx->pc = 0x1EE9FCu;
label_1ee9fc:
    // 0x1ee9fc: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_1eea00:
    if (ctx->pc == 0x1EEA00u) {
        ctx->pc = 0x1EEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9FCu;
        // 0x1eea00: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA04u;
        goto label_1eea04;
    }
    ctx->pc = 0x1EE9FCu;
    {
        const bool branch_taken_0x1ee9fc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1EEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9FCu;
        // 0x1eea00: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9fc) {
            ctx->pc = 0x1EEA18u;
            goto label_1eea18;
        }
    }
    ctx->pc = 0x1EEA04u;
label_1eea04:
    // 0x1eea04: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1eea04u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1eea08:
    // 0x1eea08: 0x0  nop
    ctx->pc = 0x1eea08u;
    // NOP
label_1eea0c:
    // 0x1eea0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eea0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1eea10:
    // 0x1eea10: 0x10000009  b           . + 4 + (0x9 << 2)
label_1eea14:
    if (ctx->pc == 0x1EEA14u) {
        ctx->pc = 0x1EEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA10u;
        // 0x1eea14: 0x4600a842  mul.s       $f1, $f21, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA18u;
        goto label_1eea18;
    }
    ctx->pc = 0x1EEA10u;
    {
        const bool branch_taken_0x1eea10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA10u;
        // 0x1eea14: 0x4600a842  mul.s       $f1, $f21, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea10) {
            ctx->pc = 0x1EEA38u;
            goto label_1eea38;
        }
    }
    ctx->pc = 0x1EEA18u;
label_1eea18:
    // 0x1eea18: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1eea18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1eea1c:
    // 0x1eea1c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1eea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_1eea20:
    // 0x1eea20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1eea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1eea24:
    // 0x1eea24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eea24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1eea28:
    // 0x1eea28: 0x0  nop
    ctx->pc = 0x1eea28u;
    // NOP
label_1eea2c:
    // 0x1eea2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eea2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1eea30:
    // 0x1eea30: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1eea30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1eea34:
    // 0x1eea34: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x1eea34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1eea38:
    // 0x1eea38: 0x8fa501a4  lw          $a1, 0x1A4($sp)
    ctx->pc = 0x1eea38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_1eea3c:
    // 0x1eea3c: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x1eea3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eea40:
    // 0x1eea40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1eea40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1eea44:
    // 0x1eea44: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_1eea48:
    if (ctx->pc == 0x1EEA48u) {
        ctx->pc = 0x1EEA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA44u;
        // 0x1eea48: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA4Cu;
        goto label_1eea4c;
    }
    ctx->pc = 0x1EEA44u;
    {
        const bool branch_taken_0x1eea44 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1EEA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA44u;
        // 0x1eea48: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea44) {
            ctx->pc = 0x1EEA60u;
            goto label_1eea60;
        }
    }
    ctx->pc = 0x1EEA4Cu;
label_1eea4c:
    // 0x1eea4c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1eea4cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1eea50:
    // 0x1eea50: 0x0  nop
    ctx->pc = 0x1eea50u;
    // NOP
label_1eea54:
    // 0x1eea54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eea54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1eea58:
    // 0x1eea58: 0x10000009  b           . + 4 + (0x9 << 2)
label_1eea5c:
    if (ctx->pc == 0x1EEA5Cu) {
        ctx->pc = 0x1EEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA58u;
        // 0x1eea5c: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA60u;
        goto label_1eea60;
    }
    ctx->pc = 0x1EEA58u;
    {
        const bool branch_taken_0x1eea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA58u;
        // 0x1eea5c: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea58) {
            ctx->pc = 0x1EEA80u;
            goto label_1eea80;
        }
    }
    ctx->pc = 0x1EEA60u;
label_1eea60:
    // 0x1eea60: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1eea60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1eea64:
    // 0x1eea64: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1eea64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_1eea68:
    // 0x1eea68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1eea68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1eea6c:
    // 0x1eea6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eea6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1eea70:
    // 0x1eea70: 0x0  nop
    ctx->pc = 0x1eea70u;
    // NOP
label_1eea74:
    // 0x1eea74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eea74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1eea78:
    // 0x1eea78: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1eea78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1eea7c:
    // 0x1eea7c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1eea7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1eea80:
    // 0x1eea80: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x1eea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eea84:
    // 0x1eea84: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x1eea84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1eea88:
    // 0x1eea88: 0x10000025  b           . + 4 + (0x25 << 2)
label_1eea8c:
    if (ctx->pc == 0x1EEA8Cu) {
        ctx->pc = 0x1EEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA88u;
        // 0x1eea8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA90u;
        goto label_1eea90;
    }
    ctx->pc = 0x1EEA88u;
    {
        const bool branch_taken_0x1eea88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA88u;
        // 0x1eea8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea88) {
            ctx->pc = 0x1EEB20u;
            goto label_1eeb20;
        }
    }
    ctx->pc = 0x1EEA90u;
label_1eea90:
    // 0x1eea90: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1eea94:
    if (ctx->pc == 0x1EEA94u) {
        ctx->pc = 0x1EEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA90u;
        // 0x1eea94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA98u;
        goto label_1eea98;
    }
    ctx->pc = 0x1EEA90u;
    {
        const bool branch_taken_0x1eea90 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1EEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA90u;
        // 0x1eea94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea90) {
            ctx->pc = 0x1EEAACu;
            goto label_1eeaac;
        }
    }
    ctx->pc = 0x1EEA98u;
label_1eea98:
    // 0x1eea98: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1eea98u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1eea9c:
    // 0x1eea9c: 0x0  nop
    ctx->pc = 0x1eea9cu;
    // NOP
label_1eeaa0:
    // 0x1eeaa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eeaa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1eeaa4:
    // 0x1eeaa4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1eeaa8:
    if (ctx->pc == 0x1EEAA8u) {
        ctx->pc = 0x1EEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEAA4u;
        // 0x1eeaa8: 0x4600a802  mul.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEAACu;
        goto label_1eeaac;
    }
    ctx->pc = 0x1EEAA4u;
    {
        const bool branch_taken_0x1eeaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEAA4u;
        // 0x1eeaa8: 0x4600a802  mul.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeaa4) {
            ctx->pc = 0x1EEACCu;
            goto label_1eeacc;
        }
    }
    ctx->pc = 0x1EEAACu;
label_1eeaac:
    // 0x1eeaac: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1eeaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1eeab0:
    // 0x1eeab0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1eeab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_1eeab4:
    // 0x1eeab4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1eeab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1eeab8:
    // 0x1eeab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eeab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1eeabc:
    // 0x1eeabc: 0x0  nop
    ctx->pc = 0x1eeabcu;
    // NOP
label_1eeac0:
    // 0x1eeac0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eeac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1eeac4:
    // 0x1eeac4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1eeac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1eeac8:
    // 0x1eeac8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1eeac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1eeacc:
    // 0x1eeacc: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x1eeaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eead0:
    // 0x1eead0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1eead0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1eead4:
    // 0x1eead4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1eead4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_1eead8:
    // 0x1eead8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1eead8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1eeadc:
    // 0x1eeadc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1eeae0:
    if (ctx->pc == 0x1EEAE0u) {
        ctx->pc = 0x1EEAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEADCu;
        // 0x1eeae0: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEAE4u;
        goto label_1eeae4;
    }
    ctx->pc = 0x1EEADCu;
    {
        const bool branch_taken_0x1eeadc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1EEAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEADCu;
        // 0x1eeae0: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeadc) {
            ctx->pc = 0x1EEAF8u;
            goto label_1eeaf8;
        }
    }
    ctx->pc = 0x1EEAE4u;
label_1eeae4:
    // 0x1eeae4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1eeae4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1eeae8:
    // 0x1eeae8: 0x0  nop
    ctx->pc = 0x1eeae8u;
    // NOP
label_1eeaec:
    // 0x1eeaec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eeaecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1eeaf0:
    // 0x1eeaf0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1eeaf4:
    if (ctx->pc == 0x1EEAF4u) {
        ctx->pc = 0x1EEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEAF0u;
        // 0x1eeaf4: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEAF8u;
        goto label_1eeaf8;
    }
    ctx->pc = 0x1EEAF0u;
    {
        const bool branch_taken_0x1eeaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEAF0u;
        // 0x1eeaf4: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeaf0) {
            ctx->pc = 0x1EEB18u;
            goto label_1eeb18;
        }
    }
    ctx->pc = 0x1EEAF8u;
label_1eeaf8:
    // 0x1eeaf8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1eeaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1eeafc:
    // 0x1eeafc: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1eeafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_1eeb00:
    // 0x1eeb00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1eeb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1eeb04:
    // 0x1eeb04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eeb04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1eeb08:
    // 0x1eeb08: 0x0  nop
    ctx->pc = 0x1eeb08u;
    // NOP
label_1eeb0c:
    // 0x1eeb0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eeb0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1eeb10:
    // 0x1eeb10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1eeb10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1eeb14:
    // 0x1eeb14: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1eeb14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1eeb18:
    // 0x1eeb18: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x1eeb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eeb1c:
    // 0x1eeb1c: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x1eeb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1eeb20:
    // 0x1eeb20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1eeb20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1eeb24:
    // 0x1eeb24: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1eeb24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1eeb28:
    // 0x1eeb28: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x1eeb28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1eeb2c:
    // 0x1eeb2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1eeb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eeb30:
    // 0x1eeb30: 0xc046e0e  jal         func_11B838
label_1eeb34:
    if (ctx->pc == 0x1EEB34u) {
        ctx->pc = 0x1EEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB30u;
        // 0x1eeb34: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB38u;
        goto label_1eeb38;
    }
    ctx->pc = 0x1EEB30u;
    SET_GPR_U32(ctx, 31, 0x1EEB38u);
    ctx->pc = 0x1EEB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEB30u;
    // 0x1eeb34: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B838u, 0x1EEB30u, 0x1EEB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB38u;
label_1eeb38:
    // 0x1eeb38: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1eeb38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_1eeb3c:
    // 0x1eeb3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eeb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eeb40:
    // 0x1eeb40: 0xc046e5c  jal         func_11B970
label_1eeb44:
    if (ctx->pc == 0x1EEB44u) {
        ctx->pc = 0x1EEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB40u;
        // 0x1eeb44: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB48u;
        goto label_1eeb48;
    }
    ctx->pc = 0x1EEB40u;
    SET_GPR_U32(ctx, 31, 0x1EEB48u);
    ctx->pc = 0x1EEB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEB40u;
    // 0x1eeb44: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1EEB40u, 0x1EEB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB48u;
label_1eeb48:
    // 0x1eeb48: 0x26f7000c  addiu       $s7, $s7, 0xC
    ctx->pc = 0x1eeb48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
label_1eeb4c:
    // 0x1eeb4c: 0x8ea201dc  lw          $v0, 0x1DC($s5)
    ctx->pc = 0x1eeb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 476)));
label_1eeb50:
    // 0x1eeb50: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x1eeb50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
label_1eeb54:
    // 0x1eeb54: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x1eeb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_1eeb58:
    // 0x1eeb58: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x1eeb58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1eeb5c:
    // 0x1eeb5c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1eeb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1eeb60:
    // 0x1eeb60: 0x27de000c  addiu       $fp, $fp, 0xC
    ctx->pc = 0x1eeb60u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
label_1eeb64:
    // 0x1eeb64: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1eeb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1eeb68:
    // 0x1eeb68: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1eeb68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1eeb6c:
    // 0x1eeb6c: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
label_1eeb70:
    if (ctx->pc == 0x1EEB70u) {
        ctx->pc = 0x1EEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB6Cu;
        // 0x1eeb70: 0xafa301a4  sw          $v1, 0x1A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEB74u;
        goto label_1eeb74;
    }
    ctx->pc = 0x1EEB6Cu;
    {
        const bool branch_taken_0x1eeb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB6Cu;
        // 0x1eeb70: 0xafa301a4  sw          $v1, 0x1A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb6c) {
            ctx->pc = 0x1EE9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee9f0;
        }
    }
    ctx->pc = 0x1EEB74u;
label_1eeb74:
    // 0x1eeb74: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x1eeb74u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
label_1eeb78:
    // 0x1eeb78: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1eeb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1eeb7c:
    // 0x1eeb7c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1eeb7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1eeb80:
    // 0x1eeb80: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1eeb80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1eeb84:
    // 0x1eeb84: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1eeb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_1eeb88:
    // 0x1eeb88: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1eeb88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_1eeb8c:
    // 0x1eeb8c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1eeb8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1eeb90:
    // 0x1eeb90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1eeb90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eeb94:
    // 0x1eeb94: 0x8fb70168  lw          $s7, 0x168($sp)
    ctx->pc = 0x1eeb94u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_1eeb98:
    // 0x1eeb98: 0x37deffff  ori         $fp, $fp, 0xFFFF
    ctx->pc = 0x1eeb98u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
label_1eeb9c:
    // 0x1eeb9c: 0x8fb60164  lw          $s6, 0x164($sp)
    ctx->pc = 0x1eeb9cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_1eeba0:
    // 0x1eeba0: 0x8fb4016c  lw          $s4, 0x16C($sp)
    ctx->pc = 0x1eeba0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_1eeba4:
    // 0x1eeba4: 0x8fb30170  lw          $s3, 0x170($sp)
    ctx->pc = 0x1eeba4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_1eeba8:
    // 0x1eeba8: 0x8fb2017c  lw          $s2, 0x17C($sp)
    ctx->pc = 0x1eeba8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_1eebac:
    // 0x1eebac: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1eebacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1eebb0:
    // 0x1eebb0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1eebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1eebb4:
    // 0x1eebb4: 0x8c85b8b8  lw          $a1, -0x4748($a0)
    ctx->pc = 0x1eebb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949048)));
label_1eebb8:
    // 0x1eebb8: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x1eebb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1eebbc:
    // 0x1eebbc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1eebbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1eebc0:
    // 0x1eebc0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1eebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eebc4:
    // 0x1eebc4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1eebc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1eebc8:
    // 0x1eebc8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1eebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1eebcc:
    // 0x1eebcc: 0x40f809  jalr        $v0
label_1eebd0:
    if (ctx->pc == 0x1EEBD0u) {
        ctx->pc = 0x1EEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEBCCu;
        // 0x1eebd0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEBD4u;
        goto label_1eebd4;
    }
    ctx->pc = 0x1EEBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EEBD4u);
        ctx->pc = 0x1EEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEBCCu;
        // 0x1eebd0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEBCCu, 0x1EEBD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEBD4u;
label_1eebd4:
    // 0x1eebd4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1eebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1eebd8:
    // 0x1eebd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1eebd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eebdc:
    // 0x1eebdc: 0xae9e0000  sw          $fp, 0x0($s4)
    ctx->pc = 0x1eebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 30));
label_1eebe0:
    // 0x1eebe0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1eebe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1eebe4:
    // 0x1eebe4: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1eebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_1eebe8:
    // 0x1eebe8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1eebe8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_1eebec:
    // 0x1eebec: 0xc047e6c  jal         func_11F9B0
label_1eebf0:
    if (ctx->pc == 0x1EEBF0u) {
        ctx->pc = 0x1EEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEBECu;
        // 0x1eebf0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEBF4u;
        goto label_1eebf4;
    }
    ctx->pc = 0x1EEBECu;
    SET_GPR_U32(ctx, 31, 0x1EEBF4u);
    ctx->pc = 0x1EEBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEBECu;
    // 0x1eebf0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1EEBECu, 0x1EEBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEBF4u;
label_1eebf4:
    // 0x1eebf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1eebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eebf8:
    // 0x1eebf8: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x1eebf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_1eebfc:
    // 0x1eebfc: 0x8c650224  lw          $a1, 0x224($v1)
    ctx->pc = 0x1eebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_1eec00:
    // 0x1eec00: 0xa0f809  jalr        $a1
label_1eec04:
    if (ctx->pc == 0x1EEC04u) {
        ctx->pc = 0x1EEC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC00u;
        // 0x1eec04: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEC08u;
        goto label_1eec08;
    }
    ctx->pc = 0x1EEC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1EEC08u);
        ctx->pc = 0x1EEC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC00u;
        // 0x1eec04: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEC00u, 0x1EEC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEC08u;
label_1eec08:
    // 0x1eec08: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1eec08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1eec0c:
    // 0x1eec0c: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1eec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1eec10:
    // 0x1eec10: 0xc0cd7d2  jal         func_335F48
label_1eec14:
    if (ctx->pc == 0x1EEC14u) {
        ctx->pc = 0x1EEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC10u;
        // 0x1eec14: 0x7fa30110  sq          $v1, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEC18u;
        goto label_1eec18;
    }
    ctx->pc = 0x1EEC10u;
    SET_GPR_U32(ctx, 31, 0x1EEC18u);
    ctx->pc = 0x1EEC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEC10u;
    // 0x1eec14: 0x7fa30110  sq          $v1, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x1EEC10u, 0x1EEC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEC18u;
label_1eec18:
    // 0x1eec18: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x1eec18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_1eec1c:
    // 0x1eec1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1eec1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eec20:
    // 0x1eec20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1eec20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eec24:
    // 0x1eec24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1eec24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1eec28:
    // 0x1eec28: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1eec28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1eec2c:
    // 0x1eec2c: 0xc07bd24  jal         func_1EF490
label_1eec30:
    if (ctx->pc == 0x1EEC30u) {
        ctx->pc = 0x1EEC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC2Cu;
        // 0x1eec30: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEC34u;
        goto label_1eec34;
    }
    ctx->pc = 0x1EEC2Cu;
    SET_GPR_U32(ctx, 31, 0x1EEC34u);
    ctx->pc = 0x1EEC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEC2Cu;
    // 0x1eec30: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF490u, 0x1EEC2Cu, 0x1EEC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEC34u;
label_1eec34:
    // 0x1eec34: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x1eec34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_1eec38:
    // 0x1eec38: 0x8ea3008c  lw          $v1, 0x8C($s5)
    ctx->pc = 0x1eec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_1eec3c:
    // 0x1eec3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1eec3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eec40:
    // 0x1eec40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1eec40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1eec44:
    // 0x1eec44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1eec44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1eec48:
    // 0x1eec48: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1eec48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1eec4c:
    // 0x1eec4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1eec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1eec50:
    // 0x1eec50: 0xc07bc54  jal         func_1EF150
label_1eec54:
    if (ctx->pc == 0x1EEC54u) {
        ctx->pc = 0x1EEC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC50u;
        // 0x1eec54: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEC58u;
        goto label_1eec58;
    }
    ctx->pc = 0x1EEC50u;
    SET_GPR_U32(ctx, 31, 0x1EEC58u);
    ctx->pc = 0x1EEC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEC50u;
    // 0x1eec54: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF150u, 0x1EEC50u, 0x1EEC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEC58u;
label_1eec58:
    // 0x1eec58: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1eec58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1eec5c:
    // 0x1eec5c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_1eec60:
    if (ctx->pc == 0x1EEC60u) {
        ctx->pc = 0x1EEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC5Cu;
        // 0x1eec60: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEC64u;
        goto label_1eec64;
    }
    ctx->pc = 0x1EEC5Cu;
    {
        const bool branch_taken_0x1eec5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC5Cu;
        // 0x1eec60: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec5c) {
            ctx->pc = 0x1EEBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eebb0;
        }
    }
    ctx->pc = 0x1EEC64u;
label_1eec64:
    // 0x1eec64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eec68:
    // 0x1eec68: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x1eec68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
label_1eec6c:
    // 0x1eec6c: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1eec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_1eec70:
    // 0x1eec70: 0x7bb00240  lq          $s0, 0x240($sp)
    ctx->pc = 0x1eec70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_1eec74:
    // 0x1eec74: 0x7bb10230  lq          $s1, 0x230($sp)
    ctx->pc = 0x1eec74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_1eec78:
    // 0x1eec78: 0x7bb20220  lq          $s2, 0x220($sp)
    ctx->pc = 0x1eec78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_1eec7c:
    // 0x1eec7c: 0x7bb30210  lq          $s3, 0x210($sp)
    ctx->pc = 0x1eec7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_1eec80:
    // 0x1eec80: 0x7bb40200  lq          $s4, 0x200($sp)
    ctx->pc = 0x1eec80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_1eec84:
    // 0x1eec84: 0x7bb501f0  lq          $s5, 0x1F0($sp)
    ctx->pc = 0x1eec84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_1eec88:
    // 0x1eec88: 0x7bb601e0  lq          $s6, 0x1E0($sp)
    ctx->pc = 0x1eec88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_1eec8c:
    // 0x1eec8c: 0x7bb701d0  lq          $s7, 0x1D0($sp)
    ctx->pc = 0x1eec8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_1eec90:
    // 0x1eec90: 0x7bbe01c0  lq          $fp, 0x1C0($sp)
    ctx->pc = 0x1eec90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_1eec94:
    // 0x1eec94: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x1eec94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_1eec98:
    // 0x1eec98: 0xc7ba0280  lwc1        $f26, 0x280($sp)
    ctx->pc = 0x1eec98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_1eec9c:
    // 0x1eec9c: 0xc7b90278  lwc1        $f25, 0x278($sp)
    ctx->pc = 0x1eec9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1eeca0:
    // 0x1eeca0: 0xc7b80270  lwc1        $f24, 0x270($sp)
    ctx->pc = 0x1eeca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1eeca4:
    // 0x1eeca4: 0xc7b70268  lwc1        $f23, 0x268($sp)
    ctx->pc = 0x1eeca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1eeca8:
    // 0x1eeca8: 0xc7b60260  lwc1        $f22, 0x260($sp)
    ctx->pc = 0x1eeca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1eecac:
    // 0x1eecac: 0xc7b50258  lwc1        $f21, 0x258($sp)
    ctx->pc = 0x1eecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1eecb0:
    // 0x1eecb0: 0xc7b40250  lwc1        $f20, 0x250($sp)
    ctx->pc = 0x1eecb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1eecb4:
    // 0x1eecb4: 0x3e00008  jr          $ra
label_1eecb8:
    if (ctx->pc == 0x1EECB8u) {
        ctx->pc = 0x1EECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECB4u;
        // 0x1eecb8: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EECBCu;
        goto label_1eecbc;
    }
    ctx->pc = 0x1EECB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECB4u;
        // 0x1eecb8: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EECB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EECBCu;
label_1eecbc:
    // 0x1eecbc: 0x0  nop
    ctx->pc = 0x1eecbcu;
    // NOP
    ctx->pc = 0x1eecc0u;
}
