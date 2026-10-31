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

// Function: sub_0048B708
// Address: 0x48b708 - 0x48bdb0
void sub_0048B708_0x48b708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B708_0x48b708");
#endif

    switch (ctx->pc) {
        case 0x48b708u: goto label_48b708;
        case 0x48b70cu: goto label_48b70c;
        case 0x48b710u: goto label_48b710;
        case 0x48b714u: goto label_48b714;
        case 0x48b718u: goto label_48b718;
        case 0x48b71cu: goto label_48b71c;
        case 0x48b720u: goto label_48b720;
        case 0x48b724u: goto label_48b724;
        case 0x48b728u: goto label_48b728;
        case 0x48b72cu: goto label_48b72c;
        case 0x48b730u: goto label_48b730;
        case 0x48b734u: goto label_48b734;
        case 0x48b738u: goto label_48b738;
        case 0x48b73cu: goto label_48b73c;
        case 0x48b740u: goto label_48b740;
        case 0x48b744u: goto label_48b744;
        case 0x48b748u: goto label_48b748;
        case 0x48b74cu: goto label_48b74c;
        case 0x48b750u: goto label_48b750;
        case 0x48b754u: goto label_48b754;
        case 0x48b758u: goto label_48b758;
        case 0x48b75cu: goto label_48b75c;
        case 0x48b760u: goto label_48b760;
        case 0x48b764u: goto label_48b764;
        case 0x48b768u: goto label_48b768;
        case 0x48b76cu: goto label_48b76c;
        case 0x48b770u: goto label_48b770;
        case 0x48b774u: goto label_48b774;
        case 0x48b778u: goto label_48b778;
        case 0x48b77cu: goto label_48b77c;
        case 0x48b780u: goto label_48b780;
        case 0x48b784u: goto label_48b784;
        case 0x48b788u: goto label_48b788;
        case 0x48b78cu: goto label_48b78c;
        case 0x48b790u: goto label_48b790;
        case 0x48b794u: goto label_48b794;
        case 0x48b798u: goto label_48b798;
        case 0x48b79cu: goto label_48b79c;
        case 0x48b7a0u: goto label_48b7a0;
        case 0x48b7a4u: goto label_48b7a4;
        case 0x48b7a8u: goto label_48b7a8;
        case 0x48b7acu: goto label_48b7ac;
        case 0x48b7b0u: goto label_48b7b0;
        case 0x48b7b4u: goto label_48b7b4;
        case 0x48b7b8u: goto label_48b7b8;
        case 0x48b7bcu: goto label_48b7bc;
        case 0x48b7c0u: goto label_48b7c0;
        case 0x48b7c4u: goto label_48b7c4;
        case 0x48b7c8u: goto label_48b7c8;
        case 0x48b7ccu: goto label_48b7cc;
        case 0x48b7d0u: goto label_48b7d0;
        case 0x48b7d4u: goto label_48b7d4;
        case 0x48b7d8u: goto label_48b7d8;
        case 0x48b7dcu: goto label_48b7dc;
        case 0x48b7e0u: goto label_48b7e0;
        case 0x48b7e4u: goto label_48b7e4;
        case 0x48b7e8u: goto label_48b7e8;
        case 0x48b7ecu: goto label_48b7ec;
        case 0x48b7f0u: goto label_48b7f0;
        case 0x48b7f4u: goto label_48b7f4;
        case 0x48b7f8u: goto label_48b7f8;
        case 0x48b7fcu: goto label_48b7fc;
        case 0x48b800u: goto label_48b800;
        case 0x48b804u: goto label_48b804;
        case 0x48b808u: goto label_48b808;
        case 0x48b80cu: goto label_48b80c;
        case 0x48b810u: goto label_48b810;
        case 0x48b814u: goto label_48b814;
        case 0x48b818u: goto label_48b818;
        case 0x48b81cu: goto label_48b81c;
        case 0x48b820u: goto label_48b820;
        case 0x48b824u: goto label_48b824;
        case 0x48b828u: goto label_48b828;
        case 0x48b82cu: goto label_48b82c;
        case 0x48b830u: goto label_48b830;
        case 0x48b834u: goto label_48b834;
        case 0x48b838u: goto label_48b838;
        case 0x48b83cu: goto label_48b83c;
        case 0x48b840u: goto label_48b840;
        case 0x48b844u: goto label_48b844;
        case 0x48b848u: goto label_48b848;
        case 0x48b84cu: goto label_48b84c;
        case 0x48b850u: goto label_48b850;
        case 0x48b854u: goto label_48b854;
        case 0x48b858u: goto label_48b858;
        case 0x48b85cu: goto label_48b85c;
        case 0x48b860u: goto label_48b860;
        case 0x48b864u: goto label_48b864;
        case 0x48b868u: goto label_48b868;
        case 0x48b86cu: goto label_48b86c;
        case 0x48b870u: goto label_48b870;
        case 0x48b874u: goto label_48b874;
        case 0x48b878u: goto label_48b878;
        case 0x48b87cu: goto label_48b87c;
        case 0x48b880u: goto label_48b880;
        case 0x48b884u: goto label_48b884;
        case 0x48b888u: goto label_48b888;
        case 0x48b88cu: goto label_48b88c;
        case 0x48b890u: goto label_48b890;
        case 0x48b894u: goto label_48b894;
        case 0x48b898u: goto label_48b898;
        case 0x48b89cu: goto label_48b89c;
        case 0x48b8a0u: goto label_48b8a0;
        case 0x48b8a4u: goto label_48b8a4;
        case 0x48b8a8u: goto label_48b8a8;
        case 0x48b8acu: goto label_48b8ac;
        case 0x48b8b0u: goto label_48b8b0;
        case 0x48b8b4u: goto label_48b8b4;
        case 0x48b8b8u: goto label_48b8b8;
        case 0x48b8bcu: goto label_48b8bc;
        case 0x48b8c0u: goto label_48b8c0;
        case 0x48b8c4u: goto label_48b8c4;
        case 0x48b8c8u: goto label_48b8c8;
        case 0x48b8ccu: goto label_48b8cc;
        case 0x48b8d0u: goto label_48b8d0;
        case 0x48b8d4u: goto label_48b8d4;
        case 0x48b8d8u: goto label_48b8d8;
        case 0x48b8dcu: goto label_48b8dc;
        case 0x48b8e0u: goto label_48b8e0;
        case 0x48b8e4u: goto label_48b8e4;
        case 0x48b8e8u: goto label_48b8e8;
        case 0x48b8ecu: goto label_48b8ec;
        case 0x48b8f0u: goto label_48b8f0;
        case 0x48b8f4u: goto label_48b8f4;
        case 0x48b8f8u: goto label_48b8f8;
        case 0x48b8fcu: goto label_48b8fc;
        case 0x48b900u: goto label_48b900;
        case 0x48b904u: goto label_48b904;
        case 0x48b908u: goto label_48b908;
        case 0x48b90cu: goto label_48b90c;
        case 0x48b910u: goto label_48b910;
        case 0x48b914u: goto label_48b914;
        case 0x48b918u: goto label_48b918;
        case 0x48b91cu: goto label_48b91c;
        case 0x48b920u: goto label_48b920;
        case 0x48b924u: goto label_48b924;
        case 0x48b928u: goto label_48b928;
        case 0x48b92cu: goto label_48b92c;
        case 0x48b930u: goto label_48b930;
        case 0x48b934u: goto label_48b934;
        case 0x48b938u: goto label_48b938;
        case 0x48b93cu: goto label_48b93c;
        case 0x48b940u: goto label_48b940;
        case 0x48b944u: goto label_48b944;
        case 0x48b948u: goto label_48b948;
        case 0x48b94cu: goto label_48b94c;
        case 0x48b950u: goto label_48b950;
        case 0x48b954u: goto label_48b954;
        case 0x48b958u: goto label_48b958;
        case 0x48b95cu: goto label_48b95c;
        case 0x48b960u: goto label_48b960;
        case 0x48b964u: goto label_48b964;
        case 0x48b968u: goto label_48b968;
        case 0x48b96cu: goto label_48b96c;
        case 0x48b970u: goto label_48b970;
        case 0x48b974u: goto label_48b974;
        case 0x48b978u: goto label_48b978;
        case 0x48b97cu: goto label_48b97c;
        case 0x48b980u: goto label_48b980;
        case 0x48b984u: goto label_48b984;
        case 0x48b988u: goto label_48b988;
        case 0x48b98cu: goto label_48b98c;
        case 0x48b990u: goto label_48b990;
        case 0x48b994u: goto label_48b994;
        case 0x48b998u: goto label_48b998;
        case 0x48b99cu: goto label_48b99c;
        case 0x48b9a0u: goto label_48b9a0;
        case 0x48b9a4u: goto label_48b9a4;
        case 0x48b9a8u: goto label_48b9a8;
        case 0x48b9acu: goto label_48b9ac;
        case 0x48b9b0u: goto label_48b9b0;
        case 0x48b9b4u: goto label_48b9b4;
        case 0x48b9b8u: goto label_48b9b8;
        case 0x48b9bcu: goto label_48b9bc;
        case 0x48b9c0u: goto label_48b9c0;
        case 0x48b9c4u: goto label_48b9c4;
        case 0x48b9c8u: goto label_48b9c8;
        case 0x48b9ccu: goto label_48b9cc;
        case 0x48b9d0u: goto label_48b9d0;
        case 0x48b9d4u: goto label_48b9d4;
        case 0x48b9d8u: goto label_48b9d8;
        case 0x48b9dcu: goto label_48b9dc;
        case 0x48b9e0u: goto label_48b9e0;
        case 0x48b9e4u: goto label_48b9e4;
        case 0x48b9e8u: goto label_48b9e8;
        case 0x48b9ecu: goto label_48b9ec;
        case 0x48b9f0u: goto label_48b9f0;
        case 0x48b9f4u: goto label_48b9f4;
        case 0x48b9f8u: goto label_48b9f8;
        case 0x48b9fcu: goto label_48b9fc;
        case 0x48ba00u: goto label_48ba00;
        case 0x48ba04u: goto label_48ba04;
        case 0x48ba08u: goto label_48ba08;
        case 0x48ba0cu: goto label_48ba0c;
        case 0x48ba10u: goto label_48ba10;
        case 0x48ba14u: goto label_48ba14;
        case 0x48ba18u: goto label_48ba18;
        case 0x48ba1cu: goto label_48ba1c;
        case 0x48ba20u: goto label_48ba20;
        case 0x48ba24u: goto label_48ba24;
        case 0x48ba28u: goto label_48ba28;
        case 0x48ba2cu: goto label_48ba2c;
        case 0x48ba30u: goto label_48ba30;
        case 0x48ba34u: goto label_48ba34;
        case 0x48ba38u: goto label_48ba38;
        case 0x48ba3cu: goto label_48ba3c;
        case 0x48ba40u: goto label_48ba40;
        case 0x48ba44u: goto label_48ba44;
        case 0x48ba48u: goto label_48ba48;
        case 0x48ba4cu: goto label_48ba4c;
        case 0x48ba50u: goto label_48ba50;
        case 0x48ba54u: goto label_48ba54;
        case 0x48ba58u: goto label_48ba58;
        case 0x48ba5cu: goto label_48ba5c;
        case 0x48ba60u: goto label_48ba60;
        case 0x48ba64u: goto label_48ba64;
        case 0x48ba68u: goto label_48ba68;
        case 0x48ba6cu: goto label_48ba6c;
        case 0x48ba70u: goto label_48ba70;
        case 0x48ba74u: goto label_48ba74;
        case 0x48ba78u: goto label_48ba78;
        case 0x48ba7cu: goto label_48ba7c;
        case 0x48ba80u: goto label_48ba80;
        case 0x48ba84u: goto label_48ba84;
        case 0x48ba88u: goto label_48ba88;
        case 0x48ba8cu: goto label_48ba8c;
        case 0x48ba90u: goto label_48ba90;
        case 0x48ba94u: goto label_48ba94;
        case 0x48ba98u: goto label_48ba98;
        case 0x48ba9cu: goto label_48ba9c;
        case 0x48baa0u: goto label_48baa0;
        case 0x48baa4u: goto label_48baa4;
        case 0x48baa8u: goto label_48baa8;
        case 0x48baacu: goto label_48baac;
        case 0x48bab0u: goto label_48bab0;
        case 0x48bab4u: goto label_48bab4;
        case 0x48bab8u: goto label_48bab8;
        case 0x48babcu: goto label_48babc;
        case 0x48bac0u: goto label_48bac0;
        case 0x48bac4u: goto label_48bac4;
        case 0x48bac8u: goto label_48bac8;
        case 0x48baccu: goto label_48bacc;
        case 0x48bad0u: goto label_48bad0;
        case 0x48bad4u: goto label_48bad4;
        case 0x48bad8u: goto label_48bad8;
        case 0x48badcu: goto label_48badc;
        case 0x48bae0u: goto label_48bae0;
        case 0x48bae4u: goto label_48bae4;
        case 0x48bae8u: goto label_48bae8;
        case 0x48baecu: goto label_48baec;
        case 0x48baf0u: goto label_48baf0;
        case 0x48baf4u: goto label_48baf4;
        case 0x48baf8u: goto label_48baf8;
        case 0x48bafcu: goto label_48bafc;
        case 0x48bb00u: goto label_48bb00;
        case 0x48bb04u: goto label_48bb04;
        case 0x48bb08u: goto label_48bb08;
        case 0x48bb0cu: goto label_48bb0c;
        case 0x48bb10u: goto label_48bb10;
        case 0x48bb14u: goto label_48bb14;
        case 0x48bb18u: goto label_48bb18;
        case 0x48bb1cu: goto label_48bb1c;
        case 0x48bb20u: goto label_48bb20;
        case 0x48bb24u: goto label_48bb24;
        case 0x48bb28u: goto label_48bb28;
        case 0x48bb2cu: goto label_48bb2c;
        case 0x48bb30u: goto label_48bb30;
        case 0x48bb34u: goto label_48bb34;
        case 0x48bb38u: goto label_48bb38;
        case 0x48bb3cu: goto label_48bb3c;
        case 0x48bb40u: goto label_48bb40;
        case 0x48bb44u: goto label_48bb44;
        case 0x48bb48u: goto label_48bb48;
        case 0x48bb4cu: goto label_48bb4c;
        case 0x48bb50u: goto label_48bb50;
        case 0x48bb54u: goto label_48bb54;
        case 0x48bb58u: goto label_48bb58;
        case 0x48bb5cu: goto label_48bb5c;
        case 0x48bb60u: goto label_48bb60;
        case 0x48bb64u: goto label_48bb64;
        case 0x48bb68u: goto label_48bb68;
        case 0x48bb6cu: goto label_48bb6c;
        case 0x48bb70u: goto label_48bb70;
        case 0x48bb74u: goto label_48bb74;
        case 0x48bb78u: goto label_48bb78;
        case 0x48bb7cu: goto label_48bb7c;
        case 0x48bb80u: goto label_48bb80;
        case 0x48bb84u: goto label_48bb84;
        case 0x48bb88u: goto label_48bb88;
        case 0x48bb8cu: goto label_48bb8c;
        case 0x48bb90u: goto label_48bb90;
        case 0x48bb94u: goto label_48bb94;
        case 0x48bb98u: goto label_48bb98;
        case 0x48bb9cu: goto label_48bb9c;
        case 0x48bba0u: goto label_48bba0;
        case 0x48bba4u: goto label_48bba4;
        case 0x48bba8u: goto label_48bba8;
        case 0x48bbacu: goto label_48bbac;
        case 0x48bbb0u: goto label_48bbb0;
        case 0x48bbb4u: goto label_48bbb4;
        case 0x48bbb8u: goto label_48bbb8;
        case 0x48bbbcu: goto label_48bbbc;
        case 0x48bbc0u: goto label_48bbc0;
        case 0x48bbc4u: goto label_48bbc4;
        case 0x48bbc8u: goto label_48bbc8;
        case 0x48bbccu: goto label_48bbcc;
        case 0x48bbd0u: goto label_48bbd0;
        case 0x48bbd4u: goto label_48bbd4;
        case 0x48bbd8u: goto label_48bbd8;
        case 0x48bbdcu: goto label_48bbdc;
        case 0x48bbe0u: goto label_48bbe0;
        case 0x48bbe4u: goto label_48bbe4;
        case 0x48bbe8u: goto label_48bbe8;
        case 0x48bbecu: goto label_48bbec;
        case 0x48bbf0u: goto label_48bbf0;
        case 0x48bbf4u: goto label_48bbf4;
        case 0x48bbf8u: goto label_48bbf8;
        case 0x48bbfcu: goto label_48bbfc;
        case 0x48bc00u: goto label_48bc00;
        case 0x48bc04u: goto label_48bc04;
        case 0x48bc08u: goto label_48bc08;
        case 0x48bc0cu: goto label_48bc0c;
        case 0x48bc10u: goto label_48bc10;
        case 0x48bc14u: goto label_48bc14;
        case 0x48bc18u: goto label_48bc18;
        case 0x48bc1cu: goto label_48bc1c;
        case 0x48bc20u: goto label_48bc20;
        case 0x48bc24u: goto label_48bc24;
        case 0x48bc28u: goto label_48bc28;
        case 0x48bc2cu: goto label_48bc2c;
        case 0x48bc30u: goto label_48bc30;
        case 0x48bc34u: goto label_48bc34;
        case 0x48bc38u: goto label_48bc38;
        case 0x48bc3cu: goto label_48bc3c;
        case 0x48bc40u: goto label_48bc40;
        case 0x48bc44u: goto label_48bc44;
        case 0x48bc48u: goto label_48bc48;
        case 0x48bc4cu: goto label_48bc4c;
        case 0x48bc50u: goto label_48bc50;
        case 0x48bc54u: goto label_48bc54;
        case 0x48bc58u: goto label_48bc58;
        case 0x48bc5cu: goto label_48bc5c;
        case 0x48bc60u: goto label_48bc60;
        case 0x48bc64u: goto label_48bc64;
        case 0x48bc68u: goto label_48bc68;
        case 0x48bc6cu: goto label_48bc6c;
        case 0x48bc70u: goto label_48bc70;
        case 0x48bc74u: goto label_48bc74;
        case 0x48bc78u: goto label_48bc78;
        case 0x48bc7cu: goto label_48bc7c;
        case 0x48bc80u: goto label_48bc80;
        case 0x48bc84u: goto label_48bc84;
        case 0x48bc88u: goto label_48bc88;
        case 0x48bc8cu: goto label_48bc8c;
        case 0x48bc90u: goto label_48bc90;
        case 0x48bc94u: goto label_48bc94;
        case 0x48bc98u: goto label_48bc98;
        case 0x48bc9cu: goto label_48bc9c;
        case 0x48bca0u: goto label_48bca0;
        case 0x48bca4u: goto label_48bca4;
        case 0x48bca8u: goto label_48bca8;
        case 0x48bcacu: goto label_48bcac;
        case 0x48bcb0u: goto label_48bcb0;
        case 0x48bcb4u: goto label_48bcb4;
        case 0x48bcb8u: goto label_48bcb8;
        case 0x48bcbcu: goto label_48bcbc;
        case 0x48bcc0u: goto label_48bcc0;
        case 0x48bcc4u: goto label_48bcc4;
        case 0x48bcc8u: goto label_48bcc8;
        case 0x48bcccu: goto label_48bccc;
        case 0x48bcd0u: goto label_48bcd0;
        case 0x48bcd4u: goto label_48bcd4;
        case 0x48bcd8u: goto label_48bcd8;
        case 0x48bcdcu: goto label_48bcdc;
        case 0x48bce0u: goto label_48bce0;
        case 0x48bce4u: goto label_48bce4;
        case 0x48bce8u: goto label_48bce8;
        case 0x48bcecu: goto label_48bcec;
        case 0x48bcf0u: goto label_48bcf0;
        case 0x48bcf4u: goto label_48bcf4;
        case 0x48bcf8u: goto label_48bcf8;
        case 0x48bcfcu: goto label_48bcfc;
        case 0x48bd00u: goto label_48bd00;
        case 0x48bd04u: goto label_48bd04;
        case 0x48bd08u: goto label_48bd08;
        case 0x48bd0cu: goto label_48bd0c;
        case 0x48bd10u: goto label_48bd10;
        case 0x48bd14u: goto label_48bd14;
        case 0x48bd18u: goto label_48bd18;
        case 0x48bd1cu: goto label_48bd1c;
        case 0x48bd20u: goto label_48bd20;
        case 0x48bd24u: goto label_48bd24;
        case 0x48bd28u: goto label_48bd28;
        case 0x48bd2cu: goto label_48bd2c;
        case 0x48bd30u: goto label_48bd30;
        case 0x48bd34u: goto label_48bd34;
        case 0x48bd38u: goto label_48bd38;
        case 0x48bd3cu: goto label_48bd3c;
        case 0x48bd40u: goto label_48bd40;
        case 0x48bd44u: goto label_48bd44;
        case 0x48bd48u: goto label_48bd48;
        case 0x48bd4cu: goto label_48bd4c;
        case 0x48bd50u: goto label_48bd50;
        case 0x48bd54u: goto label_48bd54;
        case 0x48bd58u: goto label_48bd58;
        case 0x48bd5cu: goto label_48bd5c;
        case 0x48bd60u: goto label_48bd60;
        case 0x48bd64u: goto label_48bd64;
        case 0x48bd68u: goto label_48bd68;
        case 0x48bd6cu: goto label_48bd6c;
        case 0x48bd70u: goto label_48bd70;
        case 0x48bd74u: goto label_48bd74;
        case 0x48bd78u: goto label_48bd78;
        case 0x48bd7cu: goto label_48bd7c;
        case 0x48bd80u: goto label_48bd80;
        case 0x48bd84u: goto label_48bd84;
        case 0x48bd88u: goto label_48bd88;
        case 0x48bd8cu: goto label_48bd8c;
        case 0x48bd90u: goto label_48bd90;
        case 0x48bd94u: goto label_48bd94;
        case 0x48bd98u: goto label_48bd98;
        case 0x48bd9cu: goto label_48bd9c;
        case 0x48bda0u: goto label_48bda0;
        case 0x48bda4u: goto label_48bda4;
        case 0x48bda8u: goto label_48bda8;
        case 0x48bdacu: goto label_48bdac;
        default: break;
    }

    ctx->pc = 0x48b708u;

