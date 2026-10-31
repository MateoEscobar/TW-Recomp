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

// Function: sub_002EC780
// Address: 0x2ec780 - 0x2ecfe8
void sub_002EC780_0x2ec780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC780_0x2ec780");
#endif

    switch (ctx->pc) {
        case 0x2ec780u: goto label_2ec780;
        case 0x2ec784u: goto label_2ec784;
        case 0x2ec788u: goto label_2ec788;
        case 0x2ec78cu: goto label_2ec78c;
        case 0x2ec790u: goto label_2ec790;
        case 0x2ec794u: goto label_2ec794;
        case 0x2ec798u: goto label_2ec798;
        case 0x2ec79cu: goto label_2ec79c;
        case 0x2ec7a0u: goto label_2ec7a0;
        case 0x2ec7a4u: goto label_2ec7a4;
        case 0x2ec7a8u: goto label_2ec7a8;
        case 0x2ec7acu: goto label_2ec7ac;
        case 0x2ec7b0u: goto label_2ec7b0;
        case 0x2ec7b4u: goto label_2ec7b4;
        case 0x2ec7b8u: goto label_2ec7b8;
        case 0x2ec7bcu: goto label_2ec7bc;
        case 0x2ec7c0u: goto label_2ec7c0;
        case 0x2ec7c4u: goto label_2ec7c4;
        case 0x2ec7c8u: goto label_2ec7c8;
        case 0x2ec7ccu: goto label_2ec7cc;
        case 0x2ec7d0u: goto label_2ec7d0;
        case 0x2ec7d4u: goto label_2ec7d4;
        case 0x2ec7d8u: goto label_2ec7d8;
        case 0x2ec7dcu: goto label_2ec7dc;
        case 0x2ec7e0u: goto label_2ec7e0;
        case 0x2ec7e4u: goto label_2ec7e4;
        case 0x2ec7e8u: goto label_2ec7e8;
        case 0x2ec7ecu: goto label_2ec7ec;
        case 0x2ec7f0u: goto label_2ec7f0;
        case 0x2ec7f4u: goto label_2ec7f4;
        case 0x2ec7f8u: goto label_2ec7f8;
        case 0x2ec7fcu: goto label_2ec7fc;
        case 0x2ec800u: goto label_2ec800;
        case 0x2ec804u: goto label_2ec804;
        case 0x2ec808u: goto label_2ec808;
        case 0x2ec80cu: goto label_2ec80c;
        case 0x2ec810u: goto label_2ec810;
        case 0x2ec814u: goto label_2ec814;
        case 0x2ec818u: goto label_2ec818;
        case 0x2ec81cu: goto label_2ec81c;
        case 0x2ec820u: goto label_2ec820;
        case 0x2ec824u: goto label_2ec824;
        case 0x2ec828u: goto label_2ec828;
        case 0x2ec82cu: goto label_2ec82c;
        case 0x2ec830u: goto label_2ec830;
        case 0x2ec834u: goto label_2ec834;
        case 0x2ec838u: goto label_2ec838;
        case 0x2ec83cu: goto label_2ec83c;
        case 0x2ec840u: goto label_2ec840;
        case 0x2ec844u: goto label_2ec844;
        case 0x2ec848u: goto label_2ec848;
        case 0x2ec84cu: goto label_2ec84c;
        case 0x2ec850u: goto label_2ec850;
        case 0x2ec854u: goto label_2ec854;
        case 0x2ec858u: goto label_2ec858;
        case 0x2ec85cu: goto label_2ec85c;
        case 0x2ec860u: goto label_2ec860;
        case 0x2ec864u: goto label_2ec864;
        case 0x2ec868u: goto label_2ec868;
        case 0x2ec86cu: goto label_2ec86c;
        case 0x2ec870u: goto label_2ec870;
        case 0x2ec874u: goto label_2ec874;
        case 0x2ec878u: goto label_2ec878;
        case 0x2ec87cu: goto label_2ec87c;
        case 0x2ec880u: goto label_2ec880;
        case 0x2ec884u: goto label_2ec884;
        case 0x2ec888u: goto label_2ec888;
        case 0x2ec88cu: goto label_2ec88c;
        case 0x2ec890u: goto label_2ec890;
        case 0x2ec894u: goto label_2ec894;
        case 0x2ec898u: goto label_2ec898;
        case 0x2ec89cu: goto label_2ec89c;
        case 0x2ec8a0u: goto label_2ec8a0;
        case 0x2ec8a4u: goto label_2ec8a4;
        case 0x2ec8a8u: goto label_2ec8a8;
        case 0x2ec8acu: goto label_2ec8ac;
        case 0x2ec8b0u: goto label_2ec8b0;
        case 0x2ec8b4u: goto label_2ec8b4;
        case 0x2ec8b8u: goto label_2ec8b8;
        case 0x2ec8bcu: goto label_2ec8bc;
        case 0x2ec8c0u: goto label_2ec8c0;
        case 0x2ec8c4u: goto label_2ec8c4;
        case 0x2ec8c8u: goto label_2ec8c8;
        case 0x2ec8ccu: goto label_2ec8cc;
        case 0x2ec8d0u: goto label_2ec8d0;
        case 0x2ec8d4u: goto label_2ec8d4;
        case 0x2ec8d8u: goto label_2ec8d8;
        case 0x2ec8dcu: goto label_2ec8dc;
        case 0x2ec8e0u: goto label_2ec8e0;
        case 0x2ec8e4u: goto label_2ec8e4;
        case 0x2ec8e8u: goto label_2ec8e8;
        case 0x2ec8ecu: goto label_2ec8ec;
        case 0x2ec8f0u: goto label_2ec8f0;
        case 0x2ec8f4u: goto label_2ec8f4;
        case 0x2ec8f8u: goto label_2ec8f8;
        case 0x2ec8fcu: goto label_2ec8fc;
        case 0x2ec900u: goto label_2ec900;
        case 0x2ec904u: goto label_2ec904;
        case 0x2ec908u: goto label_2ec908;
        case 0x2ec90cu: goto label_2ec90c;
        case 0x2ec910u: goto label_2ec910;
        case 0x2ec914u: goto label_2ec914;
        case 0x2ec918u: goto label_2ec918;
        case 0x2ec91cu: goto label_2ec91c;
        case 0x2ec920u: goto label_2ec920;
        case 0x2ec924u: goto label_2ec924;
        case 0x2ec928u: goto label_2ec928;
        case 0x2ec92cu: goto label_2ec92c;
        case 0x2ec930u: goto label_2ec930;
        case 0x2ec934u: goto label_2ec934;
        case 0x2ec938u: goto label_2ec938;
        case 0x2ec93cu: goto label_2ec93c;
        case 0x2ec940u: goto label_2ec940;
        case 0x2ec944u: goto label_2ec944;
        case 0x2ec948u: goto label_2ec948;
        case 0x2ec94cu: goto label_2ec94c;
        case 0x2ec950u: goto label_2ec950;
        case 0x2ec954u: goto label_2ec954;
        case 0x2ec958u: goto label_2ec958;
        case 0x2ec95cu: goto label_2ec95c;
        case 0x2ec960u: goto label_2ec960;
        case 0x2ec964u: goto label_2ec964;
        case 0x2ec968u: goto label_2ec968;
        case 0x2ec96cu: goto label_2ec96c;
        case 0x2ec970u: goto label_2ec970;
        case 0x2ec974u: goto label_2ec974;
        case 0x2ec978u: goto label_2ec978;
        case 0x2ec97cu: goto label_2ec97c;
        case 0x2ec980u: goto label_2ec980;
        case 0x2ec984u: goto label_2ec984;
        case 0x2ec988u: goto label_2ec988;
        case 0x2ec98cu: goto label_2ec98c;
        case 0x2ec990u: goto label_2ec990;
        case 0x2ec994u: goto label_2ec994;
        case 0x2ec998u: goto label_2ec998;
        case 0x2ec99cu: goto label_2ec99c;
        case 0x2ec9a0u: goto label_2ec9a0;
        case 0x2ec9a4u: goto label_2ec9a4;
        case 0x2ec9a8u: goto label_2ec9a8;
        case 0x2ec9acu: goto label_2ec9ac;
        case 0x2ec9b0u: goto label_2ec9b0;
        case 0x2ec9b4u: goto label_2ec9b4;
        case 0x2ec9b8u: goto label_2ec9b8;
        case 0x2ec9bcu: goto label_2ec9bc;
        case 0x2ec9c0u: goto label_2ec9c0;
        case 0x2ec9c4u: goto label_2ec9c4;
        case 0x2ec9c8u: goto label_2ec9c8;
        case 0x2ec9ccu: goto label_2ec9cc;
        case 0x2ec9d0u: goto label_2ec9d0;
        case 0x2ec9d4u: goto label_2ec9d4;
        case 0x2ec9d8u: goto label_2ec9d8;
        case 0x2ec9dcu: goto label_2ec9dc;
        case 0x2ec9e0u: goto label_2ec9e0;
        case 0x2ec9e4u: goto label_2ec9e4;
        case 0x2ec9e8u: goto label_2ec9e8;
        case 0x2ec9ecu: goto label_2ec9ec;
        case 0x2ec9f0u: goto label_2ec9f0;
        case 0x2ec9f4u: goto label_2ec9f4;
        case 0x2ec9f8u: goto label_2ec9f8;
        case 0x2ec9fcu: goto label_2ec9fc;
        case 0x2eca00u: goto label_2eca00;
        case 0x2eca04u: goto label_2eca04;
        case 0x2eca08u: goto label_2eca08;
        case 0x2eca0cu: goto label_2eca0c;
        case 0x2eca10u: goto label_2eca10;
        case 0x2eca14u: goto label_2eca14;
        case 0x2eca18u: goto label_2eca18;
        case 0x2eca1cu: goto label_2eca1c;
        case 0x2eca20u: goto label_2eca20;
        case 0x2eca24u: goto label_2eca24;
        case 0x2eca28u: goto label_2eca28;
        case 0x2eca2cu: goto label_2eca2c;
        case 0x2eca30u: goto label_2eca30;
        case 0x2eca34u: goto label_2eca34;
        case 0x2eca38u: goto label_2eca38;
        case 0x2eca3cu: goto label_2eca3c;
        case 0x2eca40u: goto label_2eca40;
        case 0x2eca44u: goto label_2eca44;
        case 0x2eca48u: goto label_2eca48;
        case 0x2eca4cu: goto label_2eca4c;
        case 0x2eca50u: goto label_2eca50;
        case 0x2eca54u: goto label_2eca54;
        case 0x2eca58u: goto label_2eca58;
        case 0x2eca5cu: goto label_2eca5c;
        case 0x2eca60u: goto label_2eca60;
        case 0x2eca64u: goto label_2eca64;
        case 0x2eca68u: goto label_2eca68;
        case 0x2eca6cu: goto label_2eca6c;
        case 0x2eca70u: goto label_2eca70;
        case 0x2eca74u: goto label_2eca74;
        case 0x2eca78u: goto label_2eca78;
        case 0x2eca7cu: goto label_2eca7c;
        case 0x2eca80u: goto label_2eca80;
        case 0x2eca84u: goto label_2eca84;
        case 0x2eca88u: goto label_2eca88;
        case 0x2eca8cu: goto label_2eca8c;
        case 0x2eca90u: goto label_2eca90;
        case 0x2eca94u: goto label_2eca94;
        case 0x2eca98u: goto label_2eca98;
        case 0x2eca9cu: goto label_2eca9c;
        case 0x2ecaa0u: goto label_2ecaa0;
        case 0x2ecaa4u: goto label_2ecaa4;
        case 0x2ecaa8u: goto label_2ecaa8;
        case 0x2ecaacu: goto label_2ecaac;
        case 0x2ecab0u: goto label_2ecab0;
        case 0x2ecab4u: goto label_2ecab4;
        case 0x2ecab8u: goto label_2ecab8;
        case 0x2ecabcu: goto label_2ecabc;
        case 0x2ecac0u: goto label_2ecac0;
        case 0x2ecac4u: goto label_2ecac4;
        case 0x2ecac8u: goto label_2ecac8;
        case 0x2ecaccu: goto label_2ecacc;
        case 0x2ecad0u: goto label_2ecad0;
        case 0x2ecad4u: goto label_2ecad4;
        case 0x2ecad8u: goto label_2ecad8;
        case 0x2ecadcu: goto label_2ecadc;
        case 0x2ecae0u: goto label_2ecae0;
        case 0x2ecae4u: goto label_2ecae4;
        case 0x2ecae8u: goto label_2ecae8;
        case 0x2ecaecu: goto label_2ecaec;
        case 0x2ecaf0u: goto label_2ecaf0;
        case 0x2ecaf4u: goto label_2ecaf4;
        case 0x2ecaf8u: goto label_2ecaf8;
        case 0x2ecafcu: goto label_2ecafc;
        case 0x2ecb00u: goto label_2ecb00;
        case 0x2ecb04u: goto label_2ecb04;
        case 0x2ecb08u: goto label_2ecb08;
        case 0x2ecb0cu: goto label_2ecb0c;
        case 0x2ecb10u: goto label_2ecb10;
        case 0x2ecb14u: goto label_2ecb14;
        case 0x2ecb18u: goto label_2ecb18;
        case 0x2ecb1cu: goto label_2ecb1c;
        case 0x2ecb20u: goto label_2ecb20;
        case 0x2ecb24u: goto label_2ecb24;
        case 0x2ecb28u: goto label_2ecb28;
        case 0x2ecb2cu: goto label_2ecb2c;
        case 0x2ecb30u: goto label_2ecb30;
        case 0x2ecb34u: goto label_2ecb34;
        case 0x2ecb38u: goto label_2ecb38;
        case 0x2ecb3cu: goto label_2ecb3c;
        case 0x2ecb40u: goto label_2ecb40;
        case 0x2ecb44u: goto label_2ecb44;
        case 0x2ecb48u: goto label_2ecb48;
        case 0x2ecb4cu: goto label_2ecb4c;
        case 0x2ecb50u: goto label_2ecb50;
        case 0x2ecb54u: goto label_2ecb54;
        case 0x2ecb58u: goto label_2ecb58;
        case 0x2ecb5cu: goto label_2ecb5c;
        case 0x2ecb60u: goto label_2ecb60;
        case 0x2ecb64u: goto label_2ecb64;
        case 0x2ecb68u: goto label_2ecb68;
        case 0x2ecb6cu: goto label_2ecb6c;
        case 0x2ecb70u: goto label_2ecb70;
        case 0x2ecb74u: goto label_2ecb74;
        case 0x2ecb78u: goto label_2ecb78;
        case 0x2ecb7cu: goto label_2ecb7c;
        case 0x2ecb80u: goto label_2ecb80;
        case 0x2ecb84u: goto label_2ecb84;
        case 0x2ecb88u: goto label_2ecb88;
        case 0x2ecb8cu: goto label_2ecb8c;
        case 0x2ecb90u: goto label_2ecb90;
        case 0x2ecb94u: goto label_2ecb94;
        case 0x2ecb98u: goto label_2ecb98;
        case 0x2ecb9cu: goto label_2ecb9c;
        case 0x2ecba0u: goto label_2ecba0;
        case 0x2ecba4u: goto label_2ecba4;
        case 0x2ecba8u: goto label_2ecba8;
        case 0x2ecbacu: goto label_2ecbac;
        case 0x2ecbb0u: goto label_2ecbb0;
        case 0x2ecbb4u: goto label_2ecbb4;
        case 0x2ecbb8u: goto label_2ecbb8;
        case 0x2ecbbcu: goto label_2ecbbc;
        case 0x2ecbc0u: goto label_2ecbc0;
        case 0x2ecbc4u: goto label_2ecbc4;
        case 0x2ecbc8u: goto label_2ecbc8;
        case 0x2ecbccu: goto label_2ecbcc;
        case 0x2ecbd0u: goto label_2ecbd0;
        case 0x2ecbd4u: goto label_2ecbd4;
        case 0x2ecbd8u: goto label_2ecbd8;
        case 0x2ecbdcu: goto label_2ecbdc;
        case 0x2ecbe0u: goto label_2ecbe0;
        case 0x2ecbe4u: goto label_2ecbe4;
        case 0x2ecbe8u: goto label_2ecbe8;
        case 0x2ecbecu: goto label_2ecbec;
        case 0x2ecbf0u: goto label_2ecbf0;
        case 0x2ecbf4u: goto label_2ecbf4;
        case 0x2ecbf8u: goto label_2ecbf8;
        case 0x2ecbfcu: goto label_2ecbfc;
        case 0x2ecc00u: goto label_2ecc00;
        case 0x2ecc04u: goto label_2ecc04;
        case 0x2ecc08u: goto label_2ecc08;
        case 0x2ecc0cu: goto label_2ecc0c;
        case 0x2ecc10u: goto label_2ecc10;
        case 0x2ecc14u: goto label_2ecc14;
        case 0x2ecc18u: goto label_2ecc18;
        case 0x2ecc1cu: goto label_2ecc1c;
        case 0x2ecc20u: goto label_2ecc20;
        case 0x2ecc24u: goto label_2ecc24;
        case 0x2ecc28u: goto label_2ecc28;
        case 0x2ecc2cu: goto label_2ecc2c;
        case 0x2ecc30u: goto label_2ecc30;
        case 0x2ecc34u: goto label_2ecc34;
        case 0x2ecc38u: goto label_2ecc38;
        case 0x2ecc3cu: goto label_2ecc3c;
        case 0x2ecc40u: goto label_2ecc40;
        case 0x2ecc44u: goto label_2ecc44;
        case 0x2ecc48u: goto label_2ecc48;
        case 0x2ecc4cu: goto label_2ecc4c;
        case 0x2ecc50u: goto label_2ecc50;
        case 0x2ecc54u: goto label_2ecc54;
        case 0x2ecc58u: goto label_2ecc58;
        case 0x2ecc5cu: goto label_2ecc5c;
        case 0x2ecc60u: goto label_2ecc60;
        case 0x2ecc64u: goto label_2ecc64;
        case 0x2ecc68u: goto label_2ecc68;
        case 0x2ecc6cu: goto label_2ecc6c;
        case 0x2ecc70u: goto label_2ecc70;
        case 0x2ecc74u: goto label_2ecc74;
        case 0x2ecc78u: goto label_2ecc78;
        case 0x2ecc7cu: goto label_2ecc7c;
        case 0x2ecc80u: goto label_2ecc80;
        case 0x2ecc84u: goto label_2ecc84;
        case 0x2ecc88u: goto label_2ecc88;
        case 0x2ecc8cu: goto label_2ecc8c;
        case 0x2ecc90u: goto label_2ecc90;
        case 0x2ecc94u: goto label_2ecc94;
        case 0x2ecc98u: goto label_2ecc98;
        case 0x2ecc9cu: goto label_2ecc9c;
        case 0x2ecca0u: goto label_2ecca0;
        case 0x2ecca4u: goto label_2ecca4;
        case 0x2ecca8u: goto label_2ecca8;
        case 0x2eccacu: goto label_2eccac;
        case 0x2eccb0u: goto label_2eccb0;
        case 0x2eccb4u: goto label_2eccb4;
        case 0x2eccb8u: goto label_2eccb8;
        case 0x2eccbcu: goto label_2eccbc;
        case 0x2eccc0u: goto label_2eccc0;
        case 0x2eccc4u: goto label_2eccc4;
        case 0x2eccc8u: goto label_2eccc8;
        case 0x2eccccu: goto label_2ecccc;
        case 0x2eccd0u: goto label_2eccd0;
        case 0x2eccd4u: goto label_2eccd4;
        case 0x2eccd8u: goto label_2eccd8;
        case 0x2eccdcu: goto label_2eccdc;
        case 0x2ecce0u: goto label_2ecce0;
        case 0x2ecce4u: goto label_2ecce4;
        case 0x2ecce8u: goto label_2ecce8;
        case 0x2eccecu: goto label_2eccec;
        case 0x2eccf0u: goto label_2eccf0;
        case 0x2eccf4u: goto label_2eccf4;
        case 0x2eccf8u: goto label_2eccf8;
        case 0x2eccfcu: goto label_2eccfc;
        case 0x2ecd00u: goto label_2ecd00;
        case 0x2ecd04u: goto label_2ecd04;
        case 0x2ecd08u: goto label_2ecd08;
        case 0x2ecd0cu: goto label_2ecd0c;
        case 0x2ecd10u: goto label_2ecd10;
        case 0x2ecd14u: goto label_2ecd14;
        case 0x2ecd18u: goto label_2ecd18;
        case 0x2ecd1cu: goto label_2ecd1c;
        case 0x2ecd20u: goto label_2ecd20;
        case 0x2ecd24u: goto label_2ecd24;
        case 0x2ecd28u: goto label_2ecd28;
        case 0x2ecd2cu: goto label_2ecd2c;
        case 0x2ecd30u: goto label_2ecd30;
        case 0x2ecd34u: goto label_2ecd34;
        case 0x2ecd38u: goto label_2ecd38;
        case 0x2ecd3cu: goto label_2ecd3c;
        case 0x2ecd40u: goto label_2ecd40;
        case 0x2ecd44u: goto label_2ecd44;
        case 0x2ecd48u: goto label_2ecd48;
        case 0x2ecd4cu: goto label_2ecd4c;
        case 0x2ecd50u: goto label_2ecd50;
        case 0x2ecd54u: goto label_2ecd54;
        case 0x2ecd58u: goto label_2ecd58;
        case 0x2ecd5cu: goto label_2ecd5c;
        case 0x2ecd60u: goto label_2ecd60;
        case 0x2ecd64u: goto label_2ecd64;
        case 0x2ecd68u: goto label_2ecd68;
        case 0x2ecd6cu: goto label_2ecd6c;
        case 0x2ecd70u: goto label_2ecd70;
        case 0x2ecd74u: goto label_2ecd74;
        case 0x2ecd78u: goto label_2ecd78;
        case 0x2ecd7cu: goto label_2ecd7c;
        case 0x2ecd80u: goto label_2ecd80;
        case 0x2ecd84u: goto label_2ecd84;
        case 0x2ecd88u: goto label_2ecd88;
        case 0x2ecd8cu: goto label_2ecd8c;
        case 0x2ecd90u: goto label_2ecd90;
        case 0x2ecd94u: goto label_2ecd94;
        case 0x2ecd98u: goto label_2ecd98;
        case 0x2ecd9cu: goto label_2ecd9c;
        case 0x2ecda0u: goto label_2ecda0;
        case 0x2ecda4u: goto label_2ecda4;
        case 0x2ecda8u: goto label_2ecda8;
        case 0x2ecdacu: goto label_2ecdac;
        case 0x2ecdb0u: goto label_2ecdb0;
        case 0x2ecdb4u: goto label_2ecdb4;
        case 0x2ecdb8u: goto label_2ecdb8;
        case 0x2ecdbcu: goto label_2ecdbc;
        case 0x2ecdc0u: goto label_2ecdc0;
        case 0x2ecdc4u: goto label_2ecdc4;
        case 0x2ecdc8u: goto label_2ecdc8;
        case 0x2ecdccu: goto label_2ecdcc;
        case 0x2ecdd0u: goto label_2ecdd0;
        case 0x2ecdd4u: goto label_2ecdd4;
        case 0x2ecdd8u: goto label_2ecdd8;
        case 0x2ecddcu: goto label_2ecddc;
        case 0x2ecde0u: goto label_2ecde0;
        case 0x2ecde4u: goto label_2ecde4;
        case 0x2ecde8u: goto label_2ecde8;
        case 0x2ecdecu: goto label_2ecdec;
        case 0x2ecdf0u: goto label_2ecdf0;
        case 0x2ecdf4u: goto label_2ecdf4;
        case 0x2ecdf8u: goto label_2ecdf8;
        case 0x2ecdfcu: goto label_2ecdfc;
        case 0x2ece00u: goto label_2ece00;
        case 0x2ece04u: goto label_2ece04;
        case 0x2ece08u: goto label_2ece08;
        case 0x2ece0cu: goto label_2ece0c;
        case 0x2ece10u: goto label_2ece10;
        case 0x2ece14u: goto label_2ece14;
        case 0x2ece18u: goto label_2ece18;
        case 0x2ece1cu: goto label_2ece1c;
        case 0x2ece20u: goto label_2ece20;
        case 0x2ece24u: goto label_2ece24;
        case 0x2ece28u: goto label_2ece28;
        case 0x2ece2cu: goto label_2ece2c;
        case 0x2ece30u: goto label_2ece30;
        case 0x2ece34u: goto label_2ece34;
        case 0x2ece38u: goto label_2ece38;
        case 0x2ece3cu: goto label_2ece3c;
        case 0x2ece40u: goto label_2ece40;
        case 0x2ece44u: goto label_2ece44;
        case 0x2ece48u: goto label_2ece48;
        case 0x2ece4cu: goto label_2ece4c;
        case 0x2ece50u: goto label_2ece50;
        case 0x2ece54u: goto label_2ece54;
        case 0x2ece58u: goto label_2ece58;
        case 0x2ece5cu: goto label_2ece5c;
        case 0x2ece60u: goto label_2ece60;
        case 0x2ece64u: goto label_2ece64;
        case 0x2ece68u: goto label_2ece68;
        case 0x2ece6cu: goto label_2ece6c;
        case 0x2ece70u: goto label_2ece70;
        case 0x2ece74u: goto label_2ece74;
        case 0x2ece78u: goto label_2ece78;
        case 0x2ece7cu: goto label_2ece7c;
        case 0x2ece80u: goto label_2ece80;
        case 0x2ece84u: goto label_2ece84;
        case 0x2ece88u: goto label_2ece88;
        case 0x2ece8cu: goto label_2ece8c;
        case 0x2ece90u: goto label_2ece90;
        case 0x2ece94u: goto label_2ece94;
        case 0x2ece98u: goto label_2ece98;
        case 0x2ece9cu: goto label_2ece9c;
        case 0x2ecea0u: goto label_2ecea0;
        case 0x2ecea4u: goto label_2ecea4;
        case 0x2ecea8u: goto label_2ecea8;
        case 0x2eceacu: goto label_2eceac;
        case 0x2eceb0u: goto label_2eceb0;
        case 0x2eceb4u: goto label_2eceb4;
        case 0x2eceb8u: goto label_2eceb8;
        case 0x2ecebcu: goto label_2ecebc;
        case 0x2ecec0u: goto label_2ecec0;
        case 0x2ecec4u: goto label_2ecec4;
        case 0x2ecec8u: goto label_2ecec8;
        case 0x2ececcu: goto label_2ececc;
        case 0x2eced0u: goto label_2eced0;
        case 0x2eced4u: goto label_2eced4;
        case 0x2eced8u: goto label_2eced8;
        case 0x2ecedcu: goto label_2ecedc;
        case 0x2ecee0u: goto label_2ecee0;
        case 0x2ecee4u: goto label_2ecee4;
        case 0x2ecee8u: goto label_2ecee8;
        case 0x2eceecu: goto label_2eceec;
        case 0x2ecef0u: goto label_2ecef0;
        case 0x2ecef4u: goto label_2ecef4;
        case 0x2ecef8u: goto label_2ecef8;
        case 0x2ecefcu: goto label_2ecefc;
        case 0x2ecf00u: goto label_2ecf00;
        case 0x2ecf04u: goto label_2ecf04;
        case 0x2ecf08u: goto label_2ecf08;
        case 0x2ecf0cu: goto label_2ecf0c;
        case 0x2ecf10u: goto label_2ecf10;
        case 0x2ecf14u: goto label_2ecf14;
        case 0x2ecf18u: goto label_2ecf18;
        case 0x2ecf1cu: goto label_2ecf1c;
        case 0x2ecf20u: goto label_2ecf20;
        case 0x2ecf24u: goto label_2ecf24;
        case 0x2ecf28u: goto label_2ecf28;
        case 0x2ecf2cu: goto label_2ecf2c;
        case 0x2ecf30u: goto label_2ecf30;
        case 0x2ecf34u: goto label_2ecf34;
        case 0x2ecf38u: goto label_2ecf38;
        case 0x2ecf3cu: goto label_2ecf3c;
        case 0x2ecf40u: goto label_2ecf40;
        case 0x2ecf44u: goto label_2ecf44;
        case 0x2ecf48u: goto label_2ecf48;
        case 0x2ecf4cu: goto label_2ecf4c;
        case 0x2ecf50u: goto label_2ecf50;
        case 0x2ecf54u: goto label_2ecf54;
        case 0x2ecf58u: goto label_2ecf58;
        case 0x2ecf5cu: goto label_2ecf5c;
        case 0x2ecf60u: goto label_2ecf60;
        case 0x2ecf64u: goto label_2ecf64;
        case 0x2ecf68u: goto label_2ecf68;
        case 0x2ecf6cu: goto label_2ecf6c;
        case 0x2ecf70u: goto label_2ecf70;
        case 0x2ecf74u: goto label_2ecf74;
        case 0x2ecf78u: goto label_2ecf78;
        case 0x2ecf7cu: goto label_2ecf7c;
        case 0x2ecf80u: goto label_2ecf80;
        case 0x2ecf84u: goto label_2ecf84;
        case 0x2ecf88u: goto label_2ecf88;
        case 0x2ecf8cu: goto label_2ecf8c;
        case 0x2ecf90u: goto label_2ecf90;
        case 0x2ecf94u: goto label_2ecf94;
        case 0x2ecf98u: goto label_2ecf98;
        case 0x2ecf9cu: goto label_2ecf9c;
        case 0x2ecfa0u: goto label_2ecfa0;
        case 0x2ecfa4u: goto label_2ecfa4;
        case 0x2ecfa8u: goto label_2ecfa8;
        case 0x2ecfacu: goto label_2ecfac;
        case 0x2ecfb0u: goto label_2ecfb0;
        case 0x2ecfb4u: goto label_2ecfb4;
        case 0x2ecfb8u: goto label_2ecfb8;
        case 0x2ecfbcu: goto label_2ecfbc;
        case 0x2ecfc0u: goto label_2ecfc0;
        case 0x2ecfc4u: goto label_2ecfc4;
        case 0x2ecfc8u: goto label_2ecfc8;
        case 0x2ecfccu: goto label_2ecfcc;
        case 0x2ecfd0u: goto label_2ecfd0;
        case 0x2ecfd4u: goto label_2ecfd4;
        case 0x2ecfd8u: goto label_2ecfd8;
        case 0x2ecfdcu: goto label_2ecfdc;
        case 0x2ecfe0u: goto label_2ecfe0;
        case 0x2ecfe4u: goto label_2ecfe4;
        default: break;
    }

    ctx->pc = 0x2ec780u;

