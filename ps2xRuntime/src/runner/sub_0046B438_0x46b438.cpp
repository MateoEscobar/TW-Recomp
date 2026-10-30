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

// Function: sub_0046B438
// Address: 0x46b438 - 0x46be78
void sub_0046B438_0x46b438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B438_0x46b438");
#endif

    switch (ctx->pc) {
        case 0x46b438u: goto label_46b438;
        case 0x46b43cu: goto label_46b43c;
        case 0x46b440u: goto label_46b440;
        case 0x46b444u: goto label_46b444;
        case 0x46b448u: goto label_46b448;
        case 0x46b44cu: goto label_46b44c;
        case 0x46b450u: goto label_46b450;
        case 0x46b454u: goto label_46b454;
        case 0x46b458u: goto label_46b458;
        case 0x46b45cu: goto label_46b45c;
        case 0x46b460u: goto label_46b460;
        case 0x46b464u: goto label_46b464;
        case 0x46b468u: goto label_46b468;
        case 0x46b46cu: goto label_46b46c;
        case 0x46b470u: goto label_46b470;
        case 0x46b474u: goto label_46b474;
        case 0x46b478u: goto label_46b478;
        case 0x46b47cu: goto label_46b47c;
        case 0x46b480u: goto label_46b480;
        case 0x46b484u: goto label_46b484;
        case 0x46b488u: goto label_46b488;
        case 0x46b48cu: goto label_46b48c;
        case 0x46b490u: goto label_46b490;
        case 0x46b494u: goto label_46b494;
        case 0x46b498u: goto label_46b498;
        case 0x46b49cu: goto label_46b49c;
        case 0x46b4a0u: goto label_46b4a0;
        case 0x46b4a4u: goto label_46b4a4;
        case 0x46b4a8u: goto label_46b4a8;
        case 0x46b4acu: goto label_46b4ac;
        case 0x46b4b0u: goto label_46b4b0;
        case 0x46b4b4u: goto label_46b4b4;
        case 0x46b4b8u: goto label_46b4b8;
        case 0x46b4bcu: goto label_46b4bc;
        case 0x46b4c0u: goto label_46b4c0;
        case 0x46b4c4u: goto label_46b4c4;
        case 0x46b4c8u: goto label_46b4c8;
        case 0x46b4ccu: goto label_46b4cc;
        case 0x46b4d0u: goto label_46b4d0;
        case 0x46b4d4u: goto label_46b4d4;
        case 0x46b4d8u: goto label_46b4d8;
        case 0x46b4dcu: goto label_46b4dc;
        case 0x46b4e0u: goto label_46b4e0;
        case 0x46b4e4u: goto label_46b4e4;
        case 0x46b4e8u: goto label_46b4e8;
        case 0x46b4ecu: goto label_46b4ec;
        case 0x46b4f0u: goto label_46b4f0;
        case 0x46b4f4u: goto label_46b4f4;
        case 0x46b4f8u: goto label_46b4f8;
        case 0x46b4fcu: goto label_46b4fc;
        case 0x46b500u: goto label_46b500;
        case 0x46b504u: goto label_46b504;
        case 0x46b508u: goto label_46b508;
        case 0x46b50cu: goto label_46b50c;
        case 0x46b510u: goto label_46b510;
        case 0x46b514u: goto label_46b514;
        case 0x46b518u: goto label_46b518;
        case 0x46b51cu: goto label_46b51c;
        case 0x46b520u: goto label_46b520;
        case 0x46b524u: goto label_46b524;
        case 0x46b528u: goto label_46b528;
        case 0x46b52cu: goto label_46b52c;
        case 0x46b530u: goto label_46b530;
        case 0x46b534u: goto label_46b534;
        case 0x46b538u: goto label_46b538;
        case 0x46b53cu: goto label_46b53c;
        case 0x46b540u: goto label_46b540;
        case 0x46b544u: goto label_46b544;
        case 0x46b548u: goto label_46b548;
        case 0x46b54cu: goto label_46b54c;
        case 0x46b550u: goto label_46b550;
        case 0x46b554u: goto label_46b554;
        case 0x46b558u: goto label_46b558;
        case 0x46b55cu: goto label_46b55c;
        case 0x46b560u: goto label_46b560;
        case 0x46b564u: goto label_46b564;
        case 0x46b568u: goto label_46b568;
        case 0x46b56cu: goto label_46b56c;
        case 0x46b570u: goto label_46b570;
        case 0x46b574u: goto label_46b574;
        case 0x46b578u: goto label_46b578;
        case 0x46b57cu: goto label_46b57c;
        case 0x46b580u: goto label_46b580;
        case 0x46b584u: goto label_46b584;
        case 0x46b588u: goto label_46b588;
        case 0x46b58cu: goto label_46b58c;
        case 0x46b590u: goto label_46b590;
        case 0x46b594u: goto label_46b594;
        case 0x46b598u: goto label_46b598;
        case 0x46b59cu: goto label_46b59c;
        case 0x46b5a0u: goto label_46b5a0;
        case 0x46b5a4u: goto label_46b5a4;
        case 0x46b5a8u: goto label_46b5a8;
        case 0x46b5acu: goto label_46b5ac;
        case 0x46b5b0u: goto label_46b5b0;
        case 0x46b5b4u: goto label_46b5b4;
        case 0x46b5b8u: goto label_46b5b8;
        case 0x46b5bcu: goto label_46b5bc;
        case 0x46b5c0u: goto label_46b5c0;
        case 0x46b5c4u: goto label_46b5c4;
        case 0x46b5c8u: goto label_46b5c8;
        case 0x46b5ccu: goto label_46b5cc;
        case 0x46b5d0u: goto label_46b5d0;
        case 0x46b5d4u: goto label_46b5d4;
        case 0x46b5d8u: goto label_46b5d8;
        case 0x46b5dcu: goto label_46b5dc;
        case 0x46b5e0u: goto label_46b5e0;
        case 0x46b5e4u: goto label_46b5e4;
        case 0x46b5e8u: goto label_46b5e8;
        case 0x46b5ecu: goto label_46b5ec;
        case 0x46b5f0u: goto label_46b5f0;
        case 0x46b5f4u: goto label_46b5f4;
        case 0x46b5f8u: goto label_46b5f8;
        case 0x46b5fcu: goto label_46b5fc;
        case 0x46b600u: goto label_46b600;
        case 0x46b604u: goto label_46b604;
        case 0x46b608u: goto label_46b608;
        case 0x46b60cu: goto label_46b60c;
        case 0x46b610u: goto label_46b610;
        case 0x46b614u: goto label_46b614;
        case 0x46b618u: goto label_46b618;
        case 0x46b61cu: goto label_46b61c;
        case 0x46b620u: goto label_46b620;
        case 0x46b624u: goto label_46b624;
        case 0x46b628u: goto label_46b628;
        case 0x46b62cu: goto label_46b62c;
        case 0x46b630u: goto label_46b630;
        case 0x46b634u: goto label_46b634;
        case 0x46b638u: goto label_46b638;
        case 0x46b63cu: goto label_46b63c;
        case 0x46b640u: goto label_46b640;
        case 0x46b644u: goto label_46b644;
        case 0x46b648u: goto label_46b648;
        case 0x46b64cu: goto label_46b64c;
        case 0x46b650u: goto label_46b650;
        case 0x46b654u: goto label_46b654;
        case 0x46b658u: goto label_46b658;
        case 0x46b65cu: goto label_46b65c;
        case 0x46b660u: goto label_46b660;
        case 0x46b664u: goto label_46b664;
        case 0x46b668u: goto label_46b668;
        case 0x46b66cu: goto label_46b66c;
        case 0x46b670u: goto label_46b670;
        case 0x46b674u: goto label_46b674;
        case 0x46b678u: goto label_46b678;
        case 0x46b67cu: goto label_46b67c;
        case 0x46b680u: goto label_46b680;
        case 0x46b684u: goto label_46b684;
        case 0x46b688u: goto label_46b688;
        case 0x46b68cu: goto label_46b68c;
        case 0x46b690u: goto label_46b690;
        case 0x46b694u: goto label_46b694;
        case 0x46b698u: goto label_46b698;
        case 0x46b69cu: goto label_46b69c;
        case 0x46b6a0u: goto label_46b6a0;
        case 0x46b6a4u: goto label_46b6a4;
        case 0x46b6a8u: goto label_46b6a8;
        case 0x46b6acu: goto label_46b6ac;
        case 0x46b6b0u: goto label_46b6b0;
        case 0x46b6b4u: goto label_46b6b4;
        case 0x46b6b8u: goto label_46b6b8;
        case 0x46b6bcu: goto label_46b6bc;
        case 0x46b6c0u: goto label_46b6c0;
        case 0x46b6c4u: goto label_46b6c4;
        case 0x46b6c8u: goto label_46b6c8;
        case 0x46b6ccu: goto label_46b6cc;
        case 0x46b6d0u: goto label_46b6d0;
        case 0x46b6d4u: goto label_46b6d4;
        case 0x46b6d8u: goto label_46b6d8;
        case 0x46b6dcu: goto label_46b6dc;
        case 0x46b6e0u: goto label_46b6e0;
        case 0x46b6e4u: goto label_46b6e4;
        case 0x46b6e8u: goto label_46b6e8;
        case 0x46b6ecu: goto label_46b6ec;
        case 0x46b6f0u: goto label_46b6f0;
        case 0x46b6f4u: goto label_46b6f4;
        case 0x46b6f8u: goto label_46b6f8;
        case 0x46b6fcu: goto label_46b6fc;
        case 0x46b700u: goto label_46b700;
        case 0x46b704u: goto label_46b704;
        case 0x46b708u: goto label_46b708;
        case 0x46b70cu: goto label_46b70c;
        case 0x46b710u: goto label_46b710;
        case 0x46b714u: goto label_46b714;
        case 0x46b718u: goto label_46b718;
        case 0x46b71cu: goto label_46b71c;
        case 0x46b720u: goto label_46b720;
        case 0x46b724u: goto label_46b724;
        case 0x46b728u: goto label_46b728;
        case 0x46b72cu: goto label_46b72c;
        case 0x46b730u: goto label_46b730;
        case 0x46b734u: goto label_46b734;
        case 0x46b738u: goto label_46b738;
        case 0x46b73cu: goto label_46b73c;
        case 0x46b740u: goto label_46b740;
        case 0x46b744u: goto label_46b744;
        case 0x46b748u: goto label_46b748;
        case 0x46b74cu: goto label_46b74c;
        case 0x46b750u: goto label_46b750;
        case 0x46b754u: goto label_46b754;
        case 0x46b758u: goto label_46b758;
        case 0x46b75cu: goto label_46b75c;
        case 0x46b760u: goto label_46b760;
        case 0x46b764u: goto label_46b764;
        case 0x46b768u: goto label_46b768;
        case 0x46b76cu: goto label_46b76c;
        case 0x46b770u: goto label_46b770;
        case 0x46b774u: goto label_46b774;
        case 0x46b778u: goto label_46b778;
        case 0x46b77cu: goto label_46b77c;
        case 0x46b780u: goto label_46b780;
        case 0x46b784u: goto label_46b784;
        case 0x46b788u: goto label_46b788;
        case 0x46b78cu: goto label_46b78c;
        case 0x46b790u: goto label_46b790;
        case 0x46b794u: goto label_46b794;
        case 0x46b798u: goto label_46b798;
        case 0x46b79cu: goto label_46b79c;
        case 0x46b7a0u: goto label_46b7a0;
        case 0x46b7a4u: goto label_46b7a4;
        case 0x46b7a8u: goto label_46b7a8;
        case 0x46b7acu: goto label_46b7ac;
        case 0x46b7b0u: goto label_46b7b0;
        case 0x46b7b4u: goto label_46b7b4;
        case 0x46b7b8u: goto label_46b7b8;
        case 0x46b7bcu: goto label_46b7bc;
        case 0x46b7c0u: goto label_46b7c0;
        case 0x46b7c4u: goto label_46b7c4;
        case 0x46b7c8u: goto label_46b7c8;
        case 0x46b7ccu: goto label_46b7cc;
        case 0x46b7d0u: goto label_46b7d0;
        case 0x46b7d4u: goto label_46b7d4;
        case 0x46b7d8u: goto label_46b7d8;
        case 0x46b7dcu: goto label_46b7dc;
        case 0x46b7e0u: goto label_46b7e0;
        case 0x46b7e4u: goto label_46b7e4;
        case 0x46b7e8u: goto label_46b7e8;
        case 0x46b7ecu: goto label_46b7ec;
        case 0x46b7f0u: goto label_46b7f0;
        case 0x46b7f4u: goto label_46b7f4;
        case 0x46b7f8u: goto label_46b7f8;
        case 0x46b7fcu: goto label_46b7fc;
        case 0x46b800u: goto label_46b800;
        case 0x46b804u: goto label_46b804;
        case 0x46b808u: goto label_46b808;
        case 0x46b80cu: goto label_46b80c;
        case 0x46b810u: goto label_46b810;
        case 0x46b814u: goto label_46b814;
        case 0x46b818u: goto label_46b818;
        case 0x46b81cu: goto label_46b81c;
        case 0x46b820u: goto label_46b820;
        case 0x46b824u: goto label_46b824;
        case 0x46b828u: goto label_46b828;
        case 0x46b82cu: goto label_46b82c;
        case 0x46b830u: goto label_46b830;
        case 0x46b834u: goto label_46b834;
        case 0x46b838u: goto label_46b838;
        case 0x46b83cu: goto label_46b83c;
        case 0x46b840u: goto label_46b840;
        case 0x46b844u: goto label_46b844;
        case 0x46b848u: goto label_46b848;
        case 0x46b84cu: goto label_46b84c;
        case 0x46b850u: goto label_46b850;
        case 0x46b854u: goto label_46b854;
        case 0x46b858u: goto label_46b858;
        case 0x46b85cu: goto label_46b85c;
        case 0x46b860u: goto label_46b860;
        case 0x46b864u: goto label_46b864;
        case 0x46b868u: goto label_46b868;
        case 0x46b86cu: goto label_46b86c;
        case 0x46b870u: goto label_46b870;
        case 0x46b874u: goto label_46b874;
        case 0x46b878u: goto label_46b878;
        case 0x46b87cu: goto label_46b87c;
        case 0x46b880u: goto label_46b880;
        case 0x46b884u: goto label_46b884;
        case 0x46b888u: goto label_46b888;
        case 0x46b88cu: goto label_46b88c;
        case 0x46b890u: goto label_46b890;
        case 0x46b894u: goto label_46b894;
        case 0x46b898u: goto label_46b898;
        case 0x46b89cu: goto label_46b89c;
        case 0x46b8a0u: goto label_46b8a0;
        case 0x46b8a4u: goto label_46b8a4;
        case 0x46b8a8u: goto label_46b8a8;
        case 0x46b8acu: goto label_46b8ac;
        case 0x46b8b0u: goto label_46b8b0;
        case 0x46b8b4u: goto label_46b8b4;
        case 0x46b8b8u: goto label_46b8b8;
        case 0x46b8bcu: goto label_46b8bc;
        case 0x46b8c0u: goto label_46b8c0;
        case 0x46b8c4u: goto label_46b8c4;
        case 0x46b8c8u: goto label_46b8c8;
        case 0x46b8ccu: goto label_46b8cc;
        case 0x46b8d0u: goto label_46b8d0;
        case 0x46b8d4u: goto label_46b8d4;
        case 0x46b8d8u: goto label_46b8d8;
        case 0x46b8dcu: goto label_46b8dc;
        case 0x46b8e0u: goto label_46b8e0;
        case 0x46b8e4u: goto label_46b8e4;
        case 0x46b8e8u: goto label_46b8e8;
        case 0x46b8ecu: goto label_46b8ec;
        case 0x46b8f0u: goto label_46b8f0;
        case 0x46b8f4u: goto label_46b8f4;
        case 0x46b8f8u: goto label_46b8f8;
        case 0x46b8fcu: goto label_46b8fc;
        case 0x46b900u: goto label_46b900;
        case 0x46b904u: goto label_46b904;
        case 0x46b908u: goto label_46b908;
        case 0x46b90cu: goto label_46b90c;
        case 0x46b910u: goto label_46b910;
        case 0x46b914u: goto label_46b914;
        case 0x46b918u: goto label_46b918;
        case 0x46b91cu: goto label_46b91c;
        case 0x46b920u: goto label_46b920;
        case 0x46b924u: goto label_46b924;
        case 0x46b928u: goto label_46b928;
        case 0x46b92cu: goto label_46b92c;
        case 0x46b930u: goto label_46b930;
        case 0x46b934u: goto label_46b934;
        case 0x46b938u: goto label_46b938;
        case 0x46b93cu: goto label_46b93c;
        case 0x46b940u: goto label_46b940;
        case 0x46b944u: goto label_46b944;
        case 0x46b948u: goto label_46b948;
        case 0x46b94cu: goto label_46b94c;
        case 0x46b950u: goto label_46b950;
        case 0x46b954u: goto label_46b954;
        case 0x46b958u: goto label_46b958;
        case 0x46b95cu: goto label_46b95c;
        case 0x46b960u: goto label_46b960;
        case 0x46b964u: goto label_46b964;
        case 0x46b968u: goto label_46b968;
        case 0x46b96cu: goto label_46b96c;
        case 0x46b970u: goto label_46b970;
        case 0x46b974u: goto label_46b974;
        case 0x46b978u: goto label_46b978;
        case 0x46b97cu: goto label_46b97c;
        case 0x46b980u: goto label_46b980;
        case 0x46b984u: goto label_46b984;
        case 0x46b988u: goto label_46b988;
        case 0x46b98cu: goto label_46b98c;
        case 0x46b990u: goto label_46b990;
        case 0x46b994u: goto label_46b994;
        case 0x46b998u: goto label_46b998;
        case 0x46b99cu: goto label_46b99c;
        case 0x46b9a0u: goto label_46b9a0;
        case 0x46b9a4u: goto label_46b9a4;
        case 0x46b9a8u: goto label_46b9a8;
        case 0x46b9acu: goto label_46b9ac;
        case 0x46b9b0u: goto label_46b9b0;
        case 0x46b9b4u: goto label_46b9b4;
        case 0x46b9b8u: goto label_46b9b8;
        case 0x46b9bcu: goto label_46b9bc;
        case 0x46b9c0u: goto label_46b9c0;
        case 0x46b9c4u: goto label_46b9c4;
        case 0x46b9c8u: goto label_46b9c8;
        case 0x46b9ccu: goto label_46b9cc;
        case 0x46b9d0u: goto label_46b9d0;
        case 0x46b9d4u: goto label_46b9d4;
        case 0x46b9d8u: goto label_46b9d8;
        case 0x46b9dcu: goto label_46b9dc;
        case 0x46b9e0u: goto label_46b9e0;
        case 0x46b9e4u: goto label_46b9e4;
        case 0x46b9e8u: goto label_46b9e8;
        case 0x46b9ecu: goto label_46b9ec;
        case 0x46b9f0u: goto label_46b9f0;
        case 0x46b9f4u: goto label_46b9f4;
        case 0x46b9f8u: goto label_46b9f8;
        case 0x46b9fcu: goto label_46b9fc;
        case 0x46ba00u: goto label_46ba00;
        case 0x46ba04u: goto label_46ba04;
        case 0x46ba08u: goto label_46ba08;
        case 0x46ba0cu: goto label_46ba0c;
        case 0x46ba10u: goto label_46ba10;
        case 0x46ba14u: goto label_46ba14;
        case 0x46ba18u: goto label_46ba18;
        case 0x46ba1cu: goto label_46ba1c;
        case 0x46ba20u: goto label_46ba20;
        case 0x46ba24u: goto label_46ba24;
        case 0x46ba28u: goto label_46ba28;
        case 0x46ba2cu: goto label_46ba2c;
        case 0x46ba30u: goto label_46ba30;
        case 0x46ba34u: goto label_46ba34;
        case 0x46ba38u: goto label_46ba38;
        case 0x46ba3cu: goto label_46ba3c;
        case 0x46ba40u: goto label_46ba40;
        case 0x46ba44u: goto label_46ba44;
        case 0x46ba48u: goto label_46ba48;
        case 0x46ba4cu: goto label_46ba4c;
        case 0x46ba50u: goto label_46ba50;
        case 0x46ba54u: goto label_46ba54;
        case 0x46ba58u: goto label_46ba58;
        case 0x46ba5cu: goto label_46ba5c;
        case 0x46ba60u: goto label_46ba60;
        case 0x46ba64u: goto label_46ba64;
        case 0x46ba68u: goto label_46ba68;
        case 0x46ba6cu: goto label_46ba6c;
        case 0x46ba70u: goto label_46ba70;
        case 0x46ba74u: goto label_46ba74;
        case 0x46ba78u: goto label_46ba78;
        case 0x46ba7cu: goto label_46ba7c;
        case 0x46ba80u: goto label_46ba80;
        case 0x46ba84u: goto label_46ba84;
        case 0x46ba88u: goto label_46ba88;
        case 0x46ba8cu: goto label_46ba8c;
        case 0x46ba90u: goto label_46ba90;
        case 0x46ba94u: goto label_46ba94;
        case 0x46ba98u: goto label_46ba98;
        case 0x46ba9cu: goto label_46ba9c;
        case 0x46baa0u: goto label_46baa0;
        case 0x46baa4u: goto label_46baa4;
        case 0x46baa8u: goto label_46baa8;
        case 0x46baacu: goto label_46baac;
        case 0x46bab0u: goto label_46bab0;
        case 0x46bab4u: goto label_46bab4;
        case 0x46bab8u: goto label_46bab8;
        case 0x46babcu: goto label_46babc;
        case 0x46bac0u: goto label_46bac0;
        case 0x46bac4u: goto label_46bac4;
        case 0x46bac8u: goto label_46bac8;
        case 0x46baccu: goto label_46bacc;
        case 0x46bad0u: goto label_46bad0;
        case 0x46bad4u: goto label_46bad4;
        case 0x46bad8u: goto label_46bad8;
        case 0x46badcu: goto label_46badc;
        case 0x46bae0u: goto label_46bae0;
        case 0x46bae4u: goto label_46bae4;
        case 0x46bae8u: goto label_46bae8;
        case 0x46baecu: goto label_46baec;
        case 0x46baf0u: goto label_46baf0;
        case 0x46baf4u: goto label_46baf4;
        case 0x46baf8u: goto label_46baf8;
        case 0x46bafcu: goto label_46bafc;
        case 0x46bb00u: goto label_46bb00;
        case 0x46bb04u: goto label_46bb04;
        case 0x46bb08u: goto label_46bb08;
        case 0x46bb0cu: goto label_46bb0c;
        case 0x46bb10u: goto label_46bb10;
        case 0x46bb14u: goto label_46bb14;
        case 0x46bb18u: goto label_46bb18;
        case 0x46bb1cu: goto label_46bb1c;
        case 0x46bb20u: goto label_46bb20;
        case 0x46bb24u: goto label_46bb24;
        case 0x46bb28u: goto label_46bb28;
        case 0x46bb2cu: goto label_46bb2c;
        case 0x46bb30u: goto label_46bb30;
        case 0x46bb34u: goto label_46bb34;
        case 0x46bb38u: goto label_46bb38;
        case 0x46bb3cu: goto label_46bb3c;
        case 0x46bb40u: goto label_46bb40;
        case 0x46bb44u: goto label_46bb44;
        case 0x46bb48u: goto label_46bb48;
        case 0x46bb4cu: goto label_46bb4c;
        case 0x46bb50u: goto label_46bb50;
        case 0x46bb54u: goto label_46bb54;
        case 0x46bb58u: goto label_46bb58;
        case 0x46bb5cu: goto label_46bb5c;
        case 0x46bb60u: goto label_46bb60;
        case 0x46bb64u: goto label_46bb64;
        case 0x46bb68u: goto label_46bb68;
        case 0x46bb6cu: goto label_46bb6c;
        case 0x46bb70u: goto label_46bb70;
        case 0x46bb74u: goto label_46bb74;
        case 0x46bb78u: goto label_46bb78;
        case 0x46bb7cu: goto label_46bb7c;
        case 0x46bb80u: goto label_46bb80;
        case 0x46bb84u: goto label_46bb84;
        case 0x46bb88u: goto label_46bb88;
        case 0x46bb8cu: goto label_46bb8c;
        case 0x46bb90u: goto label_46bb90;
        case 0x46bb94u: goto label_46bb94;
        case 0x46bb98u: goto label_46bb98;
        case 0x46bb9cu: goto label_46bb9c;
        case 0x46bba0u: goto label_46bba0;
        case 0x46bba4u: goto label_46bba4;
        case 0x46bba8u: goto label_46bba8;
        case 0x46bbacu: goto label_46bbac;
        case 0x46bbb0u: goto label_46bbb0;
        case 0x46bbb4u: goto label_46bbb4;
        case 0x46bbb8u: goto label_46bbb8;
        case 0x46bbbcu: goto label_46bbbc;
        case 0x46bbc0u: goto label_46bbc0;
        case 0x46bbc4u: goto label_46bbc4;
        case 0x46bbc8u: goto label_46bbc8;
        case 0x46bbccu: goto label_46bbcc;
        case 0x46bbd0u: goto label_46bbd0;
        case 0x46bbd4u: goto label_46bbd4;
        case 0x46bbd8u: goto label_46bbd8;
        case 0x46bbdcu: goto label_46bbdc;
        case 0x46bbe0u: goto label_46bbe0;
        case 0x46bbe4u: goto label_46bbe4;
        case 0x46bbe8u: goto label_46bbe8;
        case 0x46bbecu: goto label_46bbec;
        case 0x46bbf0u: goto label_46bbf0;
        case 0x46bbf4u: goto label_46bbf4;
        case 0x46bbf8u: goto label_46bbf8;
        case 0x46bbfcu: goto label_46bbfc;
        case 0x46bc00u: goto label_46bc00;
        case 0x46bc04u: goto label_46bc04;
        case 0x46bc08u: goto label_46bc08;
        case 0x46bc0cu: goto label_46bc0c;
        case 0x46bc10u: goto label_46bc10;
        case 0x46bc14u: goto label_46bc14;
        case 0x46bc18u: goto label_46bc18;
        case 0x46bc1cu: goto label_46bc1c;
        case 0x46bc20u: goto label_46bc20;
        case 0x46bc24u: goto label_46bc24;
        case 0x46bc28u: goto label_46bc28;
        case 0x46bc2cu: goto label_46bc2c;
        case 0x46bc30u: goto label_46bc30;
        case 0x46bc34u: goto label_46bc34;
        case 0x46bc38u: goto label_46bc38;
        case 0x46bc3cu: goto label_46bc3c;
        case 0x46bc40u: goto label_46bc40;
        case 0x46bc44u: goto label_46bc44;
        case 0x46bc48u: goto label_46bc48;
        case 0x46bc4cu: goto label_46bc4c;
        case 0x46bc50u: goto label_46bc50;
        case 0x46bc54u: goto label_46bc54;
        case 0x46bc58u: goto label_46bc58;
        case 0x46bc5cu: goto label_46bc5c;
        case 0x46bc60u: goto label_46bc60;
        case 0x46bc64u: goto label_46bc64;
        case 0x46bc68u: goto label_46bc68;
        case 0x46bc6cu: goto label_46bc6c;
        case 0x46bc70u: goto label_46bc70;
        case 0x46bc74u: goto label_46bc74;
        case 0x46bc78u: goto label_46bc78;
        case 0x46bc7cu: goto label_46bc7c;
        case 0x46bc80u: goto label_46bc80;
        case 0x46bc84u: goto label_46bc84;
        case 0x46bc88u: goto label_46bc88;
        case 0x46bc8cu: goto label_46bc8c;
        case 0x46bc90u: goto label_46bc90;
        case 0x46bc94u: goto label_46bc94;
        case 0x46bc98u: goto label_46bc98;
        case 0x46bc9cu: goto label_46bc9c;
        case 0x46bca0u: goto label_46bca0;
        case 0x46bca4u: goto label_46bca4;
        case 0x46bca8u: goto label_46bca8;
        case 0x46bcacu: goto label_46bcac;
        case 0x46bcb0u: goto label_46bcb0;
        case 0x46bcb4u: goto label_46bcb4;
        case 0x46bcb8u: goto label_46bcb8;
        case 0x46bcbcu: goto label_46bcbc;
        case 0x46bcc0u: goto label_46bcc0;
        case 0x46bcc4u: goto label_46bcc4;
        case 0x46bcc8u: goto label_46bcc8;
        case 0x46bcccu: goto label_46bccc;
        case 0x46bcd0u: goto label_46bcd0;
        case 0x46bcd4u: goto label_46bcd4;
        case 0x46bcd8u: goto label_46bcd8;
        case 0x46bcdcu: goto label_46bcdc;
        case 0x46bce0u: goto label_46bce0;
        case 0x46bce4u: goto label_46bce4;
        case 0x46bce8u: goto label_46bce8;
        case 0x46bcecu: goto label_46bcec;
        case 0x46bcf0u: goto label_46bcf0;
        case 0x46bcf4u: goto label_46bcf4;
        case 0x46bcf8u: goto label_46bcf8;
        case 0x46bcfcu: goto label_46bcfc;
        case 0x46bd00u: goto label_46bd00;
        case 0x46bd04u: goto label_46bd04;
        case 0x46bd08u: goto label_46bd08;
        case 0x46bd0cu: goto label_46bd0c;
        case 0x46bd10u: goto label_46bd10;
        case 0x46bd14u: goto label_46bd14;
        case 0x46bd18u: goto label_46bd18;
        case 0x46bd1cu: goto label_46bd1c;
        case 0x46bd20u: goto label_46bd20;
        case 0x46bd24u: goto label_46bd24;
        case 0x46bd28u: goto label_46bd28;
        case 0x46bd2cu: goto label_46bd2c;
        case 0x46bd30u: goto label_46bd30;
        case 0x46bd34u: goto label_46bd34;
        case 0x46bd38u: goto label_46bd38;
        case 0x46bd3cu: goto label_46bd3c;
        case 0x46bd40u: goto label_46bd40;
        case 0x46bd44u: goto label_46bd44;
        case 0x46bd48u: goto label_46bd48;
        case 0x46bd4cu: goto label_46bd4c;
        case 0x46bd50u: goto label_46bd50;
        case 0x46bd54u: goto label_46bd54;
        case 0x46bd58u: goto label_46bd58;
        case 0x46bd5cu: goto label_46bd5c;
        case 0x46bd60u: goto label_46bd60;
        case 0x46bd64u: goto label_46bd64;
        case 0x46bd68u: goto label_46bd68;
        case 0x46bd6cu: goto label_46bd6c;
        case 0x46bd70u: goto label_46bd70;
        case 0x46bd74u: goto label_46bd74;
        case 0x46bd78u: goto label_46bd78;
        case 0x46bd7cu: goto label_46bd7c;
        case 0x46bd80u: goto label_46bd80;
        case 0x46bd84u: goto label_46bd84;
        case 0x46bd88u: goto label_46bd88;
        case 0x46bd8cu: goto label_46bd8c;
        case 0x46bd90u: goto label_46bd90;
        case 0x46bd94u: goto label_46bd94;
        case 0x46bd98u: goto label_46bd98;
        case 0x46bd9cu: goto label_46bd9c;
        case 0x46bda0u: goto label_46bda0;
        case 0x46bda4u: goto label_46bda4;
        case 0x46bda8u: goto label_46bda8;
        case 0x46bdacu: goto label_46bdac;
        case 0x46bdb0u: goto label_46bdb0;
        case 0x46bdb4u: goto label_46bdb4;
        case 0x46bdb8u: goto label_46bdb8;
        case 0x46bdbcu: goto label_46bdbc;
        case 0x46bdc0u: goto label_46bdc0;
        case 0x46bdc4u: goto label_46bdc4;
        case 0x46bdc8u: goto label_46bdc8;
        case 0x46bdccu: goto label_46bdcc;
        case 0x46bdd0u: goto label_46bdd0;
        case 0x46bdd4u: goto label_46bdd4;
        case 0x46bdd8u: goto label_46bdd8;
        case 0x46bddcu: goto label_46bddc;
        case 0x46bde0u: goto label_46bde0;
        case 0x46bde4u: goto label_46bde4;
        case 0x46bde8u: goto label_46bde8;
        case 0x46bdecu: goto label_46bdec;
        case 0x46bdf0u: goto label_46bdf0;
        case 0x46bdf4u: goto label_46bdf4;
        case 0x46bdf8u: goto label_46bdf8;
        case 0x46bdfcu: goto label_46bdfc;
        case 0x46be00u: goto label_46be00;
        case 0x46be04u: goto label_46be04;
        case 0x46be08u: goto label_46be08;
        case 0x46be0cu: goto label_46be0c;
        case 0x46be10u: goto label_46be10;
        case 0x46be14u: goto label_46be14;
        case 0x46be18u: goto label_46be18;
        case 0x46be1cu: goto label_46be1c;
        case 0x46be20u: goto label_46be20;
        case 0x46be24u: goto label_46be24;
        case 0x46be28u: goto label_46be28;
        case 0x46be2cu: goto label_46be2c;
        case 0x46be30u: goto label_46be30;
        case 0x46be34u: goto label_46be34;
        case 0x46be38u: goto label_46be38;
        case 0x46be3cu: goto label_46be3c;
        case 0x46be40u: goto label_46be40;
        case 0x46be44u: goto label_46be44;
        case 0x46be48u: goto label_46be48;
        case 0x46be4cu: goto label_46be4c;
        case 0x46be50u: goto label_46be50;
        case 0x46be54u: goto label_46be54;
        case 0x46be58u: goto label_46be58;
        case 0x46be5cu: goto label_46be5c;
        case 0x46be60u: goto label_46be60;
        case 0x46be64u: goto label_46be64;
        case 0x46be68u: goto label_46be68;
        case 0x46be6cu: goto label_46be6c;
        case 0x46be70u: goto label_46be70;
        case 0x46be74u: goto label_46be74;
        default: break;
    }

    ctx->pc = 0x46b438u;