label_48b708:
    // 0x48b708: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x48b708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_48b70c:
    // 0x48b70c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48b710:
    // 0x48b710: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x48b710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_48b714:
    // 0x48b714: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x48b714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_48b718:
    // 0x48b718: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x48b718u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48b71c:
    // 0x48b71c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x48b71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_48b720:
    // 0x48b720: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x48b720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_48b724:
    // 0x48b724: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x48b724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_48b728:
    // 0x48b728: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x48b728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_48b72c:
    // 0x48b72c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x48b72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_48b730:
    // 0x48b730: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x48b730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_48b734:
    // 0x48b734: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x48b734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_48b738:
    // 0x48b738: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48b738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48b73c:
    // 0x48b73c: 0x13c20005  beq         $fp, $v0, . + 4 + (0x5 << 2)
label_48b740:
    if (ctx->pc == 0x48B740u) {
        ctx->pc = 0x48B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B73Cu;
        // 0x48b740: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B744u;
        goto label_48b744;
    }
    ctx->pc = 0x48B73Cu;
    {
        const bool branch_taken_0x48b73c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x48B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B73Cu;
        // 0x48b740: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b73c) {
            ctx->pc = 0x48B754u;
            goto label_48b754;
        }
    }
    ctx->pc = 0x48B744u;
