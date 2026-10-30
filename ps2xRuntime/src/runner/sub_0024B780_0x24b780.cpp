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

// Function: sub_0024B780
// Address: 0x24b780 - 0x24bf78
void sub_0024B780_0x24b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B780_0x24b780");
#endif

    switch (ctx->pc) {
        case 0x24b780u: goto label_24b780;
        case 0x24b784u: goto label_24b784;
        case 0x24b788u: goto label_24b788;
        case 0x24b78cu: goto label_24b78c;
        case 0x24b790u: goto label_24b790;
        case 0x24b794u: goto label_24b794;
        case 0x24b798u: goto label_24b798;
        case 0x24b79cu: goto label_24b79c;
        case 0x24b7a0u: goto label_24b7a0;
        case 0x24b7a4u: goto label_24b7a4;
        case 0x24b7a8u: goto label_24b7a8;
        case 0x24b7acu: goto label_24b7ac;
        case 0x24b7b0u: goto label_24b7b0;
        case 0x24b7b4u: goto label_24b7b4;
        case 0x24b7b8u: goto label_24b7b8;
        case 0x24b7bcu: goto label_24b7bc;
        case 0x24b7c0u: goto label_24b7c0;
        case 0x24b7c4u: goto label_24b7c4;
        case 0x24b7c8u: goto label_24b7c8;
        case 0x24b7ccu: goto label_24b7cc;
        case 0x24b7d0u: goto label_24b7d0;
        case 0x24b7d4u: goto label_24b7d4;
        case 0x24b7d8u: goto label_24b7d8;
        case 0x24b7dcu: goto label_24b7dc;
        case 0x24b7e0u: goto label_24b7e0;
        case 0x24b7e4u: goto label_24b7e4;
        case 0x24b7e8u: goto label_24b7e8;
        case 0x24b7ecu: goto label_24b7ec;
        case 0x24b7f0u: goto label_24b7f0;
        case 0x24b7f4u: goto label_24b7f4;
        case 0x24b7f8u: goto label_24b7f8;
        case 0x24b7fcu: goto label_24b7fc;
        case 0x24b800u: goto label_24b800;
        case 0x24b804u: goto label_24b804;
        case 0x24b808u: goto label_24b808;
        case 0x24b80cu: goto label_24b80c;
        case 0x24b810u: goto label_24b810;
        case 0x24b814u: goto label_24b814;
        case 0x24b818u: goto label_24b818;
        case 0x24b81cu: goto label_24b81c;
        case 0x24b820u: goto label_24b820;
        case 0x24b824u: goto label_24b824;
        case 0x24b828u: goto label_24b828;
        case 0x24b82cu: goto label_24b82c;
        case 0x24b830u: goto label_24b830;
        case 0x24b834u: goto label_24b834;
        case 0x24b838u: goto label_24b838;
        case 0x24b83cu: goto label_24b83c;
        case 0x24b840u: goto label_24b840;
        case 0x24b844u: goto label_24b844;
        case 0x24b848u: goto label_24b848;
        case 0x24b84cu: goto label_24b84c;
        case 0x24b850u: goto label_24b850;
        case 0x24b854u: goto label_24b854;
        case 0x24b858u: goto label_24b858;
        case 0x24b85cu: goto label_24b85c;
        case 0x24b860u: goto label_24b860;
        case 0x24b864u: goto label_24b864;
        case 0x24b868u: goto label_24b868;
        case 0x24b86cu: goto label_24b86c;
        case 0x24b870u: goto label_24b870;
        case 0x24b874u: goto label_24b874;
        case 0x24b878u: goto label_24b878;
        case 0x24b87cu: goto label_24b87c;
        case 0x24b880u: goto label_24b880;
        case 0x24b884u: goto label_24b884;
        case 0x24b888u: goto label_24b888;
        case 0x24b88cu: goto label_24b88c;
        case 0x24b890u: goto label_24b890;
        case 0x24b894u: goto label_24b894;
        case 0x24b898u: goto label_24b898;
        case 0x24b89cu: goto label_24b89c;
        case 0x24b8a0u: goto label_24b8a0;
        case 0x24b8a4u: goto label_24b8a4;
        case 0x24b8a8u: goto label_24b8a8;
        case 0x24b8acu: goto label_24b8ac;
        case 0x24b8b0u: goto label_24b8b0;
        case 0x24b8b4u: goto label_24b8b4;
        case 0x24b8b8u: goto label_24b8b8;
        case 0x24b8bcu: goto label_24b8bc;
        case 0x24b8c0u: goto label_24b8c0;
        case 0x24b8c4u: goto label_24b8c4;
        case 0x24b8c8u: goto label_24b8c8;
        case 0x24b8ccu: goto label_24b8cc;
        case 0x24b8d0u: goto label_24b8d0;
        case 0x24b8d4u: goto label_24b8d4;
        case 0x24b8d8u: goto label_24b8d8;
        case 0x24b8dcu: goto label_24b8dc;
        case 0x24b8e0u: goto label_24b8e0;
        case 0x24b8e4u: goto label_24b8e4;
        case 0x24b8e8u: goto label_24b8e8;
        case 0x24b8ecu: goto label_24b8ec;
        case 0x24b8f0u: goto label_24b8f0;
        case 0x24b8f4u: goto label_24b8f4;
        case 0x24b8f8u: goto label_24b8f8;
        case 0x24b8fcu: goto label_24b8fc;
        case 0x24b900u: goto label_24b900;
        case 0x24b904u: goto label_24b904;
        case 0x24b908u: goto label_24b908;
        case 0x24b90cu: goto label_24b90c;
        case 0x24b910u: goto label_24b910;
        case 0x24b914u: goto label_24b914;
        case 0x24b918u: goto label_24b918;
        case 0x24b91cu: goto label_24b91c;
        case 0x24b920u: goto label_24b920;
        case 0x24b924u: goto label_24b924;
        case 0x24b928u: goto label_24b928;
        case 0x24b92cu: goto label_24b92c;
        case 0x24b930u: goto label_24b930;
        case 0x24b934u: goto label_24b934;
        case 0x24b938u: goto label_24b938;
        case 0x24b93cu: goto label_24b93c;
        case 0x24b940u: goto label_24b940;
        case 0x24b944u: goto label_24b944;
        case 0x24b948u: goto label_24b948;
        case 0x24b94cu: goto label_24b94c;
        case 0x24b950u: goto label_24b950;
        case 0x24b954u: goto label_24b954;
        case 0x24b958u: goto label_24b958;
        case 0x24b95cu: goto label_24b95c;
        case 0x24b960u: goto label_24b960;
        case 0x24b964u: goto label_24b964;
        case 0x24b968u: goto label_24b968;
        case 0x24b96cu: goto label_24b96c;
        case 0x24b970u: goto label_24b970;
        case 0x24b974u: goto label_24b974;
        case 0x24b978u: goto label_24b978;
        case 0x24b97cu: goto label_24b97c;
        case 0x24b980u: goto label_24b980;
        case 0x24b984u: goto label_24b984;
        case 0x24b988u: goto label_24b988;
        case 0x24b98cu: goto label_24b98c;
        case 0x24b990u: goto label_24b990;
        case 0x24b994u: goto label_24b994;
        case 0x24b998u: goto label_24b998;
        case 0x24b99cu: goto label_24b99c;
        case 0x24b9a0u: goto label_24b9a0;
        case 0x24b9a4u: goto label_24b9a4;
        case 0x24b9a8u: goto label_24b9a8;
        case 0x24b9acu: goto label_24b9ac;
        case 0x24b9b0u: goto label_24b9b0;
        case 0x24b9b4u: goto label_24b9b4;
        case 0x24b9b8u: goto label_24b9b8;
        case 0x24b9bcu: goto label_24b9bc;
        case 0x24b9c0u: goto label_24b9c0;
        case 0x24b9c4u: goto label_24b9c4;
        case 0x24b9c8u: goto label_24b9c8;
        case 0x24b9ccu: goto label_24b9cc;
        case 0x24b9d0u: goto label_24b9d0;
        case 0x24b9d4u: goto label_24b9d4;
        case 0x24b9d8u: goto label_24b9d8;
        case 0x24b9dcu: goto label_24b9dc;
        case 0x24b9e0u: goto label_24b9e0;
        case 0x24b9e4u: goto label_24b9e4;
        case 0x24b9e8u: goto label_24b9e8;
        case 0x24b9ecu: goto label_24b9ec;
        case 0x24b9f0u: goto label_24b9f0;
        case 0x24b9f4u: goto label_24b9f4;
        case 0x24b9f8u: goto label_24b9f8;
        case 0x24b9fcu: goto label_24b9fc;
        case 0x24ba00u: goto label_24ba00;
        case 0x24ba04u: goto label_24ba04;
        case 0x24ba08u: goto label_24ba08;
        case 0x24ba0cu: goto label_24ba0c;
        case 0x24ba10u: goto label_24ba10;
        case 0x24ba14u: goto label_24ba14;
        case 0x24ba18u: goto label_24ba18;
        case 0x24ba1cu: goto label_24ba1c;
        case 0x24ba20u: goto label_24ba20;
        case 0x24ba24u: goto label_24ba24;
        case 0x24ba28u: goto label_24ba28;
        case 0x24ba2cu: goto label_24ba2c;
        case 0x24ba30u: goto label_24ba30;
        case 0x24ba34u: goto label_24ba34;
        case 0x24ba38u: goto label_24ba38;
        case 0x24ba3cu: goto label_24ba3c;
        case 0x24ba40u: goto label_24ba40;
        case 0x24ba44u: goto label_24ba44;
        case 0x24ba48u: goto label_24ba48;
        case 0x24ba4cu: goto label_24ba4c;
        case 0x24ba50u: goto label_24ba50;
        case 0x24ba54u: goto label_24ba54;
        case 0x24ba58u: goto label_24ba58;
        case 0x24ba5cu: goto label_24ba5c;
        case 0x24ba60u: goto label_24ba60;
        case 0x24ba64u: goto label_24ba64;
        case 0x24ba68u: goto label_24ba68;
        case 0x24ba6cu: goto label_24ba6c;
        case 0x24ba70u: goto label_24ba70;
        case 0x24ba74u: goto label_24ba74;
        case 0x24ba78u: goto label_24ba78;
        case 0x24ba7cu: goto label_24ba7c;
        case 0x24ba80u: goto label_24ba80;
        case 0x24ba84u: goto label_24ba84;
        case 0x24ba88u: goto label_24ba88;
        case 0x24ba8cu: goto label_24ba8c;
        case 0x24ba90u: goto label_24ba90;
        case 0x24ba94u: goto label_24ba94;
        case 0x24ba98u: goto label_24ba98;
        case 0x24ba9cu: goto label_24ba9c;
        case 0x24baa0u: goto label_24baa0;
        case 0x24baa4u: goto label_24baa4;
        case 0x24baa8u: goto label_24baa8;
        case 0x24baacu: goto label_24baac;
        case 0x24bab0u: goto label_24bab0;
        case 0x24bab4u: goto label_24bab4;
        case 0x24bab8u: goto label_24bab8;
        case 0x24babcu: goto label_24babc;
        case 0x24bac0u: goto label_24bac0;
        case 0x24bac4u: goto label_24bac4;
        case 0x24bac8u: goto label_24bac8;
        case 0x24baccu: goto label_24bacc;
        case 0x24bad0u: goto label_24bad0;
        case 0x24bad4u: goto label_24bad4;
        case 0x24bad8u: goto label_24bad8;
        case 0x24badcu: goto label_24badc;
        case 0x24bae0u: goto label_24bae0;
        case 0x24bae4u: goto label_24bae4;
        case 0x24bae8u: goto label_24bae8;
        case 0x24baecu: goto label_24baec;
        case 0x24baf0u: goto label_24baf0;
        case 0x24baf4u: goto label_24baf4;
        case 0x24baf8u: goto label_24baf8;
        case 0x24bafcu: goto label_24bafc;
        case 0x24bb00u: goto label_24bb00;
        case 0x24bb04u: goto label_24bb04;
        case 0x24bb08u: goto label_24bb08;
        case 0x24bb0cu: goto label_24bb0c;
        case 0x24bb10u: goto label_24bb10;
        case 0x24bb14u: goto label_24bb14;
        case 0x24bb18u: goto label_24bb18;
        case 0x24bb1cu: goto label_24bb1c;
        case 0x24bb20u: goto label_24bb20;
        case 0x24bb24u: goto label_24bb24;
        case 0x24bb28u: goto label_24bb28;
        case 0x24bb2cu: goto label_24bb2c;
        case 0x24bb30u: goto label_24bb30;
        case 0x24bb34u: goto label_24bb34;
        case 0x24bb38u: goto label_24bb38;
        case 0x24bb3cu: goto label_24bb3c;
        case 0x24bb40u: goto label_24bb40;
        case 0x24bb44u: goto label_24bb44;
        case 0x24bb48u: goto label_24bb48;
        case 0x24bb4cu: goto label_24bb4c;
        case 0x24bb50u: goto label_24bb50;
        case 0x24bb54u: goto label_24bb54;
        case 0x24bb58u: goto label_24bb58;
        case 0x24bb5cu: goto label_24bb5c;
        case 0x24bb60u: goto label_24bb60;
        case 0x24bb64u: goto label_24bb64;
        case 0x24bb68u: goto label_24bb68;
        case 0x24bb6cu: goto label_24bb6c;
        case 0x24bb70u: goto label_24bb70;
        case 0x24bb74u: goto label_24bb74;
        case 0x24bb78u: goto label_24bb78;
        case 0x24bb7cu: goto label_24bb7c;
        case 0x24bb80u: goto label_24bb80;
        case 0x24bb84u: goto label_24bb84;
        case 0x24bb88u: goto label_24bb88;
        case 0x24bb8cu: goto label_24bb8c;
        case 0x24bb90u: goto label_24bb90;
        case 0x24bb94u: goto label_24bb94;
        case 0x24bb98u: goto label_24bb98;
        case 0x24bb9cu: goto label_24bb9c;
        case 0x24bba0u: goto label_24bba0;
        case 0x24bba4u: goto label_24bba4;
        case 0x24bba8u: goto label_24bba8;
        case 0x24bbacu: goto label_24bbac;
        case 0x24bbb0u: goto label_24bbb0;
        case 0x24bbb4u: goto label_24bbb4;
        case 0x24bbb8u: goto label_24bbb8;
        case 0x24bbbcu: goto label_24bbbc;
        case 0x24bbc0u: goto label_24bbc0;
        case 0x24bbc4u: goto label_24bbc4;
        case 0x24bbc8u: goto label_24bbc8;
        case 0x24bbccu: goto label_24bbcc;
        case 0x24bbd0u: goto label_24bbd0;
        case 0x24bbd4u: goto label_24bbd4;
        case 0x24bbd8u: goto label_24bbd8;
        case 0x24bbdcu: goto label_24bbdc;
        case 0x24bbe0u: goto label_24bbe0;
        case 0x24bbe4u: goto label_24bbe4;
        case 0x24bbe8u: goto label_24bbe8;
        case 0x24bbecu: goto label_24bbec;
        case 0x24bbf0u: goto label_24bbf0;
        case 0x24bbf4u: goto label_24bbf4;
        case 0x24bbf8u: goto label_24bbf8;
        case 0x24bbfcu: goto label_24bbfc;
        case 0x24bc00u: goto label_24bc00;
        case 0x24bc04u: goto label_24bc04;
        case 0x24bc08u: goto label_24bc08;
        case 0x24bc0cu: goto label_24bc0c;
        case 0x24bc10u: goto label_24bc10;
        case 0x24bc14u: goto label_24bc14;
        case 0x24bc18u: goto label_24bc18;
        case 0x24bc1cu: goto label_24bc1c;
        case 0x24bc20u: goto label_24bc20;
        case 0x24bc24u: goto label_24bc24;
        case 0x24bc28u: goto label_24bc28;
        case 0x24bc2cu: goto label_24bc2c;
        case 0x24bc30u: goto label_24bc30;
        case 0x24bc34u: goto label_24bc34;
        case 0x24bc38u: goto label_24bc38;
        case 0x24bc3cu: goto label_24bc3c;
        case 0x24bc40u: goto label_24bc40;
        case 0x24bc44u: goto label_24bc44;
        case 0x24bc48u: goto label_24bc48;
        case 0x24bc4cu: goto label_24bc4c;
        case 0x24bc50u: goto label_24bc50;
        case 0x24bc54u: goto label_24bc54;
        case 0x24bc58u: goto label_24bc58;
        case 0x24bc5cu: goto label_24bc5c;
        case 0x24bc60u: goto label_24bc60;
        case 0x24bc64u: goto label_24bc64;
        case 0x24bc68u: goto label_24bc68;
        case 0x24bc6cu: goto label_24bc6c;
        case 0x24bc70u: goto label_24bc70;
        case 0x24bc74u: goto label_24bc74;
        case 0x24bc78u: goto label_24bc78;
        case 0x24bc7cu: goto label_24bc7c;
        case 0x24bc80u: goto label_24bc80;
        case 0x24bc84u: goto label_24bc84;
        case 0x24bc88u: goto label_24bc88;
        case 0x24bc8cu: goto label_24bc8c;
        case 0x24bc90u: goto label_24bc90;
        case 0x24bc94u: goto label_24bc94;
        case 0x24bc98u: goto label_24bc98;
        case 0x24bc9cu: goto label_24bc9c;
        case 0x24bca0u: goto label_24bca0;
        case 0x24bca4u: goto label_24bca4;
        case 0x24bca8u: goto label_24bca8;
        case 0x24bcacu: goto label_24bcac;
        case 0x24bcb0u: goto label_24bcb0;
        case 0x24bcb4u: goto label_24bcb4;
        case 0x24bcb8u: goto label_24bcb8;
        case 0x24bcbcu: goto label_24bcbc;
        case 0x24bcc0u: goto label_24bcc0;
        case 0x24bcc4u: goto label_24bcc4;
        case 0x24bcc8u: goto label_24bcc8;
        case 0x24bcccu: goto label_24bccc;
        case 0x24bcd0u: goto label_24bcd0;
        case 0x24bcd4u: goto label_24bcd4;
        case 0x24bcd8u: goto label_24bcd8;
        case 0x24bcdcu: goto label_24bcdc;
        case 0x24bce0u: goto label_24bce0;
        case 0x24bce4u: goto label_24bce4;
        case 0x24bce8u: goto label_24bce8;
        case 0x24bcecu: goto label_24bcec;
        case 0x24bcf0u: goto label_24bcf0;
        case 0x24bcf4u: goto label_24bcf4;
        case 0x24bcf8u: goto label_24bcf8;
        case 0x24bcfcu: goto label_24bcfc;
        case 0x24bd00u: goto label_24bd00;
        case 0x24bd04u: goto label_24bd04;
        case 0x24bd08u: goto label_24bd08;
        case 0x24bd0cu: goto label_24bd0c;
        case 0x24bd10u: goto label_24bd10;
        case 0x24bd14u: goto label_24bd14;
        case 0x24bd18u: goto label_24bd18;
        case 0x24bd1cu: goto label_24bd1c;
        case 0x24bd20u: goto label_24bd20;
        case 0x24bd24u: goto label_24bd24;
        case 0x24bd28u: goto label_24bd28;
        case 0x24bd2cu: goto label_24bd2c;
        case 0x24bd30u: goto label_24bd30;
        case 0x24bd34u: goto label_24bd34;
        case 0x24bd38u: goto label_24bd38;
        case 0x24bd3cu: goto label_24bd3c;
        case 0x24bd40u: goto label_24bd40;
        case 0x24bd44u: goto label_24bd44;
        case 0x24bd48u: goto label_24bd48;
        case 0x24bd4cu: goto label_24bd4c;
        case 0x24bd50u: goto label_24bd50;
        case 0x24bd54u: goto label_24bd54;
        case 0x24bd58u: goto label_24bd58;
        case 0x24bd5cu: goto label_24bd5c;
        case 0x24bd60u: goto label_24bd60;
        case 0x24bd64u: goto label_24bd64;
        case 0x24bd68u: goto label_24bd68;
        case 0x24bd6cu: goto label_24bd6c;
        case 0x24bd70u: goto label_24bd70;
        case 0x24bd74u: goto label_24bd74;
        case 0x24bd78u: goto label_24bd78;
        case 0x24bd7cu: goto label_24bd7c;
        case 0x24bd80u: goto label_24bd80;
        case 0x24bd84u: goto label_24bd84;
        case 0x24bd88u: goto label_24bd88;
        case 0x24bd8cu: goto label_24bd8c;
        case 0x24bd90u: goto label_24bd90;
        case 0x24bd94u: goto label_24bd94;
        case 0x24bd98u: goto label_24bd98;
        case 0x24bd9cu: goto label_24bd9c;
        case 0x24bda0u: goto label_24bda0;
        case 0x24bda4u: goto label_24bda4;
        case 0x24bda8u: goto label_24bda8;
        case 0x24bdacu: goto label_24bdac;
        case 0x24bdb0u: goto label_24bdb0;
        case 0x24bdb4u: goto label_24bdb4;
        case 0x24bdb8u: goto label_24bdb8;
        case 0x24bdbcu: goto label_24bdbc;
        case 0x24bdc0u: goto label_24bdc0;
        case 0x24bdc4u: goto label_24bdc4;
        case 0x24bdc8u: goto label_24bdc8;
        case 0x24bdccu: goto label_24bdcc;
        case 0x24bdd0u: goto label_24bdd0;
        case 0x24bdd4u: goto label_24bdd4;
        case 0x24bdd8u: goto label_24bdd8;
        case 0x24bddcu: goto label_24bddc;
        case 0x24bde0u: goto label_24bde0;
        case 0x24bde4u: goto label_24bde4;
        case 0x24bde8u: goto label_24bde8;
        case 0x24bdecu: goto label_24bdec;
        case 0x24bdf0u: goto label_24bdf0;
        case 0x24bdf4u: goto label_24bdf4;
        case 0x24bdf8u: goto label_24bdf8;
        case 0x24bdfcu: goto label_24bdfc;
        case 0x24be00u: goto label_24be00;
        case 0x24be04u: goto label_24be04;
        case 0x24be08u: goto label_24be08;
        case 0x24be0cu: goto label_24be0c;
        case 0x24be10u: goto label_24be10;
        case 0x24be14u: goto label_24be14;
        case 0x24be18u: goto label_24be18;
        case 0x24be1cu: goto label_24be1c;
        case 0x24be20u: goto label_24be20;
        case 0x24be24u: goto label_24be24;
        case 0x24be28u: goto label_24be28;
        case 0x24be2cu: goto label_24be2c;
        case 0x24be30u: goto label_24be30;
        case 0x24be34u: goto label_24be34;
        case 0x24be38u: goto label_24be38;
        case 0x24be3cu: goto label_24be3c;
        case 0x24be40u: goto label_24be40;
        case 0x24be44u: goto label_24be44;
        case 0x24be48u: goto label_24be48;
        case 0x24be4cu: goto label_24be4c;
        case 0x24be50u: goto label_24be50;
        case 0x24be54u: goto label_24be54;
        case 0x24be58u: goto label_24be58;
        case 0x24be5cu: goto label_24be5c;
        case 0x24be60u: goto label_24be60;
        case 0x24be64u: goto label_24be64;
        case 0x24be68u: goto label_24be68;
        case 0x24be6cu: goto label_24be6c;
        case 0x24be70u: goto label_24be70;
        case 0x24be74u: goto label_24be74;
        case 0x24be78u: goto label_24be78;
        case 0x24be7cu: goto label_24be7c;
        case 0x24be80u: goto label_24be80;
        case 0x24be84u: goto label_24be84;
        case 0x24be88u: goto label_24be88;
        case 0x24be8cu: goto label_24be8c;
        case 0x24be90u: goto label_24be90;
        case 0x24be94u: goto label_24be94;
        case 0x24be98u: goto label_24be98;
        case 0x24be9cu: goto label_24be9c;
        case 0x24bea0u: goto label_24bea0;
        case 0x24bea4u: goto label_24bea4;
        case 0x24bea8u: goto label_24bea8;
        case 0x24beacu: goto label_24beac;
        case 0x24beb0u: goto label_24beb0;
        case 0x24beb4u: goto label_24beb4;
        case 0x24beb8u: goto label_24beb8;
        case 0x24bebcu: goto label_24bebc;
        case 0x24bec0u: goto label_24bec0;
        case 0x24bec4u: goto label_24bec4;
        case 0x24bec8u: goto label_24bec8;
        case 0x24beccu: goto label_24becc;
        case 0x24bed0u: goto label_24bed0;
        case 0x24bed4u: goto label_24bed4;
        case 0x24bed8u: goto label_24bed8;
        case 0x24bedcu: goto label_24bedc;
        case 0x24bee0u: goto label_24bee0;
        case 0x24bee4u: goto label_24bee4;
        case 0x24bee8u: goto label_24bee8;
        case 0x24beecu: goto label_24beec;
        case 0x24bef0u: goto label_24bef0;
        case 0x24bef4u: goto label_24bef4;
        case 0x24bef8u: goto label_24bef8;
        case 0x24befcu: goto label_24befc;
        case 0x24bf00u: goto label_24bf00;
        case 0x24bf04u: goto label_24bf04;
        case 0x24bf08u: goto label_24bf08;
        case 0x24bf0cu: goto label_24bf0c;
        case 0x24bf10u: goto label_24bf10;
        case 0x24bf14u: goto label_24bf14;
        case 0x24bf18u: goto label_24bf18;
        case 0x24bf1cu: goto label_24bf1c;
        case 0x24bf20u: goto label_24bf20;
        case 0x24bf24u: goto label_24bf24;
        case 0x24bf28u: goto label_24bf28;
        case 0x24bf2cu: goto label_24bf2c;
        case 0x24bf30u: goto label_24bf30;
        case 0x24bf34u: goto label_24bf34;
        case 0x24bf38u: goto label_24bf38;
        case 0x24bf3cu: goto label_24bf3c;
        case 0x24bf40u: goto label_24bf40;
        case 0x24bf44u: goto label_24bf44;
        case 0x24bf48u: goto label_24bf48;
        case 0x24bf4cu: goto label_24bf4c;
        case 0x24bf50u: goto label_24bf50;
        case 0x24bf54u: goto label_24bf54;
        case 0x24bf58u: goto label_24bf58;
        case 0x24bf5cu: goto label_24bf5c;
        case 0x24bf60u: goto label_24bf60;
        case 0x24bf64u: goto label_24bf64;
        case 0x24bf68u: goto label_24bf68;
        case 0x24bf6cu: goto label_24bf6c;
        case 0x24bf70u: goto label_24bf70;
        case 0x24bf74u: goto label_24bf74;
        default: break;
    }

    ctx->pc = 0x24b780u;

