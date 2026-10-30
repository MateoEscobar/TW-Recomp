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

// Function: sub_003AC7E8
// Address: 0x3ac7e8 - 0x3ad440
void sub_003AC7E8_0x3ac7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC7E8_0x3ac7e8");
#endif

    switch (ctx->pc) {
        case 0x3ac7e8u: goto label_3ac7e8;
        case 0x3ac7ecu: goto label_3ac7ec;
        case 0x3ac7f0u: goto label_3ac7f0;
        case 0x3ac7f4u: goto label_3ac7f4;
        case 0x3ac7f8u: goto label_3ac7f8;
        case 0x3ac7fcu: goto label_3ac7fc;
        case 0x3ac800u: goto label_3ac800;
        case 0x3ac804u: goto label_3ac804;
        case 0x3ac808u: goto label_3ac808;
        case 0x3ac80cu: goto label_3ac80c;
        case 0x3ac810u: goto label_3ac810;
        case 0x3ac814u: goto label_3ac814;
        case 0x3ac818u: goto label_3ac818;
        case 0x3ac81cu: goto label_3ac81c;
        case 0x3ac820u: goto label_3ac820;
        case 0x3ac824u: goto label_3ac824;
        case 0x3ac828u: goto label_3ac828;
        case 0x3ac82cu: goto label_3ac82c;
        case 0x3ac830u: goto label_3ac830;
        case 0x3ac834u: goto label_3ac834;
        case 0x3ac838u: goto label_3ac838;
        case 0x3ac83cu: goto label_3ac83c;
        case 0x3ac840u: goto label_3ac840;
        case 0x3ac844u: goto label_3ac844;
        case 0x3ac848u: goto label_3ac848;
        case 0x3ac84cu: goto label_3ac84c;
        case 0x3ac850u: goto label_3ac850;
        case 0x3ac854u: goto label_3ac854;
        case 0x3ac858u: goto label_3ac858;
        case 0x3ac85cu: goto label_3ac85c;
        case 0x3ac860u: goto label_3ac860;
        case 0x3ac864u: goto label_3ac864;
        case 0x3ac868u: goto label_3ac868;
        case 0x3ac86cu: goto label_3ac86c;
        case 0x3ac870u: goto label_3ac870;
        case 0x3ac874u: goto label_3ac874;
        case 0x3ac878u: goto label_3ac878;
        case 0x3ac87cu: goto label_3ac87c;
        case 0x3ac880u: goto label_3ac880;
        case 0x3ac884u: goto label_3ac884;
        case 0x3ac888u: goto label_3ac888;
        case 0x3ac88cu: goto label_3ac88c;
        case 0x3ac890u: goto label_3ac890;
        case 0x3ac894u: goto label_3ac894;
        case 0x3ac898u: goto label_3ac898;
        case 0x3ac89cu: goto label_3ac89c;
        case 0x3ac8a0u: goto label_3ac8a0;
        case 0x3ac8a4u: goto label_3ac8a4;
        case 0x3ac8a8u: goto label_3ac8a8;
        case 0x3ac8acu: goto label_3ac8ac;
        case 0x3ac8b0u: goto label_3ac8b0;
        case 0x3ac8b4u: goto label_3ac8b4;
        case 0x3ac8b8u: goto label_3ac8b8;
        case 0x3ac8bcu: goto label_3ac8bc;
        case 0x3ac8c0u: goto label_3ac8c0;
        case 0x3ac8c4u: goto label_3ac8c4;
        case 0x3ac8c8u: goto label_3ac8c8;
        case 0x3ac8ccu: goto label_3ac8cc;
        case 0x3ac8d0u: goto label_3ac8d0;
        case 0x3ac8d4u: goto label_3ac8d4;
        case 0x3ac8d8u: goto label_3ac8d8;
        case 0x3ac8dcu: goto label_3ac8dc;
        case 0x3ac8e0u: goto label_3ac8e0;
        case 0x3ac8e4u: goto label_3ac8e4;
        case 0x3ac8e8u: goto label_3ac8e8;
        case 0x3ac8ecu: goto label_3ac8ec;
        case 0x3ac8f0u: goto label_3ac8f0;
        case 0x3ac8f4u: goto label_3ac8f4;
        case 0x3ac8f8u: goto label_3ac8f8;
        case 0x3ac8fcu: goto label_3ac8fc;
        case 0x3ac900u: goto label_3ac900;
        case 0x3ac904u: goto label_3ac904;
        case 0x3ac908u: goto label_3ac908;
        case 0x3ac90cu: goto label_3ac90c;
        case 0x3ac910u: goto label_3ac910;
        case 0x3ac914u: goto label_3ac914;
        case 0x3ac918u: goto label_3ac918;
        case 0x3ac91cu: goto label_3ac91c;
        case 0x3ac920u: goto label_3ac920;
        case 0x3ac924u: goto label_3ac924;
        case 0x3ac928u: goto label_3ac928;
        case 0x3ac92cu: goto label_3ac92c;
        case 0x3ac930u: goto label_3ac930;
        case 0x3ac934u: goto label_3ac934;
        case 0x3ac938u: goto label_3ac938;
        case 0x3ac93cu: goto label_3ac93c;
        case 0x3ac940u: goto label_3ac940;
        case 0x3ac944u: goto label_3ac944;
        case 0x3ac948u: goto label_3ac948;
        case 0x3ac94cu: goto label_3ac94c;
        case 0x3ac950u: goto label_3ac950;
        case 0x3ac954u: goto label_3ac954;
        case 0x3ac958u: goto label_3ac958;
        case 0x3ac95cu: goto label_3ac95c;
        case 0x3ac960u: goto label_3ac960;
        case 0x3ac964u: goto label_3ac964;
        case 0x3ac968u: goto label_3ac968;
        case 0x3ac96cu: goto label_3ac96c;
        case 0x3ac970u: goto label_3ac970;
        case 0x3ac974u: goto label_3ac974;
        case 0x3ac978u: goto label_3ac978;
        case 0x3ac97cu: goto label_3ac97c;
        case 0x3ac980u: goto label_3ac980;
        case 0x3ac984u: goto label_3ac984;
        case 0x3ac988u: goto label_3ac988;
        case 0x3ac98cu: goto label_3ac98c;
        case 0x3ac990u: goto label_3ac990;
        case 0x3ac994u: goto label_3ac994;
        case 0x3ac998u: goto label_3ac998;
        case 0x3ac99cu: goto label_3ac99c;
        case 0x3ac9a0u: goto label_3ac9a0;
        case 0x3ac9a4u: goto label_3ac9a4;
        case 0x3ac9a8u: goto label_3ac9a8;
        case 0x3ac9acu: goto label_3ac9ac;
        case 0x3ac9b0u: goto label_3ac9b0;
        case 0x3ac9b4u: goto label_3ac9b4;
        case 0x3ac9b8u: goto label_3ac9b8;
        case 0x3ac9bcu: goto label_3ac9bc;
        case 0x3ac9c0u: goto label_3ac9c0;
        case 0x3ac9c4u: goto label_3ac9c4;
        case 0x3ac9c8u: goto label_3ac9c8;
        case 0x3ac9ccu: goto label_3ac9cc;
        case 0x3ac9d0u: goto label_3ac9d0;
        case 0x3ac9d4u: goto label_3ac9d4;
        case 0x3ac9d8u: goto label_3ac9d8;
        case 0x3ac9dcu: goto label_3ac9dc;
        case 0x3ac9e0u: goto label_3ac9e0;
        case 0x3ac9e4u: goto label_3ac9e4;
        case 0x3ac9e8u: goto label_3ac9e8;
        case 0x3ac9ecu: goto label_3ac9ec;
        case 0x3ac9f0u: goto label_3ac9f0;
        case 0x3ac9f4u: goto label_3ac9f4;
        case 0x3ac9f8u: goto label_3ac9f8;
        case 0x3ac9fcu: goto label_3ac9fc;
        case 0x3aca00u: goto label_3aca00;
        case 0x3aca04u: goto label_3aca04;
        case 0x3aca08u: goto label_3aca08;
        case 0x3aca0cu: goto label_3aca0c;
        case 0x3aca10u: goto label_3aca10;
        case 0x3aca14u: goto label_3aca14;
        case 0x3aca18u: goto label_3aca18;
        case 0x3aca1cu: goto label_3aca1c;
        case 0x3aca20u: goto label_3aca20;
        case 0x3aca24u: goto label_3aca24;
        case 0x3aca28u: goto label_3aca28;
        case 0x3aca2cu: goto label_3aca2c;
        case 0x3aca30u: goto label_3aca30;
        case 0x3aca34u: goto label_3aca34;
        case 0x3aca38u: goto label_3aca38;
        case 0x3aca3cu: goto label_3aca3c;
        case 0x3aca40u: goto label_3aca40;
        case 0x3aca44u: goto label_3aca44;
        case 0x3aca48u: goto label_3aca48;
        case 0x3aca4cu: goto label_3aca4c;
        case 0x3aca50u: goto label_3aca50;
        case 0x3aca54u: goto label_3aca54;
        case 0x3aca58u: goto label_3aca58;
        case 0x3aca5cu: goto label_3aca5c;
        case 0x3aca60u: goto label_3aca60;
        case 0x3aca64u: goto label_3aca64;
        case 0x3aca68u: goto label_3aca68;
        case 0x3aca6cu: goto label_3aca6c;
        case 0x3aca70u: goto label_3aca70;
        case 0x3aca74u: goto label_3aca74;
        case 0x3aca78u: goto label_3aca78;
        case 0x3aca7cu: goto label_3aca7c;
        case 0x3aca80u: goto label_3aca80;
        case 0x3aca84u: goto label_3aca84;
        case 0x3aca88u: goto label_3aca88;
        case 0x3aca8cu: goto label_3aca8c;
        case 0x3aca90u: goto label_3aca90;
        case 0x3aca94u: goto label_3aca94;
        case 0x3aca98u: goto label_3aca98;
        case 0x3aca9cu: goto label_3aca9c;
        case 0x3acaa0u: goto label_3acaa0;
        case 0x3acaa4u: goto label_3acaa4;
        case 0x3acaa8u: goto label_3acaa8;
        case 0x3acaacu: goto label_3acaac;
        case 0x3acab0u: goto label_3acab0;
        case 0x3acab4u: goto label_3acab4;
        case 0x3acab8u: goto label_3acab8;
        case 0x3acabcu: goto label_3acabc;
        case 0x3acac0u: goto label_3acac0;
        case 0x3acac4u: goto label_3acac4;
        case 0x3acac8u: goto label_3acac8;
        case 0x3acaccu: goto label_3acacc;
        case 0x3acad0u: goto label_3acad0;
        case 0x3acad4u: goto label_3acad4;
        case 0x3acad8u: goto label_3acad8;
        case 0x3acadcu: goto label_3acadc;
        case 0x3acae0u: goto label_3acae0;
        case 0x3acae4u: goto label_3acae4;
        case 0x3acae8u: goto label_3acae8;
        case 0x3acaecu: goto label_3acaec;
        case 0x3acaf0u: goto label_3acaf0;
        case 0x3acaf4u: goto label_3acaf4;
        case 0x3acaf8u: goto label_3acaf8;
        case 0x3acafcu: goto label_3acafc;
        case 0x3acb00u: goto label_3acb00;
        case 0x3acb04u: goto label_3acb04;
        case 0x3acb08u: goto label_3acb08;
        case 0x3acb0cu: goto label_3acb0c;
        case 0x3acb10u: goto label_3acb10;
        case 0x3acb14u: goto label_3acb14;
        case 0x3acb18u: goto label_3acb18;
        case 0x3acb1cu: goto label_3acb1c;
        case 0x3acb20u: goto label_3acb20;
        case 0x3acb24u: goto label_3acb24;
        case 0x3acb28u: goto label_3acb28;
        case 0x3acb2cu: goto label_3acb2c;
        case 0x3acb30u: goto label_3acb30;
        case 0x3acb34u: goto label_3acb34;
        case 0x3acb38u: goto label_3acb38;
        case 0x3acb3cu: goto label_3acb3c;
        case 0x3acb40u: goto label_3acb40;
        case 0x3acb44u: goto label_3acb44;
        case 0x3acb48u: goto label_3acb48;
        case 0x3acb4cu: goto label_3acb4c;
        case 0x3acb50u: goto label_3acb50;
        case 0x3acb54u: goto label_3acb54;
        case 0x3acb58u: goto label_3acb58;
        case 0x3acb5cu: goto label_3acb5c;
        case 0x3acb60u: goto label_3acb60;
        case 0x3acb64u: goto label_3acb64;
        case 0x3acb68u: goto label_3acb68;
        case 0x3acb6cu: goto label_3acb6c;
        case 0x3acb70u: goto label_3acb70;
        case 0x3acb74u: goto label_3acb74;
        case 0x3acb78u: goto label_3acb78;
        case 0x3acb7cu: goto label_3acb7c;
        case 0x3acb80u: goto label_3acb80;
        case 0x3acb84u: goto label_3acb84;
        case 0x3acb88u: goto label_3acb88;
        case 0x3acb8cu: goto label_3acb8c;
        case 0x3acb90u: goto label_3acb90;
        case 0x3acb94u: goto label_3acb94;
        case 0x3acb98u: goto label_3acb98;
        case 0x3acb9cu: goto label_3acb9c;
        case 0x3acba0u: goto label_3acba0;
        case 0x3acba4u: goto label_3acba4;
        case 0x3acba8u: goto label_3acba8;
        case 0x3acbacu: goto label_3acbac;
        case 0x3acbb0u: goto label_3acbb0;
        case 0x3acbb4u: goto label_3acbb4;
        case 0x3acbb8u: goto label_3acbb8;
        case 0x3acbbcu: goto label_3acbbc;
        case 0x3acbc0u: goto label_3acbc0;
        case 0x3acbc4u: goto label_3acbc4;
        case 0x3acbc8u: goto label_3acbc8;
        case 0x3acbccu: goto label_3acbcc;
        case 0x3acbd0u: goto label_3acbd0;
        case 0x3acbd4u: goto label_3acbd4;
        case 0x3acbd8u: goto label_3acbd8;
        case 0x3acbdcu: goto label_3acbdc;
        case 0x3acbe0u: goto label_3acbe0;
        case 0x3acbe4u: goto label_3acbe4;
        case 0x3acbe8u: goto label_3acbe8;
        case 0x3acbecu: goto label_3acbec;
        case 0x3acbf0u: goto label_3acbf0;
        case 0x3acbf4u: goto label_3acbf4;
        case 0x3acbf8u: goto label_3acbf8;
        case 0x3acbfcu: goto label_3acbfc;
        case 0x3acc00u: goto label_3acc00;
        case 0x3acc04u: goto label_3acc04;
        case 0x3acc08u: goto label_3acc08;
        case 0x3acc0cu: goto label_3acc0c;
        case 0x3acc10u: goto label_3acc10;
        case 0x3acc14u: goto label_3acc14;
        case 0x3acc18u: goto label_3acc18;
        case 0x3acc1cu: goto label_3acc1c;
        case 0x3acc20u: goto label_3acc20;
        case 0x3acc24u: goto label_3acc24;
        case 0x3acc28u: goto label_3acc28;
        case 0x3acc2cu: goto label_3acc2c;
        case 0x3acc30u: goto label_3acc30;
        case 0x3acc34u: goto label_3acc34;
        case 0x3acc38u: goto label_3acc38;
        case 0x3acc3cu: goto label_3acc3c;
        case 0x3acc40u: goto label_3acc40;
        case 0x3acc44u: goto label_3acc44;
        case 0x3acc48u: goto label_3acc48;
        case 0x3acc4cu: goto label_3acc4c;
        case 0x3acc50u: goto label_3acc50;
        case 0x3acc54u: goto label_3acc54;
        case 0x3acc58u: goto label_3acc58;
        case 0x3acc5cu: goto label_3acc5c;
        case 0x3acc60u: goto label_3acc60;
        case 0x3acc64u: goto label_3acc64;
        case 0x3acc68u: goto label_3acc68;
        case 0x3acc6cu: goto label_3acc6c;
        case 0x3acc70u: goto label_3acc70;
        case 0x3acc74u: goto label_3acc74;
        case 0x3acc78u: goto label_3acc78;
        case 0x3acc7cu: goto label_3acc7c;
        case 0x3acc80u: goto label_3acc80;
        case 0x3acc84u: goto label_3acc84;
        case 0x3acc88u: goto label_3acc88;
        case 0x3acc8cu: goto label_3acc8c;
        case 0x3acc90u: goto label_3acc90;
        case 0x3acc94u: goto label_3acc94;
        case 0x3acc98u: goto label_3acc98;
        case 0x3acc9cu: goto label_3acc9c;
        case 0x3acca0u: goto label_3acca0;
        case 0x3acca4u: goto label_3acca4;
        case 0x3acca8u: goto label_3acca8;
        case 0x3accacu: goto label_3accac;
        case 0x3accb0u: goto label_3accb0;
        case 0x3accb4u: goto label_3accb4;
        case 0x3accb8u: goto label_3accb8;
        case 0x3accbcu: goto label_3accbc;
        case 0x3accc0u: goto label_3accc0;
        case 0x3accc4u: goto label_3accc4;
        case 0x3accc8u: goto label_3accc8;
        case 0x3accccu: goto label_3acccc;
        case 0x3accd0u: goto label_3accd0;
        case 0x3accd4u: goto label_3accd4;
        case 0x3accd8u: goto label_3accd8;
        case 0x3accdcu: goto label_3accdc;
        case 0x3acce0u: goto label_3acce0;
        case 0x3acce4u: goto label_3acce4;
        case 0x3acce8u: goto label_3acce8;
        case 0x3accecu: goto label_3accec;
        case 0x3accf0u: goto label_3accf0;
        case 0x3accf4u: goto label_3accf4;
        case 0x3accf8u: goto label_3accf8;
        case 0x3accfcu: goto label_3accfc;
        case 0x3acd00u: goto label_3acd00;
        case 0x3acd04u: goto label_3acd04;
        case 0x3acd08u: goto label_3acd08;
        case 0x3acd0cu: goto label_3acd0c;
        case 0x3acd10u: goto label_3acd10;
        case 0x3acd14u: goto label_3acd14;
        case 0x3acd18u: goto label_3acd18;
        case 0x3acd1cu: goto label_3acd1c;
        case 0x3acd20u: goto label_3acd20;
        case 0x3acd24u: goto label_3acd24;
        case 0x3acd28u: goto label_3acd28;
        case 0x3acd2cu: goto label_3acd2c;
        case 0x3acd30u: goto label_3acd30;
        case 0x3acd34u: goto label_3acd34;
        case 0x3acd38u: goto label_3acd38;
        case 0x3acd3cu: goto label_3acd3c;
        case 0x3acd40u: goto label_3acd40;
        case 0x3acd44u: goto label_3acd44;
        case 0x3acd48u: goto label_3acd48;
        case 0x3acd4cu: goto label_3acd4c;
        case 0x3acd50u: goto label_3acd50;
        case 0x3acd54u: goto label_3acd54;
        case 0x3acd58u: goto label_3acd58;
        case 0x3acd5cu: goto label_3acd5c;
        case 0x3acd60u: goto label_3acd60;
        case 0x3acd64u: goto label_3acd64;
        case 0x3acd68u: goto label_3acd68;
        case 0x3acd6cu: goto label_3acd6c;
        case 0x3acd70u: goto label_3acd70;
        case 0x3acd74u: goto label_3acd74;
        case 0x3acd78u: goto label_3acd78;
        case 0x3acd7cu: goto label_3acd7c;
        case 0x3acd80u: goto label_3acd80;
        case 0x3acd84u: goto label_3acd84;
        case 0x3acd88u: goto label_3acd88;
        case 0x3acd8cu: goto label_3acd8c;
        case 0x3acd90u: goto label_3acd90;
        case 0x3acd94u: goto label_3acd94;
        case 0x3acd98u: goto label_3acd98;
        case 0x3acd9cu: goto label_3acd9c;
        case 0x3acda0u: goto label_3acda0;
        case 0x3acda4u: goto label_3acda4;
        case 0x3acda8u: goto label_3acda8;
        case 0x3acdacu: goto label_3acdac;
        case 0x3acdb0u: goto label_3acdb0;
        case 0x3acdb4u: goto label_3acdb4;
        case 0x3acdb8u: goto label_3acdb8;
        case 0x3acdbcu: goto label_3acdbc;
        case 0x3acdc0u: goto label_3acdc0;
        case 0x3acdc4u: goto label_3acdc4;
        case 0x3acdc8u: goto label_3acdc8;
        case 0x3acdccu: goto label_3acdcc;
        case 0x3acdd0u: goto label_3acdd0;
        case 0x3acdd4u: goto label_3acdd4;
        case 0x3acdd8u: goto label_3acdd8;
        case 0x3acddcu: goto label_3acddc;
        case 0x3acde0u: goto label_3acde0;
        case 0x3acde4u: goto label_3acde4;
        case 0x3acde8u: goto label_3acde8;
        case 0x3acdecu: goto label_3acdec;
        case 0x3acdf0u: goto label_3acdf0;
        case 0x3acdf4u: goto label_3acdf4;
        case 0x3acdf8u: goto label_3acdf8;
        case 0x3acdfcu: goto label_3acdfc;
        case 0x3ace00u: goto label_3ace00;
        case 0x3ace04u: goto label_3ace04;
        case 0x3ace08u: goto label_3ace08;
        case 0x3ace0cu: goto label_3ace0c;
        case 0x3ace10u: goto label_3ace10;
        case 0x3ace14u: goto label_3ace14;
        case 0x3ace18u: goto label_3ace18;
        case 0x3ace1cu: goto label_3ace1c;
        case 0x3ace20u: goto label_3ace20;
        case 0x3ace24u: goto label_3ace24;
        case 0x3ace28u: goto label_3ace28;
        case 0x3ace2cu: goto label_3ace2c;
        case 0x3ace30u: goto label_3ace30;
        case 0x3ace34u: goto label_3ace34;
        case 0x3ace38u: goto label_3ace38;
        case 0x3ace3cu: goto label_3ace3c;
        case 0x3ace40u: goto label_3ace40;
        case 0x3ace44u: goto label_3ace44;
        case 0x3ace48u: goto label_3ace48;
        case 0x3ace4cu: goto label_3ace4c;
        case 0x3ace50u: goto label_3ace50;
        case 0x3ace54u: goto label_3ace54;
        case 0x3ace58u: goto label_3ace58;
        case 0x3ace5cu: goto label_3ace5c;
        case 0x3ace60u: goto label_3ace60;
        case 0x3ace64u: goto label_3ace64;
        case 0x3ace68u: goto label_3ace68;
        case 0x3ace6cu: goto label_3ace6c;
        case 0x3ace70u: goto label_3ace70;
        case 0x3ace74u: goto label_3ace74;
        case 0x3ace78u: goto label_3ace78;
        case 0x3ace7cu: goto label_3ace7c;
        case 0x3ace80u: goto label_3ace80;
        case 0x3ace84u: goto label_3ace84;
        case 0x3ace88u: goto label_3ace88;
        case 0x3ace8cu: goto label_3ace8c;
        case 0x3ace90u: goto label_3ace90;
        case 0x3ace94u: goto label_3ace94;
        case 0x3ace98u: goto label_3ace98;
        case 0x3ace9cu: goto label_3ace9c;
        case 0x3acea0u: goto label_3acea0;
        case 0x3acea4u: goto label_3acea4;
        case 0x3acea8u: goto label_3acea8;
        case 0x3aceacu: goto label_3aceac;
        case 0x3aceb0u: goto label_3aceb0;
        case 0x3aceb4u: goto label_3aceb4;
        case 0x3aceb8u: goto label_3aceb8;
        case 0x3acebcu: goto label_3acebc;
        case 0x3acec0u: goto label_3acec0;
        case 0x3acec4u: goto label_3acec4;
        case 0x3acec8u: goto label_3acec8;
        case 0x3aceccu: goto label_3acecc;
        case 0x3aced0u: goto label_3aced0;
        case 0x3aced4u: goto label_3aced4;
        case 0x3aced8u: goto label_3aced8;
        case 0x3acedcu: goto label_3acedc;
        case 0x3acee0u: goto label_3acee0;
        case 0x3acee4u: goto label_3acee4;
        case 0x3acee8u: goto label_3acee8;
        case 0x3aceecu: goto label_3aceec;
        case 0x3acef0u: goto label_3acef0;
        case 0x3acef4u: goto label_3acef4;
        case 0x3acef8u: goto label_3acef8;
        case 0x3acefcu: goto label_3acefc;
        case 0x3acf00u: goto label_3acf00;
        case 0x3acf04u: goto label_3acf04;
        case 0x3acf08u: goto label_3acf08;
        case 0x3acf0cu: goto label_3acf0c;
        case 0x3acf10u: goto label_3acf10;
        case 0x3acf14u: goto label_3acf14;
        case 0x3acf18u: goto label_3acf18;
        case 0x3acf1cu: goto label_3acf1c;
        case 0x3acf20u: goto label_3acf20;
        case 0x3acf24u: goto label_3acf24;
        case 0x3acf28u: goto label_3acf28;
        case 0x3acf2cu: goto label_3acf2c;
        case 0x3acf30u: goto label_3acf30;
        case 0x3acf34u: goto label_3acf34;
        case 0x3acf38u: goto label_3acf38;
        case 0x3acf3cu: goto label_3acf3c;
        case 0x3acf40u: goto label_3acf40;
        case 0x3acf44u: goto label_3acf44;
        case 0x3acf48u: goto label_3acf48;
        case 0x3acf4cu: goto label_3acf4c;
        case 0x3acf50u: goto label_3acf50;
        case 0x3acf54u: goto label_3acf54;
        case 0x3acf58u: goto label_3acf58;
        case 0x3acf5cu: goto label_3acf5c;
        case 0x3acf60u: goto label_3acf60;
        case 0x3acf64u: goto label_3acf64;
        case 0x3acf68u: goto label_3acf68;
        case 0x3acf6cu: goto label_3acf6c;
        case 0x3acf70u: goto label_3acf70;
        case 0x3acf74u: goto label_3acf74;
        case 0x3acf78u: goto label_3acf78;
        case 0x3acf7cu: goto label_3acf7c;
        case 0x3acf80u: goto label_3acf80;
        case 0x3acf84u: goto label_3acf84;
        case 0x3acf88u: goto label_3acf88;
        case 0x3acf8cu: goto label_3acf8c;
        case 0x3acf90u: goto label_3acf90;
        case 0x3acf94u: goto label_3acf94;
        case 0x3acf98u: goto label_3acf98;
        case 0x3acf9cu: goto label_3acf9c;
        case 0x3acfa0u: goto label_3acfa0;
        case 0x3acfa4u: goto label_3acfa4;
        case 0x3acfa8u: goto label_3acfa8;
        case 0x3acfacu: goto label_3acfac;
        case 0x3acfb0u: goto label_3acfb0;
        case 0x3acfb4u: goto label_3acfb4;
        case 0x3acfb8u: goto label_3acfb8;
        case 0x3acfbcu: goto label_3acfbc;
        case 0x3acfc0u: goto label_3acfc0;
        case 0x3acfc4u: goto label_3acfc4;
        case 0x3acfc8u: goto label_3acfc8;
        case 0x3acfccu: goto label_3acfcc;
        case 0x3acfd0u: goto label_3acfd0;
        case 0x3acfd4u: goto label_3acfd4;
        case 0x3acfd8u: goto label_3acfd8;
        case 0x3acfdcu: goto label_3acfdc;
        case 0x3acfe0u: goto label_3acfe0;
        case 0x3acfe4u: goto label_3acfe4;
        case 0x3acfe8u: goto label_3acfe8;
        case 0x3acfecu: goto label_3acfec;
        case 0x3acff0u: goto label_3acff0;
        case 0x3acff4u: goto label_3acff4;
        case 0x3acff8u: goto label_3acff8;
        case 0x3acffcu: goto label_3acffc;
        case 0x3ad000u: goto label_3ad000;
        case 0x3ad004u: goto label_3ad004;
        case 0x3ad008u: goto label_3ad008;
        case 0x3ad00cu: goto label_3ad00c;
        case 0x3ad010u: goto label_3ad010;
        case 0x3ad014u: goto label_3ad014;
        case 0x3ad018u: goto label_3ad018;
        case 0x3ad01cu: goto label_3ad01c;
        case 0x3ad020u: goto label_3ad020;
        case 0x3ad024u: goto label_3ad024;
        case 0x3ad028u: goto label_3ad028;
        case 0x3ad02cu: goto label_3ad02c;
        case 0x3ad030u: goto label_3ad030;
        case 0x3ad034u: goto label_3ad034;
        case 0x3ad038u: goto label_3ad038;
        case 0x3ad03cu: goto label_3ad03c;
        case 0x3ad040u: goto label_3ad040;
        case 0x3ad044u: goto label_3ad044;
        case 0x3ad048u: goto label_3ad048;
        case 0x3ad04cu: goto label_3ad04c;
        case 0x3ad050u: goto label_3ad050;
        case 0x3ad054u: goto label_3ad054;
        case 0x3ad058u: goto label_3ad058;
        case 0x3ad05cu: goto label_3ad05c;
        case 0x3ad060u: goto label_3ad060;
        case 0x3ad064u: goto label_3ad064;
        case 0x3ad068u: goto label_3ad068;
        case 0x3ad06cu: goto label_3ad06c;
        case 0x3ad070u: goto label_3ad070;
        case 0x3ad074u: goto label_3ad074;
        case 0x3ad078u: goto label_3ad078;
        case 0x3ad07cu: goto label_3ad07c;
        case 0x3ad080u: goto label_3ad080;
        case 0x3ad084u: goto label_3ad084;
        case 0x3ad088u: goto label_3ad088;
        case 0x3ad08cu: goto label_3ad08c;
        case 0x3ad090u: goto label_3ad090;
        case 0x3ad094u: goto label_3ad094;
        case 0x3ad098u: goto label_3ad098;
        case 0x3ad09cu: goto label_3ad09c;
        case 0x3ad0a0u: goto label_3ad0a0;
        case 0x3ad0a4u: goto label_3ad0a4;
        case 0x3ad0a8u: goto label_3ad0a8;
        case 0x3ad0acu: goto label_3ad0ac;
        case 0x3ad0b0u: goto label_3ad0b0;
        case 0x3ad0b4u: goto label_3ad0b4;
        case 0x3ad0b8u: goto label_3ad0b8;
        case 0x3ad0bcu: goto label_3ad0bc;
        case 0x3ad0c0u: goto label_3ad0c0;
        case 0x3ad0c4u: goto label_3ad0c4;
        case 0x3ad0c8u: goto label_3ad0c8;
        case 0x3ad0ccu: goto label_3ad0cc;
        case 0x3ad0d0u: goto label_3ad0d0;
        case 0x3ad0d4u: goto label_3ad0d4;
        case 0x3ad0d8u: goto label_3ad0d8;
        case 0x3ad0dcu: goto label_3ad0dc;
        case 0x3ad0e0u: goto label_3ad0e0;
        case 0x3ad0e4u: goto label_3ad0e4;
        case 0x3ad0e8u: goto label_3ad0e8;
        case 0x3ad0ecu: goto label_3ad0ec;
        case 0x3ad0f0u: goto label_3ad0f0;
        case 0x3ad0f4u: goto label_3ad0f4;
        case 0x3ad0f8u: goto label_3ad0f8;
        case 0x3ad0fcu: goto label_3ad0fc;
        case 0x3ad100u: goto label_3ad100;
        case 0x3ad104u: goto label_3ad104;
        case 0x3ad108u: goto label_3ad108;
        case 0x3ad10cu: goto label_3ad10c;
        case 0x3ad110u: goto label_3ad110;
        case 0x3ad114u: goto label_3ad114;
        case 0x3ad118u: goto label_3ad118;
        case 0x3ad11cu: goto label_3ad11c;
        case 0x3ad120u: goto label_3ad120;
        case 0x3ad124u: goto label_3ad124;
        case 0x3ad128u: goto label_3ad128;
        case 0x3ad12cu: goto label_3ad12c;
        case 0x3ad130u: goto label_3ad130;
        case 0x3ad134u: goto label_3ad134;
        case 0x3ad138u: goto label_3ad138;
        case 0x3ad13cu: goto label_3ad13c;
        case 0x3ad140u: goto label_3ad140;
        case 0x3ad144u: goto label_3ad144;
        case 0x3ad148u: goto label_3ad148;
        case 0x3ad14cu: goto label_3ad14c;
        case 0x3ad150u: goto label_3ad150;
        case 0x3ad154u: goto label_3ad154;
        case 0x3ad158u: goto label_3ad158;
        case 0x3ad15cu: goto label_3ad15c;
        case 0x3ad160u: goto label_3ad160;
        case 0x3ad164u: goto label_3ad164;
        case 0x3ad168u: goto label_3ad168;
        case 0x3ad16cu: goto label_3ad16c;
        case 0x3ad170u: goto label_3ad170;
        case 0x3ad174u: goto label_3ad174;
        case 0x3ad178u: goto label_3ad178;
        case 0x3ad17cu: goto label_3ad17c;
        case 0x3ad180u: goto label_3ad180;
        case 0x3ad184u: goto label_3ad184;
        case 0x3ad188u: goto label_3ad188;
        case 0x3ad18cu: goto label_3ad18c;
        case 0x3ad190u: goto label_3ad190;
        case 0x3ad194u: goto label_3ad194;
        case 0x3ad198u: goto label_3ad198;
        case 0x3ad19cu: goto label_3ad19c;
        case 0x3ad1a0u: goto label_3ad1a0;
        case 0x3ad1a4u: goto label_3ad1a4;
        case 0x3ad1a8u: goto label_3ad1a8;
        case 0x3ad1acu: goto label_3ad1ac;
        case 0x3ad1b0u: goto label_3ad1b0;
        case 0x3ad1b4u: goto label_3ad1b4;
        case 0x3ad1b8u: goto label_3ad1b8;
        case 0x3ad1bcu: goto label_3ad1bc;
        case 0x3ad1c0u: goto label_3ad1c0;
        case 0x3ad1c4u: goto label_3ad1c4;
        case 0x3ad1c8u: goto label_3ad1c8;
        case 0x3ad1ccu: goto label_3ad1cc;
        case 0x3ad1d0u: goto label_3ad1d0;
        case 0x3ad1d4u: goto label_3ad1d4;
        case 0x3ad1d8u: goto label_3ad1d8;
        case 0x3ad1dcu: goto label_3ad1dc;
        case 0x3ad1e0u: goto label_3ad1e0;
        case 0x3ad1e4u: goto label_3ad1e4;
        case 0x3ad1e8u: goto label_3ad1e8;
        case 0x3ad1ecu: goto label_3ad1ec;
        case 0x3ad1f0u: goto label_3ad1f0;
        case 0x3ad1f4u: goto label_3ad1f4;
        case 0x3ad1f8u: goto label_3ad1f8;
        case 0x3ad1fcu: goto label_3ad1fc;
        case 0x3ad200u: goto label_3ad200;
        case 0x3ad204u: goto label_3ad204;
        case 0x3ad208u: goto label_3ad208;
        case 0x3ad20cu: goto label_3ad20c;
        case 0x3ad210u: goto label_3ad210;
        case 0x3ad214u: goto label_3ad214;
        case 0x3ad218u: goto label_3ad218;
        case 0x3ad21cu: goto label_3ad21c;
        case 0x3ad220u: goto label_3ad220;
        case 0x3ad224u: goto label_3ad224;
        case 0x3ad228u: goto label_3ad228;
        case 0x3ad22cu: goto label_3ad22c;
        case 0x3ad230u: goto label_3ad230;
        case 0x3ad234u: goto label_3ad234;
        case 0x3ad238u: goto label_3ad238;
        case 0x3ad23cu: goto label_3ad23c;
        case 0x3ad240u: goto label_3ad240;
        case 0x3ad244u: goto label_3ad244;
        case 0x3ad248u: goto label_3ad248;
        case 0x3ad24cu: goto label_3ad24c;
        case 0x3ad250u: goto label_3ad250;
        case 0x3ad254u: goto label_3ad254;
        case 0x3ad258u: goto label_3ad258;
        case 0x3ad25cu: goto label_3ad25c;
        case 0x3ad260u: goto label_3ad260;
        case 0x3ad264u: goto label_3ad264;
        case 0x3ad268u: goto label_3ad268;
        case 0x3ad26cu: goto label_3ad26c;
        case 0x3ad270u: goto label_3ad270;
        case 0x3ad274u: goto label_3ad274;
        case 0x3ad278u: goto label_3ad278;
        case 0x3ad27cu: goto label_3ad27c;
        case 0x3ad280u: goto label_3ad280;
        case 0x3ad284u: goto label_3ad284;
        case 0x3ad288u: goto label_3ad288;
        case 0x3ad28cu: goto label_3ad28c;
        case 0x3ad290u: goto label_3ad290;
        case 0x3ad294u: goto label_3ad294;
        case 0x3ad298u: goto label_3ad298;
        case 0x3ad29cu: goto label_3ad29c;
        case 0x3ad2a0u: goto label_3ad2a0;
        case 0x3ad2a4u: goto label_3ad2a4;
        case 0x3ad2a8u: goto label_3ad2a8;
        case 0x3ad2acu: goto label_3ad2ac;
        case 0x3ad2b0u: goto label_3ad2b0;
        case 0x3ad2b4u: goto label_3ad2b4;
        case 0x3ad2b8u: goto label_3ad2b8;
        case 0x3ad2bcu: goto label_3ad2bc;
        case 0x3ad2c0u: goto label_3ad2c0;
        case 0x3ad2c4u: goto label_3ad2c4;
        case 0x3ad2c8u: goto label_3ad2c8;
        case 0x3ad2ccu: goto label_3ad2cc;
        case 0x3ad2d0u: goto label_3ad2d0;
        case 0x3ad2d4u: goto label_3ad2d4;
        case 0x3ad2d8u: goto label_3ad2d8;
        case 0x3ad2dcu: goto label_3ad2dc;
        case 0x3ad2e0u: goto label_3ad2e0;
        case 0x3ad2e4u: goto label_3ad2e4;
        case 0x3ad2e8u: goto label_3ad2e8;
        case 0x3ad2ecu: goto label_3ad2ec;
        case 0x3ad2f0u: goto label_3ad2f0;
        case 0x3ad2f4u: goto label_3ad2f4;
        case 0x3ad2f8u: goto label_3ad2f8;
        case 0x3ad2fcu: goto label_3ad2fc;
        case 0x3ad300u: goto label_3ad300;
        case 0x3ad304u: goto label_3ad304;
        case 0x3ad308u: goto label_3ad308;
        case 0x3ad30cu: goto label_3ad30c;
        case 0x3ad310u: goto label_3ad310;
        case 0x3ad314u: goto label_3ad314;
        case 0x3ad318u: goto label_3ad318;
        case 0x3ad31cu: goto label_3ad31c;
        case 0x3ad320u: goto label_3ad320;
        case 0x3ad324u: goto label_3ad324;
        case 0x3ad328u: goto label_3ad328;
        case 0x3ad32cu: goto label_3ad32c;
        case 0x3ad330u: goto label_3ad330;
        case 0x3ad334u: goto label_3ad334;
        case 0x3ad338u: goto label_3ad338;
        case 0x3ad33cu: goto label_3ad33c;
        case 0x3ad340u: goto label_3ad340;
        case 0x3ad344u: goto label_3ad344;
        case 0x3ad348u: goto label_3ad348;
        case 0x3ad34cu: goto label_3ad34c;
        case 0x3ad350u: goto label_3ad350;
        case 0x3ad354u: goto label_3ad354;
        case 0x3ad358u: goto label_3ad358;
        case 0x3ad35cu: goto label_3ad35c;
        case 0x3ad360u: goto label_3ad360;
        case 0x3ad364u: goto label_3ad364;
        case 0x3ad368u: goto label_3ad368;
        case 0x3ad36cu: goto label_3ad36c;
        case 0x3ad370u: goto label_3ad370;
        case 0x3ad374u: goto label_3ad374;
        case 0x3ad378u: goto label_3ad378;
        case 0x3ad37cu: goto label_3ad37c;
        case 0x3ad380u: goto label_3ad380;
        case 0x3ad384u: goto label_3ad384;
        case 0x3ad388u: goto label_3ad388;
        case 0x3ad38cu: goto label_3ad38c;
        case 0x3ad390u: goto label_3ad390;
        case 0x3ad394u: goto label_3ad394;
        case 0x3ad398u: goto label_3ad398;
        case 0x3ad39cu: goto label_3ad39c;
        case 0x3ad3a0u: goto label_3ad3a0;
        case 0x3ad3a4u: goto label_3ad3a4;
        case 0x3ad3a8u: goto label_3ad3a8;
        case 0x3ad3acu: goto label_3ad3ac;
        case 0x3ad3b0u: goto label_3ad3b0;
        case 0x3ad3b4u: goto label_3ad3b4;
        case 0x3ad3b8u: goto label_3ad3b8;
        case 0x3ad3bcu: goto label_3ad3bc;
        case 0x3ad3c0u: goto label_3ad3c0;
        case 0x3ad3c4u: goto label_3ad3c4;
        case 0x3ad3c8u: goto label_3ad3c8;
        case 0x3ad3ccu: goto label_3ad3cc;
        case 0x3ad3d0u: goto label_3ad3d0;
        case 0x3ad3d4u: goto label_3ad3d4;
        case 0x3ad3d8u: goto label_3ad3d8;
        case 0x3ad3dcu: goto label_3ad3dc;
        case 0x3ad3e0u: goto label_3ad3e0;
        case 0x3ad3e4u: goto label_3ad3e4;
        case 0x3ad3e8u: goto label_3ad3e8;
        case 0x3ad3ecu: goto label_3ad3ec;
        case 0x3ad3f0u: goto label_3ad3f0;
        case 0x3ad3f4u: goto label_3ad3f4;
        case 0x3ad3f8u: goto label_3ad3f8;
        case 0x3ad3fcu: goto label_3ad3fc;
        case 0x3ad400u: goto label_3ad400;
        case 0x3ad404u: goto label_3ad404;
        case 0x3ad408u: goto label_3ad408;
        case 0x3ad40cu: goto label_3ad40c;
        case 0x3ad410u: goto label_3ad410;
        case 0x3ad414u: goto label_3ad414;
        case 0x3ad418u: goto label_3ad418;
        case 0x3ad41cu: goto label_3ad41c;
        case 0x3ad420u: goto label_3ad420;
        case 0x3ad424u: goto label_3ad424;
        case 0x3ad428u: goto label_3ad428;
        case 0x3ad42cu: goto label_3ad42c;
        case 0x3ad430u: goto label_3ad430;
        case 0x3ad434u: goto label_3ad434;
        case 0x3ad438u: goto label_3ad438;
        case 0x3ad43cu: goto label_3ad43c;
        default: break;
    }

    ctx->pc = 0x3ac7e8u;

