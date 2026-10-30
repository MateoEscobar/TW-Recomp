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

// Function: sub_001CB798
// Address: 0x1cb798 - 0x1cc1a0
void sub_001CB798_0x1cb798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB798_0x1cb798");
#endif

    switch (ctx->pc) {
        case 0x1cb798u: goto label_1cb798;
        case 0x1cb79cu: goto label_1cb79c;
        case 0x1cb7a0u: goto label_1cb7a0;
        case 0x1cb7a4u: goto label_1cb7a4;
        case 0x1cb7a8u: goto label_1cb7a8;
        case 0x1cb7acu: goto label_1cb7ac;
        case 0x1cb7b0u: goto label_1cb7b0;
        case 0x1cb7b4u: goto label_1cb7b4;
        case 0x1cb7b8u: goto label_1cb7b8;
        case 0x1cb7bcu: goto label_1cb7bc;
        case 0x1cb7c0u: goto label_1cb7c0;
        case 0x1cb7c4u: goto label_1cb7c4;
        case 0x1cb7c8u: goto label_1cb7c8;
        case 0x1cb7ccu: goto label_1cb7cc;
        case 0x1cb7d0u: goto label_1cb7d0;
        case 0x1cb7d4u: goto label_1cb7d4;
        case 0x1cb7d8u: goto label_1cb7d8;
        case 0x1cb7dcu: goto label_1cb7dc;
        case 0x1cb7e0u: goto label_1cb7e0;
        case 0x1cb7e4u: goto label_1cb7e4;
        case 0x1cb7e8u: goto label_1cb7e8;
        case 0x1cb7ecu: goto label_1cb7ec;
        case 0x1cb7f0u: goto label_1cb7f0;
        case 0x1cb7f4u: goto label_1cb7f4;
        case 0x1cb7f8u: goto label_1cb7f8;
        case 0x1cb7fcu: goto label_1cb7fc;
        case 0x1cb800u: goto label_1cb800;
        case 0x1cb804u: goto label_1cb804;
        case 0x1cb808u: goto label_1cb808;
        case 0x1cb80cu: goto label_1cb80c;
        case 0x1cb810u: goto label_1cb810;
        case 0x1cb814u: goto label_1cb814;
        case 0x1cb818u: goto label_1cb818;
        case 0x1cb81cu: goto label_1cb81c;
        case 0x1cb820u: goto label_1cb820;
        case 0x1cb824u: goto label_1cb824;
        case 0x1cb828u: goto label_1cb828;
        case 0x1cb82cu: goto label_1cb82c;
        case 0x1cb830u: goto label_1cb830;
        case 0x1cb834u: goto label_1cb834;
        case 0x1cb838u: goto label_1cb838;
        case 0x1cb83cu: goto label_1cb83c;
        case 0x1cb840u: goto label_1cb840;
        case 0x1cb844u: goto label_1cb844;
        case 0x1cb848u: goto label_1cb848;
        case 0x1cb84cu: goto label_1cb84c;
        case 0x1cb850u: goto label_1cb850;
        case 0x1cb854u: goto label_1cb854;
        case 0x1cb858u: goto label_1cb858;
        case 0x1cb85cu: goto label_1cb85c;
        case 0x1cb860u: goto label_1cb860;
        case 0x1cb864u: goto label_1cb864;
        case 0x1cb868u: goto label_1cb868;
        case 0x1cb86cu: goto label_1cb86c;
        case 0x1cb870u: goto label_1cb870;
        case 0x1cb874u: goto label_1cb874;
        case 0x1cb878u: goto label_1cb878;
        case 0x1cb87cu: goto label_1cb87c;
        case 0x1cb880u: goto label_1cb880;
        case 0x1cb884u: goto label_1cb884;
        case 0x1cb888u: goto label_1cb888;
        case 0x1cb88cu: goto label_1cb88c;
        case 0x1cb890u: goto label_1cb890;
        case 0x1cb894u: goto label_1cb894;
        case 0x1cb898u: goto label_1cb898;
        case 0x1cb89cu: goto label_1cb89c;
        case 0x1cb8a0u: goto label_1cb8a0;
        case 0x1cb8a4u: goto label_1cb8a4;
        case 0x1cb8a8u: goto label_1cb8a8;
        case 0x1cb8acu: goto label_1cb8ac;
        case 0x1cb8b0u: goto label_1cb8b0;
        case 0x1cb8b4u: goto label_1cb8b4;
        case 0x1cb8b8u: goto label_1cb8b8;
        case 0x1cb8bcu: goto label_1cb8bc;
        case 0x1cb8c0u: goto label_1cb8c0;
        case 0x1cb8c4u: goto label_1cb8c4;
        case 0x1cb8c8u: goto label_1cb8c8;
        case 0x1cb8ccu: goto label_1cb8cc;
        case 0x1cb8d0u: goto label_1cb8d0;
        case 0x1cb8d4u: goto label_1cb8d4;
        case 0x1cb8d8u: goto label_1cb8d8;
        case 0x1cb8dcu: goto label_1cb8dc;
        case 0x1cb8e0u: goto label_1cb8e0;
        case 0x1cb8e4u: goto label_1cb8e4;
        case 0x1cb8e8u: goto label_1cb8e8;
        case 0x1cb8ecu: goto label_1cb8ec;
        case 0x1cb8f0u: goto label_1cb8f0;
        case 0x1cb8f4u: goto label_1cb8f4;
        case 0x1cb8f8u: goto label_1cb8f8;
        case 0x1cb8fcu: goto label_1cb8fc;
        case 0x1cb900u: goto label_1cb900;
        case 0x1cb904u: goto label_1cb904;
        case 0x1cb908u: goto label_1cb908;
        case 0x1cb90cu: goto label_1cb90c;
        case 0x1cb910u: goto label_1cb910;
        case 0x1cb914u: goto label_1cb914;
        case 0x1cb918u: goto label_1cb918;
        case 0x1cb91cu: goto label_1cb91c;
        case 0x1cb920u: goto label_1cb920;
        case 0x1cb924u: goto label_1cb924;
        case 0x1cb928u: goto label_1cb928;
        case 0x1cb92cu: goto label_1cb92c;
        case 0x1cb930u: goto label_1cb930;
        case 0x1cb934u: goto label_1cb934;
        case 0x1cb938u: goto label_1cb938;
        case 0x1cb93cu: goto label_1cb93c;
        case 0x1cb940u: goto label_1cb940;
        case 0x1cb944u: goto label_1cb944;
        case 0x1cb948u: goto label_1cb948;
        case 0x1cb94cu: goto label_1cb94c;
        case 0x1cb950u: goto label_1cb950;
        case 0x1cb954u: goto label_1cb954;
        case 0x1cb958u: goto label_1cb958;
        case 0x1cb95cu: goto label_1cb95c;
        case 0x1cb960u: goto label_1cb960;
        case 0x1cb964u: goto label_1cb964;
        case 0x1cb968u: goto label_1cb968;
        case 0x1cb96cu: goto label_1cb96c;
        case 0x1cb970u: goto label_1cb970;
        case 0x1cb974u: goto label_1cb974;
        case 0x1cb978u: goto label_1cb978;
        case 0x1cb97cu: goto label_1cb97c;
        case 0x1cb980u: goto label_1cb980;
        case 0x1cb984u: goto label_1cb984;
        case 0x1cb988u: goto label_1cb988;
        case 0x1cb98cu: goto label_1cb98c;
        case 0x1cb990u: goto label_1cb990;
        case 0x1cb994u: goto label_1cb994;
        case 0x1cb998u: goto label_1cb998;
        case 0x1cb99cu: goto label_1cb99c;
        case 0x1cb9a0u: goto label_1cb9a0;
        case 0x1cb9a4u: goto label_1cb9a4;
        case 0x1cb9a8u: goto label_1cb9a8;
        case 0x1cb9acu: goto label_1cb9ac;
        case 0x1cb9b0u: goto label_1cb9b0;
        case 0x1cb9b4u: goto label_1cb9b4;
        case 0x1cb9b8u: goto label_1cb9b8;
        case 0x1cb9bcu: goto label_1cb9bc;
        case 0x1cb9c0u: goto label_1cb9c0;
        case 0x1cb9c4u: goto label_1cb9c4;
        case 0x1cb9c8u: goto label_1cb9c8;
        case 0x1cb9ccu: goto label_1cb9cc;
        case 0x1cb9d0u: goto label_1cb9d0;
        case 0x1cb9d4u: goto label_1cb9d4;
        case 0x1cb9d8u: goto label_1cb9d8;
        case 0x1cb9dcu: goto label_1cb9dc;
        case 0x1cb9e0u: goto label_1cb9e0;
        case 0x1cb9e4u: goto label_1cb9e4;
        case 0x1cb9e8u: goto label_1cb9e8;
        case 0x1cb9ecu: goto label_1cb9ec;
        case 0x1cb9f0u: goto label_1cb9f0;
        case 0x1cb9f4u: goto label_1cb9f4;
        case 0x1cb9f8u: goto label_1cb9f8;
        case 0x1cb9fcu: goto label_1cb9fc;
        case 0x1cba00u: goto label_1cba00;
        case 0x1cba04u: goto label_1cba04;
        case 0x1cba08u: goto label_1cba08;
        case 0x1cba0cu: goto label_1cba0c;
        case 0x1cba10u: goto label_1cba10;
        case 0x1cba14u: goto label_1cba14;
        case 0x1cba18u: goto label_1cba18;
        case 0x1cba1cu: goto label_1cba1c;
        case 0x1cba20u: goto label_1cba20;
        case 0x1cba24u: goto label_1cba24;
        case 0x1cba28u: goto label_1cba28;
        case 0x1cba2cu: goto label_1cba2c;
        case 0x1cba30u: goto label_1cba30;
        case 0x1cba34u: goto label_1cba34;
        case 0x1cba38u: goto label_1cba38;
        case 0x1cba3cu: goto label_1cba3c;
        case 0x1cba40u: goto label_1cba40;
        case 0x1cba44u: goto label_1cba44;
        case 0x1cba48u: goto label_1cba48;
        case 0x1cba4cu: goto label_1cba4c;
        case 0x1cba50u: goto label_1cba50;
        case 0x1cba54u: goto label_1cba54;
        case 0x1cba58u: goto label_1cba58;
        case 0x1cba5cu: goto label_1cba5c;
        case 0x1cba60u: goto label_1cba60;
        case 0x1cba64u: goto label_1cba64;
        case 0x1cba68u: goto label_1cba68;
        case 0x1cba6cu: goto label_1cba6c;
        case 0x1cba70u: goto label_1cba70;
        case 0x1cba74u: goto label_1cba74;
        case 0x1cba78u: goto label_1cba78;
        case 0x1cba7cu: goto label_1cba7c;
        case 0x1cba80u: goto label_1cba80;
        case 0x1cba84u: goto label_1cba84;
        case 0x1cba88u: goto label_1cba88;
        case 0x1cba8cu: goto label_1cba8c;
        case 0x1cba90u: goto label_1cba90;
        case 0x1cba94u: goto label_1cba94;
        case 0x1cba98u: goto label_1cba98;
        case 0x1cba9cu: goto label_1cba9c;
        case 0x1cbaa0u: goto label_1cbaa0;
        case 0x1cbaa4u: goto label_1cbaa4;
        case 0x1cbaa8u: goto label_1cbaa8;
        case 0x1cbaacu: goto label_1cbaac;
        case 0x1cbab0u: goto label_1cbab0;
        case 0x1cbab4u: goto label_1cbab4;
        case 0x1cbab8u: goto label_1cbab8;
        case 0x1cbabcu: goto label_1cbabc;
        case 0x1cbac0u: goto label_1cbac0;
        case 0x1cbac4u: goto label_1cbac4;
        case 0x1cbac8u: goto label_1cbac8;
        case 0x1cbaccu: goto label_1cbacc;
        case 0x1cbad0u: goto label_1cbad0;
        case 0x1cbad4u: goto label_1cbad4;
        case 0x1cbad8u: goto label_1cbad8;
        case 0x1cbadcu: goto label_1cbadc;
        case 0x1cbae0u: goto label_1cbae0;
        case 0x1cbae4u: goto label_1cbae4;
        case 0x1cbae8u: goto label_1cbae8;
        case 0x1cbaecu: goto label_1cbaec;
        case 0x1cbaf0u: goto label_1cbaf0;
        case 0x1cbaf4u: goto label_1cbaf4;
        case 0x1cbaf8u: goto label_1cbaf8;
        case 0x1cbafcu: goto label_1cbafc;
        case 0x1cbb00u: goto label_1cbb00;
        case 0x1cbb04u: goto label_1cbb04;
        case 0x1cbb08u: goto label_1cbb08;
        case 0x1cbb0cu: goto label_1cbb0c;
        case 0x1cbb10u: goto label_1cbb10;
        case 0x1cbb14u: goto label_1cbb14;
        case 0x1cbb18u: goto label_1cbb18;
        case 0x1cbb1cu: goto label_1cbb1c;
        case 0x1cbb20u: goto label_1cbb20;
        case 0x1cbb24u: goto label_1cbb24;
        case 0x1cbb28u: goto label_1cbb28;
        case 0x1cbb2cu: goto label_1cbb2c;
        case 0x1cbb30u: goto label_1cbb30;
        case 0x1cbb34u: goto label_1cbb34;
        case 0x1cbb38u: goto label_1cbb38;
        case 0x1cbb3cu: goto label_1cbb3c;
        case 0x1cbb40u: goto label_1cbb40;
        case 0x1cbb44u: goto label_1cbb44;
        case 0x1cbb48u: goto label_1cbb48;
        case 0x1cbb4cu: goto label_1cbb4c;
        case 0x1cbb50u: goto label_1cbb50;
        case 0x1cbb54u: goto label_1cbb54;
        case 0x1cbb58u: goto label_1cbb58;
        case 0x1cbb5cu: goto label_1cbb5c;
        case 0x1cbb60u: goto label_1cbb60;
        case 0x1cbb64u: goto label_1cbb64;
        case 0x1cbb68u: goto label_1cbb68;
        case 0x1cbb6cu: goto label_1cbb6c;
        case 0x1cbb70u: goto label_1cbb70;
        case 0x1cbb74u: goto label_1cbb74;
        case 0x1cbb78u: goto label_1cbb78;
        case 0x1cbb7cu: goto label_1cbb7c;
        case 0x1cbb80u: goto label_1cbb80;
        case 0x1cbb84u: goto label_1cbb84;
        case 0x1cbb88u: goto label_1cbb88;
        case 0x1cbb8cu: goto label_1cbb8c;
        case 0x1cbb90u: goto label_1cbb90;
        case 0x1cbb94u: goto label_1cbb94;
        case 0x1cbb98u: goto label_1cbb98;
        case 0x1cbb9cu: goto label_1cbb9c;
        case 0x1cbba0u: goto label_1cbba0;
        case 0x1cbba4u: goto label_1cbba4;
        case 0x1cbba8u: goto label_1cbba8;
        case 0x1cbbacu: goto label_1cbbac;
        case 0x1cbbb0u: goto label_1cbbb0;
        case 0x1cbbb4u: goto label_1cbbb4;
        case 0x1cbbb8u: goto label_1cbbb8;
        case 0x1cbbbcu: goto label_1cbbbc;
        case 0x1cbbc0u: goto label_1cbbc0;
        case 0x1cbbc4u: goto label_1cbbc4;
        case 0x1cbbc8u: goto label_1cbbc8;
        case 0x1cbbccu: goto label_1cbbcc;
        case 0x1cbbd0u: goto label_1cbbd0;
        case 0x1cbbd4u: goto label_1cbbd4;
        case 0x1cbbd8u: goto label_1cbbd8;
        case 0x1cbbdcu: goto label_1cbbdc;
        case 0x1cbbe0u: goto label_1cbbe0;
        case 0x1cbbe4u: goto label_1cbbe4;
        case 0x1cbbe8u: goto label_1cbbe8;
        case 0x1cbbecu: goto label_1cbbec;
        case 0x1cbbf0u: goto label_1cbbf0;
        case 0x1cbbf4u: goto label_1cbbf4;
        case 0x1cbbf8u: goto label_1cbbf8;
        case 0x1cbbfcu: goto label_1cbbfc;
        case 0x1cbc00u: goto label_1cbc00;
        case 0x1cbc04u: goto label_1cbc04;
        case 0x1cbc08u: goto label_1cbc08;
        case 0x1cbc0cu: goto label_1cbc0c;
        case 0x1cbc10u: goto label_1cbc10;
        case 0x1cbc14u: goto label_1cbc14;
        case 0x1cbc18u: goto label_1cbc18;
        case 0x1cbc1cu: goto label_1cbc1c;
        case 0x1cbc20u: goto label_1cbc20;
        case 0x1cbc24u: goto label_1cbc24;
        case 0x1cbc28u: goto label_1cbc28;
        case 0x1cbc2cu: goto label_1cbc2c;
        case 0x1cbc30u: goto label_1cbc30;
        case 0x1cbc34u: goto label_1cbc34;
        case 0x1cbc38u: goto label_1cbc38;
        case 0x1cbc3cu: goto label_1cbc3c;
        case 0x1cbc40u: goto label_1cbc40;
        case 0x1cbc44u: goto label_1cbc44;
        case 0x1cbc48u: goto label_1cbc48;
        case 0x1cbc4cu: goto label_1cbc4c;
        case 0x1cbc50u: goto label_1cbc50;
        case 0x1cbc54u: goto label_1cbc54;
        case 0x1cbc58u: goto label_1cbc58;
        case 0x1cbc5cu: goto label_1cbc5c;
        case 0x1cbc60u: goto label_1cbc60;
        case 0x1cbc64u: goto label_1cbc64;
        case 0x1cbc68u: goto label_1cbc68;
        case 0x1cbc6cu: goto label_1cbc6c;
        case 0x1cbc70u: goto label_1cbc70;
        case 0x1cbc74u: goto label_1cbc74;
        case 0x1cbc78u: goto label_1cbc78;
        case 0x1cbc7cu: goto label_1cbc7c;
        case 0x1cbc80u: goto label_1cbc80;
        case 0x1cbc84u: goto label_1cbc84;
        case 0x1cbc88u: goto label_1cbc88;
        case 0x1cbc8cu: goto label_1cbc8c;
        case 0x1cbc90u: goto label_1cbc90;
        case 0x1cbc94u: goto label_1cbc94;
        case 0x1cbc98u: goto label_1cbc98;
        case 0x1cbc9cu: goto label_1cbc9c;
        case 0x1cbca0u: goto label_1cbca0;
        case 0x1cbca4u: goto label_1cbca4;
        case 0x1cbca8u: goto label_1cbca8;
        case 0x1cbcacu: goto label_1cbcac;
        case 0x1cbcb0u: goto label_1cbcb0;
        case 0x1cbcb4u: goto label_1cbcb4;
        case 0x1cbcb8u: goto label_1cbcb8;
        case 0x1cbcbcu: goto label_1cbcbc;
        case 0x1cbcc0u: goto label_1cbcc0;
        case 0x1cbcc4u: goto label_1cbcc4;
        case 0x1cbcc8u: goto label_1cbcc8;
        case 0x1cbcccu: goto label_1cbccc;
        case 0x1cbcd0u: goto label_1cbcd0;
        case 0x1cbcd4u: goto label_1cbcd4;
        case 0x1cbcd8u: goto label_1cbcd8;
        case 0x1cbcdcu: goto label_1cbcdc;
        case 0x1cbce0u: goto label_1cbce0;
        case 0x1cbce4u: goto label_1cbce4;
        case 0x1cbce8u: goto label_1cbce8;
        case 0x1cbcecu: goto label_1cbcec;
        case 0x1cbcf0u: goto label_1cbcf0;
        case 0x1cbcf4u: goto label_1cbcf4;
        case 0x1cbcf8u: goto label_1cbcf8;
        case 0x1cbcfcu: goto label_1cbcfc;
        case 0x1cbd00u: goto label_1cbd00;
        case 0x1cbd04u: goto label_1cbd04;
        case 0x1cbd08u: goto label_1cbd08;
        case 0x1cbd0cu: goto label_1cbd0c;
        case 0x1cbd10u: goto label_1cbd10;
        case 0x1cbd14u: goto label_1cbd14;
        case 0x1cbd18u: goto label_1cbd18;
        case 0x1cbd1cu: goto label_1cbd1c;
        case 0x1cbd20u: goto label_1cbd20;
        case 0x1cbd24u: goto label_1cbd24;
        case 0x1cbd28u: goto label_1cbd28;
        case 0x1cbd2cu: goto label_1cbd2c;
        case 0x1cbd30u: goto label_1cbd30;
        case 0x1cbd34u: goto label_1cbd34;
        case 0x1cbd38u: goto label_1cbd38;
        case 0x1cbd3cu: goto label_1cbd3c;
        case 0x1cbd40u: goto label_1cbd40;
        case 0x1cbd44u: goto label_1cbd44;
        case 0x1cbd48u: goto label_1cbd48;
        case 0x1cbd4cu: goto label_1cbd4c;
        case 0x1cbd50u: goto label_1cbd50;
        case 0x1cbd54u: goto label_1cbd54;
        case 0x1cbd58u: goto label_1cbd58;
        case 0x1cbd5cu: goto label_1cbd5c;
        case 0x1cbd60u: goto label_1cbd60;
        case 0x1cbd64u: goto label_1cbd64;
        case 0x1cbd68u: goto label_1cbd68;
        case 0x1cbd6cu: goto label_1cbd6c;
        case 0x1cbd70u: goto label_1cbd70;
        case 0x1cbd74u: goto label_1cbd74;
        case 0x1cbd78u: goto label_1cbd78;
        case 0x1cbd7cu: goto label_1cbd7c;
        case 0x1cbd80u: goto label_1cbd80;
        case 0x1cbd84u: goto label_1cbd84;
        case 0x1cbd88u: goto label_1cbd88;
        case 0x1cbd8cu: goto label_1cbd8c;
        case 0x1cbd90u: goto label_1cbd90;
        case 0x1cbd94u: goto label_1cbd94;
        case 0x1cbd98u: goto label_1cbd98;
        case 0x1cbd9cu: goto label_1cbd9c;
        case 0x1cbda0u: goto label_1cbda0;
        case 0x1cbda4u: goto label_1cbda4;
        case 0x1cbda8u: goto label_1cbda8;
        case 0x1cbdacu: goto label_1cbdac;
        case 0x1cbdb0u: goto label_1cbdb0;
        case 0x1cbdb4u: goto label_1cbdb4;
        case 0x1cbdb8u: goto label_1cbdb8;
        case 0x1cbdbcu: goto label_1cbdbc;
        case 0x1cbdc0u: goto label_1cbdc0;
        case 0x1cbdc4u: goto label_1cbdc4;
        case 0x1cbdc8u: goto label_1cbdc8;
        case 0x1cbdccu: goto label_1cbdcc;
        case 0x1cbdd0u: goto label_1cbdd0;
        case 0x1cbdd4u: goto label_1cbdd4;
        case 0x1cbdd8u: goto label_1cbdd8;
        case 0x1cbddcu: goto label_1cbddc;
        case 0x1cbde0u: goto label_1cbde0;
        case 0x1cbde4u: goto label_1cbde4;
        case 0x1cbde8u: goto label_1cbde8;
        case 0x1cbdecu: goto label_1cbdec;
        case 0x1cbdf0u: goto label_1cbdf0;
        case 0x1cbdf4u: goto label_1cbdf4;
        case 0x1cbdf8u: goto label_1cbdf8;
        case 0x1cbdfcu: goto label_1cbdfc;
        case 0x1cbe00u: goto label_1cbe00;
        case 0x1cbe04u: goto label_1cbe04;
        case 0x1cbe08u: goto label_1cbe08;
        case 0x1cbe0cu: goto label_1cbe0c;
        case 0x1cbe10u: goto label_1cbe10;
        case 0x1cbe14u: goto label_1cbe14;
        case 0x1cbe18u: goto label_1cbe18;
        case 0x1cbe1cu: goto label_1cbe1c;
        case 0x1cbe20u: goto label_1cbe20;
        case 0x1cbe24u: goto label_1cbe24;
        case 0x1cbe28u: goto label_1cbe28;
        case 0x1cbe2cu: goto label_1cbe2c;
        case 0x1cbe30u: goto label_1cbe30;
        case 0x1cbe34u: goto label_1cbe34;
        case 0x1cbe38u: goto label_1cbe38;
        case 0x1cbe3cu: goto label_1cbe3c;
        case 0x1cbe40u: goto label_1cbe40;
        case 0x1cbe44u: goto label_1cbe44;
        case 0x1cbe48u: goto label_1cbe48;
        case 0x1cbe4cu: goto label_1cbe4c;
        case 0x1cbe50u: goto label_1cbe50;
        case 0x1cbe54u: goto label_1cbe54;
        case 0x1cbe58u: goto label_1cbe58;
        case 0x1cbe5cu: goto label_1cbe5c;
        case 0x1cbe60u: goto label_1cbe60;
        case 0x1cbe64u: goto label_1cbe64;
        case 0x1cbe68u: goto label_1cbe68;
        case 0x1cbe6cu: goto label_1cbe6c;
        case 0x1cbe70u: goto label_1cbe70;
        case 0x1cbe74u: goto label_1cbe74;
        case 0x1cbe78u: goto label_1cbe78;
        case 0x1cbe7cu: goto label_1cbe7c;
        case 0x1cbe80u: goto label_1cbe80;
        case 0x1cbe84u: goto label_1cbe84;
        case 0x1cbe88u: goto label_1cbe88;
        case 0x1cbe8cu: goto label_1cbe8c;
        case 0x1cbe90u: goto label_1cbe90;
        case 0x1cbe94u: goto label_1cbe94;
        case 0x1cbe98u: goto label_1cbe98;
        case 0x1cbe9cu: goto label_1cbe9c;
        case 0x1cbea0u: goto label_1cbea0;
        case 0x1cbea4u: goto label_1cbea4;
        case 0x1cbea8u: goto label_1cbea8;
        case 0x1cbeacu: goto label_1cbeac;
        case 0x1cbeb0u: goto label_1cbeb0;
        case 0x1cbeb4u: goto label_1cbeb4;
        case 0x1cbeb8u: goto label_1cbeb8;
        case 0x1cbebcu: goto label_1cbebc;
        case 0x1cbec0u: goto label_1cbec0;
        case 0x1cbec4u: goto label_1cbec4;
        case 0x1cbec8u: goto label_1cbec8;
        case 0x1cbeccu: goto label_1cbecc;
        case 0x1cbed0u: goto label_1cbed0;
        case 0x1cbed4u: goto label_1cbed4;
        case 0x1cbed8u: goto label_1cbed8;
        case 0x1cbedcu: goto label_1cbedc;
        case 0x1cbee0u: goto label_1cbee0;
        case 0x1cbee4u: goto label_1cbee4;
        case 0x1cbee8u: goto label_1cbee8;
        case 0x1cbeecu: goto label_1cbeec;
        case 0x1cbef0u: goto label_1cbef0;
        case 0x1cbef4u: goto label_1cbef4;
        case 0x1cbef8u: goto label_1cbef8;
        case 0x1cbefcu: goto label_1cbefc;
        case 0x1cbf00u: goto label_1cbf00;
        case 0x1cbf04u: goto label_1cbf04;
        case 0x1cbf08u: goto label_1cbf08;
        case 0x1cbf0cu: goto label_1cbf0c;
        case 0x1cbf10u: goto label_1cbf10;
        case 0x1cbf14u: goto label_1cbf14;
        case 0x1cbf18u: goto label_1cbf18;
        case 0x1cbf1cu: goto label_1cbf1c;
        case 0x1cbf20u: goto label_1cbf20;
        case 0x1cbf24u: goto label_1cbf24;
        case 0x1cbf28u: goto label_1cbf28;
        case 0x1cbf2cu: goto label_1cbf2c;
        case 0x1cbf30u: goto label_1cbf30;
        case 0x1cbf34u: goto label_1cbf34;
        case 0x1cbf38u: goto label_1cbf38;
        case 0x1cbf3cu: goto label_1cbf3c;
        case 0x1cbf40u: goto label_1cbf40;
        case 0x1cbf44u: goto label_1cbf44;
        case 0x1cbf48u: goto label_1cbf48;
        case 0x1cbf4cu: goto label_1cbf4c;
        case 0x1cbf50u: goto label_1cbf50;
        case 0x1cbf54u: goto label_1cbf54;
        case 0x1cbf58u: goto label_1cbf58;
        case 0x1cbf5cu: goto label_1cbf5c;
        case 0x1cbf60u: goto label_1cbf60;
        case 0x1cbf64u: goto label_1cbf64;
        case 0x1cbf68u: goto label_1cbf68;
        case 0x1cbf6cu: goto label_1cbf6c;
        case 0x1cbf70u: goto label_1cbf70;
        case 0x1cbf74u: goto label_1cbf74;
        case 0x1cbf78u: goto label_1cbf78;
        case 0x1cbf7cu: goto label_1cbf7c;
        case 0x1cbf80u: goto label_1cbf80;
        case 0x1cbf84u: goto label_1cbf84;
        case 0x1cbf88u: goto label_1cbf88;
        case 0x1cbf8cu: goto label_1cbf8c;
        case 0x1cbf90u: goto label_1cbf90;
        case 0x1cbf94u: goto label_1cbf94;
        case 0x1cbf98u: goto label_1cbf98;
        case 0x1cbf9cu: goto label_1cbf9c;
        case 0x1cbfa0u: goto label_1cbfa0;
        case 0x1cbfa4u: goto label_1cbfa4;
        case 0x1cbfa8u: goto label_1cbfa8;
        case 0x1cbfacu: goto label_1cbfac;
        case 0x1cbfb0u: goto label_1cbfb0;
        case 0x1cbfb4u: goto label_1cbfb4;
        case 0x1cbfb8u: goto label_1cbfb8;
        case 0x1cbfbcu: goto label_1cbfbc;
        case 0x1cbfc0u: goto label_1cbfc0;
        case 0x1cbfc4u: goto label_1cbfc4;
        case 0x1cbfc8u: goto label_1cbfc8;
        case 0x1cbfccu: goto label_1cbfcc;
        case 0x1cbfd0u: goto label_1cbfd0;
        case 0x1cbfd4u: goto label_1cbfd4;
        case 0x1cbfd8u: goto label_1cbfd8;
        case 0x1cbfdcu: goto label_1cbfdc;
        case 0x1cbfe0u: goto label_1cbfe0;
        case 0x1cbfe4u: goto label_1cbfe4;
        case 0x1cbfe8u: goto label_1cbfe8;
        case 0x1cbfecu: goto label_1cbfec;
        case 0x1cbff0u: goto label_1cbff0;
        case 0x1cbff4u: goto label_1cbff4;
        case 0x1cbff8u: goto label_1cbff8;
        case 0x1cbffcu: goto label_1cbffc;
        case 0x1cc000u: goto label_1cc000;
        case 0x1cc004u: goto label_1cc004;
        case 0x1cc008u: goto label_1cc008;
        case 0x1cc00cu: goto label_1cc00c;
        case 0x1cc010u: goto label_1cc010;
        case 0x1cc014u: goto label_1cc014;
        case 0x1cc018u: goto label_1cc018;
        case 0x1cc01cu: goto label_1cc01c;
        case 0x1cc020u: goto label_1cc020;
        case 0x1cc024u: goto label_1cc024;
        case 0x1cc028u: goto label_1cc028;
        case 0x1cc02cu: goto label_1cc02c;
        case 0x1cc030u: goto label_1cc030;
        case 0x1cc034u: goto label_1cc034;
        case 0x1cc038u: goto label_1cc038;
        case 0x1cc03cu: goto label_1cc03c;
        case 0x1cc040u: goto label_1cc040;
        case 0x1cc044u: goto label_1cc044;
        case 0x1cc048u: goto label_1cc048;
        case 0x1cc04cu: goto label_1cc04c;
        case 0x1cc050u: goto label_1cc050;
        case 0x1cc054u: goto label_1cc054;
        case 0x1cc058u: goto label_1cc058;
        case 0x1cc05cu: goto label_1cc05c;
        case 0x1cc060u: goto label_1cc060;
        case 0x1cc064u: goto label_1cc064;
        case 0x1cc068u: goto label_1cc068;
        case 0x1cc06cu: goto label_1cc06c;
        case 0x1cc070u: goto label_1cc070;
        case 0x1cc074u: goto label_1cc074;
        case 0x1cc078u: goto label_1cc078;
        case 0x1cc07cu: goto label_1cc07c;
        case 0x1cc080u: goto label_1cc080;
        case 0x1cc084u: goto label_1cc084;
        case 0x1cc088u: goto label_1cc088;
        case 0x1cc08cu: goto label_1cc08c;
        case 0x1cc090u: goto label_1cc090;
        case 0x1cc094u: goto label_1cc094;
        case 0x1cc098u: goto label_1cc098;
        case 0x1cc09cu: goto label_1cc09c;
        case 0x1cc0a0u: goto label_1cc0a0;
        case 0x1cc0a4u: goto label_1cc0a4;
        case 0x1cc0a8u: goto label_1cc0a8;
        case 0x1cc0acu: goto label_1cc0ac;
        case 0x1cc0b0u: goto label_1cc0b0;
        case 0x1cc0b4u: goto label_1cc0b4;
        case 0x1cc0b8u: goto label_1cc0b8;
        case 0x1cc0bcu: goto label_1cc0bc;
        case 0x1cc0c0u: goto label_1cc0c0;
        case 0x1cc0c4u: goto label_1cc0c4;
        case 0x1cc0c8u: goto label_1cc0c8;
        case 0x1cc0ccu: goto label_1cc0cc;
        case 0x1cc0d0u: goto label_1cc0d0;
        case 0x1cc0d4u: goto label_1cc0d4;
        case 0x1cc0d8u: goto label_1cc0d8;
        case 0x1cc0dcu: goto label_1cc0dc;
        case 0x1cc0e0u: goto label_1cc0e0;
        case 0x1cc0e4u: goto label_1cc0e4;
        case 0x1cc0e8u: goto label_1cc0e8;
        case 0x1cc0ecu: goto label_1cc0ec;
        case 0x1cc0f0u: goto label_1cc0f0;
        case 0x1cc0f4u: goto label_1cc0f4;
        case 0x1cc0f8u: goto label_1cc0f8;
        case 0x1cc0fcu: goto label_1cc0fc;
        case 0x1cc100u: goto label_1cc100;
        case 0x1cc104u: goto label_1cc104;
        case 0x1cc108u: goto label_1cc108;
        case 0x1cc10cu: goto label_1cc10c;
        case 0x1cc110u: goto label_1cc110;
        case 0x1cc114u: goto label_1cc114;
        case 0x1cc118u: goto label_1cc118;
        case 0x1cc11cu: goto label_1cc11c;
        case 0x1cc120u: goto label_1cc120;
        case 0x1cc124u: goto label_1cc124;
        case 0x1cc128u: goto label_1cc128;
        case 0x1cc12cu: goto label_1cc12c;
        case 0x1cc130u: goto label_1cc130;
        case 0x1cc134u: goto label_1cc134;
        case 0x1cc138u: goto label_1cc138;
        case 0x1cc13cu: goto label_1cc13c;
        case 0x1cc140u: goto label_1cc140;
        case 0x1cc144u: goto label_1cc144;
        case 0x1cc148u: goto label_1cc148;
        case 0x1cc14cu: goto label_1cc14c;
        case 0x1cc150u: goto label_1cc150;
        case 0x1cc154u: goto label_1cc154;
        case 0x1cc158u: goto label_1cc158;
        case 0x1cc15cu: goto label_1cc15c;
        case 0x1cc160u: goto label_1cc160;
        case 0x1cc164u: goto label_1cc164;
        case 0x1cc168u: goto label_1cc168;
        case 0x1cc16cu: goto label_1cc16c;
        case 0x1cc170u: goto label_1cc170;
        case 0x1cc174u: goto label_1cc174;
        case 0x1cc178u: goto label_1cc178;
        case 0x1cc17cu: goto label_1cc17c;
        case 0x1cc180u: goto label_1cc180;
        case 0x1cc184u: goto label_1cc184;
        case 0x1cc188u: goto label_1cc188;
        case 0x1cc18cu: goto label_1cc18c;
        case 0x1cc190u: goto label_1cc190;
        case 0x1cc194u: goto label_1cc194;
        case 0x1cc198u: goto label_1cc198;
        case 0x1cc19cu: goto label_1cc19c;
        default: break;
    }

    ctx->pc = 0x1cb798u;