label_24b780:
    // 0x24b780: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x24b780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_24b784:
    // 0x24b784: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24b784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24b788:
    // 0x24b788: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x24b788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_24b78c:
    // 0x24b78c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x24b78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_24b790:
    // 0x24b790: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x24b790u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24b794:
    // 0x24b794: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x24b794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_24b798:
    // 0x24b798: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x24b798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_24b79c:
    // 0x24b79c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x24b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_24b7a0:
    // 0x24b7a0: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x24b7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_24b7a4:
    // 0x24b7a4: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x24b7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_24b7a8:
    // 0x24b7a8: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x24b7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_24b7ac:
    // 0x24b7ac: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x24b7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_24b7b0:
    // 0x24b7b0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x24b7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_24b7b4:
    // 0x24b7b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24b7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_24b7b8:
    // 0x24b7b8: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x24b7b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_24b7bc:
    // 0x24b7bc: 0xc107458  jal         func_41D160
label_24b7c0:
    if (ctx->pc == 0x24B7C0u) {
        ctx->pc = 0x24B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7BCu;
        // 0x24b7c0: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B7C4u;
        goto label_24b7c4;
    }
    ctx->pc = 0x24B7BCu;
    SET_GPR_U32(ctx, 31, 0x24B7C4u);
    ctx->pc = 0x24B7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B7BCu;
    // 0x24b7c0: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x24B7BCu, 0x24B7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7C4u;
