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

// Function: sub_002CB5D0
// Address: 0x2cb5d0 - 0x2cc348
void sub_002CB5D0_0x2cb5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB5D0_0x2cb5d0");
#endif

    switch (ctx->pc) {
        case 0x2cb5d0u: goto label_2cb5d0;
        case 0x2cb5d4u: goto label_2cb5d4;
        case 0x2cb5d8u: goto label_2cb5d8;
        case 0x2cb5dcu: goto label_2cb5dc;
        case 0x2cb5e0u: goto label_2cb5e0;
        case 0x2cb5e4u: goto label_2cb5e4;
        case 0x2cb5e8u: goto label_2cb5e8;
        case 0x2cb5ecu: goto label_2cb5ec;
        case 0x2cb5f0u: goto label_2cb5f0;
        case 0x2cb5f4u: goto label_2cb5f4;
        case 0x2cb5f8u: goto label_2cb5f8;
        case 0x2cb5fcu: goto label_2cb5fc;
        case 0x2cb600u: goto label_2cb600;
        case 0x2cb604u: goto label_2cb604;
        case 0x2cb608u: goto label_2cb608;
        case 0x2cb60cu: goto label_2cb60c;
        case 0x2cb610u: goto label_2cb610;
        case 0x2cb614u: goto label_2cb614;
        case 0x2cb618u: goto label_2cb618;
        case 0x2cb61cu: goto label_2cb61c;
        case 0x2cb620u: goto label_2cb620;
        case 0x2cb624u: goto label_2cb624;
        case 0x2cb628u: goto label_2cb628;
        case 0x2cb62cu: goto label_2cb62c;
        case 0x2cb630u: goto label_2cb630;
        case 0x2cb634u: goto label_2cb634;
        case 0x2cb638u: goto label_2cb638;
        case 0x2cb63cu: goto label_2cb63c;
        case 0x2cb640u: goto label_2cb640;
        case 0x2cb644u: goto label_2cb644;
        case 0x2cb648u: goto label_2cb648;
        case 0x2cb64cu: goto label_2cb64c;
        case 0x2cb650u: goto label_2cb650;
        case 0x2cb654u: goto label_2cb654;
        case 0x2cb658u: goto label_2cb658;
        case 0x2cb65cu: goto label_2cb65c;
        case 0x2cb660u: goto label_2cb660;
        case 0x2cb664u: goto label_2cb664;
        case 0x2cb668u: goto label_2cb668;
        case 0x2cb66cu: goto label_2cb66c;
        case 0x2cb670u: goto label_2cb670;
        case 0x2cb674u: goto label_2cb674;
        case 0x2cb678u: goto label_2cb678;
        case 0x2cb67cu: goto label_2cb67c;
        case 0x2cb680u: goto label_2cb680;
        case 0x2cb684u: goto label_2cb684;
        case 0x2cb688u: goto label_2cb688;
        case 0x2cb68cu: goto label_2cb68c;
        case 0x2cb690u: goto label_2cb690;
        case 0x2cb694u: goto label_2cb694;
        case 0x2cb698u: goto label_2cb698;
        case 0x2cb69cu: goto label_2cb69c;
        case 0x2cb6a0u: goto label_2cb6a0;
        case 0x2cb6a4u: goto label_2cb6a4;
        case 0x2cb6a8u: goto label_2cb6a8;
        case 0x2cb6acu: goto label_2cb6ac;
        case 0x2cb6b0u: goto label_2cb6b0;
        case 0x2cb6b4u: goto label_2cb6b4;
        case 0x2cb6b8u: goto label_2cb6b8;
        case 0x2cb6bcu: goto label_2cb6bc;
        case 0x2cb6c0u: goto label_2cb6c0;
        case 0x2cb6c4u: goto label_2cb6c4;
        case 0x2cb6c8u: goto label_2cb6c8;
        case 0x2cb6ccu: goto label_2cb6cc;
        case 0x2cb6d0u: goto label_2cb6d0;
        case 0x2cb6d4u: goto label_2cb6d4;
        case 0x2cb6d8u: goto label_2cb6d8;
        case 0x2cb6dcu: goto label_2cb6dc;
        case 0x2cb6e0u: goto label_2cb6e0;
        case 0x2cb6e4u: goto label_2cb6e4;
        case 0x2cb6e8u: goto label_2cb6e8;
        case 0x2cb6ecu: goto label_2cb6ec;
        case 0x2cb6f0u: goto label_2cb6f0;
        case 0x2cb6f4u: goto label_2cb6f4;
        case 0x2cb6f8u: goto label_2cb6f8;
        case 0x2cb6fcu: goto label_2cb6fc;
        case 0x2cb700u: goto label_2cb700;
        case 0x2cb704u: goto label_2cb704;
        case 0x2cb708u: goto label_2cb708;
        case 0x2cb70cu: goto label_2cb70c;
        case 0x2cb710u: goto label_2cb710;
        case 0x2cb714u: goto label_2cb714;
        case 0x2cb718u: goto label_2cb718;
        case 0x2cb71cu: goto label_2cb71c;
        case 0x2cb720u: goto label_2cb720;
        case 0x2cb724u: goto label_2cb724;
        case 0x2cb728u: goto label_2cb728;
        case 0x2cb72cu: goto label_2cb72c;
        case 0x2cb730u: goto label_2cb730;
        case 0x2cb734u: goto label_2cb734;
        case 0x2cb738u: goto label_2cb738;
        case 0x2cb73cu: goto label_2cb73c;
        case 0x2cb740u: goto label_2cb740;
        case 0x2cb744u: goto label_2cb744;
        case 0x2cb748u: goto label_2cb748;
        case 0x2cb74cu: goto label_2cb74c;
        case 0x2cb750u: goto label_2cb750;
        case 0x2cb754u: goto label_2cb754;
        case 0x2cb758u: goto label_2cb758;
        case 0x2cb75cu: goto label_2cb75c;
        case 0x2cb760u: goto label_2cb760;
        case 0x2cb764u: goto label_2cb764;
        case 0x2cb768u: goto label_2cb768;
        case 0x2cb76cu: goto label_2cb76c;
        case 0x2cb770u: goto label_2cb770;
        case 0x2cb774u: goto label_2cb774;
        case 0x2cb778u: goto label_2cb778;
        case 0x2cb77cu: goto label_2cb77c;
        case 0x2cb780u: goto label_2cb780;
        case 0x2cb784u: goto label_2cb784;
        case 0x2cb788u: goto label_2cb788;
        case 0x2cb78cu: goto label_2cb78c;
        case 0x2cb790u: goto label_2cb790;
        case 0x2cb794u: goto label_2cb794;
        case 0x2cb798u: goto label_2cb798;
        case 0x2cb79cu: goto label_2cb79c;
        case 0x2cb7a0u: goto label_2cb7a0;
        case 0x2cb7a4u: goto label_2cb7a4;
        case 0x2cb7a8u: goto label_2cb7a8;
        case 0x2cb7acu: goto label_2cb7ac;
        case 0x2cb7b0u: goto label_2cb7b0;
        case 0x2cb7b4u: goto label_2cb7b4;
        case 0x2cb7b8u: goto label_2cb7b8;
        case 0x2cb7bcu: goto label_2cb7bc;
        case 0x2cb7c0u: goto label_2cb7c0;
        case 0x2cb7c4u: goto label_2cb7c4;
        case 0x2cb7c8u: goto label_2cb7c8;
        case 0x2cb7ccu: goto label_2cb7cc;
        case 0x2cb7d0u: goto label_2cb7d0;
        case 0x2cb7d4u: goto label_2cb7d4;
        case 0x2cb7d8u: goto label_2cb7d8;
        case 0x2cb7dcu: goto label_2cb7dc;
        case 0x2cb7e0u: goto label_2cb7e0;
        case 0x2cb7e4u: goto label_2cb7e4;
        case 0x2cb7e8u: goto label_2cb7e8;
        case 0x2cb7ecu: goto label_2cb7ec;
        case 0x2cb7f0u: goto label_2cb7f0;
        case 0x2cb7f4u: goto label_2cb7f4;
        case 0x2cb7f8u: goto label_2cb7f8;
        case 0x2cb7fcu: goto label_2cb7fc;
        case 0x2cb800u: goto label_2cb800;
        case 0x2cb804u: goto label_2cb804;
        case 0x2cb808u: goto label_2cb808;
        case 0x2cb80cu: goto label_2cb80c;
        case 0x2cb810u: goto label_2cb810;
        case 0x2cb814u: goto label_2cb814;
        case 0x2cb818u: goto label_2cb818;
        case 0x2cb81cu: goto label_2cb81c;
        case 0x2cb820u: goto label_2cb820;
        case 0x2cb824u: goto label_2cb824;
        case 0x2cb828u: goto label_2cb828;
        case 0x2cb82cu: goto label_2cb82c;
        case 0x2cb830u: goto label_2cb830;
        case 0x2cb834u: goto label_2cb834;
        case 0x2cb838u: goto label_2cb838;
        case 0x2cb83cu: goto label_2cb83c;
        case 0x2cb840u: goto label_2cb840;
        case 0x2cb844u: goto label_2cb844;
        case 0x2cb848u: goto label_2cb848;
        case 0x2cb84cu: goto label_2cb84c;
        case 0x2cb850u: goto label_2cb850;
        case 0x2cb854u: goto label_2cb854;
        case 0x2cb858u: goto label_2cb858;
        case 0x2cb85cu: goto label_2cb85c;
        case 0x2cb860u: goto label_2cb860;
        case 0x2cb864u: goto label_2cb864;
        case 0x2cb868u: goto label_2cb868;
        case 0x2cb86cu: goto label_2cb86c;
        case 0x2cb870u: goto label_2cb870;
        case 0x2cb874u: goto label_2cb874;
        case 0x2cb878u: goto label_2cb878;
        case 0x2cb87cu: goto label_2cb87c;
        case 0x2cb880u: goto label_2cb880;
        case 0x2cb884u: goto label_2cb884;
        case 0x2cb888u: goto label_2cb888;
        case 0x2cb88cu: goto label_2cb88c;
        case 0x2cb890u: goto label_2cb890;
        case 0x2cb894u: goto label_2cb894;
        case 0x2cb898u: goto label_2cb898;
        case 0x2cb89cu: goto label_2cb89c;
        case 0x2cb8a0u: goto label_2cb8a0;
        case 0x2cb8a4u: goto label_2cb8a4;
        case 0x2cb8a8u: goto label_2cb8a8;
        case 0x2cb8acu: goto label_2cb8ac;
        case 0x2cb8b0u: goto label_2cb8b0;
        case 0x2cb8b4u: goto label_2cb8b4;
        case 0x2cb8b8u: goto label_2cb8b8;
        case 0x2cb8bcu: goto label_2cb8bc;
        case 0x2cb8c0u: goto label_2cb8c0;
        case 0x2cb8c4u: goto label_2cb8c4;
        case 0x2cb8c8u: goto label_2cb8c8;
        case 0x2cb8ccu: goto label_2cb8cc;
        case 0x2cb8d0u: goto label_2cb8d0;
        case 0x2cb8d4u: goto label_2cb8d4;
        case 0x2cb8d8u: goto label_2cb8d8;
        case 0x2cb8dcu: goto label_2cb8dc;
        case 0x2cb8e0u: goto label_2cb8e0;
        case 0x2cb8e4u: goto label_2cb8e4;
        case 0x2cb8e8u: goto label_2cb8e8;
        case 0x2cb8ecu: goto label_2cb8ec;
        case 0x2cb8f0u: goto label_2cb8f0;
        case 0x2cb8f4u: goto label_2cb8f4;
        case 0x2cb8f8u: goto label_2cb8f8;
        case 0x2cb8fcu: goto label_2cb8fc;
        case 0x2cb900u: goto label_2cb900;
        case 0x2cb904u: goto label_2cb904;
        case 0x2cb908u: goto label_2cb908;
        case 0x2cb90cu: goto label_2cb90c;
        case 0x2cb910u: goto label_2cb910;
        case 0x2cb914u: goto label_2cb914;
        case 0x2cb918u: goto label_2cb918;
        case 0x2cb91cu: goto label_2cb91c;
        case 0x2cb920u: goto label_2cb920;
        case 0x2cb924u: goto label_2cb924;
        case 0x2cb928u: goto label_2cb928;
        case 0x2cb92cu: goto label_2cb92c;
        case 0x2cb930u: goto label_2cb930;
        case 0x2cb934u: goto label_2cb934;
        case 0x2cb938u: goto label_2cb938;
        case 0x2cb93cu: goto label_2cb93c;
        case 0x2cb940u: goto label_2cb940;
        case 0x2cb944u: goto label_2cb944;
        case 0x2cb948u: goto label_2cb948;
        case 0x2cb94cu: goto label_2cb94c;
        case 0x2cb950u: goto label_2cb950;
        case 0x2cb954u: goto label_2cb954;
        case 0x2cb958u: goto label_2cb958;
        case 0x2cb95cu: goto label_2cb95c;
        case 0x2cb960u: goto label_2cb960;
        case 0x2cb964u: goto label_2cb964;
        case 0x2cb968u: goto label_2cb968;
        case 0x2cb96cu: goto label_2cb96c;
        case 0x2cb970u: goto label_2cb970;
        case 0x2cb974u: goto label_2cb974;
        case 0x2cb978u: goto label_2cb978;
        case 0x2cb97cu: goto label_2cb97c;
        case 0x2cb980u: goto label_2cb980;
        case 0x2cb984u: goto label_2cb984;
        case 0x2cb988u: goto label_2cb988;
        case 0x2cb98cu: goto label_2cb98c;
        case 0x2cb990u: goto label_2cb990;
        case 0x2cb994u: goto label_2cb994;
        case 0x2cb998u: goto label_2cb998;
        case 0x2cb99cu: goto label_2cb99c;
        case 0x2cb9a0u: goto label_2cb9a0;
        case 0x2cb9a4u: goto label_2cb9a4;
        case 0x2cb9a8u: goto label_2cb9a8;
        case 0x2cb9acu: goto label_2cb9ac;
        case 0x2cb9b0u: goto label_2cb9b0;
        case 0x2cb9b4u: goto label_2cb9b4;
        case 0x2cb9b8u: goto label_2cb9b8;
        case 0x2cb9bcu: goto label_2cb9bc;
        case 0x2cb9c0u: goto label_2cb9c0;
        case 0x2cb9c4u: goto label_2cb9c4;
        case 0x2cb9c8u: goto label_2cb9c8;
        case 0x2cb9ccu: goto label_2cb9cc;
        case 0x2cb9d0u: goto label_2cb9d0;
        case 0x2cb9d4u: goto label_2cb9d4;
        case 0x2cb9d8u: goto label_2cb9d8;
        case 0x2cb9dcu: goto label_2cb9dc;
        case 0x2cb9e0u: goto label_2cb9e0;
        case 0x2cb9e4u: goto label_2cb9e4;
        case 0x2cb9e8u: goto label_2cb9e8;
        case 0x2cb9ecu: goto label_2cb9ec;
        case 0x2cb9f0u: goto label_2cb9f0;
        case 0x2cb9f4u: goto label_2cb9f4;
        case 0x2cb9f8u: goto label_2cb9f8;
        case 0x2cb9fcu: goto label_2cb9fc;
        case 0x2cba00u: goto label_2cba00;
        case 0x2cba04u: goto label_2cba04;
        case 0x2cba08u: goto label_2cba08;
        case 0x2cba0cu: goto label_2cba0c;
        case 0x2cba10u: goto label_2cba10;
        case 0x2cba14u: goto label_2cba14;
        case 0x2cba18u: goto label_2cba18;
        case 0x2cba1cu: goto label_2cba1c;
        case 0x2cba20u: goto label_2cba20;
        case 0x2cba24u: goto label_2cba24;
        case 0x2cba28u: goto label_2cba28;
        case 0x2cba2cu: goto label_2cba2c;
        case 0x2cba30u: goto label_2cba30;
        case 0x2cba34u: goto label_2cba34;
        case 0x2cba38u: goto label_2cba38;
        case 0x2cba3cu: goto label_2cba3c;
        case 0x2cba40u: goto label_2cba40;
        case 0x2cba44u: goto label_2cba44;
        case 0x2cba48u: goto label_2cba48;
        case 0x2cba4cu: goto label_2cba4c;
        case 0x2cba50u: goto label_2cba50;
        case 0x2cba54u: goto label_2cba54;
        case 0x2cba58u: goto label_2cba58;
        case 0x2cba5cu: goto label_2cba5c;
        case 0x2cba60u: goto label_2cba60;
        case 0x2cba64u: goto label_2cba64;
        case 0x2cba68u: goto label_2cba68;
        case 0x2cba6cu: goto label_2cba6c;
        case 0x2cba70u: goto label_2cba70;
        case 0x2cba74u: goto label_2cba74;
        case 0x2cba78u: goto label_2cba78;
        case 0x2cba7cu: goto label_2cba7c;
        case 0x2cba80u: goto label_2cba80;
        case 0x2cba84u: goto label_2cba84;
        case 0x2cba88u: goto label_2cba88;
        case 0x2cba8cu: goto label_2cba8c;
        case 0x2cba90u: goto label_2cba90;
        case 0x2cba94u: goto label_2cba94;
        case 0x2cba98u: goto label_2cba98;
        case 0x2cba9cu: goto label_2cba9c;
        case 0x2cbaa0u: goto label_2cbaa0;
        case 0x2cbaa4u: goto label_2cbaa4;
        case 0x2cbaa8u: goto label_2cbaa8;
        case 0x2cbaacu: goto label_2cbaac;
        case 0x2cbab0u: goto label_2cbab0;
        case 0x2cbab4u: goto label_2cbab4;
        case 0x2cbab8u: goto label_2cbab8;
        case 0x2cbabcu: goto label_2cbabc;
        case 0x2cbac0u: goto label_2cbac0;
        case 0x2cbac4u: goto label_2cbac4;
        case 0x2cbac8u: goto label_2cbac8;
        case 0x2cbaccu: goto label_2cbacc;
        case 0x2cbad0u: goto label_2cbad0;
        case 0x2cbad4u: goto label_2cbad4;
        case 0x2cbad8u: goto label_2cbad8;
        case 0x2cbadcu: goto label_2cbadc;
        case 0x2cbae0u: goto label_2cbae0;
        case 0x2cbae4u: goto label_2cbae4;
        case 0x2cbae8u: goto label_2cbae8;
        case 0x2cbaecu: goto label_2cbaec;
        case 0x2cbaf0u: goto label_2cbaf0;
        case 0x2cbaf4u: goto label_2cbaf4;
        case 0x2cbaf8u: goto label_2cbaf8;
        case 0x2cbafcu: goto label_2cbafc;
        case 0x2cbb00u: goto label_2cbb00;
        case 0x2cbb04u: goto label_2cbb04;
        case 0x2cbb08u: goto label_2cbb08;
        case 0x2cbb0cu: goto label_2cbb0c;
        case 0x2cbb10u: goto label_2cbb10;
        case 0x2cbb14u: goto label_2cbb14;
        case 0x2cbb18u: goto label_2cbb18;
        case 0x2cbb1cu: goto label_2cbb1c;
        case 0x2cbb20u: goto label_2cbb20;
        case 0x2cbb24u: goto label_2cbb24;
        case 0x2cbb28u: goto label_2cbb28;
        case 0x2cbb2cu: goto label_2cbb2c;
        case 0x2cbb30u: goto label_2cbb30;
        case 0x2cbb34u: goto label_2cbb34;
        case 0x2cbb38u: goto label_2cbb38;
        case 0x2cbb3cu: goto label_2cbb3c;
        case 0x2cbb40u: goto label_2cbb40;
        case 0x2cbb44u: goto label_2cbb44;
        case 0x2cbb48u: goto label_2cbb48;
        case 0x2cbb4cu: goto label_2cbb4c;
        case 0x2cbb50u: goto label_2cbb50;
        case 0x2cbb54u: goto label_2cbb54;
        case 0x2cbb58u: goto label_2cbb58;
        case 0x2cbb5cu: goto label_2cbb5c;
        case 0x2cbb60u: goto label_2cbb60;
        case 0x2cbb64u: goto label_2cbb64;
        case 0x2cbb68u: goto label_2cbb68;
        case 0x2cbb6cu: goto label_2cbb6c;
        case 0x2cbb70u: goto label_2cbb70;
        case 0x2cbb74u: goto label_2cbb74;
        case 0x2cbb78u: goto label_2cbb78;
        case 0x2cbb7cu: goto label_2cbb7c;
        case 0x2cbb80u: goto label_2cbb80;
        case 0x2cbb84u: goto label_2cbb84;
        case 0x2cbb88u: goto label_2cbb88;
        case 0x2cbb8cu: goto label_2cbb8c;
        case 0x2cbb90u: goto label_2cbb90;
        case 0x2cbb94u: goto label_2cbb94;
        case 0x2cbb98u: goto label_2cbb98;
        case 0x2cbb9cu: goto label_2cbb9c;
        case 0x2cbba0u: goto label_2cbba0;
        case 0x2cbba4u: goto label_2cbba4;
        case 0x2cbba8u: goto label_2cbba8;
        case 0x2cbbacu: goto label_2cbbac;
        case 0x2cbbb0u: goto label_2cbbb0;
        case 0x2cbbb4u: goto label_2cbbb4;
        case 0x2cbbb8u: goto label_2cbbb8;
        case 0x2cbbbcu: goto label_2cbbbc;
        case 0x2cbbc0u: goto label_2cbbc0;
        case 0x2cbbc4u: goto label_2cbbc4;
        case 0x2cbbc8u: goto label_2cbbc8;
        case 0x2cbbccu: goto label_2cbbcc;
        case 0x2cbbd0u: goto label_2cbbd0;
        case 0x2cbbd4u: goto label_2cbbd4;
        case 0x2cbbd8u: goto label_2cbbd8;
        case 0x2cbbdcu: goto label_2cbbdc;
        case 0x2cbbe0u: goto label_2cbbe0;
        case 0x2cbbe4u: goto label_2cbbe4;
        case 0x2cbbe8u: goto label_2cbbe8;
        case 0x2cbbecu: goto label_2cbbec;
        case 0x2cbbf0u: goto label_2cbbf0;
        case 0x2cbbf4u: goto label_2cbbf4;
        case 0x2cbbf8u: goto label_2cbbf8;
        case 0x2cbbfcu: goto label_2cbbfc;
        case 0x2cbc00u: goto label_2cbc00;
        case 0x2cbc04u: goto label_2cbc04;
        case 0x2cbc08u: goto label_2cbc08;
        case 0x2cbc0cu: goto label_2cbc0c;
        case 0x2cbc10u: goto label_2cbc10;
        case 0x2cbc14u: goto label_2cbc14;
        case 0x2cbc18u: goto label_2cbc18;
        case 0x2cbc1cu: goto label_2cbc1c;
        case 0x2cbc20u: goto label_2cbc20;
        case 0x2cbc24u: goto label_2cbc24;
        case 0x2cbc28u: goto label_2cbc28;
        case 0x2cbc2cu: goto label_2cbc2c;
        case 0x2cbc30u: goto label_2cbc30;
        case 0x2cbc34u: goto label_2cbc34;
        case 0x2cbc38u: goto label_2cbc38;
        case 0x2cbc3cu: goto label_2cbc3c;
        case 0x2cbc40u: goto label_2cbc40;
        case 0x2cbc44u: goto label_2cbc44;
        case 0x2cbc48u: goto label_2cbc48;
        case 0x2cbc4cu: goto label_2cbc4c;
        case 0x2cbc50u: goto label_2cbc50;
        case 0x2cbc54u: goto label_2cbc54;
        case 0x2cbc58u: goto label_2cbc58;
        case 0x2cbc5cu: goto label_2cbc5c;
        case 0x2cbc60u: goto label_2cbc60;
        case 0x2cbc64u: goto label_2cbc64;
        case 0x2cbc68u: goto label_2cbc68;
        case 0x2cbc6cu: goto label_2cbc6c;
        case 0x2cbc70u: goto label_2cbc70;
        case 0x2cbc74u: goto label_2cbc74;
        case 0x2cbc78u: goto label_2cbc78;
        case 0x2cbc7cu: goto label_2cbc7c;
        case 0x2cbc80u: goto label_2cbc80;
        case 0x2cbc84u: goto label_2cbc84;
        case 0x2cbc88u: goto label_2cbc88;
        case 0x2cbc8cu: goto label_2cbc8c;
        case 0x2cbc90u: goto label_2cbc90;
        case 0x2cbc94u: goto label_2cbc94;
        case 0x2cbc98u: goto label_2cbc98;
        case 0x2cbc9cu: goto label_2cbc9c;
        case 0x2cbca0u: goto label_2cbca0;
        case 0x2cbca4u: goto label_2cbca4;
        case 0x2cbca8u: goto label_2cbca8;
        case 0x2cbcacu: goto label_2cbcac;
        case 0x2cbcb0u: goto label_2cbcb0;
        case 0x2cbcb4u: goto label_2cbcb4;
        case 0x2cbcb8u: goto label_2cbcb8;
        case 0x2cbcbcu: goto label_2cbcbc;
        case 0x2cbcc0u: goto label_2cbcc0;
        case 0x2cbcc4u: goto label_2cbcc4;
        case 0x2cbcc8u: goto label_2cbcc8;
        case 0x2cbcccu: goto label_2cbccc;
        case 0x2cbcd0u: goto label_2cbcd0;
        case 0x2cbcd4u: goto label_2cbcd4;
        case 0x2cbcd8u: goto label_2cbcd8;
        case 0x2cbcdcu: goto label_2cbcdc;
        case 0x2cbce0u: goto label_2cbce0;
        case 0x2cbce4u: goto label_2cbce4;
        case 0x2cbce8u: goto label_2cbce8;
        case 0x2cbcecu: goto label_2cbcec;
        case 0x2cbcf0u: goto label_2cbcf0;
        case 0x2cbcf4u: goto label_2cbcf4;
        case 0x2cbcf8u: goto label_2cbcf8;
        case 0x2cbcfcu: goto label_2cbcfc;
        case 0x2cbd00u: goto label_2cbd00;
        case 0x2cbd04u: goto label_2cbd04;
        case 0x2cbd08u: goto label_2cbd08;
        case 0x2cbd0cu: goto label_2cbd0c;
        case 0x2cbd10u: goto label_2cbd10;
        case 0x2cbd14u: goto label_2cbd14;
        case 0x2cbd18u: goto label_2cbd18;
        case 0x2cbd1cu: goto label_2cbd1c;
        case 0x2cbd20u: goto label_2cbd20;
        case 0x2cbd24u: goto label_2cbd24;
        case 0x2cbd28u: goto label_2cbd28;
        case 0x2cbd2cu: goto label_2cbd2c;
        case 0x2cbd30u: goto label_2cbd30;
        case 0x2cbd34u: goto label_2cbd34;
        case 0x2cbd38u: goto label_2cbd38;
        case 0x2cbd3cu: goto label_2cbd3c;
        case 0x2cbd40u: goto label_2cbd40;
        case 0x2cbd44u: goto label_2cbd44;
        case 0x2cbd48u: goto label_2cbd48;
        case 0x2cbd4cu: goto label_2cbd4c;
        case 0x2cbd50u: goto label_2cbd50;
        case 0x2cbd54u: goto label_2cbd54;
        case 0x2cbd58u: goto label_2cbd58;
        case 0x2cbd5cu: goto label_2cbd5c;
        case 0x2cbd60u: goto label_2cbd60;
        case 0x2cbd64u: goto label_2cbd64;
        case 0x2cbd68u: goto label_2cbd68;
        case 0x2cbd6cu: goto label_2cbd6c;
        case 0x2cbd70u: goto label_2cbd70;
        case 0x2cbd74u: goto label_2cbd74;
        case 0x2cbd78u: goto label_2cbd78;
        case 0x2cbd7cu: goto label_2cbd7c;
        case 0x2cbd80u: goto label_2cbd80;
        case 0x2cbd84u: goto label_2cbd84;
        case 0x2cbd88u: goto label_2cbd88;
        case 0x2cbd8cu: goto label_2cbd8c;
        case 0x2cbd90u: goto label_2cbd90;
        case 0x2cbd94u: goto label_2cbd94;
        case 0x2cbd98u: goto label_2cbd98;
        case 0x2cbd9cu: goto label_2cbd9c;
        case 0x2cbda0u: goto label_2cbda0;
        case 0x2cbda4u: goto label_2cbda4;
        case 0x2cbda8u: goto label_2cbda8;
        case 0x2cbdacu: goto label_2cbdac;
        case 0x2cbdb0u: goto label_2cbdb0;
        case 0x2cbdb4u: goto label_2cbdb4;
        case 0x2cbdb8u: goto label_2cbdb8;
        case 0x2cbdbcu: goto label_2cbdbc;
        case 0x2cbdc0u: goto label_2cbdc0;
        case 0x2cbdc4u: goto label_2cbdc4;
        case 0x2cbdc8u: goto label_2cbdc8;
        case 0x2cbdccu: goto label_2cbdcc;
        case 0x2cbdd0u: goto label_2cbdd0;
        case 0x2cbdd4u: goto label_2cbdd4;
        case 0x2cbdd8u: goto label_2cbdd8;
        case 0x2cbddcu: goto label_2cbddc;
        case 0x2cbde0u: goto label_2cbde0;
        case 0x2cbde4u: goto label_2cbde4;
        case 0x2cbde8u: goto label_2cbde8;
        case 0x2cbdecu: goto label_2cbdec;
        case 0x2cbdf0u: goto label_2cbdf0;
        case 0x2cbdf4u: goto label_2cbdf4;
        case 0x2cbdf8u: goto label_2cbdf8;
        case 0x2cbdfcu: goto label_2cbdfc;
        case 0x2cbe00u: goto label_2cbe00;
        case 0x2cbe04u: goto label_2cbe04;
        case 0x2cbe08u: goto label_2cbe08;
        case 0x2cbe0cu: goto label_2cbe0c;
        case 0x2cbe10u: goto label_2cbe10;
        case 0x2cbe14u: goto label_2cbe14;
        case 0x2cbe18u: goto label_2cbe18;
        case 0x2cbe1cu: goto label_2cbe1c;
        case 0x2cbe20u: goto label_2cbe20;
        case 0x2cbe24u: goto label_2cbe24;
        case 0x2cbe28u: goto label_2cbe28;
        case 0x2cbe2cu: goto label_2cbe2c;
        case 0x2cbe30u: goto label_2cbe30;
        case 0x2cbe34u: goto label_2cbe34;
        case 0x2cbe38u: goto label_2cbe38;
        case 0x2cbe3cu: goto label_2cbe3c;
        case 0x2cbe40u: goto label_2cbe40;
        case 0x2cbe44u: goto label_2cbe44;
        case 0x2cbe48u: goto label_2cbe48;
        case 0x2cbe4cu: goto label_2cbe4c;
        case 0x2cbe50u: goto label_2cbe50;
        case 0x2cbe54u: goto label_2cbe54;
        case 0x2cbe58u: goto label_2cbe58;
        case 0x2cbe5cu: goto label_2cbe5c;
        case 0x2cbe60u: goto label_2cbe60;
        case 0x2cbe64u: goto label_2cbe64;
        case 0x2cbe68u: goto label_2cbe68;
        case 0x2cbe6cu: goto label_2cbe6c;
        case 0x2cbe70u: goto label_2cbe70;
        case 0x2cbe74u: goto label_2cbe74;
        case 0x2cbe78u: goto label_2cbe78;
        case 0x2cbe7cu: goto label_2cbe7c;
        case 0x2cbe80u: goto label_2cbe80;
        case 0x2cbe84u: goto label_2cbe84;
        case 0x2cbe88u: goto label_2cbe88;
        case 0x2cbe8cu: goto label_2cbe8c;
        case 0x2cbe90u: goto label_2cbe90;
        case 0x2cbe94u: goto label_2cbe94;
        case 0x2cbe98u: goto label_2cbe98;
        case 0x2cbe9cu: goto label_2cbe9c;
        case 0x2cbea0u: goto label_2cbea0;
        case 0x2cbea4u: goto label_2cbea4;
        case 0x2cbea8u: goto label_2cbea8;
        case 0x2cbeacu: goto label_2cbeac;
        case 0x2cbeb0u: goto label_2cbeb0;
        case 0x2cbeb4u: goto label_2cbeb4;
        case 0x2cbeb8u: goto label_2cbeb8;
        case 0x2cbebcu: goto label_2cbebc;
        case 0x2cbec0u: goto label_2cbec0;
        case 0x2cbec4u: goto label_2cbec4;
        case 0x2cbec8u: goto label_2cbec8;
        case 0x2cbeccu: goto label_2cbecc;
        case 0x2cbed0u: goto label_2cbed0;
        case 0x2cbed4u: goto label_2cbed4;
        case 0x2cbed8u: goto label_2cbed8;
        case 0x2cbedcu: goto label_2cbedc;
        case 0x2cbee0u: goto label_2cbee0;
        case 0x2cbee4u: goto label_2cbee4;
        case 0x2cbee8u: goto label_2cbee8;
        case 0x2cbeecu: goto label_2cbeec;
        case 0x2cbef0u: goto label_2cbef0;
        case 0x2cbef4u: goto label_2cbef4;
        case 0x2cbef8u: goto label_2cbef8;
        case 0x2cbefcu: goto label_2cbefc;
        case 0x2cbf00u: goto label_2cbf00;
        case 0x2cbf04u: goto label_2cbf04;
        case 0x2cbf08u: goto label_2cbf08;
        case 0x2cbf0cu: goto label_2cbf0c;
        case 0x2cbf10u: goto label_2cbf10;
        case 0x2cbf14u: goto label_2cbf14;
        case 0x2cbf18u: goto label_2cbf18;
        case 0x2cbf1cu: goto label_2cbf1c;
        case 0x2cbf20u: goto label_2cbf20;
        case 0x2cbf24u: goto label_2cbf24;
        case 0x2cbf28u: goto label_2cbf28;
        case 0x2cbf2cu: goto label_2cbf2c;
        case 0x2cbf30u: goto label_2cbf30;
        case 0x2cbf34u: goto label_2cbf34;
        case 0x2cbf38u: goto label_2cbf38;
        case 0x2cbf3cu: goto label_2cbf3c;
        case 0x2cbf40u: goto label_2cbf40;
        case 0x2cbf44u: goto label_2cbf44;
        case 0x2cbf48u: goto label_2cbf48;
        case 0x2cbf4cu: goto label_2cbf4c;
        case 0x2cbf50u: goto label_2cbf50;
        case 0x2cbf54u: goto label_2cbf54;
        case 0x2cbf58u: goto label_2cbf58;
        case 0x2cbf5cu: goto label_2cbf5c;
        case 0x2cbf60u: goto label_2cbf60;
        case 0x2cbf64u: goto label_2cbf64;
        case 0x2cbf68u: goto label_2cbf68;
        case 0x2cbf6cu: goto label_2cbf6c;
        case 0x2cbf70u: goto label_2cbf70;
        case 0x2cbf74u: goto label_2cbf74;
        case 0x2cbf78u: goto label_2cbf78;
        case 0x2cbf7cu: goto label_2cbf7c;
        case 0x2cbf80u: goto label_2cbf80;
        case 0x2cbf84u: goto label_2cbf84;
        case 0x2cbf88u: goto label_2cbf88;
        case 0x2cbf8cu: goto label_2cbf8c;
        case 0x2cbf90u: goto label_2cbf90;
        case 0x2cbf94u: goto label_2cbf94;
        case 0x2cbf98u: goto label_2cbf98;
        case 0x2cbf9cu: goto label_2cbf9c;
        case 0x2cbfa0u: goto label_2cbfa0;
        case 0x2cbfa4u: goto label_2cbfa4;
        case 0x2cbfa8u: goto label_2cbfa8;
        case 0x2cbfacu: goto label_2cbfac;
        case 0x2cbfb0u: goto label_2cbfb0;
        case 0x2cbfb4u: goto label_2cbfb4;
        case 0x2cbfb8u: goto label_2cbfb8;
        case 0x2cbfbcu: goto label_2cbfbc;
        case 0x2cbfc0u: goto label_2cbfc0;
        case 0x2cbfc4u: goto label_2cbfc4;
        case 0x2cbfc8u: goto label_2cbfc8;
        case 0x2cbfccu: goto label_2cbfcc;
        case 0x2cbfd0u: goto label_2cbfd0;
        case 0x2cbfd4u: goto label_2cbfd4;
        case 0x2cbfd8u: goto label_2cbfd8;
        case 0x2cbfdcu: goto label_2cbfdc;
        case 0x2cbfe0u: goto label_2cbfe0;
        case 0x2cbfe4u: goto label_2cbfe4;
        case 0x2cbfe8u: goto label_2cbfe8;
        case 0x2cbfecu: goto label_2cbfec;
        case 0x2cbff0u: goto label_2cbff0;
        case 0x2cbff4u: goto label_2cbff4;
        case 0x2cbff8u: goto label_2cbff8;
        case 0x2cbffcu: goto label_2cbffc;
        case 0x2cc000u: goto label_2cc000;
        case 0x2cc004u: goto label_2cc004;
        case 0x2cc008u: goto label_2cc008;
        case 0x2cc00cu: goto label_2cc00c;
        case 0x2cc010u: goto label_2cc010;
        case 0x2cc014u: goto label_2cc014;
        case 0x2cc018u: goto label_2cc018;
        case 0x2cc01cu: goto label_2cc01c;
        case 0x2cc020u: goto label_2cc020;
        case 0x2cc024u: goto label_2cc024;
        case 0x2cc028u: goto label_2cc028;
        case 0x2cc02cu: goto label_2cc02c;
        case 0x2cc030u: goto label_2cc030;
        case 0x2cc034u: goto label_2cc034;
        case 0x2cc038u: goto label_2cc038;
        case 0x2cc03cu: goto label_2cc03c;
        case 0x2cc040u: goto label_2cc040;
        case 0x2cc044u: goto label_2cc044;
        case 0x2cc048u: goto label_2cc048;
        case 0x2cc04cu: goto label_2cc04c;
        case 0x2cc050u: goto label_2cc050;
        case 0x2cc054u: goto label_2cc054;
        case 0x2cc058u: goto label_2cc058;
        case 0x2cc05cu: goto label_2cc05c;
        case 0x2cc060u: goto label_2cc060;
        case 0x2cc064u: goto label_2cc064;
        case 0x2cc068u: goto label_2cc068;
        case 0x2cc06cu: goto label_2cc06c;
        case 0x2cc070u: goto label_2cc070;
        case 0x2cc074u: goto label_2cc074;
        case 0x2cc078u: goto label_2cc078;
        case 0x2cc07cu: goto label_2cc07c;
        case 0x2cc080u: goto label_2cc080;
        case 0x2cc084u: goto label_2cc084;
        case 0x2cc088u: goto label_2cc088;
        case 0x2cc08cu: goto label_2cc08c;
        case 0x2cc090u: goto label_2cc090;
        case 0x2cc094u: goto label_2cc094;
        case 0x2cc098u: goto label_2cc098;
        case 0x2cc09cu: goto label_2cc09c;
        case 0x2cc0a0u: goto label_2cc0a0;
        case 0x2cc0a4u: goto label_2cc0a4;
        case 0x2cc0a8u: goto label_2cc0a8;
        case 0x2cc0acu: goto label_2cc0ac;
        case 0x2cc0b0u: goto label_2cc0b0;
        case 0x2cc0b4u: goto label_2cc0b4;
        case 0x2cc0b8u: goto label_2cc0b8;
        case 0x2cc0bcu: goto label_2cc0bc;
        case 0x2cc0c0u: goto label_2cc0c0;
        case 0x2cc0c4u: goto label_2cc0c4;
        case 0x2cc0c8u: goto label_2cc0c8;
        case 0x2cc0ccu: goto label_2cc0cc;
        case 0x2cc0d0u: goto label_2cc0d0;
        case 0x2cc0d4u: goto label_2cc0d4;
        case 0x2cc0d8u: goto label_2cc0d8;
        case 0x2cc0dcu: goto label_2cc0dc;
        case 0x2cc0e0u: goto label_2cc0e0;
        case 0x2cc0e4u: goto label_2cc0e4;
        case 0x2cc0e8u: goto label_2cc0e8;
        case 0x2cc0ecu: goto label_2cc0ec;
        case 0x2cc0f0u: goto label_2cc0f0;
        case 0x2cc0f4u: goto label_2cc0f4;
        case 0x2cc0f8u: goto label_2cc0f8;
        case 0x2cc0fcu: goto label_2cc0fc;
        case 0x2cc100u: goto label_2cc100;
        case 0x2cc104u: goto label_2cc104;
        case 0x2cc108u: goto label_2cc108;
        case 0x2cc10cu: goto label_2cc10c;
        case 0x2cc110u: goto label_2cc110;
        case 0x2cc114u: goto label_2cc114;
        case 0x2cc118u: goto label_2cc118;
        case 0x2cc11cu: goto label_2cc11c;
        case 0x2cc120u: goto label_2cc120;
        case 0x2cc124u: goto label_2cc124;
        case 0x2cc128u: goto label_2cc128;
        case 0x2cc12cu: goto label_2cc12c;
        case 0x2cc130u: goto label_2cc130;
        case 0x2cc134u: goto label_2cc134;
        case 0x2cc138u: goto label_2cc138;
        case 0x2cc13cu: goto label_2cc13c;
        case 0x2cc140u: goto label_2cc140;
        case 0x2cc144u: goto label_2cc144;
        case 0x2cc148u: goto label_2cc148;
        case 0x2cc14cu: goto label_2cc14c;
        case 0x2cc150u: goto label_2cc150;
        case 0x2cc154u: goto label_2cc154;
        case 0x2cc158u: goto label_2cc158;
        case 0x2cc15cu: goto label_2cc15c;
        case 0x2cc160u: goto label_2cc160;
        case 0x2cc164u: goto label_2cc164;
        case 0x2cc168u: goto label_2cc168;
        case 0x2cc16cu: goto label_2cc16c;
        case 0x2cc170u: goto label_2cc170;
        case 0x2cc174u: goto label_2cc174;
        case 0x2cc178u: goto label_2cc178;
        case 0x2cc17cu: goto label_2cc17c;
        case 0x2cc180u: goto label_2cc180;
        case 0x2cc184u: goto label_2cc184;
        case 0x2cc188u: goto label_2cc188;
        case 0x2cc18cu: goto label_2cc18c;
        case 0x2cc190u: goto label_2cc190;
        case 0x2cc194u: goto label_2cc194;
        case 0x2cc198u: goto label_2cc198;
        case 0x2cc19cu: goto label_2cc19c;
        case 0x2cc1a0u: goto label_2cc1a0;
        case 0x2cc1a4u: goto label_2cc1a4;
        case 0x2cc1a8u: goto label_2cc1a8;
        case 0x2cc1acu: goto label_2cc1ac;
        case 0x2cc1b0u: goto label_2cc1b0;
        case 0x2cc1b4u: goto label_2cc1b4;
        case 0x2cc1b8u: goto label_2cc1b8;
        case 0x2cc1bcu: goto label_2cc1bc;
        case 0x2cc1c0u: goto label_2cc1c0;
        case 0x2cc1c4u: goto label_2cc1c4;
        case 0x2cc1c8u: goto label_2cc1c8;
        case 0x2cc1ccu: goto label_2cc1cc;
        case 0x2cc1d0u: goto label_2cc1d0;
        case 0x2cc1d4u: goto label_2cc1d4;
        case 0x2cc1d8u: goto label_2cc1d8;
        case 0x2cc1dcu: goto label_2cc1dc;
        case 0x2cc1e0u: goto label_2cc1e0;
        case 0x2cc1e4u: goto label_2cc1e4;
        case 0x2cc1e8u: goto label_2cc1e8;
        case 0x2cc1ecu: goto label_2cc1ec;
        case 0x2cc1f0u: goto label_2cc1f0;
        case 0x2cc1f4u: goto label_2cc1f4;
        case 0x2cc1f8u: goto label_2cc1f8;
        case 0x2cc1fcu: goto label_2cc1fc;
        case 0x2cc200u: goto label_2cc200;
        case 0x2cc204u: goto label_2cc204;
        case 0x2cc208u: goto label_2cc208;
        case 0x2cc20cu: goto label_2cc20c;
        case 0x2cc210u: goto label_2cc210;
        case 0x2cc214u: goto label_2cc214;
        case 0x2cc218u: goto label_2cc218;
        case 0x2cc21cu: goto label_2cc21c;
        case 0x2cc220u: goto label_2cc220;
        case 0x2cc224u: goto label_2cc224;
        case 0x2cc228u: goto label_2cc228;
        case 0x2cc22cu: goto label_2cc22c;
        case 0x2cc230u: goto label_2cc230;
        case 0x2cc234u: goto label_2cc234;
        case 0x2cc238u: goto label_2cc238;
        case 0x2cc23cu: goto label_2cc23c;
        case 0x2cc240u: goto label_2cc240;
        case 0x2cc244u: goto label_2cc244;
        case 0x2cc248u: goto label_2cc248;
        case 0x2cc24cu: goto label_2cc24c;
        case 0x2cc250u: goto label_2cc250;
        case 0x2cc254u: goto label_2cc254;
        case 0x2cc258u: goto label_2cc258;
        case 0x2cc25cu: goto label_2cc25c;
        case 0x2cc260u: goto label_2cc260;
        case 0x2cc264u: goto label_2cc264;
        case 0x2cc268u: goto label_2cc268;
        case 0x2cc26cu: goto label_2cc26c;
        case 0x2cc270u: goto label_2cc270;
        case 0x2cc274u: goto label_2cc274;
        case 0x2cc278u: goto label_2cc278;
        case 0x2cc27cu: goto label_2cc27c;
        case 0x2cc280u: goto label_2cc280;
        case 0x2cc284u: goto label_2cc284;
        case 0x2cc288u: goto label_2cc288;
        case 0x2cc28cu: goto label_2cc28c;
        case 0x2cc290u: goto label_2cc290;
        case 0x2cc294u: goto label_2cc294;
        case 0x2cc298u: goto label_2cc298;
        case 0x2cc29cu: goto label_2cc29c;
        case 0x2cc2a0u: goto label_2cc2a0;
        case 0x2cc2a4u: goto label_2cc2a4;
        case 0x2cc2a8u: goto label_2cc2a8;
        case 0x2cc2acu: goto label_2cc2ac;
        case 0x2cc2b0u: goto label_2cc2b0;
        case 0x2cc2b4u: goto label_2cc2b4;
        case 0x2cc2b8u: goto label_2cc2b8;
        case 0x2cc2bcu: goto label_2cc2bc;
        case 0x2cc2c0u: goto label_2cc2c0;
        case 0x2cc2c4u: goto label_2cc2c4;
        case 0x2cc2c8u: goto label_2cc2c8;
        case 0x2cc2ccu: goto label_2cc2cc;
        case 0x2cc2d0u: goto label_2cc2d0;
        case 0x2cc2d4u: goto label_2cc2d4;
        case 0x2cc2d8u: goto label_2cc2d8;
        case 0x2cc2dcu: goto label_2cc2dc;
        case 0x2cc2e0u: goto label_2cc2e0;
        case 0x2cc2e4u: goto label_2cc2e4;
        case 0x2cc2e8u: goto label_2cc2e8;
        case 0x2cc2ecu: goto label_2cc2ec;
        case 0x2cc2f0u: goto label_2cc2f0;
        case 0x2cc2f4u: goto label_2cc2f4;
        case 0x2cc2f8u: goto label_2cc2f8;
        case 0x2cc2fcu: goto label_2cc2fc;
        case 0x2cc300u: goto label_2cc300;
        case 0x2cc304u: goto label_2cc304;
        case 0x2cc308u: goto label_2cc308;
        case 0x2cc30cu: goto label_2cc30c;
        case 0x2cc310u: goto label_2cc310;
        case 0x2cc314u: goto label_2cc314;
        case 0x2cc318u: goto label_2cc318;
        case 0x2cc31cu: goto label_2cc31c;
        case 0x2cc320u: goto label_2cc320;
        case 0x2cc324u: goto label_2cc324;
        case 0x2cc328u: goto label_2cc328;
        case 0x2cc32cu: goto label_2cc32c;
        case 0x2cc330u: goto label_2cc330;
        case 0x2cc334u: goto label_2cc334;
        case 0x2cc338u: goto label_2cc338;
        case 0x2cc33cu: goto label_2cc33c;
        case 0x2cc340u: goto label_2cc340;
        case 0x2cc344u: goto label_2cc344;
        default: break;
    }

    ctx->pc = 0x2cb5d0u;