label_2ec780:
    // 0x2ec780: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ec780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2ec784:
    // 0x2ec784: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2ec784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2ec788:
    // 0x2ec788: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2ec788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2ec78c:
    // 0x2ec78c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ec78cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ec790:
    // 0x2ec790: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2ec790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2ec794:
    // 0x2ec794: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ec794u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ec798:
    // 0x2ec798: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ec798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2ec79c:
    // 0x2ec79c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2ec79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2ec7a0:
    // 0x2ec7a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ec7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ec7a4:
    // 0x2ec7a4: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x2ec7a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2ec7a8:
    // 0x2ec7a8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2ec7a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2ec7ac:
    // 0x2ec7ac: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2ec7acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2ec7b0:
    // 0x2ec7b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ec7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ec7b4:
    // 0x2ec7b4: 0xc0bb14c  jal         func_2EC530
label_2ec7b8:
    if (ctx->pc == 0x2EC7B8u) {
        ctx->pc = 0x2EC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7B4u;
        // 0x2ec7b8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC7BCu;
        goto label_2ec7bc;
    }
    ctx->pc = 0x2EC7B4u;
    SET_GPR_U32(ctx, 31, 0x2EC7BCu);
    ctx->pc = 0x2EC7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC7B4u;
    // 0x2ec7b8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC530u, 0x2EC7B4u, 0x2EC7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC7BCu;