label_24b7c4:
    // 0x24b7c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_24b7c8:
    if (ctx->pc == 0x24B7C8u) {
        ctx->pc = 0x24B7CCu;
        goto label_24b7cc;
    }
    ctx->pc = 0x24B7C4u;
    {
        const bool branch_taken_0x24b7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b7c4) {
            ctx->pc = 0x24B7D4u;
            goto label_24b7d4;
        }
    }
    ctx->pc = 0x24B7CCu;
label_24b7cc:
    // 0x24b7cc: 0xc092cf6  jal         func_24B3D8
label_24b7d0:
    if (ctx->pc == 0x24B7D0u) {
        ctx->pc = 0x24B7D4u;
        goto label_24b7d4;
    }
    ctx->pc = 0x24B7CCu;
    SET_GPR_U32(ctx, 31, 0x24B7D4u);
    ctx->pc = 0x24B3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B3D8u, 0x24B7CCu, 0x24B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7D4u;
label_24b7d4:
    // 0x24b7d4: 0xc107444  jal         func_41D110
label_24b7d8:
    if (ctx->pc == 0x24B7D8u) {
        ctx->pc = 0x24B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7D4u;
        // 0x24b7d8: 0x8fc4489c  lw          $a0, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B7DCu;
        goto label_24b7dc;
    }
    ctx->pc = 0x24B7D4u;
    SET_GPR_U32(ctx, 31, 0x24B7DCu);
    ctx->pc = 0x24B7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B7D4u;
    // 0x24b7d8: 0x8fc4489c  lw          $a0, 0x489C($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x24B7D4u, 0x24B7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7DCu;
label_24b7dc:
    // 0x24b7dc: 0x144001d9  bnez        $v0, . + 4 + (0x1D9 << 2)
label_24b7e0:
    if (ctx->pc == 0x24B7E0u) {
        ctx->pc = 0x24B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7DCu;
        // 0x24b7e0: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B7E4u;
        goto label_24b7e4;
    }
    ctx->pc = 0x24B7DCu;
    {
        const bool branch_taken_0x24b7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7DCu;
        // 0x24b7e0: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b7dc) {
            ctx->pc = 0x24BF44u;
            goto label_24bf44;
        }
    }
    ctx->pc = 0x24B7E4u;
label_24b7e4:
    // 0x24b7e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x24b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_24b7e8:
    // 0x24b7e8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x24b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_24b7ec:
    // 0x24b7ec: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x24b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_24b7f0:
    // 0x24b7f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24b7f4:
    // 0x24b7f4: 0x8c4377a0  lw          $v1, 0x77A0($v0)
    ctx->pc = 0x24b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30624)));
label_24b7f8:
    // 0x24b7f8: 0x106001d2  beqz        $v1, . + 4 + (0x1D2 << 2)
label_24b7fc:
    if (ctx->pc == 0x24B7FCu) {
        ctx->pc = 0x24B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7F8u;
        // 0x24b7fc: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B800u;
        goto label_24b800;
    }
    ctx->pc = 0x24B7F8u;
    {
        const bool branch_taken_0x24b7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7F8u;
        // 0x24b7fc: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b7f8) {
            ctx->pc = 0x24BF44u;
            goto label_24bf44;
        }
    }
    ctx->pc = 0x24B800u;
label_24b800:
    // 0x24b800: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x24b800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_24b804:
    // 0x24b804: 0x8c437308  lw          $v1, 0x7308($v0)
    ctx->pc = 0x24b804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29448)));
label_24b808:
    // 0x24b808: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24b808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24b80c:
    // 0x24b80c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_24b810:
    if (ctx->pc == 0x24B810u) {
        ctx->pc = 0x24B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B80Cu;
        // 0x24b810: 0x27b20040  addiu       $s2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B814u;
        goto label_24b814;
    }
    ctx->pc = 0x24B80Cu;
    {
        const bool branch_taken_0x24b80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B80Cu;
        // 0x24b810: 0x27b20040  addiu       $s2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b80c) {
            ctx->pc = 0x24B850u;
            goto label_24b850;
        }
    }
    ctx->pc = 0x24B814u;
label_24b814:
    // 0x24b814: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x24b814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_24b818:
    // 0x24b818: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24b818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24b81c:
    // 0x24b81c: 0x244472d8  addiu       $a0, $v0, 0x72D8
    ctx->pc = 0x24b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29400));
label_24b820:
    // 0x24b820: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24b820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24b824:
    // 0x24b824: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24b824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_24b828:
    // 0x24b828: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_24b82c:
    // 0x24b82c: 0x0  nop
    ctx->pc = 0x24b82cu;
    // NOP
label_24b830:
    // 0x24b830: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x24b830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_24b834:
    // 0x24b834: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24b834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_24b838:
    // 0x24b838: 0x0  nop
    ctx->pc = 0x24b838u;
    // NOP
label_24b83c:
    // 0x24b83c: 0x0  nop
    ctx->pc = 0x24b83cu;
    // NOP
label_24b840:
    // 0x24b840: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
label_24b844:
    if (ctx->pc == 0x24B844u) {
        ctx->pc = 0x24B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B840u;
        // 0x24b844: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B848u;
        goto label_24b848;
    }
    ctx->pc = 0x24B840u;
    {
        const bool branch_taken_0x24b840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x24B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B840u;
        // 0x24b844: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b840) {
            ctx->pc = 0x24B830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b830;
        }
    }
    ctx->pc = 0x24B848u;
label_24b848:
    // 0x24b848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24b84c:
    // 0x24b84c: 0xacc27308  sw          $v0, 0x7308($a2)
    ctx->pc = 0x24b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 29448), GPR_U32(ctx, 2));
label_24b850:
    // 0x24b850: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x24b850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_24b854:
    // 0x24b854: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x24b854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_24b858:
    // 0x24b858: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x24b858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24b85c:
    // 0x24b85c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24b860:
    // 0x24b860: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x24b860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_24b864:
    // 0x24b864: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24b864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24b868:
    // 0x24b868: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x24b868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_24b86c:
    // 0x24b86c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_24b870:
    // 0x24b870: 0x0  nop
    ctx->pc = 0x24b870u;
    // NOP
label_24b874:
    // 0x24b874: 0x0  nop
    ctx->pc = 0x24b874u;
    // NOP
label_24b878:
    // 0x24b878: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
label_24b87c:
    if (ctx->pc == 0x24B87Cu) {
        ctx->pc = 0x24B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B878u;
        // 0x24b87c: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B880u;
        goto label_24b880;
    }
    ctx->pc = 0x24B878u;
    {
        const bool branch_taken_0x24b878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x24B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B878u;
        // 0x24b87c: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b878) {
            ctx->pc = 0x24B868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b868;
        }
    }
    ctx->pc = 0x24B880u;
label_24b880:
    // 0x24b880: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24b880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b884:
    // 0x24b884: 0xc047e6c  jal         func_11F9B0
label_24b888:
    if (ctx->pc == 0x24B888u) {
        ctx->pc = 0x24B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B884u;
        // 0x24b888: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B88Cu;
        goto label_24b88c;
    }
    ctx->pc = 0x24B884u;
    SET_GPR_U32(ctx, 31, 0x24B88Cu);
    ctx->pc = 0x24B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B884u;
    // 0x24b888: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x24B884u, 0x24B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B88Cu;
label_24b88c:
    // 0x24b88c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24b890:
    // 0x24b890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24b894:
    // 0x24b894: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x24b894u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_24b898:
    // 0x24b898: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x24b898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_24b89c:
    // 0x24b89c: 0xc0f809  jalr        $a2
label_24b8a0:
    if (ctx->pc == 0x24B8A0u) {
        ctx->pc = 0x24B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B89Cu;
        // 0x24b8a0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B8A4u;
        goto label_24b8a4;
    }
    ctx->pc = 0x24B89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x24B8A4u);
        ctx->pc = 0x24B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B89Cu;
        // 0x24b8a0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B89Cu, 0x24B8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B8A4u;
label_24b8a4:
    // 0x24b8a4: 0xc0cd7d2  jal         func_335F48
label_24b8a8:
    if (ctx->pc == 0x24B8A8u) {
        ctx->pc = 0x24B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8A4u;
        // 0x24b8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B8ACu;
        goto label_24b8ac;
    }
    ctx->pc = 0x24B8A4u;
    SET_GPR_U32(ctx, 31, 0x24B8ACu);
    ctx->pc = 0x24B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B8A4u;
    // 0x24b8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x24B8A4u, 0x24B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B8ACu;
label_24b8ac:
    // 0x24b8ac: 0x8fc2489c  lw          $v0, 0x489C($fp)
    ctx->pc = 0x24b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_24b8b0:
    // 0x24b8b0: 0x84430224  lh          $v1, 0x224($v0)
    ctx->pc = 0x24b8b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
label_24b8b4:
    // 0x24b8b4: 0x186000fa  blez        $v1, . + 4 + (0xFA << 2)
label_24b8b8:
    if (ctx->pc == 0x24B8B8u) {
        ctx->pc = 0x24B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8B4u;
        // 0x24b8b8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B8BCu;
        goto label_24b8bc;
    }
    ctx->pc = 0x24B8B4u;
    {
        const bool branch_taken_0x24b8b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x24B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8B4u;
        // 0x24b8b8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b8b4) {
            ctx->pc = 0x24BCA0u;
            goto label_24bca0;
        }
    }
    ctx->pc = 0x24B8BCu;
label_24b8bc:
    // 0x24b8bc: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x24b8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_24b8c0:
    // 0x24b8c0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x24b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_24b8c4:
    // 0x24b8c4: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x24b8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_24b8c8:
    // 0x24b8c8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x24b8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_24b8cc:
    // 0x24b8cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x24b8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_24b8d0:
    // 0x24b8d0: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x24b8d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_24b8d4:
    // 0x24b8d4: 0xafa80058  sw          $t0, 0x58($sp)
    ctx->pc = 0x24b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 8));
label_24b8d8:
    // 0x24b8d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x24b8d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24b8dc:
    // 0x24b8dc: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x24b8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_24b8e0:
    // 0x24b8e0: 0xafa4005c  sw          $a0, 0x5C($sp)
    ctx->pc = 0x24b8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
label_24b8e4:
    // 0x24b8e4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x24b8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_24b8e8:
    // 0x24b8e8: 0x8fc2489c  lw          $v0, 0x489C($fp)
    ctx->pc = 0x24b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_24b8ec:
    // 0x24b8ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24b8ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24b8f0:
    // 0x24b8f0: 0x26370001  addiu       $s7, $s1, 0x1
    ctx->pc = 0x24b8f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24b8f4:
    // 0x24b8f4: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x24b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_24b8f8:
    // 0x24b8f8: 0xc0e409a  jal         func_390268
label_24b8fc:
    if (ctx->pc == 0x24B8FCu) {
        ctx->pc = 0x24B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8F8u;
        // 0x24b8fc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B900u;
        goto label_24b900;
    }
    ctx->pc = 0x24B8F8u;
    SET_GPR_U32(ctx, 31, 0x24B900u);
    ctx->pc = 0x24B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B8F8u;
    // 0x24b8fc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x24B8F8u, 0x24B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B900u;
label_24b900:
    // 0x24b900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24b900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24b904:
    // 0x24b904: 0x120000e1  beqz        $s0, . + 4 + (0xE1 << 2)
label_24b908:
    if (ctx->pc == 0x24B908u) {
        ctx->pc = 0x24B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B904u;
        // 0x24b908: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B90Cu;
        goto label_24b90c;
    }
    ctx->pc = 0x24B904u;
    {
        const bool branch_taken_0x24b904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B904u;
        // 0x24b908: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b904) {
            ctx->pc = 0x24BC8Cu;
            goto label_24bc8c;
        }
    }
    ctx->pc = 0x24B90Cu;
label_24b90c:
    // 0x24b90c: 0xc089fe4  jal         func_227F90
label_24b910:
    if (ctx->pc == 0x24B910u) {
        ctx->pc = 0x24B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B90Cu;
        // 0x24b910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B914u;
        goto label_24b914;
    }
    ctx->pc = 0x24B90Cu;
    SET_GPR_U32(ctx, 31, 0x24B914u);
    ctx->pc = 0x24B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B90Cu;
    // 0x24b910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x24B90Cu, 0x24B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B914u;
label_24b914:
    // 0x24b914: 0x144000dd  bnez        $v0, . + 4 + (0xDD << 2)
label_24b918:
    if (ctx->pc == 0x24B918u) {
        ctx->pc = 0x24B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B914u;
        // 0x24b918: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B91Cu;
        goto label_24b91c;
    }
    ctx->pc = 0x24B914u;
    {
        const bool branch_taken_0x24b914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B914u;
        // 0x24b918: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b914) {
            ctx->pc = 0x24BC8Cu;
            goto label_24bc8c;
        }
    }
    ctx->pc = 0x24B91Cu;
label_24b91c:
    // 0x24b91c: 0xc089f4a  jal         func_227D28