label_48b744:
    // 0x48b744: 0x27828a14  addiu       $v0, $gp, -0x75EC
    ctx->pc = 0x48b744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937108));
label_48b748:
    // 0x48b748: 0x39c1824  and         $v1, $gp, $gp
    ctx->pc = 0x48b748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 28) & GPR_U64(ctx, 28));
label_48b74c:
    // 0x48b74c: 0x8c5c0000  lw          $gp, 0x0($v0)
    ctx->pc = 0x48b74cu;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48b750:
    // 0x48b750: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x48b750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_48b754:
    // 0x48b754: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x48b754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_48b758:
    // 0x48b758: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x48b758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_48b75c:
    // 0x48b75c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_48b760:
    if (ctx->pc == 0x48B760u) {
        ctx->pc = 0x48B764u;
        goto label_48b764;
    }
    ctx->pc = 0x48B75Cu;
    {
        const bool branch_taken_0x48b75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b75c) {
            ctx->pc = 0x48B77Cu;
            goto label_48b77c;
        }
    }
    ctx->pc = 0x48B764u;
label_48b764:
    // 0x48b764: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48b764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
label_48b768:
    // 0x48b768: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_48b76c:
    if (ctx->pc == 0x48B76Cu) {
        ctx->pc = 0x48B770u;
        goto label_48b770;
    }
    ctx->pc = 0x48B768u;
    {
        const bool branch_taken_0x48b768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b768) {
            ctx->pc = 0x48B77Cu;
            goto label_48b77c;
        }
    }
    ctx->pc = 0x48B770u;
label_48b770:
    // 0x48b770: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48b770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
label_48b774:
    // 0x48b774: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x48b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_48b778:
    // 0x48b778: 0xa38289f8  sb          $v0, -0x7608($gp)
    ctx->pc = 0x48b778u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937080), (uint8_t)GPR_U32(ctx, 2));
label_48b77c:
    // 0x48b77c: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48b77cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
label_48b780:
    // 0x48b780: 0x14400178  bnez        $v0, . + 4 + (0x178 << 2)
label_48b784:
    if (ctx->pc == 0x48B784u) {
        ctx->pc = 0x48B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B780u;
        // 0x48b784: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B788u;
        goto label_48b788;
    }
    ctx->pc = 0x48B780u;
    {
        const bool branch_taken_0x48b780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B780u;
        // 0x48b784: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b780) {
            ctx->pc = 0x48BD64u;
            goto label_48bd64;
        }
    }
    ctx->pc = 0x48B788u;
label_48b788:
    // 0x48b788: 0x8f868a00  lw          $a2, -0x7600($gp)
    ctx->pc = 0x48b788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
label_48b78c:
    // 0x48b78c: 0x8f828a04  lw          $v0, -0x75FC($gp)
    ctx->pc = 0x48b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937092)));
label_48b790:
    // 0x48b790: 0x10c20174  beq         $a2, $v0, . + 4 + (0x174 << 2)
label_48b794:
    if (ctx->pc == 0x48B794u) {
        ctx->pc = 0x48B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B790u;
        // 0x48b794: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B798u;
        goto label_48b798;
    }
    ctx->pc = 0x48B790u;
    {
        const bool branch_taken_0x48b790 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x48B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B790u;
        // 0x48b794: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b790) {
            ctx->pc = 0x48BD64u;
            goto label_48bd64;
        }
    }
    ctx->pc = 0x48B798u;
label_48b798:
    // 0x48b798: 0x9382899b  lbu         $v0, -0x7665($gp)
    ctx->pc = 0x48b798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936987)));
label_48b79c:
    // 0x48b79c: 0x14400171  bnez        $v0, . + 4 + (0x171 << 2)
label_48b7a0:
    if (ctx->pc == 0x48B7A0u) {
        ctx->pc = 0x48B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B79Cu;
        // 0x48b7a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B7A4u;
        goto label_48b7a4;
    }
    ctx->pc = 0x48B79Cu;
    {
        const bool branch_taken_0x48b79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B79Cu;
        // 0x48b7a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b79c) {
            ctx->pc = 0x48BD64u;
            goto label_48bd64;
        }
    }
    ctx->pc = 0x48B7A4u;
label_48b7a4:
    // 0x48b7a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x48b7a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b7a8:
    // 0x48b7a8: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x48b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
label_48b7ac:
    // 0x48b7ac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x48b7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_48b7b0:
    // 0x48b7b0: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x48b7b0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_48b7b4:
    // 0x48b7b4: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x48b7b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
label_48b7b8:
    // 0x48b7b8: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x48b7b8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
label_48b7bc:
    // 0x48b7bc: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x48b7bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
label_48b7c0:
    // 0x48b7c0: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x48b7c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
label_48b7c4:
    // 0x48b7c4: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x48b7c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
label_48b7c8:
    // 0x48b7c8: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x48b7c8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
label_48b7cc:
    // 0x48b7cc: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x48b7ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
label_48b7d0:
    // 0x48b7d0: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x48b7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
label_48b7d4:
    // 0x48b7d4: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x48b7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_48b7d8:
    // 0x48b7d8: 0x36f7a030  ori         $s7, $s7, 0xA030
    ctx->pc = 0x48b7d8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)41008);
label_48b7dc:
    // 0x48b7dc: 0x3694a020  ori         $s4, $s4, 0xA020
    ctx->pc = 0x48b7dcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)40992);
label_48b7e0:
    // 0x48b7e0: 0x3673a000  ori         $s3, $s3, 0xA000
    ctx->pc = 0x48b7e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)40960);
label_48b7e4:
    // 0x48b7e4: 0x36d69030  ori         $s6, $s6, 0x9030
    ctx->pc = 0x48b7e4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)36912);
label_48b7e8:
    // 0x48b7e8: 0x36529020  ori         $s2, $s2, 0x9020
    ctx->pc = 0x48b7e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)36896);
label_48b7ec:
    // 0x48b7ec: 0x36319000  ori         $s1, $s1, 0x9000
    ctx->pc = 0x48b7ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)36864);
label_48b7f0:
    // 0x48b7f0: 0x36b53010  ori         $s5, $s5, 0x3010
    ctx->pc = 0x48b7f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)12304);
label_48b7f4:
    // 0x48b7f4: 0x3610f000  ori         $s0, $s0, 0xF000
    ctx->pc = 0x48b7f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)61440);
label_48b7f8:
    // 0x48b7f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x48b7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_48b7fc:
    // 0x48b7fc: 0x0  nop
    ctx->pc = 0x48b7fcu;
    // NOP
label_48b800:
    // 0x48b800: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x48b800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_48b804:
    // 0x48b804: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x48b804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_48b808:
    // 0x48b808: 0x1082010f  beq         $a0, $v0, . + 4 + (0x10F << 2)
label_48b80c:
    if (ctx->pc == 0x48B80Cu) {
        ctx->pc = 0x48B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B808u;
        // 0x48b80c: 0x2c820042  sltiu       $v0, $a0, 0x42 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)66) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B810u;
        goto label_48b810;
    }
    ctx->pc = 0x48B808u;
    {
        const bool branch_taken_0x48b808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x48B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B808u;
        // 0x48b80c: 0x2c820042  sltiu       $v0, $a0, 0x42 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)66) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b808) {
            ctx->pc = 0x48BC48u;
            goto label_48bc48;
        }
    }
    ctx->pc = 0x48B810u;
label_48b810:
    // 0x48b810: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_48b814:
    if (ctx->pc == 0x48B814u) {
        ctx->pc = 0x48B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B810u;
        // 0x48b814: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B818u;
        goto label_48b818;
    }
    ctx->pc = 0x48B810u;
    {
        const bool branch_taken_0x48b810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B810u;
        // 0x48b814: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b810) {
            ctx->pc = 0x48B854u;
            goto label_48b854;
        }
    }
    ctx->pc = 0x48B818u;
label_48b818:
    // 0x48b818: 0x10820071  beq         $a0, $v0, . + 4 + (0x71 << 2)
label_48b81c:
    if (ctx->pc == 0x48B81Cu) {
        ctx->pc = 0x48B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B818u;
        // 0x48b81c: 0x2c820003  sltiu       $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B820u;
        goto label_48b820;
    }
    ctx->pc = 0x48B818u;
    {
        const bool branch_taken_0x48b818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x48B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B818u;
        // 0x48b81c: 0x2c820003  sltiu       $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b818) {
            ctx->pc = 0x48B9E0u;
            goto label_48b9e0;
        }
    }
    ctx->pc = 0x48B820u;