label_2ec7bc:
    // 0x2ec7bc: 0x105301fe  beq         $v0, $s3, . + 4 + (0x1FE << 2)
label_2ec7c0:
    if (ctx->pc == 0x2EC7C0u) {
        ctx->pc = 0x2EC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7BCu;
        // 0x2ec7c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC7C4u;
        goto label_2ec7c4;
    }
    ctx->pc = 0x2EC7BCu;
    {
        const bool branch_taken_0x2ec7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2EC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7BCu;
        // 0x2ec7c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec7bc) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2EC7C4u;
label_2ec7c4:
    // 0x2ec7c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ec7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ec7c8:
    // 0x2ec7c8: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2ec7c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2ec7cc:
    // 0x2ec7cc: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2ec7ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2ec7d0:
    // 0x2ec7d0: 0x105301f9  beq         $v0, $s3, . + 4 + (0x1F9 << 2)
label_2ec7d4:
    if (ctx->pc == 0x2EC7D4u) {
        ctx->pc = 0x2EC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7D0u;
        // 0x2ec7d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC7D8u;
        goto label_2ec7d8;
    }
    ctx->pc = 0x2EC7D0u;
    {
        const bool branch_taken_0x2ec7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2EC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7D0u;
        // 0x2ec7d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec7d0) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2EC7D8u;
label_2ec7d8:
    // 0x2ec7d8: 0x92220026  lbu         $v0, 0x26($s1)
    ctx->pc = 0x2ec7d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
label_2ec7dc:
    // 0x2ec7dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ec7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ec7e0:
    // 0x2ec7e0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ec7e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2ec7e4:
    // 0x2ec7e4: 0x105301f4  beq         $v0, $s3, . + 4 + (0x1F4 << 2)
label_2ec7e8:
    if (ctx->pc == 0x2EC7E8u) {
        ctx->pc = 0x2EC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7E4u;
        // 0x2ec7e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC7ECu;
        goto label_2ec7ec;
    }
    ctx->pc = 0x2EC7E4u;
    {
        const bool branch_taken_0x2ec7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2EC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7E4u;
        // 0x2ec7e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec7e4) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2EC7ECu;
label_2ec7ec:
    // 0x2ec7ec: 0xc0bb118  jal         func_2EC460
label_2ec7f0:
    if (ctx->pc == 0x2EC7F0u) {
        ctx->pc = 0x2EC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7ECu;
        // 0x2ec7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC7F4u;
        goto label_2ec7f4;
    }
    ctx->pc = 0x2EC7ECu;
    SET_GPR_U32(ctx, 31, 0x2EC7F4u);
    ctx->pc = 0x2EC7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC7ECu;
    // 0x2ec7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC460u, 0x2EC7ECu, 0x2EC7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC7F4u;
label_2ec7f4:
    // 0x2ec7f4: 0x9222001c  lbu         $v0, 0x1C($s1)
    ctx->pc = 0x2ec7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
label_2ec7f8:
    // 0x2ec7f8: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
label_2ec7fc:
    if (ctx->pc == 0x2EC7FCu) {
        ctx->pc = 0x2EC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7F8u;
        // 0x2ec7fc: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC800u;
        goto label_2ec800;
    }
    ctx->pc = 0x2EC7F8u;
    {
        const bool branch_taken_0x2ec7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec7f8) {
            ctx->pc = 0x2EC7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC7F8u;
            // 0x2ec7fc: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC8C8u;
            goto label_2ec8c8;
        }
    }
    ctx->pc = 0x2EC800u;
label_2ec800:
    // 0x2ec800: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2ec800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2ec804:
    // 0x2ec804: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ec804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ec808:
    // 0x2ec808: 0xc089998  jal         func_226660
label_2ec80c:
    if (ctx->pc == 0x2EC80Cu) {
        ctx->pc = 0x2EC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC808u;
        // 0x2ec80c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC810u;
        goto label_2ec810;
    }
    ctx->pc = 0x2EC808u;
    SET_GPR_U32(ctx, 31, 0x2EC810u);
    ctx->pc = 0x2EC80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC808u;
    // 0x2ec80c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2EC808u, 0x2EC810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC810u;
label_2ec810:
    // 0x2ec810: 0x144001e9  bnez        $v0, . + 4 + (0x1E9 << 2)
label_2ec814:
    if (ctx->pc == 0x2EC814u) {
        ctx->pc = 0x2EC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC810u;
        // 0x2ec814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC818u;
        goto label_2ec818;
    }
    ctx->pc = 0x2EC810u;
    {
        const bool branch_taken_0x2ec810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC810u;
        // 0x2ec814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec810) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2EC818u;
label_2ec818:
    // 0x2ec818: 0xc0a47b4  jal         func_291ED0
label_2ec81c:
    if (ctx->pc == 0x2EC81Cu) {
        ctx->pc = 0x2EC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC818u;
        // 0x2ec81c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC820u;
        goto label_2ec820;
    }
    ctx->pc = 0x2EC818u;
    SET_GPR_U32(ctx, 31, 0x2EC820u);
    ctx->pc = 0x2EC81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC818u;
    // 0x2ec81c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2EC818u, 0x2EC820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC820u;
label_2ec820:
    // 0x2ec820: 0x14530011  bne         $v0, $s3, . + 4 + (0x11 << 2)
label_2ec824:
    if (ctx->pc == 0x2EC824u) {
        ctx->pc = 0x2EC828u;
        goto label_2ec828;
    }
    ctx->pc = 0x2EC820u;
    {
        const bool branch_taken_0x2ec820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2ec820) {
            ctx->pc = 0x2EC868u;
            goto label_2ec868;
        }
    }
    ctx->pc = 0x2EC828u;
label_2ec828:
    // 0x2ec828: 0xc0bb13a  jal         func_2EC4E8
label_2ec82c:
    if (ctx->pc == 0x2EC82Cu) {
        ctx->pc = 0x2EC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC828u;
        // 0x2ec82c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC830u;
        goto label_2ec830;
    }
    ctx->pc = 0x2EC828u;
    SET_GPR_U32(ctx, 31, 0x2EC830u);
    ctx->pc = 0x2EC82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC828u;
    // 0x2ec82c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC4E8u, 0x2EC828u, 0x2EC830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC830u;
label_2ec830:
    // 0x2ec830: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2ec830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2ec834:
    // 0x2ec834: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2ec834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2ec838:
    // 0x2ec838: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ec838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2ec83c:
    // 0x2ec83c: 0x240500a7  addiu       $a1, $zero, 0xA7
    ctx->pc = 0x2ec83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
label_2ec840:
    // 0x2ec840: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x2ec840u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_2ec844:
    // 0x2ec844: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x2ec844u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2ec848:
    // 0x2ec848: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2ec848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2ec84c:
    // 0x2ec84c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ec84cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ec850:
    // 0x2ec850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ec850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ec854:
    // 0x2ec854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ec854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec858:
    // 0x2ec858: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ec858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ec85c:
    // 0x2ec85c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ec85cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec860:
    // 0x2ec860: 0xc088178  jal         func_2205E0
label_2ec864:
    if (ctx->pc == 0x2EC864u) {
        ctx->pc = 0x2EC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC860u;
        // 0x2ec864: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC868u;
        goto label_2ec868;
    }
    ctx->pc = 0x2EC860u;
    SET_GPR_U32(ctx, 31, 0x2EC868u);
    ctx->pc = 0x2EC864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC860u;
    // 0x2ec864: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2EC860u, 0x2EC868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC868u;
label_2ec868:
    // 0x2ec868: 0xc0a367c  jal         func_28D9F0
label_2ec86c:
    if (ctx->pc == 0x2EC86Cu) {
        ctx->pc = 0x2EC86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC868u;
        // 0x2ec86c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC870u;
        goto label_2ec870;
    }
    ctx->pc = 0x2EC868u;
    SET_GPR_U32(ctx, 31, 0x2EC870u);
    ctx->pc = 0x2EC86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC868u;
    // 0x2ec86c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EC868u, 0x2EC870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC870u;
label_2ec870:
    // 0x2ec870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ec874:
    // 0x2ec874: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_2ec878:
    if (ctx->pc == 0x2EC878u) {
        ctx->pc = 0x2EC878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC874u;
        // 0x2ec878: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC87Cu;
        goto label_2ec87c;
    }
    ctx->pc = 0x2EC874u;
    {
        const bool branch_taken_0x2ec874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC874u;
        // 0x2ec878: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec874) {
            ctx->pc = 0x2EC8BCu;
            goto label_2ec8bc;
        }
    }
    ctx->pc = 0x2EC87Cu;
label_2ec87c:
    // 0x2ec87c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec880:
    // 0x2ec880: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2ec880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2ec884:
    // 0x2ec884: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2ec884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2ec888:
    // 0x2ec888: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ec888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2ec88c:
    // 0x2ec88c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ec88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2ec890:
    // 0x2ec890: 0xc0cd4fc  jal         func_3353F0
label_2ec894:
    if (ctx->pc == 0x2EC894u) {
        ctx->pc = 0x2EC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC890u;
        // 0x2ec894: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC898u;
        goto label_2ec898;
    }
    ctx->pc = 0x2EC890u;
    SET_GPR_U32(ctx, 31, 0x2EC898u);
    ctx->pc = 0x2EC894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC890u;
    // 0x2ec894: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2EC890u, 0x2EC898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC898u;
label_2ec898:
    // 0x2ec898: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ec898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ec89c:
    // 0x2ec89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ec8a0:
    // 0x2ec8a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ec8a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ec8a4:
    // 0x2ec8a4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2ec8a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ec8a8:
    // 0x2ec8a8: 0x24060283  addiu       $a2, $zero, 0x283
    ctx->pc = 0x2ec8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
label_2ec8ac:
    // 0x2ec8ac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ec8acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2ec8b0:
    // 0x2ec8b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ec8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ec8b4:
    // 0x2ec8b4: 0xc0be968  jal         func_2FA5A0
label_2ec8b8:
    if (ctx->pc == 0x2EC8B8u) {
        ctx->pc = 0x2EC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8B4u;
        // 0x2ec8b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC8BCu;
        goto label_2ec8bc;
    }
    ctx->pc = 0x2EC8B4u;
    SET_GPR_U32(ctx, 31, 0x2EC8BCu);
    ctx->pc = 0x2EC8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC8B4u;
    // 0x2ec8b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2EC8B4u, 0x2EC8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC8BCu;
label_2ec8bc:
    // 0x2ec8bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ec8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ec8c0:
    // 0x2ec8c0: 0x100001bc  b           . + 4 + (0x1BC << 2)
label_2ec8c4:
    if (ctx->pc == 0x2EC8C4u) {
        ctx->pc = 0x2EC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8C0u;
        // 0x2ec8c4: 0xa222001c  sb          $v0, 0x1C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC8C8u;
        goto label_2ec8c8;
    }
    ctx->pc = 0x2EC8C0u;
    {
        const bool branch_taken_0x2ec8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8C0u;
        // 0x2ec8c4: 0xa222001c  sb          $v0, 0x1C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec8c0) {
            ctx->pc = 0x2ECFB4u;
            goto label_2ecfb4;
        }
    }
    ctx->pc = 0x2EC8C8u;
label_2ec8c8:
    // 0x2ec8c8: 0xc0e409a  jal         func_390268
label_2ec8cc:
    if (ctx->pc == 0x2EC8CCu) {
        ctx->pc = 0x2EC8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8C8u;
        // 0x2ec8cc: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC8D0u;
        goto label_2ec8d0;
    }
    ctx->pc = 0x2EC8C8u;
    SET_GPR_U32(ctx, 31, 0x2EC8D0u);
    ctx->pc = 0x2EC8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC8C8u;
    // 0x2ec8cc: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2EC8C8u, 0x2EC8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC8D0u;
label_2ec8d0:
    // 0x2ec8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ec8d4:
    // 0x2ec8d4: 0xc0a34d6  jal         func_28D358
label_2ec8d8:
    if (ctx->pc == 0x2EC8D8u) {
        ctx->pc = 0x2EC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8D4u;
        // 0x2ec8d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC8DCu;
        goto label_2ec8dc;
    }
    ctx->pc = 0x2EC8D4u;
    SET_GPR_U32(ctx, 31, 0x2EC8DCu);
    ctx->pc = 0x2EC8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC8D4u;
    // 0x2ec8d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2EC8D4u, 0x2EC8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC8DCu;
label_2ec8dc:
    // 0x2ec8dc: 0x9223001c  lbu         $v1, 0x1C($s1)
    ctx->pc = 0x2ec8dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
label_2ec8e0:
    // 0x2ec8e0: 0x1473008e  bne         $v1, $s3, . + 4 + (0x8E << 2)
label_2ec8e4:
    if (ctx->pc == 0x2EC8E4u) {
        ctx->pc = 0x2EC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8E0u;
        // 0x2ec8e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC8E8u;
        goto label_2ec8e8;
    }
    ctx->pc = 0x2EC8E0u;
    {
        const bool branch_taken_0x2ec8e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x2EC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8E0u;
        // 0x2ec8e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec8e0) {
            ctx->pc = 0x2ECB1Cu;
            goto label_2ecb1c;
        }
    }
    ctx->pc = 0x2EC8E8u;
label_2ec8e8:
    // 0x2ec8e8: 0xc088eb4  jal         func_223AD0
label_2ec8ec:
    if (ctx->pc == 0x2EC8ECu) {
        ctx->pc = 0x2EC8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8E8u;
        // 0x2ec8ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC8F0u;
        goto label_2ec8f0;
    }
    ctx->pc = 0x2EC8E8u;
    SET_GPR_U32(ctx, 31, 0x2EC8F0u);
    ctx->pc = 0x2EC8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC8E8u;
    // 0x2ec8ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x2EC8E8u, 0x2EC8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC8F0u;
label_2ec8f0:
    // 0x2ec8f0: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
label_2ec8f4:
    if (ctx->pc == 0x2EC8F4u) {
        ctx->pc = 0x2EC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8F0u;
        // 0x2ec8f4: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC8F8u;
        goto label_2ec8f8;
    }
    ctx->pc = 0x2EC8F0u;
    {
        const bool branch_taken_0x2ec8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2ec8f0) {
            ctx->pc = 0x2EC8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC8F0u;
            // 0x2ec8f4: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC90Cu;
            goto label_2ec90c;
        }
    }
    ctx->pc = 0x2EC8F8u;
label_2ec8f8:
    // 0x2ec8f8: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2ec8f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2ec8fc:
    // 0x2ec8fc: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2ec8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2ec900:
    // 0x2ec900: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ec900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ec904:
    // 0x2ec904: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2ec904u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
label_2ec908:
    // 0x2ec908: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x2ec908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_2ec90c:
    // 0x2ec90c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2ec910:
    if (ctx->pc == 0x2EC910u) {
        ctx->pc = 0x2EC914u;
        goto label_2ec914;
    }
    ctx->pc = 0x2EC90Cu;
    {
        const bool branch_taken_0x2ec90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec90c) {
            ctx->pc = 0x2EC938u;
            goto label_2ec938;
        }
    }
    ctx->pc = 0x2EC914u;
label_2ec914:
    // 0x2ec914: 0xc088eb4  jal         func_223AD0
label_2ec918:
    if (ctx->pc == 0x2EC918u) {
        ctx->pc = 0x2EC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC914u;
        // 0x2ec918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC91Cu;
        goto label_2ec91c;
    }
    ctx->pc = 0x2EC914u;
    SET_GPR_U32(ctx, 31, 0x2EC91Cu);
    ctx->pc = 0x2EC918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC914u;
    // 0x2ec918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x2EC914u, 0x2EC91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC91Cu;