label_24b920:
    if (ctx->pc == 0x24B920u) {
        ctx->pc = 0x24B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B91Cu;
        // 0x24b920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B924u;
        goto label_24b924;
    }
    ctx->pc = 0x24B91Cu;
    SET_GPR_U32(ctx, 31, 0x24B924u);
    ctx->pc = 0x24B920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B91Cu;
    // 0x24b920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x24B91Cu, 0x24B924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B924u;
label_24b924:
    // 0x24b924: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
label_24b928:
    if (ctx->pc == 0x24B928u) {
        ctx->pc = 0x24B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B924u;
        // 0x24b928: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B92Cu;
        goto label_24b92c;
    }
    ctx->pc = 0x24B924u;
    {
        const bool branch_taken_0x24b924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B924u;
        // 0x24b928: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b924) {
            ctx->pc = 0x24BC8Cu;
            goto label_24bc8c;
        }
    }
    ctx->pc = 0x24B92Cu;
label_24b92c:
    // 0x24b92c: 0xc088f04  jal         func_223C10
label_24b930:
    if (ctx->pc == 0x24B930u) {
        ctx->pc = 0x24B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B92Cu;
        // 0x24b930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B934u;
        goto label_24b934;
    }
    ctx->pc = 0x24B92Cu;
    SET_GPR_U32(ctx, 31, 0x24B934u);
    ctx->pc = 0x24B930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B92Cu;
    // 0x24b930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x24B92Cu, 0x24B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B934u;
label_24b934:
    // 0x24b934: 0x144000d5  bnez        $v0, . + 4 + (0xD5 << 2)
label_24b938:
    if (ctx->pc == 0x24B938u) {
        ctx->pc = 0x24B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B934u;
        // 0x24b938: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B93Cu;
        goto label_24b93c;
    }
    ctx->pc = 0x24B934u;
    {
        const bool branch_taken_0x24b934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B934u;
        // 0x24b938: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b934) {
            ctx->pc = 0x24BC8Cu;
            goto label_24bc8c;
        }
    }
    ctx->pc = 0x24B93Cu;
label_24b93c:
    // 0x24b93c: 0xc089f98  jal         func_227E60
label_24b940:
    if (ctx->pc == 0x24B940u) {
        ctx->pc = 0x24B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B93Cu;
        // 0x24b940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B944u;
        goto label_24b944;
    }
    ctx->pc = 0x24B93Cu;
    SET_GPR_U32(ctx, 31, 0x24B944u);
    ctx->pc = 0x24B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B93Cu;
    // 0x24b940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x24B93Cu, 0x24B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B944u;
label_24b944:
    // 0x24b944: 0x144000d1  bnez        $v0, . + 4 + (0xD1 << 2)
label_24b948:
    if (ctx->pc == 0x24B948u) {
        ctx->pc = 0x24B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B944u;
        // 0x24b948: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B94Cu;
        goto label_24b94c;
    }
    ctx->pc = 0x24B944u;
    {
        const bool branch_taken_0x24b944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B944u;
        // 0x24b948: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b944) {
            ctx->pc = 0x24BC8Cu;
            goto label_24bc8c;
        }
    }
    ctx->pc = 0x24B94Cu;
label_24b94c:
    // 0x24b94c: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x24b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_24b950:
    // 0x24b950: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24b954:
    if (ctx->pc == 0x24B954u) {
        ctx->pc = 0x24B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B950u;
        // 0x24b954: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B958u;
        goto label_24b958;
    }
    ctx->pc = 0x24B950u;
    {
        const bool branch_taken_0x24b950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B950u;
        // 0x24b954: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b950) {
            ctx->pc = 0x24B95Cu;
            goto label_24b95c;
        }
    }
    ctx->pc = 0x24B958u;
label_24b958:
    // 0x24b958: 0xac4902b4  sw          $t1, 0x2B4($v0)
    ctx->pc = 0x24b958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 9));
label_24b95c:
    // 0x24b95c: 0xc047ab8  jal         func_11EAE0
label_24b960:
    if (ctx->pc == 0x24B960u) {
        ctx->pc = 0x24B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B95Cu;
        // 0x24b960: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B964u;
        goto label_24b964;
    }
    ctx->pc = 0x24B95Cu;
    SET_GPR_U32(ctx, 31, 0x24B964u);
    ctx->pc = 0x24B960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B95Cu;
    // 0x24b960: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x24B95Cu, 0x24B964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B964u;
label_24b964:
    // 0x24b964: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24b964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_24b968:
    // 0x24b968: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_24b96c:
    if (ctx->pc == 0x24B96Cu) {
        ctx->pc = 0x24B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B968u;
        // 0x24b96c: 0x821601b0  lb          $s6, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B970u;
        goto label_24b970;
    }
    ctx->pc = 0x24B968u;
    {
        const bool branch_taken_0x24b968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b968) {
            ctx->pc = 0x24B96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B968u;
            // 0x24b96c: 0x821601b0  lb          $s6, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B970u;
            goto label_24b970;
        }
    }
    ctx->pc = 0x24B970u;
label_24b970:
    // 0x24b970: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24b970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24b974:
    // 0x24b974: 0x8c6204f8  lw          $v0, 0x4F8($v1)
    ctx->pc = 0x24b974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1272)));
label_24b978:
    // 0x24b978: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_24b97c:
    if (ctx->pc == 0x24B97Cu) {
        ctx->pc = 0x24B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B978u;
        // 0x24b97c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B980u;
        goto label_24b980;
    }
    ctx->pc = 0x24B978u;
    {
        const bool branch_taken_0x24b978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B978u;
        // 0x24b97c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b978) {
            ctx->pc = 0x24B9B8u;
            goto label_24b9b8;
        }
    }
    ctx->pc = 0x24B980u;
label_24b980:
    // 0x24b980: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24b980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24b984:
    // 0x24b984: 0xc4400560  lwc1        $f0, 0x560($v0)
    ctx->pc = 0x24b984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24b988:
    // 0x24b988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24b98c:
    // 0x24b98c: 0xc4610558  lwc1        $f1, 0x558($v1)
    ctx->pc = 0x24b98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24b990:
    // 0x24b990: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x24b990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_24b994:
    // 0x24b994: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24b994u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_24b998:
    // 0x24b998: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x24b998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24b99c:
    // 0x24b99c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24b99cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24b9a0:
    // 0x24b9a0: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x24b9a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_24b9a4:
    // 0x24b9a4: 0xc09288c  jal         func_24A230
label_24b9a8:
    if (ctx->pc == 0x24B9A8u) {
        ctx->pc = 0x24B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9A4u;
        // 0x24b9a8: 0xe4400560  swc1        $f0, 0x560($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1376), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B9ACu;
        goto label_24b9ac;
    }
    ctx->pc = 0x24B9A4u;
    SET_GPR_U32(ctx, 31, 0x24B9ACu);
    ctx->pc = 0x24B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9A4u;
    // 0x24b9a8: 0xe4400560  swc1        $f0, 0x560($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1376), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A230u, 0x24B9A4u, 0x24B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9ACu;
label_24b9ac:
    // 0x24b9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24b9b0:
    // 0x24b9b0: 0xc092caa  jal         func_24B2A8
label_24b9b4:
    if (ctx->pc == 0x24B9B4u) {
        ctx->pc = 0x24B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9B0u;
        // 0x24b9b4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B9B8u;
        goto label_24b9b8;
    }
    ctx->pc = 0x24B9B0u;
    SET_GPR_U32(ctx, 31, 0x24B9B8u);
    ctx->pc = 0x24B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9B0u;
    // 0x24b9b4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B2A8u, 0x24B9B0u, 0x24B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9B8u;
label_24b9b8:
    // 0x24b9b8: 0x8fc2489c  lw          $v0, 0x489C($fp)
    ctx->pc = 0x24b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_24b9bc:
    // 0x24b9bc: 0x26440228  addiu       $a0, $s2, 0x228
    ctx->pc = 0x24b9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 552));
label_24b9c0:
    // 0x24b9c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24b9c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b9c4:
    // 0x24b9c4: 0xc0e409a  jal         func_390268
label_24b9c8:
    if (ctx->pc == 0x24B9C8u) {
        ctx->pc = 0x24B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9C4u;
        // 0x24b9c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B9CCu;
        goto label_24b9cc;
    }
    ctx->pc = 0x24B9C4u;
    SET_GPR_U32(ctx, 31, 0x24B9CCu);
    ctx->pc = 0x24B9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9C4u;
    // 0x24b9c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x24B9C4u, 0x24B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9CCu;
label_24b9cc:
    // 0x24b9cc: 0xc0874fa  jal         func_21D3E8
label_24b9d0:
    if (ctx->pc == 0x24B9D0u) {
        ctx->pc = 0x24B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9CCu;
        // 0x24b9d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B9D4u;
        goto label_24b9d4;
    }
    ctx->pc = 0x24B9CCu;
    SET_GPR_U32(ctx, 31, 0x24B9D4u);
    ctx->pc = 0x24B9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9CCu;
    // 0x24b9d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x24B9CCu, 0x24B9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9D4u;
label_24b9d4:
    // 0x24b9d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24b9d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24b9d8:
    // 0x24b9d8: 0x9062001b  lbu         $v0, 0x1B($v1)
    ctx->pc = 0x24b9d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27)));
label_24b9dc:
    // 0x24b9dc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_24b9e0:
    if (ctx->pc == 0x24B9E0u) {
        ctx->pc = 0x24B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9DCu;
        // 0x24b9e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B9E4u;
        goto label_24b9e4;
    }
    ctx->pc = 0x24B9DCu;
    {
        const bool branch_taken_0x24b9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9DCu;
        // 0x24b9e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b9dc) {
            ctx->pc = 0x24BA20u;
            goto label_24ba20;
        }
    }
    ctx->pc = 0x24B9E4u;
label_24b9e4:
    // 0x24b9e4: 0x80640019  lb          $a0, 0x19($v1)
    ctx->pc = 0x24b9e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
label_24b9e8:
    // 0x24b9e8: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_24b9ec:
    if (ctx->pc == 0x24B9ECu) {
        ctx->pc = 0x24B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9E8u;
        // 0x24b9ec: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B9F0u;
        goto label_24b9f0;
    }
    ctx->pc = 0x24B9E8u;
    {
        const bool branch_taken_0x24b9e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9E8u;
        // 0x24b9ec: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b9e8) {
            ctx->pc = 0x24BA0Cu;
            goto label_24ba0c;
        }
    }
    ctx->pc = 0x24B9F0u;
label_24b9f0:
    // 0x24b9f0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x24b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_24b9f4:
    // 0x24b9f4: 0x2463d810  addiu       $v1, $v1, -0x27F0
    ctx->pc = 0x24b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
label_24b9f8:
    // 0x24b9f8: 0x600013  mtlo        $v1
    ctx->pc = 0x24b9f8u;
    ctx->lo = GPR_U64(ctx, 3);
label_24b9fc:
    // 0x24b9fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_24ba00:
    if (ctx->pc == 0x24BA00u) {
        ctx->pc = 0x24BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9FCu;
        // 0x24ba00: 0x70822000  madd        $a0, $a0, $v0 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BA04u;
        goto label_24ba04;
    }
    ctx->pc = 0x24B9FCu;
    {
        const bool branch_taken_0x24b9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9FCu;
        // 0x24ba00: 0x70822000  madd        $a0, $a0, $v0 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b9fc) {
            ctx->pc = 0x24BA10u;
            goto label_24ba10;
        }
    }
    ctx->pc = 0x24BA04u;
label_24ba04:
    // 0x24ba04: 0x1000003e  b           . + 4 + (0x3E << 2)
label_24ba08:
    if (ctx->pc == 0x24BA08u) {
        ctx->pc = 0x24BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA04u;
        // 0x24ba08: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BA0Cu;
        goto label_24ba0c;
    }
    ctx->pc = 0x24BA04u;
    {
        const bool branch_taken_0x24ba04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA04u;
        // 0x24ba08: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba04) {
            ctx->pc = 0x24BB00u;
            goto label_24bb00;
        }
    }
    ctx->pc = 0x24BA0Cu;
label_24ba0c:
    // 0x24ba0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24ba0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ba10:
    // 0x24ba10: 0xc0512fc  jal         func_144BF0
label_24ba14:
    if (ctx->pc == 0x24BA14u) {
        ctx->pc = 0x24BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA10u;
        // 0x24ba14: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BA18u;
        goto label_24ba18;
    }
    ctx->pc = 0x24BA10u;
    SET_GPR_U32(ctx, 31, 0x24BA18u);
    ctx->pc = 0x24BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA10u;
    // 0x24ba14: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BF0u, 0x24BA10u, 0x24BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA18u;
label_24ba18:
    // 0x24ba18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_24ba1c:
    if (ctx->pc == 0x24BA1Cu) {
        ctx->pc = 0x24BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA18u;
        // 0x24ba1c: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BA20u;
        goto label_24ba20;
    }
    ctx->pc = 0x24BA18u;
    {
        const bool branch_taken_0x24ba18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA18u;
        // 0x24ba1c: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba18) {
            ctx->pc = 0x24BA38u;
            goto label_24ba38;
        }
    }
    ctx->pc = 0x24BA20u;
label_24ba20:
    // 0x24ba20: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x24ba20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_24ba24:
    // 0x24ba24: 0x25082e10  addiu       $t0, $t0, 0x2E10
    ctx->pc = 0x24ba24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11792));
label_24ba28:
    // 0x24ba28: 0x1111021  addu        $v0, $t0, $s1
    ctx->pc = 0x24ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
label_24ba2c:
    // 0x24ba2c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24ba2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_24ba30:
    // 0x24ba30: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_24ba34:
    if (ctx->pc == 0x24BA34u) {
        ctx->pc = 0x24BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA30u;
        // 0x24ba34: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BA38u;
        goto label_24ba38;
    }
    ctx->pc = 0x24BA30u;
    {
        const bool branch_taken_0x24ba30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA30u;
        // 0x24ba34: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba30) {
            ctx->pc = 0x24BA64u;
            goto label_24ba64;
        }
    }
    ctx->pc = 0x24BA38u;