label_2cb5d0:
    // 0x2cb5d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2cb5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2cb5d4:
    // 0x2cb5d4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2cb5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2cb5d8:
    // 0x2cb5d8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2cb5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2cb5dc:
    // 0x2cb5dc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2cb5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2cb5e0:
    // 0x2cb5e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cb5e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cb5e4:
    // 0x2cb5e4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2cb5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2cb5e8:
    // 0x2cb5e8: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x2cb5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2cb5ec:
    // 0x2cb5ec: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2cb5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2cb5f0:
    // 0x2cb5f0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2cb5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2cb5f4:
    // 0x2cb5f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2cb5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2cb5f8:
    // 0x2cb5f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cb5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cb5fc:
    // 0x2cb5fc: 0xc0e409a  jal         func_390268
label_2cb600:
    if (ctx->pc == 0x2CB600u) {
        ctx->pc = 0x2CB600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5FCu;
        // 0x2cb600: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB604u;
        goto label_2cb604;
    }
    ctx->pc = 0x2CB5FCu;
    SET_GPR_U32(ctx, 31, 0x2CB604u);
    ctx->pc = 0x2CB600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB5FCu;
    // 0x2cb600: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CB5FCu, 0x2CB604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB604u;
label_2cb604:
    // 0x2cb604: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2cb604u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb608:
    // 0x2cb608: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2cb608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2cb60c:
    // 0x2cb60c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2cb60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cb610:
    // 0x2cb610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb614:
    // 0x2cb614: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2cb614u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2cb618:
    // 0x2cb618: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2cb618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2cb61c:
    // 0x2cb61c: 0x60f809  jalr        $v1
label_2cb620:
    if (ctx->pc == 0x2CB620u) {
        ctx->pc = 0x2CB620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB61Cu;
        // 0x2cb620: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB624u;
        goto label_2cb624;
    }
    ctx->pc = 0x2CB61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CB624u);
        ctx->pc = 0x2CB620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB61Cu;
        // 0x2cb620: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB61Cu, 0x2CB624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB624u;
label_2cb624:
    // 0x2cb624: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2cb624u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb628:
    // 0x2cb628: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2cb628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2cb62c:
    // 0x2cb62c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2cb62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2cb630:
    // 0x2cb630: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2cb630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cb634:
    // 0x2cb634: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2cb634u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2cb638:
    // 0x2cb638: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x2cb638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2cb63c:
    // 0x2cb63c: 0xc0f809  jalr        $a2