label_2ec91c:
    // 0x2ec91c: 0x105301a6  beq         $v0, $s3, . + 4 + (0x1A6 << 2)
label_2ec920:
    if (ctx->pc == 0x2EC920u) {
        ctx->pc = 0x2EC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC91Cu;
        // 0x2ec920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC924u;
        goto label_2ec924;
    }
    ctx->pc = 0x2EC91Cu;
    {
        const bool branch_taken_0x2ec91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2EC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC91Cu;
        // 0x2ec920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec91c) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2EC924u;
label_2ec924:
    // 0x2ec924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ec928:
    // 0x2ec928: 0xc0bb080  jal         func_2EC200
label_2ec92c:
    if (ctx->pc == 0x2EC92Cu) {
        ctx->pc = 0x2EC92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC928u;
        // 0x2ec92c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC930u;
        goto label_2ec930;
    }
    ctx->pc = 0x2EC928u;
    SET_GPR_U32(ctx, 31, 0x2EC930u);
    ctx->pc = 0x2EC92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC928u;
    // 0x2ec92c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC200u, 0x2EC928u, 0x2EC930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC930u;
label_2ec930:
    // 0x2ec930: 0x100001a1  b           . + 4 + (0x1A1 << 2)
label_2ec934:
    if (ctx->pc == 0x2EC934u) {
        ctx->pc = 0x2EC934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC930u;
        // 0x2ec934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC938u;
        goto label_2ec938;
    }
    ctx->pc = 0x2EC930u;
    {
        const bool branch_taken_0x2ec930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC930u;
        // 0x2ec934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec930) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2EC938u;
label_2ec938:
    // 0x2ec938: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_2ec93c:
    if (ctx->pc == 0x2EC93Cu) {
        ctx->pc = 0x2EC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC938u;
        // 0x2ec93c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC940u;
        goto label_2ec940;
    }
    ctx->pc = 0x2EC938u;
    {
        const bool branch_taken_0x2ec938 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC938u;
        // 0x2ec93c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec938) {
            ctx->pc = 0x2EC9A4u;
            goto label_2ec9a4;
        }
    }
    ctx->pc = 0x2EC940u;
label_2ec940:
    // 0x2ec940: 0xc08a158  jal         func_228560
label_2ec944:
    if (ctx->pc == 0x2EC944u) {
        ctx->pc = 0x2EC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC940u;
        // 0x2ec944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC948u;
        goto label_2ec948;
    }
    ctx->pc = 0x2EC940u;
    SET_GPR_U32(ctx, 31, 0x2EC948u);
    ctx->pc = 0x2EC944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC940u;
    // 0x2ec944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228560u, 0x2EC940u, 0x2EC948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC948u;
label_2ec948:
    // 0x2ec948: 0x50530001  beql        $v0, $s3, . + 4 + (0x1 << 2)
label_2ec94c:
    if (ctx->pc == 0x2EC94Cu) {
        ctx->pc = 0x2EC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC948u;
        // 0x2ec94c: 0xa2200020  sb          $zero, 0x20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC950u;
        goto label_2ec950;
    }
    ctx->pc = 0x2EC948u;
    {
        const bool branch_taken_0x2ec948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2ec948) {
            ctx->pc = 0x2EC94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC948u;
            // 0x2ec94c: 0xa2200020  sb          $zero, 0x20($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC950u;
            goto label_2ec950;
        }
    }
    ctx->pc = 0x2EC950u;
label_2ec950:
    // 0x2ec950: 0xc08a08a  jal         func_228228
label_2ec954:
    if (ctx->pc == 0x2EC954u) {
        ctx->pc = 0x2EC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC950u;
        // 0x2ec954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC958u;
        goto label_2ec958;
    }
    ctx->pc = 0x2EC950u;
    SET_GPR_U32(ctx, 31, 0x2EC958u);
    ctx->pc = 0x2EC954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC950u;
    // 0x2ec954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2EC950u, 0x2EC958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC958u;
label_2ec958:
    // 0x2ec958: 0x50530001  beql        $v0, $s3, . + 4 + (0x1 << 2)
label_2ec95c:
    if (ctx->pc == 0x2EC95Cu) {
        ctx->pc = 0x2EC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC958u;
        // 0x2ec95c: 0xa2200020  sb          $zero, 0x20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC960u;
        goto label_2ec960;
    }
    ctx->pc = 0x2EC958u;
    {
        const bool branch_taken_0x2ec958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2ec958) {
            ctx->pc = 0x2EC95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC958u;
            // 0x2ec95c: 0xa2200020  sb          $zero, 0x20($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC960u;
            goto label_2ec960;
        }
    }
    ctx->pc = 0x2EC960u;
label_2ec960:
    // 0x2ec960: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2ec960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2ec964:
    // 0x2ec964: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ec964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2ec968:
    // 0x2ec968: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2ec968u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2ec96c:
    // 0x2ec96c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2ec96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2ec970:
    // 0x2ec970: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ec970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ec974:
    // 0x2ec974: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ec974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2ec978:
    // 0x2ec978: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ec978u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2ec97c:
    // 0x2ec97c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ec97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ec980:
    // 0x2ec980: 0xc474013c  lwc1        $f20, 0x13C($v1)
    ctx->pc = 0x2ec980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ec984:
    // 0x2ec984: 0xc0cdb38  jal         func_336CE0
label_2ec988:
    if (ctx->pc == 0x2EC988u) {
        ctx->pc = 0x2EC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC984u;
        // 0x2ec988: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC98Cu;
        goto label_2ec98c;
    }
    ctx->pc = 0x2EC984u;
    SET_GPR_U32(ctx, 31, 0x2EC98Cu);
    ctx->pc = 0x2EC988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC984u;
    // 0x2ec988: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2EC984u, 0x2EC98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC98Cu;
label_2ec98c:
    // 0x2ec98c: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2ec98cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2ec990:
    // 0x2ec990: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2ec990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ec994:
    // 0x2ec994: 0x0  nop
    ctx->pc = 0x2ec994u;
    // NOP
label_2ec998:
    // 0x2ec998: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2ec99c:
    if (ctx->pc == 0x2EC99Cu) {
        ctx->pc = 0x2EC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC998u;
        // 0x2ec99c: 0xa2200020  sb          $zero, 0x20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC9A0u;
        goto label_2ec9a0;
    }
    ctx->pc = 0x2EC998u;
    {
        const bool branch_taken_0x2ec998 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec998) {
            ctx->pc = 0x2EC99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC998u;
            // 0x2ec99c: 0xa2200020  sb          $zero, 0x20($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC9A0u;
            goto label_2ec9a0;
        }
    }
    ctx->pc = 0x2EC9A0u;
label_2ec9a0:
    // 0x2ec9a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ec9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2ec9a4:
    // 0x2ec9a4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2ec9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2ec9a8:
    // 0x2ec9a8: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2ec9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2ec9ac:
    // 0x2ec9ac: 0x8c730048  lw          $s3, 0x48($v1)
    ctx->pc = 0x2ec9acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2ec9b0:
    // 0x2ec9b0: 0x93102b  sltu        $v0, $a0, $s3
    ctx->pc = 0x2ec9b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2ec9b4:
    // 0x2ec9b4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_2ec9b8:
    if (ctx->pc == 0x2EC9B8u) {
        ctx->pc = 0x2EC9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9B4u;
        // 0x2ec9b8: 0x92220021  lbu         $v0, 0x21($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC9BCu;
        goto label_2ec9bc;
    }
    ctx->pc = 0x2EC9B4u;
    {
        const bool branch_taken_0x2ec9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec9b4) {
            ctx->pc = 0x2EC9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC9B4u;
            // 0x2ec9b8: 0x92220021  lbu         $v0, 0x21($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECA10u;
            goto label_2eca10;
        }
    }
    ctx->pc = 0x2EC9BCu;
label_2ec9bc:
    // 0x2ec9bc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_2ec9c0:
    if (ctx->pc == 0x2EC9C0u) {
        ctx->pc = 0x2EC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9BCu;
        // 0x2ec9c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC9C4u;
        goto label_2ec9c4;
    }
    ctx->pc = 0x2EC9BCu;
    {
        const bool branch_taken_0x2ec9bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9BCu;
        // 0x2ec9c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec9bc) {
            ctx->pc = 0x2ECA04u;
            goto label_2eca04;
        }
    }
    ctx->pc = 0x2EC9C4u;
label_2ec9c4:
    // 0x2ec9c4: 0xc08a10a  jal         func_228428
label_2ec9c8:
    if (ctx->pc == 0x2EC9C8u) {
        ctx->pc = 0x2EC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9C4u;
        // 0x2ec9c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC9CCu;
        goto label_2ec9cc;
    }
    ctx->pc = 0x2EC9C4u;
    SET_GPR_U32(ctx, 31, 0x2EC9CCu);
    ctx->pc = 0x2EC9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC9C4u;
    // 0x2ec9c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228428u, 0x2EC9C4u, 0x2EC9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9CCu;
label_2ec9cc:
    // 0x2ec9cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ec9ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ec9d0:
    // 0x2ec9d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ec9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ec9d4:
    // 0x2ec9d4: 0x1682000b  bne         $s4, $v0, . + 4 + (0xB << 2)
label_2ec9d8:
    if (ctx->pc == 0x2EC9D8u) {
        ctx->pc = 0x2EC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9D4u;
        // 0x2ec9d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC9DCu;
        goto label_2ec9dc;
    }
    ctx->pc = 0x2EC9D4u;
    {
        const bool branch_taken_0x2ec9d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9D4u;
        // 0x2ec9d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec9d4) {
            ctx->pc = 0x2ECA04u;
            goto label_2eca04;
        }
    }
    ctx->pc = 0x2EC9DCu;
label_2ec9dc:
    // 0x2ec9dc: 0xc087502  jal         func_21D408
label_2ec9e0:
    if (ctx->pc == 0x2EC9E0u) {
        ctx->pc = 0x2EC9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9DCu;
        // 0x2ec9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC9E4u;
        goto label_2ec9e4;
    }
    ctx->pc = 0x2EC9DCu;
    SET_GPR_U32(ctx, 31, 0x2EC9E4u);
    ctx->pc = 0x2EC9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC9DCu;
    // 0x2ec9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2EC9DCu, 0x2EC9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9E4u;
label_2ec9e4:
    // 0x2ec9e4: 0xc0e409a  jal         func_390268
label_2ec9e8:
    if (ctx->pc == 0x2EC9E8u) {
        ctx->pc = 0x2EC9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9E4u;
        // 0x2ec9e8: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC9ECu;
        goto label_2ec9ec;
    }
    ctx->pc = 0x2EC9E4u;
    SET_GPR_U32(ctx, 31, 0x2EC9ECu);
    ctx->pc = 0x2EC9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC9E4u;
    // 0x2ec9e8: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2EC9E4u, 0x2EC9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9ECu;
label_2ec9ec:
    // 0x2ec9ec: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
label_2ec9f0:
    if (ctx->pc == 0x2EC9F0u) {
        ctx->pc = 0x2EC9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9ECu;
        // 0x2ec9f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC9F4u;
        goto label_2ec9f4;
    }
    ctx->pc = 0x2EC9ECu;
    {
        const bool branch_taken_0x2ec9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2EC9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9ECu;
        // 0x2ec9f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec9ec) {
            ctx->pc = 0x2ECA04u;
            goto label_2eca04;
        }
    }
    ctx->pc = 0x2EC9F4u;
label_2ec9f4:
    // 0x2ec9f4: 0x266204e2  addiu       $v0, $s3, 0x4E2
    ctx->pc = 0x2ec9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1250));
label_2ec9f8:
    // 0x2ec9f8: 0xa2340021  sb          $s4, 0x21($s1)
    ctx->pc = 0x2ec9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 20));
label_2ec9fc:
    // 0x2ec9fc: 0x1000016d  b           . + 4 + (0x16D << 2)
label_2eca00:
    if (ctx->pc == 0x2ECA00u) {
        ctx->pc = 0x2ECA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9FCu;
        // 0x2eca00: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECA04u;
        goto label_2eca04;
    }
    ctx->pc = 0x2EC9FCu;
    {
        const bool branch_taken_0x2ec9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9FCu;
        // 0x2eca00: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec9fc) {
            ctx->pc = 0x2ECFB4u;
            goto label_2ecfb4;
        }
    }
    ctx->pc = 0x2ECA04u;
label_2eca04:
    // 0x2eca04: 0xa2200020  sb          $zero, 0x20($s1)
    ctx->pc = 0x2eca04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
label_2eca08:
    // 0x2eca08: 0x1000016a  b           . + 4 + (0x16A << 2)
label_2eca0c:
    if (ctx->pc == 0x2ECA0Cu) {
        ctx->pc = 0x2ECA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA08u;
        // 0x2eca0c: 0xa2220023  sb          $v0, 0x23($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECA10u;
        goto label_2eca10;
    }
    ctx->pc = 0x2ECA08u;
    {
        const bool branch_taken_0x2eca08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA08u;
        // 0x2eca0c: 0xa2220023  sb          $v0, 0x23($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca08) {
            ctx->pc = 0x2ECFB4u;
            goto label_2ecfb4;
        }
    }
    ctx->pc = 0x2ECA10u;
label_2eca10:
    // 0x2eca10: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2eca10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eca14:
    // 0x2eca14: 0x10540007  beq         $v0, $s4, . + 4 + (0x7 << 2)
label_2eca18:
    if (ctx->pc == 0x2ECA18u) {
        ctx->pc = 0x2ECA1Cu;
        goto label_2eca1c;
    }
    ctx->pc = 0x2ECA14u;
    {
        const bool branch_taken_0x2eca14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2eca14) {
            ctx->pc = 0x2ECA34u;
            goto label_2eca34;
        }
    }
    ctx->pc = 0x2ECA1Cu;
label_2eca1c:
    // 0x2eca1c: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x2eca1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_2eca20:
    // 0x2eca20: 0x14540021  bne         $v0, $s4, . + 4 + (0x21 << 2)
label_2eca24:
    if (ctx->pc == 0x2ECA24u) {
        ctx->pc = 0x2ECA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA20u;
        // 0x2eca24: 0x931023  subu        $v0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECA28u;
        goto label_2eca28;
    }
    ctx->pc = 0x2ECA20u;
    {
        const bool branch_taken_0x2eca20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2ECA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA20u;
        // 0x2eca24: 0x931023  subu        $v0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca20) {
            ctx->pc = 0x2ECAA8u;
            goto label_2ecaa8;
        }
    }
    ctx->pc = 0x2ECA28u;
label_2eca28:
    // 0x2eca28: 0x2c4201f4  sltiu       $v0, $v0, 0x1F4
    ctx->pc = 0x2eca28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)500) ? 1 : 0);
label_2eca2c:
    // 0x2eca2c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2eca30:
    if (ctx->pc == 0x2ECA30u) {
        ctx->pc = 0x2ECA34u;
        goto label_2eca34;
    }
    ctx->pc = 0x2ECA2Cu;
    {
        const bool branch_taken_0x2eca2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eca2c) {
            ctx->pc = 0x2ECAA8u;
            goto label_2ecaa8;
        }
    }
    ctx->pc = 0x2ECA34u;
label_2eca34:
    // 0x2eca34: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
label_2eca38:
    if (ctx->pc == 0x2ECA38u) {
        ctx->pc = 0x2ECA3Cu;
        goto label_2eca3c;
    }
    ctx->pc = 0x2ECA34u;
    {
        const bool branch_taken_0x2eca34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eca34) {
            ctx->pc = 0x2ECB00u;
            goto label_2ecb00;
        }
    }
    ctx->pc = 0x2ECA3Cu;
label_2eca3c:
    // 0x2eca3c: 0xc088eca  jal         func_223B28