label_24ba38:
    // 0x24ba38: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x24ba38u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_24ba3c:
    // 0x24ba3c: 0x8d22b734  lw          $v0, -0x48CC($t1)
    ctx->pc = 0x24ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294948660)));
label_24ba40:
    // 0x24ba40: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x24ba40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_24ba44:
    // 0x24ba44: 0x753821  addu        $a3, $v1, $s5
    ctx->pc = 0x24ba44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_24ba48:
    // 0x24ba48: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x24ba48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ba4c:
    // 0x24ba4c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x24ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_24ba50:
    // 0x24ba50: 0x25040840  addiu       $a0, $t0, 0x840
    ctx->pc = 0x24ba50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 2112));
label_24ba54:
    // 0x24ba54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24ba54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24ba58:
    // 0x24ba58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24ba58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ba5c:
    // 0x24ba5c: 0xc06ca28  jal         func_1B28A0
label_24ba60:
    if (ctx->pc == 0x24BA60u) {
        ctx->pc = 0x24BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA5Cu;
        // 0x24ba60: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BA64u;
        goto label_24ba64;
    }
    ctx->pc = 0x24BA5Cu;
    SET_GPR_U32(ctx, 31, 0x24BA64u);
    ctx->pc = 0x24BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA5Cu;
    // 0x24ba60: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B28A0u, 0x24BA5Cu, 0x24BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA64u;
label_24ba64:
    // 0x24ba64: 0x16400028  bnez        $s2, . + 4 + (0x28 << 2)
label_24ba68:
    if (ctx->pc == 0x24BA68u) {
        ctx->pc = 0x24BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA64u;
        // 0x24ba68: 0x26370001  addiu       $s7, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BA6Cu;
        goto label_24ba6c;
    }
    ctx->pc = 0x24BA64u;
    {
        const bool branch_taken_0x24ba64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA64u;
        // 0x24ba68: 0x26370001  addiu       $s7, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba64) {
            ctx->pc = 0x24BB08u;
            goto label_24bb08;
        }
    }
    ctx->pc = 0x24BA6Cu;
label_24ba6c:
    // 0x24ba6c: 0xc08a0d0  jal         func_228340
label_24ba70:
    if (ctx->pc == 0x24BA70u) {
        ctx->pc = 0x24BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA6Cu;
        // 0x24ba70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BA74u;
        goto label_24ba74;
    }
    ctx->pc = 0x24BA6Cu;
    SET_GPR_U32(ctx, 31, 0x24BA74u);
    ctx->pc = 0x24BA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA6Cu;
    // 0x24ba70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x24BA6Cu, 0x24BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA74u;
label_24ba74:
    // 0x24ba74: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_24ba78:
    if (ctx->pc == 0x24BA78u) {
        ctx->pc = 0x24BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA74u;
        // 0x24ba78: 0xa3a00050  sb          $zero, 0x50($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BA7Cu;
        goto label_24ba7c;
    }
    ctx->pc = 0x24BA74u;
    {
        const bool branch_taken_0x24ba74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ba74) {
            ctx->pc = 0x24BA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BA74u;
            // 0x24ba78: 0xa3a00050  sb          $zero, 0x50($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BB0Cu;
            goto label_24bb0c;
        }
    }
    ctx->pc = 0x24BA7Cu;
label_24ba7c:
    // 0x24ba7c: 0xc088bbc  jal         func_222EF0
label_24ba80:
    if (ctx->pc == 0x24BA80u) {
        ctx->pc = 0x24BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA7Cu;
        // 0x24ba80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BA84u;
        goto label_24ba84;
    }
    ctx->pc = 0x24BA7Cu;
    SET_GPR_U32(ctx, 31, 0x24BA84u);
    ctx->pc = 0x24BA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA7Cu;
    // 0x24ba80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x24BA7Cu, 0x24BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA84u;
label_24ba84:
    // 0x24ba84: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x24ba84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ba88:
    // 0x24ba88: 0x0  nop
    ctx->pc = 0x24ba88u;
    // NOP
label_24ba8c:
    // 0x24ba8c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_24ba90:
    if (ctx->pc == 0x24BA90u) {
        ctx->pc = 0x24BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA8Cu;
        // 0x24ba90: 0x3c090051  lui         $t1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BA94u;
        goto label_24ba94;
    }
    ctx->pc = 0x24BA8Cu;
    {
        const bool branch_taken_0x24ba8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA8Cu;
        // 0x24ba90: 0x3c090051  lui         $t1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba8c) {
            ctx->pc = 0x24BB08u;
            goto label_24bb08;
        }
    }
    ctx->pc = 0x24BA94u;
label_24ba94:
    // 0x24ba94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24ba94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ba98:
    // 0x24ba98: 0x8d22055c  lw          $v0, 0x55C($t1)
    ctx->pc = 0x24ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1372)));
label_24ba9c:
    // 0x24ba9c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_24baa0:
    if (ctx->pc == 0x24BAA0u) {
        ctx->pc = 0x24BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA9Cu;
        // 0x24baa0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BAA4u;
        goto label_24baa4;
    }
    ctx->pc = 0x24BA9Cu;
    {
        const bool branch_taken_0x24ba9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA9Cu;
        // 0x24baa0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba9c) {
            ctx->pc = 0x24BB00u;
            goto label_24bb00;
        }
    }
    ctx->pc = 0x24BAA4u;
label_24baa4:
    // 0x24baa4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x24baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_24baa8:
    // 0x24baa8: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x24baa8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_24baac:
    // 0x24baac: 0x245172d8  addiu       $s1, $v0, 0x72D8
    ctx->pc = 0x24baacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29400));
label_24bab0:
    // 0x24bab0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24bab4:
    // 0x24bab4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24bab4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24bab8:
    // 0x24bab8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24babc:
    // 0x24babc: 0x40f809  jalr        $v0
label_24bac0:
    if (ctx->pc == 0x24BAC0u) {
        ctx->pc = 0x24BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BABCu;
        // 0x24bac0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BAC4u;
        goto label_24bac4;
    }
    ctx->pc = 0x24BABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24BAC4u);
        ctx->pc = 0x24BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BABCu;
        // 0x24bac0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BABCu, 0x24BAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24BAC4u;
label_24bac4:
    // 0x24bac4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24bac8:
    // 0x24bac8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_24bacc:
    if (ctx->pc == 0x24BACCu) {
        ctx->pc = 0x24BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAC8u;
        // 0x24bacc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BAD0u;
        goto label_24bad0;
    }
    ctx->pc = 0x24BAC8u;
    {
        const bool branch_taken_0x24bac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAC8u;
        // 0x24bacc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bac8) {
            ctx->pc = 0x24BAECu;
            goto label_24baec;
        }
    }
    ctx->pc = 0x24BAD0u;
label_24bad0:
    // 0x24bad0: 0x8e62b734  lw          $v0, -0x48CC($s3)
    ctx->pc = 0x24bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
label_24bad4:
    // 0x24bad4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x24bad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_24bad8:
    // 0x24bad8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_24badc:
    // 0x24badc: 0x24631194  addiu       $v1, $v1, 0x1194
    ctx->pc = 0x24badcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4500));
label_24bae0:
    // 0x24bae0: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x24bae0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_24bae4:
    // 0x24bae4: 0x1060ffc7  beqz        $v1, . + 4 + (-0x39 << 2)
label_24bae8:
    if (ctx->pc == 0x24BAE8u) {
        ctx->pc = 0x24BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAE4u;
        // 0x24bae8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BAECu;
        goto label_24baec;
    }
    ctx->pc = 0x24BAE4u;
    {
        const bool branch_taken_0x24bae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAE4u;
        // 0x24bae8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bae4) {
            ctx->pc = 0x24BA04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ba04;
        }
    }
    ctx->pc = 0x24BAECu;
label_24baec:
    // 0x24baec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24baecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24baf0:
    // 0x24baf0: 0x8c62055c  lw          $v0, 0x55C($v1)
    ctx->pc = 0x24baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1372)));
label_24baf4:
    // 0x24baf4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x24baf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24baf8:
    // 0x24baf8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_24bafc:
    if (ctx->pc == 0x24BAFCu) {
        ctx->pc = 0x24BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAF8u;
        // 0x24bafc: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BB00u;
        goto label_24bb00;
    }
    ctx->pc = 0x24BAF8u;
    {
        const bool branch_taken_0x24baf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAF8u;
        // 0x24bafc: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24baf8) {
            ctx->pc = 0x24BAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24bab0;
        }
    }
    ctx->pc = 0x24BB00u;
label_24bb00:
    // 0x24bb00: 0x12800062  beqz        $s4, . + 4 + (0x62 << 2)
label_24bb04:
    if (ctx->pc == 0x24BB04u) {
        ctx->pc = 0x24BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB00u;
        // 0x24bb04: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BB08u;
        goto label_24bb08;
    }
    ctx->pc = 0x24BB00u;
    {
        const bool branch_taken_0x24bb00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB00u;
        // 0x24bb04: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb00) {
            ctx->pc = 0x24BC8Cu;
            goto label_24bc8c;
        }
    }
    ctx->pc = 0x24BB08u;
label_24bb08:
    // 0x24bb08: 0xa3a00050  sb          $zero, 0x50($sp)
    ctx->pc = 0x24bb08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
label_24bb0c:
    // 0x24bb0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24bb10:
    // 0x24bb10: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24bb10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24bb14:
    // 0x24bb14: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24bb18:
    // 0x24bb18: 0x40f809  jalr        $v0
label_24bb1c:
    if (ctx->pc == 0x24BB1Cu) {
        ctx->pc = 0x24BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB18u;
        // 0x24bb1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BB20u;
        goto label_24bb20;
    }
    ctx->pc = 0x24BB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24BB20u);
        ctx->pc = 0x24BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB18u;
        // 0x24bb1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BB18u, 0x24BB20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24BB20u;
label_24bb20:
    // 0x24bb20: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x24bb20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_24bb24:
    // 0x24bb24: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x24bb24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
label_24bb28:
    // 0x24bb28: 0x8d05055c  lw          $a1, 0x55C($t0)
    ctx->pc = 0x24bb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1372)));
label_24bb2c:
    // 0x24bb2c: 0x252472d8  addiu       $a0, $t1, 0x72D8
    ctx->pc = 0x24bb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 29400));
label_24bb30:
    // 0x24bb30: 0x8fa8005c  lw          $t0, 0x5C($sp)
    ctx->pc = 0x24bb30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_24bb34:
    // 0x24bb34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24bb34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24bb38:
    // 0x24bb38: 0xc092c64  jal         func_24B190
label_24bb3c:
    if (ctx->pc == 0x24BB3Cu) {
        ctx->pc = 0x24BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB38u;
        // 0x24bb3c: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BB40u;
        goto label_24bb40;
    }
    ctx->pc = 0x24BB38u;
    SET_GPR_U32(ctx, 31, 0x24BB40u);
    ctx->pc = 0x24BB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BB38u;
    // 0x24bb3c: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B190u, 0x24BB38u, 0x24BB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BB40u;
label_24bb40:
    // 0x24bb40: 0xc08a0d0  jal         func_228340
label_24bb44:
    if (ctx->pc == 0x24BB44u) {
        ctx->pc = 0x24BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB40u;
        // 0x24bb44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BB48u;
        goto label_24bb48;
    }
    ctx->pc = 0x24BB40u;
    SET_GPR_U32(ctx, 31, 0x24BB48u);
    ctx->pc = 0x24BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BB40u;
    // 0x24bb44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x24BB40u, 0x24BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BB48u;
label_24bb48:
    // 0x24bb48: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_24bb4c:
    if (ctx->pc == 0x24BB4Cu) {
        ctx->pc = 0x24BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB48u;
        // 0x24bb4c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BB50u;
        goto label_24bb50;
    }
    ctx->pc = 0x24BB48u;
    {
        const bool branch_taken_0x24bb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB48u;
        // 0x24bb4c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb48) {
            ctx->pc = 0x24BB6Cu;
            goto label_24bb6c;
        }
    }
    ctx->pc = 0x24BB50u;
label_24bb50:
    // 0x24bb50: 0xc088bbc  jal         func_222EF0
label_24bb54:
    if (ctx->pc == 0x24BB54u) {
        ctx->pc = 0x24BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB50u;
        // 0x24bb54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BB58u;
        goto label_24bb58;
    }
    ctx->pc = 0x24BB50u;
    SET_GPR_U32(ctx, 31, 0x24BB58u);
    ctx->pc = 0x24BB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BB50u;
    // 0x24bb54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x24BB50u, 0x24BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BB58u;
label_24bb58:
    // 0x24bb58: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x24bb58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24bb5c:
    // 0x24bb5c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x24bb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_24bb60:
    // 0x24bb60: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_24bb64:
    if (ctx->pc == 0x24BB64u) {
        ctx->pc = 0x24BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB60u;
        // 0x24bb64: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BB68u;
        goto label_24bb68;
    }
    ctx->pc = 0x24BB60u;
    {
        const bool branch_taken_0x24bb60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB60u;
        // 0x24bb64: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb60) {
            ctx->pc = 0x24BB88u;
            goto label_24bb88;
        }
    }
    ctx->pc = 0x24BB68u;
label_24bb68:
    // 0x24bb68: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24bb6c:
    // 0x24bb6c: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x24bb6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_24bb70:
    // 0x24bb70: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x24bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_24bb74:
    // 0x24bb74: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x24bb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24bb78:
    // 0x24bb78: 0x1152021  addu        $a0, $t0, $s5
    ctx->pc = 0x24bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 21)));