label_2cb640:
    if (ctx->pc == 0x2CB640u) {
        ctx->pc = 0x2CB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB63Cu;
        // 0x2cb640: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB644u;
        goto label_2cb644;
    }
    ctx->pc = 0x2CB63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2CB644u);
        ctx->pc = 0x2CB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB63Cu;
        // 0x2cb640: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB63Cu, 0x2CB644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB644u;
label_2cb644:
    // 0x2cb644: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2cb644u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb648:
    // 0x2cb648: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb64c:
    // 0x2cb64c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cb64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cb650:
    // 0x2cb650: 0xc0cdb38  jal         func_336CE0
label_2cb654:
    if (ctx->pc == 0x2CB654u) {
        ctx->pc = 0x2CB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB650u;
        // 0x2cb654: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB658u;
        goto label_2cb658;
    }
    ctx->pc = 0x2CB650u;
    SET_GPR_U32(ctx, 31, 0x2CB658u);
    ctx->pc = 0x2CB654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB650u;
    // 0x2cb654: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CB650u, 0x2CB658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB658u;
label_2cb658:
    // 0x2cb658: 0x8643001c  lh          $v1, 0x1C($s2)
    ctx->pc = 0x2cb658u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
label_2cb65c:
    // 0x2cb65c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2cb65cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2cb660:
    // 0x2cb660: 0x10400133  beqz        $v0, . + 4 + (0x133 << 2)
label_2cb664:
    if (ctx->pc == 0x2CB664u) {
        ctx->pc = 0x2CB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB660u;
        // 0x2cb664: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB668u;
        goto label_2cb668;
    }
    ctx->pc = 0x2CB660u;
    {
        const bool branch_taken_0x2cb660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB660u;
        // 0x2cb664: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb660) {
            ctx->pc = 0x2CBB30u;
            goto label_2cbb30;
        }
    }
    ctx->pc = 0x2CB668u;
label_2cb668:
    // 0x2cb668: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2cb668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2cb66c:
    // 0x2cb66c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cb66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2cb670:
    // 0x2cb670: 0x24426300  addiu       $v0, $v0, 0x6300
    ctx->pc = 0x2cb670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25344));
label_2cb674:
    // 0x2cb674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cb674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2cb678:
    // 0x2cb678: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cb678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cb67c:
    // 0x2cb67c: 0x800008  jr          $a0
label_2cb680:
    if (ctx->pc == 0x2CB680u) {
        ctx->pc = 0x2CB684u;
        goto label_2cb684;
    }
    ctx->pc = 0x2CB67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CB684u: goto label_2cb684;
            case 0x2CB6F0u: goto label_2cb6f0;
            case 0x2CB720u: goto label_2cb720;
            case 0x2CB8C0u: goto label_2cb8c0;
            case 0x2CBA94u: goto label_2cba94;
            case 0x2CBB08u: goto label_2cbb08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB67Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CB684u;
label_2cb684:
    // 0x2cb684: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cb684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cb688:
    // 0x2cb688: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2cb688u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2cb68c:
    // 0x2cb68c: 0x1c600129  bgtz        $v1, . + 4 + (0x129 << 2)
label_2cb690:
    if (ctx->pc == 0x2CB690u) {
        ctx->pc = 0x2CB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB68Cu;
        // 0x2cb690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB694u;
        goto label_2cb694;
    }
    ctx->pc = 0x2CB68Cu;
    {
        const bool branch_taken_0x2cb68c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2CB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB68Cu;
        // 0x2cb690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb68c) {
            ctx->pc = 0x2CBB34u;
            goto label_2cbb34;
        }
    }
    ctx->pc = 0x2CB694u;
label_2cb694:
    // 0x2cb694: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2cb694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2cb698:
    // 0x2cb698: 0x24509f48  addiu       $s0, $v0, -0x60B8
    ctx->pc = 0x2cb698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942536));
label_2cb69c:
    // 0x2cb69c: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2cb69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2cb6a0:
    // 0x2cb6a0: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_2cb6a4:
    if (ctx->pc == 0x2CB6A4u) {
        ctx->pc = 0x2CB6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6A0u;
        // 0x2cb6a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB6A8u;
        goto label_2cb6a8;
    }
    ctx->pc = 0x2CB6A0u;
    {
        const bool branch_taken_0x2cb6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb6a0) {
            ctx->pc = 0x2CB6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB6A0u;
            // 0x2cb6a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB6E4u;
            goto label_2cb6e4;
        }
    }
    ctx->pc = 0x2CB6A8u;
label_2cb6a8:
    // 0x2cb6a8: 0xc0d5156  jal         func_354558
label_2cb6ac:
    if (ctx->pc == 0x2CB6ACu) {
        ctx->pc = 0x2CB6B0u;
        goto label_2cb6b0;
    }
    ctx->pc = 0x2CB6A8u;
    SET_GPR_U32(ctx, 31, 0x2CB6B0u);
    ctx->pc = 0x354558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354558u, 0x2CB6A8u, 0x2CB6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6B0u;
label_2cb6b0:
    // 0x2cb6b0: 0xc0d4da6  jal         func_353698
label_2cb6b4:
    if (ctx->pc == 0x2CB6B4u) {
        ctx->pc = 0x2CB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6B0u;
        // 0x2cb6b4: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB6B8u;
        goto label_2cb6b8;
    }
    ctx->pc = 0x2CB6B0u;
    SET_GPR_U32(ctx, 31, 0x2CB6B8u);
    ctx->pc = 0x2CB6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB6B0u;
    // 0x2cb6b4: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CB6B0u, 0x2CB6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6B8u;
label_2cb6b8:
    // 0x2cb6b8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2cb6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cb6bc:
    // 0x2cb6bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2cb6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2cb6c0:
    // 0x2cb6c0: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x2cb6c0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_2cb6c4:
    // 0x2cb6c4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cb6c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cb6c8:
    // 0x2cb6c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cb6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cb6cc:
    // 0x2cb6cc: 0x40f809  jalr        $v0
label_2cb6d0:
    if (ctx->pc == 0x2CB6D0u) {
        ctx->pc = 0x2CB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6CCu;
        // 0x2cb6d0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB6D4u;
        goto label_2cb6d4;
    }
    ctx->pc = 0x2CB6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CB6D4u);
        ctx->pc = 0x2CB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6CCu;
        // 0x2cb6d0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB6CCu, 0x2CB6D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB6D4u;
label_2cb6d4:
    // 0x2cb6d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cb6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb6d8:
    // 0x2cb6d8: 0xc0b92ae  jal         func_2E4AB8
label_2cb6dc:
    if (ctx->pc == 0x2CB6DCu) {
        ctx->pc = 0x2CB6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6D8u;
        // 0x2cb6dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB6E0u;
        goto label_2cb6e0;
    }
    ctx->pc = 0x2CB6D8u;
    SET_GPR_U32(ctx, 31, 0x2CB6E0u);
    ctx->pc = 0x2CB6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB6D8u;
    // 0x2cb6dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4AB8u, 0x2CB6D8u, 0x2CB6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6E0u;
label_2cb6e0:
    // 0x2cb6e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cb6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cb6e4:
    // 0x2cb6e4: 0xa642001c  sh          $v0, 0x1C($s2)
    ctx->pc = 0x2cb6e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
label_2cb6e8:
    // 0x2cb6e8: 0x10000111  b           . + 4 + (0x111 << 2)
label_2cb6ec:
    if (ctx->pc == 0x2CB6ECu) {
        ctx->pc = 0x2CB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6E8u;
        // 0x2cb6ec: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB6F0u;
        goto label_2cb6f0;
    }
    ctx->pc = 0x2CB6E8u;
    {
        const bool branch_taken_0x2cb6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6E8u;
        // 0x2cb6ec: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb6e8) {
            ctx->pc = 0x2CBB30u;
            goto label_2cbb30;
        }
    }
    ctx->pc = 0x2CB6F0u;
label_2cb6f0:
    // 0x2cb6f0: 0xc0a367c  jal         func_28D9F0
label_2cb6f4:
    if (ctx->pc == 0x2CB6F4u) {
        ctx->pc = 0x2CB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6F0u;
        // 0x2cb6f4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB6F8u;
        goto label_2cb6f8;
    }
    ctx->pc = 0x2CB6F0u;
    SET_GPR_U32(ctx, 31, 0x2CB6F8u);
    ctx->pc = 0x2CB6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB6F0u;
    // 0x2cb6f4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CB6F0u, 0x2CB6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6F8u;
label_2cb6f8:
    // 0x2cb6f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2cb6fc:
    if (ctx->pc == 0x2CB6FCu) {
        ctx->pc = 0x2CB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6F8u;
        // 0x2cb6fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB700u;
        goto label_2cb700;
    }
    ctx->pc = 0x2CB6F8u;
    {
        const bool branch_taken_0x2cb6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6F8u;
        // 0x2cb6fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb6f8) {
            ctx->pc = 0x2CB710u;
            goto label_2cb710;
        }
    }
    ctx->pc = 0x2CB700u;
label_2cb700:
    // 0x2cb700: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2cb700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cb704:
    // 0x2cb704: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x2cb704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_2cb708:
    // 0x2cb708: 0xc0be888  jal         func_2FA220
label_2cb70c:
    if (ctx->pc == 0x2CB70Cu) {
        ctx->pc = 0x2CB70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB708u;
        // 0x2cb70c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB710u;
        goto label_2cb710;
    }
    ctx->pc = 0x2CB708u;
    SET_GPR_U32(ctx, 31, 0x2CB710u);
    ctx->pc = 0x2CB70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB708u;
    // 0x2cb70c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA220u, 0x2CB708u, 0x2CB710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB710u;
label_2cb710:
    // 0x2cb710: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cb710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cb714:
    // 0x2cb714: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2cb714u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_2cb718:
    // 0x2cb718: 0x10000105  b           . + 4 + (0x105 << 2)
label_2cb71c:
    if (ctx->pc == 0x2CB71Cu) {
        ctx->pc = 0x2CB71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB718u;
        // 0x2cb71c: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB720u;
        goto label_2cb720;
    }
    ctx->pc = 0x2CB718u;
    {
        const bool branch_taken_0x2cb718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB718u;
        // 0x2cb71c: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb718) {
            ctx->pc = 0x2CBB30u;
            goto label_2cbb30;
        }
    }
    ctx->pc = 0x2CB720u;
label_2cb720:
    // 0x2cb720: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x2cb720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
label_2cb724:
    // 0x2cb724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cb724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cb728:
    // 0x2cb728: 0x0  nop
    ctx->pc = 0x2cb728u;
    // NOP
label_2cb72c:
    // 0x2cb72c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cb72cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb730:
    // 0x2cb730: 0x0  nop
    ctx->pc = 0x2cb730u;
    // NOP
label_2cb734:
    // 0x2cb734: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2cb738:
    if (ctx->pc == 0x2CB738u) {
        ctx->pc = 0x2CB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB734u;
        // 0x2cb738: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB73Cu;
        goto label_2cb73c;
    }
    ctx->pc = 0x2CB734u;
    {
        const bool branch_taken_0x2cb734 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB734u;
        // 0x2cb738: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb734) {
            ctx->pc = 0x2CB75Cu;
            goto label_2cb75c;
        }
    }
    ctx->pc = 0x2CB73Cu;
label_2cb73c:
    // 0x2cb73c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2cb73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2cb740:
    // 0x2cb740: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x2cb740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_2cb744:
    // 0x2cb744: 0xc0e409a  jal         func_390268
label_2cb748:
    if (ctx->pc == 0x2CB748u) {
        ctx->pc = 0x2CB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB744u;
        // 0x2cb748: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB74Cu;
        goto label_2cb74c;
    }
    ctx->pc = 0x2CB744u;
    SET_GPR_U32(ctx, 31, 0x2CB74Cu);
    ctx->pc = 0x2CB748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB744u;
    // 0x2cb748: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CB744u, 0x2CB74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB74Cu;
label_2cb74c:
    // 0x2cb74c: 0xc08a0d0  jal         func_228340
label_2cb750:
    if (ctx->pc == 0x2CB750u) {
        ctx->pc = 0x2CB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB74Cu;
        // 0x2cb750: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB754u;
        goto label_2cb754;
    }
    ctx->pc = 0x2CB74Cu;
    SET_GPR_U32(ctx, 31, 0x2CB754u);
    ctx->pc = 0x2CB750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB74Cu;
    // 0x2cb750: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2CB74Cu, 0x2CB754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB754u;
label_2cb754:
    // 0x2cb754: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2cb758:
    if (ctx->pc == 0x2CB758u) {
        ctx->pc = 0x2CB758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB754u;
        // 0x2cb758: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB75Cu;
        goto label_2cb75c;
    }
    ctx->pc = 0x2CB754u;
    {
        const bool branch_taken_0x2cb754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB754u;
        // 0x2cb758: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb754) {
            ctx->pc = 0x2CB778u;
            goto label_2cb778;
        }
    }
    ctx->pc = 0x2CB75Cu;
label_2cb75c:
    // 0x2cb75c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2cb75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2cb760:
    // 0x2cb760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cb760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cb764:
    // 0x2cb764: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cb764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cb768:
    // 0x2cb768: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x2cb768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_2cb76c:
    // 0x2cb76c: 0xa4830412  sh          $v1, 0x412($a0)
    ctx->pc = 0x2cb76cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1042), (uint16_t)GPR_U32(ctx, 3));
label_2cb770:
    // 0x2cb770: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_2cb774:
    if (ctx->pc == 0x2CB774u) {
        ctx->pc = 0x2CB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB770u;
        // 0x2cb774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB778u;
        goto label_2cb778;
    }
    ctx->pc = 0x2CB770u;
    {
        const bool branch_taken_0x2cb770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB770u;
        // 0x2cb774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb770) {
            ctx->pc = 0x2CBB14u;
            goto label_2cbb14;
        }
    }
    ctx->pc = 0x2CB778u;
label_2cb778:
    // 0x2cb778: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cb778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cb77c:
    // 0x2cb77c: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2cb77cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2cb780:
    // 0x2cb780: 0x1c6000ec  bgtz        $v1, . + 4 + (0xEC << 2)
label_2cb784:
    if (ctx->pc == 0x2CB784u) {
        ctx->pc = 0x2CB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB780u;
        // 0x2cb784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB788u;
        goto label_2cb788;
    }
    ctx->pc = 0x2CB780u;
    {
        const bool branch_taken_0x2cb780 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2CB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB780u;
        // 0x2cb784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb780) {
            ctx->pc = 0x2CBB34u;
            goto label_2cbb34;
        }
    }
    ctx->pc = 0x2CB788u;
label_2cb788:
    // 0x2cb788: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x2cb788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_2cb78c:
    // 0x2cb78c: 0x84830412  lh          $v1, 0x412($a0)
    ctx->pc = 0x2cb78cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1042)));
label_2cb790:
    // 0x2cb790: 0x46000e7  bltz        $v1, . + 4 + (0xE7 << 2)
label_2cb794:
    if (ctx->pc == 0x2CB794u) {
        ctx->pc = 0x2CB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB790u;
        // 0x2cb794: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB798u;
        goto label_2cb798;
    }
    ctx->pc = 0x2CB790u;
    {
        const bool branch_taken_0x2cb790 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB790u;
        // 0x2cb794: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb790) {
            ctx->pc = 0x2CBB30u;
            goto label_2cbb30;
        }
    }
    ctx->pc = 0x2CB798u;
label_2cb798:
    // 0x2cb798: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2cb79c:
    if (ctx->pc == 0x2CB79Cu) {
        ctx->pc = 0x2CB79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB798u;
        // 0x2cb79c: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB7A0u;
        goto label_2cb7a0;
    }
    ctx->pc = 0x2CB798u;
    {
        const bool branch_taken_0x2cb798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb798) {
            ctx->pc = 0x2CB79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB798u;
            // 0x2cb79c: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB7C4u;
            goto label_2cb7c4;
        }
    }
    ctx->pc = 0x2CB7A0u;
label_2cb7a0:
    // 0x2cb7a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cb7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cb7a4:
    // 0x2cb7a4: 0x146200e3  bne         $v1, $v0, . + 4 + (0xE3 << 2)
label_2cb7a8:
    if (ctx->pc == 0x2CB7A8u) {
        ctx->pc = 0x2CB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7A4u;
        // 0x2cb7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB7ACu;
        goto label_2cb7ac;
    }
    ctx->pc = 0x2CB7A4u;
    {
        const bool branch_taken_0x2cb7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7A4u;
        // 0x2cb7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb7a4) {
            ctx->pc = 0x2CBB34u;
            goto label_2cbb34;
        }
    }
    ctx->pc = 0x2CB7ACu;
label_2cb7ac:
    // 0x2cb7ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cb7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cb7b0:
    // 0x2cb7b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cb7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cb7b4:
    // 0x2cb7b4: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x2cb7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_2cb7b8:
    // 0x2cb7b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cb7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cb7bc:
    // 0x2cb7bc: 0x100000dd  b           . + 4 + (0xDD << 2)
label_2cb7c0:
    if (ctx->pc == 0x2CB7C0u) {
        ctx->pc = 0x2CB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7BCu;
        // 0x2cb7c0: 0xa4830412  sh          $v1, 0x412($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1042), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB7C4u;
        goto label_2cb7c4;
    }
    ctx->pc = 0x2CB7BCu;
    {
        const bool branch_taken_0x2cb7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7BCu;
        // 0x2cb7c0: 0xa4830412  sh          $v1, 0x412($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1042), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb7bc) {
            ctx->pc = 0x2CBB34u;
            goto label_2cbb34;
        }
    }
    ctx->pc = 0x2CB7C4u;
label_2cb7c4:
    // 0x2cb7c4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cb7c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cb7c8:
    // 0x2cb7c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cb7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cb7cc:
    // 0x2cb7cc: 0x40f809  jalr        $v0
label_2cb7d0:
    if (ctx->pc == 0x2CB7D0u) {
        ctx->pc = 0x2CB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7CCu;
        // 0x2cb7d0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB7D4u;
        goto label_2cb7d4;
    }
    ctx->pc = 0x2CB7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CB7D4u);
        ctx->pc = 0x2CB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7CCu;
        // 0x2cb7d0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB7CCu, 0x2CB7D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB7D4u;
label_2cb7d4:
    // 0x2cb7d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cb7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb7d8:
    // 0x2cb7d8: 0xc0a48cc  jal         func_292330
label_2cb7dc:
    if (ctx->pc == 0x2CB7DCu) {
        ctx->pc = 0x2CB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7D8u;
        // 0x2cb7dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB7E0u;
        goto label_2cb7e0;
    }
    ctx->pc = 0x2CB7D8u;
    SET_GPR_U32(ctx, 31, 0x2CB7E0u);
    ctx->pc = 0x2CB7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB7D8u;
    // 0x2cb7dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x2CB7D8u, 0x2CB7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7E0u;
label_2cb7e0:
    // 0x2cb7e0: 0xc0d5156  jal         func_354558
label_2cb7e4:
    if (ctx->pc == 0x2CB7E4u) {
        ctx->pc = 0x2CB7E8u;
        goto label_2cb7e8;
    }
    ctx->pc = 0x2CB7E0u;
    SET_GPR_U32(ctx, 31, 0x2CB7E8u);
    ctx->pc = 0x354558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354558u, 0x2CB7E0u, 0x2CB7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7E8u;
label_2cb7e8:
    // 0x2cb7e8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2cb7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2cb7ec:
    // 0x2cb7ec: 0x24849f48  addiu       $a0, $a0, -0x60B8
    ctx->pc = 0x2cb7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942536));
label_2cb7f0:
    // 0x2cb7f0: 0xc0d4da6  jal         func_353698
label_2cb7f4:
    if (ctx->pc == 0x2CB7F4u) {
        ctx->pc = 0x2CB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7F0u;
        // 0x2cb7f4: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB7F8u;
        goto label_2cb7f8;
    }
    ctx->pc = 0x2CB7F0u;
    SET_GPR_U32(ctx, 31, 0x2CB7F8u);
    ctx->pc = 0x2CB7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB7F0u;
    // 0x2cb7f4: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CB7F0u, 0x2CB7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7F8u;
label_2cb7f8:
    // 0x2cb7f8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2cb7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cb7fc:
    // 0x2cb7fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2cb7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2cb800:
    // 0x2cb800: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x2cb800u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_2cb804:
    // 0x2cb804: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cb804u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cb808:
    // 0x2cb808: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cb808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cb80c:
    // 0x2cb80c: 0x40f809  jalr        $v0
label_2cb810:
    if (ctx->pc == 0x2CB810u) {
        ctx->pc = 0x2CB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB80Cu;
        // 0x2cb810: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB814u;
        goto label_2cb814;
    }
    ctx->pc = 0x2CB80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CB814u);
        ctx->pc = 0x2CB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB80Cu;
        // 0x2cb810: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB80Cu, 0x2CB814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB814u;
label_2cb814:
    // 0x2cb814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cb814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb818:
    // 0x2cb818: 0xc0b92ae  jal         func_2E4AB8
label_2cb81c:
    if (ctx->pc == 0x2CB81Cu) {
        ctx->pc = 0x2CB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB818u;
        // 0x2cb81c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB820u;
        goto label_2cb820;
    }
    ctx->pc = 0x2CB818u;
    SET_GPR_U32(ctx, 31, 0x2CB820u);
    ctx->pc = 0x2CB81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB818u;
    // 0x2cb81c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4AB8u, 0x2CB818u, 0x2CB820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB820u;
label_2cb820:
    // 0x2cb820: 0xc087502  jal         func_21D408
label_2cb824:
    if (ctx->pc == 0x2CB824u) {
        ctx->pc = 0x2CB824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB820u;
        // 0x2cb824: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB828u;
        goto label_2cb828;
    }
    ctx->pc = 0x2CB820u;
    SET_GPR_U32(ctx, 31, 0x2CB828u);
    ctx->pc = 0x2CB824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB820u;
    // 0x2cb824: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CB820u, 0x2CB828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB828u;
label_2cb828:
    // 0x2cb828: 0xc0a367c  jal         func_28D9F0
label_2cb82c:
    if (ctx->pc == 0x2CB82Cu) {
        ctx->pc = 0x2CB82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB828u;
        // 0x2cb82c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB830u;
        goto label_2cb830;
    }
    ctx->pc = 0x2CB828u;
    SET_GPR_U32(ctx, 31, 0x2CB830u);
    ctx->pc = 0x2CB82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB828u;
    // 0x2cb82c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CB828u, 0x2CB830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB830u;
label_2cb830:
    // 0x2cb830: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2cb830u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb834:
    // 0x2cb834: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
label_2cb838:
    if (ctx->pc == 0x2CB838u) {
        ctx->pc = 0x2CB83Cu;
        goto label_2cb83c;
    }
    ctx->pc = 0x2CB834u;
    {
        const bool branch_taken_0x2cb834 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb834) {
            ctx->pc = 0x2CB880u;
            goto label_2cb880;
        }
    }
    ctx->pc = 0x2CB83Cu;
label_2cb83c:
    // 0x2cb83c: 0xc087502  jal         func_21D408
label_2cb840:
    if (ctx->pc == 0x2CB840u) {
        ctx->pc = 0x2CB840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB83Cu;
        // 0x2cb840: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB844u;
        goto label_2cb844;
    }
    ctx->pc = 0x2CB83Cu;
    SET_GPR_U32(ctx, 31, 0x2CB844u);
    ctx->pc = 0x2CB840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB83Cu;
    // 0x2cb840: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CB83Cu, 0x2CB844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB844u;
label_2cb844:
    // 0x2cb844: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2cb844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cb848:
    // 0x2cb848: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cb848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb84c:
    // 0x2cb84c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2cb84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2cb850:
    // 0x2cb850: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2cb850u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2cb854:
    // 0x2cb854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb858:
    // 0x2cb858: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2cb858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2cb85c:
    // 0x2cb85c: 0x40f809  jalr        $v0
label_2cb860:
    if (ctx->pc == 0x2CB860u) {
        ctx->pc = 0x2CB860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB85Cu;
        // 0x2cb860: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB864u;
        goto label_2cb864;
    }
    ctx->pc = 0x2CB85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CB864u);
        ctx->pc = 0x2CB860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB85Cu;
        // 0x2cb860: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB85Cu, 0x2CB864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB864u;
label_2cb864:
    // 0x2cb864: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cb864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2cb868:
    // 0x2cb868: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cb868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cb86c:
    // 0x2cb86c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cb870:
    // 0x2cb870: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cb870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cb874:
    // 0x2cb874: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cb874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb878:
    // 0x2cb878: 0xc0bf800  jal         func_2FE000
label_2cb87c:
    if (ctx->pc == 0x2CB87Cu) {
        ctx->pc = 0x2CB87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB878u;
        // 0x2cb87c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB880u;
        goto label_2cb880;
    }
    ctx->pc = 0x2CB878u;
    SET_GPR_U32(ctx, 31, 0x2CB880u);
    ctx->pc = 0x2CB87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB878u;
    // 0x2cb87c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CB878u, 0x2CB880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB880u;
label_2cb880:
    // 0x2cb880: 0xc087502  jal         func_21D408
label_2cb884:
    if (ctx->pc == 0x2CB884u) {
        ctx->pc = 0x2CB884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB880u;
        // 0x2cb884: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB888u;
        goto label_2cb888;
    }
    ctx->pc = 0x2CB880u;
    SET_GPR_U32(ctx, 31, 0x2CB888u);
    ctx->pc = 0x2CB884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB880u;
    // 0x2cb884: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CB880u, 0x2CB888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB888u;
label_2cb888:
    // 0x2cb888: 0xc0a367c  jal         func_28D9F0