label_48b820:
    // 0x48b820: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_48b824:
    if (ctx->pc == 0x48B824u) {
        ctx->pc = 0x48B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B820u;
        // 0x48b824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B828u;
        goto label_48b828;
    }
    ctx->pc = 0x48B820u;
    {
        const bool branch_taken_0x48b820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B820u;
        // 0x48b824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b820) {
            ctx->pc = 0x48B838u;
            goto label_48b838;
        }
    }
    ctx->pc = 0x48B828u;
label_48b828:
    // 0x48b828: 0x108200ac  beq         $a0, $v0, . + 4 + (0xAC << 2)
label_48b82c:
    if (ctx->pc == 0x48B82Cu) {
        ctx->pc = 0x48B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B828u;
        // 0x48b82c: 0x8f828a00  lw          $v0, -0x7600($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B830u;
        goto label_48b830;
    }
    ctx->pc = 0x48B828u;
    {
        const bool branch_taken_0x48b828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x48B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B828u;
        // 0x48b82c: 0x8f828a00  lw          $v0, -0x7600($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b828) {
            ctx->pc = 0x48BADCu;
            goto label_48badc;
        }
    }
    ctx->pc = 0x48B830u;
label_48b830:
    // 0x48b830: 0x10000141  b           . + 4 + (0x141 << 2)
label_48b834:
    if (ctx->pc == 0x48B834u) {
        ctx->pc = 0x48B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B830u;
        // 0x48b834: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B838u;
        goto label_48b838;
    }
    ctx->pc = 0x48B830u;
    {
        const bool branch_taken_0x48b830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B830u;
        // 0x48b834: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b830) {
            ctx->pc = 0x48BD38u;
            goto label_48bd38;
        }
    }
    ctx->pc = 0x48B838u;
label_48b838:
    // 0x48b838: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x48b838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_48b83c:
    // 0x48b83c: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
label_48b840:
    if (ctx->pc == 0x48B840u) {
        ctx->pc = 0x48B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B83Cu;
        // 0x48b840: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B844u;
        goto label_48b844;
    }
    ctx->pc = 0x48B83Cu;
    {
        const bool branch_taken_0x48b83c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x48B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B83Cu;
        // 0x48b840: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b83c) {
            ctx->pc = 0x48B884u;
            goto label_48b884;
        }
    }
    ctx->pc = 0x48B844u;
label_48b844:
    // 0x48b844: 0x108200cd  beq         $a0, $v0, . + 4 + (0xCD << 2)
label_48b848:
    if (ctx->pc == 0x48B848u) {
        ctx->pc = 0x48B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B844u;
        // 0x48b848: 0x8f828a00  lw          $v0, -0x7600($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B84Cu;
        goto label_48b84c;
    }
    ctx->pc = 0x48B844u;
    {
        const bool branch_taken_0x48b844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x48B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B844u;
        // 0x48b848: 0x8f828a00  lw          $v0, -0x7600($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b844) {
            ctx->pc = 0x48BB7Cu;
            goto label_48bb7c;
        }
    }
    ctx->pc = 0x48B84Cu;
label_48b84c:
    // 0x48b84c: 0x1000013a  b           . + 4 + (0x13A << 2)
label_48b850:
    if (ctx->pc == 0x48B850u) {
        ctx->pc = 0x48B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B84Cu;
        // 0x48b850: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B854u;
        goto label_48b854;
    }
    ctx->pc = 0x48B84Cu;
    {
        const bool branch_taken_0x48b84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B84Cu;
        // 0x48b850: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b84c) {
            ctx->pc = 0x48BD38u;
            goto label_48bd38;
        }
    }
    ctx->pc = 0x48B854u;
label_48b854:
    // 0x48b854: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x48b854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_48b858:
    // 0x48b858: 0x10820135  beq         $a0, $v0, . + 4 + (0x135 << 2)
label_48b85c:
    if (ctx->pc == 0x48B85Cu) {
        ctx->pc = 0x48B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B858u;
        // 0x48b85c: 0x2c820043  sltiu       $v0, $a0, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B860u;
        goto label_48b860;
    }
    ctx->pc = 0x48B858u;
    {
        const bool branch_taken_0x48b858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x48B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B858u;
        // 0x48b85c: 0x2c820043  sltiu       $v0, $a0, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b858) {
            ctx->pc = 0x48BD30u;
            goto label_48bd30;
        }
    }
    ctx->pc = 0x48B860u;
label_48b860:
    // 0x48b860: 0x144000ba  bnez        $v0, . + 4 + (0xBA << 2)
label_48b864:
    if (ctx->pc == 0x48B864u) {
        ctx->pc = 0x48B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B860u;
        // 0x48b864: 0x701024  and         $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B868u;
        goto label_48b868;
    }
    ctx->pc = 0x48B860u;
    {
        const bool branch_taken_0x48b860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B860u;
        // 0x48b864: 0x701024  and         $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b860) {
            ctx->pc = 0x48BB4Cu;
            goto label_48bb4c;
        }
    }
    ctx->pc = 0x48B868u;
label_48b868:
    // 0x48b868: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x48b868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_48b86c:
    // 0x48b86c: 0x1082012a  beq         $a0, $v0, . + 4 + (0x12A << 2)
label_48b870:
    if (ctx->pc == 0x48B870u) {
        ctx->pc = 0x48B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B86Cu;
        // 0x48b870: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B874u;
        goto label_48b874;
    }
    ctx->pc = 0x48B86Cu;
    {
        const bool branch_taken_0x48b86c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x48B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B86Cu;
        // 0x48b870: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b86c) {
            ctx->pc = 0x48BD18u;
            goto label_48bd18;
        }
    }
    ctx->pc = 0x48B874u;
label_48b874:
    // 0x48b874: 0x108200b3  beq         $a0, $v0, . + 4 + (0xB3 << 2)
label_48b878:
    if (ctx->pc == 0x48B878u) {
        ctx->pc = 0x48B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B874u;
        // 0x48b878: 0x8f828a00  lw          $v0, -0x7600($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B87Cu;
        goto label_48b87c;
    }
    ctx->pc = 0x48B874u;
    {
        const bool branch_taken_0x48b874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x48B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B874u;
        // 0x48b878: 0x8f828a00  lw          $v0, -0x7600($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b874) {
            ctx->pc = 0x48BB44u;
            goto label_48bb44;
        }
    }
    ctx->pc = 0x48B87Cu;
label_48b87c:
    // 0x48b87c: 0x1000012e  b           . + 4 + (0x12E << 2)
label_48b880:
    if (ctx->pc == 0x48B880u) {
        ctx->pc = 0x48B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B87Cu;
        // 0x48b880: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B884u;
        goto label_48b884;
    }
    ctx->pc = 0x48B87Cu;
    {
        const bool branch_taken_0x48b87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B87Cu;
        // 0x48b880: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b87c) {
            ctx->pc = 0x48BD38u;
            goto label_48bd38;
        }
    }
    ctx->pc = 0x48B884u;
label_48b884:
    // 0x48b884: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x48b884u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
label_48b888:
    // 0x48b888: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x48b888u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
label_48b88c:
    // 0x48b88c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x48b88cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
label_48b890:
    // 0x48b890: 0x3c081f00  lui         $t0, 0x1F00
    ctx->pc = 0x48b890u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)7936 << 16));
label_48b894:
    // 0x48b894: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x48b894u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_48b898:
    // 0x48b898: 0x356b9000  ori         $t3, $t3, 0x9000
    ctx->pc = 0x48b898u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)36864);
label_48b89c:
    // 0x48b89c: 0x354aa000  ori         $t2, $t2, 0xA000
    ctx->pc = 0x48b89cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)40960);
label_48b8a0:
    // 0x48b8a0: 0x35293c00  ori         $t1, $t1, 0x3C00
    ctx->pc = 0x48b8a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)15360);
label_48b8a4:
    // 0x48b8a4: 0x35080003  ori         $t0, $t0, 0x3
    ctx->pc = 0x48b8a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3);
label_48b8a8:
    // 0x48b8a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_48b8ac:
    if (ctx->pc == 0x48B8ACu) {
        ctx->pc = 0x48B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B8A8u;
        // 0x48b8ac: 0x34e73020  ori         $a3, $a3, 0x3020 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12320);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B8B0u;
        goto label_48b8b0;
    }
    ctx->pc = 0x48B8A8u;
    {
        const bool branch_taken_0x48b8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B8A8u;
        // 0x48b8ac: 0x34e73020  ori         $a3, $a3, 0x3020 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12320);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b8a8) {
            ctx->pc = 0x48B8B8u;
            goto label_48b8b8;
        }
    }
    ctx->pc = 0x48B8B0u;
label_48b8b0:
    // 0x48b8b0: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_48b8b4:
    if (ctx->pc == 0x48B8B4u) {
        ctx->pc = 0x48B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B8B0u;
        // 0x48b8b4: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B8B8u;
        goto label_48b8b8;
    }
    ctx->pc = 0x48B8B0u;
    {
        const bool branch_taken_0x48b8b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B8B0u;
        // 0x48b8b4: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b8b0) {
            ctx->pc = 0x48B908u;
            goto label_48b908;
        }
    }
    ctx->pc = 0x48B8B8u;
label_48b8b8:
    // 0x48b8b8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x48b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_48b8bc:
    // 0x48b8bc: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x48b8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_48b8c0:
    // 0x48b8c0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x48b8c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_48b8c4:
    // 0x48b8c4: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x48b8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_48b8c8:
    // 0x48b8c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x48b8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_48b8cc:
    // 0x48b8cc: 0x30a50100  andi        $a1, $a1, 0x100
    ctx->pc = 0x48b8ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_48b8d0:
    // 0x48b8d0: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x48b8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_48b8d4:
    // 0x48b8d4: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x48b8d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
label_48b8d8:
    // 0x48b8d8: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x48b8d8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_48b8dc:
    // 0x48b8dc: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x48b8dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_48b8e0:
    // 0x48b8e0: 0x46200a  movz        $a0, $v0, $a2
    ctx->pc = 0x48b8e0u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_48b8e4:
    // 0x48b8e4: 0x4843e800  cfc2.ni     $v1, $vi29
    ctx->pc = 0x48b8e4u;
    SET_GPR_U32(ctx, 3, ctx->vu0_vpu_stat);
label_48b8e8:
    // 0x48b8e8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x48b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_48b8ec:
    // 0x48b8ec: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x48b8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_48b8f0:
    // 0x48b8f0: 0x34850008  ori         $a1, $a0, 0x8
    ctx->pc = 0x48b8f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_48b8f4:
    // 0x48b8f4: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x48b8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_48b8f8:
    // 0x48b8f8: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_48b8fc:
    if (ctx->pc == 0x48B8FCu) {
        ctx->pc = 0x48B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B8F8u;
        // 0x48b8fc: 0x83280a  movz        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B900u;
        goto label_48b900;
    }
    ctx->pc = 0x48B8F8u;
    {
        const bool branch_taken_0x48b8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B8F8u;
        // 0x48b8fc: 0x83280a  movz        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b8f8) {
            ctx->pc = 0x48B8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48b8b0;
        }
    }
    ctx->pc = 0x48B900u;