label_1cb798:
    // 0x1cb798: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x1cb798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
label_1cb79c:
    // 0x1cb79c: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x1cb79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
label_1cb7a0:
    // 0x1cb7a0: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x1cb7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
label_1cb7a4:
    // 0x1cb7a4: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x1cb7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
label_1cb7a8:
    // 0x1cb7a8: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x1cb7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
label_1cb7ac:
    // 0x1cb7ac: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x1cb7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
label_1cb7b0:
    // 0x1cb7b0: 0x7fb50200  sq          $s5, 0x200($sp)
    ctx->pc = 0x1cb7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 21));
label_1cb7b4:
    // 0x1cb7b4: 0x7fb601f0  sq          $s6, 0x1F0($sp)
    ctx->pc = 0x1cb7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 22));
label_1cb7b8:
    // 0x1cb7b8: 0x7fb701e0  sq          $s7, 0x1E0($sp)
    ctx->pc = 0x1cb7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 23));
label_1cb7bc:
    // 0x1cb7bc: 0x7fbe01d0  sq          $fp, 0x1D0($sp)
    ctx->pc = 0x1cb7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 30));
label_1cb7c0:
    // 0x1cb7c0: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x1cb7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
label_1cb7c4:
    // 0x1cb7c4: 0xe7b40260  swc1        $f20, 0x260($sp)
    ctx->pc = 0x1cb7c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_1cb7c8:
    // 0x1cb7c8: 0xafa50190  sw          $a1, 0x190($sp)
    ctx->pc = 0x1cb7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 5));