label_2cb88c:
    if (ctx->pc == 0x2CB88Cu) {
        ctx->pc = 0x2CB88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB888u;
        // 0x2cb88c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB890u;
        goto label_2cb890;
    }
    ctx->pc = 0x2CB888u;
    SET_GPR_U32(ctx, 31, 0x2CB890u);
    ctx->pc = 0x2CB88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB888u;
    // 0x2cb88c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CB888u, 0x2CB890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB890u;
label_2cb890:
    // 0x2cb890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cb890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb894:
    // 0x2cb894: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2cb898:
    if (ctx->pc == 0x2CB898u) {
        ctx->pc = 0x2CB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB894u;
        // 0x2cb898: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB89Cu;
        goto label_2cb89c;
    }
    ctx->pc = 0x2CB894u;
    {
        const bool branch_taken_0x2cb894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB894u;
        // 0x2cb898: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb894) {
            ctx->pc = 0x2CB8B8u;
            goto label_2cb8b8;
        }
    }
    ctx->pc = 0x2CB89Cu;
label_2cb89c:
    // 0x2cb89c: 0xc087502  jal         func_21D408
label_2cb8a0:
    if (ctx->pc == 0x2CB8A0u) {
        ctx->pc = 0x2CB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB89Cu;
        // 0x2cb8a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB8A4u;
        goto label_2cb8a4;
    }
    ctx->pc = 0x2CB89Cu;
    SET_GPR_U32(ctx, 31, 0x2CB8A4u);
    ctx->pc = 0x2CB8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB89Cu;
    // 0x2cb8a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CB89Cu, 0x2CB8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB8A4u;
label_2cb8a4:
    // 0x2cb8a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb8a8:
    // 0x2cb8a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cb8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb8ac:
    // 0x2cb8ac: 0xc0bf3ca  jal         func_2FCF28
label_2cb8b0:
    if (ctx->pc == 0x2CB8B0u) {
        ctx->pc = 0x2CB8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8ACu;
        // 0x2cb8b0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB8B4u;
        goto label_2cb8b4;
    }
    ctx->pc = 0x2CB8ACu;
    SET_GPR_U32(ctx, 31, 0x2CB8B4u);
    ctx->pc = 0x2CB8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB8ACu;
    // 0x2cb8b0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF28u, 0x2CB8ACu, 0x2CB8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB8B4u;
label_2cb8b4:
    // 0x2cb8b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cb8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cb8b8:
    // 0x2cb8b8: 0x1000009d  b           . + 4 + (0x9D << 2)
label_2cb8bc:
    if (ctx->pc == 0x2CB8BCu) {
        ctx->pc = 0x2CB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8B8u;
        // 0x2cb8bc: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB8C0u;
        goto label_2cb8c0;
    }
    ctx->pc = 0x2CB8B8u;
    {
        const bool branch_taken_0x2cb8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8B8u;
        // 0x2cb8bc: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb8b8) {
            ctx->pc = 0x2CBB30u;
            goto label_2cbb30;
        }
    }
    ctx->pc = 0x2CB8C0u;
label_2cb8c0:
    // 0x2cb8c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cb8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cb8c4:
    // 0x2cb8c4: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2cb8c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2cb8c8:
    // 0x2cb8c8: 0x1c60009a  bgtz        $v1, . + 4 + (0x9A << 2)
label_2cb8cc:
    if (ctx->pc == 0x2CB8CCu) {
        ctx->pc = 0x2CB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8C8u;
        // 0x2cb8cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB8D0u;
        goto label_2cb8d0;
    }
    ctx->pc = 0x2CB8C8u;
    {
        const bool branch_taken_0x2cb8c8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2CB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8C8u;
        // 0x2cb8cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb8c8) {
            ctx->pc = 0x2CBB34u;
            goto label_2cbb34;
        }
    }
    ctx->pc = 0x2CB8D0u;
label_2cb8d0:
    // 0x2cb8d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2cb8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2cb8d4:
    // 0x2cb8d4: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x2cb8d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_2cb8d8:
    // 0x2cb8d8: 0xa642001c  sh          $v0, 0x1C($s2)
    ctx->pc = 0x2cb8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
label_2cb8dc:
    // 0x2cb8dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cb8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cb8e0:
    // 0x2cb8e0: 0x8e62489c  lw          $v0, 0x489C($s3)
    ctx->pc = 0x2cb8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_2cb8e4:
    // 0x2cb8e4: 0x84510412  lh          $s1, 0x412($v0)
    ctx->pc = 0x2cb8e4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1042)));
label_2cb8e8:
    // 0x2cb8e8: 0x12230020  beq         $s1, $v1, . + 4 + (0x20 << 2)
label_2cb8ec:
    if (ctx->pc == 0x2CB8ECu) {
        ctx->pc = 0x2CB8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8E8u;
        // 0x2cb8ec: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB8F0u;
        goto label_2cb8f0;
    }
    ctx->pc = 0x2CB8E8u;
    {
        const bool branch_taken_0x2cb8e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CB8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8E8u;
        // 0x2cb8ec: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb8e8) {
            ctx->pc = 0x2CB96Cu;
            goto label_2cb96c;
        }
    }
    ctx->pc = 0x2CB8F0u;
label_2cb8f0:
    // 0x2cb8f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2cb8f4:
    if (ctx->pc == 0x2CB8F4u) {
        ctx->pc = 0x2CB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8F0u;
        // 0x2cb8f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB8F8u;
        goto label_2cb8f8;
    }
    ctx->pc = 0x2CB8F0u;
    {
        const bool branch_taken_0x2cb8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8F0u;
        // 0x2cb8f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb8f0) {
            ctx->pc = 0x2CB908u;
            goto label_2cb908;
        }
    }
    ctx->pc = 0x2CB8F8u;
label_2cb8f8:
    // 0x2cb8f8: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
label_2cb8fc:
    if (ctx->pc == 0x2CB8FCu) {
        ctx->pc = 0x2CB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8F8u;
        // 0x2cb8fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB900u;
        goto label_2cb900;
    }
    ctx->pc = 0x2CB8F8u;
    {
        const bool branch_taken_0x2cb8f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8F8u;
        // 0x2cb8fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb8f8) {
            ctx->pc = 0x2CBA00u;
            goto label_2cba00;
        }
    }
    ctx->pc = 0x2CB900u;
label_2cb900:
    // 0x2cb900: 0x1000008d  b           . + 4 + (0x8D << 2)
label_2cb904:
    if (ctx->pc == 0x2CB904u) {
        ctx->pc = 0x2CB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB900u;
        // 0x2cb904: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB908u;
        goto label_2cb908;
    }
    ctx->pc = 0x2CB900u;
    {
        const bool branch_taken_0x2cb900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB900u;
        // 0x2cb904: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb900) {
            ctx->pc = 0x2CBB38u;
            goto label_2cbb38;
        }
    }
    ctx->pc = 0x2CB908u;
label_2cb908:
    // 0x2cb908: 0x1622008a  bne         $s1, $v0, . + 4 + (0x8A << 2)
label_2cb90c:
    if (ctx->pc == 0x2CB90Cu) {
        ctx->pc = 0x2CB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB908u;
        // 0x2cb90c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB910u;
        goto label_2cb910;
    }
    ctx->pc = 0x2CB908u;
    {
        const bool branch_taken_0x2cb908 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB908u;
        // 0x2cb90c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb908) {
            ctx->pc = 0x2CBB34u;
            goto label_2cbb34;
        }
    }
    ctx->pc = 0x2CB910u;
label_2cb910:
    // 0x2cb910: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x2cb910u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_2cb914:
    // 0x2cb914: 0x26109f98  addiu       $s0, $s0, -0x6068
    ctx->pc = 0x2cb914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942616));
label_2cb918:
    // 0x2cb918: 0xc0d4da6  jal         func_353698
label_2cb91c:
    if (ctx->pc == 0x2CB91Cu) {
        ctx->pc = 0x2CB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB918u;
        // 0x2cb91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB920u;
        goto label_2cb920;
    }
    ctx->pc = 0x2CB918u;
    SET_GPR_U32(ctx, 31, 0x2CB920u);
    ctx->pc = 0x2CB91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB918u;
    // 0x2cb91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CB918u, 0x2CB920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB920u;
label_2cb920:
    // 0x2cb920: 0xc0d4efc  jal         func_353BF0
label_2cb924:
    if (ctx->pc == 0x2CB924u) {
        ctx->pc = 0x2CB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB920u;
        // 0x2cb924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB928u;
        goto label_2cb928;
    }
    ctx->pc = 0x2CB920u;
    SET_GPR_U32(ctx, 31, 0x2CB928u);
    ctx->pc = 0x2CB924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB920u;
    // 0x2cb924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353BF0u, 0x2CB920u, 0x2CB928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB928u;
label_2cb928:
    // 0x2cb928: 0xc0d4da6  jal         func_353698
label_2cb92c:
    if (ctx->pc == 0x2CB92Cu) {
        ctx->pc = 0x2CB92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB928u;
        // 0x2cb92c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB930u;
        goto label_2cb930;
    }
    ctx->pc = 0x2CB928u;
    SET_GPR_U32(ctx, 31, 0x2CB930u);
    ctx->pc = 0x2CB92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB928u;
    // 0x2cb92c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CB928u, 0x2CB930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB930u;
label_2cb930:
    // 0x2cb930: 0xc0d4efc  jal         func_353BF0
label_2cb934:
    if (ctx->pc == 0x2CB934u) {
        ctx->pc = 0x2CB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB930u;
        // 0x2cb934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB938u;
        goto label_2cb938;
    }
    ctx->pc = 0x2CB930u;
    SET_GPR_U32(ctx, 31, 0x2CB938u);
    ctx->pc = 0x2CB934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB930u;
    // 0x2cb934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353BF0u, 0x2CB930u, 0x2CB938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB938u;
label_2cb938:
    // 0x2cb938: 0xc0d4da6  jal         func_353698
label_2cb93c:
    if (ctx->pc == 0x2CB93Cu) {
        ctx->pc = 0x2CB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB938u;
        // 0x2cb93c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB940u;
        goto label_2cb940;
    }
    ctx->pc = 0x2CB938u;
    SET_GPR_U32(ctx, 31, 0x2CB940u);
    ctx->pc = 0x2CB93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB938u;
    // 0x2cb93c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CB938u, 0x2CB940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB940u;
label_2cb940:
    // 0x2cb940: 0xc0d4efc  jal         func_353BF0
label_2cb944:
    if (ctx->pc == 0x2CB944u) {
        ctx->pc = 0x2CB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB940u;
        // 0x2cb944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB948u;
        goto label_2cb948;
    }
    ctx->pc = 0x2CB940u;
    SET_GPR_U32(ctx, 31, 0x2CB948u);
    ctx->pc = 0x2CB944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB940u;
    // 0x2cb944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353BF0u, 0x2CB940u, 0x2CB948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB948u;
label_2cb948:
    // 0x2cb948: 0xc0d4da6  jal         func_353698
label_2cb94c:
    if (ctx->pc == 0x2CB94Cu) {
        ctx->pc = 0x2CB94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB948u;
        // 0x2cb94c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB950u;
        goto label_2cb950;
    }
    ctx->pc = 0x2CB948u;
    SET_GPR_U32(ctx, 31, 0x2CB950u);
    ctx->pc = 0x2CB94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB948u;
    // 0x2cb94c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CB948u, 0x2CB950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB950u;
label_2cb950:
    // 0x2cb950: 0xc0d4efc  jal         func_353BF0
label_2cb954:
    if (ctx->pc == 0x2CB954u) {
        ctx->pc = 0x2CB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB950u;
        // 0x2cb954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB958u;
        goto label_2cb958;
    }
    ctx->pc = 0x2CB950u;
    SET_GPR_U32(ctx, 31, 0x2CB958u);
    ctx->pc = 0x2CB954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB950u;
    // 0x2cb954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353BF0u, 0x2CB950u, 0x2CB958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB958u;
label_2cb958:
    // 0x2cb958: 0x8e62489c  lw          $v0, 0x489C($s3)
    ctx->pc = 0x2cb958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_2cb95c:
    // 0x2cb95c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cb95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb960:
    // 0x2cb960: 0xa4510412  sh          $s1, 0x412($v0)
    ctx->pc = 0x2cb960u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1042), (uint16_t)GPR_U32(ctx, 17));
label_2cb964:
    // 0x2cb964: 0x10000072  b           . + 4 + (0x72 << 2)
label_2cb968:
    if (ctx->pc == 0x2CB968u) {
        ctx->pc = 0x2CB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB964u;
        // 0x2cb968: 0xa643001e  sh          $v1, 0x1E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB96Cu;
        goto label_2cb96c;
    }
    ctx->pc = 0x2CB964u;
    {
        const bool branch_taken_0x2cb964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB964u;
        // 0x2cb968: 0xa643001e  sh          $v1, 0x1E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb964) {
            ctx->pc = 0x2CBB30u;
            goto label_2cbb30;
        }
    }
    ctx->pc = 0x2CB96Cu;
label_2cb96c:
    // 0x2cb96c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2cb96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2cb970:
    // 0x2cb970: 0x24509fd8  addiu       $s0, $v0, -0x6028
    ctx->pc = 0x2cb970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942680));
label_2cb974:
    // 0x2cb974: 0xc0d4da6  jal         func_353698
label_2cb978:
    if (ctx->pc == 0x2CB978u) {
        ctx->pc = 0x2CB978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB974u;
        // 0x2cb978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB97Cu;
        goto label_2cb97c;
    }
    ctx->pc = 0x2CB974u;
    SET_GPR_U32(ctx, 31, 0x2CB97Cu);
    ctx->pc = 0x2CB978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB974u;
    // 0x2cb978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CB974u, 0x2CB97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB97Cu;
label_2cb97c:
    // 0x2cb97c: 0xc0d4efc  jal         func_353BF0
label_2cb980:
    if (ctx->pc == 0x2CB980u) {
        ctx->pc = 0x2CB980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB97Cu;
        // 0x2cb980: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB984u;
        goto label_2cb984;
    }
    ctx->pc = 0x2CB97Cu;
    SET_GPR_U32(ctx, 31, 0x2CB984u);
    ctx->pc = 0x2CB980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB97Cu;
    // 0x2cb980: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353BF0u, 0x2CB97Cu, 0x2CB984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB984u;
label_2cb984:
    // 0x2cb984: 0xc0d4da6  jal         func_353698
label_2cb988:
    if (ctx->pc == 0x2CB988u) {
        ctx->pc = 0x2CB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB984u;
        // 0x2cb988: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB98Cu;
        goto label_2cb98c;
    }
    ctx->pc = 0x2CB984u;
    SET_GPR_U32(ctx, 31, 0x2CB98Cu);
    ctx->pc = 0x2CB988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB984u;
    // 0x2cb988: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CB984u, 0x2CB98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB98Cu;
label_2cb98c:
    // 0x2cb98c: 0xc0d4efc  jal         func_353BF0
label_2cb990:
    if (ctx->pc == 0x2CB990u) {
        ctx->pc = 0x2CB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB98Cu;
        // 0x2cb990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB994u;
        goto label_2cb994;
    }
    ctx->pc = 0x2CB98Cu;
    SET_GPR_U32(ctx, 31, 0x2CB994u);
    ctx->pc = 0x2CB990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB98Cu;
    // 0x2cb990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353BF0u, 0x2CB98Cu, 0x2CB994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB994u;
label_2cb994:
    // 0x2cb994: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2cb994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2cb998:
    // 0x2cb998: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2cb99c:
    if (ctx->pc == 0x2CB99Cu) {
        ctx->pc = 0x2CB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB998u;
        // 0x2cb99c: 0x2610ffe0  addiu       $s0, $s0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB9A0u;
        goto label_2cb9a0;
    }
    ctx->pc = 0x2CB998u;
    {
        const bool branch_taken_0x2cb998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB998u;
        // 0x2cb99c: 0x2610ffe0  addiu       $s0, $s0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb998) {
            ctx->pc = 0x2CB9C0u;
            goto label_2cb9c0;
        }
    }
    ctx->pc = 0x2CB9A0u;
label_2cb9a0:
    // 0x2cb9a0: 0xc10c3ac  jal         func_430EB0
label_2cb9a4:
    if (ctx->pc == 0x2CB9A4u) {
        ctx->pc = 0x2CB9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9A0u;
        // 0x2cb9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB9A8u;
        goto label_2cb9a8;
    }
    ctx->pc = 0x2CB9A0u;
    SET_GPR_U32(ctx, 31, 0x2CB9A8u);
    ctx->pc = 0x2CB9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9A0u;
    // 0x2cb9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x2CB9A0u, 0x2CB9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9A8u;
label_2cb9a8:
    // 0x2cb9a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cb9ac:
    if (ctx->pc == 0x2CB9ACu) {
        ctx->pc = 0x2CB9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9A8u;
        // 0x2cb9ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB9B0u;
        goto label_2cb9b0;
    }
    ctx->pc = 0x2CB9A8u;
    {
        const bool branch_taken_0x2cb9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9A8u;
        // 0x2cb9ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9a8) {
            ctx->pc = 0x2CB9C4u;
            goto label_2cb9c4;
        }
    }
    ctx->pc = 0x2CB9B0u;
label_2cb9b0:
    // 0x2cb9b0: 0xc0d4da6  jal         func_353698
label_2cb9b4:
    if (ctx->pc == 0x2CB9B4u) {
        ctx->pc = 0x2CB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9B0u;
        // 0x2cb9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB9B8u;
        goto label_2cb9b8;
    }
    ctx->pc = 0x2CB9B0u;
    SET_GPR_U32(ctx, 31, 0x2CB9B8u);
    ctx->pc = 0x2CB9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9B0u;
    // 0x2cb9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CB9B0u, 0x2CB9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9B8u;
label_2cb9b8:
    // 0x2cb9b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2cb9bc:
    if (ctx->pc == 0x2CB9BCu) {
        ctx->pc = 0x2CB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9B8u;
        // 0x2cb9bc: 0xa642001e  sh          $v0, 0x1E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB9C0u;
        goto label_2cb9c0;
    }
    ctx->pc = 0x2CB9B8u;
    {
        const bool branch_taken_0x2cb9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9B8u;
        // 0x2cb9bc: 0xa642001e  sh          $v0, 0x1E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9b8) {
            ctx->pc = 0x2CB9C8u;
            goto label_2cb9c8;
        }
    }
    ctx->pc = 0x2CB9C0u;
label_2cb9c0:
    // 0x2cb9c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cb9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb9c4:
    // 0x2cb9c4: 0xa642001e  sh          $v0, 0x1E($s2)
    ctx->pc = 0x2cb9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
label_2cb9c8:
    // 0x2cb9c8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2cb9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2cb9cc:
    // 0x2cb9cc: 0x24849f48  addiu       $a0, $a0, -0x60B8
    ctx->pc = 0x2cb9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942536));
label_2cb9d0:
    // 0x2cb9d0: 0xc0d4da6  jal         func_353698
label_2cb9d4:
    if (ctx->pc == 0x2CB9D4u) {
        ctx->pc = 0x2CB9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9D0u;
        // 0x2cb9d4: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB9D8u;
        goto label_2cb9d8;
    }
    ctx->pc = 0x2CB9D0u;
    SET_GPR_U32(ctx, 31, 0x2CB9D8u);
    ctx->pc = 0x2CB9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9D0u;
    // 0x2cb9d4: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CB9D0u, 0x2CB9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9D8u;
label_2cb9d8:
    // 0x2cb9d8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2cb9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cb9dc:
    // 0x2cb9dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2cb9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2cb9e0:
    // 0x2cb9e0: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x2cb9e0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_2cb9e4:
    // 0x2cb9e4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cb9e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cb9e8:
    // 0x2cb9e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cb9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cb9ec:
    // 0x2cb9ec: 0x40f809  jalr        $v0
label_2cb9f0:
    if (ctx->pc == 0x2CB9F0u) {
        ctx->pc = 0x2CB9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9ECu;
        // 0x2cb9f0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB9F4u;
        goto label_2cb9f4;
    }
    ctx->pc = 0x2CB9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CB9F4u);
        ctx->pc = 0x2CB9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9ECu;
        // 0x2cb9f0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB9ECu, 0x2CB9F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB9F4u;
label_2cb9f4:
    // 0x2cb9f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cb9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb9f8:
    // 0x2cb9f8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2cb9fc:
    if (ctx->pc == 0x2CB9FCu) {
        ctx->pc = 0x2CB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9F8u;
        // 0x2cb9fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBA00u;
        goto label_2cba00;
    }
    ctx->pc = 0x2CB9F8u;
    {
        const bool branch_taken_0x2cb9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9F8u;
        // 0x2cb9fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9f8) {
            ctx->pc = 0x2CBAF4u;
            goto label_2cbaf4;
        }
    }
    ctx->pc = 0x2CBA00u;
label_2cba00:
    // 0x2cba00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2cba00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2cba04:
    // 0x2cba04: 0x24509f98  addiu       $s0, $v0, -0x6068
    ctx->pc = 0x2cba04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942616));
label_2cba08:
    // 0x2cba08: 0xc0d4da6  jal         func_353698
label_2cba0c:
    if (ctx->pc == 0x2CBA0Cu) {
        ctx->pc = 0x2CBA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA08u;
        // 0x2cba0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBA10u;
        goto label_2cba10;
    }
    ctx->pc = 0x2CBA08u;
    SET_GPR_U32(ctx, 31, 0x2CBA10u);
    ctx->pc = 0x2CBA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA08u;
    // 0x2cba0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CBA08u, 0x2CBA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA10u;
label_2cba10:
    // 0x2cba10: 0xc0d4efc  jal         func_353BF0
label_2cba14:
    if (ctx->pc == 0x2CBA14u) {
        ctx->pc = 0x2CBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA10u;
        // 0x2cba14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBA18u;
        goto label_2cba18;
    }
    ctx->pc = 0x2CBA10u;
    SET_GPR_U32(ctx, 31, 0x2CBA18u);
    ctx->pc = 0x2CBA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA10u;
    // 0x2cba14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353BF0u, 0x2CBA10u, 0x2CBA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA18u;
label_2cba18:
    // 0x2cba18: 0xc0d4da6  jal         func_353698
label_2cba1c:
    if (ctx->pc == 0x2CBA1Cu) {
        ctx->pc = 0x2CBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA18u;
        // 0x2cba1c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBA20u;
        goto label_2cba20;
    }
    ctx->pc = 0x2CBA18u;
    SET_GPR_U32(ctx, 31, 0x2CBA20u);
    ctx->pc = 0x2CBA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA18u;
    // 0x2cba1c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CBA18u, 0x2CBA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA20u;
label_2cba20:
    // 0x2cba20: 0xc0d4efc  jal         func_353BF0
label_2cba24:
    if (ctx->pc == 0x2CBA24u) {
        ctx->pc = 0x2CBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA20u;
        // 0x2cba24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBA28u;
        goto label_2cba28;
    }
    ctx->pc = 0x2CBA20u;
    SET_GPR_U32(ctx, 31, 0x2CBA28u);
    ctx->pc = 0x2CBA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA20u;
    // 0x2cba24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353BF0u, 0x2CBA20u, 0x2CBA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA28u;
label_2cba28:
    // 0x2cba28: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x2cba28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2cba2c:
    // 0x2cba2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2cba30:
    if (ctx->pc == 0x2CBA30u) {
        ctx->pc = 0x2CBA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA2Cu;
        // 0x2cba30: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBA34u;
        goto label_2cba34;
    }
    ctx->pc = 0x2CBA2Cu;
    {
        const bool branch_taken_0x2cba2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA2Cu;
        // 0x2cba30: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba2c) {
            ctx->pc = 0x2CBA54u;
            goto label_2cba54;
        }
    }
    ctx->pc = 0x2CBA34u;
label_2cba34:
    // 0x2cba34: 0xc10c3ac  jal         func_430EB0
label_2cba38:
    if (ctx->pc == 0x2CBA38u) {
        ctx->pc = 0x2CBA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA34u;
        // 0x2cba38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBA3Cu;
        goto label_2cba3c;
    }
    ctx->pc = 0x2CBA34u;
    SET_GPR_U32(ctx, 31, 0x2CBA3Cu);
    ctx->pc = 0x2CBA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA34u;
    // 0x2cba38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x2CBA34u, 0x2CBA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA3Cu;
label_2cba3c:
    // 0x2cba3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cba40:
    if (ctx->pc == 0x2CBA40u) {
        ctx->pc = 0x2CBA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA3Cu;
        // 0x2cba40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBA44u;
        goto label_2cba44;
    }
    ctx->pc = 0x2CBA3Cu;
    {
        const bool branch_taken_0x2cba3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA3Cu;
        // 0x2cba40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba3c) {
            ctx->pc = 0x2CBA58u;
            goto label_2cba58;
        }
    }
    ctx->pc = 0x2CBA44u;
label_2cba44:
    // 0x2cba44: 0xc0d4da6  jal         func_353698
label_2cba48:
    if (ctx->pc == 0x2CBA48u) {
        ctx->pc = 0x2CBA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA44u;
        // 0x2cba48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBA4Cu;
        goto label_2cba4c;
    }
    ctx->pc = 0x2CBA44u;
    SET_GPR_U32(ctx, 31, 0x2CBA4Cu);
    ctx->pc = 0x2CBA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA44u;
    // 0x2cba48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CBA44u, 0x2CBA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA4Cu;
label_2cba4c:
    // 0x2cba4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2cba50:
    if (ctx->pc == 0x2CBA50u) {
        ctx->pc = 0x2CBA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA4Cu;
        // 0x2cba50: 0xa642001e  sh          $v0, 0x1E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBA54u;
        goto label_2cba54;
    }
    ctx->pc = 0x2CBA4Cu;
    {
        const bool branch_taken_0x2cba4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA4Cu;
        // 0x2cba50: 0xa642001e  sh          $v0, 0x1E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba4c) {
            ctx->pc = 0x2CBA5Cu;
            goto label_2cba5c;
        }
    }
    ctx->pc = 0x2CBA54u;