label_48b900:
    // 0x48b900: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_48b904:
    if (ctx->pc == 0x48B904u) {
        ctx->pc = 0x48B908u;
        goto label_48b908;
    }
    ctx->pc = 0x48B900u;
    {
        const bool branch_taken_0x48b900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b900) {
            ctx->pc = 0x48B8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48b8b8;
        }
    }
    ctx->pc = 0x48B908u;
label_48b908:
    // 0x48b908: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48b908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_48b90c:
    // 0x48b90c: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x48b90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_48b910:
    // 0x48b910: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x48b910u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_48b914:
    // 0x48b914: 0xf  sync
    ctx->pc = 0x48b914u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48b918:
    // 0x48b918: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48b918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_48b91c:
    // 0x48b91c: 0x34423020  ori         $v0, $v0, 0x3020
    ctx->pc = 0x48b91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
label_48b920:
    // 0x48b920: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48b920u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
label_48b924:
    // 0x48b924: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x48b924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_48b928:
    // 0x48b928: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_48b92c:
    if (ctx->pc == 0x48B92Cu) {
        ctx->pc = 0x48B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B928u;
        // 0x48b92c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B930u;
        goto label_48b930;
    }
    ctx->pc = 0x48B928u;
    {
        const bool branch_taken_0x48b928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B928u;
        // 0x48b92c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b928) {
            ctx->pc = 0x48B954u;
            goto label_48b954;
        }
    }
    ctx->pc = 0x48B930u;
label_48b930:
    // 0x48b930: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x48b930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_48b934:
    // 0x48b934: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x48b934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
label_48b938:
    // 0x48b938: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x48b938u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
label_48b93c:
    // 0x48b93c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x48b93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_48b940:
    // 0x48b940: 0x0  nop
    ctx->pc = 0x48b940u;
    // NOP
label_48b944:
    // 0x48b944: 0x0  nop
    ctx->pc = 0x48b944u;
    // NOP
label_48b948:
    // 0x48b948: 0x0  nop
    ctx->pc = 0x48b948u;
    // NOP
label_48b94c:
    // 0x48b94c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_48b950:
    if (ctx->pc == 0x48B950u) {
        ctx->pc = 0x48B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B94Cu;
        // 0x48b950: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B954u;
        goto label_48b954;
    }
    ctx->pc = 0x48B94Cu;
    {
        const bool branch_taken_0x48b94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B94Cu;
        // 0x48b950: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b94c) {
            ctx->pc = 0x48B938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48b938;
        }
    }
    ctx->pc = 0x48B954u;
label_48b954:
    // 0x48b954: 0x24040104  addiu       $a0, $zero, 0x104
    ctx->pc = 0x48b954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_48b958:
    // 0x48b958: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x48b958u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_48b95c:
    // 0x48b95c: 0x8f838a00  lw          $v1, -0x7600($gp)
    ctx->pc = 0x48b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
label_48b960:
    // 0x48b960: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x48b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_48b964:
    // 0x48b964: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x48b964u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_48b968:
    // 0x48b968: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x48b968u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_48b96c:
    // 0x48b96c: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x48b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_48b970:
    // 0x48b970: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x48b970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_48b974:
    // 0x48b974: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x48b974u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_48b978:
    // 0x48b978: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x48b978u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_48b97c:
    // 0x48b97c: 0xf  sync
    ctx->pc = 0x48b97cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48b980:
    // 0x48b980: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x48b980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_48b984:
    // 0x48b984: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x48b984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
label_48b988:
    // 0x48b988: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x48b988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
label_48b98c:
    // 0x48b98c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x48b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
label_48b990:
    // 0x48b990: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x48b990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_48b994:
    // 0x48b994: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_48b998:
    if (ctx->pc == 0x48B998u) {
        ctx->pc = 0x48B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B994u;
        // 0x48b998: 0x24020145  addiu       $v0, $zero, 0x145 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B99Cu;
        goto label_48b99c;
    }
    ctx->pc = 0x48B994u;
    {
        const bool branch_taken_0x48b994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B994u;
        // 0x48b998: 0x24020145  addiu       $v0, $zero, 0x145 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b994) {
            ctx->pc = 0x48B9C4u;
            goto label_48b9c4;
        }
    }
    ctx->pc = 0x48B99Cu;
label_48b99c:
    // 0x48b99c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x48b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_48b9a0:
    // 0x48b9a0: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x48b9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
label_48b9a4:
    // 0x48b9a4: 0x0  nop
    ctx->pc = 0x48b9a4u;
    // NOP
label_48b9a8:
    // 0x48b9a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x48b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
label_48b9ac:
    // 0x48b9ac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x48b9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_48b9b0:
    // 0x48b9b0: 0x0  nop
    ctx->pc = 0x48b9b0u;
    // NOP
label_48b9b4:
    // 0x48b9b4: 0x0  nop
    ctx->pc = 0x48b9b4u;
    // NOP
label_48b9b8:
    // 0x48b9b8: 0x0  nop
    ctx->pc = 0x48b9b8u;
    // NOP
label_48b9bc:
    // 0x48b9bc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_48b9c0:
    if (ctx->pc == 0x48B9C0u) {
        ctx->pc = 0x48B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B9BCu;
        // 0x48b9c0: 0x24020145  addiu       $v0, $zero, 0x145 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B9C4u;
        goto label_48b9c4;
    }
    ctx->pc = 0x48B9BCu;
    {
        const bool branch_taken_0x48b9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B9BCu;
        // 0x48b9c0: 0x24020145  addiu       $v0, $zero, 0x145 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b9bc) {
            ctx->pc = 0x48B9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48b9a8;
        }
    }
    ctx->pc = 0x48B9C4u;
label_48b9c4:
    // 0x48b9c4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x48b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_48b9c8:
    // 0x48b9c8: 0x8f838a00  lw          $v1, -0x7600($gp)
    ctx->pc = 0x48b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
label_48b9cc:
    // 0x48b9cc: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48b9ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
label_48b9d0:
    // 0x48b9d0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x48b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_48b9d4:
    // 0x48b9d4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x48b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_48b9d8:
    // 0x48b9d8: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_48b9dc:
    if (ctx->pc == 0x48B9DCu) {
        ctx->pc = 0x48B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B9D8u;
        // 0x48b9dc: 0xaf838a00  sw          $v1, -0x7600($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937088), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B9E0u;
        goto label_48b9e0;
    }
    ctx->pc = 0x48B9D8u;
    {
        const bool branch_taken_0x48b9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B9D8u;
        // 0x48b9dc: 0xaf838a00  sw          $v1, -0x7600($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937088), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b9d8) {
            ctx->pc = 0x48BD2Cu;
            goto label_48bd2c;
        }
    }
    ctx->pc = 0x48B9E0u;
label_48b9e0:
    // 0x48b9e0: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x48b9e0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
label_48b9e4:
    // 0x48b9e4: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x48b9e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
label_48b9e8:
    // 0x48b9e8: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x48b9e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
label_48b9ec:
    // 0x48b9ec: 0x3c081f00  lui         $t0, 0x1F00
    ctx->pc = 0x48b9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)7936 << 16));
label_48b9f0:
    // 0x48b9f0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x48b9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_48b9f4:
    // 0x48b9f4: 0x356b9000  ori         $t3, $t3, 0x9000
    ctx->pc = 0x48b9f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)36864);
label_48b9f8:
    // 0x48b9f8: 0x354aa000  ori         $t2, $t2, 0xA000
    ctx->pc = 0x48b9f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)40960);
label_48b9fc:
    // 0x48b9fc: 0x35293c00  ori         $t1, $t1, 0x3C00
    ctx->pc = 0x48b9fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)15360);
label_48ba00:
    // 0x48ba00: 0x35080003  ori         $t0, $t0, 0x3
    ctx->pc = 0x48ba00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3);
label_48ba04:
    // 0x48ba04: 0x10000004  b           . + 4 + (0x4 << 2)
label_48ba08:
    if (ctx->pc == 0x48BA08u) {
        ctx->pc = 0x48BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BA04u;
        // 0x48ba08: 0x34e73020  ori         $a3, $a3, 0x3020 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12320);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BA0Cu;
        goto label_48ba0c;
    }
    ctx->pc = 0x48BA04u;
    {
        const bool branch_taken_0x48ba04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BA04u;
        // 0x48ba08: 0x34e73020  ori         $a3, $a3, 0x3020 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12320);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ba04) {
            ctx->pc = 0x48BA18u;
            goto label_48ba18;
        }
    }
    ctx->pc = 0x48BA0Cu;
label_48ba0c:
    // 0x48ba0c: 0x0  nop
    ctx->pc = 0x48ba0cu;
    // NOP
label_48ba10:
    // 0x48ba10: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_48ba14:
    if (ctx->pc == 0x48BA14u) {
        ctx->pc = 0x48BA18u;
        goto label_48ba18;
    }
    ctx->pc = 0x48BA10u;
    {
        const bool branch_taken_0x48ba10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ba10) {
            ctx->pc = 0x48BA68u;
            goto label_48ba68;
        }
    }
    ctx->pc = 0x48BA18u;
label_48ba18:
    // 0x48ba18: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x48ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_48ba1c:
    // 0x48ba1c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x48ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_48ba20:
    // 0x48ba20: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x48ba20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_48ba24:
    // 0x48ba24: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x48ba24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_48ba28:
    // 0x48ba28: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x48ba28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_48ba2c:
    // 0x48ba2c: 0x30a50100  andi        $a1, $a1, 0x100
    ctx->pc = 0x48ba2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_48ba30:
    // 0x48ba30: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x48ba30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_48ba34:
    // 0x48ba34: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x48ba34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
label_48ba38:
    // 0x48ba38: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x48ba38u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_48ba3c:
    // 0x48ba3c: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x48ba3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_48ba40:
    // 0x48ba40: 0x46200a  movz        $a0, $v0, $a2
    ctx->pc = 0x48ba40u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_48ba44:
    // 0x48ba44: 0x4843e800  cfc2.ni     $v1, $vi29
    ctx->pc = 0x48ba44u;
    SET_GPR_U32(ctx, 3, ctx->vu0_vpu_stat);
label_48ba48:
    // 0x48ba48: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x48ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_48ba4c:
    // 0x48ba4c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x48ba4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_48ba50:
    // 0x48ba50: 0x34850008  ori         $a1, $a0, 0x8
    ctx->pc = 0x48ba50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_48ba54:
    // 0x48ba54: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x48ba54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_48ba58:
    // 0x48ba58: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_48ba5c:
    if (ctx->pc == 0x48BA5Cu) {
        ctx->pc = 0x48BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BA58u;
        // 0x48ba5c: 0x83280a  movz        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BA60u;
        goto label_48ba60;
    }
    ctx->pc = 0x48BA58u;
    {
        const bool branch_taken_0x48ba58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BA58u;
        // 0x48ba5c: 0x83280a  movz        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ba58) {
            ctx->pc = 0x48BA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48ba10;
        }
    }
    ctx->pc = 0x48BA60u;