label_1cb7cc:
    // 0x1cb7cc: 0xafa4018c  sw          $a0, 0x18C($sp)
    ctx->pc = 0x1cb7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 4));
label_1cb7d0:
    // 0x1cb7d0: 0x8ca200d4  lw          $v0, 0xD4($a1)
    ctx->pc = 0x1cb7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
label_1cb7d4:
    // 0x1cb7d4: 0x8c57013c  lw          $s7, 0x13C($v0)
    ctx->pc = 0x1cb7d4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_1cb7d8:
    // 0x1cb7d8: 0x12e00263  beqz        $s7, . + 4 + (0x263 << 2)
label_1cb7dc:
    if (ctx->pc == 0x1CB7DCu) {
        ctx->pc = 0x1CB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7D8u;
        // 0x1cb7dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB7E0u;
        goto label_1cb7e0;
    }
    ctx->pc = 0x1CB7D8u;
    {
        const bool branch_taken_0x1cb7d8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7D8u;
        // 0x1cb7dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7d8) {
            ctx->pc = 0x1CC168u;
            goto label_1cc168;
        }
    }
    ctx->pc = 0x1CB7E0u;
label_1cb7e0:
    // 0x1cb7e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cb7e4:
    // 0x1cb7e4: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x1cb7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_1cb7e8:
    // 0x1cb7e8: 0xc0616ac  jal         func_185AB0
label_1cb7ec:
    if (ctx->pc == 0x1CB7ECu) {
        ctx->pc = 0x1CB7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7E8u;
        // 0x1cb7ec: 0xafb70194  sw          $s7, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB7F0u;
        goto label_1cb7f0;
    }
    ctx->pc = 0x1CB7E8u;
    SET_GPR_U32(ctx, 31, 0x1CB7F0u);
    ctx->pc = 0x1CB7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7E8u;
    // 0x1cb7ec: 0xafb70194  sw          $s7, 0x194($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1CB7E8u, 0x1CB7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7F0u;
label_1cb7f0:
    // 0x1cb7f0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1cb7f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb7f4:
    // 0x1cb7f4: 0x12c0025d  beqz        $s6, . + 4 + (0x25D << 2)
label_1cb7f8:
    if (ctx->pc == 0x1CB7F8u) {
        ctx->pc = 0x1CB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7F4u;
        // 0x1cb7f8: 0x7bb00250  lq          $s0, 0x250($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB7FCu;
        goto label_1cb7fc;
    }
    ctx->pc = 0x1CB7F4u;
    {
        const bool branch_taken_0x1cb7f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7F4u;
        // 0x1cb7f8: 0x7bb00250  lq          $s0, 0x250($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7f4) {
            ctx->pc = 0x1CC16Cu;
            goto label_1cc16c;
        }
    }
    ctx->pc = 0x1CB7FCu;
label_1cb7fc:
    // 0x1cb7fc: 0x92c20011  lbu         $v0, 0x11($s6)
    ctx->pc = 0x1cb7fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 17)));
label_1cb800:
    // 0x1cb800: 0x1040025a  beqz        $v0, . + 4 + (0x25A << 2)
label_1cb804:
    if (ctx->pc == 0x1CB804u) {
        ctx->pc = 0x1CB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB800u;
        // 0x1cb804: 0x8fa20190  lw          $v0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB808u;
        goto label_1cb808;
    }
    ctx->pc = 0x1CB800u;
    {
        const bool branch_taken_0x1cb800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB800u;
        // 0x1cb804: 0x8fa20190  lw          $v0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb800) {
            ctx->pc = 0x1CC16Cu;
            goto label_1cc16c;
        }
    }
    ctx->pc = 0x1CB808u;