label_3ac7e8:
    // 0x3ac7e8: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x3ac7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_3ac7ec:
    // 0x3ac7ec: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x3ac7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_3ac7f0:
    // 0x3ac7f0: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x3ac7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_3ac7f4:
    // 0x3ac7f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ac7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ac7f8:
    // 0x3ac7f8: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x3ac7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_3ac7fc:
    // 0x3ac7fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3ac7fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ac800:
    // 0x3ac800: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x3ac800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_3ac804:
    // 0x3ac804: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3ac804u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ac808:
    // 0x3ac808: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x3ac808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_3ac80c:
    // 0x3ac80c: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x3ac80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_3ac810:
    // 0x3ac810: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x3ac810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_3ac814:
    // 0x3ac814: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x3ac814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
label_3ac818:
    // 0x3ac818: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x3ac818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_3ac81c:
    // 0x3ac81c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3ac81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3ac820:
    // 0x3ac820: 0xe7b90168  swc1        $f25, 0x168($sp)
    ctx->pc = 0x3ac820u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_3ac824:
    // 0x3ac824: 0xe7b80160  swc1        $f24, 0x160($sp)
    ctx->pc = 0x3ac824u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_3ac828:
    // 0x3ac828: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x3ac828u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_3ac82c:
    // 0x3ac82c: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x3ac82cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3ac830:
    // 0x3ac830: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x3ac830u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3ac834:
    // 0x3ac834: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x3ac834u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3ac838:
    // 0x3ac838: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3ac838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ac83c:
    // 0x3ac83c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ac83cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ac840:
    // 0x3ac840: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ac840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ac844:
    // 0x3ac844: 0x40f809  jalr        $v0