label_2cba54:
    // 0x2cba54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cba58:
    // 0x2cba58: 0xa642001e  sh          $v0, 0x1E($s2)
    ctx->pc = 0x2cba58u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
label_2cba5c:
    // 0x2cba5c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2cba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2cba60:
    // 0x2cba60: 0x24849f48  addiu       $a0, $a0, -0x60B8
    ctx->pc = 0x2cba60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942536));
label_2cba64:
    // 0x2cba64: 0xc0d4da6  jal         func_353698
label_2cba68:
    if (ctx->pc == 0x2CBA68u) {
        ctx->pc = 0x2CBA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA64u;
        // 0x2cba68: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBA6Cu;
        goto label_2cba6c;
    }
    ctx->pc = 0x2CBA64u;
    SET_GPR_U32(ctx, 31, 0x2CBA6Cu);
    ctx->pc = 0x2CBA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA64u;
    // 0x2cba68: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CBA64u, 0x2CBA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA6Cu;
label_2cba6c:
    // 0x2cba6c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2cba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cba70:
    // 0x2cba70: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2cba70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2cba74:
    // 0x2cba74: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x2cba74u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_2cba78:
    // 0x2cba78: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cba78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cba7c:
    // 0x2cba7c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cba80:
    // 0x2cba80: 0x40f809  jalr        $v0
label_2cba84:
    if (ctx->pc == 0x2CBA84u) {
        ctx->pc = 0x2CBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA80u;
        // 0x2cba84: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBA88u;
        goto label_2cba88;
    }
    ctx->pc = 0x2CBA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CBA88u);
        ctx->pc = 0x2CBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA80u;
        // 0x2cba84: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBA80u, 0x2CBA88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CBA88u;
label_2cba88:
    // 0x2cba88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cba88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cba8c:
    // 0x2cba8c: 0x10000019  b           . + 4 + (0x19 << 2)
label_2cba90:
    if (ctx->pc == 0x2CBA90u) {
        ctx->pc = 0x2CBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA8Cu;
        // 0x2cba90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBA94u;
        goto label_2cba94;
    }
    ctx->pc = 0x2CBA8Cu;
    {
        const bool branch_taken_0x2cba8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA8Cu;
        // 0x2cba90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba8c) {
            ctx->pc = 0x2CBAF4u;
            goto label_2cbaf4;
        }
    }
    ctx->pc = 0x2CBA94u;
label_2cba94:
    // 0x2cba94: 0xc087502  jal         func_21D408
label_2cba98:
    if (ctx->pc == 0x2CBA98u) {
        ctx->pc = 0x2CBA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA94u;
        // 0x2cba98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBA9Cu;
        goto label_2cba9c;
    }
    ctx->pc = 0x2CBA94u;
    SET_GPR_U32(ctx, 31, 0x2CBA9Cu);
    ctx->pc = 0x2CBA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA94u;
    // 0x2cba98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CBA94u, 0x2CBA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA9Cu;
label_2cba9c:
    // 0x2cba9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cba9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbaa0:
    // 0x2cbaa0: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x2cbaa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2cbaa4:
    // 0x2cbaa4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2cbaa8:
    if (ctx->pc == 0x2CBAA8u) {
        ctx->pc = 0x2CBAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAA4u;
        // 0x2cbaa8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBAACu;
        goto label_2cbaac;
    }
    ctx->pc = 0x2CBAA4u;
    {
        const bool branch_taken_0x2cbaa4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CBAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAA4u;
        // 0x2cbaa8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbaa4) {
            ctx->pc = 0x2CBAB8u;
            goto label_2cbab8;
        }
    }
    ctx->pc = 0x2CBAACu;
label_2cbaac:
    // 0x2cbaac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cbaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2cbab0:
    // 0x2cbab0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2cbab4:
    if (ctx->pc == 0x2CBAB4u) {
        ctx->pc = 0x2CBAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAB0u;
        // 0x2cbab4: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBAB8u;
        goto label_2cbab8;
    }
    ctx->pc = 0x2CBAB0u;
    {
        const bool branch_taken_0x2cbab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAB0u;
        // 0x2cbab4: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbab0) {
            ctx->pc = 0x2CBABCu;
            goto label_2cbabc;
        }
    }
    ctx->pc = 0x2CBAB8u;
label_2cbab8:
    // 0x2cbab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cbab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbabc:
    // 0x2cbabc: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_2cbac0:
    if (ctx->pc == 0x2CBAC0u) {
        ctx->pc = 0x2CBAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBABCu;
        // 0x2cbac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBAC4u;
        goto label_2cbac4;
    }
    ctx->pc = 0x2CBABCu;
    {
        const bool branch_taken_0x2cbabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBABCu;
        // 0x2cbac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbabc) {
            ctx->pc = 0x2CBB34u;
            goto label_2cbb34;
        }
    }
    ctx->pc = 0x2CBAC4u;
label_2cbac4:
    // 0x2cbac4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2cbac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2cbac8:
    // 0x2cbac8: 0x8644001e  lh          $a0, 0x1E($s2)
    ctx->pc = 0x2cbac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
label_2cbacc:
    // 0x2cbacc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cbaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cbad0:
    // 0x2cbad0: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_2cbad4:
    if (ctx->pc == 0x2CBAD4u) {
        ctx->pc = 0x2CBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAD0u;
        // 0x2cbad4: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBAD8u;
        goto label_2cbad8;
    }
    ctx->pc = 0x2CBAD0u;
    {
        const bool branch_taken_0x2cbad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAD0u;
        // 0x2cbad4: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbad0) {
            ctx->pc = 0x2CBB30u;
            goto label_2cbb30;
        }
    }
    ctx->pc = 0x2CBAD8u;
label_2cbad8:
    // 0x2cbad8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2cbad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cbadc:
    // 0x2cbadc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cbadcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cbae0:
    // 0x2cbae0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cbae4:
    // 0x2cbae4: 0x40f809  jalr        $v0
label_2cbae8:
    if (ctx->pc == 0x2CBAE8u) {
        ctx->pc = 0x2CBAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAE4u;
        // 0x2cbae8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBAECu;
        goto label_2cbaec;
    }
    ctx->pc = 0x2CBAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CBAECu);
        ctx->pc = 0x2CBAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAE4u;
        // 0x2cbae8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBAE4u, 0x2CBAECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CBAECu;
label_2cbaec:
    // 0x2cbaec: 0x8645001e  lh          $a1, 0x1E($s2)
    ctx->pc = 0x2cbaecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
label_2cbaf0:
    // 0x2cbaf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cbaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbaf4:
    // 0x2cbaf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cbaf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbaf8:
    // 0x2cbaf8: 0xc0b923a  jal         func_2E48E8
label_2cbafc:
    if (ctx->pc == 0x2CBAFCu) {
        ctx->pc = 0x2CBAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAF8u;
        // 0x2cbafc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBB00u;
        goto label_2cbb00;
    }
    ctx->pc = 0x2CBAF8u;
    SET_GPR_U32(ctx, 31, 0x2CBB00u);
    ctx->pc = 0x2CBAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBAF8u;
    // 0x2cbafc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E48E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E48E8u, 0x2CBAF8u, 0x2CBB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB00u;
label_2cbb00:
    // 0x2cbb00: 0x1000000c  b           . + 4 + (0xC << 2)
label_2cbb04:
    if (ctx->pc == 0x2CBB04u) {
        ctx->pc = 0x2CBB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB00u;
        // 0x2cbb04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBB08u;
        goto label_2cbb08;
    }
    ctx->pc = 0x2CBB00u;
    {
        const bool branch_taken_0x2cbb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB00u;
        // 0x2cbb04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb00) {
            ctx->pc = 0x2CBB34u;
            goto label_2cbb34;
        }
    }
    ctx->pc = 0x2CBB08u;
label_2cbb08:
    // 0x2cbb08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cbb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cbb0c:
    // 0x2cbb0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cbb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cbb10:
    // 0x2cbb10: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x2cbb10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_2cbb14:
    // 0x2cbb14: 0xc087502  jal         func_21D408
label_2cbb18:
    if (ctx->pc == 0x2CBB18u) {
        ctx->pc = 0x2CBB1Cu;
        goto label_2cbb1c;
    }
    ctx->pc = 0x2CBB14u;
    SET_GPR_U32(ctx, 31, 0x2CBB1Cu);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CBB14u, 0x2CBB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB1Cu;
label_2cbb1c:
    // 0x2cbb1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2cbb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2cbb20:
    // 0x2cbb20: 0x84648310  lh          $a0, -0x7CF0($v1)
    ctx->pc = 0x2cbb20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294935312)));
label_2cbb24:
    // 0x2cbb24: 0xac44021c  sw          $a0, 0x21C($v0)
    ctx->pc = 0x2cbb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 4));
label_2cbb28:
    // 0x2cbb28: 0x10000002  b           . + 4 + (0x2 << 2)
label_2cbb2c:
    if (ctx->pc == 0x2CBB2Cu) {
        ctx->pc = 0x2CBB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB28u;
        // 0x2cbb2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBB30u;
        goto label_2cbb30;
    }
    ctx->pc = 0x2CBB28u;
    {
        const bool branch_taken_0x2cbb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB28u;
        // 0x2cbb2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb28) {
            ctx->pc = 0x2CBB34u;
            goto label_2cbb34;
        }
    }
    ctx->pc = 0x2CBB30u;
label_2cbb30:
    // 0x2cbb30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cbb30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbb34:
    // 0x2cbb34: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2cbb34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2cbb38:
    // 0x2cbb38: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2cbb38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2cbb3c:
    // 0x2cbb3c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2cbb3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2cbb40:
    // 0x2cbb40: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2cbb40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2cbb44:
    // 0x2cbb44: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2cbb44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2cbb48:
    // 0x2cbb48: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2cbb48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cbb4c:
    // 0x2cbb4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2cbb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2cbb50:
    // 0x2cbb50: 0x3e00008  jr          $ra
label_2cbb54:
    if (ctx->pc == 0x2CBB54u) {
        ctx->pc = 0x2CBB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB50u;
        // 0x2cbb54: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBB58u;
        goto label_2cbb58;
    }
    ctx->pc = 0x2CBB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB50u;
        // 0x2cbb54: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBB58u;
label_2cbb58:
    // 0x2cbb58: 0xa0640411  sb          $a0, 0x411($v1)
    ctx->pc = 0x2cbb58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1041), (uint8_t)GPR_U32(ctx, 4));
label_2cbb5c:
    // 0x2cbb5c: 0x0  nop
    ctx->pc = 0x2cbb5cu;
    // NOP
label_2cbb60:
    // 0x2cbb60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2cbb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2cbb64:
    // 0x2cbb64: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2cbb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2cbb68:
    // 0x2cbb68: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2cbb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2cbb6c:
    // 0x2cbb6c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2cbb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2cbb70:
    // 0x2cbb70: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2cbb70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_2cbb74:
    // 0x2cbb74: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2cbb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2cbb78:
    // 0x2cbb78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cbb78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cbb7c:
    // 0x2cbb7c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2cbb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2cbb80:
    // 0x2cbb80: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x2cbb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2cbb84:
    // 0x2cbb84: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2cbb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2cbb88:
    // 0x2cbb88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2cbb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2cbb8c:
    // 0x2cbb8c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cbb90:
    // 0x2cbb90: 0xc0e409a  jal         func_390268
label_2cbb94:
    if (ctx->pc == 0x2CBB94u) {
        ctx->pc = 0x2CBB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB90u;
        // 0x2cbb94: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBB98u;
        goto label_2cbb98;
    }
    ctx->pc = 0x2CBB90u;
    SET_GPR_U32(ctx, 31, 0x2CBB98u);
    ctx->pc = 0x2CBB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB90u;
    // 0x2cbb94: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CBB90u, 0x2CBB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB98u;
label_2cbb98:
    // 0x2cbb98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cbb98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbb9c:
    // 0x2cbb9c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2cbb9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2cbba0:
    // 0x2cbba0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2cbba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cbba4:
    // 0x2cbba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbba8:
    // 0x2cbba8: 0x8e22b734  lw          $v0, -0x48CC($s1)
    ctx->pc = 0x2cbba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
label_2cbbac:
    // 0x2cbbac: 0x84c500a8  lh          $a1, 0xA8($a2)
    ctx->pc = 0x2cbbacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 168)));
label_2cbbb0:
    // 0x2cbbb0: 0x8cc300ac  lw          $v1, 0xAC($a2)
    ctx->pc = 0x2cbbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_2cbbb4:
    // 0x2cbbb4: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x2cbbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_2cbbb8:
    // 0x2cbbb8: 0x60f809  jalr        $v1
label_2cbbbc:
    if (ctx->pc == 0x2CBBBCu) {
        ctx->pc = 0x2CBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBB8u;
        // 0x2cbbbc: 0x8c550048  lw          $s5, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBBC0u;
        goto label_2cbbc0;
    }
    ctx->pc = 0x2CBBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CBBC0u);
        ctx->pc = 0x2CBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBB8u;
        // 0x2cbbbc: 0x8c550048  lw          $s5, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBBB8u, 0x2CBBC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CBBC0u;
label_2cbbc0:
    // 0x2cbbc0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2cbbc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cbbc4:
    // 0x2cbbc4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2cbbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2cbbc8:
    // 0x2cbbc8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2cbbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2cbbcc:
    // 0x2cbbcc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2cbbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cbbd0:
    // 0x2cbbd0: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2cbbd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2cbbd4:
    // 0x2cbbd4: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x2cbbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2cbbd8:
    // 0x2cbbd8: 0xc0f809  jalr        $a2
label_2cbbdc:
    if (ctx->pc == 0x2CBBDCu) {
        ctx->pc = 0x2CBBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBD8u;
        // 0x2cbbdc: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBBE0u;
        goto label_2cbbe0;
    }
    ctx->pc = 0x2CBBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2CBBE0u);
        ctx->pc = 0x2CBBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBD8u;
        // 0x2cbbdc: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBBD8u, 0x2CBBE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CBBE0u;
label_2cbbe0:
    // 0x2cbbe0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2cbbe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cbbe4:
    // 0x2cbbe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cbbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbbe8:
    // 0x2cbbe8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cbbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cbbec:
    // 0x2cbbec: 0xc0cdb62  jal         func_336D88
label_2cbbf0:
    if (ctx->pc == 0x2CBBF0u) {
        ctx->pc = 0x2CBBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBECu;
        // 0x2cbbf0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBBF4u;
        goto label_2cbbf4;
    }
    ctx->pc = 0x2CBBECu;
    SET_GPR_U32(ctx, 31, 0x2CBBF4u);
    ctx->pc = 0x2CBBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBBECu;
    // 0x2cbbf0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2CBBECu, 0x2CBBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBBF4u;
label_2cbbf4:
    // 0x2cbbf4: 0x8643001c  lh          $v1, 0x1C($s2)
    ctx->pc = 0x2cbbf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
label_2cbbf8:
    // 0x2cbbf8: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x2cbbf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2cbbfc:
    // 0x2cbbfc: 0x104001c7  beqz        $v0, . + 4 + (0x1C7 << 2)
label_2cbc00:
    if (ctx->pc == 0x2CBC00u) {
        ctx->pc = 0x2CBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBFCu;
        // 0x2cbc00: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBC04u;
        goto label_2cbc04;
    }
    ctx->pc = 0x2CBBFCu;
    {
        const bool branch_taken_0x2cbbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBFCu;
        // 0x2cbc00: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbfc) {
            ctx->pc = 0x2CC31Cu;
            goto label_2cc31c;
        }
    }
    ctx->pc = 0x2CBC04u;
label_2cbc04:
    // 0x2cbc04: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2cbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2cbc08:
    // 0x2cbc08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cbc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2cbc0c:
    // 0x2cbc0c: 0x24426320  addiu       $v0, $v0, 0x6320
    ctx->pc = 0x2cbc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25376));
label_2cbc10:
    // 0x2cbc10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cbc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2cbc14:
    // 0x2cbc14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cbc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cbc18:
    // 0x2cbc18: 0x800008  jr          $a0
label_2cbc1c:
    if (ctx->pc == 0x2CBC1Cu) {
        ctx->pc = 0x2CBC20u;
        goto label_2cbc20;
    }
    ctx->pc = 0x2CBC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CBC20u: goto label_2cbc20;
            case 0x2CBD1Cu: goto label_2cbd1c;
            case 0x2CBD48u: goto label_2cbd48;
            case 0x2CBEB0u: goto label_2cbeb0;
            case 0x2CC0A4u: goto label_2cc0a4;
            case 0x2CC118u: goto label_2cc118;
            case 0x2CC268u: goto label_2cc268;
            case 0x2CC2DCu: goto label_2cc2dc;
            case 0x2CC2F4u: goto label_2cc2f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBC18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CBC20u;
label_2cbc20:
    // 0x2cbc20: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2cbc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cbc24:
    // 0x2cbc24: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2cbc24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2cbc28:
    // 0x2cbc28: 0x1c4001bd  bgtz        $v0, . + 4 + (0x1BD << 2)
label_2cbc2c:
    if (ctx->pc == 0x2CBC2Cu) {
        ctx->pc = 0x2CBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC28u;
        // 0x2cbc2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBC30u;
        goto label_2cbc30;
    }
    ctx->pc = 0x2CBC28u;
    {
        const bool branch_taken_0x2cbc28 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2CBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC28u;
        // 0x2cbc2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc28) {
            ctx->pc = 0x2CC320u;
            goto label_2cc320;
        }
    }
    ctx->pc = 0x2CBC30u;
label_2cbc30:
    // 0x2cbc30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2cbc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2cbc34:
    // 0x2cbc34: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2cbc34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cbc38:
    // 0x2cbc38: 0x2450a068  addiu       $s0, $v0, -0x5F98
    ctx->pc = 0x2cbc38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942824));
label_2cbc3c:
    // 0x2cbc3c: 0x86030112  lh          $v1, 0x112($s0)
    ctx->pc = 0x2cbc3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
label_2cbc40:
    // 0x2cbc40: 0x1071000b  beq         $v1, $s1, . + 4 + (0xB << 2)
label_2cbc44:
    if (ctx->pc == 0x2CBC44u) {
        ctx->pc = 0x2CBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC40u;
        // 0x2cbc44: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBC48u;
        goto label_2cbc48;
    }
    ctx->pc = 0x2CBC40u;
    {
        const bool branch_taken_0x2cbc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2CBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC40u;
        // 0x2cbc44: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc40) {
            ctx->pc = 0x2CBC70u;
            goto label_2cbc70;
        }
    }
    ctx->pc = 0x2CBC48u;
label_2cbc48:
    // 0x2cbc48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2cbc4c:
    if (ctx->pc == 0x2CBC4Cu) {
        ctx->pc = 0x2CBC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC48u;
        // 0x2cbc4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBC50u;
        goto label_2cbc50;
    }
    ctx->pc = 0x2CBC48u;
    {
        const bool branch_taken_0x2cbc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC48u;
        // 0x2cbc4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc48) {
            ctx->pc = 0x2CBC60u;
            goto label_2cbc60;
        }
    }
    ctx->pc = 0x2CBC50u;
label_2cbc50:
    // 0x2cbc50: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_2cbc54:
    if (ctx->pc == 0x2CBC54u) {
        ctx->pc = 0x2CBC58u;
        goto label_2cbc58;
    }
    ctx->pc = 0x2CBC50u;
    {
        const bool branch_taken_0x2cbc50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbc50) {
            ctx->pc = 0x2CBCB4u;
            goto label_2cbcb4;
        }
    }
    ctx->pc = 0x2CBC58u;
label_2cbc58:
    // 0x2cbc58: 0x100001b0  b           . + 4 + (0x1B0 << 2)
label_2cbc5c:
    if (ctx->pc == 0x2CBC5Cu) {
        ctx->pc = 0x2CBC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC58u;
        // 0x2cbc5c: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBC60u;
        goto label_2cbc60;
    }
    ctx->pc = 0x2CBC58u;
    {
        const bool branch_taken_0x2cbc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC58u;
        // 0x2cbc5c: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc58) {
            ctx->pc = 0x2CC31Cu;
            goto label_2cc31c;
        }
    }
    ctx->pc = 0x2CBC60u;
label_2cbc60:
    // 0x2cbc60: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
label_2cbc64:
    if (ctx->pc == 0x2CBC64u) {
        ctx->pc = 0x2CBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC60u;
        // 0x2cbc64: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBC68u;
        goto label_2cbc68;
    }
    ctx->pc = 0x2CBC60u;
    {
        const bool branch_taken_0x2cbc60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC60u;
        // 0x2cbc64: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc60) {
            ctx->pc = 0x2CBCF4u;
            goto label_2cbcf4;
        }
    }
    ctx->pc = 0x2CBC68u;
label_2cbc68:
    // 0x2cbc68: 0x100001ac  b           . + 4 + (0x1AC << 2)
label_2cbc6c:
    if (ctx->pc == 0x2CBC6Cu) {
        ctx->pc = 0x2CBC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC68u;
        // 0x2cbc6c: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBC70u;
        goto label_2cbc70;
    }
    ctx->pc = 0x2CBC68u;
    {
        const bool branch_taken_0x2cbc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC68u;
        // 0x2cbc6c: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc68) {
            ctx->pc = 0x2CC31Cu;
            goto label_2cc31c;
        }
    }
    ctx->pc = 0x2CBC70u;
label_2cbc70:
    // 0x2cbc70: 0xc0d5156  jal         func_354558
label_2cbc74:
    if (ctx->pc == 0x2CBC74u) {
        ctx->pc = 0x2CBC78u;
        goto label_2cbc78;
    }
    ctx->pc = 0x2CBC70u;
    SET_GPR_U32(ctx, 31, 0x2CBC78u);
    ctx->pc = 0x354558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354558u, 0x2CBC70u, 0x2CBC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC78u;
label_2cbc78:
    // 0x2cbc78: 0xc0d4da6  jal         func_353698
label_2cbc7c:
    if (ctx->pc == 0x2CBC7Cu) {
        ctx->pc = 0x2CBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC78u;
        // 0x2cbc7c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBC80u;
        goto label_2cbc80;
    }
    ctx->pc = 0x2CBC78u;
    SET_GPR_U32(ctx, 31, 0x2CBC80u);
    ctx->pc = 0x2CBC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBC78u;
    // 0x2cbc7c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CBC78u, 0x2CBC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC80u;
label_2cbc80:
    // 0x2cbc80: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2cbc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cbc84:
    // 0x2cbc84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2cbc84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2cbc88:
    // 0x2cbc88: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x2cbc88u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_2cbc8c:
    // 0x2cbc8c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cbc8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cbc90:
    // 0x2cbc90: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cbc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cbc94:
    // 0x2cbc94: 0x40f809  jalr        $v0
label_2cbc98:
    if (ctx->pc == 0x2CBC98u) {
        ctx->pc = 0x2CBC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC94u;
        // 0x2cbc98: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBC9Cu;
        goto label_2cbc9c;
    }
    ctx->pc = 0x2CBC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CBC9Cu);
        ctx->pc = 0x2CBC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC94u;
        // 0x2cbc98: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBC94u, 0x2CBC9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CBC9Cu;
label_2cbc9c:
    // 0x2cbc9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cbc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbca0:
    // 0x2cbca0: 0xc0b92ae  jal         func_2E4AB8
label_2cbca4:
    if (ctx->pc == 0x2CBCA4u) {
        ctx->pc = 0x2CBCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCA0u;
        // 0x2cbca4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBCA8u;
        goto label_2cbca8;
    }
    ctx->pc = 0x2CBCA0u;
    SET_GPR_U32(ctx, 31, 0x2CBCA8u);
    ctx->pc = 0x2CBCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBCA0u;
    // 0x2cbca4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4AB8u, 0x2CBCA0u, 0x2CBCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBCA8u;
label_2cbca8:
    // 0x2cbca8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cbca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cbcac:
    // 0x2cbcac: 0x10000019  b           . + 4 + (0x19 << 2)
label_2cbcb0:
    if (ctx->pc == 0x2CBCB0u) {
        ctx->pc = 0x2CBCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCACu;
        // 0x2cbcb0: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBCB4u;
        goto label_2cbcb4;
    }
    ctx->pc = 0x2CBCACu;
    {
        const bool branch_taken_0x2cbcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCACu;
        // 0x2cbcb0: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcac) {
            ctx->pc = 0x2CBD14u;
            goto label_2cbd14;
        }
    }
    ctx->pc = 0x2CBCB4u;
label_2cbcb4:
    // 0x2cbcb4: 0xc0d4da6  jal         func_353698
label_2cbcb8:
    if (ctx->pc == 0x2CBCB8u) {
        ctx->pc = 0x2CBCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCB4u;
        // 0x2cbcb8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBCBCu;
        goto label_2cbcbc;
    }
    ctx->pc = 0x2CBCB4u;
    SET_GPR_U32(ctx, 31, 0x2CBCBCu);
    ctx->pc = 0x2CBCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBCB4u;
    // 0x2cbcb8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CBCB4u, 0x2CBCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBCBCu;
label_2cbcbc:
    // 0x2cbcbc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2cbcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cbcc0:
    // 0x2cbcc0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2cbcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2cbcc4:
    // 0x2cbcc4: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x2cbcc4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_2cbcc8:
    // 0x2cbcc8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cbcc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cbccc:
    // 0x2cbccc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cbcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cbcd0:
    // 0x2cbcd0: 0x40f809  jalr        $v0