label_46b438:
    // 0x46b438: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x46b438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_46b43c:
    // 0x46b43c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46b43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46b440:
    // 0x46b440: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x46b440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_46b444:
    // 0x46b444: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x46b444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_46b448:
    // 0x46b448: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x46b448u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46b44c:
    // 0x46b44c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x46b44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_46b450:
    // 0x46b450: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x46b450u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_46b454:
    // 0x46b454: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x46b454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_46b458:
    // 0x46b458: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x46b458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_46b45c:
    // 0x46b45c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x46b45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_46b460:
    // 0x46b460: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x46b460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_46b464:
    // 0x46b464: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x46b464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_46b468:
    // 0x46b468: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x46b468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_46b46c:
    // 0x46b46c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x46b46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_46b470:
    // 0x46b470: 0xc11eeae  jal         func_47BAB8
label_46b474:
    if (ctx->pc == 0x46B474u) {
        ctx->pc = 0x46B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B470u;
        // 0x46b474: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B478u;
        goto label_46b478;
    }
    ctx->pc = 0x46B470u;
    SET_GPR_U32(ctx, 31, 0x46B478u);
    ctx->pc = 0x46B474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B470u;
    // 0x46b474: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x46B470u, 0x46B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B478u;
label_46b478:
    // 0x46b478: 0x104001f2  beqz        $v0, . + 4 + (0x1F2 << 2)
label_46b47c:
    if (ctx->pc == 0x46B47Cu) {
        ctx->pc = 0x46B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B478u;
        // 0x46b47c: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B480u;
        goto label_46b480;
    }
    ctx->pc = 0x46B478u;
    {
        const bool branch_taken_0x46b478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B478u;
        // 0x46b47c: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b478) {
            ctx->pc = 0x46BC44u;
            goto label_46bc44;
        }
    }
    ctx->pc = 0x46B480u;
label_46b480:
    // 0x46b480: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x46b480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_46b484:
    // 0x46b484: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x46b484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_46b488:
    // 0x46b488: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x46b488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46b48c:
    // 0x46b48c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x46b48cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_46b490:
    // 0x46b490: 0x106001e4  beqz        $v1, . + 4 + (0x1E4 << 2)
label_46b494:
    if (ctx->pc == 0x46B494u) {
        ctx->pc = 0x46B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B490u;
        // 0x46b494: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B498u;
        goto label_46b498;
    }
    ctx->pc = 0x46B490u;
    {
        const bool branch_taken_0x46b490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B490u;
        // 0x46b494: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b490) {
            ctx->pc = 0x46BC24u;
            goto label_46bc24;
        }
    }
    ctx->pc = 0x46B498u;
label_46b498:
    // 0x46b498: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x46b498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_46b49c:
    // 0x46b49c: 0xc11fb56  jal         func_47ED58
label_46b4a0:
    if (ctx->pc == 0x46B4A0u) {
        ctx->pc = 0x46B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B49Cu;
        // 0x46b4a0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B4A4u;
        goto label_46b4a4;
    }
    ctx->pc = 0x46B49Cu;
    SET_GPR_U32(ctx, 31, 0x46B4A4u);
    ctx->pc = 0x46B4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B49Cu;
    // 0x46b4a0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x46B49Cu, 0x46B4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B4A4u;
label_46b4a4:
    // 0x46b4a4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x46b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_46b4a8:
    // 0x46b4a8: 0x14430268  bne         $v0, $v1, . + 4 + (0x268 << 2)