label_3ac848:
    if (ctx->pc == 0x3AC848u) {
        ctx->pc = 0x3AC848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC844u;
        // 0x3ac848: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC84Cu;
        goto label_3ac84c;
    }
    ctx->pc = 0x3AC844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC84Cu);
        ctx->pc = 0x3AC848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC844u;
        // 0x3ac848: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC844u, 0x3AC84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC84Cu;
label_3ac84c:
    // 0x3ac84c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3ac84cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac850:
    // 0x3ac850: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ac850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ac854:
    // 0x3ac854: 0xc0e90ca  jal         func_3A4328
label_3ac858:
    if (ctx->pc == 0x3AC858u) {
        ctx->pc = 0x3AC858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC854u;
        // 0x3ac858: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC85Cu;
        goto label_3ac85c;
    }
    ctx->pc = 0x3AC854u;
    SET_GPR_U32(ctx, 31, 0x3AC85Cu);
    ctx->pc = 0x3AC858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC854u;
    // 0x3ac858: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3AC854u, 0x3AC85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC85Cu;
label_3ac85c:
    // 0x3ac85c: 0x2e020033  sltiu       $v0, $s0, 0x33
    ctx->pc = 0x3ac85cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_3ac860:
    // 0x3ac860: 0x104002e4  beqz        $v0, . + 4 + (0x2E4 << 2)
label_3ac864:
    if (ctx->pc == 0x3AC864u) {
        ctx->pc = 0x3AC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC860u;
        // 0x3ac864: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC868u;
        goto label_3ac868;
    }
    ctx->pc = 0x3AC860u;
    {
        const bool branch_taken_0x3ac860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC860u;
        // 0x3ac864: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac860) {
            ctx->pc = 0x3AD3F4u;
            goto label_3ad3f4;
        }
    }
    ctx->pc = 0x3AC868u;
label_3ac868:
    // 0x3ac868: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3ac868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3ac86c:
    // 0x3ac86c: 0x24421e20  addiu       $v0, $v0, 0x1E20
    ctx->pc = 0x3ac86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
label_3ac870:
    // 0x3ac870: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ac870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ac874:
    // 0x3ac874: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3ac874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ac878:
    // 0x3ac878: 0x800008  jr          $a0
label_3ac87c:
    if (ctx->pc == 0x3AC87Cu) {
        ctx->pc = 0x3AC880u;
        goto label_3ac880;
    }
    ctx->pc = 0x3AC878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3AC880u: goto label_3ac880;
            case 0x3AC8A8u: goto label_3ac8a8;
            case 0x3AC91Cu: goto label_3ac91c;
            case 0x3AC92Cu: goto label_3ac92c;
            case 0x3AC9A0u: goto label_3ac9a0;
            case 0x3ACC10u: goto label_3acc10;
            case 0x3ACC80u: goto label_3acc80;
            case 0x3AD160u: goto label_3ad160;
            case 0x3AD2D4u: goto label_3ad2d4;
            case 0x3AD390u: goto label_3ad390;
            case 0x3AD3A0u: goto label_3ad3a0;
            case 0x3AD3F4u: goto label_3ad3f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC878u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AC880u;
label_3ac880:
    // 0x3ac880: 0xc043d5e  jal         func_10F578
label_3ac884:
    if (ctx->pc == 0x3AC884u) {
        ctx->pc = 0x3AC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC880u;
        // 0x3ac884: 0x26a40024  addiu       $a0, $s5, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC888u;
        goto label_3ac888;
    }
    ctx->pc = 0x3AC880u;
    SET_GPR_U32(ctx, 31, 0x3AC888u);
    ctx->pc = 0x3AC884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC880u;
    // 0x3ac884: 0x26a40024  addiu       $a0, $s5, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3AC880u, 0x3AC888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC888u;
label_3ac888:
    // 0x3ac888: 0x104002da  beqz        $v0, . + 4 + (0x2DA << 2)
label_3ac88c:
    if (ctx->pc == 0x3AC88Cu) {
        ctx->pc = 0x3AC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC888u;
        // 0x3ac88c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC890u;
        goto label_3ac890;
    }
    ctx->pc = 0x3AC888u;
    {
        const bool branch_taken_0x3ac888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC888u;
        // 0x3ac88c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac888) {
            ctx->pc = 0x3AD3F4u;
            goto label_3ad3f4;
        }
    }
    ctx->pc = 0x3AC890u;
label_3ac890:
    // 0x3ac890: 0x8ea50024  lw          $a1, 0x24($s5)
    ctx->pc = 0x3ac890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_3ac894:
    // 0x3ac894: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3ac894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3ac898:
    // 0x3ac898: 0xc0440c6  jal         func_110318
label_3ac89c:
    if (ctx->pc == 0x3AC89Cu) {
        ctx->pc = 0x3AC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC898u;
        // 0x3ac89c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8A0u;
        goto label_3ac8a0;
    }
    ctx->pc = 0x3AC898u;
    SET_GPR_U32(ctx, 31, 0x3AC8A0u);
    ctx->pc = 0x3AC89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC898u;
    // 0x3ac89c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3AC898u, 0x3AC8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC8A0u;
label_3ac8a0:
    // 0x3ac8a0: 0x100002d5  b           . + 4 + (0x2D5 << 2)
label_3ac8a4:
    if (ctx->pc == 0x3AC8A4u) {
        ctx->pc = 0x3AC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8A0u;
        // 0x3ac8a4: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8A8u;
        goto label_3ac8a8;
    }
    ctx->pc = 0x3AC8A0u;
    {
        const bool branch_taken_0x3ac8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8A0u;
        // 0x3ac8a4: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac8a0) {
            ctx->pc = 0x3AD3F8u;
            goto label_3ad3f8;
        }
    }
    ctx->pc = 0x3AC8A8u;
label_3ac8a8:
    // 0x3ac8a8: 0xc043d5e  jal         func_10F578
label_3ac8ac:
    if (ctx->pc == 0x3AC8ACu) {
        ctx->pc = 0x3AC8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8A8u;
        // 0x3ac8ac: 0x26a40024  addiu       $a0, $s5, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8B0u;
        goto label_3ac8b0;
    }
    ctx->pc = 0x3AC8A8u;
    SET_GPR_U32(ctx, 31, 0x3AC8B0u);
    ctx->pc = 0x3AC8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC8A8u;
    // 0x3ac8ac: 0x26a40024  addiu       $a0, $s5, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3AC8A8u, 0x3AC8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC8B0u;
label_3ac8b0:
    // 0x3ac8b0: 0x144002d1  bnez        $v0, . + 4 + (0x2D1 << 2)
label_3ac8b4:
    if (ctx->pc == 0x3AC8B4u) {
        ctx->pc = 0x3AC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8B0u;
        // 0x3ac8b4: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8B8u;
        goto label_3ac8b8;
    }
    ctx->pc = 0x3AC8B0u;
    {
        const bool branch_taken_0x3ac8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8B0u;
        // 0x3ac8b4: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac8b0) {
            ctx->pc = 0x3AD3F8u;
            goto label_3ad3f8;
        }
    }
    ctx->pc = 0x3AC8B8u;
label_3ac8b8:
    // 0x3ac8b8: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x3ac8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_3ac8bc:
    // 0x3ac8bc: 0x44002cf  bltz        $v0, . + 4 + (0x2CF << 2)
label_3ac8c0:
    if (ctx->pc == 0x3AC8C0u) {
        ctx->pc = 0x3AC8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8BCu;
        // 0x3ac8c0: 0x7bb10120  lq          $s1, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8C4u;
        goto label_3ac8c4;
    }
    ctx->pc = 0x3AC8BCu;
    {
        const bool branch_taken_0x3ac8bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AC8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8BCu;
        // 0x3ac8c0: 0x7bb10120  lq          $s1, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac8bc) {
            ctx->pc = 0x3AD3FCu;
            goto label_3ad3fc;
        }
    }
    ctx->pc = 0x3AC8C4u;
label_3ac8c4:
    // 0x3ac8c4: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x3ac8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_3ac8c8:
    // 0x3ac8c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ac8c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ac8cc:
    // 0x3ac8cc: 0xc0e94a0  jal         func_3A5280
label_3ac8d0:
    if (ctx->pc == 0x3AC8D0u) {
        ctx->pc = 0x3AC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8CCu;
        // 0x3ac8d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8D4u;
        goto label_3ac8d4;
    }
    ctx->pc = 0x3AC8CCu;
    SET_GPR_U32(ctx, 31, 0x3AC8D4u);
    ctx->pc = 0x3AC8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC8CCu;
    // 0x3ac8d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3AC8CCu, 0x3AC8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC8D4u;
label_3ac8d4:
    // 0x3ac8d4: 0x104002c7  beqz        $v0, . + 4 + (0x2C7 << 2)
label_3ac8d8:
    if (ctx->pc == 0x3AC8D8u) {
        ctx->pc = 0x3AC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8D4u;
        // 0x3ac8d8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8DCu;
        goto label_3ac8dc;
    }
    ctx->pc = 0x3AC8D4u;
    {
        const bool branch_taken_0x3ac8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8D4u;
        // 0x3ac8d8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac8d4) {
            ctx->pc = 0x3AD3F4u;
            goto label_3ad3f4;
        }
    }
    ctx->pc = 0x3AC8DCu;
label_3ac8dc:
    // 0x3ac8dc: 0x8ea30028  lw          $v1, 0x28($s5)
    ctx->pc = 0x3ac8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_3ac8e0:
    // 0x3ac8e0: 0x24422cd8  addiu       $v0, $v0, 0x2CD8
    ctx->pc = 0x3ac8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
label_3ac8e4:
    // 0x3ac8e4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3ac8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3ac8e8:
    // 0x3ac8e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ac8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3ac8ec:
    // 0x3ac8ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ac8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ac8f0:
    // 0x3ac8f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ac8f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ac8f4:
    // 0x3ac8f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ac8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ac8f8:
    // 0x3ac8f8: 0x8ca4aa84  lw          $a0, -0x557C($a1)
    ctx->pc = 0x3ac8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294945412)));
label_3ac8fc:
    // 0x3ac8fc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3ac8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ac900:
    // 0x3ac900: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3ac900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ac904:
    // 0x3ac904: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3ac904u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3ac908:
    // 0x3ac908: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3ac908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac90c:
    // 0x3ac90c: 0xc043f74  jal         func_10FDD0
label_3ac910:
    if (ctx->pc == 0x3AC910u) {
        ctx->pc = 0x3AC910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC90Cu;
        // 0x3ac910: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC914u;
        goto label_3ac914;
    }
    ctx->pc = 0x3AC90Cu;
    SET_GPR_U32(ctx, 31, 0x3AC914u);
    ctx->pc = 0x3AC910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC90Cu;
    // 0x3ac910: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x3AC90Cu, 0x3AC914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC914u;
label_3ac914:
    // 0x3ac914: 0x100002b7  b           . + 4 + (0x2B7 << 2)
label_3ac918:
    if (ctx->pc == 0x3AC918u) {
        ctx->pc = 0x3AC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC914u;
        // 0x3ac918: 0xaea20024  sw          $v0, 0x24($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC91Cu;
        goto label_3ac91c;
    }
    ctx->pc = 0x3AC914u;
    {
        const bool branch_taken_0x3ac914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC914u;
        // 0x3ac918: 0xaea20024  sw          $v0, 0x24($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac914) {
            ctx->pc = 0x3AD3F4u;
            goto label_3ad3f4;
        }
    }
    ctx->pc = 0x3AC91Cu;
label_3ac91c:
    // 0x3ac91c: 0xc0e8616  jal         func_3A1858
label_3ac920:
    if (ctx->pc == 0x3AC920u) {
        ctx->pc = 0x3AC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC91Cu;
        // 0x3ac920: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC924u;
        goto label_3ac924;
    }
    ctx->pc = 0x3AC91Cu;
    SET_GPR_U32(ctx, 31, 0x3AC924u);
    ctx->pc = 0x3AC920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC91Cu;
    // 0x3ac920: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3AC91Cu, 0x3AC924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC924u;
label_3ac924:
    // 0x3ac924: 0x100002b4  b           . + 4 + (0x2B4 << 2)
label_3ac928:
    if (ctx->pc == 0x3AC928u) {
        ctx->pc = 0x3AC928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC924u;
        // 0x3ac928: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC92Cu;
        goto label_3ac92c;
    }
    ctx->pc = 0x3AC924u;
    {
        const bool branch_taken_0x3ac924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC924u;
        // 0x3ac928: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac924) {
            ctx->pc = 0x3AD3F8u;
            goto label_3ad3f8;
        }
    }
    ctx->pc = 0x3AC92Cu;
label_3ac92c:
    // 0x3ac92c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3ac92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ac930:
    // 0x3ac930: 0x3c110010  lui         $s1, 0x10
    ctx->pc = 0x3ac930u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16 << 16));
label_3ac934:
    // 0x3ac934: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3ac934u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3ac938:
    // 0x3ac938: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3ac938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3ac93c:
    // 0x3ac93c: 0x40f809  jalr        $v0
label_3ac940:
    if (ctx->pc == 0x3AC940u) {
        ctx->pc = 0x3AC940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC93Cu;
        // 0x3ac940: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC944u;
        goto label_3ac944;
    }
    ctx->pc = 0x3AC93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC944u);
        ctx->pc = 0x3AC940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC93Cu;
        // 0x3ac940: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC93Cu, 0x3AC944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC944u;
label_3ac944:
    // 0x3ac944: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x3ac944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_3ac948:
    // 0x3ac948: 0x144002ab  bnez        $v0, . + 4 + (0x2AB << 2)
label_3ac94c:
    if (ctx->pc == 0x3AC94Cu) {
        ctx->pc = 0x3AC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC948u;
        // 0x3ac94c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC950u;
        goto label_3ac950;
    }
    ctx->pc = 0x3AC948u;
    {
        const bool branch_taken_0x3ac948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC948u;
        // 0x3ac94c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac948) {
            ctx->pc = 0x3AD3F8u;
            goto label_3ad3f8;
        }
    }
    ctx->pc = 0x3AC950u;
label_3ac950:
    // 0x3ac950: 0xc0ea14c  jal         func_3A8530
label_3ac954:
    if (ctx->pc == 0x3AC954u) {
        ctx->pc = 0x3AC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC950u;
        // 0x3ac954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC958u;
        goto label_3ac958;
    }
    ctx->pc = 0x3AC950u;
    SET_GPR_U32(ctx, 31, 0x3AC958u);
    ctx->pc = 0x3AC954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC950u;
    // 0x3ac954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3AC950u, 0x3AC958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC958u;