label_2eca40:
    if (ctx->pc == 0x2ECA40u) {
        ctx->pc = 0x2ECA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA3Cu;
        // 0x2eca40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECA44u;
        goto label_2eca44;
    }
    ctx->pc = 0x2ECA3Cu;
    SET_GPR_U32(ctx, 31, 0x2ECA44u);
    ctx->pc = 0x2ECA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECA3Cu;
    // 0x2eca40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B28u, 0x2ECA3Cu, 0x2ECA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECA44u;
label_2eca44:
    // 0x2eca44: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_2eca48:
    if (ctx->pc == 0x2ECA48u) {
        ctx->pc = 0x2ECA4Cu;
        goto label_2eca4c;
    }
    ctx->pc = 0x2ECA44u;
    {
        const bool branch_taken_0x2eca44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eca44) {
            ctx->pc = 0x2ECAA8u;
            goto label_2ecaa8;
        }
    }
    ctx->pc = 0x2ECA4Cu;
label_2eca4c:
    // 0x2eca4c: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x2eca4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
label_2eca50:
    // 0x2eca50: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2eca54:
    if (ctx->pc == 0x2ECA54u) {
        ctx->pc = 0x2ECA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA50u;
        // 0x2eca54: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECA58u;
        goto label_2eca58;
    }
    ctx->pc = 0x2ECA50u;
    {
        const bool branch_taken_0x2eca50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eca50) {
            ctx->pc = 0x2ECA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECA50u;
            // 0x2eca54: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECA6Cu;
            goto label_2eca6c;
        }
    }
    ctx->pc = 0x2ECA58u;
label_2eca58:
    // 0x2eca58: 0xc08a10a  jal         func_228428
label_2eca5c:
    if (ctx->pc == 0x2ECA5Cu) {
        ctx->pc = 0x2ECA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA58u;
        // 0x2eca5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECA60u;
        goto label_2eca60;
    }
    ctx->pc = 0x2ECA58u;
    SET_GPR_U32(ctx, 31, 0x2ECA60u);
    ctx->pc = 0x2ECA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECA58u;
    // 0x2eca5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228428u, 0x2ECA58u, 0x2ECA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECA60u;
label_2eca60:
    // 0x2eca60: 0x14540011  bne         $v0, $s4, . + 4 + (0x11 << 2)
label_2eca64:
    if (ctx->pc == 0x2ECA64u) {
        ctx->pc = 0x2ECA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA60u;
        // 0x2eca64: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECA68u;
        goto label_2eca68;
    }
    ctx->pc = 0x2ECA60u;
    {
        const bool branch_taken_0x2eca60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2ECA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA60u;
        // 0x2eca64: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca60) {
            ctx->pc = 0x2ECAA8u;
            goto label_2ecaa8;
        }
    }
    ctx->pc = 0x2ECA68u;
label_2eca68:
    // 0x2eca68: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x2eca68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
label_2eca6c:
    // 0x2eca6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eca6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eca70:
    // 0x2eca70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eca70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eca74:
    // 0x2eca74: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x2eca74u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_2eca78:
    // 0x2eca78: 0xc0891de  jal         func_224778
label_2eca7c:
    if (ctx->pc == 0x2ECA7Cu) {
        ctx->pc = 0x2ECA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA78u;
        // 0x2eca7c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECA80u;
        goto label_2eca80;
    }
    ctx->pc = 0x2ECA78u;
    SET_GPR_U32(ctx, 31, 0x2ECA80u);
    ctx->pc = 0x2ECA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECA78u;
    // 0x2eca7c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2ECA78u, 0x2ECA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECA80u;
label_2eca80:
    // 0x2eca80: 0x14540009  bne         $v0, $s4, . + 4 + (0x9 << 2)
label_2eca84:
    if (ctx->pc == 0x2ECA84u) {
        ctx->pc = 0x2ECA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA80u;
        // 0x2eca84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECA88u;
        goto label_2eca88;
    }
    ctx->pc = 0x2ECA80u;
    {
        const bool branch_taken_0x2eca80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2ECA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA80u;
        // 0x2eca84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca80) {
            ctx->pc = 0x2ECAA8u;
            goto label_2ecaa8;
        }
    }
    ctx->pc = 0x2ECA88u;
label_2eca88:
    // 0x2eca88: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eca88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eca8c:
    // 0x2eca8c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2eca8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2eca90:
    // 0x2eca90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eca90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eca94:
    // 0x2eca94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2eca94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eca98:
    // 0x2eca98: 0xc0a3892  jal         func_28E248
label_2eca9c:
    if (ctx->pc == 0x2ECA9Cu) {
        ctx->pc = 0x2ECA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA98u;
        // 0x2eca9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECAA0u;
        goto label_2ecaa0;
    }
    ctx->pc = 0x2ECA98u;
    SET_GPR_U32(ctx, 31, 0x2ECAA0u);
    ctx->pc = 0x2ECA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECA98u;
    // 0x2eca9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2ECA98u, 0x2ECAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECAA0u;
label_2ecaa0:
    // 0x2ecaa0: 0x10000144  b           . + 4 + (0x144 << 2)
label_2ecaa4:
    if (ctx->pc == 0x2ECAA4u) {
        ctx->pc = 0x2ECAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAA0u;
        // 0x2ecaa4: 0xa2200020  sb          $zero, 0x20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECAA8u;
        goto label_2ecaa8;
    }
    ctx->pc = 0x2ECAA0u;
    {
        const bool branch_taken_0x2ecaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAA0u;
        // 0x2ecaa4: 0xa2200020  sb          $zero, 0x20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecaa0) {
            ctx->pc = 0x2ECFB4u;
            goto label_2ecfb4;
        }
    }
    ctx->pc = 0x2ECAA8u;
label_2ecaa8:
    // 0x2ecaa8: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_2ecaac:
    if (ctx->pc == 0x2ECAACu) {
        ctx->pc = 0x2ECAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAA8u;
        // 0x2ecaac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECAB0u;
        goto label_2ecab0;
    }
    ctx->pc = 0x2ECAA8u;
    {
        const bool branch_taken_0x2ecaa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAA8u;
        // 0x2ecaac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecaa8) {
            ctx->pc = 0x2ECB00u;
            goto label_2ecb00;
        }
    }
    ctx->pc = 0x2ECAB0u;
label_2ecab0:
    // 0x2ecab0: 0xc09643e  jal         func_2590F8
label_2ecab4:
    if (ctx->pc == 0x2ECAB4u) {
        ctx->pc = 0x2ECAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAB0u;
        // 0x2ecab4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECAB8u;
        goto label_2ecab8;
    }
    ctx->pc = 0x2ECAB0u;
    SET_GPR_U32(ctx, 31, 0x2ECAB8u);
    ctx->pc = 0x2ECAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECAB0u;
    // 0x2ecab4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2590F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2590F8u, 0x2ECAB0u, 0x2ECAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECAB8u;
label_2ecab8:
    // 0x2ecab8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ecab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ecabc:
    // 0x2ecabc: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_2ecac0:
    if (ctx->pc == 0x2ECAC0u) {
        ctx->pc = 0x2ECAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECABCu;
        // 0x2ecac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECAC4u;
        goto label_2ecac4;
    }
    ctx->pc = 0x2ECABCu;
    {
        const bool branch_taken_0x2ecabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2ECAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECABCu;
        // 0x2ecac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecabc) {
            ctx->pc = 0x2ECAD4u;
            goto label_2ecad4;
        }
    }
    ctx->pc = 0x2ECAC4u;
label_2ecac4:
    // 0x2ecac4: 0xc0963a2  jal         func_258E88
label_2ecac8:
    if (ctx->pc == 0x2ECAC8u) {
        ctx->pc = 0x2ECAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAC4u;
        // 0x2ecac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECACCu;
        goto label_2ecacc;
    }
    ctx->pc = 0x2ECAC4u;
    SET_GPR_U32(ctx, 31, 0x2ECACCu);
    ctx->pc = 0x2ECAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECAC4u;
    // 0x2ecac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E88u, 0x2ECAC4u, 0x2ECACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECACCu;
label_2ecacc:
    // 0x2ecacc: 0x1451000c  bne         $v0, $s1, . + 4 + (0xC << 2)
label_2ecad0:
    if (ctx->pc == 0x2ECAD0u) {
        ctx->pc = 0x2ECAD4u;
        goto label_2ecad4;
    }
    ctx->pc = 0x2ECACCu;
    {
        const bool branch_taken_0x2ecacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2ecacc) {
            ctx->pc = 0x2ECB00u;
            goto label_2ecb00;
        }
    }
    ctx->pc = 0x2ECAD4u;
label_2ecad4:
    // 0x2ecad4: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2ecad4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2ecad8:
    // 0x2ecad8: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2ecad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2ecadc:
    // 0x2ecadc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ecadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ecae0:
    // 0x2ecae0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ecae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ecae4:
    // 0x2ecae4: 0xc0874fa  jal         func_21D3E8
label_2ecae8:
    if (ctx->pc == 0x2ECAE8u) {
        ctx->pc = 0x2ECAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAE4u;
        // 0x2ecae8: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECAECu;
        goto label_2ecaec;
    }
    ctx->pc = 0x2ECAE4u;
    SET_GPR_U32(ctx, 31, 0x2ECAECu);
    ctx->pc = 0x2ECAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECAE4u;
    // 0x2ecae8: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2ECAE4u, 0x2ECAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECAECu;
label_2ecaec:
    // 0x2ecaec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ecaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ecaf0:
    // 0x2ecaf0: 0xc051fbc  jal         func_147EF0
label_2ecaf4:
    if (ctx->pc == 0x2ECAF4u) {
        ctx->pc = 0x2ECAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAF0u;
        // 0x2ecaf4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECAF8u;
        goto label_2ecaf8;
    }
    ctx->pc = 0x2ECAF0u;
    SET_GPR_U32(ctx, 31, 0x2ECAF8u);
    ctx->pc = 0x2ECAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECAF0u;
    // 0x2ecaf4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2ECAF0u, 0x2ECAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECAF8u;
label_2ecaf8:
    // 0x2ecaf8: 0x1000012f  b           . + 4 + (0x12F << 2)
label_2ecafc:
    if (ctx->pc == 0x2ECAFCu) {
        ctx->pc = 0x2ECAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAF8u;
        // 0x2ecafc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB00u;
        goto label_2ecb00;
    }
    ctx->pc = 0x2ECAF8u;
    {
        const bool branch_taken_0x2ecaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAF8u;
        // 0x2ecafc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecaf8) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2ECB00u;
label_2ecb00:
    // 0x2ecb00: 0xc0874fa  jal         func_21D3E8
label_2ecb04:
    if (ctx->pc == 0x2ECB04u) {
        ctx->pc = 0x2ECB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB00u;
        // 0x2ecb04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB08u;
        goto label_2ecb08;
    }
    ctx->pc = 0x2ECB00u;
    SET_GPR_U32(ctx, 31, 0x2ECB08u);
    ctx->pc = 0x2ECB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB00u;
    // 0x2ecb04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2ECB00u, 0x2ECB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB08u;
label_2ecb08:
    // 0x2ecb08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ecb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ecb0c:
    // 0x2ecb0c: 0xc051fbc  jal         func_147EF0
label_2ecb10:
    if (ctx->pc == 0x2ECB10u) {
        ctx->pc = 0x2ECB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB0Cu;
        // 0x2ecb10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB14u;
        goto label_2ecb14;
    }
    ctx->pc = 0x2ECB0Cu;
    SET_GPR_U32(ctx, 31, 0x2ECB14u);
    ctx->pc = 0x2ECB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB0Cu;
    // 0x2ecb10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2ECB0Cu, 0x2ECB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB14u;
label_2ecb14:
    // 0x2ecb14: 0x10000128  b           . + 4 + (0x128 << 2)
label_2ecb18:
    if (ctx->pc == 0x2ECB18u) {
        ctx->pc = 0x2ECB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB14u;
        // 0x2ecb18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB1Cu;
        goto label_2ecb1c;
    }
    ctx->pc = 0x2ECB14u;
    {
        const bool branch_taken_0x2ecb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB14u;
        // 0x2ecb18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb14) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2ECB1Cu;
label_2ecb1c:
    // 0x2ecb1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ecb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ecb20:
    // 0x2ecb20: 0x146200f7  bne         $v1, $v0, . + 4 + (0xF7 << 2)
label_2ecb24:
    if (ctx->pc == 0x2ECB24u) {
        ctx->pc = 0x2ECB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB20u;
        // 0x2ecb24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB28u;
        goto label_2ecb28;
    }
    ctx->pc = 0x2ECB20u;
    {
        const bool branch_taken_0x2ecb20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ECB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB20u;
        // 0x2ecb24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb20) {
            ctx->pc = 0x2ECF00u;
            goto label_2ecf00;
        }
    }
    ctx->pc = 0x2ECB28u;
label_2ecb28:
    // 0x2ecb28: 0x3c05aeeb  lui         $a1, 0xAEEB
    ctx->pc = 0x2ecb28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44779 << 16));
label_2ecb2c:
    // 0x2ecb2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ecb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ecb30:
    // 0x2ecb30: 0xc089998  jal         func_226660
label_2ecb34:
    if (ctx->pc == 0x2ECB34u) {
        ctx->pc = 0x2ECB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB30u;
        // 0x2ecb34: 0x34a5f7ff  ori         $a1, $a1, 0xF7FF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63487);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB38u;
        goto label_2ecb38;
    }
    ctx->pc = 0x2ECB30u;
    SET_GPR_U32(ctx, 31, 0x2ECB38u);
    ctx->pc = 0x2ECB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB30u;
    // 0x2ecb34: 0x34a5f7ff  ori         $a1, $a1, 0xF7FF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63487);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2ECB30u, 0x2ECB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB38u;
label_2ecb38:
    // 0x2ecb38: 0x1053011f  beq         $v0, $s3, . + 4 + (0x11F << 2)
label_2ecb3c:
    if (ctx->pc == 0x2ECB3Cu) {
        ctx->pc = 0x2ECB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB38u;
        // 0x2ecb3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB40u;
        goto label_2ecb40;
    }
    ctx->pc = 0x2ECB38u;
    {
        const bool branch_taken_0x2ecb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2ECB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB38u;
        // 0x2ecb3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb38) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2ECB40u;
label_2ecb40:
    // 0x2ecb40: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_2ecb44:
    if (ctx->pc == 0x2ECB44u) {
        ctx->pc = 0x2ECB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB40u;
        // 0x2ecb44: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB48u;
        goto label_2ecb48;
    }
    ctx->pc = 0x2ECB40u;
    {
        const bool branch_taken_0x2ecb40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB40u;
        // 0x2ecb44: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb40) {
            ctx->pc = 0x2ECB60u;
            goto label_2ecb60;
        }
    }
    ctx->pc = 0x2ECB48u;
label_2ecb48:
    // 0x2ecb48: 0x8ca2b734  lw          $v0, -0x48CC($a1)
    ctx->pc = 0x2ecb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2ecb4c:
    // 0x2ecb4c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2ecb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2ecb50:
    // 0x2ecb50: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2ecb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2ecb54:
    // 0x2ecb54: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2ecb54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2ecb58:
    // 0x2ecb58: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2ecb5c:
    if (ctx->pc == 0x2ECB5Cu) {
        ctx->pc = 0x2ECB60u;
        goto label_2ecb60;
    }
    ctx->pc = 0x2ECB58u;
    {
        const bool branch_taken_0x2ecb58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecb58) {
            ctx->pc = 0x2ECB84u;
            goto label_2ecb84;
        }
    }
    ctx->pc = 0x2ECB60u;
label_2ecb60:
    // 0x2ecb60: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2ecb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2ecb64:
    // 0x2ecb64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ecb68:
    // 0x2ecb68: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2ecb68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2ecb6c:
    // 0x2ecb6c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2ecb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2ecb70:
    // 0x2ecb70: 0x34a5fbf9  ori         $a1, $a1, 0xFBF9
    ctx->pc = 0x2ecb70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64505);