label_1cb808:
    // 0x1cb808: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1cb808u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb80c:
    // 0x1cb80c: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x1cb80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_1cb810:
    // 0x1cb810: 0x8c420380  lw          $v0, 0x380($v0)
    ctx->pc = 0x1cb810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
label_1cb814:
    // 0x1cb814: 0xc072d1a  jal         func_1CB468
label_1cb818:
    if (ctx->pc == 0x1CB818u) {
        ctx->pc = 0x1CB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB814u;
        // 0x1cb818: 0xafa20198  sw          $v0, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB81Cu;
        goto label_1cb81c;
    }
    ctx->pc = 0x1CB814u;
    SET_GPR_U32(ctx, 31, 0x1CB81Cu);
    ctx->pc = 0x1CB818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB814u;
    // 0x1cb818: 0xafa20198  sw          $v0, 0x198($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB468u, 0x1CB814u, 0x1CB81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB81Cu;
label_1cb81c:
    // 0x1cb81c: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1cb81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1cb820:
    // 0x1cb820: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1cb820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1cb824:
    // 0x1cb824: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cb824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cb828:
    // 0x1cb828: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x1cb828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
label_1cb82c:
    // 0x1cb82c: 0x829018  mult        $s2, $a0, $v0
    ctx->pc = 0x1cb82cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_1cb830:
    // 0x1cb830: 0x2473ea90  addiu       $s3, $v1, -0x1570
    ctx->pc = 0x1cb830u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961808));
label_1cb834:
    // 0x1cb834: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cb834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cb838:
    // 0x1cb838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cb838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cb83c:
    // 0x1cb83c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cb83cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cb840:
    // 0x1cb840: 0x8c47cdb4  lw          $a3, -0x324C($v0)
    ctx->pc = 0x1cb840u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1cb844:
    // 0x1cb844: 0x26e6000c  addiu       $a2, $s7, 0xC
    ctx->pc = 0x1cb844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
label_1cb848:
    // 0x1cb848: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1cb848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1cb84c:
    // 0x1cb84c: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x1cb84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_1cb850:
    // 0x1cb850: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1cb850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1cb854:
    // 0x1cb854: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1cb854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb858:
    // 0x1cb858: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1cb858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cb85c:
    // 0x1cb85c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cb85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb860:
    // 0x1cb860: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x1cb860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1cb864:
    // 0x1cb864: 0xafa601a8  sw          $a2, 0x1A8($sp)
    ctx->pc = 0x1cb864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 6));
label_1cb868:
    // 0x1cb868: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1cb868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1cb86c:
    // 0x1cb86c: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1cb86cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1cb870:
    // 0x1cb870: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1cb870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1cb874:
    // 0x1cb874: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1cb874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1cb878:
    // 0x1cb878: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x1cb878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1cb87c:
    // 0x1cb87c: 0xc0f809  jalr        $a2
label_1cb880:
    if (ctx->pc == 0x1CB880u) {
        ctx->pc = 0x1CB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB87Cu;
        // 0x1cb880: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB884u;
        goto label_1cb884;
    }
    ctx->pc = 0x1CB87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1CB884u);
        ctx->pc = 0x1CB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB87Cu;
        // 0x1cb880: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB87Cu, 0x1CB884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CB884u;
label_1cb884:
    // 0x1cb884: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cb884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cb888:
    // 0x1cb888: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb88c:
    // 0x1cb88c: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x1cb88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_1cb890:
    // 0x1cb890: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1cb890u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1cb894:
    // 0x1cb894: 0xc12e310  jal         func_4B8C40
label_1cb898:
    if (ctx->pc == 0x1CB898u) {
        ctx->pc = 0x1CB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB894u;
        // 0x1cb898: 0x7fa20150  sq          $v0, 0x150($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB89Cu;
        goto label_1cb89c;
    }
    ctx->pc = 0x1CB894u;
    SET_GPR_U32(ctx, 31, 0x1CB89Cu);
    ctx->pc = 0x1CB898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB894u;
    // 0x1cb898: 0x7fa20150  sq          $v0, 0x150($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1CB894u, 0x1CB89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB89Cu;
label_1cb89c:
    // 0x1cb89c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb89cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb8a0:
    // 0x1cb8a0: 0xc12e29c  jal         func_4B8A70
label_1cb8a4:
    if (ctx->pc == 0x1CB8A4u) {
        ctx->pc = 0x1CB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8A0u;
        // 0x1cb8a4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB8A8u;
        goto label_1cb8a8;
    }
    ctx->pc = 0x1CB8A0u;
    SET_GPR_U32(ctx, 31, 0x1CB8A8u);
    ctx->pc = 0x1CB8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8A0u;
    // 0x1cb8a4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1CB8A0u, 0x1CB8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8A8u;
label_1cb8a8:
    // 0x1cb8a8: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x1cb8a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1cb8ac:
    // 0x1cb8ac: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1cb8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1cb8b0:
    // 0x1cb8b0: 0x4407a000  mfc1        $a3, $f20
    ctx->pc = 0x1cb8b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1cb8b4:
    // 0x1cb8b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cb8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cb8b8:
    // 0x1cb8b8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1cb8b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1cb8bc:
    // 0x1cb8bc: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1cb8bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_1cb8c0:
    // 0x1cb8c0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1cb8c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1cb8c4:
    // 0x1cb8c4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1cb8c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1cb8c8:
    // 0x1cb8c8: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1cb8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1cb8cc:
    // 0x1cb8cc: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1cb8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_1cb8d0:
    // 0x1cb8d0: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1cb8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_1cb8d4:
    // 0x1cb8d4: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1cb8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb8d8:
    // 0x1cb8d8: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x1cb8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb8dc:
    // 0x1cb8dc: 0xc7a20158  lwc1        $f2, 0x158($sp)
    ctx->pc = 0x1cb8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cb8e0:
    // 0x1cb8e0: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1cb8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1cb8e4:
    // 0x1cb8e4: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x1cb8e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1cb8e8:
    // 0x1cb8e8: 0xc0cd940  jal         func_336500
label_1cb8ec:
    if (ctx->pc == 0x1CB8ECu) {
        ctx->pc = 0x1CB8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8E8u;
        // 0x1cb8ec: 0xe7a20148  swc1        $f2, 0x148($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB8F0u;
        goto label_1cb8f0;
    }
    ctx->pc = 0x1CB8E8u;
    SET_GPR_U32(ctx, 31, 0x1CB8F0u);
    ctx->pc = 0x1CB8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8E8u;
    // 0x1cb8ec: 0xe7a20148  swc1        $f2, 0x148($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x1CB8E8u, 0x1CB8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8F0u;
label_1cb8f0:
    // 0x1cb8f0: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x1cb8f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb8f4:
    // 0x1cb8f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1cb8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cb8f8:
    // 0x1cb8f8: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x1cb8f8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb8fc:
    // 0x1cb8fc: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x1cb8fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cb900:
    // 0x1cb900: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1cb900u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb904:
    // 0x1cb904: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x1cb904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_1cb908:
    // 0x1cb908: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x1cb908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
label_1cb90c:
    // 0x1cb90c: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x1cb90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
label_1cb910:
    // 0x1cb910: 0xc060b58  jal         func_182D60
label_1cb914:
    if (ctx->pc == 0x1CB914u) {
        ctx->pc = 0x1CB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB910u;
        // 0x1cb914: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB918u;
        goto label_1cb918;
    }
    ctx->pc = 0x1CB910u;
    SET_GPR_U32(ctx, 31, 0x1CB918u);
    ctx->pc = 0x1CB914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB910u;
    // 0x1cb914: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1CB910u, 0x1CB918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB918u;
label_1cb918:
    // 0x1cb918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb91c:
    // 0x1cb91c: 0xc06078e  jal         func_181E38
label_1cb920:
    if (ctx->pc == 0x1CB920u) {
        ctx->pc = 0x1CB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB91Cu;
        // 0x1cb920: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB924u;
        goto label_1cb924;
    }
    ctx->pc = 0x1CB91Cu;
    SET_GPR_U32(ctx, 31, 0x1CB924u);
    ctx->pc = 0x1CB920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB91Cu;
    // 0x1cb920: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x1CB91Cu, 0x1CB924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB924u;
label_1cb924:
    // 0x1cb924: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x1cb924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1cb928:
    // 0x1cb928: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x1cb928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1cb92c:
    // 0x1cb92c: 0x27aa0150  addiu       $t2, $sp, 0x150
    ctx->pc = 0x1cb92cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1cb930:
    // 0x1cb930: 0x27ab00e0  addiu       $t3, $sp, 0xE0
    ctx->pc = 0x1cb930u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1cb934:
    // 0x1cb934: 0xafa801ac  sw          $t0, 0x1AC($sp)
    ctx->pc = 0x1cb934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 8));
label_1cb938:
    // 0x1cb938: 0x26e5026c  addiu       $a1, $s7, 0x26C
    ctx->pc = 0x1cb938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 620));
label_1cb93c:
    // 0x1cb93c: 0xafa901a0  sw          $t1, 0x1A0($sp)
    ctx->pc = 0x1cb93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 9));
label_1cb940:
    // 0x1cb940: 0xafaa01a4  sw          $t2, 0x1A4($sp)
    ctx->pc = 0x1cb940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 10));
label_1cb944:
    // 0x1cb944: 0xafab01b0  sw          $t3, 0x1B0($sp)
    ctx->pc = 0x1cb944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 11));
label_1cb948:
    // 0x1cb948: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1cb948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1cb94c:
    // 0x1cb94c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1cb94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1cb950:
    // 0x1cb950: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x1cb950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1cb954:
    // 0x1cb954: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x1cb954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1cb958:
    // 0x1cb958: 0xb3a3010b  sdl         $v1, 0x10B($sp)
    ctx->pc = 0x1cb958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cb95c:
    // 0x1cb95c: 0xb7a30104  sdr         $v1, 0x104($sp)
    ctx->pc = 0x1cb95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cb960:
    // 0x1cb960: 0xb3a40113  sdl         $a0, 0x113($sp)
    ctx->pc = 0x1cb960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cb964:
    // 0x1cb964: 0xb7a4010c  sdr         $a0, 0x10C($sp)
    ctx->pc = 0x1cb964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cb968:
    // 0x1cb968: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cb968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cb96c:
    // 0x1cb96c: 0x8c64eaf0  lw          $a0, -0x1510($v1)
    ctx->pc = 0x1cb96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961904)));
label_1cb970:
    // 0x1cb970: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1cb970u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cb974:
    // 0x1cb974: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x1cb974u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cb978:
    // 0x1cb978: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1cb978u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1cb97c:
    // 0x1cb97c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1cb97cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_1cb980:
    // 0x1cb980: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1cb980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1cb984:
    // 0x1cb984: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1cb984u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1cb988:
    // 0x1cb988: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1cb988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1cb98c:
    // 0x1cb98c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1cb98cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_1cb990:
    // 0x1cb990: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1cb990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1cb994:
    // 0x1cb994: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1cb994u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_1cb998:
    // 0x1cb998: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1cb998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_1cb99c:
    // 0x1cb99c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1cb99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1cb9a0:
    // 0x1cb9a0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x1cb9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_1cb9a4:
    // 0x1cb9a4: 0x8ef00268  lw          $s0, 0x268($s7)
    ctx->pc = 0x1cb9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 616)));
label_1cb9a8:
    // 0x1cb9a8: 0x2604fffd  addiu       $a0, $s0, -0x3
    ctx->pc = 0x1cb9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
label_1cb9ac:
    // 0x1cb9ac: 0x10800055  beqz        $a0, . + 4 + (0x55 << 2)
label_1cb9b0:
    if (ctx->pc == 0x1CB9B0u) {
        ctx->pc = 0x1CB9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9ACu;
        // 0x1cb9b0: 0x7fa30150  sq          $v1, 0x150($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB9B4u;
        goto label_1cb9b4;
    }
    ctx->pc = 0x1CB9ACu;
    {
        const bool branch_taken_0x1cb9ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9ACu;
        // 0x1cb9b0: 0x7fa30150  sq          $v1, 0x150($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9ac) {
            ctx->pc = 0x1CBB04u;
            goto label_1cbb04;
        }
    }
    ctx->pc = 0x1CB9B4u;
label_1cb9b4:
    // 0x1cb9b4: 0x2662002c  addiu       $v0, $s3, 0x2C
    ctx->pc = 0x1cb9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
label_1cb9b8:
    // 0x1cb9b8: 0x8fb501ac  lw          $s5, 0x1AC($sp)
    ctx->pc = 0x1cb9b8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_1cb9bc:
    // 0x1cb9bc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1cb9bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1cb9c0:
    // 0x1cb9c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cb9c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cb9c4:
    // 0x1cb9c4: 0xafb2019c  sw          $s2, 0x19C($sp)
    ctx->pc = 0x1cb9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 18));
label_1cb9c8:
    // 0x1cb9c8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1cb9c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cb9cc:
    // 0x1cb9cc: 0x27b30180  addiu       $s3, $sp, 0x180
    ctx->pc = 0x1cb9ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1cb9d0:
    // 0x1cb9d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cb9d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb9d4:
    // 0x1cb9d4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1cb9d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb9d8:
    // 0x1cb9d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cb9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cb9dc:
    // 0x1cb9dc: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x1cb9dcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb9e0:
    // 0x1cb9e0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1cb9e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1cb9e4:
    // 0x1cb9e4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1cb9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_1cb9e8:
    // 0x1cb9e8: 0x7fa70090  sq          $a3, 0x90($sp)
    ctx->pc = 0x1cb9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
label_1cb9ec:
    // 0x1cb9ec: 0x8fa8019c  lw          $t0, 0x19C($sp)
    ctx->pc = 0x1cb9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_1cb9f0:
    // 0x1cb9f0: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x1cb9f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb9f4:
    // 0x1cb9f4: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x1cb9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb9f8:
    // 0x1cb9f8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1cb9f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb9fc:
    // 0x1cb9fc: 0x0  nop
    ctx->pc = 0x1cb9fcu;
    // NOP