label_3ac958:
    // 0x3ac958: 0xc08a61a  jal         func_229868
label_3ac95c:
    if (ctx->pc == 0x3AC95Cu) {
        ctx->pc = 0x3AC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC958u;
        // 0x3ac95c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC960u;
        goto label_3ac960;
    }
    ctx->pc = 0x3AC958u;
    SET_GPR_U32(ctx, 31, 0x3AC960u);
    ctx->pc = 0x3AC95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC958u;
    // 0x3ac95c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3AC958u, 0x3AC960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC960u;
label_3ac960:
    // 0x3ac960: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x3ac960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3ac964:
    // 0x3ac964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ac964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac968:
    // 0x3ac968: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ac968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ac96c:
    // 0x3ac96c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ac96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ac970:
    // 0x3ac970: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x3ac970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_3ac974:
    // 0x3ac974: 0xc0ea176  jal         func_3A85D8
label_3ac978:
    if (ctx->pc == 0x3AC978u) {
        ctx->pc = 0x3AC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC974u;
        // 0x3ac978: 0xae830054  sw          $v1, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC97Cu;
        goto label_3ac97c;
    }
    ctx->pc = 0x3AC974u;
    SET_GPR_U32(ctx, 31, 0x3AC97Cu);
    ctx->pc = 0x3AC978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC974u;
    // 0x3ac978: 0xae830054  sw          $v1, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3AC974u, 0x3AC97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC97Cu;
label_3ac97c:
    // 0x3ac97c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ac97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ac980:
    // 0x3ac980: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ac980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ac984:
    // 0x3ac984: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3ac984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3ac988:
    // 0x3ac988: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3ac988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3ac98c:
    // 0x3ac98c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3ac98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3ac990:
    // 0x3ac990: 0x40f809  jalr        $v0
label_3ac994:
    if (ctx->pc == 0x3AC994u) {
        ctx->pc = 0x3AC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC990u;
        // 0x3ac994: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC998u;
        goto label_3ac998;
    }
    ctx->pc = 0x3AC990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC998u);
        ctx->pc = 0x3AC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC990u;
        // 0x3ac994: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC990u, 0x3AC998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC998u;
label_3ac998:
    // 0x3ac998: 0x10000297  b           . + 4 + (0x297 << 2)
label_3ac99c:
    if (ctx->pc == 0x3AC99Cu) {
        ctx->pc = 0x3AC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC998u;
        // 0x3ac99c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC9A0u;
        goto label_3ac9a0;
    }
    ctx->pc = 0x3AC998u;
    {
        const bool branch_taken_0x3ac998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC998u;
        // 0x3ac99c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac998) {
            ctx->pc = 0x3AD3F8u;
            goto label_3ad3f8;
        }
    }
    ctx->pc = 0x3AC9A0u;
label_3ac9a0:
    // 0x3ac9a0: 0xc0ea146  jal         func_3A8518
label_3ac9a4:
    if (ctx->pc == 0x3AC9A4u) {
        ctx->pc = 0x3AC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9A0u;
        // 0x3ac9a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC9A8u;
        goto label_3ac9a8;
    }
    ctx->pc = 0x3AC9A0u;
    SET_GPR_U32(ctx, 31, 0x3AC9A8u);
    ctx->pc = 0x3AC9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC9A0u;
    // 0x3ac9a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AC9A0u, 0x3AC9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC9A8u;
label_3ac9a8:
    // 0x3ac9a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ac9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ac9ac:
    // 0x3ac9ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ac9acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac9b0:
    // 0x3ac9b0: 0xc0ea12a  jal         func_3A84A8
label_3ac9b4:
    if (ctx->pc == 0x3AC9B4u) {
        ctx->pc = 0x3AC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9B0u;
        // 0x3ac9b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC9B8u;
        goto label_3ac9b8;
    }
    ctx->pc = 0x3AC9B0u;
    SET_GPR_U32(ctx, 31, 0x3AC9B8u);
    ctx->pc = 0x3AC9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC9B0u;
    // 0x3ac9b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AC9B0u, 0x3AC9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC9B8u;
label_3ac9b8:
    // 0x3ac9b8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3ac9b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ac9bc:
    // 0x3ac9bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ac9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ac9c0:
    // 0x3ac9c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ac9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ac9c4:
    // 0x3ac9c4: 0xc0ea12a  jal         func_3A84A8
label_3ac9c8:
    if (ctx->pc == 0x3AC9C8u) {
        ctx->pc = 0x3AC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9C4u;
        // 0x3ac9c8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC9CCu;
        goto label_3ac9cc;
    }
    ctx->pc = 0x3AC9C4u;
    SET_GPR_U32(ctx, 31, 0x3AC9CCu);
    ctx->pc = 0x3AC9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC9C4u;
    // 0x3ac9c8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AC9C4u, 0x3AC9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC9CCu;
label_3ac9cc:
    // 0x3ac9cc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3ac9ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ac9d0:
    // 0x3ac9d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ac9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ac9d4:
    // 0x3ac9d4: 0xc0ea146  jal         func_3A8518
label_3ac9d8:
    if (ctx->pc == 0x3AC9D8u) {
        ctx->pc = 0x3AC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9D4u;
        // 0x3ac9d8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC9DCu;
        goto label_3ac9dc;
    }
    ctx->pc = 0x3AC9D4u;
    SET_GPR_U32(ctx, 31, 0x3AC9DCu);
    ctx->pc = 0x3AC9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC9D4u;
    // 0x3ac9d8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AC9D4u, 0x3AC9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC9DCu;
label_3ac9dc:
    // 0x3ac9dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ac9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac9e0:
    // 0x3ac9e0: 0xc0ea14c  jal         func_3A8530
label_3ac9e4:
    if (ctx->pc == 0x3AC9E4u) {
        ctx->pc = 0x3AC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9E0u;
        // 0x3ac9e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC9E8u;
        goto label_3ac9e8;
    }
    ctx->pc = 0x3AC9E0u;
    SET_GPR_U32(ctx, 31, 0x3AC9E8u);
    ctx->pc = 0x3AC9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC9E0u;
    // 0x3ac9e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3AC9E0u, 0x3AC9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC9E8u;
label_3ac9e8:
    // 0x3ac9e8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3ac9e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac9ec:
    // 0x3ac9ec: 0xc08a61a  jal         func_229868
label_3ac9f0:
    if (ctx->pc == 0x3AC9F0u) {
        ctx->pc = 0x3AC9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9ECu;
        // 0x3ac9f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC9F4u;
        goto label_3ac9f4;
    }
    ctx->pc = 0x3AC9ECu;
    SET_GPR_U32(ctx, 31, 0x3AC9F4u);
    ctx->pc = 0x3AC9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC9ECu;
    // 0x3ac9f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3AC9ECu, 0x3AC9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC9F4u;
label_3ac9f4:
    // 0x3ac9f4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3ac9f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac9f8:
    // 0x3ac9f8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3ac9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3ac9fc:
    // 0x3ac9fc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3ac9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3aca00:
    // 0x3aca00: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3aca00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3aca04:
    // 0x3aca04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3aca04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aca08:
    // 0x3aca08: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3aca08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3aca0c:
    // 0x3aca0c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3aca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3aca10:
    // 0x3aca10: 0x60f809  jalr        $v1
label_3aca14:
    if (ctx->pc == 0x3ACA14u) {
        ctx->pc = 0x3ACA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA10u;
        // 0x3aca14: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACA18u;
        goto label_3aca18;
    }
    ctx->pc = 0x3ACA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3ACA18u);
        ctx->pc = 0x3ACA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA10u;
        // 0x3aca14: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACA10u, 0x3ACA18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACA18u;
label_3aca18:
    // 0x3aca18: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3aca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3aca1c:
    // 0x3aca1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3aca1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aca20:
    // 0x3aca20: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3aca20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3aca24:
    // 0x3aca24: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3aca24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3aca28:
    // 0x3aca28: 0x60f809  jalr        $v1
label_3aca2c:
    if (ctx->pc == 0x3ACA2Cu) {
        ctx->pc = 0x3ACA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA28u;
        // 0x3aca2c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACA30u;
        goto label_3aca30;
    }
    ctx->pc = 0x3ACA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3ACA30u);
        ctx->pc = 0x3ACA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA28u;
        // 0x3aca2c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACA28u, 0x3ACA30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACA30u;
label_3aca30:
    // 0x3aca30: 0xc0e896e  jal         func_3A25B8
label_3aca34:
    if (ctx->pc == 0x3ACA34u) {
        ctx->pc = 0x3ACA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA30u;
        // 0x3aca34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACA38u;
        goto label_3aca38;
    }
    ctx->pc = 0x3ACA30u;
    SET_GPR_U32(ctx, 31, 0x3ACA38u);
    ctx->pc = 0x3ACA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACA30u;
    // 0x3aca34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3ACA30u, 0x3ACA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACA38u;
label_3aca38:
    // 0x3aca38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3aca38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aca3c:
    // 0x3aca3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3aca3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aca40:
    // 0x3aca40: 0xc0e8604  jal         func_3A1810
label_3aca44:
    if (ctx->pc == 0x3ACA44u) {
        ctx->pc = 0x3ACA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA40u;
        // 0x3aca44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACA48u;
        goto label_3aca48;
    }
    ctx->pc = 0x3ACA40u;
    SET_GPR_U32(ctx, 31, 0x3ACA48u);
    ctx->pc = 0x3ACA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACA40u;
    // 0x3aca44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3ACA40u, 0x3ACA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACA48u;
label_3aca48:
    // 0x3aca48: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x3aca48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3aca4c:
    // 0x3aca4c: 0x3c02f9ff  lui         $v0, 0xF9FF
    ctx->pc = 0x3aca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63999 << 16));
label_3aca50:
    // 0x3aca50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3aca50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3aca54:
    // 0x3aca54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3aca54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3aca58:
    // 0x3aca58: 0x16400010  bnez        $s2, . + 4 + (0x10 << 2)
label_3aca5c:
    if (ctx->pc == 0x3ACA5Cu) {
        ctx->pc = 0x3ACA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA58u;
        // 0x3aca5c: 0xae830054  sw          $v1, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACA60u;
        goto label_3aca60;
    }
    ctx->pc = 0x3ACA58u;
    {
        const bool branch_taken_0x3aca58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA58u;
        // 0x3aca5c: 0xae830054  sw          $v1, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aca58) {
            ctx->pc = 0x3ACA9Cu;
            goto label_3aca9c;
        }
    }
    ctx->pc = 0x3ACA60u;
label_3aca60:
    // 0x3aca60: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3aca60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3aca64:
    // 0x3aca64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3aca64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3aca68:
    // 0x3aca68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aca68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aca6c:
    // 0x3aca6c: 0xc0e8e5e  jal         func_3A3978
label_3aca70:
    if (ctx->pc == 0x3ACA70u) {
        ctx->pc = 0x3ACA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA6Cu;
        // 0x3aca70: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACA74u;
        goto label_3aca74;
    }
    ctx->pc = 0x3ACA6Cu;
    SET_GPR_U32(ctx, 31, 0x3ACA74u);
    ctx->pc = 0x3ACA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACA6Cu;
    // 0x3aca70: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3978u, 0x3ACA6Cu, 0x3ACA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACA74u;
label_3aca74:
    // 0x3aca74: 0x26910010  addiu       $s1, $s4, 0x10
    ctx->pc = 0x3aca74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_3aca78:
    // 0x3aca78: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3aca78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3aca7c:
    // 0x3aca7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aca7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aca80:
    // 0x3aca80: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3aca80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3aca84:
    // 0x3aca84: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3aca84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3aca88:
    // 0x3aca88: 0xc0e8e5e  jal         func_3A3978
label_3aca8c:
    if (ctx->pc == 0x3ACA8Cu) {
        ctx->pc = 0x3ACA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA88u;
        // 0x3aca8c: 0x7e820010  sq          $v0, 0x10($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACA90u;
        goto label_3aca90;
    }
    ctx->pc = 0x3ACA88u;
    SET_GPR_U32(ctx, 31, 0x3ACA90u);
    ctx->pc = 0x3ACA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACA88u;
    // 0x3aca8c: 0x7e820010  sq          $v0, 0x10($s4) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3978u, 0x3ACA88u, 0x3ACA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACA90u;
label_3aca90:
    // 0x3aca90: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3aca90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3aca94:
    // 0x3aca94: 0x10000005  b           . + 4 + (0x5 << 2)
label_3aca98:
    if (ctx->pc == 0x3ACA98u) {
        ctx->pc = 0x3ACA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA94u;
        // 0x3aca98: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACA9Cu;
        goto label_3aca9c;
    }
    ctx->pc = 0x3ACA94u;
    {
        const bool branch_taken_0x3aca94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA94u;
        // 0x3aca98: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aca94) {
            ctx->pc = 0x3ACAACu;
            goto label_3acaac;
        }
    }
    ctx->pc = 0x3ACA9Cu;
label_3aca9c:
    // 0x3aca9c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3aca9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3acaa0:
    // 0x3acaa0: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3acaa0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3acaa4:
    // 0x3acaa4: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x3acaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_3acaa8:
    // 0x3acaa8: 0x7e830020  sq          $v1, 0x20($s4)
    ctx->pc = 0x3acaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 3));
label_3acaac:
    // 0x3acaac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3acaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3acab0:
    // 0x3acab0: 0xc0ea176  jal         func_3A85D8
label_3acab4:
    if (ctx->pc == 0x3ACAB4u) {
        ctx->pc = 0x3ACAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAB0u;
        // 0x3acab4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACAB8u;
        goto label_3acab8;
    }
    ctx->pc = 0x3ACAB0u;
    SET_GPR_U32(ctx, 31, 0x3ACAB8u);
    ctx->pc = 0x3ACAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACAB0u;
    // 0x3acab4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3ACAB0u, 0x3ACAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACAB8u;
label_3acab8:
    // 0x3acab8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3acab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3acabc:
    // 0x3acabc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3acabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3acac0:
    // 0x3acac0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3acac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3acac4:
    // 0x3acac4: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3acac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3acac8:
    // 0x3acac8: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3acac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3acacc:
    // 0x3acacc: 0x40f809  jalr        $v0
label_3acad0:
    if (ctx->pc == 0x3ACAD0u) {
        ctx->pc = 0x3ACAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACACCu;
        // 0x3acad0: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACAD4u;
        goto label_3acad4;
    }
    ctx->pc = 0x3ACACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACAD4u);
        ctx->pc = 0x3ACAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACACCu;
        // 0x3acad0: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACACCu, 0x3ACAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACAD4u;
label_3acad4:
    // 0x3acad4: 0xc0874fa  jal         func_21D3E8
label_3acad8:
    if (ctx->pc == 0x3ACAD8u) {
        ctx->pc = 0x3ACAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAD4u;
        // 0x3acad8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACADCu;
        goto label_3acadc;
    }
    ctx->pc = 0x3ACAD4u;
    SET_GPR_U32(ctx, 31, 0x3ACADCu);
    ctx->pc = 0x3ACAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACAD4u;
    // 0x3acad8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x3ACAD4u, 0x3ACADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACADCu;
label_3acadc:
    // 0x3acadc: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x3acadcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_3acae0:
    // 0x3acae0: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_3acae4:
    if (ctx->pc == 0x3ACAE4u) {
        ctx->pc = 0x3ACAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAE0u;
        // 0x3acae4: 0x3c100061  lui         $s0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACAE8u;
        goto label_3acae8;
    }
    ctx->pc = 0x3ACAE0u;
    {
        const bool branch_taken_0x3acae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAE0u;
        // 0x3acae4: 0x3c100061  lui         $s0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acae0) {
            ctx->pc = 0x3ACB88u;
            goto label_3acb88;
        }
    }
    ctx->pc = 0x3ACAE8u;
label_3acae8:
    // 0x3acae8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x3acae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3acaec:
    // 0x3acaec: 0xc067b9c  jal         func_19EE70
label_3acaf0:
    if (ctx->pc == 0x3ACAF0u) {
        ctx->pc = 0x3ACAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAECu;
        // 0x3acaf0: 0x26109250  addiu       $s0, $s0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACAF4u;
        goto label_3acaf4;
    }
    ctx->pc = 0x3ACAECu;
    SET_GPR_U32(ctx, 31, 0x3ACAF4u);
    ctx->pc = 0x3ACAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACAECu;
    // 0x3acaf0: 0x26109250  addiu       $s0, $s0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x3ACAECu, 0x3ACAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACAF4u;
label_3acaf4:
    // 0x3acaf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3acaf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3acaf8:
    // 0x3acaf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3acaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3acafc:
    // 0x3acafc: 0xc0738f0  jal         func_1CE3C0
label_3acb00:
    if (ctx->pc == 0x3ACB00u) {
        ctx->pc = 0x3ACB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAFCu;
        // 0x3acb00: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB04u;
        goto label_3acb04;
    }
    ctx->pc = 0x3ACAFCu;
    SET_GPR_U32(ctx, 31, 0x3ACB04u);
    ctx->pc = 0x3ACB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACAFCu;
    // 0x3acb00: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE3C0u, 0x3ACAFCu, 0x3ACB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACB04u;
label_3acb04:
    // 0x3acb04: 0x8ea50038  lw          $a1, 0x38($s5)
    ctx->pc = 0x3acb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_3acb08:
    // 0x3acb08: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_3acb0c:
    if (ctx->pc == 0x3ACB0Cu) {
        ctx->pc = 0x3ACB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB08u;
        // 0x3acb0c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB10u;
        goto label_3acb10;
    }
    ctx->pc = 0x3ACB08u;
    {
        const bool branch_taken_0x3acb08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB08u;
        // 0x3acb0c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acb08) {
            ctx->pc = 0x3ACB88u;
            goto label_3acb88;
        }
    }
    ctx->pc = 0x3ACB10u;
label_3acb10:
    // 0x3acb10: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x3acb10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_3acb14:
    // 0x3acb14: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3acb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3acb18:
    // 0x3acb18: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3acb18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3acb1c:
    // 0x3acb1c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3acb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3acb20:
    // 0x3acb20: 0x40f809  jalr        $v0
label_3acb24:
    if (ctx->pc == 0x3ACB24u) {
        ctx->pc = 0x3ACB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB20u;
        // 0x3acb24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB28u;
        goto label_3acb28;
    }
    ctx->pc = 0x3ACB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACB28u);
        ctx->pc = 0x3ACB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB20u;
        // 0x3acb24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACB20u, 0x3ACB28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACB28u;
label_3acb28:
    // 0x3acb28: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3acb2c:
    if (ctx->pc == 0x3ACB2Cu) {
        ctx->pc = 0x3ACB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB28u;
        // 0x3acb2c: 0x8e502b04  lw          $s0, 0x2B04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB30u;
        goto label_3acb30;
    }
    ctx->pc = 0x3ACB28u;
    {
        const bool branch_taken_0x3acb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB28u;
        // 0x3acb2c: 0x8e502b04  lw          $s0, 0x2B04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acb28) {
            ctx->pc = 0x3ACB88u;
            goto label_3acb88;
        }
    }
    ctx->pc = 0x3ACB30u;
label_3acb30:
    // 0x3acb30: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3acb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3acb34:
    // 0x3acb34: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3acb34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3acb38:
    // 0x3acb38: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3acb38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3acb3c:
    // 0x3acb3c: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x3acb3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_3acb40:
    // 0x3acb40: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3acb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3acb44:
    // 0x3acb44: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x3acb44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_3acb48:
    // 0x3acb48: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x3acb48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_3acb4c:
    // 0x3acb4c: 0x40f809  jalr        $v0