label_48ba60:
    // 0x48ba60: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_48ba64:
    if (ctx->pc == 0x48BA64u) {
        ctx->pc = 0x48BA68u;
        goto label_48ba68;
    }
    ctx->pc = 0x48BA60u;
    {
        const bool branch_taken_0x48ba60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ba60) {
            ctx->pc = 0x48BA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48ba18;
        }
    }
    ctx->pc = 0x48BA68u;
label_48ba68:
    // 0x48ba68: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x48ba68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_48ba6c:
    // 0x48ba6c: 0x8f868a00  lw          $a2, -0x7600($gp)
    ctx->pc = 0x48ba6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
label_48ba70:
    // 0x48ba70: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x48ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_48ba74:
    // 0x48ba74: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x48ba74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
label_48ba78:
    // 0x48ba78: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_48ba7c:
    if (ctx->pc == 0x48BA7Cu) {
        ctx->pc = 0x48BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BA78u;
        // 0x48ba7c: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BA80u;
        goto label_48ba80;
    }
    ctx->pc = 0x48BA78u;
    {
        const bool branch_taken_0x48ba78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ba78) {
            ctx->pc = 0x48BA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48BA78u;
            // 0x48ba7c: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48BAA8u;
            goto label_48baa8;
        }
    }
    ctx->pc = 0x48BA80u;
label_48ba80:
    // 0x48ba80: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x48ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_48ba84:
    // 0x48ba84: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x48ba84u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_48ba88:
    // 0x48ba88: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x48ba88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_48ba8c:
    // 0x48ba8c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x48ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_48ba90:
    // 0x48ba90: 0x30421300  andi        $v0, $v0, 0x1300
    ctx->pc = 0x48ba90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4864);
label_48ba94:
    // 0x48ba94: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x48ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_48ba98:
    // 0x48ba98: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x48ba98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_48ba9c:
    // 0x48ba9c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x48ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_48baa0:
    // 0x48baa0: 0x1000000a  b           . + 4 + (0xA << 2)
label_48baa4:
    if (ctx->pc == 0x48BAA4u) {
        ctx->pc = 0x48BAA8u;
        goto label_48baa8;
    }
    ctx->pc = 0x48BAA0u;
    {
        const bool branch_taken_0x48baa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48baa0) {
            ctx->pc = 0x48BACCu;
            goto label_48bacc;
        }
    }
    ctx->pc = 0x48BAA8u;
label_48baa8:
    // 0x48baa8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x48baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_48baac:
    // 0x48baac: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x48baacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
label_48bab0:
    // 0x48bab0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x48bab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_48bab4:
    // 0x48bab4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x48bab4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
label_48bab8:
    // 0x48bab8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x48bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_48babc:
    // 0x48babc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x48babcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_48bac0:
    // 0x48bac0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x48bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_48bac4:
    // 0x48bac4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x48bac4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_48bac8:
    // 0x48bac8: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x48bac8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
label_48bacc:
    // 0x48bacc: 0xf  sync
    ctx->pc = 0x48baccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48bad0:
    // 0x48bad0: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48bad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
label_48bad4:
    // 0x48bad4: 0x10000095  b           . + 4 + (0x95 << 2)
label_48bad8:
    if (ctx->pc == 0x48BAD8u) {
        ctx->pc = 0x48BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BAD4u;
        // 0x48bad8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BADCu;
        goto label_48badc;
    }
    ctx->pc = 0x48BAD4u;
    {
        const bool branch_taken_0x48bad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BAD4u;
        // 0x48bad8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bad4) {
            ctx->pc = 0x48BD2Cu;
            goto label_48bd2c;
        }
    }
    ctx->pc = 0x48BADCu;
label_48badc:
    // 0x48badc: 0x30620300  andi        $v0, $v1, 0x300
    ctx->pc = 0x48badcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)768);
label_48bae0:
    // 0x48bae0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_48bae4:
    if (ctx->pc == 0x48BAE4u) {
        ctx->pc = 0x48BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BAE0u;
        // 0x48bae4: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BAE8u;
        goto label_48bae8;
    }
    ctx->pc = 0x48BAE0u;
    {
        const bool branch_taken_0x48bae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48bae0) {
            ctx->pc = 0x48BAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48BAE0u;
            // 0x48bae4: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48BB10u;
            goto label_48bb10;
        }
    }
    ctx->pc = 0x48BAE8u;
label_48bae8:
    // 0x48bae8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x48bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_48baec:
    // 0x48baec: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x48baecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_48baf0:
    // 0x48baf0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x48baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_48baf4:
    // 0x48baf4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x48baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_48baf8:
    // 0x48baf8: 0x30421300  andi        $v0, $v0, 0x1300
    ctx->pc = 0x48baf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4864);
label_48bafc:
    // 0x48bafc: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x48bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_48bb00:
    // 0x48bb00: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x48bb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_48bb04:
    // 0x48bb04: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x48bb04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_48bb08:
    // 0x48bb08: 0x1000000a  b           . + 4 + (0xA << 2)
label_48bb0c:
    if (ctx->pc == 0x48BB0Cu) {
        ctx->pc = 0x48BB10u;
        goto label_48bb10;
    }
    ctx->pc = 0x48BB08u;
    {
        const bool branch_taken_0x48bb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48bb08) {
            ctx->pc = 0x48BB34u;
            goto label_48bb34;
        }
    }
    ctx->pc = 0x48BB10u;
label_48bb10:
    // 0x48bb10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x48bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_48bb14:
    // 0x48bb14: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x48bb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
label_48bb18:
    // 0x48bb18: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x48bb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_48bb1c:
    // 0x48bb1c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x48bb1cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
label_48bb20:
    // 0x48bb20: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x48bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_48bb24:
    // 0x48bb24: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x48bb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_48bb28:
    // 0x48bb28: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x48bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_48bb2c:
    // 0x48bb2c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x48bb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_48bb30:
    // 0x48bb30: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x48bb30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_48bb34:
    // 0x48bb34: 0xf  sync
    ctx->pc = 0x48bb34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48bb38:
    // 0x48bb38: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48bb38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
label_48bb3c:
    // 0x48bb3c: 0x1000007b  b           . + 4 + (0x7B << 2)
label_48bb40:
    if (ctx->pc == 0x48BB40u) {
        ctx->pc = 0x48BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BB3Cu;
        // 0x48bb40: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BB44u;
        goto label_48bb44;
    }
    ctx->pc = 0x48BB3Cu;
    {
        const bool branch_taken_0x48bb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BB3Cu;
        // 0x48bb40: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bb3c) {
            ctx->pc = 0x48BD2Cu;
            goto label_48bd2c;
        }
    }
    ctx->pc = 0x48BB44u;
label_48bb44:
    // 0x48bb44: 0x1000007c  b           . + 4 + (0x7C << 2)
label_48bb48:
    if (ctx->pc == 0x48BB48u) {
        ctx->pc = 0x48BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BB44u;
        // 0x48bb48: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BB4Cu;
        goto label_48bb4c;
    }
    ctx->pc = 0x48BB44u;
    {
        const bool branch_taken_0x48bb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BB44u;
        // 0x48bb48: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bb44) {
            ctx->pc = 0x48BD38u;
            goto label_48bd38;
        }
    }
    ctx->pc = 0x48BB4Cu;
label_48bb4c:
    // 0x48bb4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_48bb50:
    if (ctx->pc == 0x48BB50u) {
        ctx->pc = 0x48BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BB4Cu;
        // 0x48bb50: 0x21b02  srl         $v1, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BB54u;
        goto label_48bb54;
    }
    ctx->pc = 0x48BB4Cu;
    {
        const bool branch_taken_0x48bb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BB4Cu;
        // 0x48bb50: 0x21b02  srl         $v1, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bb4c) {
            ctx->pc = 0x48BB68u;
            goto label_48bb68;
        }
    }
    ctx->pc = 0x48BB54u;
label_48bb54:
    // 0x48bb54: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x48bb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_48bb58:
    // 0x48bb58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x48bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48bb5c:
    // 0x48bb5c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x48bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48bb60:
    // 0x48bb60: 0x10000073  b           . + 4 + (0x73 << 2)
label_48bb64:
    if (ctx->pc == 0x48BB64u) {
        ctx->pc = 0x48BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BB60u;
        // 0x48bb64: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BB68u;
        goto label_48bb68;
    }
    ctx->pc = 0x48BB60u;
    {
        const bool branch_taken_0x48bb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BB60u;
        // 0x48bb64: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bb60) {
            ctx->pc = 0x48BD30u;
            goto label_48bd30;
        }
    }
    ctx->pc = 0x48BB68u;
label_48bb68:
    // 0x48bb68: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x48bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_48bb6c:
    // 0x48bb6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x48bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48bb70:
    // 0x48bb70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x48bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_48bb74:
    // 0x48bb74: 0x1000006e  b           . + 4 + (0x6E << 2)
label_48bb78:
    if (ctx->pc == 0x48BB78u) {
        ctx->pc = 0x48BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BB74u;
        // 0x48bb78: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BB7Cu;
        goto label_48bb7c;
    }
    ctx->pc = 0x48BB74u;
    {
        const bool branch_taken_0x48bb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BB74u;
        // 0x48bb78: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bb74) {
            ctx->pc = 0x48BD30u;
            goto label_48bd30;
        }
    }
    ctx->pc = 0x48BB7Cu;
label_48bb7c:
    // 0x48bb7c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x48bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_48bb80:
    // 0x48bb80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48bb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48bb84:
    // 0x48bb84: 0xa384899b  sb          $a0, -0x7665($gp)
    ctx->pc = 0x48bb84u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936987), (uint8_t)GPR_U32(ctx, 4));
label_48bb88:
    // 0x48bb88: 0x40064800  mfc0        $a2, Count
    ctx->pc = 0x48bb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_count);
label_48bb8c:
    // 0x48bb8c: 0x8f858988  lw          $a1, -0x7678($gp)
    ctx->pc = 0x48bb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936968)));
label_48bb90:
    // 0x48bb90: 0x9383899a  lbu         $v1, -0x7666($gp)
    ctx->pc = 0x48bb90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936986)));
label_48bb94:
    // 0x48bb94: 0xaf8289fc  sw          $v0, -0x7604($gp)
    ctx->pc = 0x48bb94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937084), GPR_U32(ctx, 2));