label_2cbcd4:
    if (ctx->pc == 0x2CBCD4u) {
        ctx->pc = 0x2CBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCD0u;
        // 0x2cbcd4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBCD8u;
        goto label_2cbcd8;
    }
    ctx->pc = 0x2CBCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CBCD8u);
        ctx->pc = 0x2CBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCD0u;
        // 0x2cbcd4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBCD0u, 0x2CBCD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CBCD8u;
label_2cbcd8:
    // 0x2cbcd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cbcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbcdc:
    // 0x2cbcdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cbcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbce0:
    // 0x2cbce0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cbce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbce4:
    // 0x2cbce4: 0xc0b923a  jal         func_2E48E8
label_2cbce8:
    if (ctx->pc == 0x2CBCE8u) {
        ctx->pc = 0x2CBCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCE4u;
        // 0x2cbce8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBCECu;
        goto label_2cbcec;
    }
    ctx->pc = 0x2CBCE4u;
    SET_GPR_U32(ctx, 31, 0x2CBCECu);
    ctx->pc = 0x2CBCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBCE4u;
    // 0x2cbce8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E48E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E48E8u, 0x2CBCE4u, 0x2CBCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBCECu;
label_2cbcec:
    // 0x2cbcec: 0x10000009  b           . + 4 + (0x9 << 2)
label_2cbcf0:
    if (ctx->pc == 0x2CBCF0u) {
        ctx->pc = 0x2CBCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCECu;
        // 0x2cbcf0: 0xa651001c  sh          $s1, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBCF4u;
        goto label_2cbcf4;
    }
    ctx->pc = 0x2CBCECu;
    {
        const bool branch_taken_0x2cbcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCECu;
        // 0x2cbcf0: 0xa651001c  sh          $s1, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcec) {
            ctx->pc = 0x2CBD14u;
            goto label_2cbd14;
        }
    }
    ctx->pc = 0x2CBCF4u;
label_2cbcf4:
    // 0x2cbcf4: 0xc0a367c  jal         func_28D9F0
label_2cbcf8:
    if (ctx->pc == 0x2CBCF8u) {
        ctx->pc = 0x2CBCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCF4u;
        // 0x2cbcf8: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBCFCu;
        goto label_2cbcfc;
    }
    ctx->pc = 0x2CBCF4u;
    SET_GPR_U32(ctx, 31, 0x2CBCFCu);
    ctx->pc = 0x2CBCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBCF4u;
    // 0x2cbcf8: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CBCF4u, 0x2CBCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBCFCu;
label_2cbcfc:
    // 0x2cbcfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2cbd00:
    if (ctx->pc == 0x2CBD00u) {
        ctx->pc = 0x2CBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCFCu;
        // 0x2cbd00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBD04u;
        goto label_2cbd04;
    }
    ctx->pc = 0x2CBCFCu;
    {
        const bool branch_taken_0x2cbcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCFCu;
        // 0x2cbd00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcfc) {
            ctx->pc = 0x2CBD14u;
            goto label_2cbd14;
        }
    }
    ctx->pc = 0x2CBD04u;
label_2cbd04:
    // 0x2cbd04: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2cbd04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cbd08:
    // 0x2cbd08: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x2cbd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_2cbd0c:
    // 0x2cbd0c: 0xc0be888  jal         func_2FA220
label_2cbd10:
    if (ctx->pc == 0x2CBD10u) {
        ctx->pc = 0x2CBD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD0Cu;
        // 0x2cbd10: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBD14u;
        goto label_2cbd14;
    }
    ctx->pc = 0x2CBD0Cu;
    SET_GPR_U32(ctx, 31, 0x2CBD14u);
    ctx->pc = 0x2CBD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBD0Cu;
    // 0x2cbd10: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA220u, 0x2CBD0Cu, 0x2CBD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD14u;
label_2cbd14:
    // 0x2cbd14: 0x10000181  b           . + 4 + (0x181 << 2)
label_2cbd18:
    if (ctx->pc == 0x2CBD18u) {
        ctx->pc = 0x2CBD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD14u;
        // 0x2cbd18: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBD1Cu;
        goto label_2cbd1c;
    }
    ctx->pc = 0x2CBD14u;
    {
        const bool branch_taken_0x2cbd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD14u;
        // 0x2cbd18: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd14) {
            ctx->pc = 0x2CC31Cu;
            goto label_2cc31c;
        }
    }
    ctx->pc = 0x2CBD1Cu;
label_2cbd1c:
    // 0x2cbd1c: 0xc0a367c  jal         func_28D9F0
label_2cbd20:
    if (ctx->pc == 0x2CBD20u) {
        ctx->pc = 0x2CBD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD1Cu;
        // 0x2cbd20: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBD24u;
        goto label_2cbd24;
    }
    ctx->pc = 0x2CBD1Cu;
    SET_GPR_U32(ctx, 31, 0x2CBD24u);
    ctx->pc = 0x2CBD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBD1Cu;
    // 0x2cbd20: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CBD1Cu, 0x2CBD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD24u;
label_2cbd24:
    // 0x2cbd24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2cbd28:
    if (ctx->pc == 0x2CBD28u) {
        ctx->pc = 0x2CBD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD24u;
        // 0x2cbd28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBD2Cu;
        goto label_2cbd2c;
    }
    ctx->pc = 0x2CBD24u;
    {
        const bool branch_taken_0x2cbd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD24u;
        // 0x2cbd28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd24) {
            ctx->pc = 0x2CBD3Cu;
            goto label_2cbd3c;
        }
    }
    ctx->pc = 0x2CBD2Cu;
label_2cbd2c:
    // 0x2cbd2c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2cbd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cbd30:
    // 0x2cbd30: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x2cbd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_2cbd34:
    // 0x2cbd34: 0xc0be888  jal         func_2FA220
label_2cbd38:
    if (ctx->pc == 0x2CBD38u) {
        ctx->pc = 0x2CBD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD34u;
        // 0x2cbd38: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBD3Cu;
        goto label_2cbd3c;
    }
    ctx->pc = 0x2CBD34u;
    SET_GPR_U32(ctx, 31, 0x2CBD3Cu);
    ctx->pc = 0x2CBD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBD34u;
    // 0x2cbd38: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA220u, 0x2CBD34u, 0x2CBD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD3Cu;
label_2cbd3c:
    // 0x2cbd3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cbd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cbd40:
    // 0x2cbd40: 0x10000176  b           . + 4 + (0x176 << 2)
label_2cbd44:
    if (ctx->pc == 0x2CBD44u) {
        ctx->pc = 0x2CBD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD40u;
        // 0x2cbd44: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBD48u;
        goto label_2cbd48;
    }
    ctx->pc = 0x2CBD40u;
    {
        const bool branch_taken_0x2cbd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD40u;
        // 0x2cbd44: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd40) {
            ctx->pc = 0x2CC31Cu;
            goto label_2cc31c;
        }
    }
    ctx->pc = 0x2CBD48u;
label_2cbd48:
    // 0x2cbd48: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2cbd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_2cbd4c:
    // 0x2cbd4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cbd4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cbd50:
    // 0x2cbd50: 0x0  nop
    ctx->pc = 0x2cbd50u;
    // NOP
label_2cbd54:
    // 0x2cbd54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cbd54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cbd58:
    // 0x2cbd58: 0x0  nop
    ctx->pc = 0x2cbd58u;
    // NOP
label_2cbd5c:
    // 0x2cbd5c: 0x45010060  bc1t        . + 4 + (0x60 << 2)
label_2cbd60:
    if (ctx->pc == 0x2CBD60u) {
        ctx->pc = 0x2CBD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD5Cu;
        // 0x2cbd60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBD64u;
        goto label_2cbd64;
    }
    ctx->pc = 0x2CBD5Cu;
    {
        const bool branch_taken_0x2cbd5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CBD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD5Cu;
        // 0x2cbd60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd5c) {
            ctx->pc = 0x2CBEE0u;
            goto label_2cbee0;
        }
    }
    ctx->pc = 0x2CBD64u;
label_2cbd64:
    // 0x2cbd64: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2cbd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2cbd68:
    // 0x2cbd68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2cbd6c:
    if (ctx->pc == 0x2CBD6Cu) {
        ctx->pc = 0x2CBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD68u;
        // 0x2cbd6c: 0x55102b  sltu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBD70u;
        goto label_2cbd70;
    }
    ctx->pc = 0x2CBD68u;
    {
        const bool branch_taken_0x2cbd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD68u;
        // 0x2cbd6c: 0x55102b  sltu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd68) {
            ctx->pc = 0x2CBD80u;
            goto label_2cbd80;
        }
    }
    ctx->pc = 0x2CBD70u;
label_2cbd70:
    // 0x2cbd70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2cbd74:
    if (ctx->pc == 0x2CBD74u) {
        ctx->pc = 0x2CBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD70u;
        // 0x2cbd74: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBD78u;
        goto label_2cbd78;
    }
    ctx->pc = 0x2CBD70u;
    {
        const bool branch_taken_0x2cbd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD70u;
        // 0x2cbd74: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd70) {
            ctx->pc = 0x2CBD88u;
            goto label_2cbd88;
        }
    }
    ctx->pc = 0x2CBD78u;
label_2cbd78:
    // 0x2cbd78: 0x1000005a  b           . + 4 + (0x5A << 2)
label_2cbd7c:
    if (ctx->pc == 0x2CBD7Cu) {
        ctx->pc = 0x2CBD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD78u;
        // 0x2cbd7c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBD80u;
        goto label_2cbd80;
    }
    ctx->pc = 0x2CBD78u;
    {
        const bool branch_taken_0x2cbd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD78u;
        // 0x2cbd7c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd78) {
            ctx->pc = 0x2CBEE4u;
            goto label_2cbee4;
        }
    }
    ctx->pc = 0x2CBD80u;
label_2cbd80:
    // 0x2cbd80: 0x26a21388  addiu       $v0, $s5, 0x1388
    ctx->pc = 0x2cbd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 5000));
label_2cbd84:
    // 0x2cbd84: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2cbd84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_2cbd88:
    // 0x2cbd88: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cbd8c:
    // 0x2cbd8c: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2cbd8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2cbd90:
    // 0x2cbd90: 0x1c600163  bgtz        $v1, . + 4 + (0x163 << 2)
label_2cbd94:
    if (ctx->pc == 0x2CBD94u) {
        ctx->pc = 0x2CBD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD90u;
        // 0x2cbd94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBD98u;
        goto label_2cbd98;
    }
    ctx->pc = 0x2CBD90u;
    {
        const bool branch_taken_0x2cbd90 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2CBD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD90u;
        // 0x2cbd94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd90) {
            ctx->pc = 0x2CC320u;
            goto label_2cc320;
        }
    }
    ctx->pc = 0x2CBD98u;
label_2cbd98:
    // 0x2cbd98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2cbd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2cbd9c:
    // 0x2cbd9c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2cbd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2cbda0:
    // 0x2cbda0: 0x84830412  lh          $v1, 0x412($a0)
    ctx->pc = 0x2cbda0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1042)));
label_2cbda4:
    // 0x2cbda4: 0x460015d  bltz        $v1, . + 4 + (0x15D << 2)
label_2cbda8:
    if (ctx->pc == 0x2CBDA8u) {
        ctx->pc = 0x2CBDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDA4u;
        // 0x2cbda8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBDACu;
        goto label_2cbdac;
    }
    ctx->pc = 0x2CBDA4u;
    {
        const bool branch_taken_0x2cbda4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CBDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDA4u;
        // 0x2cbda8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbda4) {
            ctx->pc = 0x2CC31Cu;
            goto label_2cc31c;
        }
    }
    ctx->pc = 0x2CBDACu;
label_2cbdac:
    // 0x2cbdac: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_2cbdb0:
    if (ctx->pc == 0x2CBDB0u) {
        ctx->pc = 0x2CBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDACu;
        // 0x2cbdb0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBDB4u;
        goto label_2cbdb4;
    }
    ctx->pc = 0x2CBDACu;
    {
        const bool branch_taken_0x2cbdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDACu;
        // 0x2cbdb0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbdac) {
            ctx->pc = 0x2CBF2Cu;
            goto label_2cbf2c;
        }
    }
    ctx->pc = 0x2CBDB4u;
label_2cbdb4:
    // 0x2cbdb4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2cbdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cbdb8:
    // 0x2cbdb8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cbdb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cbdbc:
    // 0x2cbdbc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cbdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cbdc0:
    // 0x2cbdc0: 0x40f809  jalr        $v0
label_2cbdc4:
    if (ctx->pc == 0x2CBDC4u) {
        ctx->pc = 0x2CBDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDC0u;
        // 0x2cbdc4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBDC8u;
        goto label_2cbdc8;
    }
    ctx->pc = 0x2CBDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CBDC8u);
        ctx->pc = 0x2CBDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDC0u;
        // 0x2cbdc4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBDC0u, 0x2CBDC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CBDC8u;
label_2cbdc8:
    // 0x2cbdc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cbdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbdcc:
    // 0x2cbdcc: 0xc0a48cc  jal         func_292330
label_2cbdd0:
    if (ctx->pc == 0x2CBDD0u) {
        ctx->pc = 0x2CBDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDCCu;
        // 0x2cbdd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBDD4u;
        goto label_2cbdd4;
    }
    ctx->pc = 0x2CBDCCu;
    SET_GPR_U32(ctx, 31, 0x2CBDD4u);
    ctx->pc = 0x2CBDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBDCCu;
    // 0x2cbdd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x2CBDCCu, 0x2CBDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBDD4u;
label_2cbdd4:
    // 0x2cbdd4: 0xc0d5156  jal         func_354558
label_2cbdd8:
    if (ctx->pc == 0x2CBDD8u) {
        ctx->pc = 0x2CBDDCu;
        goto label_2cbddc;
    }
    ctx->pc = 0x2CBDD4u;
    SET_GPR_U32(ctx, 31, 0x2CBDDCu);
    ctx->pc = 0x354558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354558u, 0x2CBDD4u, 0x2CBDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBDDCu;
label_2cbddc:
    // 0x2cbddc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2cbddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2cbde0:
    // 0x2cbde0: 0x2484a068  addiu       $a0, $a0, -0x5F98
    ctx->pc = 0x2cbde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942824));
label_2cbde4:
    // 0x2cbde4: 0xc0d4da6  jal         func_353698
label_2cbde8:
    if (ctx->pc == 0x2CBDE8u) {
        ctx->pc = 0x2CBDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDE4u;
        // 0x2cbde8: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBDECu;
        goto label_2cbdec;
    }
    ctx->pc = 0x2CBDE4u;
    SET_GPR_U32(ctx, 31, 0x2CBDECu);
    ctx->pc = 0x2CBDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBDE4u;
    // 0x2cbde8: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CBDE4u, 0x2CBDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBDECu;
label_2cbdec:
    // 0x2cbdec: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2cbdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cbdf0:
    // 0x2cbdf0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2cbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2cbdf4:
    // 0x2cbdf4: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x2cbdf4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_2cbdf8:
    // 0x2cbdf8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cbdf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cbdfc:
    // 0x2cbdfc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cbdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cbe00:
    // 0x2cbe00: 0x40f809  jalr        $v0
label_2cbe04:
    if (ctx->pc == 0x2CBE04u) {
        ctx->pc = 0x2CBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE00u;
        // 0x2cbe04: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBE08u;
        goto label_2cbe08;
    }
    ctx->pc = 0x2CBE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CBE08u);
        ctx->pc = 0x2CBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE00u;
        // 0x2cbe04: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBE00u, 0x2CBE08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CBE08u;
label_2cbe08:
    // 0x2cbe08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cbe08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbe0c:
    // 0x2cbe0c: 0xc0b92ae  jal         func_2E4AB8
label_2cbe10:
    if (ctx->pc == 0x2CBE10u) {
        ctx->pc = 0x2CBE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE0Cu;
        // 0x2cbe10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBE14u;
        goto label_2cbe14;
    }
    ctx->pc = 0x2CBE0Cu;
    SET_GPR_U32(ctx, 31, 0x2CBE14u);
    ctx->pc = 0x2CBE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE0Cu;
    // 0x2cbe10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4AB8u, 0x2CBE0Cu, 0x2CBE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE14u;
label_2cbe14:
    // 0x2cbe14: 0xc087502  jal         func_21D408
label_2cbe18:
    if (ctx->pc == 0x2CBE18u) {
        ctx->pc = 0x2CBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE14u;
        // 0x2cbe18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBE1Cu;
        goto label_2cbe1c;
    }
    ctx->pc = 0x2CBE14u;
    SET_GPR_U32(ctx, 31, 0x2CBE1Cu);
    ctx->pc = 0x2CBE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE14u;
    // 0x2cbe18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CBE14u, 0x2CBE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE1Cu;
label_2cbe1c:
    // 0x2cbe1c: 0xc0a367c  jal         func_28D9F0
label_2cbe20:
    if (ctx->pc == 0x2CBE20u) {
        ctx->pc = 0x2CBE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE1Cu;
        // 0x2cbe20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBE24u;
        goto label_2cbe24;
    }
    ctx->pc = 0x2CBE1Cu;
    SET_GPR_U32(ctx, 31, 0x2CBE24u);
    ctx->pc = 0x2CBE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE1Cu;
    // 0x2cbe20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CBE1Cu, 0x2CBE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE24u;
label_2cbe24:
    // 0x2cbe24: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2cbe24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbe28:
    // 0x2cbe28: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
label_2cbe2c:
    if (ctx->pc == 0x2CBE2Cu) {
        ctx->pc = 0x2CBE30u;
        goto label_2cbe30;
    }
    ctx->pc = 0x2CBE28u;
    {
        const bool branch_taken_0x2cbe28 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbe28) {
            ctx->pc = 0x2CBE74u;
            goto label_2cbe74;
        }
    }
    ctx->pc = 0x2CBE30u;
label_2cbe30:
    // 0x2cbe30: 0xc087502  jal         func_21D408
label_2cbe34:
    if (ctx->pc == 0x2CBE34u) {
        ctx->pc = 0x2CBE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE30u;
        // 0x2cbe34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBE38u;
        goto label_2cbe38;
    }
    ctx->pc = 0x2CBE30u;
    SET_GPR_U32(ctx, 31, 0x2CBE38u);
    ctx->pc = 0x2CBE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE30u;
    // 0x2cbe34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CBE30u, 0x2CBE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE38u;
label_2cbe38:
    // 0x2cbe38: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2cbe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cbe3c:
    // 0x2cbe3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cbe3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbe40:
    // 0x2cbe40: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2cbe40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2cbe44:
    // 0x2cbe44: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2cbe44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2cbe48:
    // 0x2cbe48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbe4c:
    // 0x2cbe4c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2cbe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2cbe50:
    // 0x2cbe50: 0x40f809  jalr        $v0
label_2cbe54:
    if (ctx->pc == 0x2CBE54u) {
        ctx->pc = 0x2CBE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE50u;
        // 0x2cbe54: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBE58u;
        goto label_2cbe58;
    }
    ctx->pc = 0x2CBE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CBE58u);
        ctx->pc = 0x2CBE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE50u;
        // 0x2cbe54: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBE50u, 0x2CBE58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CBE58u;
label_2cbe58:
    // 0x2cbe58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cbe58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2cbe5c:
    // 0x2cbe5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cbe5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cbe60:
    // 0x2cbe60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cbe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cbe64:
    // 0x2cbe64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cbe64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cbe68:
    // 0x2cbe68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cbe68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbe6c:
    // 0x2cbe6c: 0xc0bf800  jal         func_2FE000
label_2cbe70:
    if (ctx->pc == 0x2CBE70u) {
        ctx->pc = 0x2CBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE6Cu;
        // 0x2cbe70: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBE74u;
        goto label_2cbe74;
    }
    ctx->pc = 0x2CBE6Cu;
    SET_GPR_U32(ctx, 31, 0x2CBE74u);
    ctx->pc = 0x2CBE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE6Cu;
    // 0x2cbe70: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CBE6Cu, 0x2CBE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE74u;
label_2cbe74:
    // 0x2cbe74: 0xc087502  jal         func_21D408
label_2cbe78:
    if (ctx->pc == 0x2CBE78u) {
        ctx->pc = 0x2CBE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE74u;
        // 0x2cbe78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBE7Cu;
        goto label_2cbe7c;
    }
    ctx->pc = 0x2CBE74u;
    SET_GPR_U32(ctx, 31, 0x2CBE7Cu);
    ctx->pc = 0x2CBE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE74u;
    // 0x2cbe78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CBE74u, 0x2CBE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE7Cu;
label_2cbe7c:
    // 0x2cbe7c: 0xc0a367c  jal         func_28D9F0
label_2cbe80:
    if (ctx->pc == 0x2CBE80u) {
        ctx->pc = 0x2CBE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE7Cu;
        // 0x2cbe80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBE84u;
        goto label_2cbe84;
    }
    ctx->pc = 0x2CBE7Cu;
    SET_GPR_U32(ctx, 31, 0x2CBE84u);
    ctx->pc = 0x2CBE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE7Cu;
    // 0x2cbe80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CBE7Cu, 0x2CBE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE84u;
label_2cbe84:
    // 0x2cbe84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cbe84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbe88:
    // 0x2cbe88: 0x120000a1  beqz        $s0, . + 4 + (0xA1 << 2)
label_2cbe8c:
    if (ctx->pc == 0x2CBE8Cu) {
        ctx->pc = 0x2CBE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE88u;
        // 0x2cbe8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBE90u;
        goto label_2cbe90;
    }
    ctx->pc = 0x2CBE88u;
    {
        const bool branch_taken_0x2cbe88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE88u;
        // 0x2cbe8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe88) {
            ctx->pc = 0x2CC110u;
            goto label_2cc110;
        }
    }
    ctx->pc = 0x2CBE90u;
label_2cbe90:
    // 0x2cbe90: 0xc087502  jal         func_21D408
label_2cbe94:
    if (ctx->pc == 0x2CBE94u) {
        ctx->pc = 0x2CBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE90u;
        // 0x2cbe94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBE98u;
        goto label_2cbe98;
    }
    ctx->pc = 0x2CBE90u;
    SET_GPR_U32(ctx, 31, 0x2CBE98u);
    ctx->pc = 0x2CBE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE90u;
    // 0x2cbe94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CBE90u, 0x2CBE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE98u;
label_2cbe98:
    // 0x2cbe98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbe98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbe9c:
    // 0x2cbe9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cbe9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbea0:
    // 0x2cbea0: 0xc0bf3ca  jal         func_2FCF28
label_2cbea4:
    if (ctx->pc == 0x2CBEA4u) {
        ctx->pc = 0x2CBEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBEA0u;
        // 0x2cbea4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBEA8u;
        goto label_2cbea8;
    }
    ctx->pc = 0x2CBEA0u;
    SET_GPR_U32(ctx, 31, 0x2CBEA8u);
    ctx->pc = 0x2CBEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBEA0u;
    // 0x2cbea4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF28u, 0x2CBEA0u, 0x2CBEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBEA8u;
label_2cbea8:
    // 0x2cbea8: 0x10000099  b           . + 4 + (0x99 << 2)
label_2cbeac:
    if (ctx->pc == 0x2CBEACu) {
        ctx->pc = 0x2CBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBEA8u;
        // 0x2cbeac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBEB0u;
        goto label_2cbeb0;
    }
    ctx->pc = 0x2CBEA8u;
    {
        const bool branch_taken_0x2cbea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBEA8u;
        // 0x2cbeac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbea8) {
            ctx->pc = 0x2CC110u;
            goto label_2cc110;
        }
    }
    ctx->pc = 0x2CBEB0u;
label_2cbeb0:
    // 0x2cbeb0: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2cbeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_2cbeb4:
    // 0x2cbeb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cbeb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cbeb8:
    // 0x2cbeb8: 0x0  nop
    ctx->pc = 0x2cbeb8u;
    // NOP
label_2cbebc:
    // 0x2cbebc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cbebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cbec0:
    // 0x2cbec0: 0x0  nop
    ctx->pc = 0x2cbec0u;
    // NOP
label_2cbec4:
    // 0x2cbec4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2cbec8:
    if (ctx->pc == 0x2CBEC8u) {
        ctx->pc = 0x2CBEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBEC4u;
        // 0x2cbec8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBECCu;
        goto label_2cbecc;
    }
    ctx->pc = 0x2CBEC4u;
    {
        const bool branch_taken_0x2cbec4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CBEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBEC4u;
        // 0x2cbec8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbec4) {
            ctx->pc = 0x2CBEE0u;
            goto label_2cbee0;
        }
    }
    ctx->pc = 0x2CBECCu;
label_2cbecc:
    // 0x2cbecc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2cbeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2cbed0:
    // 0x2cbed0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2cbed4:
    if (ctx->pc == 0x2CBED4u) {
        ctx->pc = 0x2CBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBED0u;
        // 0x2cbed4: 0x55102b  sltu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBED8u;
        goto label_2cbed8;
    }
    ctx->pc = 0x2CBED0u;
    {
        const bool branch_taken_0x2cbed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBED0u;
        // 0x2cbed4: 0x55102b  sltu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbed0) {
            ctx->pc = 0x2CBEF4u;
            goto label_2cbef4;
        }
    }
    ctx->pc = 0x2CBED8u;
label_2cbed8:
    // 0x2cbed8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2cbedc:
    if (ctx->pc == 0x2CBEDCu) {
        ctx->pc = 0x2CBEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBED8u;
        // 0x2cbedc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBEE0u;
        goto label_2cbee0;
    }
    ctx->pc = 0x2CBED8u;
    {
        const bool branch_taken_0x2cbed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBED8u;
        // 0x2cbedc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbed8) {
            ctx->pc = 0x2CBEFCu;
            goto label_2cbefc;
        }
    }
    ctx->pc = 0x2CBEE0u;