label_1cba00:
    // 0x1cba00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cba00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cba04:
    // 0x1cba04: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x1cba04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1cba08:
    // 0x1cba08: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x1cba08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1cba0c:
    // 0x1cba0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cba0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cba10:
    // 0x1cba10: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x1cba10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1cba14:
    // 0x1cba14: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1cba14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1cba18:
    // 0x1cba18: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x1cba18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_1cba1c:
    // 0x1cba1c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1cba1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1cba20:
    // 0x1cba20: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1cba20u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1cba24:
    // 0x1cba24: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1cba24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_1cba28:
    // 0x1cba28: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1cba28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1cba2c:
    // 0x1cba2c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cba2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1cba30:
    // 0x1cba30: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1cba30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1cba34:
    // 0x1cba34: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1cba34u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1cba38:
    // 0x1cba38: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1cba38u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_1cba3c:
    // 0x1cba3c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1cba3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_1cba40:
    // 0x1cba40: 0x92260001  lbu         $a2, 0x1($s1)
    ctx->pc = 0x1cba40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_1cba44:
    // 0x1cba44: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x1cba44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
label_1cba48:
    // 0x1cba48: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1cba48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_1cba4c:
    // 0x1cba4c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1cba4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cba50:
    // 0x1cba50: 0x0  nop
    ctx->pc = 0x1cba50u;
    // NOP
label_1cba54:
    // 0x1cba54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cba54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cba58:
    // 0x1cba58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cba58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cba5c:
    // 0x1cba5c: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x1cba5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
label_1cba60:
    // 0x1cba60: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1cba60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_1cba64:
    // 0x1cba64: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x1cba64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_1cba68:
    // 0x1cba68: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1cba68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1cba6c:
    // 0x1cba6c: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1cba6cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_1cba70:
    // 0x1cba70: 0x7fa70150  sq          $a3, 0x150($sp)
    ctx->pc = 0x1cba70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 7));
label_1cba74:
    // 0x1cba74: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1cba74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1cba78:
    // 0x1cba78: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1cba78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_1cba7c:
    // 0x1cba7c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1cba7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1cba80:
    // 0x1cba80: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1cba80u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1cba84:
    // 0x1cba84: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1cba84u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1cba88:
    // 0x1cba88: 0x7fa30150  sq          $v1, 0x150($sp)
    ctx->pc = 0x1cba88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 3));
label_1cba8c:
    // 0x1cba8c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1cba8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_1cba90:
    // 0x1cba90: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1cba90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_1cba94:
    // 0x1cba94: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1cba94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_1cba98:
    // 0x1cba98: 0xc0cda36  jal         func_3368D8
label_1cba9c:
    if (ctx->pc == 0x1CBA9Cu) {
        ctx->pc = 0x1CBA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA98u;
        // 0x1cba9c: 0x7fa70090  sq          $a3, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBAA0u;
        goto label_1cbaa0;
    }
    ctx->pc = 0x1CBA98u;
    SET_GPR_U32(ctx, 31, 0x1CBAA0u);
    ctx->pc = 0x1CBA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA98u;
    // 0x1cba9c: 0x7fa70090  sq          $a3, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3368D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3368D8u, 0x1CBA98u, 0x1CBAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBAA0u;
label_1cbaa0:
    // 0x1cbaa0: 0x250001b  divu        $zero, $s2, $s0
    ctx->pc = 0x1cbaa0u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
label_1cbaa4:
    // 0x1cbaa4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1cbaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1cbaa8:
    // 0x1cbaa8: 0xc480eaf0  lwc1        $f0, -0x1510($a0)
    ctx->pc = 0x1cbaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbaac:
    // 0x1cbaac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cbaacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cbab0:
    // 0x1cbab0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1cbab0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1cbab4:
    // 0x1cbab4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1cbab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cbab8:
    // 0x1cbab8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1cbab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1cbabc:
    // 0x1cbabc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cbabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cbac0:
    // 0x1cbac0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1cbac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_1cbac4:
    // 0x1cbac4: 0x2652009b  addiu       $s2, $s2, 0x9B
    ctx->pc = 0x1cbac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 155));
label_1cbac8:
    // 0x1cbac8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1cbac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1cbacc:
    // 0x1cbacc: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_1cbad0:
    if (ctx->pc == 0x1CBAD0u) {
        ctx->pc = 0x1CBAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBACCu;
        // 0x1cbad0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBAD4u;
        goto label_1cbad4;
    }
    ctx->pc = 0x1CBACCu;
    {
        const bool branch_taken_0x1cbacc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbacc) {
            ctx->pc = 0x1CBAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBACCu;
            // 0x1cbad0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBAD4u;
            goto label_1cbad4;
        }
    }
    ctx->pc = 0x1CBAD4u;
label_1cbad4:
    // 0x1cbad4: 0x1812  mflo        $v1
    ctx->pc = 0x1cbad4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1cbad8:
    // 0x1cbad8: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1cbad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_1cbadc:
    // 0x1cbadc: 0xa3a30180  sb          $v1, 0x180($sp)
    ctx->pc = 0x1cbadcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 3));
label_1cbae0:
    // 0x1cbae0: 0xa2630002  sb          $v1, 0x2($s3)
    ctx->pc = 0x1cbae0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 3));
label_1cbae4:
    // 0x1cbae4: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x1cbae4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
label_1cbae8:
    // 0x1cbae8: 0xa2660003  sb          $a2, 0x3($s3)
    ctx->pc = 0x1cbae8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 6));
label_1cbaec:
    // 0x1cbaec: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1cbaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_1cbaf0:
    // 0x1cbaf0: 0xc060b78  jal         func_182DE0
label_1cbaf4:
    if (ctx->pc == 0x1CBAF4u) {
        ctx->pc = 0x1CBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAF0u;
        // 0x1cbaf4: 0xafa20114  sw          $v0, 0x114($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBAF8u;
        goto label_1cbaf8;
    }
    ctx->pc = 0x1CBAF0u;
    SET_GPR_U32(ctx, 31, 0x1CBAF8u);
    ctx->pc = 0x1CBAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBAF0u;
    // 0x1cbaf4: 0xafa20114  sw          $v0, 0x114($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x1CBAF0u, 0x1CBAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBAF8u;
label_1cbaf8:
    // 0x1cbaf8: 0x29e182b  sltu        $v1, $s4, $fp
    ctx->pc = 0x1cbaf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_1cbafc:
    // 0x1cbafc: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
label_1cbb00:
    if (ctx->pc == 0x1CBB00u) {
        ctx->pc = 0x1CBB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAFCu;
        // 0x1cbb00: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBB04u;
        goto label_1cbb04;
    }
    ctx->pc = 0x1CBAFCu;
    {
        const bool branch_taken_0x1cbafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAFCu;
        // 0x1cbb00: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbafc) {
            ctx->pc = 0x1CB9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb9d8;
        }
    }
    ctx->pc = 0x1CBB04u;
label_1cbb04:
    // 0x1cbb04: 0x8fa80190  lw          $t0, 0x190($sp)
    ctx->pc = 0x1cbb04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_1cbb08:
    // 0x1cbb08: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1cbb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cbb0c:
    // 0x1cbb0c: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x1cbb0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cbb10:
    // 0x1cbb10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cbb10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbb14:
    // 0x1cbb14: 0x8d070640  lw          $a3, 0x640($t0)
    ctx->pc = 0x1cbb14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1600)));
label_1cbb18:
    // 0x1cbb18: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x1cbb18u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbb1c:
    // 0x1cbb1c: 0x240800cd  addiu       $t0, $zero, 0xCD
    ctx->pc = 0x1cbb1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
label_1cbb20:
    // 0x1cbb20: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x1cbb20u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbb24:
    // 0x1cbb24: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1cbb24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cbb28:
    // 0x1cbb28: 0xafa70114  sw          $a3, 0x114($sp)
    ctx->pc = 0x1cbb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 7));
label_1cbb2c:
    // 0x1cbb2c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x1cbb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_1cbb30:
    // 0x1cbb30: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x1cbb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_1cbb34:
    // 0x1cbb34: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x1cbb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
label_1cbb38:
    // 0x1cbb38: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1cbb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_1cbb3c:
    // 0x1cbb3c: 0xc060b58  jal         func_182D60
label_1cbb40:
    if (ctx->pc == 0x1CBB40u) {
        ctx->pc = 0x1CBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB3Cu;
        // 0x1cbb40: 0xa3a80117  sb          $t0, 0x117($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 279), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBB44u;
        goto label_1cbb44;
    }
    ctx->pc = 0x1CBB3Cu;
    SET_GPR_U32(ctx, 31, 0x1CBB44u);
    ctx->pc = 0x1CBB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB3Cu;
    // 0x1cbb40: 0xa3a80117  sb          $t0, 0x117($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 279), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1CBB3Cu, 0x1CBB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB44u;
label_1cbb44:
    // 0x1cbb44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cbb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbb48:
    // 0x1cbb48: 0xc06078e  jal         func_181E38
label_1cbb4c:
    if (ctx->pc == 0x1CBB4Cu) {
        ctx->pc = 0x1CBB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB48u;
        // 0x1cbb4c: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBB50u;
        goto label_1cbb50;
    }
    ctx->pc = 0x1CBB48u;
    SET_GPR_U32(ctx, 31, 0x1CBB50u);
    ctx->pc = 0x1CBB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB48u;
    // 0x1cbb4c: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x1CBB48u, 0x1CBB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB50u;
label_1cbb50:
    // 0x1cbb50: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x1cbb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1cbb54:
    // 0x1cbb54: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x1cbb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1cbb58:
    // 0x1cbb58: 0x684a000f  ldl         $t2, 0xF($v0)
    ctx->pc = 0x1cbb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1cbb5c:
    // 0x1cbb5c: 0x6c4a0008  ldr         $t2, 0x8($v0)
    ctx->pc = 0x1cbb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1cbb60:
    // 0x1cbb60: 0xb3a9010b  sdl         $t1, 0x10B($sp)
    ctx->pc = 0x1cbb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbb64:
    // 0x1cbb64: 0xb7a90104  sdr         $t1, 0x104($sp)
    ctx->pc = 0x1cbb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbb68:
    // 0x1cbb68: 0xb3aa0113  sdl         $t2, 0x113($sp)
    ctx->pc = 0x1cbb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbb6c:
    // 0x1cbb6c: 0xb7aa010c  sdr         $t2, 0x10C($sp)
    ctx->pc = 0x1cbb6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbb70:
    // 0x1cbb70: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1cbb70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1cbb74:
    // 0x1cbb74: 0x8ca4eaf4  lw          $a0, -0x150C($a1)
    ctx->pc = 0x1cbb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961908)));
label_1cbb78:
    // 0x1cbb78: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1cbb78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cbb7c:
    // 0x1cbb7c: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x1cbb7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cbb80:
    // 0x1cbb80: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1cbb80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1cbb84:
    // 0x1cbb84: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1cbb84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_1cbb88:
    // 0x1cbb88: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1cbb88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1cbb8c:
    // 0x1cbb8c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1cbb8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1cbb90:
    // 0x1cbb90: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1cbb90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1cbb94:
    // 0x1cbb94: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1cbb94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_1cbb98:
    // 0x1cbb98: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1cbb98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1cbb9c:
    // 0x1cbb9c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1cbb9cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_1cbba0:
    // 0x1cbba0: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1cbba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_1cbba4:
    // 0x1cbba4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1cbba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1cbba8:
    // 0x1cbba8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x1cbba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_1cbbac:
    // 0x1cbbac: 0x8ee40008  lw          $a0, 0x8($s7)
    ctx->pc = 0x1cbbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_1cbbb0:
    // 0x1cbbb0: 0x10800049  beqz        $a0, . + 4 + (0x49 << 2)
label_1cbbb4:
    if (ctx->pc == 0x1CBBB4u) {
        ctx->pc = 0x1CBBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBB0u;
        // 0x1cbbb4: 0x7fa30150  sq          $v1, 0x150($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBBB8u;
        goto label_1cbbb8;
    }
    ctx->pc = 0x1CBBB0u;
    {
        const bool branch_taken_0x1cbbb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBB0u;
        // 0x1cbbb4: 0x7fa30150  sq          $v1, 0x150($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbbb0) {
            ctx->pc = 0x1CBCD8u;
            goto label_1cbcd8;
        }
    }
    ctx->pc = 0x1CBBB8u;
label_1cbbb8:
    // 0x1cbbb8: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1cbbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1cbbbc:
    // 0x1cbbbc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1cbbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1cbbc0:
    // 0x1cbbc0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cbbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cbbc4:
    // 0x1cbbc4: 0x8fb001a8  lw          $s0, 0x1A8($sp)
    ctx->pc = 0x1cbbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_1cbbc8:
    // 0x1cbbc8: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x1cbbc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1cbbcc:
    // 0x1cbbcc: 0x2442eabc  addiu       $v0, $v0, -0x1544
    ctx->pc = 0x1cbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961852));
label_1cbbd0:
    // 0x1cbbd0: 0x8fb201ac  lw          $s2, 0x1AC($sp)
    ctx->pc = 0x1cbbd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_1cbbd4:
    // 0x1cbbd4: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x1cbbd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cbbd8:
    // 0x1cbbd8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1cbbd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbbdc:
    // 0x1cbbdc: 0x0  nop
    ctx->pc = 0x1cbbdcu;
    // NOP
label_1cbbe0:
    // 0x1cbbe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cbbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cbbe4:
    // 0x1cbbe4: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x1cbbe4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cbbe8:
    // 0x1cbbe8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1cbbe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1cbbec:
    // 0x1cbbec: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1cbbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_1cbbf0:
    // 0x1cbbf0: 0x7fa70090  sq          $a3, 0x90($sp)
    ctx->pc = 0x1cbbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
label_1cbbf4:
    // 0x1cbbf4: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x1cbbf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1cbbf8:
    // 0x1cbbf8: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x1cbbf8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1cbbfc:
    // 0x1cbbfc: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1cbbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cbc00:
    // 0x1cbc00: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1cbc00u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbc04:
    // 0x1cbc04: 0x0  nop
    ctx->pc = 0x1cbc04u;
    // NOP