label_2ecb74:
    // 0x2ecb74: 0x24420fa0  addiu       $v0, $v0, 0xFA0
    ctx->pc = 0x2ecb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
label_2ecb78:
    // 0x2ecb78: 0xc0a7c8c  jal         func_29F230
label_2ecb7c:
    if (ctx->pc == 0x2ECB7Cu) {
        ctx->pc = 0x2ECB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB78u;
        // 0x2ecb7c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB80u;
        goto label_2ecb80;
    }
    ctx->pc = 0x2ECB78u;
    SET_GPR_U32(ctx, 31, 0x2ECB80u);
    ctx->pc = 0x2ECB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB78u;
    // 0x2ecb7c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2ECB78u, 0x2ECB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB80u;
label_2ecb80:
    // 0x2ecb80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ecb80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ecb84:
    // 0x2ecb84: 0x1200010c  beqz        $s0, . + 4 + (0x10C << 2)
label_2ecb88:
    if (ctx->pc == 0x2ECB88u) {
        ctx->pc = 0x2ECB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB84u;
        // 0x2ecb88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB8Cu;
        goto label_2ecb8c;
    }
    ctx->pc = 0x2ECB84u;
    {
        const bool branch_taken_0x2ecb84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB84u;
        // 0x2ecb88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb84) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2ECB8Cu;
label_2ecb8c:
    // 0x2ecb8c: 0xc087502  jal         func_21D408
label_2ecb90:
    if (ctx->pc == 0x2ECB90u) {
        ctx->pc = 0x2ECB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB8Cu;
        // 0x2ecb90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECB94u;
        goto label_2ecb94;
    }
    ctx->pc = 0x2ECB8Cu;
    SET_GPR_U32(ctx, 31, 0x2ECB94u);
    ctx->pc = 0x2ECB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB8Cu;
    // 0x2ecb90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2ECB8Cu, 0x2ECB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB94u;
label_2ecb94:
    // 0x2ecb94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ecb94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ecb98:
    // 0x2ecb98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ecb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ecb9c:
    // 0x2ecb9c: 0xc0a3792  jal         func_28DE48
label_2ecba0:
    if (ctx->pc == 0x2ECBA0u) {
        ctx->pc = 0x2ECBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB9Cu;
        // 0x2ecba0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECBA4u;
        goto label_2ecba4;
    }
    ctx->pc = 0x2ECB9Cu;
    SET_GPR_U32(ctx, 31, 0x2ECBA4u);
    ctx->pc = 0x2ECBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB9Cu;
    // 0x2ecba0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2ECB9Cu, 0x2ECBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECBA4u;
label_2ecba4:
    // 0x2ecba4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2ecba8:
    if (ctx->pc == 0x2ECBA8u) {
        ctx->pc = 0x2ECBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBA4u;
        // 0x2ecba8: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECBACu;
        goto label_2ecbac;
    }
    ctx->pc = 0x2ECBA4u;
    {
        const bool branch_taken_0x2ecba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecba4) {
            ctx->pc = 0x2ECBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECBA4u;
            // 0x2ecba8: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECBC8u;
            goto label_2ecbc8;
        }
    }
    ctx->pc = 0x2ECBACu;
label_2ecbac:
    // 0x2ecbac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ecbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ecbb0:
    // 0x2ecbb0: 0xc0a445e  jal         func_291178
label_2ecbb4:
    if (ctx->pc == 0x2ECBB4u) {
        ctx->pc = 0x2ECBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBB0u;
        // 0x2ecbb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECBB8u;
        goto label_2ecbb8;
    }
    ctx->pc = 0x2ECBB0u;
    SET_GPR_U32(ctx, 31, 0x2ECBB8u);
    ctx->pc = 0x2ECBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECBB0u;
    // 0x2ecbb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2ECBB0u, 0x2ECBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECBB8u;
label_2ecbb8:
    // 0x2ecbb8: 0xc089bdc  jal         func_226F70
label_2ecbbc:
    if (ctx->pc == 0x2ECBBCu) {
        ctx->pc = 0x2ECBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBB8u;
        // 0x2ecbbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECBC0u;
        goto label_2ecbc0;
    }
    ctx->pc = 0x2ECBB8u;
    SET_GPR_U32(ctx, 31, 0x2ECBC0u);
    ctx->pc = 0x2ECBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECBB8u;
    // 0x2ecbbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2ECBB8u, 0x2ECBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECBC0u;
label_2ecbc0:
    // 0x2ecbc0: 0x100000fd  b           . + 4 + (0xFD << 2)
label_2ecbc4:
    if (ctx->pc == 0x2ECBC4u) {
        ctx->pc = 0x2ECBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBC0u;
        // 0x2ecbc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECBC8u;
        goto label_2ecbc8;
    }
    ctx->pc = 0x2ECBC0u;
    {
        const bool branch_taken_0x2ecbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBC0u;
        // 0x2ecbc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecbc0) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2ECBC8u;
label_2ecbc8:
    // 0x2ecbc8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2ecbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2ecbcc:
    // 0x2ecbcc: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_2ecbd0:
    if (ctx->pc == 0x2ECBD0u) {
        ctx->pc = 0x2ECBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBCCu;
        // 0x2ecbd0: 0xde4200e0  ld          $v0, 0xE0($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECBD4u;
        goto label_2ecbd4;
    }
    ctx->pc = 0x2ECBCCu;
    {
        const bool branch_taken_0x2ecbcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ecbcc) {
            ctx->pc = 0x2ECBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECBCCu;
            // 0x2ecbd0: 0xde4200e0  ld          $v0, 0xE0($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECBF4u;
            goto label_2ecbf4;
        }
    }
    ctx->pc = 0x2ECBD4u;
label_2ecbd4:
    // 0x2ecbd4: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2ecbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2ecbd8:
    // 0x2ecbd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ecbdc:
    // 0x2ecbdc: 0x68467a6f  ldl         $a2, 0x7A6F($v0)
    ctx->pc = 0x2ecbdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2ecbe0:
    // 0x2ecbe0: 0x6c467a68  ldr         $a2, 0x7A68($v0)
    ctx->pc = 0x2ecbe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2ecbe4:
    // 0x2ecbe4: 0xc0bb076  jal         func_2EC1D8
label_2ecbe8:
    if (ctx->pc == 0x2ECBE8u) {
        ctx->pc = 0x2ECBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBE4u;
        // 0x2ecbe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECBECu;
        goto label_2ecbec;
    }
    ctx->pc = 0x2ECBE4u;
    SET_GPR_U32(ctx, 31, 0x2ECBECu);
    ctx->pc = 0x2ECBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECBE4u;
    // 0x2ecbe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC1D8u, 0x2ECBE4u, 0x2ECBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECBECu;
label_2ecbec:
    // 0x2ecbec: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2ecbecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2ecbf0:
    // 0x2ecbf0: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2ecbf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2ecbf4:
    // 0x2ecbf4: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2ecbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2ecbf8:
    // 0x2ecbf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ecbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ecbfc:
    // 0x2ecbfc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ecbfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ecc00:
    // 0x2ecc00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ecc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ecc04:
    // 0x2ecc04: 0xc08bfa0  jal         func_22FE80
label_2ecc08:
    if (ctx->pc == 0x2ECC08u) {
        ctx->pc = 0x2ECC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC04u;
        // 0x2ecc08: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECC0Cu;
        goto label_2ecc0c;
    }
    ctx->pc = 0x2ECC04u;
    SET_GPR_U32(ctx, 31, 0x2ECC0Cu);
    ctx->pc = 0x2ECC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC04u;
    // 0x2ecc08: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2ECC04u, 0x2ECC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC0Cu;
label_2ecc0c:
    // 0x2ecc0c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ecc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ecc10:
    // 0x2ecc10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ecc10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecc14:
    // 0x2ecc14: 0xc0a41ae  jal         func_2906B8
label_2ecc18:
    if (ctx->pc == 0x2ECC18u) {
        ctx->pc = 0x2ECC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC14u;
        // 0x2ecc18: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECC1Cu;
        goto label_2ecc1c;
    }
    ctx->pc = 0x2ECC14u;
    SET_GPR_U32(ctx, 31, 0x2ECC1Cu);
    ctx->pc = 0x2ECC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC14u;
    // 0x2ecc18: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906B8u, 0x2ECC14u, 0x2ECC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC1Cu;
label_2ecc1c:
    // 0x2ecc1c: 0x54530089  bnel        $v0, $s3, . + 4 + (0x89 << 2)
label_2ecc20:
    if (ctx->pc == 0x2ECC20u) {
        ctx->pc = 0x2ECC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC1Cu;
        // 0x2ecc20: 0x92220024  lbu         $v0, 0x24($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECC24u;
        goto label_2ecc24;
    }
    ctx->pc = 0x2ECC1Cu;
    {
        const bool branch_taken_0x2ecc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2ecc1c) {
            ctx->pc = 0x2ECC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECC1Cu;
            // 0x2ecc20: 0x92220024  lbu         $v0, 0x24($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECE44u;
            goto label_2ece44;
        }
    }
    ctx->pc = 0x2ECC24u;
label_2ecc24:
    // 0x2ecc24: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2ecc24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2ecc28:
    // 0x2ecc28: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ecc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2ecc2c:
    // 0x2ecc2c: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2ecc2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2ecc30:
    // 0x2ecc30: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2ecc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2ecc34:
    // 0x2ecc34: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ecc34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2ecc38:
    // 0x2ecc38: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ecc38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2ecc3c:
    // 0x2ecc3c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ecc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ecc40:
    // 0x2ecc40: 0xc0cdb38  jal         func_336CE0
label_2ecc44:
    if (ctx->pc == 0x2ECC44u) {
        ctx->pc = 0x2ECC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC40u;
        // 0x2ecc44: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECC48u;
        goto label_2ecc48;
    }
    ctx->pc = 0x2ECC40u;
    SET_GPR_U32(ctx, 31, 0x2ECC48u);
    ctx->pc = 0x2ECC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC40u;
    // 0x2ecc44: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2ECC40u, 0x2ECC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC48u;
label_2ecc48:
    // 0x2ecc48: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2ecc48u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2ecc4c:
    // 0x2ecc4c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2ecc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ecc50:
    // 0x2ecc50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ecc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ecc54:
    // 0x2ecc54: 0xc08c340  jal         func_230D00
label_2ecc58:
    if (ctx->pc == 0x2ECC58u) {
        ctx->pc = 0x2ECC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC54u;
        // 0x2ecc58: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECC5Cu;
        goto label_2ecc5c;
    }
    ctx->pc = 0x2ECC54u;
    SET_GPR_U32(ctx, 31, 0x2ECC5Cu);
    ctx->pc = 0x2ECC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC54u;
    // 0x2ecc58: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D00u, 0x2ECC54u, 0x2ECC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC5Cu;
label_2ecc5c:
    // 0x2ecc5c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2ecc5cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2ecc60:
    // 0x2ecc60: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x2ecc60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ecc64:
    // 0x2ecc64: 0x0  nop
    ctx->pc = 0x2ecc64u;
    // NOP
label_2ecc68:
    // 0x2ecc68: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_2ecc6c:
    if (ctx->pc == 0x2ECC6Cu) {
        ctx->pc = 0x2ECC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC68u;
        // 0x2ecc6c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECC70u;
        goto label_2ecc70;
    }
    ctx->pc = 0x2ECC68u;
    {
        const bool branch_taken_0x2ecc68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC68u;
        // 0x2ecc6c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc68) {
            ctx->pc = 0x2ECD20u;
            goto label_2ecd20;
        }
    }
    ctx->pc = 0x2ECC70u;
label_2ecc70:
    // 0x2ecc70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ecc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ecc74:
    // 0x2ecc74: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2ecc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2ecc78:
    // 0x2ecc78: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2ecc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ecc7c:
    // 0x2ecc7c: 0xc0cd4ee  jal         func_3353B8
label_2ecc80:
    if (ctx->pc == 0x2ECC80u) {
        ctx->pc = 0x2ECC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC7Cu;
        // 0x2ecc80: 0xc454013c  lwc1        $f20, 0x13C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECC84u;
        goto label_2ecc84;
    }
    ctx->pc = 0x2ECC7Cu;
    SET_GPR_U32(ctx, 31, 0x2ECC84u);
    ctx->pc = 0x2ECC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC7Cu;
    // 0x2ecc80: 0xc454013c  lwc1        $f20, 0x13C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2ECC7Cu, 0x2ECC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC84u;
label_2ecc84:
    // 0x2ecc84: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x2ecc84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_2ecc88:
    // 0x2ecc88: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2ecc8c:
    if (ctx->pc == 0x2ECC8Cu) {
        ctx->pc = 0x2ECC90u;
        goto label_2ecc90;
    }
    ctx->pc = 0x2ECC88u;
    {
        const bool branch_taken_0x2ecc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecc88) {
            ctx->pc = 0x2ECCCCu;
            goto label_2ecccc;
        }
    }
    ctx->pc = 0x2ECC90u;
label_2ecc90:
    // 0x2ecc90: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2ecc90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2ecc94:
    // 0x2ecc94: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2ecc94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ecc98:
    // 0x2ecc98: 0x0  nop
    ctx->pc = 0x2ecc98u;
    // NOP
label_2ecc9c:
    // 0x2ecc9c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2ecca0:
    if (ctx->pc == 0x2ECCA0u) {
        ctx->pc = 0x2ECCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC9Cu;
        // 0x2ecca0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECCA4u;
        goto label_2ecca4;
    }
    ctx->pc = 0x2ECC9Cu;
    {
        const bool branch_taken_0x2ecc9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC9Cu;
        // 0x2ecca0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc9c) {
            ctx->pc = 0x2ECCCCu;
            goto label_2ecccc;
        }
    }
    ctx->pc = 0x2ECCA4u;
label_2ecca4:
    // 0x2ecca4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ecca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ecca8:
    // 0x2ecca8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ecca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eccac:
    // 0x2eccac: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2eccacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2eccb0:
    // 0x2eccb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eccb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eccb4:
    // 0x2eccb4: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2eccb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_2eccb8:
    // 0x2eccb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eccb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eccbc:
    // 0x2eccbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eccbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eccc0:
    // 0x2eccc0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2eccc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eccc4:
    // 0x2eccc4: 0xc088178  jal         func_2205E0
label_2eccc8:
    if (ctx->pc == 0x2ECCC8u) {
        ctx->pc = 0x2ECCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCC4u;
        // 0x2eccc8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECCCCu;
        goto label_2ecccc;
    }
    ctx->pc = 0x2ECCC4u;
    SET_GPR_U32(ctx, 31, 0x2ECCCCu);
    ctx->pc = 0x2ECCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECCC4u;
    // 0x2eccc8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2ECCC4u, 0x2ECCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECCCCu;
label_2ecccc:
    // 0x2ecccc: 0xc086618  jal         func_219860
label_2eccd0:
    if (ctx->pc == 0x2ECCD0u) {
        ctx->pc = 0x2ECCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCCCu;
        // 0x2eccd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECCD4u;
        goto label_2eccd4;
    }
    ctx->pc = 0x2ECCCCu;
    SET_GPR_U32(ctx, 31, 0x2ECCD4u);
    ctx->pc = 0x2ECCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECCCCu;
    // 0x2eccd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2ECCCCu, 0x2ECCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECCD4u;
label_2eccd4:
    // 0x2eccd4: 0x46000500  add.s       $f20, $f0, $f0
    ctx->pc = 0x2eccd4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2eccd8:
    // 0x2eccd8: 0x0  nop
    ctx->pc = 0x2eccd8u;
    // NOP
label_2eccdc:
    // 0x2eccdc: 0x0  nop
    ctx->pc = 0x2eccdcu;
    // NOP