label_48bb98:
    // 0x48bb98: 0xc5202b  sltu        $a0, $a2, $a1
    ctx->pc = 0x48bb98u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_48bb9c:
    // 0x48bb9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x48bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_48bba0:
    // 0x48bba0: 0xa380899c  sb          $zero, -0x7664($gp)
    ctx->pc = 0x48bba0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936988), (uint8_t)GPR_U32(ctx, 0));
label_48bba4:
    // 0x48bba4: 0xa383899a  sb          $v1, -0x7666($gp)
    ctx->pc = 0x48bba4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936986), (uint8_t)GPR_U32(ctx, 3));
label_48bba8:
    // 0x48bba8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_48bbac:
    if (ctx->pc == 0x48BBACu) {
        ctx->pc = 0x48BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BBA8u;
        // 0x48bbac: 0xdf8786a0  ld          $a3, -0x7960($gp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294936224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BBB0u;
        goto label_48bbb0;
    }
    ctx->pc = 0x48BBA8u;
    {
        const bool branch_taken_0x48bba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BBA8u;
        // 0x48bbac: 0xdf8786a0  ld          $a3, -0x7960($gp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294936224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bba8) {
            ctx->pc = 0x48BBC0u;
            goto label_48bbc0;
        }
    }
    ctx->pc = 0x48BBB0u;
label_48bbb0:
    // 0x48bbb0: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x48bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_48bbb4:
    // 0x48bbb4: 0xdf838980  ld          $v1, -0x7680($gp)
    ctx->pc = 0x48bbb4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936960)));
label_48bbb8:
    // 0x48bbb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_48bbbc:
    if (ctx->pc == 0x48BBBCu) {
        ctx->pc = 0x48BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BBB8u;
        // 0x48bbbc: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BBC0u;
        goto label_48bbc0;
    }
    ctx->pc = 0x48BBB8u;
    {
        const bool branch_taken_0x48bbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BBB8u;
        // 0x48bbbc: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bbb8) {
            ctx->pc = 0x48BBC8u;
            goto label_48bbc8;
        }
    }
    ctx->pc = 0x48BBC0u;
label_48bbc0:
    // 0x48bbc0: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x48bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_48bbc4:
    // 0x48bbc4: 0xdf838980  ld          $v1, -0x7680($gp)
    ctx->pc = 0x48bbc4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936960)));
label_48bbc8:
    // 0x48bbc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48bbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_48bbcc:
    // 0x48bbcc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x48bbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_48bbd0:
    // 0x48bbd0: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x48bbd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_48bbd4:
    // 0x48bbd4: 0xff838980  sd          $v1, -0x7680($gp)
    ctx->pc = 0x48bbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936960), GPR_U64(ctx, 3));
label_48bbd8:
    // 0x48bbd8: 0xdf848980  ld          $a0, -0x7680($gp)
    ctx->pc = 0x48bbd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936960)));
label_48bbdc:
    // 0x48bbdc: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x48bbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_48bbe0:
    // 0x48bbe0: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x48bbe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_48bbe4:
    // 0x48bbe4: 0xaf868988  sw          $a2, -0x7678($gp)
    ctx->pc = 0x48bbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936968), GPR_U32(ctx, 6));
label_48bbe8:
    // 0x48bbe8: 0xc10acae  jal         func_42B2B8
label_48bbec:
    if (ctx->pc == 0x48BBECu) {
        ctx->pc = 0x48BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BBE8u;
        // 0x48bbec: 0x87202f  dsubu       $a0, $a0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BBF0u;
        goto label_48bbf0;
    }
    ctx->pc = 0x48BBE8u;
    SET_GPR_U32(ctx, 31, 0x48BBF0u);
    ctx->pc = 0x48BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BBE8u;
    // 0x48bbec: 0x87202f  dsubu       $a0, $a0, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x48BBE8u, 0x48BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BBF0u;
label_48bbf0:
    // 0x48bbf0: 0x8f8386ac  lw          $v1, -0x7954($gp)
    ctx->pc = 0x48bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936236)));
label_48bbf4:
    // 0x48bbf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48bbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_48bbf8:
    // 0x48bbf8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48bbf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48bbfc:
    // 0x48bbfc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x48bbfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_48bc00:
    // 0x48bc00: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
label_48bc04:
    if (ctx->pc == 0x48BC04u) {
        ctx->pc = 0x48BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BC00u;
        // 0x48bc04: 0x8f828a00  lw          $v0, -0x7600($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BC08u;
        goto label_48bc08;
    }
    ctx->pc = 0x48BC00u;
    {
        const bool branch_taken_0x48bc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BC00u;
        // 0x48bc04: 0x8f828a00  lw          $v0, -0x7600($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bc00) {
            ctx->pc = 0x48BD34u;
            goto label_48bd34;
        }
    }
    ctx->pc = 0x48BC08u;
label_48bc08:
    // 0x48bc08: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x48bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_48bc0c:
    // 0x48bc0c: 0x42000039  di
    ctx->pc = 0x48bc0cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_48bc10:
    // 0x48bc10: 0x40f  sync.p
    ctx->pc = 0x48bc10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48bc14:
    // 0x48bc14: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x48bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
label_48bc18:
    // 0x48bc18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48bc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_48bc1c:
    // 0x48bc1c: 0x0  nop
    ctx->pc = 0x48bc1cu;
    // NOP
label_48bc20:
    // 0x48bc20: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_48bc24:
    if (ctx->pc == 0x48BC24u) {
        ctx->pc = 0x48BC28u;
        goto label_48bc28;
    }
    ctx->pc = 0x48BC20u;
    {
        const bool branch_taken_0x48bc20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48bc20) {
            ctx->pc = 0x48BC0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48bc0c;
        }
    }
    ctx->pc = 0x48BC28u;
label_48bc28:
    // 0x48bc28: 0xaf8086a8  sw          $zero, -0x7958($gp)
    ctx->pc = 0x48bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936232), GPR_U32(ctx, 0));
label_48bc2c:
    // 0x48bc2c: 0xc122f6c  jal         func_48BDB0
label_48bc30:
    if (ctx->pc == 0x48BC30u) {
        ctx->pc = 0x48BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BC2Cu;
        // 0x48bc30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BC34u;
        goto label_48bc34;
    }
    ctx->pc = 0x48BC2Cu;
    SET_GPR_U32(ctx, 31, 0x48BC34u);
    ctx->pc = 0x48BC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BC2Cu;
    // 0x48bc30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BDB0u, 0x48BC2Cu, 0x48BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BC34u;
label_48bc34:
    // 0x48bc34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48bc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48bc38:
    // 0x48bc38: 0xaf8486a8  sw          $a0, -0x7958($gp)
    ctx->pc = 0x48bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936232), GPR_U32(ctx, 4));
label_48bc3c:
    // 0x48bc3c: 0x42000038  ei
    ctx->pc = 0x48bc3cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_48bc40:
    // 0x48bc40: 0x1000003c  b           . + 4 + (0x3C << 2)
label_48bc44:
    if (ctx->pc == 0x48BC44u) {
        ctx->pc = 0x48BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BC40u;
        // 0x48bc44: 0x8f828a00  lw          $v0, -0x7600($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BC48u;
        goto label_48bc48;
    }
    ctx->pc = 0x48BC40u;
    {
        const bool branch_taken_0x48bc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BC40u;
        // 0x48bc44: 0x8f828a00  lw          $v0, -0x7600($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bc40) {
            ctx->pc = 0x48BD34u;
            goto label_48bd34;
        }
    }
    ctx->pc = 0x48BC48u;
label_48bc48:
    // 0x48bc48: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x48bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_48bc4c:
    // 0x48bc4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48bc50:
    // 0x48bc50: 0xa383899b  sb          $v1, -0x7665($gp)
    ctx->pc = 0x48bc50u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936987), (uint8_t)GPR_U32(ctx, 3));
label_48bc54:
    // 0x48bc54: 0x40064800  mfc0        $a2, Count
    ctx->pc = 0x48bc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_count);
label_48bc58:
    // 0x48bc58: 0x8f858988  lw          $a1, -0x7678($gp)
    ctx->pc = 0x48bc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936968)));
label_48bc5c:
    // 0x48bc5c: 0x9383899a  lbu         $v1, -0x7666($gp)
    ctx->pc = 0x48bc5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936986)));
label_48bc60:
    // 0x48bc60: 0xaf8289fc  sw          $v0, -0x7604($gp)
    ctx->pc = 0x48bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937084), GPR_U32(ctx, 2));
label_48bc64:
    // 0x48bc64: 0xc5202b  sltu        $a0, $a2, $a1
    ctx->pc = 0x48bc64u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_48bc68:
    // 0x48bc68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x48bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_48bc6c:
    // 0x48bc6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48bc70:
    // 0x48bc70: 0xa382899c  sb          $v0, -0x7664($gp)
    ctx->pc = 0x48bc70u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936988), (uint8_t)GPR_U32(ctx, 2));
label_48bc74:
    // 0x48bc74: 0xa383899a  sb          $v1, -0x7666($gp)
    ctx->pc = 0x48bc74u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936986), (uint8_t)GPR_U32(ctx, 3));
label_48bc78:
    // 0x48bc78: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_48bc7c:
    if (ctx->pc == 0x48BC7Cu) {
        ctx->pc = 0x48BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BC78u;
        // 0x48bc7c: 0xdf8786a0  ld          $a3, -0x7960($gp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294936224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BC80u;
        goto label_48bc80;
    }
    ctx->pc = 0x48BC78u;
    {
        const bool branch_taken_0x48bc78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BC78u;
        // 0x48bc7c: 0xdf8786a0  ld          $a3, -0x7960($gp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294936224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bc78) {
            ctx->pc = 0x48BC90u;
            goto label_48bc90;
        }
    }
    ctx->pc = 0x48BC80u;
label_48bc80:
    // 0x48bc80: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x48bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_48bc84:
    // 0x48bc84: 0xdf838980  ld          $v1, -0x7680($gp)
    ctx->pc = 0x48bc84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936960)));
label_48bc88:
    // 0x48bc88: 0x10000003  b           . + 4 + (0x3 << 2)
label_48bc8c:
    if (ctx->pc == 0x48BC8Cu) {
        ctx->pc = 0x48BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BC88u;
        // 0x48bc8c: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BC90u;
        goto label_48bc90;
    }
    ctx->pc = 0x48BC88u;
    {
        const bool branch_taken_0x48bc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BC88u;
        // 0x48bc8c: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bc88) {
            ctx->pc = 0x48BC98u;
            goto label_48bc98;
        }
    }
    ctx->pc = 0x48BC90u;
label_48bc90:
    // 0x48bc90: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x48bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_48bc94:
    // 0x48bc94: 0xdf838980  ld          $v1, -0x7680($gp)
    ctx->pc = 0x48bc94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936960)));