label_24bb7c:
    // 0x24bb7c: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x24bb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_24bb80:
    // 0x24bb80: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x24bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_24bb84:
    // 0x24bb84: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x24bb84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_24bb88:
    // 0x24bb88: 0x8ca5b734  lw          $a1, -0x48CC($a1)
    ctx->pc = 0x24bb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_24bb8c:
    // 0x24bb8c: 0xd51021  addu        $v0, $a2, $s5
    ctx->pc = 0x24bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_24bb90:
    // 0x24bb90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24bb94:
    // 0x24bb94: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x24bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_24bb98:
    // 0x24bb98: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x24bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24bb9c:
    // 0x24bb9c: 0x2c620fa1  sltiu       $v0, $v1, 0xFA1
    ctx->pc = 0x24bb9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4001) ? 1 : 0);
label_24bba0:
    // 0x24bba0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_24bba4:
    if (ctx->pc == 0x24BBA4u) {
        ctx->pc = 0x24BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBA0u;
        // 0x24bba4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BBA8u;
        goto label_24bba8;
    }
    ctx->pc = 0x24BBA0u;
    {
        const bool branch_taken_0x24bba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bba0) {
            ctx->pc = 0x24BBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BBA0u;
            // 0x24bba4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BC1Cu;
            goto label_24bc1c;
        }
    }
    ctx->pc = 0x24BBA8u;
label_24bba8:
    // 0x24bba8: 0x2463f060  addiu       $v1, $v1, -0xFA0
    ctx->pc = 0x24bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963296));
label_24bbac:
    // 0x24bbac: 0x2c6201f5  sltiu       $v0, $v1, 0x1F5
    ctx->pc = 0x24bbacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)501) ? 1 : 0);
label_24bbb0:
    // 0x24bbb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_24bbb4:
    if (ctx->pc == 0x24BBB4u) {
        ctx->pc = 0x24BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBB0u;
        // 0x24bbb4: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BBB8u;
        goto label_24bbb8;
    }
    ctx->pc = 0x24BBB0u;
    {
        const bool branch_taken_0x24bbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBB0u;
        // 0x24bbb4: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbb0) {
            ctx->pc = 0x24BBC0u;
            goto label_24bbc0;
        }
    }
    ctx->pc = 0x24BBB8u;
label_24bbb8:
    // 0x24bbb8: 0x10000017  b           . + 4 + (0x17 << 2)
label_24bbbc:
    if (ctx->pc == 0x24BBBCu) {
        ctx->pc = 0x24BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBB8u;
        // 0x24bbbc: 0xa3a00050  sb          $zero, 0x50($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BBC0u;
        goto label_24bbc0;
    }
    ctx->pc = 0x24BBB8u;
    {
        const bool branch_taken_0x24bbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBB8u;
        // 0x24bbbc: 0xa3a00050  sb          $zero, 0x50($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbb8) {
            ctx->pc = 0x24BC18u;
            goto label_24bc18;
        }
    }
    ctx->pc = 0x24BBC0u;
label_24bbc0:
    // 0x24bbc0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x24bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24bbc4:
    // 0x24bbc4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_24bbc8:
    if (ctx->pc == 0x24BBC8u) {
        ctx->pc = 0x24BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBC4u;
        // 0x24bbc8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BBCCu;
        goto label_24bbcc;
    }
    ctx->pc = 0x24BBC4u;
    {
        const bool branch_taken_0x24bbc4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBC4u;
        // 0x24bbc8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbc4) {
            ctx->pc = 0x24BBE0u;
            goto label_24bbe0;
        }
    }
    ctx->pc = 0x24BBCCu;
label_24bbcc:
    // 0x24bbcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24bbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24bbd0:
    // 0x24bbd0: 0x0  nop
    ctx->pc = 0x24bbd0u;
    // NOP
label_24bbd4:
    // 0x24bbd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24bbd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_24bbd8:
    // 0x24bbd8: 0x10000007  b           . + 4 + (0x7 << 2)
label_24bbdc:
    if (ctx->pc == 0x24BBDCu) {
        ctx->pc = 0x24BBE0u;
        goto label_24bbe0;
    }
    ctx->pc = 0x24BBD8u;
    {
        const bool branch_taken_0x24bbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bbd8) {
            ctx->pc = 0x24BBF8u;
            goto label_24bbf8;
        }
    }
    ctx->pc = 0x24BBE0u;
label_24bbe0:
    // 0x24bbe0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24bbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24bbe4:
    // 0x24bbe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24bbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_24bbe8:
    // 0x24bbe8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24bbe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24bbec:
    // 0x24bbec: 0x0  nop
    ctx->pc = 0x24bbecu;
    // NOP
label_24bbf0:
    // 0x24bbf0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24bbf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_24bbf4:
    // 0x24bbf4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x24bbf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_24bbf8:
    // 0x24bbf8: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x24bbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
label_24bbfc:
    // 0x24bbfc: 0x34218f5d  ori         $at, $at, 0x8F5D
    ctx->pc = 0x24bbfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36701);
label_24bc00:
    // 0x24bc00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24bc00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24bc04:
    // 0x24bc04: 0x0  nop
    ctx->pc = 0x24bc04u;
    // NOP
label_24bc08:
    // 0x24bc08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24bc08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_24bc0c:
    // 0x24bc0c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24bc0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_24bc10:
    // 0x24bc10: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x24bc10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_24bc14:
    // 0x24bc14: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x24bc14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
label_24bc18:
    // 0x24bc18: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24bc1c:
    // 0x24bc1c: 0x8c6204f8  lw          $v0, 0x4F8($v1)
    ctx->pc = 0x24bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1272)));
label_24bc20:
    // 0x24bc20: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_24bc24:
    if (ctx->pc == 0x24BC24u) {
        ctx->pc = 0x24BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC20u;
        // 0x24bc24: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BC28u;
        goto label_24bc28;
    }
    ctx->pc = 0x24BC20u;
    {
        const bool branch_taken_0x24bc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC20u;
        // 0x24bc24: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc20) {
            ctx->pc = 0x24BC70u;
            goto label_24bc70;
        }
    }
    ctx->pc = 0x24BC28u;
label_24bc28:
    // 0x24bc28: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x24bc28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_24bc2c:
    // 0x24bc2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_24bc30:
    if (ctx->pc == 0x24BC30u) {
        ctx->pc = 0x24BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC2Cu;
        // 0x24bc30: 0x3c080051  lui         $t0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BC34u;
        goto label_24bc34;
    }
    ctx->pc = 0x24BC2Cu;
    {
        const bool branch_taken_0x24bc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC2Cu;
        // 0x24bc30: 0x3c080051  lui         $t0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc2c) {
            ctx->pc = 0x24BC60u;
            goto label_24bc60;
        }
    }
    ctx->pc = 0x24BC34u;
label_24bc34:
    // 0x24bc34: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x24bc34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_24bc38:
    // 0x24bc38: 0xc5000560  lwc1        $f0, 0x560($t0)
    ctx->pc = 0x24bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24bc3c:
    // 0x24bc3c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x24bc3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24bc40:
    // 0x24bc40: 0xc5210558  lwc1        $f1, 0x558($t1)
    ctx->pc = 0x24bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24bc44:
    // 0x24bc44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24bc48:
    // 0x24bc48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24bc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24bc4c:
    // 0x24bc4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24bc4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_24bc50:
    // 0x24bc50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24bc50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24bc54:
    // 0x24bc54: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x24bc54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_24bc58:
    // 0x24bc58: 0xc09288c  jal         func_24A230
label_24bc5c:
    if (ctx->pc == 0x24BC5Cu) {
        ctx->pc = 0x24BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC58u;
        // 0x24bc5c: 0xe5000560  swc1        $f0, 0x560($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 1376), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BC60u;
        goto label_24bc60;
    }
    ctx->pc = 0x24BC58u;
    SET_GPR_U32(ctx, 31, 0x24BC60u);
    ctx->pc = 0x24BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC58u;
    // 0x24bc5c: 0xe5000560  swc1        $f0, 0x560($t0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 1376), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A230u, 0x24BC58u, 0x24BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC60u;
label_24bc60:
    // 0x24bc60: 0x93a50050  lbu         $a1, 0x50($sp)
    ctx->pc = 0x24bc60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_24bc64:
    // 0x24bc64: 0xc092caa  jal         func_24B2A8
label_24bc68:
    if (ctx->pc == 0x24BC68u) {
        ctx->pc = 0x24BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC64u;
        // 0x24bc68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BC6Cu;
        goto label_24bc6c;
    }
    ctx->pc = 0x24BC64u;
    SET_GPR_U32(ctx, 31, 0x24BC6Cu);
    ctx->pc = 0x24BC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC64u;
    // 0x24bc68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B2A8u, 0x24BC64u, 0x24BC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC6Cu;
label_24bc6c:
    // 0x24bc6c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x24bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_24bc70:
    // 0x24bc70: 0x26b5000c  addiu       $s5, $s5, 0xC
    ctx->pc = 0x24bc70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_24bc74:
    // 0x24bc74: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x24bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_24bc78:
    // 0x24bc78: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x24bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_24bc7c:
    // 0x24bc7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_24bc80:
    // 0x24bc80: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x24bc80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_24bc84:
    // 0x24bc84: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x24bc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_24bc88:
    // 0x24bc88: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x24bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_24bc8c:
    // 0x24bc8c: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x24bc8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_24bc90:
    // 0x24bc90: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x24bc90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_24bc94:
    // 0x24bc94: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x24bc94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24bc98:
    // 0x24bc98: 0x5440ff13  bnel        $v0, $zero, . + 4 + (-0xED << 2)
label_24bc9c:
    if (ctx->pc == 0x24BC9Cu) {
        ctx->pc = 0x24BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC98u;
        // 0x24bc9c: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BCA0u;
        goto label_24bca0;
    }
    ctx->pc = 0x24BC98u;
    {
        const bool branch_taken_0x24bc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bc98) {
            ctx->pc = 0x24BC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BC98u;
            // 0x24bc9c: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b8e8;
        }
    }
    ctx->pc = 0x24BCA0u;
label_24bca0:
    // 0x24bca0: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x24bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_24bca4:
    // 0x24bca4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x24bca4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_24bca8:
    // 0x24bca8: 0x1840008e  blez        $v0, . + 4 + (0x8E << 2)
label_24bcac:
    if (ctx->pc == 0x24BCACu) {
        ctx->pc = 0x24BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCA8u;
        // 0x24bcac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BCB0u;
        goto label_24bcb0;
    }
    ctx->pc = 0x24BCA8u;
    {
        const bool branch_taken_0x24bca8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCA8u;
        // 0x24bcac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bca8) {
            ctx->pc = 0x24BEE4u;
            goto label_24bee4;
        }
    }
    ctx->pc = 0x24BCB0u;
label_24bcb0:
    // 0x24bcb0: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x24bcb0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_24bcb4:
    // 0x24bcb4: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x24bcb4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_24bcb8:
    // 0x24bcb8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x24bcb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24bcbc:
    // 0x24bcbc: 0x24140228  addiu       $s4, $zero, 0x228
    ctx->pc = 0x24bcbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_24bcc0:
    // 0x24bcc0: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x24bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_24bcc4:
    // 0x24bcc4: 0xc0e409a  jal         func_390268
label_24bcc8:
    if (ctx->pc == 0x24BCC8u) {
        ctx->pc = 0x24BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCC4u;
        // 0x24bcc8: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BCCCu;
        goto label_24bccc;
    }
    ctx->pc = 0x24BCC4u;
    SET_GPR_U32(ctx, 31, 0x24BCCCu);
    ctx->pc = 0x24BCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BCC4u;
    // 0x24bcc8: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x24BCC4u, 0x24BCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCCCu;
label_24bccc:
    // 0x24bccc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24bcccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24bcd0:
    // 0x24bcd0: 0x1240007f  beqz        $s2, . + 4 + (0x7F << 2)
label_24bcd4:
    if (ctx->pc == 0x24BCD4u) {
        ctx->pc = 0x24BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCD0u;
        // 0x24bcd4: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BCD8u;
        goto label_24bcd8;
    }
    ctx->pc = 0x24BCD0u;
    {
        const bool branch_taken_0x24bcd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCD0u;
        // 0x24bcd4: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bcd0) {
            ctx->pc = 0x24BED0u;
            goto label_24bed0;
        }
    }
    ctx->pc = 0x24BCD8u;
label_24bcd8:
    // 0x24bcd8: 0xc089b98  jal         func_226E60
label_24bcdc:
    if (ctx->pc == 0x24BCDCu) {
        ctx->pc = 0x24BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCD8u;
        // 0x24bcdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BCE0u;
        goto label_24bce0;
    }
    ctx->pc = 0x24BCD8u;
    SET_GPR_U32(ctx, 31, 0x24BCE0u);
    ctx->pc = 0x24BCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BCD8u;
    // 0x24bcdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x24BCD8u, 0x24BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCE0u;
label_24bce0:
    // 0x24bce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24bce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24bce4:
    // 0x24bce4: 0x1200007a  beqz        $s0, . + 4 + (0x7A << 2)
label_24bce8:
    if (ctx->pc == 0x24BCE8u) {
        ctx->pc = 0x24BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCE4u;
        // 0x24bce8: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BCECu;
        goto label_24bcec;
    }
    ctx->pc = 0x24BCE4u;
    {
        const bool branch_taken_0x24bce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCE4u;
        // 0x24bce8: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bce4) {
            ctx->pc = 0x24BED0u;
            goto label_24bed0;
        }
    }
    ctx->pc = 0x24BCECu;
label_24bcec:
    // 0x24bcec: 0xc089fe4  jal         func_227F90