label_1cbc08:
    // 0x1cbc08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbc08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbc0c:
    // 0x1cbc0c: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x1cbc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1cbc10:
    // 0x1cbc10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cbc10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cbc14:
    // 0x1cbc14: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1cbc14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1cbc18:
    // 0x1cbc18: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1cbc18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1cbc1c:
    // 0x1cbc1c: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x1cbc1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1cbc20:
    // 0x1cbc20: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1cbc20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1cbc24:
    // 0x1cbc24: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1cbc24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1cbc28:
    // 0x1cbc28: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1cbc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_1cbc2c:
    // 0x1cbc2c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1cbc2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1cbc30:
    // 0x1cbc30: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cbc30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1cbc34:
    // 0x1cbc34: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1cbc34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1cbc38:
    // 0x1cbc38: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1cbc38u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1cbc3c:
    // 0x1cbc3c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1cbc3cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_1cbc40:
    // 0x1cbc40: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1cbc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_1cbc44:
    // 0x1cbc44: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x1cbc44u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1cbc48:
    // 0x1cbc48: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x1cbc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
label_1cbc4c:
    // 0x1cbc4c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1cbc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_1cbc50:
    // 0x1cbc50: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1cbc50u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbc54:
    // 0x1cbc54: 0x0  nop
    ctx->pc = 0x1cbc54u;
    // NOP
label_1cbc58:
    // 0x1cbc58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cbc58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cbc5c:
    // 0x1cbc5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cbc5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cbc60:
    // 0x1cbc60: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x1cbc60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1cbc64:
    // 0x1cbc64: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1cbc64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_1cbc68:
    // 0x1cbc68: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x1cbc68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_1cbc6c:
    // 0x1cbc6c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1cbc6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1cbc70:
    // 0x1cbc70: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1cbc70u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_1cbc74:
    // 0x1cbc74: 0x7fa70150  sq          $a3, 0x150($sp)
    ctx->pc = 0x1cbc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 7));
label_1cbc78:
    // 0x1cbc78: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1cbc78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1cbc7c:
    // 0x1cbc7c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1cbc7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_1cbc80:
    // 0x1cbc80: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1cbc80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1cbc84:
    // 0x1cbc84: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1cbc84u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1cbc88:
    // 0x1cbc88: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1cbc88u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1cbc8c:
    // 0x1cbc8c: 0x7fa30150  sq          $v1, 0x150($sp)
    ctx->pc = 0x1cbc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 3));
label_1cbc90:
    // 0x1cbc90: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1cbc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_1cbc94:
    // 0x1cbc94: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1cbc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_1cbc98:
    // 0x1cbc98: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1cbc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_1cbc9c:
    // 0x1cbc9c: 0xc0cda36  jal         func_3368D8
label_1cbca0:
    if (ctx->pc == 0x1CBCA0u) {
        ctx->pc = 0x1CBCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC9Cu;
        // 0x1cbca0: 0x7fa70090  sq          $a3, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBCA4u;
        goto label_1cbca4;
    }
    ctx->pc = 0x1CBC9Cu;
    SET_GPR_U32(ctx, 31, 0x1CBCA4u);
    ctx->pc = 0x1CBCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBC9Cu;
    // 0x1cbca0: 0x7fa70090  sq          $a3, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3368D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3368D8u, 0x1CBC9Cu, 0x1CBCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBCA4u;
label_1cbca4:
    // 0x1cbca4: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1cbca4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1cbca8:
    // 0x1cbca8: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1cbca8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1cbcac:
    // 0x1cbcac: 0xc540eaf4  lwc1        $f0, -0x150C($t2)
    ctx->pc = 0x1cbcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294961908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbcb0:
    // 0x1cbcb0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1cbcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cbcb4:
    // 0x1cbcb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cbcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cbcb8:
    // 0x1cbcb8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1cbcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_1cbcbc:
    // 0x1cbcbc: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1cbcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1cbcc0:
    // 0x1cbcc0: 0xc060b78  jal         func_182DE0
label_1cbcc4:
    if (ctx->pc == 0x1CBCC4u) {
        ctx->pc = 0x1CBCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCC0u;
        // 0x1cbcc4: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBCC8u;
        goto label_1cbcc8;
    }
    ctx->pc = 0x1CBCC0u;
    SET_GPR_U32(ctx, 31, 0x1CBCC8u);
    ctx->pc = 0x1CBCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBCC0u;
    // 0x1cbcc4: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x1CBCC0u, 0x1CBCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBCC8u;
label_1cbcc8:
    // 0x1cbcc8: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x1cbcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_1cbccc:
    // 0x1cbccc: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1cbcccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1cbcd0:
    // 0x1cbcd0: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
label_1cbcd4:
    if (ctx->pc == 0x1CBCD4u) {
        ctx->pc = 0x1CBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCD0u;
        // 0x1cbcd4: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBCD8u;
        goto label_1cbcd8;
    }
    ctx->pc = 0x1CBCD0u;
    {
        const bool branch_taken_0x1cbcd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCD0u;
        // 0x1cbcd4: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcd0) {
            ctx->pc = 0x1CBBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbbe0;
        }
    }
    ctx->pc = 0x1CBCD8u;
label_1cbcd8:
    // 0x1cbcd8: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1cbcd8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1cbcdc:
    // 0x1cbcdc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1cbcdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbce0:
    // 0x1cbce0: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x1cbce0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cbce4:
    // 0x1cbce4: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x1cbce4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cbce8:
    // 0x1cbce8: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x1cbce8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
label_1cbcec:
    // 0x1cbcec: 0x8d63eaf8  lw          $v1, -0x1508($t3)
    ctx->pc = 0x1cbcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294961912)));
label_1cbcf0:
    // 0x1cbcf0: 0xcd3024  and         $a2, $a2, $t5
    ctx->pc = 0x1cbcf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 13));
label_1cbcf4:
    // 0x1cbcf4: 0x8fa70198  lw          $a3, 0x198($sp)
    ctx->pc = 0x1cbcf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1cbcf8:
    // 0x1cbcf8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1cbcf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_1cbcfc:
    // 0x1cbcfc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1cbcfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1cbd00:
    // 0x1cbd00: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1cbd00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1cbd04:
    // 0x1cbd04: 0x482b0800  qmfc2.ni    $t3, $vf1
    ctx->pc = 0x1cbd04u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[1]));
label_1cbd08:
    // 0x1cbd08: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1cbd08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1cbd0c:
    // 0x1cbd0c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1cbd0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1cbd10:
    // 0x1cbd10: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1cbd10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1cbd14:
    // 0x1cbd14: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1cbd14u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_1cbd18:
    // 0x1cbd18: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1cbd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_1cbd1c:
    // 0x1cbd1c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1cbd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1cbd20:
    // 0x1cbd20: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1cbd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1cbd24:
    // 0x1cbd24: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x1cbd24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1cbd28:
    // 0x1cbd28: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cbd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cbd2c:
    // 0x1cbd2c: 0x2448ea90  addiu       $t0, $v0, -0x1570
    ctx->pc = 0x1cbd2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961808));
label_1cbd30:
    // 0x1cbd30: 0x7ba90010  lq          $t1, 0x10($sp)
    ctx->pc = 0x1cbd30u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbd34:
    // 0x1cbd34: 0x7baa0030  lq          $t2, 0x30($sp)
    ctx->pc = 0x1cbd34u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cbd38:
    // 0x1cbd38: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1cbd38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cbd3c:
    // 0x1cbd3c: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x1cbd3cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
label_1cbd40:
    // 0x1cbd40: 0x7fa40150  sq          $a0, 0x150($sp)
    ctx->pc = 0x1cbd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 4));
label_1cbd44:
    // 0x1cbd44: 0xed3824  and         $a3, $a3, $t5
    ctx->pc = 0x1cbd44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 13));
label_1cbd48:
    // 0x1cbd48: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1cbd48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1cbd4c:
    // 0x1cbd4c: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x1cbd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_1cbd50:
    // 0x1cbd50: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x1cbd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_1cbd54:
    // 0x1cbd54: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x1cbd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
label_1cbd58:
    // 0x1cbd58: 0x8fa30194  lw          $v1, 0x194($sp)
    ctx->pc = 0x1cbd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_1cbd5c:
    // 0x1cbd5c: 0x7fab0150  sq          $t3, 0x150($sp)
    ctx->pc = 0x1cbd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 11));
label_1cbd60:
    // 0x1cbd60: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x1cbd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
label_1cbd64:
    // 0x1cbd64: 0x7faa0070  sq          $t2, 0x70($sp)
    ctx->pc = 0x1cbd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 10));
label_1cbd68:
    // 0x1cbd68: 0x7fab0060  sq          $t3, 0x60($sp)
    ctx->pc = 0x1cbd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
label_1cbd6c:
    // 0x1cbd6c: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x1cbd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_1cbd70:
    // 0x1cbd70: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x1cbd70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1cbd74:
    // 0x1cbd74: 0x686904f7  ldl         $t1, 0x4F7($v1)
    ctx->pc = 0x1cbd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 1271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1cbd78:
    // 0x1cbd78: 0x6c6904f0  ldr         $t1, 0x4F0($v1)
    ctx->pc = 0x1cbd78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 1264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1cbd7c:
    // 0x1cbd7c: 0xb3a90167  sdl         $t1, 0x167($sp)
    ctx->pc = 0x1cbd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbd80:
    // 0x1cbd80: 0xb7a90160  sdr         $t1, 0x160($sp)
    ctx->pc = 0x1cbd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbd84:
    // 0x1cbd84: 0x9fa20160  lwu         $v0, 0x160($sp)
    ctx->pc = 0x1cbd84u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_1cbd88:
    // 0x1cbd88: 0x9fa30164  lwu         $v1, 0x164($sp)
    ctx->pc = 0x1cbd88u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_1cbd8c:
    // 0x1cbd8c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1cbd8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1cbd90:
    // 0x1cbd90: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x1cbd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cbd94:
    // 0x1cbd94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1cbd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1cbd98:
    // 0x1cbd98: 0xcc3024  and         $a2, $a2, $t4
    ctx->pc = 0x1cbd98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 12));
label_1cbd9c:
    // 0x1cbd9c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1cbd9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1cbda0:
    // 0x1cbda0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1cbda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_1cbda4:
    // 0x1cbda4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1cbda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1cbda8:
    // 0x1cbda8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1cbda8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_1cbdac:
    // 0x1cbdac: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x1cbdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_1cbdb0:
    // 0x1cbdb0: 0xafa60164  sw          $a2, 0x164($sp)
    ctx->pc = 0x1cbdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 6));
label_1cbdb4:
    // 0x1cbdb4: 0x6ba30167  ldl         $v1, 0x167($sp)
    ctx->pc = 0x1cbdb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1cbdb8:
    // 0x1cbdb8: 0x6fa30160  ldr         $v1, 0x160($sp)
    ctx->pc = 0x1cbdb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1cbdbc:
    // 0x1cbdbc: 0xb3a30157  sdl         $v1, 0x157($sp)
    ctx->pc = 0x1cbdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbdc0:
    // 0x1cbdc0: 0xb7a30150  sdr         $v1, 0x150($sp)
    ctx->pc = 0x1cbdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbdc4:
    // 0x1cbdc4: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1cbdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbdc8:
    // 0x1cbdc8: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x1cbdc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cbdcc:
    // 0x1cbdcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cbdccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cbdd0:
    // 0x1cbdd0: 0x8fab0194  lw          $t3, 0x194($sp)
    ctx->pc = 0x1cbdd0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_1cbdd4:
    // 0x1cbdd4: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x1cbdd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
label_1cbdd8:
    // 0x1cbdd8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1cbdd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1cbddc:
    // 0x1cbddc: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x1cbddcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
label_1cbde0:
    // 0x1cbde0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1cbde0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1cbde4:
    // 0x1cbde4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1cbde4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1cbde8:
    // 0x1cbde8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1cbde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_1cbdec:
    // 0x1cbdec: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1cbdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_1cbdf0:
    // 0x1cbdf0: 0x696204f7  ldl         $v0, 0x4F7($t3)
    ctx->pc = 0x1cbdf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 1271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1cbdf4:
    // 0x1cbdf4: 0x6d6204f0  ldr         $v0, 0x4F0($t3)
    ctx->pc = 0x1cbdf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 1264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1cbdf8:
    // 0x1cbdf8: 0xb3a20167  sdl         $v0, 0x167($sp)
    ctx->pc = 0x1cbdf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbdfc:
    // 0x1cbdfc: 0xb7a20160  sdr         $v0, 0x160($sp)
    ctx->pc = 0x1cbdfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbe00:
    // 0x1cbe00: 0x9fa20160  lwu         $v0, 0x160($sp)
    ctx->pc = 0x1cbe00u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_1cbe04:
    // 0x1cbe04: 0x9fa30164  lwu         $v1, 0x164($sp)
    ctx->pc = 0x1cbe04u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_1cbe08:
    // 0x1cbe08: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x1cbe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
label_1cbe0c:
    // 0x1cbe0c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1cbe0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1cbe10:
    // 0x1cbe10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1cbe10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1cbe14:
    // 0x1cbe14: 0xec3824  and         $a3, $a3, $t4
    ctx->pc = 0x1cbe14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 12));
label_1cbe18:
    // 0x1cbe18: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1cbe18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1cbe1c:
    // 0x1cbe1c: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x1cbe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_1cbe20:
    // 0x1cbe20: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1cbe20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1cbe24:
    // 0x1cbe24: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1cbe24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_1cbe28:
    // 0x1cbe28: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x1cbe28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_1cbe2c:
    // 0x1cbe2c: 0xafa70164  sw          $a3, 0x164($sp)
    ctx->pc = 0x1cbe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 7));