label_3acb50:
    if (ctx->pc == 0x3ACB50u) {
        ctx->pc = 0x3ACB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB4Cu;
        // 0x3acb50: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB54u;
        goto label_3acb54;
    }
    ctx->pc = 0x3ACB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACB54u);
        ctx->pc = 0x3ACB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB4Cu;
        // 0x3acb50: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACB4Cu, 0x3ACB54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACB54u;
label_3acb54:
    // 0x3acb54: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x3acb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_3acb58:
    // 0x3acb58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3acb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3acb5c:
    // 0x3acb5c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3acb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3acb60:
    // 0x3acb60: 0x40f809  jalr        $v0
label_3acb64:
    if (ctx->pc == 0x3ACB64u) {
        ctx->pc = 0x3ACB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB60u;
        // 0x3acb64: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB68u;
        goto label_3acb68;
    }
    ctx->pc = 0x3ACB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACB68u);
        ctx->pc = 0x3ACB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB60u;
        // 0x3acb64: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACB60u, 0x3ACB68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACB68u;
label_3acb68:
    // 0x3acb68: 0x8e472b04  lw          $a3, 0x2B04($s2)
    ctx->pc = 0x3acb68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_3acb6c:
    // 0x3acb6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3acb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3acb70:
    // 0x3acb70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3acb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3acb74:
    // 0x3acb74: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3acb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3acb78:
    // 0x3acb78: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x3acb78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_3acb7c:
    // 0x3acb7c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x3acb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3acb80:
    // 0x3acb80: 0x60f809  jalr        $v1
label_3acb84:
    if (ctx->pc == 0x3ACB84u) {
        ctx->pc = 0x3ACB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB80u;
        // 0x3acb84: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB88u;
        goto label_3acb88;
    }
    ctx->pc = 0x3ACB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3ACB88u);
        ctx->pc = 0x3ACB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB80u;
        // 0x3acb84: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACB80u, 0x3ACB88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACB88u;
label_3acb88:
    // 0x3acb88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3acb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3acb8c:
    // 0x3acb8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3acb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3acb90:
    // 0x3acb90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3acb90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3acb94:
    // 0x3acb94: 0xc0e8e26  jal         func_3A3898
label_3acb98:
    if (ctx->pc == 0x3ACB98u) {
        ctx->pc = 0x3ACB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB94u;
        // 0x3acb98: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB9Cu;
        goto label_3acb9c;
    }
    ctx->pc = 0x3ACB94u;
    SET_GPR_U32(ctx, 31, 0x3ACB9Cu);
    ctx->pc = 0x3ACB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACB94u;
    // 0x3acb98: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3ACB94u, 0x3ACB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACB9Cu;
label_3acb9c:
    // 0x3acb9c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3acb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3acba0:
    // 0x3acba0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3acba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3acba4:
    // 0x3acba4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3acba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3acba8:
    // 0x3acba8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3acba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3acbac:
    // 0x3acbac: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3acbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3acbb0:
    // 0x3acbb0: 0xe7b4005c  swc1        $f20, 0x5C($sp)
    ctx->pc = 0x3acbb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3acbb4:
    // 0x3acbb4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3acbb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3acbb8:
    // 0x3acbb8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3acbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3acbbc:
    // 0x3acbbc: 0xc0e8dee  jal         func_3A37B8
label_3acbc0:
    if (ctx->pc == 0x3ACBC0u) {
        ctx->pc = 0x3ACBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBBCu;
        // 0x3acbc0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACBC4u;
        goto label_3acbc4;
    }
    ctx->pc = 0x3ACBBCu;
    SET_GPR_U32(ctx, 31, 0x3ACBC4u);
    ctx->pc = 0x3ACBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACBBCu;
    // 0x3acbc0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3ACBBCu, 0x3ACBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACBC4u;
label_3acbc4:
    // 0x3acbc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3acbc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3acbc8:
    // 0x3acbc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3acbc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3acbcc:
    // 0x3acbcc: 0xc0ea164  jal         func_3A8590
label_3acbd0:
    if (ctx->pc == 0x3ACBD0u) {
        ctx->pc = 0x3ACBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBCCu;
        // 0x3acbd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACBD4u;
        goto label_3acbd4;
    }
    ctx->pc = 0x3ACBCCu;
    SET_GPR_U32(ctx, 31, 0x3ACBD4u);
    ctx->pc = 0x3ACBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACBCCu;
    // 0x3acbd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8590u, 0x3ACBCCu, 0x3ACBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACBD4u;
label_3acbd4:
    // 0x3acbd4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3acbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3acbd8:
    // 0x3acbd8: 0xc0ea158  jal         func_3A8560
label_3acbdc:
    if (ctx->pc == 0x3ACBDCu) {
        ctx->pc = 0x3ACBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBD8u;
        // 0x3acbdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACBE0u;
        goto label_3acbe0;
    }
    ctx->pc = 0x3ACBD8u;
    SET_GPR_U32(ctx, 31, 0x3ACBE0u);
    ctx->pc = 0x3ACBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACBD8u;
    // 0x3acbdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3ACBD8u, 0x3ACBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACBE0u;
label_3acbe0:
    // 0x3acbe0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3acbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3acbe4:
    // 0x3acbe4: 0xc0ea16a  jal         func_3A85A8
label_3acbe8:
    if (ctx->pc == 0x3ACBE8u) {
        ctx->pc = 0x3ACBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBE4u;
        // 0x3acbe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACBECu;
        goto label_3acbec;
    }
    ctx->pc = 0x3ACBE4u;
    SET_GPR_U32(ctx, 31, 0x3ACBECu);
    ctx->pc = 0x3ACBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACBE4u;
    // 0x3acbe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3ACBE4u, 0x3ACBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACBECu;
label_3acbec:
    // 0x3acbec: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x3acbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3acbf0:
    // 0x3acbf0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3acbf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3acbf4:
    // 0x3acbf4: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3acbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_3acbf8:
    // 0x3acbf8: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3acbf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3acbfc:
    // 0x3acbfc: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3acbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3acc00:
    // 0x3acc00: 0x40f809  jalr        $v0
label_3acc04:
    if (ctx->pc == 0x3ACC04u) {
        ctx->pc = 0x3ACC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC00u;
        // 0x3acc04: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC08u;
        goto label_3acc08;
    }
    ctx->pc = 0x3ACC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACC08u);
        ctx->pc = 0x3ACC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC00u;
        // 0x3acc04: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACC00u, 0x3ACC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACC08u;
label_3acc08:
    // 0x3acc08: 0x100001fb  b           . + 4 + (0x1FB << 2)
label_3acc0c:
    if (ctx->pc == 0x3ACC0Cu) {
        ctx->pc = 0x3ACC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC08u;
        // 0x3acc0c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC10u;
        goto label_3acc10;
    }
    ctx->pc = 0x3ACC08u;
    {
        const bool branch_taken_0x3acc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC08u;
        // 0x3acc0c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc08) {
            ctx->pc = 0x3AD3F8u;
            goto label_3ad3f8;
        }
    }
    ctx->pc = 0x3ACC10u;
label_3acc10:
    // 0x3acc10: 0xc0ea146  jal         func_3A8518
label_3acc14:
    if (ctx->pc == 0x3ACC14u) {
        ctx->pc = 0x3ACC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC10u;
        // 0x3acc14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC18u;
        goto label_3acc18;
    }
    ctx->pc = 0x3ACC10u;
    SET_GPR_U32(ctx, 31, 0x3ACC18u);
    ctx->pc = 0x3ACC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACC10u;
    // 0x3acc14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3ACC10u, 0x3ACC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACC18u;
label_3acc18:
    // 0x3acc18: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3acc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3acc1c:
    // 0x3acc1c: 0xc0ea12a  jal         func_3A84A8
label_3acc20:
    if (ctx->pc == 0x3ACC20u) {
        ctx->pc = 0x3ACC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC1Cu;
        // 0x3acc20: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC24u;
        goto label_3acc24;
    }
    ctx->pc = 0x3ACC1Cu;
    SET_GPR_U32(ctx, 31, 0x3ACC24u);
    ctx->pc = 0x3ACC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACC1Cu;
    // 0x3acc20: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3ACC1Cu, 0x3ACC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACC24u;
label_3acc24:
    // 0x3acc24: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3acc24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3acc28:
    // 0x3acc28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3acc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3acc2c:
    // 0x3acc2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3acc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3acc30:
    // 0x3acc30: 0xc0ea12a  jal         func_3A84A8
label_3acc34:
    if (ctx->pc == 0x3ACC34u) {
        ctx->pc = 0x3ACC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC30u;
        // 0x3acc34: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC38u;
        goto label_3acc38;
    }
    ctx->pc = 0x3ACC30u;
    SET_GPR_U32(ctx, 31, 0x3ACC38u);
    ctx->pc = 0x3ACC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACC30u;
    // 0x3acc34: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3ACC30u, 0x3ACC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACC38u;
label_3acc38:
    // 0x3acc38: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3acc38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3acc3c:
    // 0x3acc3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3acc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3acc40:
    // 0x3acc40: 0xc0ea146  jal         func_3A8518
label_3acc44:
    if (ctx->pc == 0x3ACC44u) {
        ctx->pc = 0x3ACC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC40u;
        // 0x3acc44: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC48u;
        goto label_3acc48;
    }
    ctx->pc = 0x3ACC40u;
    SET_GPR_U32(ctx, 31, 0x3ACC48u);
    ctx->pc = 0x3ACC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACC40u;
    // 0x3acc44: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3ACC40u, 0x3ACC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACC48u;
label_3acc48:
    // 0x3acc48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3acc48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3acc4c:
    // 0x3acc4c: 0xc0ea14c  jal         func_3A8530
label_3acc50:
    if (ctx->pc == 0x3ACC50u) {
        ctx->pc = 0x3ACC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC4Cu;
        // 0x3acc50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC54u;
        goto label_3acc54;
    }
    ctx->pc = 0x3ACC4Cu;
    SET_GPR_U32(ctx, 31, 0x3ACC54u);
    ctx->pc = 0x3ACC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACC4Cu;
    // 0x3acc50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3ACC4Cu, 0x3ACC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACC54u;
label_3acc54:
    // 0x3acc54: 0xc0e896e  jal         func_3A25B8
label_3acc58:
    if (ctx->pc == 0x3ACC58u) {
        ctx->pc = 0x3ACC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC54u;
        // 0x3acc58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC5Cu;
        goto label_3acc5c;
    }
    ctx->pc = 0x3ACC54u;
    SET_GPR_U32(ctx, 31, 0x3ACC5Cu);
    ctx->pc = 0x3ACC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACC54u;
    // 0x3acc58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3ACC54u, 0x3ACC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACC5Cu;
label_3acc5c:
    // 0x3acc5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3acc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3acc60:
    // 0x3acc60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3acc60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3acc64:
    // 0x3acc64: 0xc0e8604  jal         func_3A1810
label_3acc68:
    if (ctx->pc == 0x3ACC68u) {
        ctx->pc = 0x3ACC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC64u;
        // 0x3acc68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC6Cu;
        goto label_3acc6c;
    }
    ctx->pc = 0x3ACC64u;
    SET_GPR_U32(ctx, 31, 0x3ACC6Cu);
    ctx->pc = 0x3ACC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACC64u;
    // 0x3acc68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3ACC64u, 0x3ACC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACC6Cu;
label_3acc6c:
    // 0x3acc6c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3acc6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3acc70:
    // 0x3acc70: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3acc70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3acc74:
    // 0x3acc74: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x3acc74u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_3acc78:
    // 0x3acc78: 0x100001de  b           . + 4 + (0x1DE << 2)
label_3acc7c:
    if (ctx->pc == 0x3ACC7Cu) {
        ctx->pc = 0x3ACC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC78u;
        // 0x3acc7c: 0x7e830020  sq          $v1, 0x20($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC80u;
        goto label_3acc80;
    }
    ctx->pc = 0x3ACC78u;
    {
        const bool branch_taken_0x3acc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC78u;
        // 0x3acc7c: 0x7e830020  sq          $v1, 0x20($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc78) {
            ctx->pc = 0x3AD3F4u;
            goto label_3ad3f4;
        }
    }
    ctx->pc = 0x3ACC80u;
label_3acc80:
    // 0x3acc80: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3acc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3acc84:
    // 0x3acc84: 0xc0ea12a  jal         func_3A84A8
label_3acc88:
    if (ctx->pc == 0x3ACC88u) {
        ctx->pc = 0x3ACC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC84u;
        // 0x3acc88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC8Cu;
        goto label_3acc8c;
    }
    ctx->pc = 0x3ACC84u;
    SET_GPR_U32(ctx, 31, 0x3ACC8Cu);
    ctx->pc = 0x3ACC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACC84u;
    // 0x3acc88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3ACC84u, 0x3ACC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACC8Cu;
label_3acc8c:
    // 0x3acc8c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3acc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3acc90:
    // 0x3acc90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3acc90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3acc94:
    // 0x3acc94: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3acc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3acc98:
    // 0x3acc98: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3acc98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3acc9c:
    // 0x3acc9c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3acc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3acca0:
    // 0x3acca0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3acca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3acca4:
    // 0x3acca4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3acca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3acca8:
    // 0x3acca8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3acca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3accac:
    // 0x3accac: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3accacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3accb0:
    // 0x3accb0: 0xc0ea12a  jal         func_3A84A8
label_3accb4:
    if (ctx->pc == 0x3ACCB4u) {
        ctx->pc = 0x3ACCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACCB0u;
        // 0x3accb4: 0x3c170001  lui         $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACCB8u;
        goto label_3accb8;
    }
    ctx->pc = 0x3ACCB0u;
    SET_GPR_U32(ctx, 31, 0x3ACCB8u);
    ctx->pc = 0x3ACCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACCB0u;
    // 0x3accb4: 0x3c170001  lui         $s7, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3ACCB0u, 0x3ACCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACCB8u;
label_3accb8:
    // 0x3accb8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3accb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3accbc:
    // 0x3accbc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3accbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3accc0:
    // 0x3accc0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3accc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3accc4:
    // 0x3accc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3accc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3accc8:
    // 0x3accc8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3accc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3acccc:
    // 0x3acccc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3accccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3accd0:
    // 0x3accd0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3accd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3accd4:
    // 0x3accd4: 0x4600a606  mov.s       $f24, $f20
    ctx->pc = 0x3accd4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[20]);
label_3accd8:
    // 0x3accd8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3accd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3accdc:
    // 0x3accdc: 0xc0ea146  jal         func_3A8518
label_3acce0:
    if (ctx->pc == 0x3ACCE0u) {
        ctx->pc = 0x3ACCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACCDCu;
        // 0x3acce0: 0x269e0010  addiu       $fp, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACCE4u;
        goto label_3acce4;
    }
    ctx->pc = 0x3ACCDCu;
    SET_GPR_U32(ctx, 31, 0x3ACCE4u);
    ctx->pc = 0x3ACCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACCDCu;
    // 0x3acce0: 0x269e0010  addiu       $fp, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3ACCDCu, 0x3ACCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACCE4u;
label_3acce4:
    // 0x3acce4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3acce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3acce8:
    // 0x3acce8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3acce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3accec:
    // 0x3accec: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x3accecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_3accf0:
    // 0x3accf0: 0xc0ea146  jal         func_3A8518
label_3accf4:
    if (ctx->pc == 0x3ACCF4u) {
        ctx->pc = 0x3ACCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACCF0u;
        // 0x3accf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACCF8u;
        goto label_3accf8;
    }
    ctx->pc = 0x3ACCF0u;
    SET_GPR_U32(ctx, 31, 0x3ACCF8u);
    ctx->pc = 0x3ACCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACCF0u;
    // 0x3accf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3ACCF0u, 0x3ACCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACCF8u;
label_3accf8:
    // 0x3accf8: 0x36f70018  ori         $s7, $s7, 0x18
    ctx->pc = 0x3accf8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)24);
label_3accfc:
    // 0x3accfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3accfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3acd00:
    // 0x3acd00: 0xc0ea14c  jal         func_3A8530
label_3acd04:
    if (ctx->pc == 0x3ACD04u) {
        ctx->pc = 0x3ACD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD00u;
        // 0x3acd04: 0x24150009  addiu       $s5, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACD08u;
        goto label_3acd08;
    }
    ctx->pc = 0x3ACD00u;
    SET_GPR_U32(ctx, 31, 0x3ACD08u);
    ctx->pc = 0x3ACD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACD00u;
    // 0x3acd04: 0x24150009  addiu       $s5, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3ACD00u, 0x3ACD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACD08u;
label_3acd08:
    // 0x3acd08: 0xc0ea14c  jal         func_3A8530
label_3acd0c:
    if (ctx->pc == 0x3ACD0Cu) {
        ctx->pc = 0x3ACD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD08u;
        // 0x3acd0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACD10u;
        goto label_3acd10;
    }
    ctx->pc = 0x3ACD08u;
    SET_GPR_U32(ctx, 31, 0x3ACD10u);
    ctx->pc = 0x3ACD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACD08u;
    // 0x3acd0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3ACD08u, 0x3ACD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACD10u;
label_3acd10:
    // 0x3acd10: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x3acd10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3acd14:
    // 0x3acd14: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3acd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3acd18:
    // 0x3acd18: 0xc0e92f4  jal         func_3A4BD0
label_3acd1c:
    if (ctx->pc == 0x3ACD1Cu) {
        ctx->pc = 0x3ACD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD18u;
        // 0x3acd1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACD20u;
        goto label_3acd20;
    }
    ctx->pc = 0x3ACD18u;
    SET_GPR_U32(ctx, 31, 0x3ACD20u);
    ctx->pc = 0x3ACD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACD18u;
    // 0x3acd1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3ACD18u, 0x3ACD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACD20u;
label_3acd20:
    // 0x3acd20: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3acd20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3acd24:
    // 0x3acd24: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3acd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3acd28:
    // 0x3acd28: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3acd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3acd2c:
    // 0x3acd2c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3acd2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3acd30:
    // 0x3acd30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3acd30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3acd34:
    // 0x3acd34: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3acd34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3acd38:
    // 0x3acd38: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3acd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3acd3c:
    // 0x3acd3c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3acd3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3acd40:
    // 0x3acd40: 0xc0cd518  jal         func_335460
label_3acd44:
    if (ctx->pc == 0x3ACD44u) {
        ctx->pc = 0x3ACD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD40u;
        // 0x3acd44: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACD48u;
        goto label_3acd48;
    }
    ctx->pc = 0x3ACD40u;
    SET_GPR_U32(ctx, 31, 0x3ACD48u);
    ctx->pc = 0x3ACD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACD40u;
    // 0x3acd44: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ACD40u, 0x3ACD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACD48u;
label_3acd48:
    // 0x3acd48: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3acd48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3acd4c:
    // 0x3acd4c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3acd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3acd50:
    // 0x3acd50: 0xc136b24  jal         func_4DAC90
label_3acd54:
    if (ctx->pc == 0x3ACD54u) {
        ctx->pc = 0x3ACD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD50u;
        // 0x3acd54: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACD58u;
        goto label_3acd58;
    }
    ctx->pc = 0x3ACD50u;
    SET_GPR_U32(ctx, 31, 0x3ACD58u);
    ctx->pc = 0x3ACD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACD50u;
    // 0x3acd54: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3ACD50u, 0x3ACD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACD58u;
label_3acd58:
    // 0x3acd58: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3acd58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3acd5c:
    // 0x3acd5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3acd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3acd60:
    // 0x3acd60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3acd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3acd64:
    // 0x3acd64: 0xc0f1778  jal         func_3C5DE0