label_2cbee0:
    // 0x2cbee0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2cbee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cbee4:
    // 0x2cbee4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2cbee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2cbee8:
    // 0x2cbee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cbee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cbeec:
    // 0x2cbeec: 0x1000010c  b           . + 4 + (0x10C << 2)
label_2cbef0:
    if (ctx->pc == 0x2CBEF0u) {
        ctx->pc = 0x2CBEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBEECu;
        // 0x2cbef0: 0xa4640412  sh          $a0, 0x412($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1042), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBEF4u;
        goto label_2cbef4;
    }
    ctx->pc = 0x2CBEECu;
    {
        const bool branch_taken_0x2cbeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBEECu;
        // 0x2cbef0: 0xa4640412  sh          $a0, 0x412($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1042), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbeec) {
            ctx->pc = 0x2CC320u;
            goto label_2cc320;
        }
    }
    ctx->pc = 0x2CBEF4u;
label_2cbef4:
    // 0x2cbef4: 0x26a21388  addiu       $v0, $s5, 0x1388
    ctx->pc = 0x2cbef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 5000));
label_2cbef8:
    // 0x2cbef8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2cbef8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_2cbefc:
    // 0x2cbefc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cbefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cbf00:
    // 0x2cbf00: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2cbf00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2cbf04:
    // 0x2cbf04: 0x1c600106  bgtz        $v1, . + 4 + (0x106 << 2)
label_2cbf08:
    if (ctx->pc == 0x2CBF08u) {
        ctx->pc = 0x2CBF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF04u;
        // 0x2cbf08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBF0Cu;
        goto label_2cbf0c;
    }
    ctx->pc = 0x2CBF04u;
    {
        const bool branch_taken_0x2cbf04 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2CBF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF04u;
        // 0x2cbf08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf04) {
            ctx->pc = 0x2CC320u;
            goto label_2cc320;
        }
    }
    ctx->pc = 0x2CBF0Cu;
label_2cbf0c:
    // 0x2cbf0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2cbf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2cbf10:
    // 0x2cbf10: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2cbf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2cbf14:
    // 0x2cbf14: 0x84830412  lh          $v1, 0x412($a0)
    ctx->pc = 0x2cbf14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1042)));
label_2cbf18:
    // 0x2cbf18: 0x4600100  bltz        $v1, . + 4 + (0x100 << 2)
label_2cbf1c:
    if (ctx->pc == 0x2CBF1Cu) {
        ctx->pc = 0x2CBF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF18u;
        // 0x2cbf1c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBF20u;
        goto label_2cbf20;
    }
    ctx->pc = 0x2CBF18u;
    {
        const bool branch_taken_0x2cbf18 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CBF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF18u;
        // 0x2cbf1c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf18) {
            ctx->pc = 0x2CC31Cu;
            goto label_2cc31c;
        }
    }
    ctx->pc = 0x2CBF20u;
label_2cbf20:
    // 0x2cbf20: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2cbf24:
    if (ctx->pc == 0x2CBF24u) {
        ctx->pc = 0x2CBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF20u;
        // 0x2cbf24: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBF28u;
        goto label_2cbf28;
    }
    ctx->pc = 0x2CBF20u;
    {
        const bool branch_taken_0x2cbf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbf20) {
            ctx->pc = 0x2CBF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBF20u;
            // 0x2cbf24: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBF4Cu;
            goto label_2cbf4c;
        }
    }
    ctx->pc = 0x2CBF28u;
label_2cbf28:
    // 0x2cbf28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cbf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cbf2c:
    // 0x2cbf2c: 0x146200fc  bne         $v1, $v0, . + 4 + (0xFC << 2)
label_2cbf30:
    if (ctx->pc == 0x2CBF30u) {
        ctx->pc = 0x2CBF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF2Cu;
        // 0x2cbf30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBF34u;
        goto label_2cbf34;
    }
    ctx->pc = 0x2CBF2Cu;
    {
        const bool branch_taken_0x2cbf2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CBF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF2Cu;
        // 0x2cbf30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf2c) {
            ctx->pc = 0x2CC320u;
            goto label_2cc320;
        }
    }
    ctx->pc = 0x2CBF34u;
label_2cbf34:
    // 0x2cbf34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cbf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cbf38:
    // 0x2cbf38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cbf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cbf3c:
    // 0x2cbf3c: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x2cbf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_2cbf40:
    // 0x2cbf40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cbf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cbf44:
    // 0x2cbf44: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_2cbf48:
    if (ctx->pc == 0x2CBF48u) {
        ctx->pc = 0x2CBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF44u;
        // 0x2cbf48: 0xa4830412  sh          $v1, 0x412($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1042), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBF4Cu;
        goto label_2cbf4c;
    }
    ctx->pc = 0x2CBF44u;
    {
        const bool branch_taken_0x2cbf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF44u;
        // 0x2cbf48: 0xa4830412  sh          $v1, 0x412($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1042), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf44) {
            ctx->pc = 0x2CC320u;
            goto label_2cc320;
        }
    }
    ctx->pc = 0x2CBF4Cu;
label_2cbf4c:
    // 0x2cbf4c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cbf4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cbf50:
    // 0x2cbf50: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cbf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cbf54:
    // 0x2cbf54: 0x40f809  jalr        $v0
label_2cbf58:
    if (ctx->pc == 0x2CBF58u) {
        ctx->pc = 0x2CBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF54u;
        // 0x2cbf58: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBF5Cu;
        goto label_2cbf5c;
    }
    ctx->pc = 0x2CBF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CBF5Cu);
        ctx->pc = 0x2CBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF54u;
        // 0x2cbf58: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBF54u, 0x2CBF5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CBF5Cu;
label_2cbf5c:
    // 0x2cbf5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cbf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbf60:
    // 0x2cbf60: 0xc0a48cc  jal         func_292330
label_2cbf64:
    if (ctx->pc == 0x2CBF64u) {
        ctx->pc = 0x2CBF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF60u;
        // 0x2cbf64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBF68u;
        goto label_2cbf68;
    }
    ctx->pc = 0x2CBF60u;
    SET_GPR_U32(ctx, 31, 0x2CBF68u);
    ctx->pc = 0x2CBF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBF60u;
    // 0x2cbf64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x2CBF60u, 0x2CBF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF68u;
label_2cbf68:
    // 0x2cbf68: 0xc0d5156  jal         func_354558
label_2cbf6c:
    if (ctx->pc == 0x2CBF6Cu) {
        ctx->pc = 0x2CBF70u;
        goto label_2cbf70;
    }
    ctx->pc = 0x2CBF68u;
    SET_GPR_U32(ctx, 31, 0x2CBF70u);
    ctx->pc = 0x354558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354558u, 0x2CBF68u, 0x2CBF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF70u;
label_2cbf70:
    // 0x2cbf70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2cbf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2cbf74:
    // 0x2cbf74: 0x2444a068  addiu       $a0, $v0, -0x5F98
    ctx->pc = 0x2cbf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942824));
label_2cbf78:
    // 0x2cbf78: 0x84830112  lh          $v1, 0x112($a0)
    ctx->pc = 0x2cbf78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 274)));
label_2cbf7c:
    // 0x2cbf7c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2cbf80:
    if (ctx->pc == 0x2CBF80u) {
        ctx->pc = 0x2CBF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF7Cu;
        // 0x2cbf80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBF84u;
        goto label_2cbf84;
    }
    ctx->pc = 0x2CBF7Cu;
    {
        const bool branch_taken_0x2cbf7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF7Cu;
        // 0x2cbf80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf7c) {
            ctx->pc = 0x2CBF94u;
            goto label_2cbf94;
        }
    }
    ctx->pc = 0x2CBF84u;
label_2cbf84:
    // 0x2cbf84: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
label_2cbf88:
    if (ctx->pc == 0x2CBF88u) {
        ctx->pc = 0x2CBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF84u;
        // 0x2cbf88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBF8Cu;
        goto label_2cbf8c;
    }
    ctx->pc = 0x2CBF84u;
    {
        const bool branch_taken_0x2cbf84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF84u;
        // 0x2cbf88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf84) {
            ctx->pc = 0x2CC060u;
            goto label_2cc060;
        }
    }
    ctx->pc = 0x2CBF8Cu;
label_2cbf8c:
    // 0x2cbf8c: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_2cbf90:
    if (ctx->pc == 0x2CBF90u) {
        ctx->pc = 0x2CBF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF8Cu;
        // 0x2cbf90: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBF94u;
        goto label_2cbf94;
    }
    ctx->pc = 0x2CBF8Cu;
    {
        const bool branch_taken_0x2cbf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF8Cu;
        // 0x2cbf90: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf8c) {
            ctx->pc = 0x2CC324u;
            goto label_2cc324;
        }
    }
    ctx->pc = 0x2CBF94u;
label_2cbf94:
    // 0x2cbf94: 0xc0d4da6  jal         func_353698
label_2cbf98:
    if (ctx->pc == 0x2CBF98u) {
        ctx->pc = 0x2CBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF94u;
        // 0x2cbf98: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBF9Cu;
        goto label_2cbf9c;
    }
    ctx->pc = 0x2CBF94u;
    SET_GPR_U32(ctx, 31, 0x2CBF9Cu);
    ctx->pc = 0x2CBF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBF94u;
    // 0x2cbf98: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CBF94u, 0x2CBF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF9Cu;
label_2cbf9c:
    // 0x2cbf9c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2cbf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cbfa0:
    // 0x2cbfa0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2cbfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2cbfa4:
    // 0x2cbfa4: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x2cbfa4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_2cbfa8:
    // 0x2cbfa8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cbfa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cbfac:
    // 0x2cbfac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cbfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cbfb0:
    // 0x2cbfb0: 0x40f809  jalr        $v0
label_2cbfb4:
    if (ctx->pc == 0x2CBFB4u) {
        ctx->pc = 0x2CBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFB0u;
        // 0x2cbfb4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBFB8u;
        goto label_2cbfb8;
    }
    ctx->pc = 0x2CBFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CBFB8u);
        ctx->pc = 0x2CBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFB0u;
        // 0x2cbfb4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBFB0u, 0x2CBFB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CBFB8u;
label_2cbfb8:
    // 0x2cbfb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cbfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbfbc:
    // 0x2cbfbc: 0xc0b92ae  jal         func_2E4AB8
label_2cbfc0:
    if (ctx->pc == 0x2CBFC0u) {
        ctx->pc = 0x2CBFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFBCu;
        // 0x2cbfc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBFC4u;
        goto label_2cbfc4;
    }
    ctx->pc = 0x2CBFBCu;
    SET_GPR_U32(ctx, 31, 0x2CBFC4u);
    ctx->pc = 0x2CBFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBFBCu;
    // 0x2cbfc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4AB8u, 0x2CBFBCu, 0x2CBFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBFC4u;
label_2cbfc4:
    // 0x2cbfc4: 0xc087502  jal         func_21D408
label_2cbfc8:
    if (ctx->pc == 0x2CBFC8u) {
        ctx->pc = 0x2CBFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFC4u;
        // 0x2cbfc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBFCCu;
        goto label_2cbfcc;
    }
    ctx->pc = 0x2CBFC4u;
    SET_GPR_U32(ctx, 31, 0x2CBFCCu);
    ctx->pc = 0x2CBFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBFC4u;
    // 0x2cbfc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CBFC4u, 0x2CBFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBFCCu;
label_2cbfcc:
    // 0x2cbfcc: 0xc0a367c  jal         func_28D9F0
label_2cbfd0:
    if (ctx->pc == 0x2CBFD0u) {
        ctx->pc = 0x2CBFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFCCu;
        // 0x2cbfd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBFD4u;
        goto label_2cbfd4;
    }
    ctx->pc = 0x2CBFCCu;
    SET_GPR_U32(ctx, 31, 0x2CBFD4u);
    ctx->pc = 0x2CBFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBFCCu;
    // 0x2cbfd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CBFCCu, 0x2CBFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBFD4u;
label_2cbfd4:
    // 0x2cbfd4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2cbfd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbfd8:
    // 0x2cbfd8: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
label_2cbfdc:
    if (ctx->pc == 0x2CBFDCu) {
        ctx->pc = 0x2CBFE0u;
        goto label_2cbfe0;
    }
    ctx->pc = 0x2CBFD8u;
    {
        const bool branch_taken_0x2cbfd8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbfd8) {
            ctx->pc = 0x2CC024u;
            goto label_2cc024;
        }
    }
    ctx->pc = 0x2CBFE0u;
label_2cbfe0:
    // 0x2cbfe0: 0xc087502  jal         func_21D408
label_2cbfe4:
    if (ctx->pc == 0x2CBFE4u) {
        ctx->pc = 0x2CBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFE0u;
        // 0x2cbfe4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBFE8u;
        goto label_2cbfe8;
    }
    ctx->pc = 0x2CBFE0u;
    SET_GPR_U32(ctx, 31, 0x2CBFE8u);
    ctx->pc = 0x2CBFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBFE0u;
    // 0x2cbfe4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CBFE0u, 0x2CBFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBFE8u;
label_2cbfe8:
    // 0x2cbfe8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2cbfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cbfec:
    // 0x2cbfec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cbfecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbff0:
    // 0x2cbff0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2cbff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2cbff4:
    // 0x2cbff4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2cbff4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2cbff8:
    // 0x2cbff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbffc:
    // 0x2cbffc: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2cbffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2cc000:
    // 0x2cc000: 0x40f809  jalr        $v0
label_2cc004:
    if (ctx->pc == 0x2CC004u) {
        ctx->pc = 0x2CC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC000u;
        // 0x2cc004: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC008u;
        goto label_2cc008;
    }
    ctx->pc = 0x2CC000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CC008u);
        ctx->pc = 0x2CC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC000u;
        // 0x2cc004: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC000u, 0x2CC008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CC008u;
label_2cc008:
    // 0x2cc008: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cc008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2cc00c:
    // 0x2cc00c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cc00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cc010:
    // 0x2cc010: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cc010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cc014:
    // 0x2cc014: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cc014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc018:
    // 0x2cc018: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cc018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cc01c:
    // 0x2cc01c: 0xc0bf800  jal         func_2FE000
label_2cc020:
    if (ctx->pc == 0x2CC020u) {
        ctx->pc = 0x2CC020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC01Cu;
        // 0x2cc020: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC024u;
        goto label_2cc024;
    }
    ctx->pc = 0x2CC01Cu;
    SET_GPR_U32(ctx, 31, 0x2CC024u);
    ctx->pc = 0x2CC020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC01Cu;
    // 0x2cc020: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CC01Cu, 0x2CC024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC024u;
label_2cc024:
    // 0x2cc024: 0xc087502  jal         func_21D408
label_2cc028:
    if (ctx->pc == 0x2CC028u) {
        ctx->pc = 0x2CC028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC024u;
        // 0x2cc028: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC02Cu;
        goto label_2cc02c;
    }
    ctx->pc = 0x2CC024u;
    SET_GPR_U32(ctx, 31, 0x2CC02Cu);
    ctx->pc = 0x2CC028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC024u;
    // 0x2cc028: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CC024u, 0x2CC02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC02Cu;
label_2cc02c:
    // 0x2cc02c: 0xc0a367c  jal         func_28D9F0
label_2cc030:
    if (ctx->pc == 0x2CC030u) {
        ctx->pc = 0x2CC030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC02Cu;
        // 0x2cc030: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC034u;
        goto label_2cc034;
    }
    ctx->pc = 0x2CC02Cu;
    SET_GPR_U32(ctx, 31, 0x2CC034u);
    ctx->pc = 0x2CC030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC02Cu;
    // 0x2cc030: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CC02Cu, 0x2CC034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC034u;
label_2cc034:
    // 0x2cc034: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cc034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc038:
    // 0x2cc038: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
label_2cc03c:
    if (ctx->pc == 0x2CC03Cu) {
        ctx->pc = 0x2CC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC038u;
        // 0x2cc03c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC040u;
        goto label_2cc040;
    }
    ctx->pc = 0x2CC038u;
    {
        const bool branch_taken_0x2cc038 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC038u;
        // 0x2cc03c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc038) {
            ctx->pc = 0x2CC110u;
            goto label_2cc110;
        }
    }
    ctx->pc = 0x2CC040u;
label_2cc040:
    // 0x2cc040: 0xc087502  jal         func_21D408
label_2cc044:
    if (ctx->pc == 0x2CC044u) {
        ctx->pc = 0x2CC044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC040u;
        // 0x2cc044: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC048u;
        goto label_2cc048;
    }
    ctx->pc = 0x2CC040u;
    SET_GPR_U32(ctx, 31, 0x2CC048u);
    ctx->pc = 0x2CC044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC040u;
    // 0x2cc044: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CC040u, 0x2CC048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC048u;
label_2cc048:
    // 0x2cc048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cc04c:
    // 0x2cc04c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cc04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc050:
    // 0x2cc050: 0xc0bf3ca  jal         func_2FCF28
label_2cc054:
    if (ctx->pc == 0x2CC054u) {
        ctx->pc = 0x2CC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC050u;
        // 0x2cc054: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC058u;
        goto label_2cc058;
    }
    ctx->pc = 0x2CC050u;
    SET_GPR_U32(ctx, 31, 0x2CC058u);
    ctx->pc = 0x2CC054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC050u;
    // 0x2cc054: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF28u, 0x2CC050u, 0x2CC058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC058u;
label_2cc058:
    // 0x2cc058: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2cc05c:
    if (ctx->pc == 0x2CC05Cu) {
        ctx->pc = 0x2CC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC058u;
        // 0x2cc05c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC060u;
        goto label_2cc060;
    }
    ctx->pc = 0x2CC058u;
    {
        const bool branch_taken_0x2cc058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC058u;
        // 0x2cc05c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc058) {
            ctx->pc = 0x2CC110u;
            goto label_2cc110;
        }
    }
    ctx->pc = 0x2CC060u;
label_2cc060:
    // 0x2cc060: 0xc0d4da6  jal         func_353698
label_2cc064:
    if (ctx->pc == 0x2CC064u) {
        ctx->pc = 0x2CC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC060u;
        // 0x2cc064: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC068u;
        goto label_2cc068;
    }
    ctx->pc = 0x2CC060u;
    SET_GPR_U32(ctx, 31, 0x2CC068u);
    ctx->pc = 0x2CC064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC060u;
    // 0x2cc064: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CC060u, 0x2CC068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC068u;
label_2cc068:
    // 0x2cc068: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2cc068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cc06c:
    // 0x2cc06c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2cc06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2cc070:
    // 0x2cc070: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x2cc070u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_2cc074:
    // 0x2cc074: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cc074u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cc078:
    // 0x2cc078: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cc078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cc07c:
    // 0x2cc07c: 0x40f809  jalr        $v0
label_2cc080:
    if (ctx->pc == 0x2CC080u) {
        ctx->pc = 0x2CC080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC07Cu;
        // 0x2cc080: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC084u;
        goto label_2cc084;
    }
    ctx->pc = 0x2CC07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CC084u);
        ctx->pc = 0x2CC080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC07Cu;
        // 0x2cc080: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC07Cu, 0x2CC084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CC084u;
label_2cc084:
    // 0x2cc084: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc088:
    // 0x2cc088: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cc088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cc08c:
    // 0x2cc08c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc090:
    // 0x2cc090: 0xc0b923a  jal         func_2E48E8
label_2cc094:
    if (ctx->pc == 0x2CC094u) {
        ctx->pc = 0x2CC094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC090u;
        // 0x2cc094: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC098u;
        goto label_2cc098;
    }
    ctx->pc = 0x2CC090u;
    SET_GPR_U32(ctx, 31, 0x2CC098u);
    ctx->pc = 0x2CC094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC090u;
    // 0x2cc094: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E48E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E48E8u, 0x2CC090u, 0x2CC098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC098u;
label_2cc098:
    // 0x2cc098: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2cc098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2cc09c:
    // 0x2cc09c: 0x1000009f  b           . + 4 + (0x9F << 2)
label_2cc0a0:
    if (ctx->pc == 0x2CC0A0u) {
        ctx->pc = 0x2CC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC09Cu;
        // 0x2cc0a0: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC0A4u;
        goto label_2cc0a4;
    }
    ctx->pc = 0x2CC09Cu;
    {
        const bool branch_taken_0x2cc09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC09Cu;
        // 0x2cc0a0: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc09c) {
            ctx->pc = 0x2CC31Cu;
            goto label_2cc31c;
        }
    }
    ctx->pc = 0x2CC0A4u;
label_2cc0a4:
    // 0x2cc0a4: 0xc087502  jal         func_21D408
label_2cc0a8:
    if (ctx->pc == 0x2CC0A8u) {
        ctx->pc = 0x2CC0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0A4u;
        // 0x2cc0a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC0ACu;
        goto label_2cc0ac;
    }
    ctx->pc = 0x2CC0A4u;
    SET_GPR_U32(ctx, 31, 0x2CC0ACu);
    ctx->pc = 0x2CC0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0A4u;
    // 0x2cc0a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CC0A4u, 0x2CC0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0ACu;
label_2cc0ac:
    // 0x2cc0ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cc0acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc0b0:
    // 0x2cc0b0: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x2cc0b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2cc0b4:
    // 0x2cc0b4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2cc0b8:
    if (ctx->pc == 0x2CC0B8u) {
        ctx->pc = 0x2CC0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0B4u;
        // 0x2cc0b8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC0BCu;
        goto label_2cc0bc;
    }
    ctx->pc = 0x2CC0B4u;
    {
        const bool branch_taken_0x2cc0b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CC0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0B4u;
        // 0x2cc0b8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc0b4) {
            ctx->pc = 0x2CC0C8u;
            goto label_2cc0c8;
        }
    }
    ctx->pc = 0x2CC0BCu;
label_2cc0bc:
    // 0x2cc0bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cc0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2cc0c0:
    // 0x2cc0c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2cc0c4:
    if (ctx->pc == 0x2CC0C4u) {
        ctx->pc = 0x2CC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0C0u;
        // 0x2cc0c4: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC0C8u;
        goto label_2cc0c8;
    }
    ctx->pc = 0x2CC0C0u;
    {
        const bool branch_taken_0x2cc0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0C0u;
        // 0x2cc0c4: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc0c0) {
            ctx->pc = 0x2CC0CCu;
            goto label_2cc0cc;
        }
    }
    ctx->pc = 0x2CC0C8u;
label_2cc0c8:
    // 0x2cc0c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cc0c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc0cc:
    // 0x2cc0cc: 0x14400094  bnez        $v0, . + 4 + (0x94 << 2)
label_2cc0d0:
    if (ctx->pc == 0x2CC0D0u) {
        ctx->pc = 0x2CC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0CCu;
        // 0x2cc0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC0D4u;
        goto label_2cc0d4;
    }
    ctx->pc = 0x2CC0CCu;
    {
        const bool branch_taken_0x2cc0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0CCu;
        // 0x2cc0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc0cc) {
            ctx->pc = 0x2CC320u;
            goto label_2cc320;
        }
    }
    ctx->pc = 0x2CC0D4u;
label_2cc0d4:
    // 0x2cc0d4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2cc0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2cc0d8:
    // 0x2cc0d8: 0x2484a068  addiu       $a0, $a0, -0x5F98
    ctx->pc = 0x2cc0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942824));
label_2cc0dc:
    // 0x2cc0dc: 0xc0d4da6  jal         func_353698
label_2cc0e0:
    if (ctx->pc == 0x2CC0E0u) {
        ctx->pc = 0x2CC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0DCu;
        // 0x2cc0e0: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC0E4u;
        goto label_2cc0e4;
    }
    ctx->pc = 0x2CC0DCu;
    SET_GPR_U32(ctx, 31, 0x2CC0E4u);
    ctx->pc = 0x2CC0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0DCu;
    // 0x2cc0e0: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CC0DCu, 0x2CC0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0E4u;
label_2cc0e4:
    // 0x2cc0e4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2cc0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cc0e8:
    // 0x2cc0e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2cc0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2cc0ec:
    // 0x2cc0ec: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x2cc0ecu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_2cc0f0:
    // 0x2cc0f0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cc0f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cc0f4:
    // 0x2cc0f4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cc0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cc0f8:
    // 0x2cc0f8: 0x40f809  jalr        $v0
label_2cc0fc:
    if (ctx->pc == 0x2CC0FCu) {
        ctx->pc = 0x2CC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0F8u;
        // 0x2cc0fc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC100u;
        goto label_2cc100;
    }
    ctx->pc = 0x2CC0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CC100u);
        ctx->pc = 0x2CC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0F8u;
        // 0x2cc0fc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC0F8u, 0x2CC100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CC100u;
label_2cc100:
    // 0x2cc100: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc104:
    // 0x2cc104: 0xc0b92ae  jal         func_2E4AB8
label_2cc108:
    if (ctx->pc == 0x2CC108u) {
        ctx->pc = 0x2CC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC104u;
        // 0x2cc108: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC10Cu;
        goto label_2cc10c;
    }
    ctx->pc = 0x2CC104u;
    SET_GPR_U32(ctx, 31, 0x2CC10Cu);
    ctx->pc = 0x2CC108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC104u;
    // 0x2cc108: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4AB8u, 0x2CC104u, 0x2CC10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC10Cu;
label_2cc10c:
    // 0x2cc10c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cc10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cc110:
    // 0x2cc110: 0x10000082  b           . + 4 + (0x82 << 2)
label_2cc114:
    if (ctx->pc == 0x2CC114u) {
        ctx->pc = 0x2CC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC110u;
        // 0x2cc114: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC118u;
        goto label_2cc118;
    }
    ctx->pc = 0x2CC110u;
    {
        const bool branch_taken_0x2cc110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC110u;
        // 0x2cc114: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc110) {
            ctx->pc = 0x2CC31Cu;
            goto label_2cc31c;
        }
    }
    ctx->pc = 0x2CC118u;