label_1cbe30:
    // 0x1cbe30: 0x6ba90167  ldl         $t1, 0x167($sp)
    ctx->pc = 0x1cbe30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1cbe34:
    // 0x1cbe34: 0x6fa90160  ldr         $t1, 0x160($sp)
    ctx->pc = 0x1cbe34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1cbe38:
    // 0x1cbe38: 0xb3a90157  sdl         $t1, 0x157($sp)
    ctx->pc = 0x1cbe38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbe3c:
    // 0x1cbe3c: 0xb7a90150  sdr         $t1, 0x150($sp)
    ctx->pc = 0x1cbe3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbe40:
    // 0x1cbe40: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x1cbe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbe44:
    // 0x1cbe44: 0x7ba60090  lq          $a2, 0x90($sp)
    ctx->pc = 0x1cbe44u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1cbe48:
    // 0x1cbe48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cbe48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cbe4c:
    // 0x1cbe4c: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x1cbe4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cbe50:
    // 0x1cbe50: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x1cbe50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1cbe54:
    // 0x1cbe54: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1cbe54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1cbe58:
    // 0x1cbe58: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1cbe58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1cbe5c:
    // 0x1cbe5c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1cbe5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1cbe60:
    // 0x1cbe60: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1cbe60u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1cbe64:
    // 0x1cbe64: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1cbe64u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1cbe68:
    // 0x1cbe68: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1cbe68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1cbe6c:
    // 0x1cbe6c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1cbe6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_1cbe70:
    // 0x1cbe70: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1cbe70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_1cbe74:
    // 0x1cbe74: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1cbe74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1cbe78:
    // 0x1cbe78: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1cbe78u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
label_1cbe7c:
    // 0x1cbe7c: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1cbe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_1cbe80:
    // 0x1cbe80: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1cbe80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1cbe84:
    // 0x1cbe84: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1cbe84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_1cbe88:
    // 0x1cbe88: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1cbe88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1cbe8c:
    // 0x1cbe8c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1cbe8cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1cbe90:
    // 0x1cbe90: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1cbe90u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_1cbe94:
    // 0x1cbe94: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1cbe94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_1cbe98:
    // 0x1cbe98: 0x7fa60170  sq          $a2, 0x170($sp)
    ctx->pc = 0x1cbe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 6));
label_1cbe9c:
    // 0x1cbe9c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x1cbe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_1cbea0:
    // 0x1cbea0: 0x7fa60090  sq          $a2, 0x90($sp)
    ctx->pc = 0x1cbea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 6));
label_1cbea4:
    // 0x1cbea4: 0x7fa30150  sq          $v1, 0x150($sp)
    ctx->pc = 0x1cbea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 3));
label_1cbea8:
    // 0x1cbea8: 0xc0cda36  jal         func_3368D8
label_1cbeac:
    if (ctx->pc == 0x1CBEACu) {
        ctx->pc = 0x1CBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEA8u;
        // 0x1cbeac: 0x7fa30120  sq          $v1, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBEB0u;
        goto label_1cbeb0;
    }
    ctx->pc = 0x1CBEA8u;
    SET_GPR_U32(ctx, 31, 0x1CBEB0u);
    ctx->pc = 0x1CBEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBEA8u;
    // 0x1cbeac: 0x7fa30120  sq          $v1, 0x120($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3368D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3368D8u, 0x1CBEA8u, 0x1CBEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBEB0u;
label_1cbeb0:
    // 0x1cbeb0: 0xc09d228  jal         func_2748A0
label_1cbeb4:
    if (ctx->pc == 0x1CBEB4u) {
        ctx->pc = 0x1CBEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEB0u;
        // 0x1cbeb4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBEB8u;
        goto label_1cbeb8;
    }
    ctx->pc = 0x1CBEB0u;
    SET_GPR_U32(ctx, 31, 0x1CBEB8u);
    ctx->pc = 0x1CBEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBEB0u;
    // 0x1cbeb4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2748A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748A0u, 0x1CBEB0u, 0x1CBEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBEB8u;
label_1cbeb8:
    // 0x1cbeb8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1cbebc:
    if (ctx->pc == 0x1CBEBCu) {
        ctx->pc = 0x1CBEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEB8u;
        // 0x1cbebc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBEC0u;
        goto label_1cbec0;
    }
    ctx->pc = 0x1CBEB8u;
    {
        const bool branch_taken_0x1cbeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbeb8) {
            ctx->pc = 0x1CBEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBEB8u;
            // 0x1cbebc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBECCu;
            goto label_1cbecc;
        }
    }
    ctx->pc = 0x1CBEC0u;
label_1cbec0:
    // 0x1cbec0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1cbec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1cbec4:
    // 0x1cbec4: 0x10000030  b           . + 4 + (0x30 << 2)
label_1cbec8:
    if (ctx->pc == 0x1CBEC8u) {
        ctx->pc = 0x1CBEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEC4u;
        // 0x1cbec8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBECCu;
        goto label_1cbecc;
    }
    ctx->pc = 0x1CBEC4u;
    {
        const bool branch_taken_0x1cbec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEC4u;
        // 0x1cbec8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbec4) {
            ctx->pc = 0x1CBF88u;
            goto label_1cbf88;
        }
    }
    ctx->pc = 0x1CBECCu;
label_1cbecc:
    // 0x1cbecc: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1cbeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1cbed0:
    // 0x1cbed0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cbed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cbed4:
    // 0x1cbed4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1cbed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1cbed8:
    // 0x1cbed8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1cbed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1cbedc:
    // 0x1cbedc: 0x40f809  jalr        $v0
label_1cbee0:
    if (ctx->pc == 0x1CBEE0u) {
        ctx->pc = 0x1CBEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEDCu;
        // 0x1cbee0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBEE4u;
        goto label_1cbee4;
    }
    ctx->pc = 0x1CBEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBEE4u);
        ctx->pc = 0x1CBEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEDCu;
        // 0x1cbee0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBEDCu, 0x1CBEE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CBEE4u;
label_1cbee4:
    // 0x1cbee4: 0x240301f4  addiu       $v1, $zero, 0x1F4
    ctx->pc = 0x1cbee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_1cbee8:
    // 0x1cbee8: 0x240400fa  addiu       $a0, $zero, 0xFA
    ctx->pc = 0x1cbee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1cbeec:
    // 0x1cbeec: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cbeecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cbef0:
    // 0x1cbef0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1cbef4:
    if (ctx->pc == 0x1CBEF4u) {
        ctx->pc = 0x1CBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEF0u;
        // 0x1cbef4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBEF8u;
        goto label_1cbef8;
    }
    ctx->pc = 0x1CBEF0u;
    {
        const bool branch_taken_0x1cbef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbef0) {
            ctx->pc = 0x1CBEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBEF0u;
            // 0x1cbef4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBEF8u;
            goto label_1cbef8;
        }
    }
    ctx->pc = 0x1CBEF8u;
label_1cbef8:
    // 0x1cbef8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1cbef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1cbefc:
    // 0x1cbefc: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x1cbefcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_1cbf00:
    // 0x1cbf00: 0x3c0aff00  lui         $t2, 0xFF00
    ctx->pc = 0x1cbf00u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65280 << 16));
label_1cbf04:
    // 0x1cbf04: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1cbf04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
label_1cbf08:
    // 0x1cbf08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1cbf08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1cbf0c:
    // 0x1cbf0c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x1cbf0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_1cbf10:
    // 0x1cbf10: 0x27ab0184  addiu       $t3, $sp, 0x184
    ctx->pc = 0x1cbf10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_1cbf14:
    // 0x1cbf14: 0x27a70188  addiu       $a3, $sp, 0x188
    ctx->pc = 0x1cbf14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_1cbf18:
    // 0x1cbf18: 0x2810  mfhi        $a1
    ctx->pc = 0x1cbf18u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1cbf1c:
    // 0x1cbf1c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cbf1cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cbf20:
    // 0x1cbf20: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x1cbf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_1cbf24:
    // 0x1cbf24: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1cbf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1cbf28:
    // 0x1cbf28: 0x4810  mfhi        $t1
    ctx->pc = 0x1cbf28u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_1cbf2c:
    // 0x1cbf2c: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x1cbf2cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_1cbf30:
    // 0x1cbf30: 0x2812  mflo        $a1
    ctx->pc = 0x1cbf30u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1cbf34:
    // 0x1cbf34: 0xc5400b  movn        $t0, $a2, $a1
    ctx->pc = 0x1cbf34u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
label_1cbf38:
    // 0x1cbf38: 0x5200006  bltz        $t1, . + 4 + (0x6 << 2)
label_1cbf3c:
    if (ctx->pc == 0x1CBF3Cu) {
        ctx->pc = 0x1CBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF38u;
        // 0x1cbf3c: 0x65500b  movn        $t2, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBF40u;
        goto label_1cbf40;
    }
    ctx->pc = 0x1CBF38u;
    {
        const bool branch_taken_0x1cbf38 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x1CBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF38u;
        // 0x1cbf3c: 0x65500b  movn        $t2, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf38) {
            ctx->pc = 0x1CBF54u;
            goto label_1cbf54;
        }
    }
    ctx->pc = 0x1CBF40u;
label_1cbf40:
    // 0x1cbf40: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x1cbf40u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cbf44:
    // 0x1cbf44: 0x0  nop
    ctx->pc = 0x1cbf44u;
    // NOP
label_1cbf48:
    // 0x1cbf48: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1cbf48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1cbf4c:
    // 0x1cbf4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cbf50:
    if (ctx->pc == 0x1CBF50u) {
        ctx->pc = 0x1CBF54u;
        goto label_1cbf54;
    }
    ctx->pc = 0x1CBF4Cu;
    {
        const bool branch_taken_0x1cbf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbf4c) {
            ctx->pc = 0x1CBF70u;
            goto label_1cbf70;
        }
    }
    ctx->pc = 0x1CBF54u;
label_1cbf54:
    // 0x1cbf54: 0x91842  srl         $v1, $t1, 1
    ctx->pc = 0x1cbf54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_1cbf58:
    // 0x1cbf58: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x1cbf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_1cbf5c:
    // 0x1cbf5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cbf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1cbf60:
    // 0x1cbf60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cbf60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cbf64:
    // 0x1cbf64: 0x0  nop
    ctx->pc = 0x1cbf64u;
    // NOP
label_1cbf68:
    // 0x1cbf68: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1cbf68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1cbf6c:
    // 0x1cbf6c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1cbf6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1cbf70:
    // 0x1cbf70: 0x3c01437a  lui         $at, 0x437A
    ctx->pc = 0x1cbf70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17274 << 16));
label_1cbf74:
    // 0x1cbf74: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1cbf74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cbf78:
    // 0x1cbf78: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1cbf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf7c:
    // 0x1cbf7c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1cbf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf80:
    // 0x1cbf80: 0xc0ce090  jal         func_338240
label_1cbf84:
    if (ctx->pc == 0x1CBF84u) {
        ctx->pc = 0x1CBF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF80u;
        // 0x1cbf84: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBF88u;
        goto label_1cbf88;
    }
    ctx->pc = 0x1CBF80u;
    SET_GPR_U32(ctx, 31, 0x1CBF88u);
    ctx->pc = 0x1CBF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBF80u;
    // 0x1cbf84: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338240u, 0x1CBF80u, 0x1CBF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBF88u;
label_1cbf88:
    // 0x1cbf88: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x1cbf88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_1cbf8c:
    // 0x1cbf8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cbf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cbf90:
    // 0x1cbf90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1cbf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf94:
    // 0x1cbf94: 0xc060b58  jal         func_182D60
label_1cbf98:
    if (ctx->pc == 0x1CBF98u) {
        ctx->pc = 0x1CBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF94u;
        // 0x1cbf98: 0x2451ea90  addiu       $s1, $v0, -0x1570 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBF9Cu;
        goto label_1cbf9c;
    }
    ctx->pc = 0x1CBF94u;
    SET_GPR_U32(ctx, 31, 0x1CBF9Cu);
    ctx->pc = 0x1CBF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBF94u;
    // 0x1cbf98: 0x2451ea90  addiu       $s1, $v0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1CBF94u, 0x1CBF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBF9Cu;
label_1cbf9c:
    // 0x1cbf9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cbf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbfa0:
    // 0x1cbfa0: 0xc06078e  jal         func_181E38
label_1cbfa4:
    if (ctx->pc == 0x1CBFA4u) {
        ctx->pc = 0x1CBFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFA0u;
        // 0x1cbfa4: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBFA8u;
        goto label_1cbfa8;
    }
    ctx->pc = 0x1CBFA0u;
    SET_GPR_U32(ctx, 31, 0x1CBFA8u);
    ctx->pc = 0x1CBFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBFA0u;
    // 0x1cbfa4: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x1CBFA0u, 0x1CBFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFA8u;
label_1cbfa8:
    // 0x1cbfa8: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x1cbfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_1cbfac:
    // 0x1cbfac: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x1cbfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_1cbfb0:
    // 0x1cbfb0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1cbfb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1cbfb4:
    // 0x1cbfb4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1cbfb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1cbfb8:
    // 0x1cbfb8: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x1cbfb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1cbfbc:
    // 0x1cbfbc: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x1cbfbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1cbfc0:
    // 0x1cbfc0: 0xb3a3010b  sdl         $v1, 0x10B($sp)
    ctx->pc = 0x1cbfc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbfc4:
    // 0x1cbfc4: 0xb7a30104  sdr         $v1, 0x104($sp)
    ctx->pc = 0x1cbfc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbfc8:
    // 0x1cbfc8: 0xb3a60113  sdl         $a2, 0x113($sp)
    ctx->pc = 0x1cbfc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbfcc:
    // 0x1cbfcc: 0xb7a6010c  sdr         $a2, 0x10C($sp)
    ctx->pc = 0x1cbfccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbfd0:
    // 0x1cbfd0: 0xc0cda36  jal         func_3368D8
label_1cbfd4:
    if (ctx->pc == 0x1CBFD4u) {
        ctx->pc = 0x1CBFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFD0u;
        // 0x1cbfd4: 0x24100030  addiu       $s0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBFD8u;
        goto label_1cbfd8;
    }
    ctx->pc = 0x1CBFD0u;
    SET_GPR_U32(ctx, 31, 0x1CBFD8u);
    ctx->pc = 0x1CBFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBFD0u;
    // 0x1cbfd4: 0x24100030  addiu       $s0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3368D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3368D8u, 0x1CBFD0u, 0x1CBFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFD8u;