label_2ecce0:
    // 0x2ecce0: 0x46160044  c1          0x160044
    ctx->pc = 0x2ecce0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2ecce4:
    // 0x2ecce4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2ecce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2ecce8:
    // 0x2ecce8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ecce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2eccec:
    // 0x2eccec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eccecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eccf0:
    // 0x2eccf0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eccf4:
    // 0x2eccf4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2eccf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2eccf8:
    // 0x2eccf8: 0x46000d68  max.s       $f21, $f1, $f0
    ctx->pc = 0x2eccf8u;
    ctx->f[21] = std::max(ctx->f[1], ctx->f[0]);
label_2eccfc:
    // 0x2eccfc: 0xc0a367c  jal         func_28D9F0
label_2ecd00:
    if (ctx->pc == 0x2ECD00u) {
        ctx->pc = 0x2ECD04u;
        goto label_2ecd04;
    }
    ctx->pc = 0x2ECCFCu;
    SET_GPR_U32(ctx, 31, 0x2ECD04u);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2ECCFCu, 0x2ECD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECD04u;
label_2ecd04:
    // 0x2ecd04: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
label_2ecd08:
    if (ctx->pc == 0x2ECD08u) {
        ctx->pc = 0x2ECD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD04u;
        // 0x2ecd08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECD0Cu;
        goto label_2ecd0c;
    }
    ctx->pc = 0x2ECD04u;
    {
        const bool branch_taken_0x2ecd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD04u;
        // 0x2ecd08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd04) {
            ctx->pc = 0x2ECFB4u;
            goto label_2ecfb4;
        }
    }
    ctx->pc = 0x2ECD0Cu;
label_2ecd0c:
    // 0x2ecd0c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ecd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ecd10:
    // 0x2ecd10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ecd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ecd14:
    // 0x2ecd14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ecd14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ecd18:
    // 0x2ecd18: 0x10000074  b           . + 4 + (0x74 << 2)
label_2ecd1c:
    if (ctx->pc == 0x2ECD1Cu) {
        ctx->pc = 0x2ECD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD18u;
        // 0x2ecd1c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECD20u;
        goto label_2ecd20;
    }
    ctx->pc = 0x2ECD18u;
    {
        const bool branch_taken_0x2ecd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD18u;
        // 0x2ecd1c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd18) {
            ctx->pc = 0x2ECEECu;
            goto label_2eceec;
        }
    }
    ctx->pc = 0x2ECD20u;
label_2ecd20:
    // 0x2ecd20: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2ecd20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ecd24:
    // 0x2ecd24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ecd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ecd28:
    // 0x2ecd28: 0xc0891de  jal         func_224778
label_2ecd2c:
    if (ctx->pc == 0x2ECD2Cu) {
        ctx->pc = 0x2ECD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD28u;
        // 0x2ecd2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECD30u;
        goto label_2ecd30;
    }
    ctx->pc = 0x2ECD28u;
    SET_GPR_U32(ctx, 31, 0x2ECD30u);
    ctx->pc = 0x2ECD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECD28u;
    // 0x2ecd2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2ECD28u, 0x2ECD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECD30u;
label_2ecd30:
    // 0x2ecd30: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2ecd34:
    if (ctx->pc == 0x2ECD34u) {
        ctx->pc = 0x2ECD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD30u;
        // 0x2ecd34: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECD38u;
        goto label_2ecd38;
    }
    ctx->pc = 0x2ECD30u;
    {
        const bool branch_taken_0x2ecd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd30) {
            ctx->pc = 0x2ECD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECD30u;
            // 0x2ecd34: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECD58u;
            goto label_2ecd58;
        }
    }
    ctx->pc = 0x2ECD38u;
label_2ecd38:
    // 0x2ecd38: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2ecd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2ecd3c:
    // 0x2ecd3c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ecd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ecd40:
    // 0x2ecd40: 0x68467a77  ldl         $a2, 0x7A77($v0)
    ctx->pc = 0x2ecd40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2ecd44:
    // 0x2ecd44: 0x6c467a70  ldr         $a2, 0x7A70($v0)
    ctx->pc = 0x2ecd44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2ecd48:
    // 0x2ecd48: 0xc0a39c2  jal         func_28E708
label_2ecd4c:
    if (ctx->pc == 0x2ECD4Cu) {
        ctx->pc = 0x2ECD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD48u;
        // 0x2ecd4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECD50u;
        goto label_2ecd50;
    }
    ctx->pc = 0x2ECD48u;
    SET_GPR_U32(ctx, 31, 0x2ECD50u);
    ctx->pc = 0x2ECD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECD48u;
    // 0x2ecd4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2ECD48u, 0x2ECD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECD50u;
label_2ecd50:
    // 0x2ecd50: 0x10000098  b           . + 4 + (0x98 << 2)
label_2ecd54:
    if (ctx->pc == 0x2ECD54u) {
        ctx->pc = 0x2ECD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD50u;
        // 0x2ecd54: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECD58u;
        goto label_2ecd58;
    }
    ctx->pc = 0x2ECD50u;
    {
        const bool branch_taken_0x2ecd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD50u;
        // 0x2ecd54: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd50) {
            ctx->pc = 0x2ECFB4u;
            goto label_2ecfb4;
        }
    }
    ctx->pc = 0x2ECD58u;
label_2ecd58:
    // 0x2ecd58: 0x38c2002d  xori        $v0, $a2, 0x2D
    ctx->pc = 0x2ecd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)45);
label_2ecd5c:
    // 0x2ecd5c: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
label_2ecd60:
    if (ctx->pc == 0x2ECD60u) {
        ctx->pc = 0x2ECD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD5Cu;
        // 0x2ecd60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECD64u;
        goto label_2ecd64;
    }
    ctx->pc = 0x2ECD5Cu;
    {
        const bool branch_taken_0x2ecd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD5Cu;
        // 0x2ecd60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd5c) {
            ctx->pc = 0x2ECFB4u;
            goto label_2ecfb4;
        }
    }
    ctx->pc = 0x2ECD64u;
label_2ecd64:
    // 0x2ecd64: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ecd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ecd68:
    // 0x2ecd68: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ecd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2ecd6c:
    // 0x2ecd6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ecd6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ecd70:
    // 0x2ecd70: 0xc0a3892  jal         func_28E248
label_2ecd74:
    if (ctx->pc == 0x2ECD74u) {
        ctx->pc = 0x2ECD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD70u;
        // 0x2ecd74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECD78u;
        goto label_2ecd78;
    }
    ctx->pc = 0x2ECD70u;
    SET_GPR_U32(ctx, 31, 0x2ECD78u);
    ctx->pc = 0x2ECD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECD70u;
    // 0x2ecd74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2ECD70u, 0x2ECD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECD78u;
label_2ecd78:
    // 0x2ecd78: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2ecd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ecd7c:
    // 0x2ecd7c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2ecd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ecd80:
    // 0x2ecd80: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_2ecd84:
    if (ctx->pc == 0x2ECD84u) {
        ctx->pc = 0x2ECD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD80u;
        // 0x2ecd84: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECD88u;
        goto label_2ecd88;
    }
    ctx->pc = 0x2ECD80u;
    {
        const bool branch_taken_0x2ecd80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ECD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD80u;
        // 0x2ecd84: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd80) {
            ctx->pc = 0x2ECDBCu;
            goto label_2ecdbc;
        }
    }
    ctx->pc = 0x2ECD88u;
label_2ecd88:
    // 0x2ecd88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ecd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2ecd8c:
    // 0x2ecd8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ecd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ecd90:
    // 0x2ecd90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ecd90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ecd94:
    // 0x2ecd94: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ecd94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ecd98:
    // 0x2ecd98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ecd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ecd9c:
    // 0x2ecd9c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2ecd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2ecda0:
    // 0x2ecda0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ecda0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecda4:
    // 0x2ecda4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ecda4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecda8:
    // 0x2ecda8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ecda8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecdac:
    // 0x2ecdac: 0xc088178  jal         func_2205E0
label_2ecdb0:
    if (ctx->pc == 0x2ECDB0u) {
        ctx->pc = 0x2ECDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDACu;
        // 0x2ecdb0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECDB4u;
        goto label_2ecdb4;
    }
    ctx->pc = 0x2ECDACu;
    SET_GPR_U32(ctx, 31, 0x2ECDB4u);
    ctx->pc = 0x2ECDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECDACu;
    // 0x2ecdb0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2ECDACu, 0x2ECDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECDB4u;
label_2ecdb4:
    // 0x2ecdb4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2ecdb8:
    if (ctx->pc == 0x2ECDB8u) {
        ctx->pc = 0x2ECDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDB4u;
        // 0x2ecdb8: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECDBCu;
        goto label_2ecdbc;
    }
    ctx->pc = 0x2ECDB4u;
    {
        const bool branch_taken_0x2ecdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDB4u;
        // 0x2ecdb8: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecdb4) {
            ctx->pc = 0x2ECE34u;
            goto label_2ece34;
        }
    }
    ctx->pc = 0x2ECDBCu;
label_2ecdbc:
    // 0x2ecdbc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2ecdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ecdc0:
    // 0x2ecdc0: 0xc0cd4ee  jal         func_3353B8
label_2ecdc4:
    if (ctx->pc == 0x2ECDC4u) {
        ctx->pc = 0x2ECDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDC0u;
        // 0x2ecdc4: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECDC8u;
        goto label_2ecdc8;
    }
    ctx->pc = 0x2ECDC0u;
    SET_GPR_U32(ctx, 31, 0x2ECDC8u);
    ctx->pc = 0x2ECDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECDC0u;
    // 0x2ecdc4: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2ECDC0u, 0x2ECDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECDC8u;
label_2ecdc8:
    // 0x2ecdc8: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2ecdc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_2ecdcc:
    // 0x2ecdcc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2ecdd0:
    if (ctx->pc == 0x2ECDD0u) {
        ctx->pc = 0x2ECDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDCCu;
        // 0x2ecdd0: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECDD4u;
        goto label_2ecdd4;
    }
    ctx->pc = 0x2ECDCCu;
    {
        const bool branch_taken_0x2ecdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDCCu;
        // 0x2ecdd0: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecdcc) {
            ctx->pc = 0x2ECE34u;
            goto label_2ece34;
        }
    }
    ctx->pc = 0x2ECDD4u;
label_2ecdd4:
    // 0x2ecdd4: 0xc0a47b4  jal         func_291ED0
label_2ecdd8:
    if (ctx->pc == 0x2ECDD8u) {
        ctx->pc = 0x2ECDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDD4u;
        // 0x2ecdd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECDDCu;
        goto label_2ecddc;
    }
    ctx->pc = 0x2ECDD4u;
    SET_GPR_U32(ctx, 31, 0x2ECDDCu);
    ctx->pc = 0x2ECDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECDD4u;
    // 0x2ecdd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2ECDD4u, 0x2ECDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECDDCu;
label_2ecddc:
    // 0x2ecddc: 0x14530015  bne         $v0, $s3, . + 4 + (0x15 << 2)
label_2ecde0:
    if (ctx->pc == 0x2ECDE0u) {
        ctx->pc = 0x2ECDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDDCu;
        // 0x2ecde0: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECDE4u;
        goto label_2ecde4;
    }
    ctx->pc = 0x2ECDDCu;
    {
        const bool branch_taken_0x2ecddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2ECDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDDCu;
        // 0x2ecde0: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecddc) {
            ctx->pc = 0x2ECE34u;
            goto label_2ece34;
        }
    }
    ctx->pc = 0x2ECDE4u;
label_2ecde4:
    // 0x2ecde4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2ecde4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2ecde8:
    // 0x2ecde8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2ecde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ecdec:
    // 0x2ecdec: 0xc0cd4ee  jal         func_3353B8
label_2ecdf0:
    if (ctx->pc == 0x2ECDF0u) {
        ctx->pc = 0x2ECDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDECu;
        // 0x2ecdf0: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECDF4u;
        goto label_2ecdf4;
    }
    ctx->pc = 0x2ECDECu;
    SET_GPR_U32(ctx, 31, 0x2ECDF4u);
    ctx->pc = 0x2ECDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECDECu;
    // 0x2ecdf0: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2ECDECu, 0x2ECDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECDF4u;
label_2ecdf4:
    // 0x2ecdf4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2ecdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2ecdf8:
    // 0x2ecdf8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2ecdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2ecdfc:
    // 0x2ecdfc: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2ecdfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ece00:
    // 0x2ece00: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x2ece00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_2ece04:
    // 0x2ece04: 0x2402008f  addiu       $v0, $zero, 0x8F
    ctx->pc = 0x2ece04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2ece08:
    // 0x2ece08: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2ece08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2ece0c:
    // 0x2ece0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ece0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ece10:
    // 0x2ece10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ece10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ece14:
    // 0x2ece14: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x2ece14u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2ece18:
    // 0x2ece18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ece18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ece1c:
    // 0x2ece1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ece1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ece20:
    // 0x2ece20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ece20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ece24:
    // 0x2ece24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ece24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ece28:
    // 0x2ece28: 0xc088178  jal         func_2205E0
label_2ece2c:
    if (ctx->pc == 0x2ECE2Cu) {
        ctx->pc = 0x2ECE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE28u;
        // 0x2ece2c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE30u;
        goto label_2ece30;
    }
    ctx->pc = 0x2ECE28u;
    SET_GPR_U32(ctx, 31, 0x2ECE30u);
    ctx->pc = 0x2ECE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE28u;
    // 0x2ece2c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2ECE28u, 0x2ECE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE30u;
label_2ece30:
    // 0x2ece30: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2ece30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2ece34:
    // 0x2ece34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ece34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ece38:
    // 0x2ece38: 0xa2220024  sb          $v0, 0x24($s1)
    ctx->pc = 0x2ece38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 2));
label_2ece3c:
    // 0x2ece3c: 0x1000005d  b           . + 4 + (0x5D << 2)
label_2ece40:
    if (ctx->pc == 0x2ECE40u) {
        ctx->pc = 0x2ECE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE3Cu;
        // 0x2ece40: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE44u;
        goto label_2ece44;
    }
    ctx->pc = 0x2ECE3Cu;
    {
        const bool branch_taken_0x2ece3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE3Cu;
        // 0x2ece40: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece3c) {
            ctx->pc = 0x2ECFB4u;
            goto label_2ecfb4;
        }
    }
    ctx->pc = 0x2ECE44u;
label_2ece44:
    // 0x2ece44: 0x14530019  bne         $v0, $s3, . + 4 + (0x19 << 2)
label_2ece48:
    if (ctx->pc == 0x2ECE48u) {
        ctx->pc = 0x2ECE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE44u;
        // 0x2ece48: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE4Cu;
        goto label_2ece4c;
    }
    ctx->pc = 0x2ECE44u;
    {
        const bool branch_taken_0x2ece44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2ECE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE44u;
        // 0x2ece48: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece44) {
            ctx->pc = 0x2ECEACu;
            goto label_2eceac;
        }
    }
    ctx->pc = 0x2ECE4Cu;
label_2ece4c:
    // 0x2ece4c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2ece4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ece50:
    // 0x2ece50: 0xc0cd4ee  jal         func_3353B8
label_2ece54:
    if (ctx->pc == 0x2ECE54u) {
        ctx->pc = 0x2ECE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE50u;
        // 0x2ece54: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE58u;
        goto label_2ece58;
    }
    ctx->pc = 0x2ECE50u;
    SET_GPR_U32(ctx, 31, 0x2ECE58u);
    ctx->pc = 0x2ECE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE50u;
    // 0x2ece54: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2ECE50u, 0x2ECE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE58u;
label_2ece58:
    // 0x2ece58: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x2ece58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_2ece5c:
    // 0x2ece5c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2ece60:
    if (ctx->pc == 0x2ECE60u) {
        ctx->pc = 0x2ECE64u;
        goto label_2ece64;
    }
    ctx->pc = 0x2ECE5Cu;
    {
        const bool branch_taken_0x2ece5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ece5c) {
            ctx->pc = 0x2ECEACu;
            goto label_2eceac;
        }
    }
    ctx->pc = 0x2ECE64u;