label_2cc118:
    // 0x2cc118: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cc118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cc11c:
    // 0x2cc11c: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2cc11cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2cc120:
    // 0x2cc120: 0x1c60007f  bgtz        $v1, . + 4 + (0x7F << 2)
label_2cc124:
    if (ctx->pc == 0x2CC124u) {
        ctx->pc = 0x2CC124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC120u;
        // 0x2cc124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC128u;
        goto label_2cc128;
    }
    ctx->pc = 0x2CC120u;
    {
        const bool branch_taken_0x2cc120 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2CC124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC120u;
        // 0x2cc124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc120) {
            ctx->pc = 0x2CC320u;
            goto label_2cc320;
        }
    }
    ctx->pc = 0x2CC128u;
label_2cc128:
    // 0x2cc128: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2cc128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2cc12c:
    // 0x2cc12c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2cc12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2cc130:
    // 0x2cc130: 0x8c65489c  lw          $a1, 0x489C($v1)
    ctx->pc = 0x2cc130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2cc134:
    // 0x2cc134: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cc134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cc138:
    // 0x2cc138: 0xa642001c  sh          $v0, 0x1C($s2)
    ctx->pc = 0x2cc138u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
label_2cc13c:
    // 0x2cc13c: 0x84a30412  lh          $v1, 0x412($a1)
    ctx->pc = 0x2cc13cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1042)));
label_2cc140:
    // 0x2cc140: 0x1064000d  beq         $v1, $a0, . + 4 + (0xD << 2)
label_2cc144:
    if (ctx->pc == 0x2CC144u) {
        ctx->pc = 0x2CC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC140u;
        // 0x2cc144: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC148u;
        goto label_2cc148;
    }
    ctx->pc = 0x2CC140u;
    {
        const bool branch_taken_0x2cc140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC140u;
        // 0x2cc144: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc140) {
            ctx->pc = 0x2CC178u;
            goto label_2cc178;
        }
    }
    ctx->pc = 0x2CC148u;
label_2cc148:
    // 0x2cc148: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2cc14c:
    if (ctx->pc == 0x2CC14Cu) {
        ctx->pc = 0x2CC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC148u;
        // 0x2cc14c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC150u;
        goto label_2cc150;
    }
    ctx->pc = 0x2CC148u;
    {
        const bool branch_taken_0x2cc148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC148u;
        // 0x2cc14c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc148) {
            ctx->pc = 0x2CC160u;
            goto label_2cc160;
        }
    }
    ctx->pc = 0x2CC150u;
label_2cc150:
    // 0x2cc150: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_2cc154:
    if (ctx->pc == 0x2CC154u) {
        ctx->pc = 0x2CC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC150u;
        // 0x2cc154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC158u;
        goto label_2cc158;
    }
    ctx->pc = 0x2CC150u;
    {
        const bool branch_taken_0x2cc150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC150u;
        // 0x2cc154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc150) {
            ctx->pc = 0x2CC1F0u;
            goto label_2cc1f0;
        }
    }
    ctx->pc = 0x2CC158u;
label_2cc158:
    // 0x2cc158: 0x10000072  b           . + 4 + (0x72 << 2)
label_2cc15c:
    if (ctx->pc == 0x2CC15Cu) {
        ctx->pc = 0x2CC15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC158u;
        // 0x2cc15c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC160u;
        goto label_2cc160;
    }
    ctx->pc = 0x2CC158u;
    {
        const bool branch_taken_0x2cc158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC158u;
        // 0x2cc15c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc158) {
            ctx->pc = 0x2CC324u;
            goto label_2cc324;
        }
    }
    ctx->pc = 0x2CC160u;
label_2cc160:
    // 0x2cc160: 0x1462006f  bne         $v1, $v0, . + 4 + (0x6F << 2)
label_2cc164:
    if (ctx->pc == 0x2CC164u) {
        ctx->pc = 0x2CC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC160u;
        // 0x2cc164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC168u;
        goto label_2cc168;
    }
    ctx->pc = 0x2CC160u;
    {
        const bool branch_taken_0x2cc160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC160u;
        // 0x2cc164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc160) {
            ctx->pc = 0x2CC320u;
            goto label_2cc320;
        }
    }
    ctx->pc = 0x2CC168u;
label_2cc168:
    // 0x2cc168: 0xa4a30412  sh          $v1, 0x412($a1)
    ctx->pc = 0x2cc168u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1042), (uint16_t)GPR_U32(ctx, 3));
label_2cc16c:
    // 0x2cc16c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cc16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cc170:
    // 0x2cc170: 0x1000006a  b           . + 4 + (0x6A << 2)
label_2cc174:
    if (ctx->pc == 0x2CC174u) {
        ctx->pc = 0x2CC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC170u;
        // 0x2cc174: 0xa642001e  sh          $v0, 0x1E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC178u;
        goto label_2cc178;
    }
    ctx->pc = 0x2CC170u;
    {
        const bool branch_taken_0x2cc170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC170u;
        // 0x2cc174: 0xa642001e  sh          $v0, 0x1E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc170) {
            ctx->pc = 0x2CC31Cu;
            goto label_2cc31c;
        }
    }
    ctx->pc = 0x2CC178u;
label_2cc178:
    // 0x2cc178: 0xa4a30412  sh          $v1, 0x412($a1)
    ctx->pc = 0x2cc178u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1042), (uint16_t)GPR_U32(ctx, 3));
label_2cc17c:
    // 0x2cc17c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2cc17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2cc180:
    // 0x2cc180: 0x2464a068  addiu       $a0, $v1, -0x5F98
    ctx->pc = 0x2cc180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942824));
label_2cc184:
    // 0x2cc184: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x2cc184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
label_2cc188:
    // 0x2cc188: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2cc18c:
    if (ctx->pc == 0x2CC18Cu) {
        ctx->pc = 0x2CC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC188u;
        // 0x2cc18c: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC190u;
        goto label_2cc190;
    }
    ctx->pc = 0x2CC188u;
    {
        const bool branch_taken_0x2cc188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC188u;
        // 0x2cc18c: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc188) {
            ctx->pc = 0x2CC1B4u;
            goto label_2cc1b4;
        }
    }
    ctx->pc = 0x2CC190u;
label_2cc190:
    // 0x2cc190: 0x24900070  addiu       $s0, $a0, 0x70
    ctx->pc = 0x2cc190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2cc194:
    // 0x2cc194: 0xc10c3ac  jal         func_430EB0
label_2cc198:
    if (ctx->pc == 0x2CC198u) {
        ctx->pc = 0x2CC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC194u;
        // 0x2cc198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC19Cu;
        goto label_2cc19c;
    }
    ctx->pc = 0x2CC194u;
    SET_GPR_U32(ctx, 31, 0x2CC19Cu);
    ctx->pc = 0x2CC198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC194u;
    // 0x2cc198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x2CC194u, 0x2CC19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC19Cu;
label_2cc19c:
    // 0x2cc19c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cc1a0:
    if (ctx->pc == 0x2CC1A0u) {
        ctx->pc = 0x2CC1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC19Cu;
        // 0x2cc1a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC1A4u;
        goto label_2cc1a4;
    }
    ctx->pc = 0x2CC19Cu;
    {
        const bool branch_taken_0x2cc19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC19Cu;
        // 0x2cc1a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc19c) {
            ctx->pc = 0x2CC1B8u;
            goto label_2cc1b8;
        }
    }
    ctx->pc = 0x2CC1A4u;
label_2cc1a4:
    // 0x2cc1a4: 0xc0d4da6  jal         func_353698
label_2cc1a8:
    if (ctx->pc == 0x2CC1A8u) {
        ctx->pc = 0x2CC1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1A4u;
        // 0x2cc1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC1ACu;
        goto label_2cc1ac;
    }
    ctx->pc = 0x2CC1A4u;
    SET_GPR_U32(ctx, 31, 0x2CC1ACu);
    ctx->pc = 0x2CC1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC1A4u;
    // 0x2cc1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CC1A4u, 0x2CC1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC1ACu;
label_2cc1ac:
    // 0x2cc1ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_2cc1b0:
    if (ctx->pc == 0x2CC1B0u) {
        ctx->pc = 0x2CC1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1ACu;
        // 0x2cc1b0: 0xa642001e  sh          $v0, 0x1E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC1B4u;
        goto label_2cc1b4;
    }
    ctx->pc = 0x2CC1ACu;
    {
        const bool branch_taken_0x2cc1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1ACu;
        // 0x2cc1b0: 0xa642001e  sh          $v0, 0x1E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1ac) {
            ctx->pc = 0x2CC1BCu;
            goto label_2cc1bc;
        }
    }
    ctx->pc = 0x2CC1B4u;
label_2cc1b4:
    // 0x2cc1b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cc1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cc1b8:
    // 0x2cc1b8: 0xa642001e  sh          $v0, 0x1E($s2)
    ctx->pc = 0x2cc1b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
label_2cc1bc:
    // 0x2cc1bc: 0x2624a068  addiu       $a0, $s1, -0x5F98
    ctx->pc = 0x2cc1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942824));
label_2cc1c0:
    // 0x2cc1c0: 0xc0d4da6  jal         func_353698
label_2cc1c4:
    if (ctx->pc == 0x2CC1C4u) {
        ctx->pc = 0x2CC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1C0u;
        // 0x2cc1c4: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC1C8u;
        goto label_2cc1c8;
    }
    ctx->pc = 0x2CC1C0u;
    SET_GPR_U32(ctx, 31, 0x2CC1C8u);
    ctx->pc = 0x2CC1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC1C0u;
    // 0x2cc1c4: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CC1C0u, 0x2CC1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC1C8u;
label_2cc1c8:
    // 0x2cc1c8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2cc1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cc1cc:
    // 0x2cc1cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2cc1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2cc1d0:
    // 0x2cc1d0: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x2cc1d0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_2cc1d4:
    // 0x2cc1d4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cc1d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cc1d8:
    // 0x2cc1d8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cc1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cc1dc:
    // 0x2cc1dc: 0x40f809  jalr        $v0
label_2cc1e0:
    if (ctx->pc == 0x2CC1E0u) {
        ctx->pc = 0x2CC1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1DCu;
        // 0x2cc1e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC1E4u;
        goto label_2cc1e4;
    }
    ctx->pc = 0x2CC1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CC1E4u);
        ctx->pc = 0x2CC1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1DCu;
        // 0x2cc1e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC1DCu, 0x2CC1E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CC1E4u;
label_2cc1e4:
    // 0x2cc1e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc1e8:
    // 0x2cc1e8: 0x10000037  b           . + 4 + (0x37 << 2)
label_2cc1ec:
    if (ctx->pc == 0x2CC1ECu) {
        ctx->pc = 0x2CC1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1E8u;
        // 0x2cc1ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC1F0u;
        goto label_2cc1f0;
    }
    ctx->pc = 0x2CC1E8u;
    {
        const bool branch_taken_0x2cc1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1E8u;
        // 0x2cc1ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1e8) {
            ctx->pc = 0x2CC2C8u;
            goto label_2cc2c8;
        }
    }
    ctx->pc = 0x2CC1F0u;
label_2cc1f0:
    // 0x2cc1f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2cc1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2cc1f4:
    // 0x2cc1f4: 0xa4a00412  sh          $zero, 0x412($a1)
    ctx->pc = 0x2cc1f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1042), (uint16_t)GPR_U32(ctx, 0));
label_2cc1f8:
    // 0x2cc1f8: 0x2464a068  addiu       $a0, $v1, -0x5F98
    ctx->pc = 0x2cc1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942824));
label_2cc1fc:
    // 0x2cc1fc: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x2cc1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
label_2cc200:
    // 0x2cc200: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2cc204:
    if (ctx->pc == 0x2CC204u) {
        ctx->pc = 0x2CC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC200u;
        // 0x2cc204: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC208u;
        goto label_2cc208;
    }
    ctx->pc = 0x2CC200u;
    {
        const bool branch_taken_0x2cc200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC200u;
        // 0x2cc204: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc200) {
            ctx->pc = 0x2CC22Cu;
            goto label_2cc22c;
        }
    }
    ctx->pc = 0x2CC208u;
label_2cc208:
    // 0x2cc208: 0x249000b0  addiu       $s0, $a0, 0xB0
    ctx->pc = 0x2cc208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_2cc20c:
    // 0x2cc20c: 0xc10c3ac  jal         func_430EB0
label_2cc210:
    if (ctx->pc == 0x2CC210u) {
        ctx->pc = 0x2CC210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC20Cu;
        // 0x2cc210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC214u;
        goto label_2cc214;
    }
    ctx->pc = 0x2CC20Cu;
    SET_GPR_U32(ctx, 31, 0x2CC214u);
    ctx->pc = 0x2CC210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC20Cu;
    // 0x2cc210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x2CC20Cu, 0x2CC214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC214u;
label_2cc214:
    // 0x2cc214: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cc218:
    if (ctx->pc == 0x2CC218u) {
        ctx->pc = 0x2CC218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC214u;
        // 0x2cc218: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC21Cu;
        goto label_2cc21c;
    }
    ctx->pc = 0x2CC214u;
    {
        const bool branch_taken_0x2cc214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC214u;
        // 0x2cc218: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc214) {
            ctx->pc = 0x2CC230u;
            goto label_2cc230;
        }
    }
    ctx->pc = 0x2CC21Cu;
label_2cc21c:
    // 0x2cc21c: 0xc0d4da6  jal         func_353698
label_2cc220:
    if (ctx->pc == 0x2CC220u) {
        ctx->pc = 0x2CC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC21Cu;
        // 0x2cc220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC224u;
        goto label_2cc224;
    }
    ctx->pc = 0x2CC21Cu;
    SET_GPR_U32(ctx, 31, 0x2CC224u);
    ctx->pc = 0x2CC220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC21Cu;
    // 0x2cc220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CC21Cu, 0x2CC224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC224u;
label_2cc224:
    // 0x2cc224: 0x10000003  b           . + 4 + (0x3 << 2)
label_2cc228:
    if (ctx->pc == 0x2CC228u) {
        ctx->pc = 0x2CC228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC224u;
        // 0x2cc228: 0xa642001e  sh          $v0, 0x1E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC22Cu;
        goto label_2cc22c;
    }
    ctx->pc = 0x2CC224u;
    {
        const bool branch_taken_0x2cc224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC224u;
        // 0x2cc228: 0xa642001e  sh          $v0, 0x1E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc224) {
            ctx->pc = 0x2CC234u;
            goto label_2cc234;
        }
    }
    ctx->pc = 0x2CC22Cu;
label_2cc22c:
    // 0x2cc22c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cc22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cc230:
    // 0x2cc230: 0xa642001e  sh          $v0, 0x1E($s2)
    ctx->pc = 0x2cc230u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
label_2cc234:
    // 0x2cc234: 0x2624a068  addiu       $a0, $s1, -0x5F98
    ctx->pc = 0x2cc234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942824));
label_2cc238:
    // 0x2cc238: 0xc0d4da6  jal         func_353698
label_2cc23c:
    if (ctx->pc == 0x2CC23Cu) {
        ctx->pc = 0x2CC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC238u;
        // 0x2cc23c: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC240u;
        goto label_2cc240;
    }
    ctx->pc = 0x2CC238u;
    SET_GPR_U32(ctx, 31, 0x2CC240u);
    ctx->pc = 0x2CC23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC238u;
    // 0x2cc23c: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x2CC238u, 0x2CC240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC240u;
label_2cc240:
    // 0x2cc240: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2cc240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cc244:
    // 0x2cc244: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2cc244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2cc248:
    // 0x2cc248: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x2cc248u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_2cc24c:
    // 0x2cc24c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cc24cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cc250:
    // 0x2cc250: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cc250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cc254:
    // 0x2cc254: 0x40f809  jalr        $v0
label_2cc258:
    if (ctx->pc == 0x2CC258u) {
        ctx->pc = 0x2CC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC254u;
        // 0x2cc258: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC25Cu;
        goto label_2cc25c;
    }
    ctx->pc = 0x2CC254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CC25Cu);
        ctx->pc = 0x2CC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC254u;
        // 0x2cc258: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC254u, 0x2CC25Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CC25Cu;
label_2cc25c:
    // 0x2cc25c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc260:
    // 0x2cc260: 0x10000019  b           . + 4 + (0x19 << 2)
label_2cc264:
    if (ctx->pc == 0x2CC264u) {
        ctx->pc = 0x2CC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC260u;
        // 0x2cc264: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC268u;
        goto label_2cc268;
    }
    ctx->pc = 0x2CC260u;
    {
        const bool branch_taken_0x2cc260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC260u;
        // 0x2cc264: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc260) {
            ctx->pc = 0x2CC2C8u;
            goto label_2cc2c8;
        }
    }
    ctx->pc = 0x2CC268u;
label_2cc268:
    // 0x2cc268: 0xc087502  jal         func_21D408
label_2cc26c:
    if (ctx->pc == 0x2CC26Cu) {
        ctx->pc = 0x2CC26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC268u;
        // 0x2cc26c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC270u;
        goto label_2cc270;
    }
    ctx->pc = 0x2CC268u;
    SET_GPR_U32(ctx, 31, 0x2CC270u);
    ctx->pc = 0x2CC26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC268u;
    // 0x2cc26c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CC268u, 0x2CC270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC270u;
label_2cc270:
    // 0x2cc270: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cc270u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc274:
    // 0x2cc274: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x2cc274u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2cc278:
    // 0x2cc278: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2cc27c:
    if (ctx->pc == 0x2CC27Cu) {
        ctx->pc = 0x2CC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC278u;
        // 0x2cc27c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC280u;
        goto label_2cc280;
    }
    ctx->pc = 0x2CC278u;
    {
        const bool branch_taken_0x2cc278 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC278u;
        // 0x2cc27c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc278) {
            ctx->pc = 0x2CC28Cu;
            goto label_2cc28c;
        }
    }
    ctx->pc = 0x2CC280u;
label_2cc280:
    // 0x2cc280: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cc280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2cc284:
    // 0x2cc284: 0x10000002  b           . + 4 + (0x2 << 2)
label_2cc288:
    if (ctx->pc == 0x2CC288u) {
        ctx->pc = 0x2CC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC284u;
        // 0x2cc288: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC28Cu;
        goto label_2cc28c;
    }
    ctx->pc = 0x2CC284u;
    {
        const bool branch_taken_0x2cc284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC284u;
        // 0x2cc288: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc284) {
            ctx->pc = 0x2CC290u;
            goto label_2cc290;
        }
    }
    ctx->pc = 0x2CC28Cu;
label_2cc28c:
    // 0x2cc28c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cc28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc290:
    // 0x2cc290: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_2cc294:
    if (ctx->pc == 0x2CC294u) {
        ctx->pc = 0x2CC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC290u;
        // 0x2cc294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC298u;
        goto label_2cc298;
    }
    ctx->pc = 0x2CC290u;
    {
        const bool branch_taken_0x2cc290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC290u;
        // 0x2cc294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc290) {
            ctx->pc = 0x2CC320u;
            goto label_2cc320;
        }
    }
    ctx->pc = 0x2CC298u;
label_2cc298:
    // 0x2cc298: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2cc298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2cc29c:
    // 0x2cc29c: 0x8644001e  lh          $a0, 0x1E($s2)
    ctx->pc = 0x2cc29cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
label_2cc2a0:
    // 0x2cc2a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cc2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cc2a4:
    // 0x2cc2a4: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
label_2cc2a8:
    if (ctx->pc == 0x2CC2A8u) {
        ctx->pc = 0x2CC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2A4u;
        // 0x2cc2a8: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC2ACu;
        goto label_2cc2ac;
    }
    ctx->pc = 0x2CC2A4u;
    {
        const bool branch_taken_0x2cc2a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2A4u;
        // 0x2cc2a8: 0xa642001c  sh          $v0, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2a4) {
            ctx->pc = 0x2CC31Cu;
            goto label_2cc31c;
        }
    }
    ctx->pc = 0x2CC2ACu;
label_2cc2ac:
    // 0x2cc2ac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2cc2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cc2b0:
    // 0x2cc2b0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cc2b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cc2b4:
    // 0x2cc2b4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cc2b8:
    // 0x2cc2b8: 0x40f809  jalr        $v0
label_2cc2bc:
    if (ctx->pc == 0x2CC2BCu) {
        ctx->pc = 0x2CC2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2B8u;
        // 0x2cc2bc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC2C0u;
        goto label_2cc2c0;
    }
    ctx->pc = 0x2CC2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CC2C0u);
        ctx->pc = 0x2CC2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2B8u;
        // 0x2cc2bc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC2B8u, 0x2CC2C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CC2C0u;
label_2cc2c0:
    // 0x2cc2c0: 0x8645001e  lh          $a1, 0x1E($s2)
    ctx->pc = 0x2cc2c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
label_2cc2c4:
    // 0x2cc2c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc2c8:
    // 0x2cc2c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc2cc:
    // 0x2cc2cc: 0xc0b923a  jal         func_2E48E8
label_2cc2d0:
    if (ctx->pc == 0x2CC2D0u) {
        ctx->pc = 0x2CC2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2CCu;
        // 0x2cc2d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC2D4u;
        goto label_2cc2d4;
    }
    ctx->pc = 0x2CC2CCu;
    SET_GPR_U32(ctx, 31, 0x2CC2D4u);
    ctx->pc = 0x2CC2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC2CCu;
    // 0x2cc2d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E48E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E48E8u, 0x2CC2CCu, 0x2CC2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC2D4u;
label_2cc2d4:
    // 0x2cc2d4: 0x10000012  b           . + 4 + (0x12 << 2)
label_2cc2d8:
    if (ctx->pc == 0x2CC2D8u) {
        ctx->pc = 0x2CC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2D4u;
        // 0x2cc2d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC2DCu;
        goto label_2cc2dc;
    }
    ctx->pc = 0x2CC2D4u;
    {
        const bool branch_taken_0x2cc2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2D4u;
        // 0x2cc2d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2d4) {
            ctx->pc = 0x2CC320u;
            goto label_2cc320;
        }
    }
    ctx->pc = 0x2CC2DCu;
label_2cc2dc:
    // 0x2cc2dc: 0x8e22b734  lw          $v0, -0x48CC($s1)
    ctx->pc = 0x2cc2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
label_2cc2e0:
    // 0x2cc2e0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2cc2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2cc2e4:
    // 0x2cc2e4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2cc2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2cc2e8:
    // 0x2cc2e8: 0xa643001c  sh          $v1, 0x1C($s2)
    ctx->pc = 0x2cc2e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 3));
label_2cc2ec:
    // 0x2cc2ec: 0x1000000b  b           . + 4 + (0xB << 2)
label_2cc2f0:
    if (ctx->pc == 0x2CC2F0u) {
        ctx->pc = 0x2CC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2ECu;
        // 0x2cc2f0: 0xae440010  sw          $a0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC2F4u;
        goto label_2cc2f4;
    }
    ctx->pc = 0x2CC2ECu;
    {
        const bool branch_taken_0x2cc2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2ECu;
        // 0x2cc2f0: 0xae440010  sw          $a0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2ec) {
            ctx->pc = 0x2CC31Cu;
            goto label_2cc31c;
        }
    }
    ctx->pc = 0x2CC2F4u;
label_2cc2f4:
    // 0x2cc2f4: 0x8e22b734  lw          $v0, -0x48CC($s1)
    ctx->pc = 0x2cc2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
label_2cc2f8:
    // 0x2cc2f8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2cc2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2cc2fc:
    // 0x2cc2fc: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2cc2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2cc300:
    // 0x2cc300: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x2cc300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
label_2cc304:
    // 0x2cc304: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2cc304u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2cc308:
    // 0x2cc308: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2cc30c:
    if (ctx->pc == 0x2CC30Cu) {
        ctx->pc = 0x2CC30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC308u;
        // 0x2cc30c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC310u;
        goto label_2cc310;
    }
    ctx->pc = 0x2CC308u;
    {
        const bool branch_taken_0x2cc308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC308u;
        // 0x2cc30c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc308) {
            ctx->pc = 0x2CC31Cu;
            goto label_2cc31c;
        }
    }
    ctx->pc = 0x2CC310u;
label_2cc310:
    // 0x2cc310: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cc310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cc314:
    // 0x2cc314: 0x10000002  b           . + 4 + (0x2 << 2)
label_2cc318:
    if (ctx->pc == 0x2CC318u) {
        ctx->pc = 0x2CC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC314u;
        // 0x2cc318: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC31Cu;
        goto label_2cc31c;
    }
    ctx->pc = 0x2CC314u;
    {
        const bool branch_taken_0x2cc314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC314u;
        // 0x2cc318: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc314) {
            ctx->pc = 0x2CC320u;
            goto label_2cc320;
        }
    }
    ctx->pc = 0x2CC31Cu;
label_2cc31c:
    // 0x2cc31c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cc31cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc320:
    // 0x2cc320: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2cc320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2cc324:
    // 0x2cc324: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2cc324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2cc328:
    // 0x2cc328: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2cc328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2cc32c:
    // 0x2cc32c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2cc32cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2cc330:
    // 0x2cc330: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2cc330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2cc334:
    // 0x2cc334: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2cc334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cc338:
    // 0x2cc338: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2cc338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2cc33c:
    // 0x2cc33c: 0x3e00008  jr          $ra
label_2cc340:
    if (ctx->pc == 0x2CC340u) {
        ctx->pc = 0x2CC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC33Cu;
        // 0x2cc340: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC344u;
        goto label_2cc344;
    }
    ctx->pc = 0x2CC33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC33Cu;
        // 0x2cc340: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC344u;
label_2cc344:
    // 0x2cc344: 0x0  nop
    ctx->pc = 0x2cc344u;
    // NOP
    ctx->pc = 0x2cc348u;
}