label_1cbfd8:
    // 0x1cbfd8: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1cbfd8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1cbfdc:
    // 0x1cbfdc: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1cbfdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1cbfe0:
    // 0x1cbfe0: 0xc520eaf8  lwc1        $f0, -0x1508($t1)
    ctx->pc = 0x1cbfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294961912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbfe4:
    // 0x1cbfe4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1cbfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cbfe8:
    // 0x1cbfe8: 0x8fa501ac  lw          $a1, 0x1AC($sp)
    ctx->pc = 0x1cbfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_1cbfec:
    // 0x1cbfec: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1cbfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1cbff0:
    // 0x1cbff0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1cbff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1cbff4:
    // 0x1cbff4: 0xc060b78  jal         func_182DE0
label_1cbff8:
    if (ctx->pc == 0x1CBFF8u) {
        ctx->pc = 0x1CBFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFF4u;
        // 0x1cbff8: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBFFCu;
        goto label_1cbffc;
    }
    ctx->pc = 0x1CBFF4u;
    SET_GPR_U32(ctx, 31, 0x1CBFFCu);
    ctx->pc = 0x1CBFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBFF4u;
    // 0x1cbff8: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x1CBFF4u, 0x1CBFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFFCu;
label_1cbffc:
    // 0x1cbffc: 0x8faa0198  lw          $t2, 0x198($sp)
    ctx->pc = 0x1cbffcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1cc000:
    // 0x1cc000: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x1cc000u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1cc004:
    // 0x1cc004: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc008:
    // 0x1cc008: 0x1508018  mult        $s0, $t2, $s0
    ctx->pc = 0x1cc008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1cc00c:
    // 0x1cc00c: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x1cc00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_1cc010:
    // 0x1cc010: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1cc010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_1cc014:
    // 0x1cc014: 0x8fa501a4  lw          $a1, 0x1A4($sp)
    ctx->pc = 0x1cc014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_1cc018:
    // 0x1cc018: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x1cc018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc01c:
    // 0x1cc01c: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1cc01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1cc020:
    // 0x1cc020: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x1cc020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc024:
    // 0x1cc024: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cc024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc028:
    // 0x1cc028: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x1cc028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc02c:
    // 0x1cc02c: 0xc463001c  lwc1        $f3, 0x1C($v1)
    ctx->pc = 0x1cc02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cc030:
    // 0x1cc030: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cc030u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cc034:
    // 0x1cc034: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1cc034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1cc038:
    // 0x1cc038: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x1cc038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1cc03c:
    // 0x1cc03c: 0xc068818  jal         func_1A2060
label_1cc040:
    if (ctx->pc == 0x1CC040u) {
        ctx->pc = 0x1CC040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC03Cu;
        // 0x1cc040: 0xe7a00158  swc1        $f0, 0x158($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC044u;
        goto label_1cc044;
    }
    ctx->pc = 0x1CC03Cu;
    SET_GPR_U32(ctx, 31, 0x1CC044u);
    ctx->pc = 0x1CC040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC03Cu;
    // 0x1cc040: 0xe7a00158  swc1        $f0, 0x158($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1CC03Cu, 0x1CC044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC044u;
label_1cc044:
    // 0x1cc044: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x1cc044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1cc048:
    // 0x1cc048: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x1cc048u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1cc04c:
    // 0x1cc04c: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x1cc04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cc050:
    // 0x1cc050: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1cc050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cc054:
    // 0x1cc054: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1cc054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_1cc058:
    // 0x1cc058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc05c:
    // 0x1cc05c: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x1cc05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc060:
    // 0x1cc060: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x1cc060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc064:
    // 0x1cc064: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x1cc064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc068:
    // 0x1cc068: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1cc068u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1cc06c:
    // 0x1cc06c: 0xc46c0028  lwc1        $f12, 0x28($v1)
    ctx->pc = 0x1cc06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cc070:
    // 0x1cc070: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1cc070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1cc074:
    // 0x1cc074: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x1cc074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_1cc078:
    // 0x1cc078: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cc078u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cc07c:
    // 0x1cc07c: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x1cc07cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1cc080:
    // 0x1cc080: 0xc068848  jal         func_1A2120
label_1cc084:
    if (ctx->pc == 0x1CC084u) {
        ctx->pc = 0x1CC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC080u;
        // 0x1cc084: 0xe7a00158  swc1        $f0, 0x158($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC088u;
        goto label_1cc088;
    }
    ctx->pc = 0x1CC080u;
    SET_GPR_U32(ctx, 31, 0x1CC088u);
    ctx->pc = 0x1CC084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC080u;
    // 0x1cc084: 0xe7a00158  swc1        $f0, 0x158($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1CC080u, 0x1CC088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC088u;
label_1cc088:
    // 0x1cc088: 0xc06886e  jal         func_1A21B8
label_1cc08c:
    if (ctx->pc == 0x1CC08Cu) {
        ctx->pc = 0x1CC08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC088u;
        // 0x1cc08c: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC090u;
        goto label_1cc090;
    }
    ctx->pc = 0x1CC088u;
    SET_GPR_U32(ctx, 31, 0x1CC090u);
    ctx->pc = 0x1CC08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC088u;
    // 0x1cc08c: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1CC088u, 0x1CC090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC090u;
label_1cc090:
    // 0x1cc090: 0xc068998  jal         func_1A2660
label_1cc094:
    if (ctx->pc == 0x1CC094u) {
        ctx->pc = 0x1CC094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC090u;
        // 0x1cc094: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC098u;
        goto label_1cc098;
    }
    ctx->pc = 0x1CC090u;
    SET_GPR_U32(ctx, 31, 0x1CC098u);
    ctx->pc = 0x1CC094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC090u;
    // 0x1cc094: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1CC090u, 0x1CC098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC098u;
label_1cc098:
    // 0x1cc098: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x1cc098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_1cc09c:
    // 0x1cc09c: 0xc09d18e  jal         func_274638
label_1cc0a0:
    if (ctx->pc == 0x1CC0A0u) {
        ctx->pc = 0x1CC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC09Cu;
        // 0x1cc0a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC0A4u;
        goto label_1cc0a4;
    }
    ctx->pc = 0x1CC09Cu;
    SET_GPR_U32(ctx, 31, 0x1CC0A4u);
    ctx->pc = 0x1CC0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC09Cu;
    // 0x1cc0a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274638u, 0x1CC09Cu, 0x1CC0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC0A4u;
label_1cc0a4:
    // 0x1cc0a4: 0x8fab0190  lw          $t3, 0x190($sp)
    ctx->pc = 0x1cc0a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_1cc0a8:
    // 0x1cc0a8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1cc0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cc0ac:
    // 0x1cc0ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1cc0acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1cc0b0:
    // 0x1cc0b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1cc0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cc0b4:
    // 0x1cc0b4: 0x8d620640  lw          $v0, 0x640($t3)
    ctx->pc = 0x1cc0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1600)));
label_1cc0b8:
    // 0x1cc0b8: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x1cc0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_1cc0bc:
    // 0x1cc0bc: 0xc060b58  jal         func_182D60
label_1cc0c0:
    if (ctx->pc == 0x1CC0C0u) {
        ctx->pc = 0x1CC0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC0BCu;
        // 0x1cc0c0: 0xa3a30117  sb          $v1, 0x117($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 279), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC0C4u;
        goto label_1cc0c4;
    }
    ctx->pc = 0x1CC0BCu;
    SET_GPR_U32(ctx, 31, 0x1CC0C4u);
    ctx->pc = 0x1CC0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC0BCu;
    // 0x1cc0c0: 0xa3a30117  sb          $v1, 0x117($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 279), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1CC0BCu, 0x1CC0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC0C4u;
label_1cc0c4:
    // 0x1cc0c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc0c8:
    // 0x1cc0c8: 0xc06078e  jal         func_181E38
label_1cc0cc:
    if (ctx->pc == 0x1CC0CCu) {
        ctx->pc = 0x1CC0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC0C8u;
        // 0x1cc0cc: 0x2405004e  addiu       $a1, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC0D0u;
        goto label_1cc0d0;
    }
    ctx->pc = 0x1CC0C8u;
    SET_GPR_U32(ctx, 31, 0x1CC0D0u);
    ctx->pc = 0x1CC0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC0C8u;
    // 0x1cc0cc: 0x2405004e  addiu       $a1, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x1CC0C8u, 0x1CC0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC0D0u;
label_1cc0d0:
    // 0x1cc0d0: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x1cc0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1cc0d4:
    // 0x1cc0d4: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x1cc0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1cc0d8:
    // 0x1cc0d8: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x1cc0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1cc0dc:
    // 0x1cc0dc: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x1cc0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1cc0e0:
    // 0x1cc0e0: 0xb3a4010b  sdl         $a0, 0x10B($sp)
    ctx->pc = 0x1cc0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cc0e4:
    // 0x1cc0e4: 0xb7a40104  sdr         $a0, 0x104($sp)
    ctx->pc = 0x1cc0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cc0e8:
    // 0x1cc0e8: 0xb3a50113  sdl         $a1, 0x113($sp)
    ctx->pc = 0x1cc0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cc0ec:
    // 0x1cc0ec: 0xb7a5010c  sdr         $a1, 0x10C($sp)
    ctx->pc = 0x1cc0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cc0f0:
    // 0x1cc0f0: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x1cc0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1cc0f4:
    // 0x1cc0f4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1cc0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cc0f8:
    // 0x1cc0f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cc0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1cc0fc:
    // 0x1cc0fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc0fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cc100:
    // 0x1cc100: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x1cc100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1cc104:
    // 0x1cc104: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cc104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc108:
    // 0x1cc108: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1cc108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc10c:
    // 0x1cc10c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1cc10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cc110:
    // 0x1cc110: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x1cc110u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_1cc114:
    // 0x1cc114: 0xc7a30158  lwc1        $f3, 0x158($sp)
    ctx->pc = 0x1cc114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cc118:
    // 0x1cc118: 0xc4650010  lwc1        $f5, 0x10($v1)
    ctx->pc = 0x1cc118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1cc11c:
    // 0x1cc11c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1cc11cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1cc120:
    // 0x1cc120: 0xc7a20154  lwc1        $f2, 0x154($sp)
    ctx->pc = 0x1cc120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc124:
    // 0x1cc124: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1cc124u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_1cc128:
    // 0x1cc128: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1cc128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc12c:
    // 0x1cc12c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1cc12cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1cc130:
    // 0x1cc130: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cc130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cc134:
    // 0x1cc134: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1cc134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1cc138:
    // 0x1cc138: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1cc138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_1cc13c:
    // 0x1cc13c: 0x8fa801b0  lw          $t0, 0x1B0($sp)
    ctx->pc = 0x1cc13cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_1cc140:
    // 0x1cc140: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1cc140u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1cc144:
    // 0x1cc144: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x1cc144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1cc148:
    // 0x1cc148: 0x8fa501ac  lw          $a1, 0x1AC($sp)
    ctx->pc = 0x1cc148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_1cc14c:
    // 0x1cc14c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1cc14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1cc150:
    // 0x1cc150: 0xe7a300e4  swc1        $f3, 0xE4($sp)
    ctx->pc = 0x1cc150u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1cc154:
    // 0x1cc154: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x1cc154u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1cc158:
    // 0x1cc158: 0xe506000c  swc1        $f6, 0xC($t0)
    ctx->pc = 0x1cc158u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_1cc15c:
    // 0x1cc15c: 0xe7a500f0  swc1        $f5, 0xF0($sp)
    ctx->pc = 0x1cc15cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1cc160:
    // 0x1cc160: 0xc060b78  jal         func_182DE0
label_1cc164:
    if (ctx->pc == 0x1CC164u) {
        ctx->pc = 0x1CC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC160u;
        // 0x1cc164: 0xe7a400f4  swc1        $f4, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC168u;
        goto label_1cc168;
    }
    ctx->pc = 0x1CC160u;
    SET_GPR_U32(ctx, 31, 0x1CC168u);
    ctx->pc = 0x1CC164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC160u;
    // 0x1cc164: 0xe7a400f4  swc1        $f4, 0xF4($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x1CC160u, 0x1CC168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC168u;
label_1cc168:
    // 0x1cc168: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x1cc168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_1cc16c:
    // 0x1cc16c: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x1cc16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_1cc170:
    // 0x1cc170: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x1cc170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_1cc174:
    // 0x1cc174: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x1cc174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_1cc178:
    // 0x1cc178: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x1cc178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_1cc17c:
    // 0x1cc17c: 0x7bb50200  lq          $s5, 0x200($sp)
    ctx->pc = 0x1cc17cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_1cc180:
    // 0x1cc180: 0x7bb601f0  lq          $s6, 0x1F0($sp)
    ctx->pc = 0x1cc180u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_1cc184:
    // 0x1cc184: 0x7bb701e0  lq          $s7, 0x1E0($sp)
    ctx->pc = 0x1cc184u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_1cc188:
    // 0x1cc188: 0x7bbe01d0  lq          $fp, 0x1D0($sp)
    ctx->pc = 0x1cc188u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_1cc18c:
    // 0x1cc18c: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x1cc18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_1cc190:
    // 0x1cc190: 0xc7b40260  lwc1        $f20, 0x260($sp)
    ctx->pc = 0x1cc190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cc194:
    // 0x1cc194: 0x3e00008  jr          $ra
label_1cc198:
    if (ctx->pc == 0x1CC198u) {
        ctx->pc = 0x1CC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC194u;
        // 0x1cc198: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC19Cu;
        goto label_1cc19c;
    }
    ctx->pc = 0x1CC194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC194u;
        // 0x1cc198: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC19Cu;
label_1cc19c:
    // 0x1cc19c: 0x0  nop
    ctx->pc = 0x1cc19cu;
    // NOP
    ctx->pc = 0x1cc1a0u;
}