label_24bcf0:
    if (ctx->pc == 0x24BCF0u) {
        ctx->pc = 0x24BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCECu;
        // 0x24bcf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BCF4u;
        goto label_24bcf4;
    }
    ctx->pc = 0x24BCECu;
    SET_GPR_U32(ctx, 31, 0x24BCF4u);
    ctx->pc = 0x24BCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BCECu;
    // 0x24bcf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x24BCECu, 0x24BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCF4u;
label_24bcf4:
    // 0x24bcf4: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
label_24bcf8:
    if (ctx->pc == 0x24BCF8u) {
        ctx->pc = 0x24BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCF4u;
        // 0x24bcf8: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BCFCu;
        goto label_24bcfc;
    }
    ctx->pc = 0x24BCF4u;
    {
        const bool branch_taken_0x24bcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCF4u;
        // 0x24bcf8: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bcf4) {
            ctx->pc = 0x24BED0u;
            goto label_24bed0;
        }
    }
    ctx->pc = 0x24BCFCu;
label_24bcfc:
    // 0x24bcfc: 0xc089f4a  jal         func_227D28
label_24bd00:
    if (ctx->pc == 0x24BD00u) {
        ctx->pc = 0x24BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCFCu;
        // 0x24bd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD04u;
        goto label_24bd04;
    }
    ctx->pc = 0x24BCFCu;
    SET_GPR_U32(ctx, 31, 0x24BD04u);
    ctx->pc = 0x24BD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BCFCu;
    // 0x24bd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x24BCFCu, 0x24BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD04u;
label_24bd04:
    // 0x24bd04: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
label_24bd08:
    if (ctx->pc == 0x24BD08u) {
        ctx->pc = 0x24BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD04u;
        // 0x24bd08: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD0Cu;
        goto label_24bd0c;
    }
    ctx->pc = 0x24BD04u;
    {
        const bool branch_taken_0x24bd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD04u;
        // 0x24bd08: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd04) {
            ctx->pc = 0x24BED0u;
            goto label_24bed0;
        }
    }
    ctx->pc = 0x24BD0Cu;
label_24bd0c:
    // 0x24bd0c: 0xc088f04  jal         func_223C10
label_24bd10:
    if (ctx->pc == 0x24BD10u) {
        ctx->pc = 0x24BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD0Cu;
        // 0x24bd10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD14u;
        goto label_24bd14;
    }
    ctx->pc = 0x24BD0Cu;
    SET_GPR_U32(ctx, 31, 0x24BD14u);
    ctx->pc = 0x24BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD0Cu;
    // 0x24bd10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x24BD0Cu, 0x24BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD14u;
label_24bd14:
    // 0x24bd14: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
label_24bd18:
    if (ctx->pc == 0x24BD18u) {
        ctx->pc = 0x24BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD14u;
        // 0x24bd18: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD1Cu;
        goto label_24bd1c;
    }
    ctx->pc = 0x24BD14u;
    {
        const bool branch_taken_0x24bd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD14u;
        // 0x24bd18: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd14) {
            ctx->pc = 0x24BED0u;
            goto label_24bed0;
        }
    }
    ctx->pc = 0x24BD1Cu;
label_24bd1c:
    // 0x24bd1c: 0xc089f98  jal         func_227E60
label_24bd20:
    if (ctx->pc == 0x24BD20u) {
        ctx->pc = 0x24BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD1Cu;
        // 0x24bd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD24u;
        goto label_24bd24;
    }
    ctx->pc = 0x24BD1Cu;
    SET_GPR_U32(ctx, 31, 0x24BD24u);
    ctx->pc = 0x24BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD1Cu;
    // 0x24bd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x24BD1Cu, 0x24BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD24u;
label_24bd24:
    // 0x24bd24: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
label_24bd28:
    if (ctx->pc == 0x24BD28u) {
        ctx->pc = 0x24BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD24u;
        // 0x24bd28: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD2Cu;
        goto label_24bd2c;
    }
    ctx->pc = 0x24BD24u;
    {
        const bool branch_taken_0x24bd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD24u;
        // 0x24bd28: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd24) {
            ctx->pc = 0x24BED0u;
            goto label_24bed0;
        }
    }
    ctx->pc = 0x24BD2Cu;
label_24bd2c:
    // 0x24bd2c: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x24bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_24bd30:
    // 0x24bd30: 0x240201cc  addiu       $v0, $zero, 0x1CC
    ctx->pc = 0x24bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
label_24bd34:
    // 0x24bd34: 0x10620066  beq         $v1, $v0, . + 4 + (0x66 << 2)
label_24bd38:
    if (ctx->pc == 0x24BD38u) {
        ctx->pc = 0x24BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD34u;
        // 0x24bd38: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD3Cu;
        goto label_24bd3c;
    }
    ctx->pc = 0x24BD34u;
    {
        const bool branch_taken_0x24bd34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD34u;
        // 0x24bd38: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd34) {
            ctx->pc = 0x24BED0u;
            goto label_24bed0;
        }
    }
    ctx->pc = 0x24BD3Cu;
label_24bd3c:
    // 0x24bd3c: 0xc047ab8  jal         func_11EAE0
label_24bd40:
    if (ctx->pc == 0x24BD40u) {
        ctx->pc = 0x24BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD3Cu;
        // 0x24bd40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD44u;
        goto label_24bd44;
    }
    ctx->pc = 0x24BD3Cu;
    SET_GPR_U32(ctx, 31, 0x24BD44u);
    ctx->pc = 0x24BD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD3Cu;
    // 0x24bd40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x24BD3Cu, 0x24BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD44u;
label_24bd44:
    // 0x24bd44: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24bd44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_24bd48:
    // 0x24bd48: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_24bd4c:
    if (ctx->pc == 0x24BD4Cu) {
        ctx->pc = 0x24BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD48u;
        // 0x24bd4c: 0x825101b0  lb          $s1, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD50u;
        goto label_24bd50;
    }
    ctx->pc = 0x24BD48u;
    {
        const bool branch_taken_0x24bd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bd48) {
            ctx->pc = 0x24BD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BD48u;
            // 0x24bd4c: 0x825101b0  lb          $s1, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BD50u;
            goto label_24bd50;
        }
    }
    ctx->pc = 0x24BD50u;
label_24bd50:
    // 0x24bd50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24bd54:
    // 0x24bd54: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24bd54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24bd58:
    // 0x24bd58: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24bd5c:
    // 0x24bd5c: 0x40f809  jalr        $v0
label_24bd60:
    if (ctx->pc == 0x24BD60u) {
        ctx->pc = 0x24BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD5Cu;
        // 0x24bd60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD64u;
        goto label_24bd64;
    }
    ctx->pc = 0x24BD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24BD64u);
        ctx->pc = 0x24BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD5Cu;
        // 0x24bd60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BD5Cu, 0x24BD64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24BD64u;
label_24bd64:
    // 0x24bd64: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x24bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_24bd68:
    // 0x24bd68: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x24bd68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_24bd6c:
    // 0x24bd6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24bd6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24bd70:
    // 0x24bd70: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x24bd70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_24bd74:
    // 0x24bd74: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x24bd74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_24bd78:
    // 0x24bd78: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x24bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_24bd7c:
    // 0x24bd7c: 0x8d25055c  lw          $a1, 0x55C($t1)
    ctx->pc = 0x24bd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1372)));
label_24bd80:
    // 0x24bd80: 0x27a70051  addiu       $a3, $sp, 0x51
    ctx->pc = 0x24bd80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 81));
label_24bd84:
    // 0x24bd84: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x24bd84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
label_24bd88:
    // 0x24bd88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_24bd8c:
    // 0x24bd8c: 0x252472d8  addiu       $a0, $t1, 0x72D8
    ctx->pc = 0x24bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 29400));
label_24bd90:
    // 0x24bd90: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x24bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_24bd94:
    // 0x24bd94: 0xc092c64  jal         func_24B190
label_24bd98:
    if (ctx->pc == 0x24BD98u) {
        ctx->pc = 0x24BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD94u;
        // 0x24bd98: 0x7d4021  addu        $t0, $v1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BD9Cu;
        goto label_24bd9c;
    }
    ctx->pc = 0x24BD94u;
    SET_GPR_U32(ctx, 31, 0x24BD9Cu);
    ctx->pc = 0x24BD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD94u;
    // 0x24bd98: 0x7d4021  addu        $t0, $v1, $sp (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B190u, 0x24BD94u, 0x24BD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD9Cu;
label_24bd9c:
    // 0x24bd9c: 0x93a30051  lbu         $v1, 0x51($sp)
    ctx->pc = 0x24bd9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
label_24bda0:
    // 0x24bda0: 0x5060004a  beql        $v1, $zero, . + 4 + (0x4A << 2)
label_24bda4:
    if (ctx->pc == 0x24BDA4u) {
        ctx->pc = 0x24BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDA0u;
        // 0x24bda4: 0xae00066c  sw          $zero, 0x66C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BDA8u;
        goto label_24bda8;
    }
    ctx->pc = 0x24BDA0u;
    {
        const bool branch_taken_0x24bda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bda0) {
            ctx->pc = 0x24BDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BDA0u;
            // 0x24bda4: 0xae00066c  sw          $zero, 0x66C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BECCu;
            goto label_24becc;
        }
    }
    ctx->pc = 0x24BDA8u;
label_24bda8:
    // 0x24bda8: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x24bda8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_24bdac:
    // 0x24bdac: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24bdacu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_24bdb0:
    // 0x24bdb0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_24bdb4:
    if (ctx->pc == 0x24BDB4u) {
        ctx->pc = 0x24BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDB0u;
        // 0x24bdb4: 0x93a20051  lbu         $v0, 0x51($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BDB8u;
        goto label_24bdb8;
    }
    ctx->pc = 0x24BDB0u;
    {
        const bool branch_taken_0x24bdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDB0u;
        // 0x24bdb4: 0x93a20051  lbu         $v0, 0x51($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bdb0) {
            ctx->pc = 0x24BDE8u;
            goto label_24bde8;
        }
    }
    ctx->pc = 0x24BDB8u;
label_24bdb8:
    // 0x24bdb8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24bdbc:
    // 0x24bdbc: 0xc6c00560  lwc1        $f0, 0x560($s6)
    ctx->pc = 0x24bdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24bdc0:
    // 0x24bdc0: 0xc4610558  lwc1        $f1, 0x558($v1)
    ctx->pc = 0x24bdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24bdc4:
    // 0x24bdc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24bdc8:
    // 0x24bdc8: 0x93a50051  lbu         $a1, 0x51($sp)
    ctx->pc = 0x24bdc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
label_24bdcc:
    // 0x24bdcc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24bdccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_24bdd0:
    // 0x24bdd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24bdd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24bdd4:
    // 0x24bdd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24bdd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24bdd8:
    // 0x24bdd8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x24bdd8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_24bddc:
    // 0x24bddc: 0xc09288c  jal         func_24A230
label_24bde0:
    if (ctx->pc == 0x24BDE0u) {
        ctx->pc = 0x24BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDDCu;
        // 0x24bde0: 0xe6c00560  swc1        $f0, 0x560($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1376), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BDE4u;
        goto label_24bde4;
    }
    ctx->pc = 0x24BDDCu;
    SET_GPR_U32(ctx, 31, 0x24BDE4u);
    ctx->pc = 0x24BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BDDCu;
    // 0x24bde0: 0xe6c00560  swc1        $f0, 0x560($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1376), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A230u, 0x24BDDCu, 0x24BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDE4u;
label_24bde4:
    // 0x24bde4: 0x93a20051  lbu         $v0, 0x51($sp)
    ctx->pc = 0x24bde4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
label_24bde8:
    // 0x24bde8: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_24bdec:
    if (ctx->pc == 0x24BDECu) {
        ctx->pc = 0x24BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDE8u;
        // 0x24bdec: 0xae00066c  sw          $zero, 0x66C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BDF0u;
        goto label_24bdf0;
    }
    ctx->pc = 0x24BDE8u;
    {
        const bool branch_taken_0x24bde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bde8) {
            ctx->pc = 0x24BDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BDE8u;
            // 0x24bdec: 0xae00066c  sw          $zero, 0x66C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BECCu;
            goto label_24becc;
        }
    }
    ctx->pc = 0x24BDF0u;
label_24bdf0:
    // 0x24bdf0: 0xc0874fa  jal         func_21D3E8
label_24bdf4:
    if (ctx->pc == 0x24BDF4u) {
        ctx->pc = 0x24BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDF0u;
        // 0x24bdf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BDF8u;
        goto label_24bdf8;
    }
    ctx->pc = 0x24BDF0u;
    SET_GPR_U32(ctx, 31, 0x24BDF8u);
    ctx->pc = 0x24BDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BDF0u;
    // 0x24bdf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x24BDF0u, 0x24BDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDF8u;
label_24bdf8:
    // 0x24bdf8: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x24bdf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_24bdfc:
    // 0x24bdfc: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_24be00:
    if (ctx->pc == 0x24BE00u) {
        ctx->pc = 0x24BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDFCu;
        // 0x24be00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BE04u;
        goto label_24be04;
    }
    ctx->pc = 0x24BDFCu;
    {
        const bool branch_taken_0x24bdfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDFCu;
        // 0x24be00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bdfc) {
            ctx->pc = 0x24BEC8u;
            goto label_24bec8;
        }
    }
    ctx->pc = 0x24BE04u;
label_24be04:
    // 0x24be04: 0xc08997c  jal         func_2265F0
label_24be08:
    if (ctx->pc == 0x24BE08u) {
        ctx->pc = 0x24BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE04u;
        // 0x24be08: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BE0Cu;
        goto label_24be0c;
    }
    ctx->pc = 0x24BE04u;
    SET_GPR_U32(ctx, 31, 0x24BE0Cu);
    ctx->pc = 0x24BE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE04u;
    // 0x24be08: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x24BE04u, 0x24BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE0Cu;
label_24be0c:
    // 0x24be0c: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