label_46b4ac:
    if (ctx->pc == 0x46B4ACu) {
        ctx->pc = 0x46B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B4A8u;
        // 0x46b4ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B4B0u;
        goto label_46b4b0;
    }
    ctx->pc = 0x46B4A8u;
    {
        const bool branch_taken_0x46b4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x46B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B4A8u;
        // 0x46b4ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b4a8) {
            ctx->pc = 0x46BE4Cu;
            goto label_46be4c;
        }
    }
    ctx->pc = 0x46B4B0u;
label_46b4b0:
    // 0x46b4b0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x46b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_46b4b4:
    // 0x46b4b4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x46b4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_46b4b8:
    // 0x46b4b8: 0xc11ac5c  jal         func_46B170
label_46b4bc:
    if (ctx->pc == 0x46B4BCu) {
        ctx->pc = 0x46B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B4B8u;
        // 0x46b4bc: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B4C0u;
        goto label_46b4c0;
    }
    ctx->pc = 0x46B4B8u;
    SET_GPR_U32(ctx, 31, 0x46B4C0u);
    ctx->pc = 0x46B4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B4B8u;
    // 0x46b4bc: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B170u, 0x46B4B8u, 0x46B4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B4C0u;
label_46b4c0:
    // 0x46b4c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x46b4c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46b4c4:
    // 0x46b4c4: 0x124001df  beqz        $s2, . + 4 + (0x1DF << 2)
label_46b4c8:
    if (ctx->pc == 0x46B4C8u) {
        ctx->pc = 0x46B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B4C4u;
        // 0x46b4c8: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B4CCu;
        goto label_46b4cc;
    }
    ctx->pc = 0x46B4C4u;
    {
        const bool branch_taken_0x46b4c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B4C4u;
        // 0x46b4c8: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b4c4) {
            ctx->pc = 0x46BC44u;
            goto label_46bc44;
        }
    }
    ctx->pc = 0x46B4CCu;
label_46b4cc:
    // 0x46b4cc: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x46b4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_46b4d0:
    // 0x46b4d0: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_46b4d4:
    if (ctx->pc == 0x46B4D4u) {
        ctx->pc = 0x46B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B4D0u;
        // 0x46b4d4: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B4D8u;
        goto label_46b4d8;
    }
    ctx->pc = 0x46B4D0u;
    {
        const bool branch_taken_0x46b4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46b4d0) {
            ctx->pc = 0x46B4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B4D0u;
            // 0x46b4d4: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B588u;
            goto label_46b588;
        }
    }
    ctx->pc = 0x46B4D8u;
label_46b4d8:
    // 0x46b4d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x46b4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_46b4dc:
    // 0x46b4dc: 0xc11ab14  jal         func_46AC50
label_46b4e0:
    if (ctx->pc == 0x46B4E0u) {
        ctx->pc = 0x46B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B4DCu;
        // 0x46b4e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B4E4u;
        goto label_46b4e4;
    }
    ctx->pc = 0x46B4DCu;
    SET_GPR_U32(ctx, 31, 0x46B4E4u);
    ctx->pc = 0x46B4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B4DCu;
    // 0x46b4e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AC50u, 0x46B4DCu, 0x46B4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B4E4u;
label_46b4e4:
    // 0x46b4e4: 0x4430028  bgezl       $v0, . + 4 + (0x28 << 2)
label_46b4e8:
    if (ctx->pc == 0x46B4E8u) {
        ctx->pc = 0x46B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B4E4u;
        // 0x46b4e8: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B4ECu;
        goto label_46b4ec;
    }
    ctx->pc = 0x46B4E4u;
    {
        const bool branch_taken_0x46b4e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x46b4e4) {
            ctx->pc = 0x46B4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B4E4u;
            // 0x46b4e8: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B588u;
            goto label_46b588;
        }
    }
    ctx->pc = 0x46B4ECu;
label_46b4ec:
    // 0x46b4ec: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x46b4ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46b4f0:
    // 0x46b4f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46b4f4:
    // 0x46b4f4: 0x1c400021  bgtz        $v0, . + 4 + (0x21 << 2)
label_46b4f8:
    if (ctx->pc == 0x46B4F8u) {
        ctx->pc = 0x46B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B4F4u;
        // 0x46b4f8: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B4FCu;
        goto label_46b4fc;
    }
    ctx->pc = 0x46B4F4u;
    {
        const bool branch_taken_0x46b4f4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x46B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B4F4u;
        // 0x46b4f8: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b4f4) {
            ctx->pc = 0x46B57Cu;
            goto label_46b57c;
        }
    }
    ctx->pc = 0x46B4FCu;
label_46b4fc:
    // 0x46b4fc: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x46b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_46b500:
    // 0x46b500: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_46b504:
    if (ctx->pc == 0x46B504u) {
        ctx->pc = 0x46B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B500u;
        // 0x46b504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B508u;
        goto label_46b508;
    }
    ctx->pc = 0x46B500u;
    {
        const bool branch_taken_0x46b500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b500) {
            ctx->pc = 0x46B504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B500u;
            // 0x46b504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B518u;
            goto label_46b518;
        }
    }
    ctx->pc = 0x46B508u;
label_46b508:
    // 0x46b508: 0xc11fa54  jal         func_47E950
label_46b50c:
    if (ctx->pc == 0x46B50Cu) {
        ctx->pc = 0x46B510u;
        goto label_46b510;
    }
    ctx->pc = 0x46B508u;
    SET_GPR_U32(ctx, 31, 0x46B510u);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x46B508u, 0x46B510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B510u;
label_46b510:
    // 0x46b510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46b510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b514:
    // 0x46b514: 0x0  nop
    ctx->pc = 0x46b514u;
    // NOP
label_46b518:
    // 0x46b518: 0xc11affa  jal         func_46BFE8
label_46b51c:
    if (ctx->pc == 0x46B51Cu) {
        ctx->pc = 0x46B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B518u;
        // 0x46b51c: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B520u;
        goto label_46b520;
    }
    ctx->pc = 0x46B518u;
    SET_GPR_U32(ctx, 31, 0x46B520u);
    ctx->pc = 0x46B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B518u;
    // 0x46b51c: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x46B518u, 0x46B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B520u;
label_46b520:
    // 0x46b520: 0x3c130071  lui         $s3, 0x71
    ctx->pc = 0x46b520u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
label_46b524:
    // 0x46b524: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46b524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_46b528:
    // 0x46b528: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46b528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b52c:
    // 0x46b52c: 0xc11ffb4  jal         func_47FED0
label_46b530:
    if (ctx->pc == 0x46B530u) {
        ctx->pc = 0x46B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B52Cu;
        // 0x46b530: 0x2484e6e0  addiu       $a0, $a0, -0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B534u;
        goto label_46b534;
    }
    ctx->pc = 0x46B52Cu;
    SET_GPR_U32(ctx, 31, 0x46B534u);
    ctx->pc = 0x46B530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B52Cu;
    // 0x46b530: 0x2484e6e0  addiu       $a0, $a0, -0x1920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46B52Cu, 0x46B534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B534u;
label_46b534:
    // 0x46b534: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x46b534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_46b538:
    // 0x46b538: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_46b53c:
    if (ctx->pc == 0x46B53Cu) {
        ctx->pc = 0x46B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B538u;
        // 0x46b53c: 0x2662ad18  addiu       $v0, $s3, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B540u;
        goto label_46b540;
    }
    ctx->pc = 0x46B538u;
    {
        const bool branch_taken_0x46b538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B538u;
        // 0x46b53c: 0x2662ad18  addiu       $v0, $s3, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b538) {
            ctx->pc = 0x46B550u;
            goto label_46b550;
        }
    }
    ctx->pc = 0x46B540u;
label_46b540:
    // 0x46b540: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x46b540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_46b544:
    // 0x46b544: 0x60f809  jalr        $v1
label_46b548:
    if (ctx->pc == 0x46B548u) {
        ctx->pc = 0x46B54Cu;
        goto label_46b54c;
    }
    ctx->pc = 0x46B544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x46B54Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B544u, 0x46B54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B54Cu;
label_46b54c:
    // 0x46b54c: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x46b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_46b550:
    // 0x46b550: 0xc11b596  jal         func_46D658
label_46b554:
    if (ctx->pc == 0x46B554u) {
        ctx->pc = 0x46B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B550u;
        // 0x46b554: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B558u;
        goto label_46b558;
    }
    ctx->pc = 0x46B550u;
    SET_GPR_U32(ctx, 31, 0x46B558u);
    ctx->pc = 0x46B554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B550u;
    // 0x46b554: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D658u, 0x46B550u, 0x46B558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B558u;
label_46b558:
    // 0x46b558: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x46b558u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46b55c:
    // 0x46b55c: 0x2665ad18  addiu       $a1, $s3, -0x52E8
    ctx->pc = 0x46b55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
label_46b560:
    // 0x46b560: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46b560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46b564:
    // 0x46b564: 0xa643000e  sh          $v1, 0xE($s2)
    ctx->pc = 0x46b564u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 3));
label_46b568:
    // 0x46b568: 0x8ca2010c  lw          $v0, 0x10C($a1)
    ctx->pc = 0x46b568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
label_46b56c:
    // 0x46b56c: 0x40f809  jalr        $v0
label_46b570:
    if (ctx->pc == 0x46B570u) {
        ctx->pc = 0x46B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B56Cu;
        // 0x46b570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B574u;
        goto label_46b574;
    }
    ctx->pc = 0x46B56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46B574u);
        ctx->pc = 0x46B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B56Cu;
        // 0x46b570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B56Cu, 0x46B574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B574u;
label_46b574:
    // 0x46b574: 0x10000235  b           . + 4 + (0x235 << 2)
label_46b578:
    if (ctx->pc == 0x46B578u) {
        ctx->pc = 0x46B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B574u;
        // 0x46b578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B57Cu;
        goto label_46b57c;
    }
    ctx->pc = 0x46B574u;
    {
        const bool branch_taken_0x46b574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B574u;
        // 0x46b578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b574) {
            ctx->pc = 0x46BE4Cu;
            goto label_46be4c;
        }
    }
    ctx->pc = 0x46B57Cu;
label_46b57c:
    // 0x46b57c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x46b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46b580:
    // 0x46b580: 0x100001b0  b           . + 4 + (0x1B0 << 2)
label_46b584:
    if (ctx->pc == 0x46B584u) {
        ctx->pc = 0x46B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B580u;
        // 0x46b584: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B588u;
        goto label_46b588;
    }
    ctx->pc = 0x46B580u;
    {
        const bool branch_taken_0x46b580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B580u;
        // 0x46b584: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b580) {
            ctx->pc = 0x46BC44u;
            goto label_46bc44;
        }
    }
    ctx->pc = 0x46B588u;
label_46b588:
    // 0x46b588: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x46b588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_46b58c:
    // 0x46b58c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46b58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_46b590:
    // 0x46b590: 0x544000aa  bnel        $v0, $zero, . + 4 + (0xAA << 2)
label_46b594:
    if (ctx->pc == 0x46B594u) {
        ctx->pc = 0x46B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B590u;
        // 0x46b594: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B598u;
        goto label_46b598;
    }
    ctx->pc = 0x46B590u;
    {
        const bool branch_taken_0x46b590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46b590) {
            ctx->pc = 0x46B594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B590u;
            // 0x46b594: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B83Cu;
            goto label_46b83c;
        }
    }
    ctx->pc = 0x46B598u;
label_46b598:
    // 0x46b598: 0x8e500014  lw          $s0, 0x14($s2)
    ctx->pc = 0x46b598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46b59c:
    // 0x46b59c: 0x120000a6  beqz        $s0, . + 4 + (0xA6 << 2)
label_46b5a0:
    if (ctx->pc == 0x46B5A0u) {
        ctx->pc = 0x46B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B59Cu;
        // 0x46b5a0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B5A4u;
        goto label_46b5a4;
    }
    ctx->pc = 0x46B59Cu;
    {
        const bool branch_taken_0x46b59c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B59Cu;
        // 0x46b5a0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b59c) {
            ctx->pc = 0x46B838u;
            goto label_46b838;
        }
    }
    ctx->pc = 0x46B5A4u;
label_46b5a4:
    // 0x46b5a4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x46b5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_46b5a8:
    // 0x46b5a8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_46b5ac:
    if (ctx->pc == 0x46B5ACu) {
        ctx->pc = 0x46B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B5A8u;
        // 0x46b5ac: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B5B0u;
        goto label_46b5b0;
    }
    ctx->pc = 0x46B5A8u;
    {
        const bool branch_taken_0x46b5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B5A8u;
        // 0x46b5ac: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b5a8) {
            ctx->pc = 0x46B660u;
            goto label_46b660;
        }
    }
    ctx->pc = 0x46B5B0u;
label_46b5b0:
    // 0x46b5b0: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x46b5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_46b5b4:
    // 0x46b5b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46b5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46b5b8:
    // 0x46b5b8: 0xc11fb56  jal         func_47ED58
label_46b5bc:
    if (ctx->pc == 0x46B5BCu) {
        ctx->pc = 0x46B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B5B8u;
        // 0x46b5bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B5C0u;
        goto label_46b5c0;
    }
    ctx->pc = 0x46B5B8u;
    SET_GPR_U32(ctx, 31, 0x46B5C0u);
    ctx->pc = 0x46B5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B5B8u;
    // 0x46b5bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x46B5B8u, 0x46B5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B5C0u;
label_46b5c0:
    // 0x46b5c0: 0x50500028  beql        $v0, $s0, . + 4 + (0x28 << 2)
label_46b5c4:
    if (ctx->pc == 0x46B5C4u) {
        ctx->pc = 0x46B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B5C0u;
        // 0x46b5c4: 0x8e43001c  lw          $v1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B5C8u;
        goto label_46b5c8;
    }
    ctx->pc = 0x46B5C0u;
    {
        const bool branch_taken_0x46b5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x46b5c0) {
            ctx->pc = 0x46B5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B5C0u;
            // 0x46b5c4: 0x8e43001c  lw          $v1, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B664u;
            goto label_46b664;
        }
    }
    ctx->pc = 0x46B5C8u;
label_46b5c8:
    // 0x46b5c8: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x46b5c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46b5cc:
    // 0x46b5cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46b5d0:
    // 0x46b5d0: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
label_46b5d4:
    if (ctx->pc == 0x46B5D4u) {
        ctx->pc = 0x46B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B5D0u;
        // 0x46b5d4: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B5D8u;
        goto label_46b5d8;
    }
    ctx->pc = 0x46B5D0u;
    {
        const bool branch_taken_0x46b5d0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x46B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B5D0u;
        // 0x46b5d4: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b5d0) {
            ctx->pc = 0x46B654u;
            goto label_46b654;
        }
    }
    ctx->pc = 0x46B5D8u;
label_46b5d8:
    // 0x46b5d8: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x46b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_46b5dc:
    // 0x46b5dc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_46b5e0:
    if (ctx->pc == 0x46B5E0u) {
        ctx->pc = 0x46B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B5DCu;
        // 0x46b5e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B5E4u;
        goto label_46b5e4;
    }
    ctx->pc = 0x46B5DCu;
    {
        const bool branch_taken_0x46b5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b5dc) {
            ctx->pc = 0x46B5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B5DCu;
            // 0x46b5e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B5F0u;
            goto label_46b5f0;
        }
    }
    ctx->pc = 0x46B5E4u;
label_46b5e4:
    // 0x46b5e4: 0xc11fa54  jal         func_47E950
label_46b5e8:
    if (ctx->pc == 0x46B5E8u) {
        ctx->pc = 0x46B5ECu;
        goto label_46b5ec;
    }
    ctx->pc = 0x46B5E4u;
    SET_GPR_U32(ctx, 31, 0x46B5ECu);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x46B5E4u, 0x46B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B5ECu;
label_46b5ec:
    // 0x46b5ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46b5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b5f0:
    // 0x46b5f0: 0xc11affa  jal         func_46BFE8
label_46b5f4:
    if (ctx->pc == 0x46B5F4u) {
        ctx->pc = 0x46B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B5F0u;
        // 0x46b5f4: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B5F8u;
        goto label_46b5f8;
    }
    ctx->pc = 0x46B5F0u;
    SET_GPR_U32(ctx, 31, 0x46B5F8u);
    ctx->pc = 0x46B5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B5F0u;
    // 0x46b5f4: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x46B5F0u, 0x46B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B5F8u;
label_46b5f8:
    // 0x46b5f8: 0x3c130071  lui         $s3, 0x71
    ctx->pc = 0x46b5f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
label_46b5fc:
    // 0x46b5fc: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_46b600:
    // 0x46b600: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46b600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b604:
    // 0x46b604: 0xc11ffb4  jal         func_47FED0
label_46b608:
    if (ctx->pc == 0x46B608u) {
        ctx->pc = 0x46B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B604u;
        // 0x46b608: 0x2484e6e0  addiu       $a0, $a0, -0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B60Cu;
        goto label_46b60c;
    }
    ctx->pc = 0x46B604u;
    SET_GPR_U32(ctx, 31, 0x46B60Cu);
    ctx->pc = 0x46B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B604u;
    // 0x46b608: 0x2484e6e0  addiu       $a0, $a0, -0x1920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46B604u, 0x46B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B60Cu;
label_46b60c:
    // 0x46b60c: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x46b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_46b610:
    // 0x46b610: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_46b614:
    if (ctx->pc == 0x46B614u) {
        ctx->pc = 0x46B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B610u;
        // 0x46b614: 0x2662ad18  addiu       $v0, $s3, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B618u;
        goto label_46b618;
    }
    ctx->pc = 0x46B610u;
    {
        const bool branch_taken_0x46b610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B610u;
        // 0x46b614: 0x2662ad18  addiu       $v0, $s3, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b610) {
            ctx->pc = 0x46B628u;
            goto label_46b628;
        }
    }
    ctx->pc = 0x46B618u;
label_46b618:
    // 0x46b618: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x46b618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_46b61c:
    // 0x46b61c: 0x60f809  jalr        $v1
label_46b620:
    if (ctx->pc == 0x46B620u) {
        ctx->pc = 0x46B624u;
        goto label_46b624;
    }
    ctx->pc = 0x46B61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x46B624u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B61Cu, 0x46B624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B624u;
label_46b624:
    // 0x46b624: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x46b624u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_46b628:
    // 0x46b628: 0xc11b596  jal         func_46D658
label_46b62c:
    if (ctx->pc == 0x46B62Cu) {
        ctx->pc = 0x46B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B628u;
        // 0x46b62c: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B630u;
        goto label_46b630;
    }
    ctx->pc = 0x46B628u;
    SET_GPR_U32(ctx, 31, 0x46B630u);
    ctx->pc = 0x46B62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B628u;
    // 0x46b62c: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D658u, 0x46B628u, 0x46B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B630u;
label_46b630:
    // 0x46b630: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x46b630u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46b634:
    // 0x46b634: 0x2665ad18  addiu       $a1, $s3, -0x52E8
    ctx->pc = 0x46b634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