label_3acd68:
    if (ctx->pc == 0x3ACD68u) {
        ctx->pc = 0x3ACD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD64u;
        // 0x3acd68: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACD6Cu;
        goto label_3acd6c;
    }
    ctx->pc = 0x3ACD64u;
    SET_GPR_U32(ctx, 31, 0x3ACD6Cu);
    ctx->pc = 0x3ACD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACD64u;
    // 0x3acd68: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5DE0u, 0x3ACD64u, 0x3ACD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACD6Cu;
label_3acd6c:
    // 0x3acd6c: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x3acd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
label_3acd70:
    // 0x3acd70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3acd70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3acd74:
    // 0x3acd74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3acd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3acd78:
    // 0x3acd78: 0xc0f15f6  jal         func_3C57D8
label_3acd7c:
    if (ctx->pc == 0x3ACD7Cu) {
        ctx->pc = 0x3ACD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD78u;
        // 0x3acd7c: 0x2405ff64  addiu       $a1, $zero, -0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACD80u;
        goto label_3acd80;
    }
    ctx->pc = 0x3ACD78u;
    SET_GPR_U32(ctx, 31, 0x3ACD80u);
    ctx->pc = 0x3ACD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACD78u;
    // 0x3acd7c: 0x2405ff64  addiu       $a1, $zero, -0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3ACD78u, 0x3ACD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACD80u;
label_3acd80:
    // 0x3acd80: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x3acd80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3acd84:
    // 0x3acd84: 0x3c066b66  lui         $a2, 0x6B66
    ctx->pc = 0x3acd84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27494 << 16));
label_3acd88:
    // 0x3acd88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3acd88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3acd8c:
    // 0x3acd8c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3acd8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3acd90:
    // 0x3acd90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3acd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3acd94:
    // 0x3acd94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3acd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3acd98:
    // 0x3acd98: 0xc0f1658  jal         func_3C5960
label_3acd9c:
    if (ctx->pc == 0x3ACD9Cu) {
        ctx->pc = 0x3ACD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD98u;
        // 0x3acd9c: 0x34c66080  ori         $a2, $a2, 0x6080 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24704);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACDA0u;
        goto label_3acda0;
    }
    ctx->pc = 0x3ACD98u;
    SET_GPR_U32(ctx, 31, 0x3ACDA0u);
    ctx->pc = 0x3ACD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACD98u;
    // 0x3acd9c: 0x34c66080  ori         $a2, $a2, 0x6080 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x3ACD98u, 0x3ACDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACDA0u;
label_3acda0:
    // 0x3acda0: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x3acda0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3acda4:
    // 0x3acda4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3acda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3acda8:
    // 0x3acda8: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3acda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3acdac:
    // 0x3acdac: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3acdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3acdb0:
    // 0x3acdb0: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x3acdb0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3acdb4:
    // 0x3acdb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3acdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3acdb8:
    // 0x3acdb8: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3acdb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3acdbc:
    // 0x3acdbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3acdbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3acdc0:
    // 0x3acdc0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3acdc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3acdc4:
    // 0x3acdc4: 0xc136b18  jal         func_4DAC60
label_3acdc8:
    if (ctx->pc == 0x3ACDC8u) {
        ctx->pc = 0x3ACDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACDC4u;
        // 0x3acdc8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACDCCu;
        goto label_3acdcc;
    }
    ctx->pc = 0x3ACDC4u;
    SET_GPR_U32(ctx, 31, 0x3ACDCCu);
    ctx->pc = 0x3ACDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACDC4u;
    // 0x3acdc8: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3ACDC4u, 0x3ACDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACDCCu;
label_3acdcc:
    // 0x3acdcc: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3acdccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3acdd0:
    // 0x3acdd0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3acdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3acdd4:
    // 0x3acdd4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3acdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3acdd8:
    // 0x3acdd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3acdd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3acddc:
    // 0x3acddc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3acddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3acde0:
    // 0x3acde0: 0xc136b24  jal         func_4DAC90
label_3acde4:
    if (ctx->pc == 0x3ACDE4u) {
        ctx->pc = 0x3ACDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACDE0u;
        // 0x3acde4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACDE8u;
        goto label_3acde8;
    }
    ctx->pc = 0x3ACDE0u;
    SET_GPR_U32(ctx, 31, 0x3ACDE8u);
    ctx->pc = 0x3ACDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACDE0u;
    // 0x3acde4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3ACDE0u, 0x3ACDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACDE8u;
label_3acde8:
    // 0x3acde8: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3acde8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3acdec:
    // 0x3acdec: 0x3c072c25  lui         $a3, 0x2C25
    ctx->pc = 0x3acdecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)11301 << 16));
label_3acdf0:
    // 0x3acdf0: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x3acdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_3acdf4:
    // 0x3acdf4: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3acdf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3acdf8:
    // 0x3acdf8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3acdf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3acdfc:
    // 0x3acdfc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3acdfcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3ace00:
    // 0x3ace00: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3ace00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3ace04:
    // 0x3ace04: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3ace04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3ace08:
    // 0x3ace08: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3ace08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3ace0c:
    // 0x3ace0c: 0x34e725ff  ori         $a3, $a3, 0x25FF
    ctx->pc = 0x3ace0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)9727);
label_3ace10:
    // 0x3ace10: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3ace10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3ace14:
    // 0x3ace14: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x3ace14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_3ace18:
    // 0x3ace18: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3ace18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3ace1c:
    // 0x3ace1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ace1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ace20:
    // 0x3ace20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ace20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ace24:
    // 0x3ace24: 0xc0f16c0  jal         func_3C5B00
label_3ace28:
    if (ctx->pc == 0x3ACE28u) {
        ctx->pc = 0x3ACE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE24u;
        // 0x3ace28: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACE2Cu;
        goto label_3ace2c;
    }
    ctx->pc = 0x3ACE24u;
    SET_GPR_U32(ctx, 31, 0x3ACE2Cu);
    ctx->pc = 0x3ACE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACE24u;
    // 0x3ace28: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3ACE24u, 0x3ACE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACE2Cu;
label_3ace2c:
    // 0x3ace2c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3ace2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3ace30:
    // 0x3ace30: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3ace30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3ace34:
    // 0x3ace34: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3ace34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3ace38:
    // 0x3ace38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ace38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ace3c:
    // 0x3ace3c: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x3ace3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3ace40:
    // 0x3ace40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ace40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ace44:
    // 0x3ace44: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3ace44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3ace48:
    // 0x3ace48: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3ace48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ace4c:
    // 0x3ace4c: 0xc136b18  jal         func_4DAC60
label_3ace50:
    if (ctx->pc == 0x3ACE50u) {
        ctx->pc = 0x3ACE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE4Cu;
        // 0x3ace50: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACE54u;
        goto label_3ace54;
    }
    ctx->pc = 0x3ACE4Cu;
    SET_GPR_U32(ctx, 31, 0x3ACE54u);
    ctx->pc = 0x3ACE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACE4Cu;
    // 0x3ace50: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3ACE4Cu, 0x3ACE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACE54u;
label_3ace54:
    // 0x3ace54: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3ace54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ace58:
    // 0x3ace58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ace58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ace5c:
    // 0x3ace5c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3ace5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3ace60:
    // 0x3ace60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ace60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ace64:
    // 0x3ace64: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3ace64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3ace68:
    // 0x3ace68: 0xc136b24  jal         func_4DAC90
label_3ace6c:
    if (ctx->pc == 0x3ACE6Cu) {
        ctx->pc = 0x3ACE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE68u;
        // 0x3ace6c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACE70u;
        goto label_3ace70;
    }
    ctx->pc = 0x3ACE68u;
    SET_GPR_U32(ctx, 31, 0x3ACE70u);
    ctx->pc = 0x3ACE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACE68u;
    // 0x3ace6c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3ACE68u, 0x3ACE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACE70u;
label_3ace70:
    // 0x3ace70: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3ace70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ace74:
    // 0x3ace74: 0x3c077570  lui         $a3, 0x7570
    ctx->pc = 0x3ace74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30064 << 16));
label_3ace78:
    // 0x3ace78: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x3ace78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_3ace7c:
    // 0x3ace7c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3ace7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3ace80:
    // 0x3ace80: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3ace80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3ace84:
    // 0x3ace84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ace84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ace88:
    // 0x3ace88: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x3ace88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
label_3ace8c:
    // 0x3ace8c: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x3ace8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_3ace90:
    // 0x3ace90: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3ace90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3ace94:
    // 0x3ace94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ace94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ace98:
    // 0x3ace98: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3ace98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3ace9c:
    // 0x3ace9c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3ace9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3acea0:
    // 0x3acea0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3acea0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3acea4:
    // 0x3acea4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3acea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3acea8:
    // 0x3acea8: 0x34e76aff  ori         $a3, $a3, 0x6AFF
    ctx->pc = 0x3acea8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)27391);
label_3aceac:
    // 0x3aceac: 0xc0f16c0  jal         func_3C5B00
label_3aceb0:
    if (ctx->pc == 0x3ACEB0u) {
        ctx->pc = 0x3ACEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEACu;
        // 0x3aceb0: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACEB4u;
        goto label_3aceb4;
    }
    ctx->pc = 0x3ACEACu;
    SET_GPR_U32(ctx, 31, 0x3ACEB4u);
    ctx->pc = 0x3ACEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACEACu;
    // 0x3aceb0: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3ACEACu, 0x3ACEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACEB4u;
label_3aceb4:
    // 0x3aceb4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3aceb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3aceb8:
    // 0x3aceb8: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x3aceb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3acebc:
    // 0x3acebc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3acebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3acec0:
    // 0x3acec0: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3acec0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3acec4:
    // 0x3acec4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3acec4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_3acec8:
    // 0x3acec8: 0xc0cd518  jal         func_335460
label_3acecc:
    if (ctx->pc == 0x3ACECCu) {
        ctx->pc = 0x3ACECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEC8u;
        // 0x3acecc: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACED0u;
        goto label_3aced0;
    }
    ctx->pc = 0x3ACEC8u;
    SET_GPR_U32(ctx, 31, 0x3ACED0u);
    ctx->pc = 0x3ACECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACEC8u;
    // 0x3acecc: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ACEC8u, 0x3ACED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACED0u;
label_3aced0:
    // 0x3aced0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3aced0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3aced4:
    // 0x3aced4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3aced4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3aced8:
    // 0x3aced8: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3aced8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3acedc:
    // 0x3acedc: 0xc0cd518  jal         func_335460
label_3acee0:
    if (ctx->pc == 0x3ACEE0u) {
        ctx->pc = 0x3ACEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEDCu;
        // 0x3acee0: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACEE4u;
        goto label_3acee4;
    }
    ctx->pc = 0x3ACEDCu;
    SET_GPR_U32(ctx, 31, 0x3ACEE4u);
    ctx->pc = 0x3ACEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACEDCu;
    // 0x3acee0: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ACEDCu, 0x3ACEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACEE4u;
label_3acee4:
    // 0x3acee4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3acee4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3acee8:
    // 0x3acee8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3acee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3aceec:
    // 0x3aceec: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3aceecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_3acef0:
    // 0x3acef0: 0xc0cd518  jal         func_335460
label_3acef4:
    if (ctx->pc == 0x3ACEF4u) {
        ctx->pc = 0x3ACEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEF0u;
        // 0x3acef4: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACEF8u;
        goto label_3acef8;
    }
    ctx->pc = 0x3ACEF0u;
    SET_GPR_U32(ctx, 31, 0x3ACEF8u);
    ctx->pc = 0x3ACEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACEF0u;
    // 0x3acef4: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ACEF0u, 0x3ACEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACEF8u;
label_3acef8:
    // 0x3acef8: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x3acef8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3acefc:
    // 0x3acefc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3acefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3acf00:
    // 0x3acf00: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x3acf00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3acf04:
    // 0x3acf04: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3acf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3acf08:
    // 0x3acf08: 0xe658000c  swc1        $f24, 0xC($s2)
    ctx->pc = 0x3acf08u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3acf0c:
    // 0x3acf0c: 0x3c013e24  lui         $at, 0x3E24
    ctx->pc = 0x3acf0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15908 << 16));
label_3acf10:
    // 0x3acf10: 0x3421dd2f  ori         $at, $at, 0xDD2F
    ctx->pc = 0x3acf10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56623);
label_3acf14:
    // 0x3acf14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3acf14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3acf18:
    // 0x3acf18: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3acf18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3acf1c:
    // 0x3acf1c: 0x3c013e90  lui         $at, 0x3E90
    ctx->pc = 0x3acf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16016 << 16));
label_3acf20:
    // 0x3acf20: 0x3421624e  ori         $at, $at, 0x624E
    ctx->pc = 0x3acf20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25166);
label_3acf24:
    // 0x3acf24: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3acf24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3acf28:
    // 0x3acf28: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3acf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3acf2c:
    // 0x3acf2c: 0xc0cd518  jal         func_335460
label_3acf30:
    if (ctx->pc == 0x3ACF30u) {
        ctx->pc = 0x3ACF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF2Cu;
        // 0x3acf30: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACF34u;
        goto label_3acf34;
    }
    ctx->pc = 0x3ACF2Cu;
    SET_GPR_U32(ctx, 31, 0x3ACF34u);
    ctx->pc = 0x3ACF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACF2Cu;
    // 0x3acf30: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ACF2Cu, 0x3ACF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACF34u;
label_3acf34:
    // 0x3acf34: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3acf34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3acf38:
    // 0x3acf38: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3acf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3acf3c:
    // 0x3acf3c: 0xc0cd4ee  jal         func_3353B8
label_3acf40:
    if (ctx->pc == 0x3ACF40u) {
        ctx->pc = 0x3ACF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF3Cu;
        // 0x3acf40: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACF44u;
        goto label_3acf44;
    }
    ctx->pc = 0x3ACF3Cu;
    SET_GPR_U32(ctx, 31, 0x3ACF44u);
    ctx->pc = 0x3ACF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACF3Cu;
    // 0x3acf40: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3ACF3Cu, 0x3ACF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACF44u;
label_3acf44:
    // 0x3acf44: 0x3c072a2d  lui         $a3, 0x2A2D
    ctx->pc = 0x3acf44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)10797 << 16));
label_3acf48:
    // 0x3acf48: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3acf48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3acf4c:
    // 0x3acf4c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3acf4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3acf50:
    // 0x3acf50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3acf50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3acf54:
    // 0x3acf54: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3acf54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3acf58:
    // 0x3acf58: 0x574021  addu        $t0, $v0, $s7
    ctx->pc = 0x3acf58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3acf5c:
    // 0x3acf5c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3acf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3acf60:
    // 0x3acf60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3acf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3acf64:
    // 0x3acf64: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x3acf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3acf68:
    // 0x3acf68: 0x34e726ff  ori         $a3, $a3, 0x26FF
    ctx->pc = 0x3acf68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)9983);
label_3acf6c:
    // 0x3acf6c: 0xc0f1618  jal         func_3C5860
label_3acf70:
    if (ctx->pc == 0x3ACF70u) {
        ctx->pc = 0x3ACF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF6Cu;
        // 0x3acf70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACF74u;
        goto label_3acf74;
    }
    ctx->pc = 0x3ACF6Cu;
    SET_GPR_U32(ctx, 31, 0x3ACF74u);
    ctx->pc = 0x3ACF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACF6Cu;
    // 0x3acf70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x3ACF6Cu, 0x3ACF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACF74u;
label_3acf74:
    // 0x3acf74: 0x6a1ffd2  bgez        $s5, . + 4 + (-0x2E << 2)
label_3acf78:
    if (ctx->pc == 0x3ACF78u) {
        ctx->pc = 0x3ACF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF74u;
        // 0x3acf78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACF7Cu;
        goto label_3acf7c;
    }
    ctx->pc = 0x3ACF74u;
    {
        const bool branch_taken_0x3acf74 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x3ACF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF74u;
        // 0x3acf78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acf74) {
            ctx->pc = 0x3ACEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3acec0;
        }
    }
    ctx->pc = 0x3ACF7Cu;
label_3acf7c:
    // 0x3acf7c: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x3acf7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
label_3acf80:
    // 0x3acf80: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x3acf80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3acf84:
    // 0x3acf84: 0x4600cdc6  mov.s       $f23, $f25
    ctx->pc = 0x3acf84u;
    ctx->f[23] = FPU_MOV_S(ctx->f[25]);
label_3acf88:
    // 0x3acf88: 0x4600c586  mov.s       $f22, $f24
    ctx->pc = 0x3acf88u;
    ctx->f[22] = FPU_MOV_S(ctx->f[24]);
label_3acf8c:
    // 0x3acf8c: 0x36310018  ori         $s1, $s1, 0x18
    ctx->pc = 0x3acf8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)24);
label_3acf90:
    // 0x3acf90: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x3acf90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3acf94:
    // 0x3acf94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3acf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3acf98:
    // 0x3acf98: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3acf98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3acf9c:
    // 0x3acf9c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3acf9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3acfa0:
    // 0x3acfa0: 0xc0cd518  jal         func_335460
label_3acfa4:
    if (ctx->pc == 0x3ACFA4u) {
        ctx->pc = 0x3ACFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFA0u;
        // 0x3acfa4: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACFA8u;
        goto label_3acfa8;
    }
    ctx->pc = 0x3ACFA0u;
    SET_GPR_U32(ctx, 31, 0x3ACFA8u);
    ctx->pc = 0x3ACFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACFA0u;
    // 0x3acfa4: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ACFA0u, 0x3ACFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACFA8u;
label_3acfa8:
    // 0x3acfa8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3acfa8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3acfac:
    // 0x3acfac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3acfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3acfb0:
    // 0x3acfb0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3acfb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3acfb4:
    // 0x3acfb4: 0xc0cd518  jal         func_335460
label_3acfb8:
    if (ctx->pc == 0x3ACFB8u) {
        ctx->pc = 0x3ACFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFB4u;
        // 0x3acfb8: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACFBCu;
        goto label_3acfbc;
    }
    ctx->pc = 0x3ACFB4u;
    SET_GPR_U32(ctx, 31, 0x3ACFBCu);
    ctx->pc = 0x3ACFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACFB4u;
    // 0x3acfb8: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ACFB4u, 0x3ACFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACFBCu;
label_3acfbc:
    // 0x3acfbc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3acfbcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3acfc0:
    // 0x3acfc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3acfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3acfc4:
    // 0x3acfc4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3acfc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3acfc8:
    // 0x3acfc8: 0xc0cd518  jal         func_335460
label_3acfcc:
    if (ctx->pc == 0x3ACFCCu) {
        ctx->pc = 0x3ACFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFC8u;
        // 0x3acfcc: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACFD0u;
        goto label_3acfd0;
    }
    ctx->pc = 0x3ACFC8u;
    SET_GPR_U32(ctx, 31, 0x3ACFD0u);
    ctx->pc = 0x3ACFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACFC8u;
    // 0x3acfcc: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ACFC8u, 0x3ACFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACFD0u;
label_3acfd0:
    // 0x3acfd0: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x3acfd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3acfd4:
    // 0x3acfd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3acfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3acfd8:
    // 0x3acfd8: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x3acfd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3acfdc:
    // 0x3acfdc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3acfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3acfe0:
    // 0x3acfe0: 0xe656000c  swc1        $f22, 0xC($s2)
    ctx->pc = 0x3acfe0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3acfe4:
    // 0x3acfe4: 0x3c013e24  lui         $at, 0x3E24
    ctx->pc = 0x3acfe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15908 << 16));
label_3acfe8:
    // 0x3acfe8: 0x3421dd2f  ori         $at, $at, 0xDD2F
    ctx->pc = 0x3acfe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56623);
label_3acfec:
    // 0x3acfec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3acfecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3acff0:
    // 0x3acff0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3acff0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3acff4:
    // 0x3acff4: 0x3c013e90  lui         $at, 0x3E90
    ctx->pc = 0x3acff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16016 << 16));