label_24be10:
    if (ctx->pc == 0x24BE10u) {
        ctx->pc = 0x24BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE0Cu;
        // 0x24be10: 0xae00066c  sw          $zero, 0x66C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BE14u;
        goto label_24be14;
    }
    ctx->pc = 0x24BE0Cu;
    {
        const bool branch_taken_0x24be0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24be0c) {
            ctx->pc = 0x24BE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BE0Cu;
            // 0x24be10: 0xae00066c  sw          $zero, 0x66C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BECCu;
            goto label_24becc;
        }
    }
    ctx->pc = 0x24BE14u;
label_24be14:
    // 0x24be14: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x24be14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_24be18:
    // 0x24be18: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24be18u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_24be1c:
    // 0x24be1c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_24be20:
    if (ctx->pc == 0x24BE20u) {
        ctx->pc = 0x24BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE1Cu;
        // 0x24be20: 0x93a50051  lbu         $a1, 0x51($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BE24u;
        goto label_24be24;
    }
    ctx->pc = 0x24BE1Cu;
    {
        const bool branch_taken_0x24be1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE1Cu;
        // 0x24be20: 0x93a50051  lbu         $a1, 0x51($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be1c) {
            ctx->pc = 0x24BEB0u;
            goto label_24beb0;
        }
    }
    ctx->pc = 0x24BE24u;
label_24be24:
    // 0x24be24: 0xc107458  jal         func_41D160
label_24be28:
    if (ctx->pc == 0x24BE28u) {
        ctx->pc = 0x24BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE24u;
        // 0x24be28: 0x8fc4489c  lw          $a0, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BE2Cu;
        goto label_24be2c;
    }
    ctx->pc = 0x24BE24u;
    SET_GPR_U32(ctx, 31, 0x24BE2Cu);
    ctx->pc = 0x24BE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE24u;
    // 0x24be28: 0x8fc4489c  lw          $a0, 0x489C($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x24BE24u, 0x24BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE2Cu;
label_24be2c:
    // 0x24be2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_24be30:
    if (ctx->pc == 0x24BE30u) {
        ctx->pc = 0x24BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE2Cu;
        // 0x24be30: 0x93a50051  lbu         $a1, 0x51($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BE34u;
        goto label_24be34;
    }
    ctx->pc = 0x24BE2Cu;
    {
        const bool branch_taken_0x24be2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE2Cu;
        // 0x24be30: 0x93a50051  lbu         $a1, 0x51($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be2c) {
            ctx->pc = 0x24BE4Cu;
            goto label_24be4c;
        }
    }
    ctx->pc = 0x24BE34u;
label_24be34:
    // 0x24be34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24be34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24be38:
    // 0x24be38: 0xc6ac0554  lwc1        $f12, 0x554($s5)
    ctx->pc = 0x24be38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24be3c:
    // 0x24be3c: 0xc092bde  jal         func_24AF78
label_24be40:
    if (ctx->pc == 0x24BE40u) {
        ctx->pc = 0x24BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE3Cu;
        // 0x24be40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BE44u;
        goto label_24be44;
    }
    ctx->pc = 0x24BE3Cu;
    SET_GPR_U32(ctx, 31, 0x24BE44u);
    ctx->pc = 0x24BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE3Cu;
    // 0x24be40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AF78u, 0x24BE3Cu, 0x24BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE44u;
label_24be44:
    // 0x24be44: 0x10000007  b           . + 4 + (0x7 << 2)
label_24be48:
    if (ctx->pc == 0x24BE48u) {
        ctx->pc = 0x24BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE44u;
        // 0x24be48: 0x93a50051  lbu         $a1, 0x51($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BE4Cu;
        goto label_24be4c;
    }
    ctx->pc = 0x24BE44u;
    {
        const bool branch_taken_0x24be44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE44u;
        // 0x24be48: 0x93a50051  lbu         $a1, 0x51($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be44) {
            ctx->pc = 0x24BE64u;
            goto label_24be64;
        }
    }
    ctx->pc = 0x24BE4Cu;
label_24be4c:
    // 0x24be4c: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x24be4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_24be50:
    // 0x24be50: 0xc50c0550  lwc1        $f12, 0x550($t0)
    ctx->pc = 0x24be50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24be54:
    // 0x24be54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24be54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24be58:
    // 0x24be58: 0xc092bde  jal         func_24AF78
label_24be5c:
    if (ctx->pc == 0x24BE5Cu) {
        ctx->pc = 0x24BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE58u;
        // 0x24be5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BE60u;
        goto label_24be60;
    }
    ctx->pc = 0x24BE58u;
    SET_GPR_U32(ctx, 31, 0x24BE60u);
    ctx->pc = 0x24BE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE58u;
    // 0x24be5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AF78u, 0x24BE58u, 0x24BE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE60u;
label_24be60:
    // 0x24be60: 0x93a50051  lbu         $a1, 0x51($sp)
    ctx->pc = 0x24be60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
label_24be64:
    // 0x24be64: 0xc092caa  jal         func_24B2A8
label_24be68:
    if (ctx->pc == 0x24BE68u) {
        ctx->pc = 0x24BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE64u;
        // 0x24be68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BE6Cu;
        goto label_24be6c;
    }
    ctx->pc = 0x24BE64u;
    SET_GPR_U32(ctx, 31, 0x24BE6Cu);
    ctx->pc = 0x24BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE64u;
    // 0x24be68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B2A8u, 0x24BE64u, 0x24BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE6Cu;
label_24be6c:
    // 0x24be6c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x24be6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_24be70:
    // 0x24be70: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x24be70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_24be74:
    // 0x24be74: 0x25290530  addiu       $t1, $t1, 0x530
    ctx->pc = 0x24be74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1328));
label_24be78:
    // 0x24be78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24be78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24be7c:
    // 0x24be7c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x24be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_24be80:
    // 0x24be80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24be84:
    // 0x24be84: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
label_24be88:
    if (ctx->pc == 0x24BE88u) {
        ctx->pc = 0x24BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE84u;
        // 0x24be88: 0xae17066c  sw          $s7, 0x66C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BE8Cu;
        goto label_24be8c;
    }
    ctx->pc = 0x24BE84u;
    {
        const bool branch_taken_0x24be84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24be84) {
            ctx->pc = 0x24BE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BE84u;
            // 0x24be88: 0xae17066c  sw          $s7, 0x66C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BECCu;
            goto label_24becc;
        }
    }
    ctx->pc = 0x24BE8Cu;
label_24be8c:
    // 0x24be8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24be90:
    // 0x24be90: 0x93a50051  lbu         $a1, 0x51($sp)
    ctx->pc = 0x24be90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
label_24be94:
    // 0x24be94: 0xc44d0560  lwc1        $f13, 0x560($v0)
    ctx->pc = 0x24be94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_24be98:
    // 0x24be98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24be98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24be9c:
    // 0x24be9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24be9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24bea0:
    // 0x24bea0: 0xc09288c  jal         func_24A230
label_24bea4:
    if (ctx->pc == 0x24BEA4u) {
        ctx->pc = 0x24BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEA0u;
        // 0x24bea4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BEA8u;
        goto label_24bea8;
    }
    ctx->pc = 0x24BEA0u;
    SET_GPR_U32(ctx, 31, 0x24BEA8u);
    ctx->pc = 0x24BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BEA0u;
    // 0x24bea4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A230u, 0x24BEA0u, 0x24BEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BEA8u;
label_24bea8:
    // 0x24bea8: 0x10000008  b           . + 4 + (0x8 << 2)
label_24beac:
    if (ctx->pc == 0x24BEACu) {
        ctx->pc = 0x24BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEA8u;
        // 0x24beac: 0xae17066c  sw          $s7, 0x66C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BEB0u;
        goto label_24beb0;
    }
    ctx->pc = 0x24BEA8u;
    {
        const bool branch_taken_0x24bea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEA8u;
        // 0x24beac: 0xae17066c  sw          $s7, 0x66C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bea8) {
            ctx->pc = 0x24BECCu;
            goto label_24becc;
        }
    }
    ctx->pc = 0x24BEB0u;
label_24beb0:
    // 0x24beb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24beb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24beb4:
    // 0x24beb4: 0xc6ac0554  lwc1        $f12, 0x554($s5)
    ctx->pc = 0x24beb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24beb8:
    // 0x24beb8: 0xc092bde  jal         func_24AF78
label_24bebc:
    if (ctx->pc == 0x24BEBCu) {
        ctx->pc = 0x24BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEB8u;
        // 0x24bebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BEC0u;
        goto label_24bec0;
    }
    ctx->pc = 0x24BEB8u;
    SET_GPR_U32(ctx, 31, 0x24BEC0u);
    ctx->pc = 0x24BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BEB8u;
    // 0x24bebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AF78u, 0x24BEB8u, 0x24BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BEC0u;
label_24bec0:
    // 0x24bec0: 0x10000002  b           . + 4 + (0x2 << 2)
label_24bec4:
    if (ctx->pc == 0x24BEC4u) {
        ctx->pc = 0x24BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEC0u;
        // 0x24bec4: 0xae17066c  sw          $s7, 0x66C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BEC8u;
        goto label_24bec8;
    }
    ctx->pc = 0x24BEC0u;
    {
        const bool branch_taken_0x24bec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEC0u;
        // 0x24bec4: 0xae17066c  sw          $s7, 0x66C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bec0) {
            ctx->pc = 0x24BECCu;
            goto label_24becc;
        }
    }
    ctx->pc = 0x24BEC8u;
label_24bec8:
    // 0x24bec8: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x24bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
label_24becc:
    // 0x24becc: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x24beccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_24bed0:
    // 0x24bed0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x24bed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_24bed4:
    // 0x24bed4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x24bed4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_24bed8:
    // 0x24bed8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x24bed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24bedc:
    // 0x24bedc: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
label_24bee0:
    if (ctx->pc == 0x24BEE0u) {
        ctx->pc = 0x24BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEDCu;
        // 0x24bee0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BEE4u;
        goto label_24bee4;
    }
    ctx->pc = 0x24BEDCu;
    {
        const bool branch_taken_0x24bedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEDCu;
        // 0x24bee0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bedc) {
            ctx->pc = 0x24BCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24bcc0;
        }
    }
    ctx->pc = 0x24BEE4u;
label_24bee4:
    // 0x24bee4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24bee8:
    // 0x24bee8: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x24bee8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
label_24beec:
    // 0x24beec: 0xac600530  sw          $zero, 0x530($v1)
    ctx->pc = 0x24beecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1328), GPR_U32(ctx, 0));
label_24bef0:
    // 0x24bef0: 0x24620530  addiu       $v0, $v1, 0x530
    ctx->pc = 0x24bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1328));
label_24bef4:
    // 0x24bef4: 0x250472d8  addiu       $a0, $t0, 0x72D8
    ctx->pc = 0x24bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 29400));
label_24bef8:
    // 0x24bef8: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x24bef8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_24befc:
    // 0x24befc: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x24befcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24bf00:
    // 0x24bf00: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x24bf00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_24bf04:
    // 0x24bf04: 0xfd0372d8  sd          $v1, 0x72D8($t0)
    ctx->pc = 0x24bf04u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 29400), GPR_U64(ctx, 3));
label_24bf08:
    // 0x24bf08: 0x8fa80054  lw          $t0, 0x54($sp)
    ctx->pc = 0x24bf08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_24bf0c:
    // 0x24bf0c: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x24bf0cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24bf10:
    // 0x24bf10: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x24bf10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24bf14:
    // 0x24bf14: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x24bf14u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_24bf18:
    // 0x24bf18: 0xdfa70020  ld          $a3, 0x20($sp)
    ctx->pc = 0x24bf18u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24bf1c:
    // 0x24bf1c: 0xdfa20028  ld          $v0, 0x28($sp)
    ctx->pc = 0x24bf1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_24bf20:
    // 0x24bf20: 0xad28055c  sw          $t0, 0x55C($t1)
    ctx->pc = 0x24bf20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1372), GPR_U32(ctx, 8));
label_24bf24:
    // 0x24bf24: 0xfc820028  sd          $v0, 0x28($a0)
    ctx->pc = 0x24bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 2));
label_24bf28:
    // 0x24bf28: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x24bf28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_24bf2c:
    // 0x24bf2c: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x24bf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
label_24bf30:
    // 0x24bf30: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x24bf30u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
label_24bf34:
    // 0x24bf34: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x24bf34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
label_24bf38:
    // 0x24bf38: 0xfc870020  sd          $a3, 0x20($a0)
    ctx->pc = 0x24bf38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 7));
label_24bf3c:
    // 0x24bf3c: 0xad200560  sw          $zero, 0x560($t1)
    ctx->pc = 0x24bf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1376), GPR_U32(ctx, 0));
label_24bf40:
    // 0x24bf40: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x24bf40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_24bf44:
    // 0x24bf44: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x24bf44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_24bf48:
    // 0x24bf48: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x24bf48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_24bf4c:
    // 0x24bf4c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x24bf4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_24bf50:
    // 0x24bf50: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x24bf50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_24bf54:
    // 0x24bf54: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x24bf54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_24bf58:
    // 0x24bf58: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x24bf58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24bf5c:
    // 0x24bf5c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x24bf5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24bf60:
    // 0x24bf60: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x24bf60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24bf64:
    // 0x24bf64: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24bf64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24bf68:
    // 0x24bf68: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x24bf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_24bf6c:
    // 0x24bf6c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x24bf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_24bf70:
    // 0x24bf70: 0x3e00008  jr          $ra
label_24bf74:
    if (ctx->pc == 0x24BF74u) {
        ctx->pc = 0x24BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF70u;
        // 0x24bf74: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BF78u;
        goto label_fallthrough_0x24bf70;
    }
    ctx->pc = 0x24BF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF70u;
        // 0x24bf74: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24bf70:
    ctx->pc = 0x24BF78u;
}