label_46b638:
    // 0x46b638: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46b638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46b63c:
    // 0x46b63c: 0xa643000e  sh          $v1, 0xE($s2)
    ctx->pc = 0x46b63cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 3));
label_46b640:
    // 0x46b640: 0x8ca2010c  lw          $v0, 0x10C($a1)
    ctx->pc = 0x46b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
label_46b644:
    // 0x46b644: 0x40f809  jalr        $v0
label_46b648:
    if (ctx->pc == 0x46B648u) {
        ctx->pc = 0x46B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B644u;
        // 0x46b648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B64Cu;
        goto label_46b64c;
    }
    ctx->pc = 0x46B644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46B64Cu);
        ctx->pc = 0x46B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B644u;
        // 0x46b648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B644u, 0x46B64Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B64Cu;
label_46b64c:
    // 0x46b64c: 0x100001ff  b           . + 4 + (0x1FF << 2)
label_46b650:
    if (ctx->pc == 0x46B650u) {
        ctx->pc = 0x46B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B64Cu;
        // 0x46b650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B654u;
        goto label_46b654;
    }
    ctx->pc = 0x46B64Cu;
    {
        const bool branch_taken_0x46b64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B64Cu;
        // 0x46b650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b64c) {
            ctx->pc = 0x46BE4Cu;
            goto label_46be4c;
        }
    }
    ctx->pc = 0x46B654u;
label_46b654:
    // 0x46b654: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x46b654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46b658:
    // 0x46b658: 0x1000017a  b           . + 4 + (0x17A << 2)
label_46b65c:
    if (ctx->pc == 0x46B65Cu) {
        ctx->pc = 0x46B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B658u;
        // 0x46b65c: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B660u;
        goto label_46b660;
    }
    ctx->pc = 0x46B658u;
    {
        const bool branch_taken_0x46b658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B658u;
        // 0x46b65c: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b658) {
            ctx->pc = 0x46BC44u;
            goto label_46bc44;
        }
    }
    ctx->pc = 0x46B660u;
label_46b660:
    // 0x46b660: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x46b660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_46b664:
    // 0x46b664: 0x58600038  blezl       $v1, . + 4 + (0x38 << 2)
label_46b668:
    if (ctx->pc == 0x46B668u) {
        ctx->pc = 0x46B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B664u;
        // 0x46b668: 0x8e460010  lw          $a2, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B66Cu;
        goto label_46b66c;
    }
    ctx->pc = 0x46B664u;
    {
        const bool branch_taken_0x46b664 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x46b664) {
            ctx->pc = 0x46B668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B664u;
            // 0x46b668: 0x8e460010  lw          $a2, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B748u;
            goto label_46b748;
        }
    }
    ctx->pc = 0x46B66Cu;
label_46b66c:
    // 0x46b66c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x46b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46b670:
    // 0x46b670: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x46b670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46b674:
    // 0x46b674: 0x18600033  blez        $v1, . + 4 + (0x33 << 2)
label_46b678:
    if (ctx->pc == 0x46B678u) {
        ctx->pc = 0x46B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B674u;
        // 0x46b678: 0x298c0  sll         $s3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B67Cu;
        goto label_46b67c;
    }
    ctx->pc = 0x46B674u;
    {
        const bool branch_taken_0x46b674 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x46B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B674u;
        // 0x46b678: 0x298c0  sll         $s3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b674) {
            ctx->pc = 0x46B744u;
            goto label_46b744;
        }
    }
    ctx->pc = 0x46B67Cu;
label_46b67c:
    // 0x46b67c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x46b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_46b680:
    // 0x46b680: 0x3c160053  lui         $s6, 0x53
    ctx->pc = 0x46b680u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)83 << 16));
label_46b684:
    // 0x46b684: 0x2455ad18  addiu       $s5, $v0, -0x52E8
    ctx->pc = 0x46b684u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_46b688:
    // 0x46b688: 0x26500034  addiu       $s0, $s2, 0x34
    ctx->pc = 0x46b688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
label_46b68c:
    // 0x46b68c: 0x0  nop
    ctx->pc = 0x46b68cu;
    // NOP
label_46b690:
    // 0x46b690: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x46b690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46b694:
    // 0x46b694: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46b694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46b698:
    // 0x46b698: 0xc11ef6c  jal         func_47BDB0
label_46b69c:
    if (ctx->pc == 0x46B69Cu) {
        ctx->pc = 0x46B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B698u;
        // 0x46b69c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B6A0u;
        goto label_46b6a0;
    }
    ctx->pc = 0x46B698u;
    SET_GPR_U32(ctx, 31, 0x46B6A0u);
    ctx->pc = 0x46B69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B698u;
    // 0x46b69c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BDB0u, 0x46B698u, 0x46B6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B6A0u;
label_46b6a0:
    // 0x46b6a0: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_46b6a4:
    if (ctx->pc == 0x46B6A4u) {
        ctx->pc = 0x46B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B6A0u;
        // 0x46b6a4: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B6A8u;
        goto label_46b6a8;
    }
    ctx->pc = 0x46B6A0u;
    {
        const bool branch_taken_0x46b6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46b6a0) {
            ctx->pc = 0x46B6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B6A0u;
            // 0x46b6a4: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B734u;
            goto label_46b734;
        }
    }
    ctx->pc = 0x46B6A8u;
label_46b6a8:
    // 0x46b6a8: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x46b6a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46b6ac:
    // 0x46b6ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46b6b0:
    // 0x46b6b0: 0x1c40001d  bgtz        $v0, . + 4 + (0x1D << 2)
label_46b6b4:
    if (ctx->pc == 0x46B6B4u) {
        ctx->pc = 0x46B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B6B0u;
        // 0x46b6b4: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B6B8u;
        goto label_46b6b8;
    }
    ctx->pc = 0x46B6B0u;
    {
        const bool branch_taken_0x46b6b0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x46B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B6B0u;
        // 0x46b6b4: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b6b0) {
            ctx->pc = 0x46B728u;
            goto label_46b728;
        }
    }
    ctx->pc = 0x46B6B8u;
label_46b6b8:
    // 0x46b6b8: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x46b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_46b6bc:
    // 0x46b6bc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_46b6c0:
    if (ctx->pc == 0x46B6C0u) {
        ctx->pc = 0x46B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B6BCu;
        // 0x46b6c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B6C4u;
        goto label_46b6c4;
    }
    ctx->pc = 0x46B6BCu;
    {
        const bool branch_taken_0x46b6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b6bc) {
            ctx->pc = 0x46B6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B6BCu;
            // 0x46b6c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B6D0u;
            goto label_46b6d0;
        }
    }
    ctx->pc = 0x46B6C4u;
label_46b6c4:
    // 0x46b6c4: 0xc11fa54  jal         func_47E950
label_46b6c8:
    if (ctx->pc == 0x46B6C8u) {
        ctx->pc = 0x46B6CCu;
        goto label_46b6cc;
    }
    ctx->pc = 0x46B6C4u;
    SET_GPR_U32(ctx, 31, 0x46B6CCu);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x46B6C4u, 0x46B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B6CCu;
label_46b6cc:
    // 0x46b6cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46b6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b6d0:
    // 0x46b6d0: 0xc11affa  jal         func_46BFE8
label_46b6d4:
    if (ctx->pc == 0x46B6D4u) {
        ctx->pc = 0x46B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B6D0u;
        // 0x46b6d4: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B6D8u;
        goto label_46b6d8;
    }
    ctx->pc = 0x46B6D0u;
    SET_GPR_U32(ctx, 31, 0x46B6D8u);
    ctx->pc = 0x46B6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B6D0u;
    // 0x46b6d4: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x46B6D0u, 0x46B6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B6D8u;
label_46b6d8:
    // 0x46b6d8: 0x26c4e6e0  addiu       $a0, $s6, -0x1920
    ctx->pc = 0x46b6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960864));
label_46b6dc:
    // 0x46b6dc: 0xc11ffb4  jal         func_47FED0
label_46b6e0:
    if (ctx->pc == 0x46B6E0u) {
        ctx->pc = 0x46B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B6DCu;
        // 0x46b6e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B6E4u;
        goto label_46b6e4;
    }
    ctx->pc = 0x46B6DCu;
    SET_GPR_U32(ctx, 31, 0x46B6E4u);
    ctx->pc = 0x46B6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B6DCu;
    // 0x46b6e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46B6DCu, 0x46B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B6E4u;
label_46b6e4:
    // 0x46b6e4: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x46b6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_46b6e8:
    // 0x46b6e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_46b6ec:
    if (ctx->pc == 0x46B6ECu) {
        ctx->pc = 0x46B6F0u;
        goto label_46b6f0;
    }
    ctx->pc = 0x46B6E8u;
    {
        const bool branch_taken_0x46b6e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b6e8) {
            ctx->pc = 0x46B700u;
            goto label_46b700;
        }
    }
    ctx->pc = 0x46B6F0u;
label_46b6f0:
    // 0x46b6f0: 0x8ea2010c  lw          $v0, 0x10C($s5)
    ctx->pc = 0x46b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_46b6f4:
    // 0x46b6f4: 0x40f809  jalr        $v0
label_46b6f8:
    if (ctx->pc == 0x46B6F8u) {
        ctx->pc = 0x46B6FCu;
        goto label_46b6fc;
    }
    ctx->pc = 0x46B6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46B6FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B6F4u, 0x46B6FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B6FCu;
label_46b6fc:
    // 0x46b6fc: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x46b6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_46b700:
    // 0x46b700: 0xc11b596  jal         func_46D658
label_46b704:
    if (ctx->pc == 0x46B704u) {
        ctx->pc = 0x46B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B700u;
        // 0x46b704: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B708u;
        goto label_46b708;
    }
    ctx->pc = 0x46B700u;
    SET_GPR_U32(ctx, 31, 0x46B708u);
    ctx->pc = 0x46B704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B700u;
    // 0x46b704: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D658u, 0x46B700u, 0x46B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B708u;
label_46b708:
    // 0x46b708: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x46b708u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46b70c:
    // 0x46b70c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46b710:
    // 0x46b710: 0xa643000e  sh          $v1, 0xE($s2)
    ctx->pc = 0x46b710u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 3));
label_46b714:
    // 0x46b714: 0x8ea2010c  lw          $v0, 0x10C($s5)
    ctx->pc = 0x46b714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_46b718:
    // 0x46b718: 0x40f809  jalr        $v0
label_46b71c:
    if (ctx->pc == 0x46B71Cu) {
        ctx->pc = 0x46B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B718u;
        // 0x46b71c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B720u;
        goto label_46b720;
    }
    ctx->pc = 0x46B718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46B720u);
        ctx->pc = 0x46B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B718u;
        // 0x46b71c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B718u, 0x46B720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B720u;
label_46b720:
    // 0x46b720: 0x100001ca  b           . + 4 + (0x1CA << 2)
label_46b724:
    if (ctx->pc == 0x46B724u) {
        ctx->pc = 0x46B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B720u;
        // 0x46b724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B728u;
        goto label_46b728;
    }
    ctx->pc = 0x46B720u;
    {
        const bool branch_taken_0x46b720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B720u;
        // 0x46b724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b720) {
            ctx->pc = 0x46BE4Cu;
            goto label_46be4c;
        }
    }
    ctx->pc = 0x46B728u;
label_46b728:
    // 0x46b728: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x46b728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46b72c:
    // 0x46b72c: 0x10000145  b           . + 4 + (0x145 << 2)
label_46b730:
    if (ctx->pc == 0x46B730u) {
        ctx->pc = 0x46B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B72Cu;
        // 0x46b730: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B734u;
        goto label_46b734;
    }
    ctx->pc = 0x46B72Cu;
    {
        const bool branch_taken_0x46b72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B72Cu;
        // 0x46b730: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b72c) {
            ctx->pc = 0x46BC44u;
            goto label_46bc44;
        }
    }
    ctx->pc = 0x46B734u;
label_46b734:
    // 0x46b734: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x46b734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_46b738:
    // 0x46b738: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x46b738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_46b73c:
    // 0x46b73c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_46b740:
    if (ctx->pc == 0x46B740u) {
        ctx->pc = 0x46B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B73Cu;
        // 0x46b740: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B744u;
        goto label_46b744;
    }
    ctx->pc = 0x46B73Cu;
    {
        const bool branch_taken_0x46b73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B73Cu;
        // 0x46b740: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b73c) {
            ctx->pc = 0x46B690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46b690;
        }
    }
    ctx->pc = 0x46B744u;
label_46b744:
    // 0x46b744: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x46b744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_46b748:
    // 0x46b748: 0x10c0003b  beqz        $a2, . + 4 + (0x3B << 2)
label_46b74c:
    if (ctx->pc == 0x46B74Cu) {
        ctx->pc = 0x46B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B748u;
        // 0x46b74c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B750u;
        goto label_46b750;
    }
    ctx->pc = 0x46B748u;
    {
        const bool branch_taken_0x46b748 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B748u;
        // 0x46b74c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b748) {
            ctx->pc = 0x46B838u;
            goto label_46b838;
        }
    }
    ctx->pc = 0x46B750u;
label_46b750:
    // 0x46b750: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x46b750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_46b754:
    // 0x46b754: 0x8e51002c  lw          $s1, 0x2C($s2)
    ctx->pc = 0x46b754u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_46b758:
    // 0x46b758: 0x1380c0  sll         $s0, $s3, 3
    ctx->pc = 0x46b758u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_46b75c:
    // 0x46b75c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46b75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46b760:
    // 0x46b760: 0xc11fb56  jal         func_47ED58
label_46b764:
    if (ctx->pc == 0x46B764u) {
        ctx->pc = 0x46B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B760u;
        // 0x46b764: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B768u;
        goto label_46b768;
    }
    ctx->pc = 0x46B760u;
    SET_GPR_U32(ctx, 31, 0x46B768u);
    ctx->pc = 0x46B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B760u;
    // 0x46b764: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x46B760u, 0x46B768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B768u;
label_46b768:
    // 0x46b768: 0x50500027  beql        $v0, $s0, . + 4 + (0x27 << 2)
label_46b76c:
    if (ctx->pc == 0x46B76Cu) {
        ctx->pc = 0x46B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B768u;
        // 0x46b76c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B770u;
        goto label_46b770;
    }
    ctx->pc = 0x46B768u;
    {
        const bool branch_taken_0x46b768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x46b768) {
            ctx->pc = 0x46B76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B768u;
            // 0x46b76c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B808u;
            goto label_46b808;
        }
    }
    ctx->pc = 0x46B770u;
label_46b770:
    // 0x46b770: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x46b770u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46b774:
    // 0x46b774: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46b778:
    // 0x46b778: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
label_46b77c:
    if (ctx->pc == 0x46B77Cu) {
        ctx->pc = 0x46B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B778u;
        // 0x46b77c: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B780u;
        goto label_46b780;
    }
    ctx->pc = 0x46B778u;
    {
        const bool branch_taken_0x46b778 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x46B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B778u;
        // 0x46b77c: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b778) {
            ctx->pc = 0x46B7FCu;
            goto label_46b7fc;
        }
    }
    ctx->pc = 0x46B780u;
label_46b780:
    // 0x46b780: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x46b780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_46b784:
    // 0x46b784: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_46b788:
    if (ctx->pc == 0x46B788u) {
        ctx->pc = 0x46B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B784u;
        // 0x46b788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B78Cu;
        goto label_46b78c;
    }
    ctx->pc = 0x46B784u;
    {
        const bool branch_taken_0x46b784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b784) {
            ctx->pc = 0x46B788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B784u;
            // 0x46b788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B798u;
            goto label_46b798;
        }
    }
    ctx->pc = 0x46B78Cu;
label_46b78c:
    // 0x46b78c: 0xc11fa54  jal         func_47E950
label_46b790:
    if (ctx->pc == 0x46B790u) {
        ctx->pc = 0x46B794u;
        goto label_46b794;
    }
    ctx->pc = 0x46B78Cu;
    SET_GPR_U32(ctx, 31, 0x46B794u);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x46B78Cu, 0x46B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B794u;
label_46b794:
    // 0x46b794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46b794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b798:
    // 0x46b798: 0xc11affa  jal         func_46BFE8
label_46b79c:
    if (ctx->pc == 0x46B79Cu) {
        ctx->pc = 0x46B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B798u;
        // 0x46b79c: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B7A0u;
        goto label_46b7a0;
    }
    ctx->pc = 0x46B798u;
    SET_GPR_U32(ctx, 31, 0x46B7A0u);
    ctx->pc = 0x46B79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B798u;
    // 0x46b79c: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x46B798u, 0x46B7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B7A0u;
label_46b7a0:
    // 0x46b7a0: 0x3c130071  lui         $s3, 0x71
    ctx->pc = 0x46b7a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
label_46b7a4:
    // 0x46b7a4: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_46b7a8:
    // 0x46b7a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46b7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b7ac:
    // 0x46b7ac: 0xc11ffb4  jal         func_47FED0
label_46b7b0:
    if (ctx->pc == 0x46B7B0u) {
        ctx->pc = 0x46B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B7ACu;
        // 0x46b7b0: 0x2484e6e0  addiu       $a0, $a0, -0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B7B4u;
        goto label_46b7b4;
    }
    ctx->pc = 0x46B7ACu;
    SET_GPR_U32(ctx, 31, 0x46B7B4u);
    ctx->pc = 0x46B7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B7ACu;
    // 0x46b7b0: 0x2484e6e0  addiu       $a0, $a0, -0x1920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46B7ACu, 0x46B7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B7B4u;
label_46b7b4:
    // 0x46b7b4: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x46b7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_46b7b8:
    // 0x46b7b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_46b7bc:
    if (ctx->pc == 0x46B7BCu) {
        ctx->pc = 0x46B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B7B8u;
        // 0x46b7bc: 0x2662ad18  addiu       $v0, $s3, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B7C0u;
        goto label_46b7c0;
    }
    ctx->pc = 0x46B7B8u;
    {
        const bool branch_taken_0x46b7b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B7B8u;
        // 0x46b7bc: 0x2662ad18  addiu       $v0, $s3, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b7b8) {
            ctx->pc = 0x46B7D0u;
            goto label_46b7d0;
        }
    }
    ctx->pc = 0x46B7C0u;
label_46b7c0:
    // 0x46b7c0: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x46b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_46b7c4:
    // 0x46b7c4: 0x60f809  jalr        $v1
label_46b7c8:
    if (ctx->pc == 0x46B7C8u) {
        ctx->pc = 0x46B7CCu;
        goto label_46b7cc;
    }
    ctx->pc = 0x46B7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x46B7CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B7C4u, 0x46B7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B7CCu;
label_46b7cc:
    // 0x46b7cc: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x46b7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_46b7d0:
    // 0x46b7d0: 0xc11b596  jal         func_46D658