label_3acff8:
    // 0x3acff8: 0x3421624e  ori         $at, $at, 0x624E
    ctx->pc = 0x3acff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25166);
label_3acffc:
    // 0x3acffc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3acffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ad000:
    // 0x3ad000: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3ad000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3ad004:
    // 0x3ad004: 0xc0cd518  jal         func_335460
label_3ad008:
    if (ctx->pc == 0x3AD008u) {
        ctx->pc = 0x3AD008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD004u;
        // 0x3ad008: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD00Cu;
        goto label_3ad00c;
    }
    ctx->pc = 0x3AD004u;
    SET_GPR_U32(ctx, 31, 0x3AD00Cu);
    ctx->pc = 0x3AD008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD004u;
    // 0x3ad008: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AD004u, 0x3AD00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD00Cu;
label_3ad00c:
    // 0x3ad00c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ad00cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ad010:
    // 0x3ad010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad014:
    // 0x3ad014: 0xc0cd4ee  jal         func_3353B8
label_3ad018:
    if (ctx->pc == 0x3AD018u) {
        ctx->pc = 0x3AD018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD014u;
        // 0x3ad018: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD01Cu;
        goto label_3ad01c;
    }
    ctx->pc = 0x3AD014u;
    SET_GPR_U32(ctx, 31, 0x3AD01Cu);
    ctx->pc = 0x3AD018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD014u;
    // 0x3ad018: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3AD014u, 0x3AD01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD01Cu;
label_3ad01c:
    // 0x3ad01c: 0x3c076057  lui         $a3, 0x6057
    ctx->pc = 0x3ad01cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24663 << 16));
label_3ad020:
    // 0x3ad020: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3ad020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3ad024:
    // 0x3ad024: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ad024u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3ad028:
    // 0x3ad028: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ad028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ad02c:
    // 0x3ad02c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3ad02cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3ad030:
    // 0x3ad030: 0x514021  addu        $t0, $v0, $s1
    ctx->pc = 0x3ad030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3ad034:
    // 0x3ad034: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3ad034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3ad038:
    // 0x3ad038: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ad038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ad03c:
    // 0x3ad03c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x3ad03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3ad040:
    // 0x3ad040: 0x34e751ff  ori         $a3, $a3, 0x51FF
    ctx->pc = 0x3ad040u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)20991);
label_3ad044:
    // 0x3ad044: 0xc0f1618  jal         func_3C5860
label_3ad048:
    if (ctx->pc == 0x3AD048u) {
        ctx->pc = 0x3AD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD044u;
        // 0x3ad048: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD04Cu;
        goto label_3ad04c;
    }
    ctx->pc = 0x3AD044u;
    SET_GPR_U32(ctx, 31, 0x3AD04Cu);
    ctx->pc = 0x3AD048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD044u;
    // 0x3ad048: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x3AD044u, 0x3AD04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD04Cu;
label_3ad04c:
    // 0x3ad04c: 0x6a1ffd2  bgez        $s5, . + 4 + (-0x2E << 2)
label_3ad050:
    if (ctx->pc == 0x3AD050u) {
        ctx->pc = 0x3AD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD04Cu;
        // 0x3ad050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD054u;
        goto label_3ad054;
    }
    ctx->pc = 0x3AD04Cu;
    {
        const bool branch_taken_0x3ad04c = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x3AD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD04Cu;
        // 0x3ad050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad04c) {
            ctx->pc = 0x3ACF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3acf98;
        }
    }
    ctx->pc = 0x3AD054u;
label_3ad054:
    // 0x3ad054: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x3ad054u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
label_3ad058:
    // 0x3ad058: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x3ad058u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3ad05c:
    // 0x3ad05c: 0x36310018  ori         $s1, $s1, 0x18
    ctx->pc = 0x3ad05cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)24);
label_3ad060:
    // 0x3ad060: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3ad060u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3ad064:
    // 0x3ad064: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3ad064u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3ad068:
    // 0x3ad068: 0xc0cd518  jal         func_335460
label_3ad06c:
    if (ctx->pc == 0x3AD06Cu) {
        ctx->pc = 0x3AD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD068u;
        // 0x3ad06c: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD070u;
        goto label_3ad070;
    }
    ctx->pc = 0x3AD068u;
    SET_GPR_U32(ctx, 31, 0x3AD070u);
    ctx->pc = 0x3AD06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD068u;
    // 0x3ad06c: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AD068u, 0x3AD070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD070u;
label_3ad070:
    // 0x3ad070: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3ad070u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3ad074:
    // 0x3ad074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad078:
    // 0x3ad078: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3ad078u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3ad07c:
    // 0x3ad07c: 0xc0cd518  jal         func_335460
label_3ad080:
    if (ctx->pc == 0x3AD080u) {
        ctx->pc = 0x3AD080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD07Cu;
        // 0x3ad080: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD084u;
        goto label_3ad084;
    }
    ctx->pc = 0x3AD07Cu;
    SET_GPR_U32(ctx, 31, 0x3AD084u);
    ctx->pc = 0x3AD080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD07Cu;
    // 0x3ad080: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AD07Cu, 0x3AD084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD084u;
label_3ad084:
    // 0x3ad084: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ad084u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ad088:
    // 0x3ad088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad08c:
    // 0x3ad08c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3ad08cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3ad090:
    // 0x3ad090: 0xc0cd518  jal         func_335460
label_3ad094:
    if (ctx->pc == 0x3AD094u) {
        ctx->pc = 0x3AD094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD090u;
        // 0x3ad094: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD098u;
        goto label_3ad098;
    }
    ctx->pc = 0x3AD090u;
    SET_GPR_U32(ctx, 31, 0x3AD098u);
    ctx->pc = 0x3AD094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD090u;
    // 0x3ad094: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AD090u, 0x3AD098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD098u;
label_3ad098:
    // 0x3ad098: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x3ad098u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3ad09c:
    // 0x3ad09c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad0a0:
    // 0x3ad0a0: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x3ad0a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3ad0a4:
    // 0x3ad0a4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3ad0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3ad0a8:
    // 0x3ad0a8: 0xe656000c  swc1        $f22, 0xC($s2)
    ctx->pc = 0x3ad0a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3ad0ac:
    // 0x3ad0ac: 0x3c013e1a  lui         $at, 0x3E1A
    ctx->pc = 0x3ad0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15898 << 16));
label_3ad0b0:
    // 0x3ad0b0: 0x34219fbe  ori         $at, $at, 0x9FBE
    ctx->pc = 0x3ad0b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40894);
label_3ad0b4:
    // 0x3ad0b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ad0b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ad0b8:
    // 0x3ad0b8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3ad0b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ad0bc:
    // 0x3ad0bc: 0x3c013e81  lui         $at, 0x3E81
    ctx->pc = 0x3ad0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16001 << 16));
label_3ad0c0:
    // 0x3ad0c0: 0x34210625  ori         $at, $at, 0x625
    ctx->pc = 0x3ad0c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1573);
label_3ad0c4:
    // 0x3ad0c4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ad0c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ad0c8:
    // 0x3ad0c8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3ad0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3ad0cc:
    // 0x3ad0cc: 0xc0cd518  jal         func_335460
label_3ad0d0:
    if (ctx->pc == 0x3AD0D0u) {
        ctx->pc = 0x3AD0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD0CCu;
        // 0x3ad0d0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD0D4u;
        goto label_3ad0d4;
    }
    ctx->pc = 0x3AD0CCu;
    SET_GPR_U32(ctx, 31, 0x3AD0D4u);
    ctx->pc = 0x3AD0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD0CCu;
    // 0x3ad0d0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AD0CCu, 0x3AD0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD0D4u;
label_3ad0d4:
    // 0x3ad0d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ad0d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ad0d8:
    // 0x3ad0d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad0dc:
    // 0x3ad0dc: 0xc0cd4ee  jal         func_3353B8
label_3ad0e0:
    if (ctx->pc == 0x3AD0E0u) {
        ctx->pc = 0x3AD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD0DCu;
        // 0x3ad0e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD0E4u;
        goto label_3ad0e4;
    }
    ctx->pc = 0x3AD0DCu;
    SET_GPR_U32(ctx, 31, 0x3AD0E4u);
    ctx->pc = 0x3AD0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD0DCu;
    // 0x3ad0e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3AD0DCu, 0x3AD0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD0E4u;
label_3ad0e4:
    // 0x3ad0e4: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x3ad0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
label_3ad0e8:
    // 0x3ad0e8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3ad0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3ad0ec:
    // 0x3ad0ec: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ad0ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3ad0f0:
    // 0x3ad0f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ad0f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ad0f4:
    // 0x3ad0f4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3ad0f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3ad0f8:
    // 0x3ad0f8: 0x514021  addu        $t0, $v0, $s1
    ctx->pc = 0x3ad0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3ad0fc:
    // 0x3ad0fc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3ad0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3ad100:
    // 0x3ad100: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ad100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ad104:
    // 0x3ad104: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x3ad104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3ad108:
    // 0x3ad108: 0x34e780ff  ori         $a3, $a3, 0x80FF
    ctx->pc = 0x3ad108u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33023);
label_3ad10c:
    // 0x3ad10c: 0xc0f1618  jal         func_3C5860
label_3ad110:
    if (ctx->pc == 0x3AD110u) {
        ctx->pc = 0x3AD110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD10Cu;
        // 0x3ad110: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD114u;
        goto label_3ad114;
    }
    ctx->pc = 0x3AD10Cu;
    SET_GPR_U32(ctx, 31, 0x3AD114u);
    ctx->pc = 0x3AD110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD10Cu;
    // 0x3ad110: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x3AD10Cu, 0x3AD114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD114u;
label_3ad114:
    // 0x3ad114: 0x6a1ffd2  bgez        $s5, . + 4 + (-0x2E << 2)
label_3ad118:
    if (ctx->pc == 0x3AD118u) {
        ctx->pc = 0x3AD118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD114u;
        // 0x3ad118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD11Cu;
        goto label_3ad11c;
    }
    ctx->pc = 0x3AD114u;
    {
        const bool branch_taken_0x3ad114 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x3AD118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD114u;
        // 0x3ad118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad114) {
            ctx->pc = 0x3AD060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad060;
        }
    }
    ctx->pc = 0x3AD11Cu;
label_3ad11c:
    // 0x3ad11c: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x3ad11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_3ad120:
    // 0x3ad120: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3ad120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3ad124:
    // 0x3ad124: 0x106200b3  beq         $v1, $v0, . + 4 + (0xB3 << 2)
label_3ad128:
    if (ctx->pc == 0x3AD128u) {
        ctx->pc = 0x3AD128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD124u;
        // 0x3ad128: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD12Cu;
        goto label_3ad12c;
    }
    ctx->pc = 0x3AD124u;
    {
        const bool branch_taken_0x3ad124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AD128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD124u;
        // 0x3ad128: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad124) {
            ctx->pc = 0x3AD3F4u;
            goto label_3ad3f4;
        }
    }
    ctx->pc = 0x3AD12Cu;
label_3ad12c:
    // 0x3ad12c: 0x8e860054  lw          $a2, 0x54($s4)
    ctx->pc = 0x3ad12cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3ad130:
    // 0x3ad130: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ad130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ad134:
    // 0x3ad134: 0x8e8300c8  lw          $v1, 0xC8($s4)
    ctx->pc = 0x3ad134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_3ad138:
    // 0x3ad138: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3ad138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3ad13c:
    // 0x3ad13c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x3ad13cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_3ad140:
    // 0x3ad140: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ad140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ad144:
    // 0x3ad144: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ad144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ad148:
    // 0x3ad148: 0xae8300cc  sw          $v1, 0xCC($s4)
    ctx->pc = 0x3ad148u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 204), GPR_U32(ctx, 3));
label_3ad14c:
    // 0x3ad14c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ad14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ad150:
    // 0x3ad150: 0xc0eb180  jal         func_3AC600
label_3ad154:
    if (ctx->pc == 0x3AD154u) {
        ctx->pc = 0x3AD154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD150u;
        // 0x3ad154: 0xae860054  sw          $a2, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD158u;
        goto label_3ad158;
    }
    ctx->pc = 0x3AD150u;
    SET_GPR_U32(ctx, 31, 0x3AD158u);
    ctx->pc = 0x3AD154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD150u;
    // 0x3ad154: 0xae860054  sw          $a2, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC600u, 0x3AD150u, 0x3AD158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD158u;
label_3ad158:
    // 0x3ad158: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_3ad15c:
    if (ctx->pc == 0x3AD15Cu) {
        ctx->pc = 0x3AD15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD158u;
        // 0x3ad15c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD160u;
        goto label_3ad160;
    }
    ctx->pc = 0x3AD158u;
    {
        const bool branch_taken_0x3ad158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD158u;
        // 0x3ad15c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad158) {
            ctx->pc = 0x3AD3F8u;
            goto label_3ad3f8;
        }
    }
    ctx->pc = 0x3AD160u;
label_3ad160:
    // 0x3ad160: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ad160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ad164:
    // 0x3ad164: 0xc0ea12a  jal         func_3A84A8
label_3ad168:
    if (ctx->pc == 0x3AD168u) {
        ctx->pc = 0x3AD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD164u;
        // 0x3ad168: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD16Cu;
        goto label_3ad16c;
    }
    ctx->pc = 0x3AD164u;
    SET_GPR_U32(ctx, 31, 0x3AD16Cu);
    ctx->pc = 0x3AD168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD164u;
    // 0x3ad168: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AD164u, 0x3AD16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD16Cu;
label_3ad16c:
    // 0x3ad16c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ad16cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ad170:
    // 0x3ad170: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ad170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ad174:
    // 0x3ad174: 0xc0ea14c  jal         func_3A8530
label_3ad178:
    if (ctx->pc == 0x3AD178u) {
        ctx->pc = 0x3AD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD174u;
        // 0x3ad178: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD17Cu;
        goto label_3ad17c;
    }
    ctx->pc = 0x3AD174u;
    SET_GPR_U32(ctx, 31, 0x3AD17Cu);
    ctx->pc = 0x3AD178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD174u;
    // 0x3ad178: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3AD174u, 0x3AD17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD17Cu;
label_3ad17c:
    // 0x3ad17c: 0xc08a61a  jal         func_229868
label_3ad180:
    if (ctx->pc == 0x3AD180u) {
        ctx->pc = 0x3AD180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD17Cu;
        // 0x3ad180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD184u;
        goto label_3ad184;
    }
    ctx->pc = 0x3AD17Cu;
    SET_GPR_U32(ctx, 31, 0x3AD184u);
    ctx->pc = 0x3AD180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD17Cu;
    // 0x3ad180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3AD17Cu, 0x3AD184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD184u;
label_3ad184:
    // 0x3ad184: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3ad184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ad188:
    // 0x3ad188: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3ad188u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ad18c:
    // 0x3ad18c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3ad18cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3ad190:
    // 0x3ad190: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3ad190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3ad194:
    // 0x3ad194: 0x40f809  jalr        $v0
label_3ad198:
    if (ctx->pc == 0x3AD198u) {
        ctx->pc = 0x3AD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD194u;
        // 0x3ad198: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD19Cu;
        goto label_3ad19c;
    }
    ctx->pc = 0x3AD194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD19Cu);
        ctx->pc = 0x3AD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD194u;
        // 0x3ad198: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD194u, 0x3AD19Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD19Cu;
label_3ad19c:
    // 0x3ad19c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3ad19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3ad1a0:
    // 0x3ad1a0: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_3ad1a4:
    if (ctx->pc == 0x3AD1A4u) {
        ctx->pc = 0x3AD1A8u;
        goto label_3ad1a8;
    }
    ctx->pc = 0x3AD1A0u;
    {
        const bool branch_taken_0x3ad1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad1a0) {
            ctx->pc = 0x3AD2B4u;
            goto label_3ad2b4;
        }
    }
    ctx->pc = 0x3AD1A8u;
label_3ad1a8:
    // 0x3ad1a8: 0xc0e8630  jal         func_3A18C0
label_3ad1ac:
    if (ctx->pc == 0x3AD1ACu) {
        ctx->pc = 0x3AD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD1A8u;
        // 0x3ad1ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD1B0u;
        goto label_3ad1b0;
    }
    ctx->pc = 0x3AD1A8u;
    SET_GPR_U32(ctx, 31, 0x3AD1B0u);
    ctx->pc = 0x3AD1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD1A8u;
    // 0x3ad1ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3AD1A8u, 0x3AD1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD1B0u;
label_3ad1b0:
    // 0x3ad1b0: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_3ad1b4:
    if (ctx->pc == 0x3AD1B4u) {
        ctx->pc = 0x3AD1B8u;
        goto label_3ad1b8;
    }
    ctx->pc = 0x3AD1B0u;
    {
        const bool branch_taken_0x3ad1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad1b0) {
            ctx->pc = 0x3AD2B4u;
            goto label_3ad2b4;
        }
    }
    ctx->pc = 0x3AD1B8u;
label_3ad1b8:
    // 0x3ad1b8: 0xc0e8630  jal         func_3A18C0
label_3ad1bc:
    if (ctx->pc == 0x3AD1BCu) {
        ctx->pc = 0x3AD1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD1B8u;
        // 0x3ad1bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD1C0u;
        goto label_3ad1c0;
    }
    ctx->pc = 0x3AD1B8u;
    SET_GPR_U32(ctx, 31, 0x3AD1C0u);
    ctx->pc = 0x3AD1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD1B8u;
    // 0x3ad1bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3AD1B8u, 0x3AD1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD1C0u;
label_3ad1c0:
    // 0x3ad1c0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3ad1c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ad1c4:
    // 0x3ad1c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ad1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ad1c8:
    // 0x3ad1c8: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x3ad1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_3ad1cc:
    // 0x3ad1cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ad1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ad1d0:
    // 0x3ad1d0: 0x7ea30010  sq          $v1, 0x10($s5)
    ctx->pc = 0x3ad1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 3));
label_3ad1d4:
    // 0x3ad1d4: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x3ad1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3ad1d8:
    // 0x3ad1d8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3ad1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3ad1dc:
    // 0x3ad1dc: 0xc0e8616  jal         func_3A1858
label_3ad1e0:
    if (ctx->pc == 0x3AD1E0u) {
        ctx->pc = 0x3AD1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD1DCu;
        // 0x3ad1e0: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD1E4u;
        goto label_3ad1e4;
    }
    ctx->pc = 0x3AD1DCu;
    SET_GPR_U32(ctx, 31, 0x3AD1E4u);
    ctx->pc = 0x3AD1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD1DCu;
    // 0x3ad1e0: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3AD1DCu, 0x3AD1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD1E4u;
label_3ad1e4:
    // 0x3ad1e4: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x3ad1e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ad1e8:
    // 0x3ad1e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ad1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad1ec:
    // 0x3ad1ec: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3ad1ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ad1f0:
    // 0x3ad1f0: 0x86300070  lh          $s0, 0x70($s1)
    ctx->pc = 0x3ad1f0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
label_3ad1f4:
    // 0x3ad1f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ad1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ad1f8:
    // 0x3ad1f8: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x3ad1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_3ad1fc:
    // 0x3ad1fc: 0xc0e911e  jal         func_3A4478
label_3ad200:
    if (ctx->pc == 0x3AD200u) {
        ctx->pc = 0x3AD200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD1FCu;
        // 0x3ad200: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD204u;
        goto label_3ad204;
    }
    ctx->pc = 0x3AD1FCu;
    SET_GPR_U32(ctx, 31, 0x3AD204u);
    ctx->pc = 0x3AD200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD1FCu;
    // 0x3ad200: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3AD1FCu, 0x3AD204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD204u;
label_3ad204:
    // 0x3ad204: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3ad204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3ad208:
    // 0x3ad208: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x3ad208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_3ad20c:
    // 0x3ad20c: 0xc136b30  jal         func_4DACC0