label_2ece64:
    // 0x2ece64: 0xc0a367c  jal         func_28D9F0
label_2ece68:
    if (ctx->pc == 0x2ECE68u) {
        ctx->pc = 0x2ECE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE64u;
        // 0x2ece68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE6Cu;
        goto label_2ece6c;
    }
    ctx->pc = 0x2ECE64u;
    SET_GPR_U32(ctx, 31, 0x2ECE6Cu);
    ctx->pc = 0x2ECE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE64u;
    // 0x2ece68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2ECE64u, 0x2ECE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE6Cu;
label_2ece6c:
    // 0x2ece6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ece6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ece70:
    // 0x2ece70: 0x12400051  beqz        $s2, . + 4 + (0x51 << 2)
label_2ece74:
    if (ctx->pc == 0x2ECE74u) {
        ctx->pc = 0x2ECE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE70u;
        // 0x2ece74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE78u;
        goto label_2ece78;
    }
    ctx->pc = 0x2ECE70u;
    {
        const bool branch_taken_0x2ece70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE70u;
        // 0x2ece74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece70) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2ECE78u;
label_2ece78:
    // 0x2ece78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ece78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ece7c:
    // 0x2ece7c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ece7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ece80:
    // 0x2ece80: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ece80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ece84:
    // 0x2ece84: 0x40f809  jalr        $v0
label_2ece88:
    if (ctx->pc == 0x2ECE88u) {
        ctx->pc = 0x2ECE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE84u;
        // 0x2ece88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECE8Cu;
        goto label_2ece8c;
    }
    ctx->pc = 0x2ECE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ECE8Cu);
        ctx->pc = 0x2ECE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE84u;
        // 0x2ece88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECE84u, 0x2ECE8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ECE8Cu;
label_2ece8c:
    // 0x2ece8c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ece8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ece90:
    // 0x2ece90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ece90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ece94:
    // 0x2ece94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ece94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ece98:
    // 0x2ece98: 0x240703e8  addiu       $a3, $zero, 0x3E8
    ctx->pc = 0x2ece98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2ece9c:
    // 0x2ece9c: 0xc0bfabe  jal         func_2FEAF8
label_2ecea0:
    if (ctx->pc == 0x2ECEA0u) {
        ctx->pc = 0x2ECEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE9Cu;
        // 0x2ecea0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECEA4u;
        goto label_2ecea4;
    }
    ctx->pc = 0x2ECE9Cu;
    SET_GPR_U32(ctx, 31, 0x2ECEA4u);
    ctx->pc = 0x2ECEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE9Cu;
    // 0x2ecea0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAF8u, 0x2ECE9Cu, 0x2ECEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECEA4u;
label_2ecea4:
    // 0x2ecea4: 0x10000044  b           . + 4 + (0x44 << 2)
label_2ecea8:
    if (ctx->pc == 0x2ECEA8u) {
        ctx->pc = 0x2ECEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEA4u;
        // 0x2ecea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECEACu;
        goto label_2eceac;
    }
    ctx->pc = 0x2ECEA4u;
    {
        const bool branch_taken_0x2ecea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEA4u;
        // 0x2ecea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecea4) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2ECEACu;
label_2eceac:
    // 0x2eceac: 0xc086618  jal         func_219860
label_2eceb0:
    if (ctx->pc == 0x2ECEB0u) {
        ctx->pc = 0x2ECEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEACu;
        // 0x2eceb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECEB4u;
        goto label_2eceb4;
    }
    ctx->pc = 0x2ECEACu;
    SET_GPR_U32(ctx, 31, 0x2ECEB4u);
    ctx->pc = 0x2ECEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECEACu;
    // 0x2eceb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2ECEACu, 0x2ECEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECEB4u;
label_2eceb4:
    // 0x2eceb4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2eceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eceb8:
    // 0x2eceb8: 0x46000540  add.s       $f21, $f0, $f0
    ctx->pc = 0x2eceb8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ecebc:
    // 0x2ecebc: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x2ecebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_2ecec0:
    // 0x2ecec0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2ecec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2ecec4:
    // 0x2ecec4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ecec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ecec8:
    // 0x2ecec8: 0xc480013c  lwc1        $f0, 0x13C($a0)
    ctx->pc = 0x2ecec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ececc:
    // 0x2ececc: 0xc0a367c  jal         func_28D9F0
label_2eced0:
    if (ctx->pc == 0x2ECED0u) {
        ctx->pc = 0x2ECED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECECCu;
        // 0x2eced0: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECED4u;
        goto label_2eced4;
    }
    ctx->pc = 0x2ECECCu;
    SET_GPR_U32(ctx, 31, 0x2ECED4u);
    ctx->pc = 0x2ECED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECECCu;
    // 0x2eced0: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2ECECCu, 0x2ECED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECED4u;
label_2eced4:
    // 0x2eced4: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_2eced8:
    if (ctx->pc == 0x2ECED8u) {
        ctx->pc = 0x2ECED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECED4u;
        // 0x2eced8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECEDCu;
        goto label_2ecedc;
    }
    ctx->pc = 0x2ECED4u;
    {
        const bool branch_taken_0x2eced4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECED4u;
        // 0x2eced8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eced4) {
            ctx->pc = 0x2ECFB4u;
            goto label_2ecfb4;
        }
    }
    ctx->pc = 0x2ECEDCu;
label_2ecedc:
    // 0x2ecedc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ecedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ecee0:
    // 0x2ecee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ecee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ecee4:
    // 0x2ecee4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2ecee4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2ecee8:
    // 0x2ecee8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2ecee8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2eceec:
    // 0x2eceec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eceecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecef0:
    // 0x2ecef0: 0xc0bf3d4  jal         func_2FCF50
label_2ecef4:
    if (ctx->pc == 0x2ECEF4u) {
        ctx->pc = 0x2ECEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEF0u;
        // 0x2ecef4: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECEF8u;
        goto label_2ecef8;
    }
    ctx->pc = 0x2ECEF0u;
    SET_GPR_U32(ctx, 31, 0x2ECEF8u);
    ctx->pc = 0x2ECEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECEF0u;
    // 0x2ecef4: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2ECEF0u, 0x2ECEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECEF8u;
label_2ecef8:
    // 0x2ecef8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2ecefc:
    if (ctx->pc == 0x2ECEFCu) {
        ctx->pc = 0x2ECEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEF8u;
        // 0x2ecefc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF00u;
        goto label_2ecf00;
    }
    ctx->pc = 0x2ECEF8u;
    {
        const bool branch_taken_0x2ecef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEF8u;
        // 0x2ecefc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecef8) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2ECF00u;
label_2ecf00:
    // 0x2ecf00: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_2ecf04:
    if (ctx->pc == 0x2ECF04u) {
        ctx->pc = 0x2ECF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF00u;
        // 0x2ecf04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF08u;
        goto label_2ecf08;
    }
    ctx->pc = 0x2ECF00u;
    {
        const bool branch_taken_0x2ecf00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ECF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF00u;
        // 0x2ecf04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf00) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2ECF08u;
label_2ecf08:
    // 0x2ecf08: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2ecf08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2ecf0c:
    // 0x2ecf0c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2ecf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2ecf10:
    // 0x2ecf10: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2ecf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2ecf14:
    // 0x2ecf14: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2ecf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2ecf18:
    // 0x2ecf18: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2ecf18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2ecf1c:
    // 0x2ecf1c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2ecf20:
    if (ctx->pc == 0x2ECF20u) {
        ctx->pc = 0x2ECF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF1Cu;
        // 0x2ecf20: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF24u;
        goto label_2ecf24;
    }
    ctx->pc = 0x2ECF1Cu;
    {
        const bool branch_taken_0x2ecf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF1Cu;
        // 0x2ecf20: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf1c) {
            ctx->pc = 0x2ECF54u;
            goto label_2ecf54;
        }
    }
    ctx->pc = 0x2ECF24u;
label_2ecf24:
    // 0x2ecf24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ecf24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ecf28:
    // 0x2ecf28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ecf28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ecf2c:
    // 0x2ecf2c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ecf2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ecf30:
    // 0x2ecf30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ecf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ecf34:
    // 0x2ecf34: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ecf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ecf38:
    // 0x2ecf38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ecf38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecf3c:
    // 0x2ecf3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ecf3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecf40:
    // 0x2ecf40: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ecf40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ecf44:
    // 0x2ecf44: 0xc088178  jal         func_2205E0
label_2ecf48:
    if (ctx->pc == 0x2ECF48u) {
        ctx->pc = 0x2ECF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF44u;
        // 0x2ecf48: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF4Cu;
        goto label_2ecf4c;
    }
    ctx->pc = 0x2ECF44u;
    SET_GPR_U32(ctx, 31, 0x2ECF4Cu);
    ctx->pc = 0x2ECF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECF44u;
    // 0x2ecf48: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2ECF44u, 0x2ECF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECF4Cu;
label_2ecf4c:
    // 0x2ecf4c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2ecf50:
    if (ctx->pc == 0x2ECF50u) {
        ctx->pc = 0x2ECF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF4Cu;
        // 0x2ecf50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF54u;
        goto label_2ecf54;
    }
    ctx->pc = 0x2ECF4Cu;
    {
        const bool branch_taken_0x2ecf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF4Cu;
        // 0x2ecf50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf4c) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2ECF54u;
label_2ecf54:
    // 0x2ecf54: 0xc088ef0  jal         func_223BC0
label_2ecf58:
    if (ctx->pc == 0x2ECF58u) {
        ctx->pc = 0x2ECF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF54u;
        // 0x2ecf58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF5Cu;
        goto label_2ecf5c;
    }
    ctx->pc = 0x2ECF54u;
    SET_GPR_U32(ctx, 31, 0x2ECF5Cu);
    ctx->pc = 0x2ECF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECF54u;
    // 0x2ecf58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2ECF54u, 0x2ECF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECF5Cu;
label_2ecf5c:
    // 0x2ecf5c: 0x1453000a  bne         $v0, $s3, . + 4 + (0xA << 2)
label_2ecf60:
    if (ctx->pc == 0x2ECF60u) {
        ctx->pc = 0x2ECF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF5Cu;
        // 0x2ecf60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF64u;
        goto label_2ecf64;
    }
    ctx->pc = 0x2ECF5Cu;
    {
        const bool branch_taken_0x2ecf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2ECF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF5Cu;
        // 0x2ecf60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf5c) {
            ctx->pc = 0x2ECF88u;
            goto label_2ecf88;
        }
    }
    ctx->pc = 0x2ECF64u;
label_2ecf64:
    // 0x2ecf64: 0xc08be36  jal         func_22F8D8
label_2ecf68:
    if (ctx->pc == 0x2ECF68u) {
        ctx->pc = 0x2ECF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF64u;
        // 0x2ecf68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF6Cu;
        goto label_2ecf6c;
    }
    ctx->pc = 0x2ECF64u;
    SET_GPR_U32(ctx, 31, 0x2ECF6Cu);
    ctx->pc = 0x2ECF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECF64u;
    // 0x2ecf68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x2ECF64u, 0x2ECF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECF6Cu;
label_2ecf6c:
    // 0x2ecf6c: 0xde4300e0  ld          $v1, 0xE0($s2)
    ctx->pc = 0x2ecf6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2ecf70:
    // 0x2ecf70: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x2ecf70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
label_2ecf74:
    // 0x2ecf74: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2ecf74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2ecf78:
    // 0x2ecf78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ecf78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecf7c:
    // 0x2ecf7c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ecf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2ecf80:
    // 0x2ecf80: 0x1000000d  b           . + 4 + (0xD << 2)
label_2ecf84:
    if (ctx->pc == 0x2ECF84u) {
        ctx->pc = 0x2ECF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF80u;
        // 0x2ecf84: 0xfe4300e0  sd          $v1, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF88u;
        goto label_2ecf88;
    }
    ctx->pc = 0x2ECF80u;
    {
        const bool branch_taken_0x2ecf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF80u;
        // 0x2ecf84: 0xfe4300e0  sd          $v1, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf80) {
            ctx->pc = 0x2ECFB8u;
            goto label_2ecfb8;
        }
    }
    ctx->pc = 0x2ECF88u;
label_2ecf88:
    // 0x2ecf88: 0xc0bb080  jal         func_2EC200
label_2ecf8c:
    if (ctx->pc == 0x2ECF8Cu) {
        ctx->pc = 0x2ECF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF88u;
        // 0x2ecf8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF90u;
        goto label_2ecf90;
    }
    ctx->pc = 0x2ECF88u;
    SET_GPR_U32(ctx, 31, 0x2ECF90u);
    ctx->pc = 0x2ECF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECF88u;
    // 0x2ecf8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC200u, 0x2ECF88u, 0x2ECF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECF90u;
label_2ecf90:
    // 0x2ecf90: 0xc088bbc  jal         func_222EF0
label_2ecf94:
    if (ctx->pc == 0x2ECF94u) {
        ctx->pc = 0x2ECF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF90u;
        // 0x2ecf94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECF98u;
        goto label_2ecf98;
    }
    ctx->pc = 0x2ECF90u;
    SET_GPR_U32(ctx, 31, 0x2ECF98u);
    ctx->pc = 0x2ECF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECF90u;
    // 0x2ecf94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x2ECF90u, 0x2ECF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECF98u;
label_2ecf98:
    // 0x2ecf98: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2ecf98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_2ecf9c:
    // 0x2ecf9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ecf9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ecfa0:
    // 0x2ecfa0: 0x0  nop
    ctx->pc = 0x2ecfa0u;
    // NOP
label_2ecfa4:
    // 0x2ecfa4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ecfa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ecfa8:
    // 0x2ecfa8: 0x0  nop
    ctx->pc = 0x2ecfa8u;
    // NOP
label_2ecfac:
    // 0x2ecfac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2ecfb0:
    if (ctx->pc == 0x2ECFB0u) {
        ctx->pc = 0x2ECFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFACu;
        // 0x2ecfb0: 0xa2330027  sb          $s3, 0x27($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 39), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECFB4u;
        goto label_2ecfb4;
    }
    ctx->pc = 0x2ECFACu;
    {
        const bool branch_taken_0x2ecfac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ecfac) {
            ctx->pc = 0x2ECFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECFACu;
            // 0x2ecfb0: 0xa2330027  sb          $s3, 0x27($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 39), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECFB4u;
            goto label_2ecfb4;
        }
    }
    ctx->pc = 0x2ECFB4u;
label_2ecfb4:
    // 0x2ecfb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ecfb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecfb8:
    // 0x2ecfb8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2ecfb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ecfbc:
    // 0x2ecfbc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ecfbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ecfc0:
    // 0x2ecfc0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ecfc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ecfc4:
    // 0x2ecfc4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2ecfc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ecfc8:
    // 0x2ecfc8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2ecfc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ecfcc:
    // 0x2ecfcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ecfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ecfd0:
    // 0x2ecfd0: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x2ecfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2ecfd4:
    // 0x2ecfd4: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2ecfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ecfd8:
    // 0x2ecfd8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2ecfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ecfdc:
    // 0x2ecfdc: 0x3e00008  jr          $ra
label_2ecfe0:
    if (ctx->pc == 0x2ECFE0u) {
        ctx->pc = 0x2ECFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFDCu;
        // 0x2ecfe0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ECFE4u;
        goto label_2ecfe4;
    }
    ctx->pc = 0x2ECFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFDCu;
        // 0x2ecfe0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECFE4u;
label_2ecfe4:
    // 0x2ecfe4: 0x0  nop
    ctx->pc = 0x2ecfe4u;
    // NOP
    ctx->pc = 0x2ecfe8u;
}