label_46b7d4:
    if (ctx->pc == 0x46B7D4u) {
        ctx->pc = 0x46B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B7D0u;
        // 0x46b7d4: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B7D8u;
        goto label_46b7d8;
    }
    ctx->pc = 0x46B7D0u;
    SET_GPR_U32(ctx, 31, 0x46B7D8u);
    ctx->pc = 0x46B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B7D0u;
    // 0x46b7d4: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D658u, 0x46B7D0u, 0x46B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B7D8u;
label_46b7d8:
    // 0x46b7d8: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x46b7d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46b7dc:
    // 0x46b7dc: 0x2665ad18  addiu       $a1, $s3, -0x52E8
    ctx->pc = 0x46b7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
label_46b7e0:
    // 0x46b7e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46b7e4:
    // 0x46b7e4: 0xa643000e  sh          $v1, 0xE($s2)
    ctx->pc = 0x46b7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 3));
label_46b7e8:
    // 0x46b7e8: 0x8ca2010c  lw          $v0, 0x10C($a1)
    ctx->pc = 0x46b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
label_46b7ec:
    // 0x46b7ec: 0x40f809  jalr        $v0
label_46b7f0:
    if (ctx->pc == 0x46B7F0u) {
        ctx->pc = 0x46B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B7ECu;
        // 0x46b7f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B7F4u;
        goto label_46b7f4;
    }
    ctx->pc = 0x46B7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46B7F4u);
        ctx->pc = 0x46B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B7ECu;
        // 0x46b7f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B7ECu, 0x46B7F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B7F4u;
label_46b7f4:
    // 0x46b7f4: 0x10000195  b           . + 4 + (0x195 << 2)
label_46b7f8:
    if (ctx->pc == 0x46B7F8u) {
        ctx->pc = 0x46B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B7F4u;
        // 0x46b7f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B7FCu;
        goto label_46b7fc;
    }
    ctx->pc = 0x46B7F4u;
    {
        const bool branch_taken_0x46b7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B7F4u;
        // 0x46b7f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b7f4) {
            ctx->pc = 0x46BE4Cu;
            goto label_46be4c;
        }
    }
    ctx->pc = 0x46B7FCu;
label_46b7fc:
    // 0x46b7fc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x46b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46b800:
    // 0x46b800: 0x10000110  b           . + 4 + (0x110 << 2)
label_46b804:
    if (ctx->pc == 0x46B804u) {
        ctx->pc = 0x46B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B800u;
        // 0x46b804: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B808u;
        goto label_46b808;
    }
    ctx->pc = 0x46B800u;
    {
        const bool branch_taken_0x46b800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B800u;
        // 0x46b804: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b800) {
            ctx->pc = 0x46BC44u;
            goto label_46bc44;
        }
    }
    ctx->pc = 0x46B808u;
label_46b808:
    // 0x46b808: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x46b808u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_46b80c:
    // 0x46b80c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x46b80cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46b810:
    // 0x46b810: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x46b810u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_46b814:
    // 0x46b814: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x46b814u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_46b818:
    // 0x46b818: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x46b818u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_46b81c:
    // 0x46b81c: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x46b81cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_46b820:
    // 0x46b820: 0xa6250000  sh          $a1, 0x0($s1)
    ctx->pc = 0x46b820u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 5));
label_46b824:
    // 0x46b824: 0xa6240002  sh          $a0, 0x2($s1)
    ctx->pc = 0x46b824u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 4));
label_46b828:
    // 0x46b828: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x46b828u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
label_46b82c:
    // 0x46b82c: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x46b82cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
label_46b830:
    // 0x46b830: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
label_46b834:
    if (ctx->pc == 0x46B834u) {
        ctx->pc = 0x46B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B830u;
        // 0x46b834: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B838u;
        goto label_46b838;
    }
    ctx->pc = 0x46B830u;
    {
        const bool branch_taken_0x46b830 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x46B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B830u;
        // 0x46b834: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b830) {
            ctx->pc = 0x46B808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46b808;
        }
    }
    ctx->pc = 0x46B838u;
label_46b838:
    // 0x46b838: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x46b838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_46b83c:
    // 0x46b83c: 0x184000c6  blez        $v0, . + 4 + (0xC6 << 2)
label_46b840:
    if (ctx->pc == 0x46B840u) {
        ctx->pc = 0x46B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B83Cu;
        // 0x46b840: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B844u;
        goto label_46b844;
    }
    ctx->pc = 0x46B83Cu;
    {
        const bool branch_taken_0x46b83c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x46B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B83Cu;
        // 0x46b840: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b83c) {
            ctx->pc = 0x46BB58u;
            goto label_46bb58;
        }
    }
    ctx->pc = 0x46B844u;
label_46b844:
    // 0x46b844: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x46b844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_46b848:
    // 0x46b848: 0x3c150053  lui         $s5, 0x53
    ctx->pc = 0x46b848u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)83 << 16));
label_46b84c:
    // 0x46b84c: 0x2453ad18  addiu       $s3, $v0, -0x52E8
    ctx->pc = 0x46b84cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_46b850:
    // 0x46b850: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x46b850u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_46b854:
    // 0x46b854: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x46b854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_46b858:
    // 0x46b858: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x46b858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_46b85c:
    // 0x46b85c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x46b85cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_46b860:
    // 0x46b860: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46b860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46b864:
    // 0x46b864: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x46b864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_46b868:
    // 0x46b868: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x46b868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_46b86c:
    // 0x46b86c: 0xc11fb56  jal         func_47ED58
label_46b870:
    if (ctx->pc == 0x46B870u) {
        ctx->pc = 0x46B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B86Cu;
        // 0x46b870: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B874u;
        goto label_46b874;
    }
    ctx->pc = 0x46B86Cu;
    SET_GPR_U32(ctx, 31, 0x46B874u);
    ctx->pc = 0x46B870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B86Cu;
    // 0x46b870: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x46B86Cu, 0x46B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B874u;
label_46b874:
    // 0x46b874: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x46b874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46b878:
    // 0x46b878: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x46b878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_46b87c:
    // 0x46b87c: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
label_46b880:
    if (ctx->pc == 0x46B880u) {
        ctx->pc = 0x46B884u;
        goto label_46b884;
    }
    ctx->pc = 0x46B87Cu;
    {
        const bool branch_taken_0x46b87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46b87c) {
            ctx->pc = 0x46B910u;
            goto label_46b910;
        }
    }
    ctx->pc = 0x46B884u;
label_46b884:
    // 0x46b884: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x46b884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46b888:
    // 0x46b888: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46b888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46b88c:
    // 0x46b88c: 0x1c40001d  bgtz        $v0, . + 4 + (0x1D << 2)
label_46b890:
    if (ctx->pc == 0x46B890u) {
        ctx->pc = 0x46B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B88Cu;
        // 0x46b890: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B894u;
        goto label_46b894;
    }
    ctx->pc = 0x46B88Cu;
    {
        const bool branch_taken_0x46b88c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x46B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B88Cu;
        // 0x46b890: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b88c) {
            ctx->pc = 0x46B904u;
            goto label_46b904;
        }
    }
    ctx->pc = 0x46B894u;
label_46b894:
    // 0x46b894: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x46b894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_46b898:
    // 0x46b898: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_46b89c:
    if (ctx->pc == 0x46B89Cu) {
        ctx->pc = 0x46B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B898u;
        // 0x46b89c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B8A0u;
        goto label_46b8a0;
    }
    ctx->pc = 0x46B898u;
    {
        const bool branch_taken_0x46b898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b898) {
            ctx->pc = 0x46B89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B898u;
            // 0x46b89c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B8ACu;
            goto label_46b8ac;
        }
    }
    ctx->pc = 0x46B8A0u;
label_46b8a0:
    // 0x46b8a0: 0xc11fa54  jal         func_47E950
label_46b8a4:
    if (ctx->pc == 0x46B8A4u) {
        ctx->pc = 0x46B8A8u;
        goto label_46b8a8;
    }
    ctx->pc = 0x46B8A0u;
    SET_GPR_U32(ctx, 31, 0x46B8A8u);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x46B8A0u, 0x46B8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B8A8u;
label_46b8a8:
    // 0x46b8a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46b8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b8ac:
    // 0x46b8ac: 0xc11affa  jal         func_46BFE8
label_46b8b0:
    if (ctx->pc == 0x46B8B0u) {
        ctx->pc = 0x46B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B8ACu;
        // 0x46b8b0: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B8B4u;
        goto label_46b8b4;
    }
    ctx->pc = 0x46B8ACu;
    SET_GPR_U32(ctx, 31, 0x46B8B4u);
    ctx->pc = 0x46B8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B8ACu;
    // 0x46b8b0: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x46B8ACu, 0x46B8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B8B4u;
label_46b8b4:
    // 0x46b8b4: 0x26a4e6e0  addiu       $a0, $s5, -0x1920
    ctx->pc = 0x46b8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960864));
label_46b8b8:
    // 0x46b8b8: 0xc11ffb4  jal         func_47FED0
label_46b8bc:
    if (ctx->pc == 0x46B8BCu) {
        ctx->pc = 0x46B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B8B8u;
        // 0x46b8bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B8C0u;
        goto label_46b8c0;
    }
    ctx->pc = 0x46B8B8u;
    SET_GPR_U32(ctx, 31, 0x46B8C0u);
    ctx->pc = 0x46B8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B8B8u;
    // 0x46b8bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46B8B8u, 0x46B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B8C0u;
label_46b8c0:
    // 0x46b8c0: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x46b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_46b8c4:
    // 0x46b8c4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_46b8c8:
    if (ctx->pc == 0x46B8C8u) {
        ctx->pc = 0x46B8CCu;
        goto label_46b8cc;
    }
    ctx->pc = 0x46B8C4u;
    {
        const bool branch_taken_0x46b8c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b8c4) {
            ctx->pc = 0x46B8DCu;
            goto label_46b8dc;
        }
    }
    ctx->pc = 0x46B8CCu;
label_46b8cc:
    // 0x46b8cc: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x46b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_46b8d0:
    // 0x46b8d0: 0x40f809  jalr        $v0
label_46b8d4:
    if (ctx->pc == 0x46B8D4u) {
        ctx->pc = 0x46B8D8u;
        goto label_46b8d8;
    }
    ctx->pc = 0x46B8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46B8D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B8D0u, 0x46B8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B8D8u;
label_46b8d8:
    // 0x46b8d8: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x46b8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_46b8dc:
    // 0x46b8dc: 0xc11b596  jal         func_46D658
label_46b8e0:
    if (ctx->pc == 0x46B8E0u) {
        ctx->pc = 0x46B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B8DCu;
        // 0x46b8e0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B8E4u;
        goto label_46b8e4;
    }
    ctx->pc = 0x46B8DCu;
    SET_GPR_U32(ctx, 31, 0x46B8E4u);
    ctx->pc = 0x46B8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B8DCu;
    // 0x46b8e0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D658u, 0x46B8DCu, 0x46B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B8E4u;
label_46b8e4:
    // 0x46b8e4: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x46b8e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46b8e8:
    // 0x46b8e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46b8ec:
    // 0x46b8ec: 0xa643000e  sh          $v1, 0xE($s2)
    ctx->pc = 0x46b8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 3));
label_46b8f0:
    // 0x46b8f0: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x46b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_46b8f4:
    // 0x46b8f4: 0x40f809  jalr        $v0
label_46b8f8:
    if (ctx->pc == 0x46B8F8u) {
        ctx->pc = 0x46B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B8F4u;
        // 0x46b8f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B8FCu;
        goto label_46b8fc;
    }
    ctx->pc = 0x46B8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46B8FCu);
        ctx->pc = 0x46B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B8F4u;
        // 0x46b8f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B8F4u, 0x46B8FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B8FCu;
label_46b8fc:
    // 0x46b8fc: 0x10000153  b           . + 4 + (0x153 << 2)
label_46b900:
    if (ctx->pc == 0x46B900u) {
        ctx->pc = 0x46B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B8FCu;
        // 0x46b900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B904u;
        goto label_46b904;
    }
    ctx->pc = 0x46B8FCu;
    {
        const bool branch_taken_0x46b8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B8FCu;
        // 0x46b900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b8fc) {
            ctx->pc = 0x46BE4Cu;
            goto label_46be4c;
        }
    }
    ctx->pc = 0x46B904u;
label_46b904:
    // 0x46b904: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x46b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46b908:
    // 0x46b908: 0x100000ce  b           . + 4 + (0xCE << 2)
label_46b90c:
    if (ctx->pc == 0x46B90Cu) {
        ctx->pc = 0x46B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B908u;
        // 0x46b90c: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B910u;
        goto label_46b910;
    }
    ctx->pc = 0x46B908u;
    {
        const bool branch_taken_0x46b908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B908u;
        // 0x46b90c: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b908) {
            ctx->pc = 0x46BC44u;
            goto label_46bc44;
        }
    }
    ctx->pc = 0x46B910u;
label_46b910:
    // 0x46b910: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x46b910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_46b914:
    // 0x46b914: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x46b914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_46b918:
    // 0x46b918: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x46b918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_46b91c:
    // 0x46b91c: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x46b91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_46b920:
    // 0x46b920: 0xb202000b  sdl         $v0, 0xB($s0)
    ctx->pc = 0x46b920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_46b924:
    // 0x46b924: 0xb6020004  sdr         $v0, 0x4($s0)
    ctx->pc = 0x46b924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_46b928:
    // 0x46b928: 0xb2040013  sdl         $a0, 0x13($s0)
    ctx->pc = 0x46b928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_46b92c:
    // 0x46b92c: 0xb604000c  sdr         $a0, 0xC($s0)
    ctx->pc = 0x46b92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_46b930:
    // 0x46b930: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46b930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_46b934:
    // 0x46b934: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_46b938:
    if (ctx->pc == 0x46B938u) {
        ctx->pc = 0x46B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B934u;
        // 0x46b938: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B93Cu;
        goto label_46b93c;
    }
    ctx->pc = 0x46B934u;
    {
        const bool branch_taken_0x46b934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B934u;
        // 0x46b938: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b934) {
            ctx->pc = 0x46BA94u;
            goto label_46ba94;
        }
    }
    ctx->pc = 0x46B93Cu;
label_46b93c:
    // 0x46b93c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_46b940:
    if (ctx->pc == 0x46B940u) {
        ctx->pc = 0x46B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B93Cu;
        // 0x46b940: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B944u;
        goto label_46b944;
    }
    ctx->pc = 0x46B93Cu;
    {
        const bool branch_taken_0x46b93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B93Cu;
        // 0x46b940: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b93c) {
            ctx->pc = 0x46B9ECu;
            goto label_46b9ec;
        }
    }
    ctx->pc = 0x46B944u;
label_46b944:
    // 0x46b944: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x46b944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46b948:
    // 0x46b948: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x46b948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_46b94c:
    // 0x46b94c: 0x3012  mflo        $a2
    ctx->pc = 0x46b94cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_46b950:
    // 0x46b950: 0xc11ef6c  jal         func_47BDB0
label_46b954:
    if (ctx->pc == 0x46B954u) {
        ctx->pc = 0x46B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B950u;
        // 0x46b954: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B958u;
        goto label_46b958;
    }
    ctx->pc = 0x46B950u;
    SET_GPR_U32(ctx, 31, 0x46B958u);
    ctx->pc = 0x46B954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B950u;
    // 0x46b954: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BDB0u, 0x46B950u, 0x46B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B958u;
label_46b958:
    // 0x46b958: 0x5440007b  bnel        $v0, $zero, . + 4 + (0x7B << 2)
label_46b95c:
    if (ctx->pc == 0x46B95Cu) {
        ctx->pc = 0x46B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B958u;
        // 0x46b95c: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B960u;
        goto label_46b960;
    }
    ctx->pc = 0x46B958u;
    {
        const bool branch_taken_0x46b958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46b958) {
            ctx->pc = 0x46B95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B958u;
            // 0x46b95c: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46BB48u;
            goto label_46bb48;
        }
    }
    ctx->pc = 0x46B960u;
label_46b960:
    // 0x46b960: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x46b960u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46b964:
    // 0x46b964: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46b964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46b968:
    // 0x46b968: 0x1c40001d  bgtz        $v0, . + 4 + (0x1D << 2)
label_46b96c:
    if (ctx->pc == 0x46B96Cu) {
        ctx->pc = 0x46B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B968u;
        // 0x46b96c: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B970u;
        goto label_46b970;
    }
    ctx->pc = 0x46B968u;
    {
        const bool branch_taken_0x46b968 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x46B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B968u;
        // 0x46b96c: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b968) {
            ctx->pc = 0x46B9E0u;
            goto label_46b9e0;
        }
    }
    ctx->pc = 0x46B970u;
label_46b970:
    // 0x46b970: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x46b970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_46b974:
    // 0x46b974: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_46b978:
    if (ctx->pc == 0x46B978u) {
        ctx->pc = 0x46B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B974u;
        // 0x46b978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B97Cu;
        goto label_46b97c;
    }
    ctx->pc = 0x46B974u;
    {
        const bool branch_taken_0x46b974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b974) {
            ctx->pc = 0x46B978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B974u;
            // 0x46b978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B988u;
            goto label_46b988;
        }
    }
    ctx->pc = 0x46B97Cu;
label_46b97c:
    // 0x46b97c: 0xc11fa54  jal         func_47E950
label_46b980:
    if (ctx->pc == 0x46B980u) {
        ctx->pc = 0x46B984u;
        goto label_46b984;
    }
    ctx->pc = 0x46B97Cu;
    SET_GPR_U32(ctx, 31, 0x46B984u);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x46B97Cu, 0x46B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B984u;
label_46b984:
    // 0x46b984: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46b984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46b988:
    // 0x46b988: 0xc11affa  jal         func_46BFE8
label_46b98c:
    if (ctx->pc == 0x46B98Cu) {
        ctx->pc = 0x46B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B988u;
        // 0x46b98c: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B990u;
        goto label_46b990;
    }
    ctx->pc = 0x46B988u;
    SET_GPR_U32(ctx, 31, 0x46B990u);
    ctx->pc = 0x46B98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B988u;
    // 0x46b98c: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x46B988u, 0x46B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B990u;
label_46b990:
    // 0x46b990: 0x26a4e6e0  addiu       $a0, $s5, -0x1920
    ctx->pc = 0x46b990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960864));
label_46b994:
    // 0x46b994: 0xc11ffb4  jal         func_47FED0
label_46b998:
    if (ctx->pc == 0x46B998u) {
        ctx->pc = 0x46B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B994u;
        // 0x46b998: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B99Cu;
        goto label_46b99c;
    }
    ctx->pc = 0x46B994u;
    SET_GPR_U32(ctx, 31, 0x46B99Cu);
    ctx->pc = 0x46B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B994u;
    // 0x46b998: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46B994u, 0x46B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B99Cu;