label_48bc98:
    // 0x48bc98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48bc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_48bc9c:
    // 0x48bc9c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x48bc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_48bca0:
    // 0x48bca0: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x48bca0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_48bca4:
    // 0x48bca4: 0xff838980  sd          $v1, -0x7680($gp)
    ctx->pc = 0x48bca4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936960), GPR_U64(ctx, 3));
label_48bca8:
    // 0x48bca8: 0xdf848980  ld          $a0, -0x7680($gp)
    ctx->pc = 0x48bca8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936960)));
label_48bcac:
    // 0x48bcac: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x48bcacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_48bcb0:
    // 0x48bcb0: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x48bcb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_48bcb4:
    // 0x48bcb4: 0xaf868988  sw          $a2, -0x7678($gp)
    ctx->pc = 0x48bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936968), GPR_U32(ctx, 6));
label_48bcb8:
    // 0x48bcb8: 0xc10acae  jal         func_42B2B8
label_48bcbc:
    if (ctx->pc == 0x48BCBCu) {
        ctx->pc = 0x48BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BCB8u;
        // 0x48bcbc: 0x87202f  dsubu       $a0, $a0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BCC0u;
        goto label_48bcc0;
    }
    ctx->pc = 0x48BCB8u;
    SET_GPR_U32(ctx, 31, 0x48BCC0u);
    ctx->pc = 0x48BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BCB8u;
    // 0x48bcbc: 0x87202f  dsubu       $a0, $a0, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x48BCB8u, 0x48BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BCC0u;
label_48bcc0:
    // 0x48bcc0: 0x8f8386ac  lw          $v1, -0x7954($gp)
    ctx->pc = 0x48bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936236)));
label_48bcc4:
    // 0x48bcc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48bcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_48bcc8:
    // 0x48bcc8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48bcc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48bccc:
    // 0x48bccc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x48bcccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_48bcd0:
    // 0x48bcd0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_48bcd4:
    if (ctx->pc == 0x48BCD4u) {
        ctx->pc = 0x48BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BCD0u;
        // 0x48bcd4: 0x8f828a00  lw          $v0, -0x7600($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BCD8u;
        goto label_48bcd8;
    }
    ctx->pc = 0x48BCD0u;
    {
        const bool branch_taken_0x48bcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BCD0u;
        // 0x48bcd4: 0x8f828a00  lw          $v0, -0x7600($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bcd0) {
            ctx->pc = 0x48BD34u;
            goto label_48bd34;
        }
    }
    ctx->pc = 0x48BCD8u;
label_48bcd8:
    // 0x48bcd8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x48bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_48bcdc:
    // 0x48bcdc: 0x42000039  di
    ctx->pc = 0x48bcdcu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_48bce0:
    // 0x48bce0: 0x40f  sync.p
    ctx->pc = 0x48bce0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48bce4:
    // 0x48bce4: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x48bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
label_48bce8:
    // 0x48bce8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48bce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_48bcec:
    // 0x48bcec: 0x0  nop
    ctx->pc = 0x48bcecu;
    // NOP
label_48bcf0:
    // 0x48bcf0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_48bcf4:
    if (ctx->pc == 0x48BCF4u) {
        ctx->pc = 0x48BCF8u;
        goto label_48bcf8;
    }
    ctx->pc = 0x48BCF0u;
    {
        const bool branch_taken_0x48bcf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48bcf0) {
            ctx->pc = 0x48BCDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48bcdc;
        }
    }
    ctx->pc = 0x48BCF8u;
label_48bcf8:
    // 0x48bcf8: 0xaf8086a8  sw          $zero, -0x7958($gp)
    ctx->pc = 0x48bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936232), GPR_U32(ctx, 0));
label_48bcfc:
    // 0x48bcfc: 0xc122f6c  jal         func_48BDB0
label_48bd00:
    if (ctx->pc == 0x48BD00u) {
        ctx->pc = 0x48BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BCFCu;
        // 0x48bd00: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BD04u;
        goto label_48bd04;
    }
    ctx->pc = 0x48BCFCu;
    SET_GPR_U32(ctx, 31, 0x48BD04u);
    ctx->pc = 0x48BD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BCFCu;
    // 0x48bd00: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BDB0u, 0x48BCFCu, 0x48BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BD04u;
label_48bd04:
    // 0x48bd04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48bd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48bd08:
    // 0x48bd08: 0xaf8486a8  sw          $a0, -0x7958($gp)
    ctx->pc = 0x48bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936232), GPR_U32(ctx, 4));
label_48bd0c:
    // 0x48bd0c: 0x42000038  ei
    ctx->pc = 0x48bd0cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_48bd10:
    // 0x48bd10: 0x10000008  b           . + 4 + (0x8 << 2)
label_48bd14:
    if (ctx->pc == 0x48BD14u) {
        ctx->pc = 0x48BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BD10u;
        // 0x48bd14: 0x8f828a00  lw          $v0, -0x7600($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BD18u;
        goto label_48bd18;
    }
    ctx->pc = 0x48BD10u;
    {
        const bool branch_taken_0x48bd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BD10u;
        // 0x48bd14: 0x8f828a00  lw          $v0, -0x7600($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bd10) {
            ctx->pc = 0x48BD34u;
            goto label_48bd34;
        }
    }
    ctx->pc = 0x48BD18u;
label_48bd18:
    // 0x48bd18: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x48bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_48bd1c:
    // 0x48bd1c: 0x1e2027  nor         $a0, $zero, $fp
    ctx->pc = 0x48bd1cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
label_48bd20:
    // 0x48bd20: 0x40f809  jalr        $v0
label_48bd24:
    if (ctx->pc == 0x48BD24u) {
        ctx->pc = 0x48BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BD20u;
        // 0x48bd24: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BD28u;
        goto label_48bd28;
    }
    ctx->pc = 0x48BD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48BD28u);
        ctx->pc = 0x48BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BD20u;
        // 0x48bd24: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BD20u, 0x48BD28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48BD28u;
label_48bd28:
    // 0x48bd28: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48bd28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48bd2c:
    // 0x48bd2c: 0xa38289f8  sb          $v0, -0x7608($gp)
    ctx->pc = 0x48bd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937080), (uint8_t)GPR_U32(ctx, 2));
label_48bd30:
    // 0x48bd30: 0x8f828a00  lw          $v0, -0x7600($gp)
    ctx->pc = 0x48bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
label_48bd34:
    // 0x48bd34: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x48bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_48bd38:
    // 0x48bd38: 0xaf828a00  sw          $v0, -0x7600($gp)
    ctx->pc = 0x48bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937088), GPR_U32(ctx, 2));
label_48bd3c:
    // 0x48bd3c: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48bd3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
label_48bd40:
    // 0x48bd40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_48bd44:
    if (ctx->pc == 0x48BD44u) {
        ctx->pc = 0x48BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BD40u;
        // 0x48bd44: 0x8f828a04  lw          $v0, -0x75FC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BD48u;
        goto label_48bd48;
    }
    ctx->pc = 0x48BD40u;
    {
        const bool branch_taken_0x48bd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BD40u;
        // 0x48bd44: 0x8f828a04  lw          $v0, -0x75FC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bd40) {
            ctx->pc = 0x48BD60u;
            goto label_48bd60;
        }
    }
    ctx->pc = 0x48BD48u;
label_48bd48:
    // 0x48bd48: 0x8f868a00  lw          $a2, -0x7600($gp)
    ctx->pc = 0x48bd48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
label_48bd4c:
    // 0x48bd4c: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
label_48bd50:
    if (ctx->pc == 0x48BD50u) {
        ctx->pc = 0x48BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BD4Cu;
        // 0x48bd50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BD54u;
        goto label_48bd54;
    }
    ctx->pc = 0x48BD4Cu;
    {
        const bool branch_taken_0x48bd4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x48BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BD4Cu;
        // 0x48bd50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bd4c) {
            ctx->pc = 0x48BD64u;
            goto label_48bd64;
        }
    }
    ctx->pc = 0x48BD54u;
label_48bd54:
    // 0x48bd54: 0x9382899b  lbu         $v0, -0x7665($gp)
    ctx->pc = 0x48bd54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936987)));
label_48bd58:
    // 0x48bd58: 0x5040fea9  beql        $v0, $zero, . + 4 + (-0x157 << 2)
label_48bd5c:
    if (ctx->pc == 0x48BD5Cu) {
        ctx->pc = 0x48BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BD58u;
        // 0x48bd5c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BD60u;
        goto label_48bd60;
    }
    ctx->pc = 0x48BD58u;
    {
        const bool branch_taken_0x48bd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48bd58) {
            ctx->pc = 0x48BD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48BD58u;
            // 0x48bd5c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48B800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48b800;
        }
    }
    ctx->pc = 0x48BD60u;
label_48bd60:
    // 0x48bd60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48bd64:
    // 0x48bd64: 0x13c20004  beq         $fp, $v0, . + 4 + (0x4 << 2)
label_48bd68:
    if (ctx->pc == 0x48BD68u) {
        ctx->pc = 0x48BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BD64u;
        // 0x48bd68: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BD6Cu;
        goto label_48bd6c;
    }
    ctx->pc = 0x48BD64u;
    {
        const bool branch_taken_0x48bd64 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x48BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BD64u;
        // 0x48bd68: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bd64) {
            ctx->pc = 0x48BD78u;
            goto label_48bd78;
        }
    }
    ctx->pc = 0x48BD6Cu;
label_48bd6c:
    // 0x48bd6c: 0x42e024  and         $gp, $v0, $v0
    ctx->pc = 0x48bd6cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 2) & GPR_U64(ctx, 2));
label_48bd70:
    // 0x48bd70: 0xf  sync
    ctx->pc = 0x48bd70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48bd74:
    // 0x48bd74: 0x42000038  ei
    ctx->pc = 0x48bd74u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_48bd78:
    // 0x48bd78: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x48bd78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_48bd7c:
    // 0x48bd7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48bd80:
    // 0x48bd80: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x48bd80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_48bd84:
    // 0x48bd84: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x48bd84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_48bd88:
    // 0x48bd88: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x48bd88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_48bd8c:
    // 0x48bd8c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x48bd8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_48bd90:
    // 0x48bd90: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x48bd90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_48bd94:
    // 0x48bd94: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x48bd94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48bd98:
    // 0x48bd98: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x48bd98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48bd9c:
    // 0x48bd9c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x48bd9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48bda0:
    // 0x48bda0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48bda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48bda4:
    // 0x48bda4: 0x3e00008  jr          $ra
label_48bda8:
    if (ctx->pc == 0x48BDA8u) {
        ctx->pc = 0x48BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BDA4u;
        // 0x48bda8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48BDACu;
        goto label_48bdac;
    }
    ctx->pc = 0x48BDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BDA4u;
        // 0x48bda8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48BDACu;
label_48bdac:
    // 0x48bdac: 0x0  nop
    ctx->pc = 0x48bdacu;
    // NOP
    ctx->pc = 0x48bdb0u;
}