label_3ad210:
    if (ctx->pc == 0x3AD210u) {
        ctx->pc = 0x3AD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD20Cu;
        // 0x3ad210: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD214u;
        goto label_3ad214;
    }
    ctx->pc = 0x3AD20Cu;
    SET_GPR_U32(ctx, 31, 0x3AD214u);
    ctx->pc = 0x3AD210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD20Cu;
    // 0x3ad210: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3AD20Cu, 0x3AD214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD214u;
label_3ad214:
    // 0x3ad214: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3ad214u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ad218:
    // 0x3ad218: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3ad218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ad21c:
    // 0x3ad21c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ad21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ad220:
    // 0x3ad220: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3ad220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3ad224:
    // 0x3ad224: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ad224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ad228:
    // 0x3ad228: 0x40f809  jalr        $v0
label_3ad22c:
    if (ctx->pc == 0x3AD22Cu) {
        ctx->pc = 0x3AD22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD228u;
        // 0x3ad22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD230u;
        goto label_3ad230;
    }
    ctx->pc = 0x3AD228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD230u);
        ctx->pc = 0x3AD22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD228u;
        // 0x3ad22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD228u, 0x3AD230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD230u;
label_3ad230:
    // 0x3ad230: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3ad230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3ad234:
    // 0x3ad234: 0x3c01c11c  lui         $at, 0xC11C
    ctx->pc = 0x3ad234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49436 << 16));
label_3ad238:
    // 0x3ad238: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ad238u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ad23c:
    // 0x3ad23c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ad23cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ad240:
    // 0x3ad240: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ad240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ad244:
    // 0x3ad244: 0xc136b24  jal         func_4DAC90
label_3ad248:
    if (ctx->pc == 0x3AD248u) {
        ctx->pc = 0x3AD248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD244u;
        // 0x3ad248: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD24Cu;
        goto label_3ad24c;
    }
    ctx->pc = 0x3AD244u;
    SET_GPR_U32(ctx, 31, 0x3AD24Cu);
    ctx->pc = 0x3AD248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD244u;
    // 0x3ad248: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3AD244u, 0x3AD24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD24Cu;
label_3ad24c:
    // 0x3ad24c: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x3ad24cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ad250:
    // 0x3ad250: 0x3c03de48  lui         $v1, 0xDE48
    ctx->pc = 0x3ad250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56904 << 16));
label_3ad254:
    // 0x3ad254: 0x3463ed43  ori         $v1, $v1, 0xED43
    ctx->pc = 0x3ad254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60739);
label_3ad258:
    // 0x3ad258: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x3ad258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_3ad25c:
    // 0x3ad25c: 0x7ea40000  sq          $a0, 0x0($s5)
    ctx->pc = 0x3ad25cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 4));
label_3ad260:
    // 0x3ad260: 0x8e8200c4  lw          $v0, 0xC4($s4)
    ctx->pc = 0x3ad260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_3ad264:
    // 0x3ad264: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
label_3ad268:
    if (ctx->pc == 0x3AD268u) {
        ctx->pc = 0x3AD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD264u;
        // 0x3ad268: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD26Cu;
        goto label_3ad26c;
    }
    ctx->pc = 0x3AD264u;
    {
        const bool branch_taken_0x3ad264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD264u;
        // 0x3ad268: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad264) {
            ctx->pc = 0x3AD2A8u;
            goto label_3ad2a8;
        }
    }
    ctx->pc = 0x3AD26Cu;
label_3ad26c:
    // 0x3ad26c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x3ad26cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ad270:
    // 0x3ad270: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3ad270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_3ad274:
    // 0x3ad274: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ad274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ad278:
    // 0x3ad278: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x3ad278u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_3ad27c:
    // 0x3ad27c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ad27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ad280:
    // 0x3ad280: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ad280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ad284:
    // 0x3ad284: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3ad284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3ad288:
    // 0x3ad288: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3ad288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3ad28c:
    // 0x3ad28c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x3ad28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3ad290:
    // 0x3ad290: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x3ad290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3ad294:
    // 0x3ad294: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3ad294u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ad298:
    // 0x3ad298: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3ad298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3ad29c:
    // 0x3ad29c: 0x8cc3007c  lw          $v1, 0x7C($a2)
    ctx->pc = 0x3ad29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_3ad2a0:
    // 0x3ad2a0: 0x60f809  jalr        $v1
label_3ad2a4:
    if (ctx->pc == 0x3AD2A4u) {
        ctx->pc = 0x3AD2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2A0u;
        // 0x3ad2a4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD2A8u;
        goto label_3ad2a8;
    }
    ctx->pc = 0x3AD2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AD2A8u);
        ctx->pc = 0x3AD2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2A0u;
        // 0x3ad2a4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD2A0u, 0x3AD2A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD2A8u;
label_3ad2a8:
    // 0x3ad2a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ad2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ad2ac:
    // 0x3ad2ac: 0xc0e9684  jal         func_3A5A10
label_3ad2b0:
    if (ctx->pc == 0x3AD2B0u) {
        ctx->pc = 0x3AD2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2ACu;
        // 0x3ad2b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD2B4u;
        goto label_3ad2b4;
    }
    ctx->pc = 0x3AD2ACu;
    SET_GPR_U32(ctx, 31, 0x3AD2B4u);
    ctx->pc = 0x3AD2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD2ACu;
    // 0x3ad2b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A10u, 0x3AD2ACu, 0x3AD2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD2B4u;
label_3ad2b4:
    // 0x3ad2b4: 0xc0874fa  jal         func_21D3E8
label_3ad2b8:
    if (ctx->pc == 0x3AD2B8u) {
        ctx->pc = 0x3AD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2B4u;
        // 0x3ad2b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD2BCu;
        goto label_3ad2bc;
    }
    ctx->pc = 0x3AD2B4u;
    SET_GPR_U32(ctx, 31, 0x3AD2BCu);
    ctx->pc = 0x3AD2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD2B4u;
    // 0x3ad2b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x3AD2B4u, 0x3AD2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD2BCu;
label_3ad2bc:
    // 0x3ad2bc: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x3ad2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3ad2c0:
    // 0x3ad2c0: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x3ad2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_3ad2c4:
    // 0x3ad2c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ad2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3ad2c8:
    // 0x3ad2c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ad2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ad2cc:
    // 0x3ad2cc: 0x10000049  b           . + 4 + (0x49 << 2)
label_3ad2d0:
    if (ctx->pc == 0x3AD2D0u) {
        ctx->pc = 0x3AD2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2CCu;
        // 0x3ad2d0: 0xae830054  sw          $v1, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD2D4u;
        goto label_3ad2d4;
    }
    ctx->pc = 0x3AD2CCu;
    {
        const bool branch_taken_0x3ad2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2CCu;
        // 0x3ad2d0: 0xae830054  sw          $v1, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad2cc) {
            ctx->pc = 0x3AD3F4u;
            goto label_3ad3f4;
        }
    }
    ctx->pc = 0x3AD2D4u;
label_3ad2d4:
    // 0x3ad2d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ad2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ad2d8:
    // 0x3ad2d8: 0xc0ea12a  jal         func_3A84A8
label_3ad2dc:
    if (ctx->pc == 0x3AD2DCu) {
        ctx->pc = 0x3AD2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2D8u;
        // 0x3ad2dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD2E0u;
        goto label_3ad2e0;
    }
    ctx->pc = 0x3AD2D8u;
    SET_GPR_U32(ctx, 31, 0x3AD2E0u);
    ctx->pc = 0x3AD2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD2D8u;
    // 0x3ad2dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AD2D8u, 0x3AD2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD2E0u;
label_3ad2e0:
    // 0x3ad2e0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3ad2e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ad2e4:
    // 0x3ad2e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ad2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ad2e8:
    // 0x3ad2e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ad2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ad2ec:
    // 0x3ad2ec: 0xc0ea12a  jal         func_3A84A8
label_3ad2f0:
    if (ctx->pc == 0x3AD2F0u) {
        ctx->pc = 0x3AD2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2ECu;
        // 0x3ad2f0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD2F4u;
        goto label_3ad2f4;
    }
    ctx->pc = 0x3AD2ECu;
    SET_GPR_U32(ctx, 31, 0x3AD2F4u);
    ctx->pc = 0x3AD2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD2ECu;
    // 0x3ad2f0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AD2ECu, 0x3AD2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD2F4u;
label_3ad2f4:
    // 0x3ad2f4: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x3ad2f4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ad2f8:
    // 0x3ad2f8: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x3ad2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_3ad2fc:
    // 0x3ad2fc: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x3ad2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3ad300:
    // 0x3ad300: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ad300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3ad304:
    // 0x3ad304: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x3ad304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
label_3ad308:
    // 0x3ad308: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ad308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ad30c:
    // 0x3ad30c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ad30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ad310:
    // 0x3ad310: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3ad310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3ad314:
    // 0x3ad314: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ad314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ad318:
    // 0x3ad318: 0xae830054  sw          $v1, 0x54($s4)
    ctx->pc = 0x3ad318u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
label_3ad31c:
    // 0x3ad31c: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3ad31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3ad320:
    // 0x3ad320: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3ad320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3ad324:
    // 0x3ad324: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3ad324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3ad328:
    // 0x3ad328: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ad328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ad32c:
    // 0x3ad32c: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x3ad32cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ad330:
    // 0x3ad330: 0x86300070  lh          $s0, 0x70($s1)
    ctx->pc = 0x3ad330u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
label_3ad334:
    // 0x3ad334: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x3ad334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_3ad338:
    // 0x3ad338: 0xc0cd518  jal         func_335460
label_3ad33c:
    if (ctx->pc == 0x3AD33Cu) {
        ctx->pc = 0x3AD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD338u;
        // 0x3ad33c: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD340u;
        goto label_3ad340;
    }
    ctx->pc = 0x3AD338u;
    SET_GPR_U32(ctx, 31, 0x3AD340u);
    ctx->pc = 0x3AD33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD338u;
    // 0x3ad33c: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AD338u, 0x3AD340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD340u;
label_3ad340:
    // 0x3ad340: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3ad340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3ad344:
    // 0x3ad344: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3ad344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ad348:
    // 0x3ad348: 0xc136b24  jal         func_4DAC90
label_3ad34c:
    if (ctx->pc == 0x3AD34Cu) {
        ctx->pc = 0x3AD34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD348u;
        // 0x3ad34c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD350u;
        goto label_3ad350;
    }
    ctx->pc = 0x3AD348u;
    SET_GPR_U32(ctx, 31, 0x3AD350u);
    ctx->pc = 0x3AD34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD348u;
    // 0x3ad34c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3AD348u, 0x3AD350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD350u;
label_3ad350:
    // 0x3ad350: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3ad350u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ad354:
    // 0x3ad354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad358:
    // 0x3ad358: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3ad358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3ad35c:
    // 0x3ad35c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ad35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ad360:
    // 0x3ad360: 0x40f809  jalr        $v0
label_3ad364:
    if (ctx->pc == 0x3AD364u) {
        ctx->pc = 0x3AD364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD360u;
        // 0x3ad364: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD368u;
        goto label_3ad368;
    }
    ctx->pc = 0x3AD360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD368u);
        ctx->pc = 0x3AD364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD360u;
        // 0x3ad364: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD360u, 0x3AD368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD368u;
label_3ad368:
    // 0x3ad368: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3ad368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ad36c:
    // 0x3ad36c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3ad36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ad370:
    // 0x3ad370: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3ad370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3ad374:
    // 0x3ad374: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x3ad374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3ad378:
    // 0x3ad378: 0xc0f809  jalr        $a2
label_3ad37c:
    if (ctx->pc == 0x3AD37Cu) {
        ctx->pc = 0x3AD37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD378u;
        // 0x3ad37c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD380u;
        goto label_3ad380;
    }
    ctx->pc = 0x3AD378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3AD380u);
        ctx->pc = 0x3AD37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD378u;
        // 0x3ad37c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD378u, 0x3AD380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD380u;
label_3ad380:
    // 0x3ad380: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x3ad380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3ad384:
    // 0x3ad384: 0x3c030420  lui         $v1, 0x420
    ctx->pc = 0x3ad384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1056 << 16));
label_3ad388:
    // 0x3ad388: 0x10000019  b           . + 4 + (0x19 << 2)
label_3ad38c:
    if (ctx->pc == 0x3AD38Cu) {
        ctx->pc = 0x3AD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD388u;
        // 0x3ad38c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD390u;
        goto label_3ad390;
    }
    ctx->pc = 0x3AD388u;
    {
        const bool branch_taken_0x3ad388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD388u;
        // 0x3ad38c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad388) {
            ctx->pc = 0x3AD3F0u;
            goto label_3ad3f0;
        }
    }
    ctx->pc = 0x3AD390u;
label_3ad390:
    // 0x3ad390: 0xc0ea146  jal         func_3A8518
label_3ad394:
    if (ctx->pc == 0x3AD394u) {
        ctx->pc = 0x3AD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD390u;
        // 0x3ad394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD398u;
        goto label_3ad398;
    }
    ctx->pc = 0x3AD390u;
    SET_GPR_U32(ctx, 31, 0x3AD398u);
    ctx->pc = 0x3AD394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD390u;
    // 0x3ad394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AD390u, 0x3AD398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD398u;
label_3ad398:
    // 0x3ad398: 0x10000017  b           . + 4 + (0x17 << 2)
label_3ad39c:
    if (ctx->pc == 0x3AD39Cu) {
        ctx->pc = 0x3AD39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD398u;
        // 0x3ad39c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD3A0u;
        goto label_3ad3a0;
    }
    ctx->pc = 0x3AD398u;
    {
        const bool branch_taken_0x3ad398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD398u;
        // 0x3ad39c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad398) {
            ctx->pc = 0x3AD3F8u;
            goto label_3ad3f8;
        }
    }
    ctx->pc = 0x3AD3A0u;
label_3ad3a0:
    // 0x3ad3a0: 0xc0ea146  jal         func_3A8518
label_3ad3a4:
    if (ctx->pc == 0x3AD3A4u) {
        ctx->pc = 0x3AD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3A0u;
        // 0x3ad3a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD3A8u;
        goto label_3ad3a8;
    }
    ctx->pc = 0x3AD3A0u;
    SET_GPR_U32(ctx, 31, 0x3AD3A8u);
    ctx->pc = 0x3AD3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD3A0u;
    // 0x3ad3a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AD3A0u, 0x3AD3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD3A8u;
label_3ad3a8:
    // 0x3ad3a8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_3ad3ac:
    if (ctx->pc == 0x3AD3ACu) {
        ctx->pc = 0x3AD3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3A8u;
        // 0x3ad3ac: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD3B0u;
        goto label_3ad3b0;
    }
    ctx->pc = 0x3AD3A8u;
    {
        const bool branch_taken_0x3ad3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad3a8) {
            ctx->pc = 0x3AD3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD3A8u;
            // 0x3ad3ac: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD3E8u;
            goto label_3ad3e8;
        }
    }
    ctx->pc = 0x3AD3B0u;
label_3ad3b0:
    // 0x3ad3b0: 0xc043d5e  jal         func_10F578
label_3ad3b4:
    if (ctx->pc == 0x3AD3B4u) {
        ctx->pc = 0x3AD3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3B0u;
        // 0x3ad3b4: 0x26a40024  addiu       $a0, $s5, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD3B8u;
        goto label_3ad3b8;
    }
    ctx->pc = 0x3AD3B0u;
    SET_GPR_U32(ctx, 31, 0x3AD3B8u);
    ctx->pc = 0x3AD3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD3B0u;
    // 0x3ad3b4: 0x26a40024  addiu       $a0, $s5, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3AD3B0u, 0x3AD3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD3B8u;
label_3ad3b8:
    // 0x3ad3b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3ad3bc:
    if (ctx->pc == 0x3AD3BCu) {
        ctx->pc = 0x3AD3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3B8u;
        // 0x3ad3bc: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD3C0u;
        goto label_3ad3c0;
    }
    ctx->pc = 0x3AD3B8u;
    {
        const bool branch_taken_0x3ad3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3B8u;
        // 0x3ad3bc: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad3b8) {
            ctx->pc = 0x3AD3D8u;
            goto label_3ad3d8;
        }
    }
    ctx->pc = 0x3AD3C0u;
label_3ad3c0:
    // 0x3ad3c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ad3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ad3c4:
    // 0x3ad3c4: 0x8ea50024  lw          $a1, 0x24($s5)
    ctx->pc = 0x3ad3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_3ad3c8:
    // 0x3ad3c8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3ad3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3ad3cc:
    // 0x3ad3cc: 0xc0440c6  jal         func_110318
label_3ad3d0:
    if (ctx->pc == 0x3AD3D0u) {
        ctx->pc = 0x3AD3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3CCu;
        // 0x3ad3d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD3D4u;
        goto label_3ad3d4;
    }
    ctx->pc = 0x3AD3CCu;
    SET_GPR_U32(ctx, 31, 0x3AD3D4u);
    ctx->pc = 0x3AD3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD3CCu;
    // 0x3ad3d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3AD3CCu, 0x3AD3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD3D4u;
label_3ad3d4:
    // 0x3ad3d4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3ad3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ad3d8:
    // 0x3ad3d8: 0xaea30030  sw          $v1, 0x30($s5)
    ctx->pc = 0x3ad3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 3));
label_3ad3dc:
    // 0x3ad3dc: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x3ad3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3ad3e0:
    // 0x3ad3e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ad3e4:
    if (ctx->pc == 0x3AD3E4u) {
        ctx->pc = 0x3AD3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3E0u;
        // 0x3ad3e4: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD3E8u;
        goto label_3ad3e8;
    }
    ctx->pc = 0x3AD3E0u;
    {
        const bool branch_taken_0x3ad3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3E0u;
        // 0x3ad3e4: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad3e0) {
            ctx->pc = 0x3AD3F0u;
            goto label_3ad3f0;
        }
    }
    ctx->pc = 0x3AD3E8u;
label_3ad3e8:
    // 0x3ad3e8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3ad3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3ad3ec:
    // 0x3ad3ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ad3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ad3f0:
    // 0x3ad3f0: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x3ad3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_3ad3f4:
    // 0x3ad3f4: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x3ad3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3ad3f8:
    // 0x3ad3f8: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x3ad3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3ad3fc:
    // 0x3ad3fc: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x3ad3fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3ad400:
    // 0x3ad400: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x3ad400u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3ad404:
    // 0x3ad404: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x3ad404u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3ad408:
    // 0x3ad408: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x3ad408u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3ad40c:
    // 0x3ad40c: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x3ad40cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3ad410:
    // 0x3ad410: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x3ad410u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ad414:
    // 0x3ad414: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x3ad414u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3ad418:
    // 0x3ad418: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3ad418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3ad41c:
    // 0x3ad41c: 0xc7b90168  lwc1        $f25, 0x168($sp)
    ctx->pc = 0x3ad41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3ad420:
    // 0x3ad420: 0xc7b80160  lwc1        $f24, 0x160($sp)
    ctx->pc = 0x3ad420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3ad424:
    // 0x3ad424: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x3ad424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3ad428:
    // 0x3ad428: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x3ad428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3ad42c:
    // 0x3ad42c: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x3ad42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ad430:
    // 0x3ad430: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x3ad430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ad434:
    // 0x3ad434: 0x3e00008  jr          $ra
label_3ad438:
    if (ctx->pc == 0x3AD438u) {
        ctx->pc = 0x3AD438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD434u;
        // 0x3ad438: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD43Cu;
        goto label_3ad43c;
    }
    ctx->pc = 0x3AD434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD434u;
        // 0x3ad438: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD43Cu;
label_3ad43c:
    // 0x3ad43c: 0x0  nop
    ctx->pc = 0x3ad43cu;
    // NOP
    ctx->pc = 0x3ad440u;
}