label_46b99c:
    // 0x46b99c: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x46b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_46b9a0:
    // 0x46b9a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_46b9a4:
    if (ctx->pc == 0x46B9A4u) {
        ctx->pc = 0x46B9A8u;
        goto label_46b9a8;
    }
    ctx->pc = 0x46B9A0u;
    {
        const bool branch_taken_0x46b9a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b9a0) {
            ctx->pc = 0x46B9B8u;
            goto label_46b9b8;
        }
    }
    ctx->pc = 0x46B9A8u;
label_46b9a8:
    // 0x46b9a8: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x46b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_46b9ac:
    // 0x46b9ac: 0x40f809  jalr        $v0
label_46b9b0:
    if (ctx->pc == 0x46B9B0u) {
        ctx->pc = 0x46B9B4u;
        goto label_46b9b4;
    }
    ctx->pc = 0x46B9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46B9B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B9ACu, 0x46B9B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B9B4u;
label_46b9b4:
    // 0x46b9b4: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x46b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_46b9b8:
    // 0x46b9b8: 0xc11b596  jal         func_46D658
label_46b9bc:
    if (ctx->pc == 0x46B9BCu) {
        ctx->pc = 0x46B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B9B8u;
        // 0x46b9bc: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B9C0u;
        goto label_46b9c0;
    }
    ctx->pc = 0x46B9B8u;
    SET_GPR_U32(ctx, 31, 0x46B9C0u);
    ctx->pc = 0x46B9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B9B8u;
    // 0x46b9bc: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D658u, 0x46B9B8u, 0x46B9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B9C0u;
label_46b9c0:
    // 0x46b9c0: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x46b9c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46b9c4:
    // 0x46b9c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46b9c8:
    // 0x46b9c8: 0xa643000e  sh          $v1, 0xE($s2)
    ctx->pc = 0x46b9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 3));
label_46b9cc:
    // 0x46b9cc: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x46b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_46b9d0:
    // 0x46b9d0: 0x40f809  jalr        $v0
label_46b9d4:
    if (ctx->pc == 0x46B9D4u) {
        ctx->pc = 0x46B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B9D0u;
        // 0x46b9d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B9D8u;
        goto label_46b9d8;
    }
    ctx->pc = 0x46B9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46B9D8u);
        ctx->pc = 0x46B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B9D0u;
        // 0x46b9d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B9D0u, 0x46B9D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B9D8u;
label_46b9d8:
    // 0x46b9d8: 0x1000011c  b           . + 4 + (0x11C << 2)
label_46b9dc:
    if (ctx->pc == 0x46B9DCu) {
        ctx->pc = 0x46B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B9D8u;
        // 0x46b9dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B9E0u;
        goto label_46b9e0;
    }
    ctx->pc = 0x46B9D8u;
    {
        const bool branch_taken_0x46b9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B9D8u;
        // 0x46b9dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b9d8) {
            ctx->pc = 0x46BE4Cu;
            goto label_46be4c;
        }
    }
    ctx->pc = 0x46B9E0u;
label_46b9e0:
    // 0x46b9e0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x46b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46b9e4:
    // 0x46b9e4: 0x10000097  b           . + 4 + (0x97 << 2)
label_46b9e8:
    if (ctx->pc == 0x46B9E8u) {
        ctx->pc = 0x46B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B9E4u;
        // 0x46b9e8: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B9ECu;
        goto label_46b9ec;
    }
    ctx->pc = 0x46B9E4u;
    {
        const bool branch_taken_0x46b9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B9E4u;
        // 0x46b9e8: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b9e4) {
            ctx->pc = 0x46BC44u;
            goto label_46bc44;
        }
    }
    ctx->pc = 0x46B9ECu;
label_46b9ec:
    // 0x46b9ec: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x46b9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46b9f0:
    // 0x46b9f0: 0xd60018  mult        $zero, $a2, $s6
    ctx->pc = 0x46b9f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_46b9f4:
    // 0x46b9f4: 0x3012  mflo        $a2
    ctx->pc = 0x46b9f4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_46b9f8:
    // 0x46b9f8: 0xc11ef6c  jal         func_47BDB0
label_46b9fc:
    if (ctx->pc == 0x46B9FCu) {
        ctx->pc = 0x46B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B9F8u;
        // 0x46b9fc: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BA00u;
        goto label_46ba00;
    }
    ctx->pc = 0x46B9F8u;
    SET_GPR_U32(ctx, 31, 0x46BA00u);
    ctx->pc = 0x46B9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B9F8u;
    // 0x46b9fc: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BDB0u, 0x46B9F8u, 0x46BA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BA00u;
label_46ba00:
    // 0x46ba00: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_46ba04:
    if (ctx->pc == 0x46BA04u) {
        ctx->pc = 0x46BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BA00u;
        // 0x46ba04: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BA08u;
        goto label_46ba08;
    }
    ctx->pc = 0x46BA00u;
    {
        const bool branch_taken_0x46ba00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BA00u;
        // 0x46ba04: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ba00) {
            ctx->pc = 0x46BA94u;
            goto label_46ba94;
        }
    }
    ctx->pc = 0x46BA08u;
label_46ba08:
    // 0x46ba08: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x46ba08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46ba0c:
    // 0x46ba0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46ba10:
    // 0x46ba10: 0x1c40001d  bgtz        $v0, . + 4 + (0x1D << 2)
label_46ba14:
    if (ctx->pc == 0x46BA14u) {
        ctx->pc = 0x46BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BA10u;
        // 0x46ba14: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BA18u;
        goto label_46ba18;
    }
    ctx->pc = 0x46BA10u;
    {
        const bool branch_taken_0x46ba10 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x46BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BA10u;
        // 0x46ba14: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ba10) {
            ctx->pc = 0x46BA88u;
            goto label_46ba88;
        }
    }
    ctx->pc = 0x46BA18u;
label_46ba18:
    // 0x46ba18: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x46ba18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_46ba1c:
    // 0x46ba1c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_46ba20:
    if (ctx->pc == 0x46BA20u) {
        ctx->pc = 0x46BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BA1Cu;
        // 0x46ba20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BA24u;
        goto label_46ba24;
    }
    ctx->pc = 0x46BA1Cu;
    {
        const bool branch_taken_0x46ba1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ba1c) {
            ctx->pc = 0x46BA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46BA1Cu;
            // 0x46ba20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46BA30u;
            goto label_46ba30;
        }
    }
    ctx->pc = 0x46BA24u;
label_46ba24:
    // 0x46ba24: 0xc11fa54  jal         func_47E950
label_46ba28:
    if (ctx->pc == 0x46BA28u) {
        ctx->pc = 0x46BA2Cu;
        goto label_46ba2c;
    }
    ctx->pc = 0x46BA24u;
    SET_GPR_U32(ctx, 31, 0x46BA2Cu);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x46BA24u, 0x46BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BA2Cu;
label_46ba2c:
    // 0x46ba2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46ba2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46ba30:
    // 0x46ba30: 0xc11affa  jal         func_46BFE8
label_46ba34:
    if (ctx->pc == 0x46BA34u) {
        ctx->pc = 0x46BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BA30u;
        // 0x46ba34: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BA38u;
        goto label_46ba38;
    }
    ctx->pc = 0x46BA30u;
    SET_GPR_U32(ctx, 31, 0x46BA38u);
    ctx->pc = 0x46BA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BA30u;
    // 0x46ba34: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x46BA30u, 0x46BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BA38u;
label_46ba38:
    // 0x46ba38: 0x26a4e6e0  addiu       $a0, $s5, -0x1920
    ctx->pc = 0x46ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960864));
label_46ba3c:
    // 0x46ba3c: 0xc11ffb4  jal         func_47FED0
label_46ba40:
    if (ctx->pc == 0x46BA40u) {
        ctx->pc = 0x46BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BA3Cu;
        // 0x46ba40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BA44u;
        goto label_46ba44;
    }
    ctx->pc = 0x46BA3Cu;
    SET_GPR_U32(ctx, 31, 0x46BA44u);
    ctx->pc = 0x46BA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BA3Cu;
    // 0x46ba40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46BA3Cu, 0x46BA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BA44u;
label_46ba44:
    // 0x46ba44: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x46ba44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_46ba48:
    // 0x46ba48: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_46ba4c:
    if (ctx->pc == 0x46BA4Cu) {
        ctx->pc = 0x46BA50u;
        goto label_46ba50;
    }
    ctx->pc = 0x46BA48u;
    {
        const bool branch_taken_0x46ba48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ba48) {
            ctx->pc = 0x46BA60u;
            goto label_46ba60;
        }
    }
    ctx->pc = 0x46BA50u;
label_46ba50:
    // 0x46ba50: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x46ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_46ba54:
    // 0x46ba54: 0x40f809  jalr        $v0
label_46ba58:
    if (ctx->pc == 0x46BA58u) {
        ctx->pc = 0x46BA5Cu;
        goto label_46ba5c;
    }
    ctx->pc = 0x46BA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46BA5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BA54u, 0x46BA5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46BA5Cu;
label_46ba5c:
    // 0x46ba5c: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x46ba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_46ba60:
    // 0x46ba60: 0xc11b596  jal         func_46D658
label_46ba64:
    if (ctx->pc == 0x46BA64u) {
        ctx->pc = 0x46BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BA60u;
        // 0x46ba64: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BA68u;
        goto label_46ba68;
    }
    ctx->pc = 0x46BA60u;
    SET_GPR_U32(ctx, 31, 0x46BA68u);
    ctx->pc = 0x46BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BA60u;
    // 0x46ba64: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D658u, 0x46BA60u, 0x46BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BA68u;
label_46ba68:
    // 0x46ba68: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x46ba68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46ba6c:
    // 0x46ba6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46ba70:
    // 0x46ba70: 0xa643000e  sh          $v1, 0xE($s2)
    ctx->pc = 0x46ba70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 3));
label_46ba74:
    // 0x46ba74: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x46ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_46ba78:
    // 0x46ba78: 0x40f809  jalr        $v0
label_46ba7c:
    if (ctx->pc == 0x46BA7Cu) {
        ctx->pc = 0x46BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BA78u;
        // 0x46ba7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BA80u;
        goto label_46ba80;
    }
    ctx->pc = 0x46BA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46BA80u);
        ctx->pc = 0x46BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BA78u;
        // 0x46ba7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BA78u, 0x46BA80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46BA80u;
label_46ba80:
    // 0x46ba80: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_46ba84:
    if (ctx->pc == 0x46BA84u) {
        ctx->pc = 0x46BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BA80u;
        // 0x46ba84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BA88u;
        goto label_46ba88;
    }
    ctx->pc = 0x46BA80u;
    {
        const bool branch_taken_0x46ba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BA80u;
        // 0x46ba84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ba80) {
            ctx->pc = 0x46BE4Cu;
            goto label_46be4c;
        }
    }
    ctx->pc = 0x46BA88u;
label_46ba88:
    // 0x46ba88: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x46ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46ba8c:
    // 0x46ba8c: 0x1000006d  b           . + 4 + (0x6D << 2)
label_46ba90:
    if (ctx->pc == 0x46BA90u) {
        ctx->pc = 0x46BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BA8Cu;
        // 0x46ba90: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BA94u;
        goto label_46ba94;
    }
    ctx->pc = 0x46BA8Cu;
    {
        const bool branch_taken_0x46ba8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BA8Cu;
        // 0x46ba90: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ba8c) {
            ctx->pc = 0x46BC44u;
            goto label_46bc44;
        }
    }
    ctx->pc = 0x46BA94u;
label_46ba94:
    // 0x46ba94: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_46ba98:
    if (ctx->pc == 0x46BA98u) {
        ctx->pc = 0x46BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BA94u;
        // 0x46ba98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BA9Cu;
        goto label_46ba9c;
    }
    ctx->pc = 0x46BA94u;
    {
        const bool branch_taken_0x46ba94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BA94u;
        // 0x46ba98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ba94) {
            ctx->pc = 0x46BB44u;
            goto label_46bb44;
        }
    }
    ctx->pc = 0x46BA9Cu;
label_46ba9c:
    // 0x46ba9c: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x46ba9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46baa0:
    // 0x46baa0: 0xd60018  mult        $zero, $a2, $s6
    ctx->pc = 0x46baa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_46baa4:
    // 0x46baa4: 0x3012  mflo        $a2
    ctx->pc = 0x46baa4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_46baa8:
    // 0x46baa8: 0xc11ef6c  jal         func_47BDB0
label_46baac:
    if (ctx->pc == 0x46BAACu) {
        ctx->pc = 0x46BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BAA8u;
        // 0x46baac: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BAB0u;
        goto label_46bab0;
    }
    ctx->pc = 0x46BAA8u;
    SET_GPR_U32(ctx, 31, 0x46BAB0u);
    ctx->pc = 0x46BAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BAA8u;
    // 0x46baac: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BDB0u, 0x46BAA8u, 0x46BAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BAB0u;
label_46bab0:
    // 0x46bab0: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_46bab4:
    if (ctx->pc == 0x46BAB4u) {
        ctx->pc = 0x46BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BAB0u;
        // 0x46bab4: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BAB8u;
        goto label_46bab8;
    }
    ctx->pc = 0x46BAB0u;
    {
        const bool branch_taken_0x46bab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46bab0) {
            ctx->pc = 0x46BAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46BAB0u;
            // 0x46bab4: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46BB48u;
            goto label_46bb48;
        }
    }
    ctx->pc = 0x46BAB8u;
label_46bab8:
    // 0x46bab8: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x46bab8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46babc:
    // 0x46babc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46bac0:
    // 0x46bac0: 0x1c40001d  bgtz        $v0, . + 4 + (0x1D << 2)
label_46bac4:
    if (ctx->pc == 0x46BAC4u) {
        ctx->pc = 0x46BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BAC0u;
        // 0x46bac4: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BAC8u;
        goto label_46bac8;
    }
    ctx->pc = 0x46BAC0u;
    {
        const bool branch_taken_0x46bac0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x46BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BAC0u;
        // 0x46bac4: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bac0) {
            ctx->pc = 0x46BB38u;
            goto label_46bb38;
        }
    }
    ctx->pc = 0x46BAC8u;
label_46bac8:
    // 0x46bac8: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x46bac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_46bacc:
    // 0x46bacc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_46bad0:
    if (ctx->pc == 0x46BAD0u) {
        ctx->pc = 0x46BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BACCu;
        // 0x46bad0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BAD4u;
        goto label_46bad4;
    }
    ctx->pc = 0x46BACCu;
    {
        const bool branch_taken_0x46bacc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46bacc) {
            ctx->pc = 0x46BAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46BACCu;
            // 0x46bad0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46BAE0u;
            goto label_46bae0;
        }
    }
    ctx->pc = 0x46BAD4u;
label_46bad4:
    // 0x46bad4: 0xc11fa54  jal         func_47E950
label_46bad8:
    if (ctx->pc == 0x46BAD8u) {
        ctx->pc = 0x46BADCu;
        goto label_46badc;
    }
    ctx->pc = 0x46BAD4u;
    SET_GPR_U32(ctx, 31, 0x46BADCu);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x46BAD4u, 0x46BADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BADCu;
label_46badc:
    // 0x46badc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46badcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46bae0:
    // 0x46bae0: 0xc11affa  jal         func_46BFE8
label_46bae4:
    if (ctx->pc == 0x46BAE4u) {
        ctx->pc = 0x46BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BAE0u;
        // 0x46bae4: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BAE8u;
        goto label_46bae8;
    }
    ctx->pc = 0x46BAE0u;
    SET_GPR_U32(ctx, 31, 0x46BAE8u);
    ctx->pc = 0x46BAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BAE0u;
    // 0x46bae4: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x46BAE0u, 0x46BAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BAE8u;
label_46bae8:
    // 0x46bae8: 0x26a4e6e0  addiu       $a0, $s5, -0x1920
    ctx->pc = 0x46bae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960864));
label_46baec:
    // 0x46baec: 0xc11ffb4  jal         func_47FED0
label_46baf0:
    if (ctx->pc == 0x46BAF0u) {
        ctx->pc = 0x46BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BAECu;
        // 0x46baf0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BAF4u;
        goto label_46baf4;
    }
    ctx->pc = 0x46BAECu;
    SET_GPR_U32(ctx, 31, 0x46BAF4u);
    ctx->pc = 0x46BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BAECu;
    // 0x46baf0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46BAECu, 0x46BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BAF4u;
label_46baf4:
    // 0x46baf4: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x46baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_46baf8:
    // 0x46baf8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_46bafc:
    if (ctx->pc == 0x46BAFCu) {
        ctx->pc = 0x46BB00u;
        goto label_46bb00;
    }
    ctx->pc = 0x46BAF8u;
    {
        const bool branch_taken_0x46baf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46baf8) {
            ctx->pc = 0x46BB10u;
            goto label_46bb10;
        }
    }
    ctx->pc = 0x46BB00u;
label_46bb00:
    // 0x46bb00: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x46bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_46bb04:
    // 0x46bb04: 0x40f809  jalr        $v0
label_46bb08:
    if (ctx->pc == 0x46BB08u) {
        ctx->pc = 0x46BB0Cu;
        goto label_46bb0c;
    }
    ctx->pc = 0x46BB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46BB0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BB04u, 0x46BB0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46BB0Cu;
label_46bb0c:
    // 0x46bb0c: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x46bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_46bb10:
    // 0x46bb10: 0xc11b596  jal         func_46D658
label_46bb14:
    if (ctx->pc == 0x46BB14u) {
        ctx->pc = 0x46BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BB10u;
        // 0x46bb14: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BB18u;
        goto label_46bb18;
    }
    ctx->pc = 0x46BB10u;
    SET_GPR_U32(ctx, 31, 0x46BB18u);
    ctx->pc = 0x46BB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BB10u;
    // 0x46bb14: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D658u, 0x46BB10u, 0x46BB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BB18u;
label_46bb18:
    // 0x46bb18: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x46bb18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46bb1c:
    // 0x46bb1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46bb20:
    // 0x46bb20: 0xa643000e  sh          $v1, 0xE($s2)
    ctx->pc = 0x46bb20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 3));
label_46bb24:
    // 0x46bb24: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x46bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_46bb28:
    // 0x46bb28: 0x40f809  jalr        $v0
label_46bb2c:
    if (ctx->pc == 0x46BB2Cu) {
        ctx->pc = 0x46BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BB28u;
        // 0x46bb2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BB30u;
        goto label_46bb30;
    }
    ctx->pc = 0x46BB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46BB30u);
        ctx->pc = 0x46BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BB28u;
        // 0x46bb2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BB28u, 0x46BB30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46BB30u;
label_46bb30:
    // 0x46bb30: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_46bb34:
    if (ctx->pc == 0x46BB34u) {
        ctx->pc = 0x46BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BB30u;
        // 0x46bb34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BB38u;
        goto label_46bb38;
    }
    ctx->pc = 0x46BB30u;
    {
        const bool branch_taken_0x46bb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BB30u;
        // 0x46bb34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bb30) {
            ctx->pc = 0x46BE4Cu;
            goto label_46be4c;
        }
    }
    ctx->pc = 0x46BB38u;
label_46bb38:
    // 0x46bb38: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x46bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46bb3c:
    // 0x46bb3c: 0x10000041  b           . + 4 + (0x41 << 2)
label_46bb40:
    if (ctx->pc == 0x46BB40u) {
        ctx->pc = 0x46BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BB3Cu;
        // 0x46bb40: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BB44u;
        goto label_46bb44;
    }
    ctx->pc = 0x46BB3Cu;
    {
        const bool branch_taken_0x46bb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BB3Cu;
        // 0x46bb40: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bb3c) {
            ctx->pc = 0x46BC44u;
            goto label_46bc44;
        }
    }
    ctx->pc = 0x46BB44u;
label_46bb44:
    // 0x46bb44: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x46bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_46bb48:
    // 0x46bb48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x46bb48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_46bb4c:
    // 0x46bb4c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x46bb4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_46bb50:
    // 0x46bb50: 0x1440ff41  bnez        $v0, . + 4 + (-0xBF << 2)
label_46bb54:
    if (ctx->pc == 0x46BB54u) {
        ctx->pc = 0x46BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BB50u;
        // 0x46bb54: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BB58u;
        goto label_46bb58;
    }
    ctx->pc = 0x46BB50u;
    {
        const bool branch_taken_0x46bb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BB50u;
        // 0x46bb54: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bb50) {
            ctx->pc = 0x46B858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46b858;
        }
    }
    ctx->pc = 0x46BB58u;
label_46bb58:
    // 0x46bb58: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x46bb58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_46bb5c:
    // 0x46bb5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46bb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46bb60:
    // 0x46bb60: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x46bb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_46bb64:
    // 0x46bb64: 0xc11eeae  jal         func_47BAB8
label_46bb68:
    if (ctx->pc == 0x46BB68u) {
        ctx->pc = 0x46BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BB64u;
        // 0x46bb68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BB6Cu;
        goto label_46bb6c;
    }
    ctx->pc = 0x46BB64u;
    SET_GPR_U32(ctx, 31, 0x46BB6Cu);
    ctx->pc = 0x46BB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BB64u;
    // 0x46bb68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x46BB64u, 0x46BB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BB6Cu;
label_46bb6c:
    // 0x46bb6c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_46bb70:
    if (ctx->pc == 0x46BB70u) {
        ctx->pc = 0x46BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BB6Cu;
        // 0x46bb70: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BB74u;
        goto label_46bb74;
    }
    ctx->pc = 0x46BB6Cu;
    {
        const bool branch_taken_0x46bb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BB6Cu;
        // 0x46bb70: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bb6c) {
            ctx->pc = 0x46BC44u;
            goto label_46bc44;
        }
    }
    ctx->pc = 0x46BB74u;
label_46bb74:
    // 0x46bb74: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x46bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_46bb78:
    // 0x46bb78: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x46bb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_46bb7c:
    // 0x46bb7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x46bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46bb80:
    // 0x46bb80: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x46bb80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_46bb84:
    // 0x46bb84: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
label_46bb88:
    if (ctx->pc == 0x46BB88u) {
        ctx->pc = 0x46BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BB84u;
        // 0x46bb88: 0x26500020  addiu       $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BB8Cu;
        goto label_46bb8c;
    }
    ctx->pc = 0x46BB84u;
    {
        const bool branch_taken_0x46bb84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BB84u;
        // 0x46bb88: 0x26500020  addiu       $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bb84) {
            ctx->pc = 0x46BC4Cu;
            goto label_46bc4c;
        }
    }
    ctx->pc = 0x46BB8Cu;
label_46bb8c:
    // 0x46bb8c: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x46bb8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46bb90:
    // 0x46bb90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46bb94:
    // 0x46bb94: 0x1c400021  bgtz        $v0, . + 4 + (0x21 << 2)
label_46bb98:
    if (ctx->pc == 0x46BB98u) {
        ctx->pc = 0x46BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BB94u;
        // 0x46bb98: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BB9Cu;
        goto label_46bb9c;
    }
    ctx->pc = 0x46BB94u;
    {
        const bool branch_taken_0x46bb94 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x46BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BB94u;
        // 0x46bb98: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bb94) {
            ctx->pc = 0x46BC1Cu;
            goto label_46bc1c;
        }
    }
    ctx->pc = 0x46BB9Cu;
label_46bb9c:
    // 0x46bb9c: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x46bb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_46bba0:
    // 0x46bba0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_46bba4:
    if (ctx->pc == 0x46BBA4u) {
        ctx->pc = 0x46BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BBA0u;
        // 0x46bba4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BBA8u;
        goto label_46bba8;
    }
    ctx->pc = 0x46BBA0u;
    {
        const bool branch_taken_0x46bba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46bba0) {
            ctx->pc = 0x46BBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46BBA0u;
            // 0x46bba4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46BBB4u;
            goto label_46bbb4;
        }
    }
    ctx->pc = 0x46BBA8u;
label_46bba8:
    // 0x46bba8: 0xc11fa54  jal         func_47E950
label_46bbac:
    if (ctx->pc == 0x46BBACu) {
        ctx->pc = 0x46BBB0u;
        goto label_46bbb0;
    }
    ctx->pc = 0x46BBA8u;
    SET_GPR_U32(ctx, 31, 0x46BBB0u);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x46BBA8u, 0x46BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BBB0u;
label_46bbb0:
    // 0x46bbb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46bbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46bbb4:
    // 0x46bbb4: 0xc11affa  jal         func_46BFE8
label_46bbb8:
    if (ctx->pc == 0x46BBB8u) {
        ctx->pc = 0x46BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BBB4u;
        // 0x46bbb8: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BBBCu;
        goto label_46bbbc;
    }
    ctx->pc = 0x46BBB4u;
    SET_GPR_U32(ctx, 31, 0x46BBBCu);
    ctx->pc = 0x46BBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BBB4u;
    // 0x46bbb8: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x46BBB4u, 0x46BBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BBBCu;
label_46bbbc:
    // 0x46bbbc: 0x3c130071  lui         $s3, 0x71
    ctx->pc = 0x46bbbcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
label_46bbc0:
    // 0x46bbc0: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46bbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_46bbc4:
    // 0x46bbc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46bbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46bbc8:
    // 0x46bbc8: 0xc11ffb4  jal         func_47FED0
label_46bbcc:
    if (ctx->pc == 0x46BBCCu) {
        ctx->pc = 0x46BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BBC8u;
        // 0x46bbcc: 0x2484e6e0  addiu       $a0, $a0, -0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BBD0u;
        goto label_46bbd0;
    }
    ctx->pc = 0x46BBC8u;
    SET_GPR_U32(ctx, 31, 0x46BBD0u);
    ctx->pc = 0x46BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BBC8u;
    // 0x46bbcc: 0x2484e6e0  addiu       $a0, $a0, -0x1920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46BBC8u, 0x46BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BBD0u;
label_46bbd0:
    // 0x46bbd0: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x46bbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_46bbd4:
    // 0x46bbd4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_46bbd8:
    if (ctx->pc == 0x46BBD8u) {
        ctx->pc = 0x46BBDCu;
        goto label_46bbdc;
    }
    ctx->pc = 0x46BBD4u;
    {
        const bool branch_taken_0x46bbd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46bbd4) {
            ctx->pc = 0x46BBF0u;
            goto label_46bbf0;
        }
    }
    ctx->pc = 0x46BBDCu;
label_46bbdc:
    // 0x46bbdc: 0x2662ad18  addiu       $v0, $s3, -0x52E8
    ctx->pc = 0x46bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
label_46bbe0:
    // 0x46bbe0: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x46bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_46bbe4:
    // 0x46bbe4: 0x60f809  jalr        $v1
label_46bbe8:
    if (ctx->pc == 0x46BBE8u) {
        ctx->pc = 0x46BBECu;
        goto label_46bbec;
    }
    ctx->pc = 0x46BBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x46BBECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BBE4u, 0x46BBECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46BBECu;
label_46bbec:
    // 0x46bbec: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x46bbecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_46bbf0:
    // 0x46bbf0: 0xc11b596  jal         func_46D658
label_46bbf4:
    if (ctx->pc == 0x46BBF4u) {
        ctx->pc = 0x46BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BBF0u;
        // 0x46bbf4: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BBF8u;
        goto label_46bbf8;
    }
    ctx->pc = 0x46BBF0u;
    SET_GPR_U32(ctx, 31, 0x46BBF8u);
    ctx->pc = 0x46BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BBF0u;
    // 0x46bbf4: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D658u, 0x46BBF0u, 0x46BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BBF8u;
label_46bbf8:
    // 0x46bbf8: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x46bbf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46bbfc:
    // 0x46bbfc: 0x2665ad18  addiu       $a1, $s3, -0x52E8
    ctx->pc = 0x46bbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
label_46bc00:
    // 0x46bc00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46bc04:
    // 0x46bc04: 0xa643000e  sh          $v1, 0xE($s2)
    ctx->pc = 0x46bc04u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 3));
label_46bc08:
    // 0x46bc08: 0x8ca2010c  lw          $v0, 0x10C($a1)
    ctx->pc = 0x46bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
label_46bc0c:
    // 0x46bc0c: 0x40f809  jalr        $v0
label_46bc10:
    if (ctx->pc == 0x46BC10u) {
        ctx->pc = 0x46BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BC0Cu;
        // 0x46bc10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BC14u;
        goto label_46bc14;
    }
    ctx->pc = 0x46BC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46BC14u);
        ctx->pc = 0x46BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BC0Cu;
        // 0x46bc10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BC0Cu, 0x46BC14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46BC14u;
label_46bc14:
    // 0x46bc14: 0x10000004  b           . + 4 + (0x4 << 2)
label_46bc18:
    if (ctx->pc == 0x46BC18u) {
        ctx->pc = 0x46BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BC14u;
        // 0x46bc18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BC1Cu;
        goto label_46bc1c;
    }
    ctx->pc = 0x46BC14u;
    {
        const bool branch_taken_0x46bc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BC14u;
        // 0x46bc18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bc14) {
            ctx->pc = 0x46BC28u;
            goto label_46bc28;
        }
    }
    ctx->pc = 0x46BC1Cu;
label_46bc1c:
    // 0x46bc1c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x46bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46bc20:
    // 0x46bc20: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x46bc20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
label_46bc24:
    // 0x46bc24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46bc28:
    // 0x46bc28: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x46bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_46bc2c:
    // 0x46bc2c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x46bc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_46bc30:
    // 0x46bc30: 0xc11eff2  jal         func_47BFC8
label_46bc34:
    if (ctx->pc == 0x46BC34u) {
        ctx->pc = 0x46BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BC30u;
        // 0x46bc34: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BC38u;
        goto label_46bc38;
    }
    ctx->pc = 0x46BC30u;
    SET_GPR_U32(ctx, 31, 0x46BC38u);
    ctx->pc = 0x46BC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BC30u;
    // 0x46bc34: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x46BC30u, 0x46BC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BC38u;
label_46bc38:
    // 0x46bc38: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x46bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_46bc3c:
    // 0x46bc3c: 0xc11f024  jal         func_47C090
label_46bc40:
    if (ctx->pc == 0x46BC40u) {
        ctx->pc = 0x46BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BC3Cu;
        // 0x46bc40: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BC44u;
        goto label_46bc44;
    }
    ctx->pc = 0x46BC3Cu;
    SET_GPR_U32(ctx, 31, 0x46BC44u);
    ctx->pc = 0x46BC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BC3Cu;
    // 0x46bc40: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x46BC3Cu, 0x46BC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BC44u;
label_46bc44:
    // 0x46bc44: 0x10000081  b           . + 4 + (0x81 << 2)
label_46bc48:
    if (ctx->pc == 0x46BC48u) {
        ctx->pc = 0x46BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BC44u;
        // 0x46bc48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BC4Cu;
        goto label_46bc4c;
    }
    ctx->pc = 0x46BC44u;
    {
        const bool branch_taken_0x46bc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BC44u;
        // 0x46bc48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bc44) {
            ctx->pc = 0x46BE4Cu;
            goto label_46be4c;
        }
    }
    ctx->pc = 0x46BC4Cu;
label_46bc4c:
    // 0x46bc4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46bc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46bc50:
    // 0x46bc50: 0xc11b48e  jal         func_46D238
label_46bc54:
    if (ctx->pc == 0x46BC54u) {
        ctx->pc = 0x46BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BC50u;
        // 0x46bc54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BC58u;
        goto label_46bc58;
    }
    ctx->pc = 0x46BC50u;
    SET_GPR_U32(ctx, 31, 0x46BC58u);
    ctx->pc = 0x46BC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BC50u;
    // 0x46bc54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D238u, 0x46BC50u, 0x46BC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BC58u;
label_46bc58:
    // 0x46bc58: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_46bc5c:
    if (ctx->pc == 0x46BC5Cu) {
        ctx->pc = 0x46BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BC58u;
        // 0x46bc5c: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BC60u;
        goto label_46bc60;
    }
    ctx->pc = 0x46BC58u;
    {
        const bool branch_taken_0x46bc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BC58u;
        // 0x46bc5c: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bc58) {
            ctx->pc = 0x46BCF8u;
            goto label_46bcf8;
        }
    }
    ctx->pc = 0x46BC60u;
label_46bc60:
    // 0x46bc60: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x46bc60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46bc64:
    // 0x46bc64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46bc68:
    // 0x46bc68: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
label_46bc6c:
    if (ctx->pc == 0x46BC6Cu) {
        ctx->pc = 0x46BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BC68u;
        // 0x46bc6c: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BC70u;
        goto label_46bc70;
    }
    ctx->pc = 0x46BC68u;
    {
        const bool branch_taken_0x46bc68 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x46BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BC68u;
        // 0x46bc6c: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bc68) {
            ctx->pc = 0x46BCECu;
            goto label_46bcec;
        }
    }
    ctx->pc = 0x46BC70u;
label_46bc70:
    // 0x46bc70: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x46bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_46bc74:
    // 0x46bc74: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_46bc78:
    if (ctx->pc == 0x46BC78u) {
        ctx->pc = 0x46BC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BC74u;
        // 0x46bc78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BC7Cu;
        goto label_46bc7c;
    }
    ctx->pc = 0x46BC74u;
    {
        const bool branch_taken_0x46bc74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46bc74) {
            ctx->pc = 0x46BC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46BC74u;
            // 0x46bc78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46BC88u;
            goto label_46bc88;
        }
    }
    ctx->pc = 0x46BC7Cu;
label_46bc7c:
    // 0x46bc7c: 0xc11fa54  jal         func_47E950
label_46bc80:
    if (ctx->pc == 0x46BC80u) {
        ctx->pc = 0x46BC84u;
        goto label_46bc84;
    }
    ctx->pc = 0x46BC7Cu;
    SET_GPR_U32(ctx, 31, 0x46BC84u);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x46BC7Cu, 0x46BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BC84u;
label_46bc84:
    // 0x46bc84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46bc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46bc88:
    // 0x46bc88: 0xc11affa  jal         func_46BFE8
label_46bc8c:
    if (ctx->pc == 0x46BC8Cu) {
        ctx->pc = 0x46BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BC88u;
        // 0x46bc8c: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BC90u;
        goto label_46bc90;
    }
    ctx->pc = 0x46BC88u;
    SET_GPR_U32(ctx, 31, 0x46BC90u);
    ctx->pc = 0x46BC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BC88u;
    // 0x46bc8c: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x46BC88u, 0x46BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BC90u;
label_46bc90:
    // 0x46bc90: 0x3c130071  lui         $s3, 0x71
    ctx->pc = 0x46bc90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
label_46bc94:
    // 0x46bc94: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46bc94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_46bc98:
    // 0x46bc98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46bc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46bc9c:
    // 0x46bc9c: 0xc11ffb4  jal         func_47FED0
label_46bca0:
    if (ctx->pc == 0x46BCA0u) {
        ctx->pc = 0x46BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BC9Cu;
        // 0x46bca0: 0x2484e6e0  addiu       $a0, $a0, -0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BCA4u;
        goto label_46bca4;
    }
    ctx->pc = 0x46BC9Cu;
    SET_GPR_U32(ctx, 31, 0x46BCA4u);
    ctx->pc = 0x46BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BC9Cu;
    // 0x46bca0: 0x2484e6e0  addiu       $a0, $a0, -0x1920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46BC9Cu, 0x46BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BCA4u;
label_46bca4:
    // 0x46bca4: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x46bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_46bca8:
    // 0x46bca8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_46bcac:
    if (ctx->pc == 0x46BCACu) {
        ctx->pc = 0x46BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BCA8u;
        // 0x46bcac: 0x2662ad18  addiu       $v0, $s3, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BCB0u;
        goto label_46bcb0;
    }
    ctx->pc = 0x46BCA8u;
    {
        const bool branch_taken_0x46bca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BCA8u;
        // 0x46bcac: 0x2662ad18  addiu       $v0, $s3, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bca8) {
            ctx->pc = 0x46BCC0u;
            goto label_46bcc0;
        }
    }
    ctx->pc = 0x46BCB0u;
label_46bcb0:
    // 0x46bcb0: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x46bcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_46bcb4:
    // 0x46bcb4: 0x60f809  jalr        $v1
label_46bcb8:
    if (ctx->pc == 0x46BCB8u) {
        ctx->pc = 0x46BCBCu;
        goto label_46bcbc;
    }
    ctx->pc = 0x46BCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x46BCBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BCB4u, 0x46BCBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46BCBCu;
label_46bcbc:
    // 0x46bcbc: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x46bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_46bcc0:
    // 0x46bcc0: 0xc11b596  jal         func_46D658
label_46bcc4:
    if (ctx->pc == 0x46BCC4u) {
        ctx->pc = 0x46BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BCC0u;
        // 0x46bcc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BCC8u;
        goto label_46bcc8;
    }
    ctx->pc = 0x46BCC0u;
    SET_GPR_U32(ctx, 31, 0x46BCC8u);
    ctx->pc = 0x46BCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BCC0u;
    // 0x46bcc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D658u, 0x46BCC0u, 0x46BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BCC8u;
label_46bcc8:
    // 0x46bcc8: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x46bcc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46bccc:
    // 0x46bccc: 0x2665ad18  addiu       $a1, $s3, -0x52E8
    ctx->pc = 0x46bcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
label_46bcd0:
    // 0x46bcd0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46bcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46bcd4:
    // 0x46bcd4: 0xa643000e  sh          $v1, 0xE($s2)
    ctx->pc = 0x46bcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 3));
label_46bcd8:
    // 0x46bcd8: 0x8ca2010c  lw          $v0, 0x10C($a1)
    ctx->pc = 0x46bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
label_46bcdc:
    // 0x46bcdc: 0x40f809  jalr        $v0
label_46bce0:
    if (ctx->pc == 0x46BCE0u) {
        ctx->pc = 0x46BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BCDCu;
        // 0x46bce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BCE4u;
        goto label_46bce4;
    }
    ctx->pc = 0x46BCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46BCE4u);
        ctx->pc = 0x46BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BCDCu;
        // 0x46bce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BCDCu, 0x46BCE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46BCE4u;
label_46bce4:
    // 0x46bce4: 0x10000059  b           . + 4 + (0x59 << 2)
label_46bce8:
    if (ctx->pc == 0x46BCE8u) {
        ctx->pc = 0x46BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BCE4u;
        // 0x46bce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BCECu;
        goto label_46bcec;
    }
    ctx->pc = 0x46BCE4u;
    {
        const bool branch_taken_0x46bce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BCE4u;
        // 0x46bce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bce4) {
            ctx->pc = 0x46BE4Cu;
            goto label_46be4c;
        }
    }
    ctx->pc = 0x46BCECu;
label_46bcec:
    // 0x46bcec: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x46bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46bcf0:
    // 0x46bcf0: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
label_46bcf4:
    if (ctx->pc == 0x46BCF4u) {
        ctx->pc = 0x46BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BCF0u;
        // 0x46bcf4: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BCF8u;
        goto label_46bcf8;
    }
    ctx->pc = 0x46BCF0u;
    {
        const bool branch_taken_0x46bcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BCF0u;
        // 0x46bcf4: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bcf0) {
            ctx->pc = 0x46BC44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46bc44;
        }
    }
    ctx->pc = 0x46BCF8u;
label_46bcf8:
    // 0x46bcf8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x46bcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46bcfc:
    // 0x46bcfc: 0x2451e6e0  addiu       $s1, $v0, -0x1920
    ctx->pc = 0x46bcfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960864));
label_46bd00:
    // 0x46bd00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x46bd00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46bd04:
    // 0x46bd04: 0xc11fd22  jal         func_47F488
label_46bd08:
    if (ctx->pc == 0x46BD08u) {
        ctx->pc = 0x46BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BD04u;
        // 0x46bd08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BD0Cu;
        goto label_46bd0c;
    }
    ctx->pc = 0x46BD04u;
    SET_GPR_U32(ctx, 31, 0x46BD0Cu);
    ctx->pc = 0x46BD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BD04u;
    // 0x46bd08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F488u, 0x46BD04u, 0x46BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BD0Cu;
label_46bd0c:
    // 0x46bd0c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_46bd10:
    if (ctx->pc == 0x46BD10u) {
        ctx->pc = 0x46BD14u;
        goto label_46bd14;
    }
    ctx->pc = 0x46BD0Cu;
    {
        const bool branch_taken_0x46bd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46bd0c) {
            ctx->pc = 0x46BDA8u;
            goto label_46bda8;
        }
    }
    ctx->pc = 0x46BD14u;
label_46bd14:
    // 0x46bd14: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x46bd14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46bd18:
    // 0x46bd18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46bd1c:
    // 0x46bd1c: 0x1c40001f  bgtz        $v0, . + 4 + (0x1F << 2)
label_46bd20:
    if (ctx->pc == 0x46BD20u) {
        ctx->pc = 0x46BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BD1Cu;
        // 0x46bd20: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BD24u;
        goto label_46bd24;
    }
    ctx->pc = 0x46BD1Cu;
    {
        const bool branch_taken_0x46bd1c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x46BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BD1Cu;
        // 0x46bd20: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bd1c) {
            ctx->pc = 0x46BD9Cu;
            goto label_46bd9c;
        }
    }
    ctx->pc = 0x46BD24u;
label_46bd24:
    // 0x46bd24: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x46bd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_46bd28:
    // 0x46bd28: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_46bd2c:
    if (ctx->pc == 0x46BD2Cu) {
        ctx->pc = 0x46BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BD28u;
        // 0x46bd2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BD30u;
        goto label_46bd30;
    }
    ctx->pc = 0x46BD28u;
    {
        const bool branch_taken_0x46bd28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46bd28) {
            ctx->pc = 0x46BD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46BD28u;
            // 0x46bd2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46BD3Cu;
            goto label_46bd3c;
        }
    }
    ctx->pc = 0x46BD30u;
label_46bd30:
    // 0x46bd30: 0xc11fa54  jal         func_47E950
label_46bd34:
    if (ctx->pc == 0x46BD34u) {
        ctx->pc = 0x46BD38u;
        goto label_46bd38;
    }
    ctx->pc = 0x46BD30u;
    SET_GPR_U32(ctx, 31, 0x46BD38u);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x46BD30u, 0x46BD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BD38u;
label_46bd38:
    // 0x46bd38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46bd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46bd3c:
    // 0x46bd3c: 0xc11affa  jal         func_46BFE8
label_46bd40:
    if (ctx->pc == 0x46BD40u) {
        ctx->pc = 0x46BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BD3Cu;
        // 0x46bd40: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BD44u;
        goto label_46bd44;
    }
    ctx->pc = 0x46BD3Cu;
    SET_GPR_U32(ctx, 31, 0x46BD44u);
    ctx->pc = 0x46BD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BD3Cu;
    // 0x46bd40: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x46BD3Cu, 0x46BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BD44u;
label_46bd44:
    // 0x46bd44: 0x3c130071  lui         $s3, 0x71
    ctx->pc = 0x46bd44u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
label_46bd48:
    // 0x46bd48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46bd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46bd4c:
    // 0x46bd4c: 0xc11ffb4  jal         func_47FED0
label_46bd50:
    if (ctx->pc == 0x46BD50u) {
        ctx->pc = 0x46BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BD4Cu;
        // 0x46bd50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BD54u;
        goto label_46bd54;
    }
    ctx->pc = 0x46BD4Cu;
    SET_GPR_U32(ctx, 31, 0x46BD54u);
    ctx->pc = 0x46BD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BD4Cu;
    // 0x46bd50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46BD4Cu, 0x46BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BD54u;
label_46bd54:
    // 0x46bd54: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x46bd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_46bd58:
    // 0x46bd58: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_46bd5c:
    if (ctx->pc == 0x46BD5Cu) {
        ctx->pc = 0x46BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BD58u;
        // 0x46bd5c: 0x2662ad18  addiu       $v0, $s3, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BD60u;
        goto label_46bd60;
    }
    ctx->pc = 0x46BD58u;
    {
        const bool branch_taken_0x46bd58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BD58u;
        // 0x46bd5c: 0x2662ad18  addiu       $v0, $s3, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bd58) {
            ctx->pc = 0x46BD70u;
            goto label_46bd70;
        }
    }
    ctx->pc = 0x46BD60u;
label_46bd60:
    // 0x46bd60: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x46bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_46bd64:
    // 0x46bd64: 0x60f809  jalr        $v1
label_46bd68:
    if (ctx->pc == 0x46BD68u) {
        ctx->pc = 0x46BD6Cu;
        goto label_46bd6c;
    }
    ctx->pc = 0x46BD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x46BD6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BD64u, 0x46BD6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46BD6Cu;
label_46bd6c:
    // 0x46bd6c: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x46bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_46bd70:
    // 0x46bd70: 0xc11b596  jal         func_46D658
label_46bd74:
    if (ctx->pc == 0x46BD74u) {
        ctx->pc = 0x46BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BD70u;
        // 0x46bd74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BD78u;
        goto label_46bd78;
    }
    ctx->pc = 0x46BD70u;
    SET_GPR_U32(ctx, 31, 0x46BD78u);
    ctx->pc = 0x46BD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BD70u;
    // 0x46bd74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D658u, 0x46BD70u, 0x46BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BD78u;
label_46bd78:
    // 0x46bd78: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x46bd78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46bd7c:
    // 0x46bd7c: 0x2665ad18  addiu       $a1, $s3, -0x52E8
    ctx->pc = 0x46bd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
label_46bd80:
    // 0x46bd80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46bd84:
    // 0x46bd84: 0xa643000e  sh          $v1, 0xE($s2)
    ctx->pc = 0x46bd84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 3));
label_46bd88:
    // 0x46bd88: 0x8ca2010c  lw          $v0, 0x10C($a1)
    ctx->pc = 0x46bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
label_46bd8c:
    // 0x46bd8c: 0x40f809  jalr        $v0
label_46bd90:
    if (ctx->pc == 0x46BD90u) {
        ctx->pc = 0x46BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BD8Cu;
        // 0x46bd90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BD94u;
        goto label_46bd94;
    }
    ctx->pc = 0x46BD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46BD94u);
        ctx->pc = 0x46BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BD8Cu;
        // 0x46bd90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BD8Cu, 0x46BD94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46BD94u;
label_46bd94:
    // 0x46bd94: 0x1000002d  b           . + 4 + (0x2D << 2)
label_46bd98:
    if (ctx->pc == 0x46BD98u) {
        ctx->pc = 0x46BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BD94u;
        // 0x46bd98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BD9Cu;
        goto label_46bd9c;
    }
    ctx->pc = 0x46BD94u;
    {
        const bool branch_taken_0x46bd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BD94u;
        // 0x46bd98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bd94) {
            ctx->pc = 0x46BE4Cu;
            goto label_46be4c;
        }
    }
    ctx->pc = 0x46BD9Cu;
label_46bd9c:
    // 0x46bd9c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x46bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46bda0:
    // 0x46bda0: 0x1000ffa8  b           . + 4 + (-0x58 << 2)
label_46bda4:
    if (ctx->pc == 0x46BDA4u) {
        ctx->pc = 0x46BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BDA0u;
        // 0x46bda4: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BDA8u;
        goto label_46bda8;
    }
    ctx->pc = 0x46BDA0u;
    {
        const bool branch_taken_0x46bda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BDA0u;
        // 0x46bda4: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bda0) {
            ctx->pc = 0x46BC44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46bc44;
        }
    }
    ctx->pc = 0x46BDA8u;
label_46bda8:
    // 0x46bda8: 0xc11aba8  jal         func_46AEA0
label_46bdac:
    if (ctx->pc == 0x46BDACu) {
        ctx->pc = 0x46BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BDA8u;
        // 0x46bdac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BDB0u;
        goto label_46bdb0;
    }
    ctx->pc = 0x46BDA8u;
    SET_GPR_U32(ctx, 31, 0x46BDB0u);
    ctx->pc = 0x46BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BDA8u;
    // 0x46bdac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AEA0u, 0x46BDA8u, 0x46BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BDB0u;
label_46bdb0:
    // 0x46bdb0: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_46bdb4:
    if (ctx->pc == 0x46BDB4u) {
        ctx->pc = 0x46BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BDB0u;
        // 0x46bdb4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BDB8u;
        goto label_46bdb8;
    }
    ctx->pc = 0x46BDB0u;
    {
        const bool branch_taken_0x46bdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BDB0u;
        // 0x46bdb4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bdb0) {
            ctx->pc = 0x46BE4Cu;
            goto label_46be4c;
        }
    }
    ctx->pc = 0x46BDB8u;
label_46bdb8:
    // 0x46bdb8: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x46bdb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46bdbc:
    // 0x46bdbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46bdc0:
    // 0x46bdc0: 0x1c40001f  bgtz        $v0, . + 4 + (0x1F << 2)
label_46bdc4:
    if (ctx->pc == 0x46BDC4u) {
        ctx->pc = 0x46BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BDC0u;
        // 0x46bdc4: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BDC8u;
        goto label_46bdc8;
    }
    ctx->pc = 0x46BDC0u;
    {
        const bool branch_taken_0x46bdc0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x46BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BDC0u;
        // 0x46bdc4: 0x9643000e  lhu         $v1, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bdc0) {
            ctx->pc = 0x46BE40u;
            goto label_46be40;
        }
    }
    ctx->pc = 0x46BDC8u;
label_46bdc8:
    // 0x46bdc8: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x46bdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_46bdcc:
    // 0x46bdcc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_46bdd0:
    if (ctx->pc == 0x46BDD0u) {
        ctx->pc = 0x46BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BDCCu;
        // 0x46bdd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BDD4u;
        goto label_46bdd4;
    }
    ctx->pc = 0x46BDCCu;
    {
        const bool branch_taken_0x46bdcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46bdcc) {
            ctx->pc = 0x46BDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46BDCCu;
            // 0x46bdd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46BDE0u;
            goto label_46bde0;
        }
    }
    ctx->pc = 0x46BDD4u;
label_46bdd4:
    // 0x46bdd4: 0xc11fa54  jal         func_47E950
label_46bdd8:
    if (ctx->pc == 0x46BDD8u) {
        ctx->pc = 0x46BDDCu;
        goto label_46bddc;
    }
    ctx->pc = 0x46BDD4u;
    SET_GPR_U32(ctx, 31, 0x46BDDCu);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x46BDD4u, 0x46BDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BDDCu;
label_46bddc:
    // 0x46bddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46bddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46bde0:
    // 0x46bde0: 0xc11affa  jal         func_46BFE8
label_46bde4:
    if (ctx->pc == 0x46BDE4u) {
        ctx->pc = 0x46BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BDE0u;
        // 0x46bde4: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BDE8u;
        goto label_46bde8;
    }
    ctx->pc = 0x46BDE0u;
    SET_GPR_U32(ctx, 31, 0x46BDE8u);
    ctx->pc = 0x46BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BDE0u;
    // 0x46bde4: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x46BDE0u, 0x46BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BDE8u;
label_46bde8:
    // 0x46bde8: 0x3c130071  lui         $s3, 0x71
    ctx->pc = 0x46bde8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
label_46bdec:
    // 0x46bdec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46bdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46bdf0:
    // 0x46bdf0: 0xc11ffb4  jal         func_47FED0
label_46bdf4:
    if (ctx->pc == 0x46BDF4u) {
        ctx->pc = 0x46BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BDF0u;
        // 0x46bdf4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BDF8u;
        goto label_46bdf8;
    }
    ctx->pc = 0x46BDF0u;
    SET_GPR_U32(ctx, 31, 0x46BDF8u);
    ctx->pc = 0x46BDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BDF0u;
    // 0x46bdf4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46BDF0u, 0x46BDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BDF8u;
label_46bdf8:
    // 0x46bdf8: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x46bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_46bdfc:
    // 0x46bdfc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_46be00:
    if (ctx->pc == 0x46BE00u) {
        ctx->pc = 0x46BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BDFCu;
        // 0x46be00: 0x2662ad18  addiu       $v0, $s3, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BE04u;
        goto label_46be04;
    }
    ctx->pc = 0x46BDFCu;
    {
        const bool branch_taken_0x46bdfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BDFCu;
        // 0x46be00: 0x2662ad18  addiu       $v0, $s3, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bdfc) {
            ctx->pc = 0x46BE14u;
            goto label_46be14;
        }
    }
    ctx->pc = 0x46BE04u;
label_46be04:
    // 0x46be04: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x46be04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_46be08:
    // 0x46be08: 0x60f809  jalr        $v1
label_46be0c:
    if (ctx->pc == 0x46BE0Cu) {
        ctx->pc = 0x46BE10u;
        goto label_46be10;
    }
    ctx->pc = 0x46BE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x46BE10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BE08u, 0x46BE10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46BE10u;
label_46be10:
    // 0x46be10: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x46be10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_46be14:
    // 0x46be14: 0xc11b596  jal         func_46D658
label_46be18:
    if (ctx->pc == 0x46BE18u) {
        ctx->pc = 0x46BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BE14u;
        // 0x46be18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BE1Cu;
        goto label_46be1c;
    }
    ctx->pc = 0x46BE14u;
    SET_GPR_U32(ctx, 31, 0x46BE1Cu);
    ctx->pc = 0x46BE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46BE14u;
    // 0x46be18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D658u, 0x46BE14u, 0x46BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BE1Cu;
label_46be1c:
    // 0x46be1c: 0x9643000e  lhu         $v1, 0xE($s2)
    ctx->pc = 0x46be1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_46be20:
    // 0x46be20: 0x2665ad18  addiu       $a1, $s3, -0x52E8
    ctx->pc = 0x46be20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946072));
label_46be24:
    // 0x46be24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46be24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46be28:
    // 0x46be28: 0xa643000e  sh          $v1, 0xE($s2)
    ctx->pc = 0x46be28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 3));
label_46be2c:
    // 0x46be2c: 0x8ca2010c  lw          $v0, 0x10C($a1)
    ctx->pc = 0x46be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
label_46be30:
    // 0x46be30: 0x40f809  jalr        $v0
label_46be34:
    if (ctx->pc == 0x46BE34u) {
        ctx->pc = 0x46BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BE30u;
        // 0x46be34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BE38u;
        goto label_46be38;
    }
    ctx->pc = 0x46BE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46BE38u);
        ctx->pc = 0x46BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BE30u;
        // 0x46be34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BE30u, 0x46BE38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46BE38u;
label_46be38:
    // 0x46be38: 0x10000004  b           . + 4 + (0x4 << 2)
label_46be3c:
    if (ctx->pc == 0x46BE3Cu) {
        ctx->pc = 0x46BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BE38u;
        // 0x46be3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BE40u;
        goto label_46be40;
    }
    ctx->pc = 0x46BE38u;
    {
        const bool branch_taken_0x46be38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BE38u;
        // 0x46be3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46be38) {
            ctx->pc = 0x46BE4Cu;
            goto label_46be4c;
        }
    }
    ctx->pc = 0x46BE40u;
label_46be40:
    // 0x46be40: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x46be40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_46be44:
    // 0x46be44: 0x1000ff7f  b           . + 4 + (-0x81 << 2)
label_46be48:
    if (ctx->pc == 0x46BE48u) {
        ctx->pc = 0x46BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BE44u;
        // 0x46be48: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BE4Cu;
        goto label_46be4c;
    }
    ctx->pc = 0x46BE44u;
    {
        const bool branch_taken_0x46be44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BE44u;
        // 0x46be48: 0xa642000e  sh          $v0, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46be44) {
            ctx->pc = 0x46BC44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46bc44;
        }
    }
    ctx->pc = 0x46BE4Cu;
label_46be4c:
    // 0x46be4c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x46be4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_46be50:
    // 0x46be50: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x46be50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_46be54:
    // 0x46be54: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x46be54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_46be58:
    // 0x46be58: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x46be58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_46be5c:
    // 0x46be5c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x46be5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_46be60:
    // 0x46be60: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x46be60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_46be64:
    // 0x46be64: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x46be64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46be68:
    // 0x46be68: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x46be68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46be6c:
    // 0x46be6c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x46be6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_46be70:
    // 0x46be70: 0x3e00008  jr          $ra
label_46be74:
    if (ctx->pc == 0x46BE74u) {
        ctx->pc = 0x46BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BE70u;
        // 0x46be74: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46BE78u;
        goto label_fallthrough_0x46be70;
    }
    ctx->pc = 0x46BE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46BE70u;
        // 0x46be74: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46be70:
    ctx->pc = 0x46BE78u;
}
