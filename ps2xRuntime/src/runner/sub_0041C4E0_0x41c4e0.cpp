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

// Function: sub_0041C4E0
// Address: 0x41c4e0 - 0x41cc10
void sub_0041C4E0_0x41c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C4E0_0x41c4e0");
#endif

    switch (ctx->pc) {
        case 0x41c4e0u: goto label_41c4e0;
        case 0x41c4e4u: goto label_41c4e4;
        case 0x41c4e8u: goto label_41c4e8;
        case 0x41c4ecu: goto label_41c4ec;
        case 0x41c4f0u: goto label_41c4f0;
        case 0x41c4f4u: goto label_41c4f4;
        case 0x41c4f8u: goto label_41c4f8;
        case 0x41c4fcu: goto label_41c4fc;
        case 0x41c500u: goto label_41c500;
        case 0x41c504u: goto label_41c504;
        case 0x41c508u: goto label_41c508;
        case 0x41c50cu: goto label_41c50c;
        case 0x41c510u: goto label_41c510;
        case 0x41c514u: goto label_41c514;
        case 0x41c518u: goto label_41c518;
        case 0x41c51cu: goto label_41c51c;
        case 0x41c520u: goto label_41c520;
        case 0x41c524u: goto label_41c524;
        case 0x41c528u: goto label_41c528;
        case 0x41c52cu: goto label_41c52c;
        case 0x41c530u: goto label_41c530;
        case 0x41c534u: goto label_41c534;
        case 0x41c538u: goto label_41c538;
        case 0x41c53cu: goto label_41c53c;
        case 0x41c540u: goto label_41c540;
        case 0x41c544u: goto label_41c544;
        case 0x41c548u: goto label_41c548;
        case 0x41c54cu: goto label_41c54c;
        case 0x41c550u: goto label_41c550;
        case 0x41c554u: goto label_41c554;
        case 0x41c558u: goto label_41c558;
        case 0x41c55cu: goto label_41c55c;
        case 0x41c560u: goto label_41c560;
        case 0x41c564u: goto label_41c564;
        case 0x41c568u: goto label_41c568;
        case 0x41c56cu: goto label_41c56c;
        case 0x41c570u: goto label_41c570;
        case 0x41c574u: goto label_41c574;
        case 0x41c578u: goto label_41c578;
        case 0x41c57cu: goto label_41c57c;
        case 0x41c580u: goto label_41c580;
        case 0x41c584u: goto label_41c584;
        case 0x41c588u: goto label_41c588;
        case 0x41c58cu: goto label_41c58c;
        case 0x41c590u: goto label_41c590;
        case 0x41c594u: goto label_41c594;
        case 0x41c598u: goto label_41c598;
        case 0x41c59cu: goto label_41c59c;
        case 0x41c5a0u: goto label_41c5a0;
        case 0x41c5a4u: goto label_41c5a4;
        case 0x41c5a8u: goto label_41c5a8;
        case 0x41c5acu: goto label_41c5ac;
        case 0x41c5b0u: goto label_41c5b0;
        case 0x41c5b4u: goto label_41c5b4;
        case 0x41c5b8u: goto label_41c5b8;
        case 0x41c5bcu: goto label_41c5bc;
        case 0x41c5c0u: goto label_41c5c0;
        case 0x41c5c4u: goto label_41c5c4;
        case 0x41c5c8u: goto label_41c5c8;
        case 0x41c5ccu: goto label_41c5cc;
        case 0x41c5d0u: goto label_41c5d0;
        case 0x41c5d4u: goto label_41c5d4;
        case 0x41c5d8u: goto label_41c5d8;
        case 0x41c5dcu: goto label_41c5dc;
        case 0x41c5e0u: goto label_41c5e0;
        case 0x41c5e4u: goto label_41c5e4;
        case 0x41c5e8u: goto label_41c5e8;
        case 0x41c5ecu: goto label_41c5ec;
        case 0x41c5f0u: goto label_41c5f0;
        case 0x41c5f4u: goto label_41c5f4;
        case 0x41c5f8u: goto label_41c5f8;
        case 0x41c5fcu: goto label_41c5fc;
        case 0x41c600u: goto label_41c600;
        case 0x41c604u: goto label_41c604;
        case 0x41c608u: goto label_41c608;
        case 0x41c60cu: goto label_41c60c;
        case 0x41c610u: goto label_41c610;
        case 0x41c614u: goto label_41c614;
        case 0x41c618u: goto label_41c618;
        case 0x41c61cu: goto label_41c61c;
        case 0x41c620u: goto label_41c620;
        case 0x41c624u: goto label_41c624;
        case 0x41c628u: goto label_41c628;
        case 0x41c62cu: goto label_41c62c;
        case 0x41c630u: goto label_41c630;
        case 0x41c634u: goto label_41c634;
        case 0x41c638u: goto label_41c638;
        case 0x41c63cu: goto label_41c63c;
        case 0x41c640u: goto label_41c640;
        case 0x41c644u: goto label_41c644;
        case 0x41c648u: goto label_41c648;
        case 0x41c64cu: goto label_41c64c;
        case 0x41c650u: goto label_41c650;
        case 0x41c654u: goto label_41c654;
        case 0x41c658u: goto label_41c658;
        case 0x41c65cu: goto label_41c65c;
        case 0x41c660u: goto label_41c660;
        case 0x41c664u: goto label_41c664;
        case 0x41c668u: goto label_41c668;
        case 0x41c66cu: goto label_41c66c;
        case 0x41c670u: goto label_41c670;
        case 0x41c674u: goto label_41c674;
        case 0x41c678u: goto label_41c678;
        case 0x41c67cu: goto label_41c67c;
        case 0x41c680u: goto label_41c680;
        case 0x41c684u: goto label_41c684;
        case 0x41c688u: goto label_41c688;
        case 0x41c68cu: goto label_41c68c;
        case 0x41c690u: goto label_41c690;
        case 0x41c694u: goto label_41c694;
        case 0x41c698u: goto label_41c698;
        case 0x41c69cu: goto label_41c69c;
        case 0x41c6a0u: goto label_41c6a0;
        case 0x41c6a4u: goto label_41c6a4;
        case 0x41c6a8u: goto label_41c6a8;
        case 0x41c6acu: goto label_41c6ac;
        case 0x41c6b0u: goto label_41c6b0;
        case 0x41c6b4u: goto label_41c6b4;
        case 0x41c6b8u: goto label_41c6b8;
        case 0x41c6bcu: goto label_41c6bc;
        case 0x41c6c0u: goto label_41c6c0;
        case 0x41c6c4u: goto label_41c6c4;
        case 0x41c6c8u: goto label_41c6c8;
        case 0x41c6ccu: goto label_41c6cc;
        case 0x41c6d0u: goto label_41c6d0;
        case 0x41c6d4u: goto label_41c6d4;
        case 0x41c6d8u: goto label_41c6d8;
        case 0x41c6dcu: goto label_41c6dc;
        case 0x41c6e0u: goto label_41c6e0;
        case 0x41c6e4u: goto label_41c6e4;
        case 0x41c6e8u: goto label_41c6e8;
        case 0x41c6ecu: goto label_41c6ec;
        case 0x41c6f0u: goto label_41c6f0;
        case 0x41c6f4u: goto label_41c6f4;
        case 0x41c6f8u: goto label_41c6f8;
        case 0x41c6fcu: goto label_41c6fc;
        case 0x41c700u: goto label_41c700;
        case 0x41c704u: goto label_41c704;
        case 0x41c708u: goto label_41c708;
        case 0x41c70cu: goto label_41c70c;
        case 0x41c710u: goto label_41c710;
        case 0x41c714u: goto label_41c714;
        case 0x41c718u: goto label_41c718;
        case 0x41c71cu: goto label_41c71c;
        case 0x41c720u: goto label_41c720;
        case 0x41c724u: goto label_41c724;
        case 0x41c728u: goto label_41c728;
        case 0x41c72cu: goto label_41c72c;
        case 0x41c730u: goto label_41c730;
        case 0x41c734u: goto label_41c734;
        case 0x41c738u: goto label_41c738;
        case 0x41c73cu: goto label_41c73c;
        case 0x41c740u: goto label_41c740;
        case 0x41c744u: goto label_41c744;
        case 0x41c748u: goto label_41c748;
        case 0x41c74cu: goto label_41c74c;
        case 0x41c750u: goto label_41c750;
        case 0x41c754u: goto label_41c754;
        case 0x41c758u: goto label_41c758;
        case 0x41c75cu: goto label_41c75c;
        case 0x41c760u: goto label_41c760;
        case 0x41c764u: goto label_41c764;
        case 0x41c768u: goto label_41c768;
        case 0x41c76cu: goto label_41c76c;
        case 0x41c770u: goto label_41c770;
        case 0x41c774u: goto label_41c774;
        case 0x41c778u: goto label_41c778;
        case 0x41c77cu: goto label_41c77c;
        case 0x41c780u: goto label_41c780;
        case 0x41c784u: goto label_41c784;
        case 0x41c788u: goto label_41c788;
        case 0x41c78cu: goto label_41c78c;
        case 0x41c790u: goto label_41c790;
        case 0x41c794u: goto label_41c794;
        case 0x41c798u: goto label_41c798;
        case 0x41c79cu: goto label_41c79c;
        case 0x41c7a0u: goto label_41c7a0;
        case 0x41c7a4u: goto label_41c7a4;
        case 0x41c7a8u: goto label_41c7a8;
        case 0x41c7acu: goto label_41c7ac;
        case 0x41c7b0u: goto label_41c7b0;
        case 0x41c7b4u: goto label_41c7b4;
        case 0x41c7b8u: goto label_41c7b8;
        case 0x41c7bcu: goto label_41c7bc;
        case 0x41c7c0u: goto label_41c7c0;
        case 0x41c7c4u: goto label_41c7c4;
        case 0x41c7c8u: goto label_41c7c8;
        case 0x41c7ccu: goto label_41c7cc;
        case 0x41c7d0u: goto label_41c7d0;
        case 0x41c7d4u: goto label_41c7d4;
        case 0x41c7d8u: goto label_41c7d8;
        case 0x41c7dcu: goto label_41c7dc;
        case 0x41c7e0u: goto label_41c7e0;
        case 0x41c7e4u: goto label_41c7e4;
        case 0x41c7e8u: goto label_41c7e8;
        case 0x41c7ecu: goto label_41c7ec;
        case 0x41c7f0u: goto label_41c7f0;
        case 0x41c7f4u: goto label_41c7f4;
        case 0x41c7f8u: goto label_41c7f8;
        case 0x41c7fcu: goto label_41c7fc;
        case 0x41c800u: goto label_41c800;
        case 0x41c804u: goto label_41c804;
        case 0x41c808u: goto label_41c808;
        case 0x41c80cu: goto label_41c80c;
        case 0x41c810u: goto label_41c810;
        case 0x41c814u: goto label_41c814;
        case 0x41c818u: goto label_41c818;
        case 0x41c81cu: goto label_41c81c;
        case 0x41c820u: goto label_41c820;
        case 0x41c824u: goto label_41c824;
        case 0x41c828u: goto label_41c828;
        case 0x41c82cu: goto label_41c82c;
        case 0x41c830u: goto label_41c830;
        case 0x41c834u: goto label_41c834;
        case 0x41c838u: goto label_41c838;
        case 0x41c83cu: goto label_41c83c;
        case 0x41c840u: goto label_41c840;
        case 0x41c844u: goto label_41c844;
        case 0x41c848u: goto label_41c848;
        case 0x41c84cu: goto label_41c84c;
        case 0x41c850u: goto label_41c850;
        case 0x41c854u: goto label_41c854;
        case 0x41c858u: goto label_41c858;
        case 0x41c85cu: goto label_41c85c;
        case 0x41c860u: goto label_41c860;
        case 0x41c864u: goto label_41c864;
        case 0x41c868u: goto label_41c868;
        case 0x41c86cu: goto label_41c86c;
        case 0x41c870u: goto label_41c870;
        case 0x41c874u: goto label_41c874;
        case 0x41c878u: goto label_41c878;
        case 0x41c87cu: goto label_41c87c;
        case 0x41c880u: goto label_41c880;
        case 0x41c884u: goto label_41c884;
        case 0x41c888u: goto label_41c888;
        case 0x41c88cu: goto label_41c88c;
        case 0x41c890u: goto label_41c890;
        case 0x41c894u: goto label_41c894;
        case 0x41c898u: goto label_41c898;
        case 0x41c89cu: goto label_41c89c;
        case 0x41c8a0u: goto label_41c8a0;
        case 0x41c8a4u: goto label_41c8a4;
        case 0x41c8a8u: goto label_41c8a8;
        case 0x41c8acu: goto label_41c8ac;
        case 0x41c8b0u: goto label_41c8b0;
        case 0x41c8b4u: goto label_41c8b4;
        case 0x41c8b8u: goto label_41c8b8;
        case 0x41c8bcu: goto label_41c8bc;
        case 0x41c8c0u: goto label_41c8c0;
        case 0x41c8c4u: goto label_41c8c4;
        case 0x41c8c8u: goto label_41c8c8;
        case 0x41c8ccu: goto label_41c8cc;
        case 0x41c8d0u: goto label_41c8d0;
        case 0x41c8d4u: goto label_41c8d4;
        case 0x41c8d8u: goto label_41c8d8;
        case 0x41c8dcu: goto label_41c8dc;
        case 0x41c8e0u: goto label_41c8e0;
        case 0x41c8e4u: goto label_41c8e4;
        case 0x41c8e8u: goto label_41c8e8;
        case 0x41c8ecu: goto label_41c8ec;
        case 0x41c8f0u: goto label_41c8f0;
        case 0x41c8f4u: goto label_41c8f4;
        case 0x41c8f8u: goto label_41c8f8;
        case 0x41c8fcu: goto label_41c8fc;
        case 0x41c900u: goto label_41c900;
        case 0x41c904u: goto label_41c904;
        case 0x41c908u: goto label_41c908;
        case 0x41c90cu: goto label_41c90c;
        case 0x41c910u: goto label_41c910;
        case 0x41c914u: goto label_41c914;
        case 0x41c918u: goto label_41c918;
        case 0x41c91cu: goto label_41c91c;
        case 0x41c920u: goto label_41c920;
        case 0x41c924u: goto label_41c924;
        case 0x41c928u: goto label_41c928;
        case 0x41c92cu: goto label_41c92c;
        case 0x41c930u: goto label_41c930;
        case 0x41c934u: goto label_41c934;
        case 0x41c938u: goto label_41c938;
        case 0x41c93cu: goto label_41c93c;
        case 0x41c940u: goto label_41c940;
        case 0x41c944u: goto label_41c944;
        case 0x41c948u: goto label_41c948;
        case 0x41c94cu: goto label_41c94c;
        case 0x41c950u: goto label_41c950;
        case 0x41c954u: goto label_41c954;
        case 0x41c958u: goto label_41c958;
        case 0x41c95cu: goto label_41c95c;
        case 0x41c960u: goto label_41c960;
        case 0x41c964u: goto label_41c964;
        case 0x41c968u: goto label_41c968;
        case 0x41c96cu: goto label_41c96c;
        case 0x41c970u: goto label_41c970;
        case 0x41c974u: goto label_41c974;
        case 0x41c978u: goto label_41c978;
        case 0x41c97cu: goto label_41c97c;
        case 0x41c980u: goto label_41c980;
        case 0x41c984u: goto label_41c984;
        case 0x41c988u: goto label_41c988;
        case 0x41c98cu: goto label_41c98c;
        case 0x41c990u: goto label_41c990;
        case 0x41c994u: goto label_41c994;
        case 0x41c998u: goto label_41c998;
        case 0x41c99cu: goto label_41c99c;
        case 0x41c9a0u: goto label_41c9a0;
        case 0x41c9a4u: goto label_41c9a4;
        case 0x41c9a8u: goto label_41c9a8;
        case 0x41c9acu: goto label_41c9ac;
        case 0x41c9b0u: goto label_41c9b0;
        case 0x41c9b4u: goto label_41c9b4;
        case 0x41c9b8u: goto label_41c9b8;
        case 0x41c9bcu: goto label_41c9bc;
        case 0x41c9c0u: goto label_41c9c0;
        case 0x41c9c4u: goto label_41c9c4;
        case 0x41c9c8u: goto label_41c9c8;
        case 0x41c9ccu: goto label_41c9cc;
        case 0x41c9d0u: goto label_41c9d0;
        case 0x41c9d4u: goto label_41c9d4;
        case 0x41c9d8u: goto label_41c9d8;
        case 0x41c9dcu: goto label_41c9dc;
        case 0x41c9e0u: goto label_41c9e0;
        case 0x41c9e4u: goto label_41c9e4;
        case 0x41c9e8u: goto label_41c9e8;
        case 0x41c9ecu: goto label_41c9ec;
        case 0x41c9f0u: goto label_41c9f0;
        case 0x41c9f4u: goto label_41c9f4;
        case 0x41c9f8u: goto label_41c9f8;
        case 0x41c9fcu: goto label_41c9fc;
        case 0x41ca00u: goto label_41ca00;
        case 0x41ca04u: goto label_41ca04;
        case 0x41ca08u: goto label_41ca08;
        case 0x41ca0cu: goto label_41ca0c;
        case 0x41ca10u: goto label_41ca10;
        case 0x41ca14u: goto label_41ca14;
        case 0x41ca18u: goto label_41ca18;
        case 0x41ca1cu: goto label_41ca1c;
        case 0x41ca20u: goto label_41ca20;
        case 0x41ca24u: goto label_41ca24;
        case 0x41ca28u: goto label_41ca28;
        case 0x41ca2cu: goto label_41ca2c;
        case 0x41ca30u: goto label_41ca30;
        case 0x41ca34u: goto label_41ca34;
        case 0x41ca38u: goto label_41ca38;
        case 0x41ca3cu: goto label_41ca3c;
        case 0x41ca40u: goto label_41ca40;
        case 0x41ca44u: goto label_41ca44;
        case 0x41ca48u: goto label_41ca48;
        case 0x41ca4cu: goto label_41ca4c;
        case 0x41ca50u: goto label_41ca50;
        case 0x41ca54u: goto label_41ca54;
        case 0x41ca58u: goto label_41ca58;
        case 0x41ca5cu: goto label_41ca5c;
        case 0x41ca60u: goto label_41ca60;
        case 0x41ca64u: goto label_41ca64;
        case 0x41ca68u: goto label_41ca68;
        case 0x41ca6cu: goto label_41ca6c;
        case 0x41ca70u: goto label_41ca70;
        case 0x41ca74u: goto label_41ca74;
        case 0x41ca78u: goto label_41ca78;
        case 0x41ca7cu: goto label_41ca7c;
        case 0x41ca80u: goto label_41ca80;
        case 0x41ca84u: goto label_41ca84;
        case 0x41ca88u: goto label_41ca88;
        case 0x41ca8cu: goto label_41ca8c;
        case 0x41ca90u: goto label_41ca90;
        case 0x41ca94u: goto label_41ca94;
        case 0x41ca98u: goto label_41ca98;
        case 0x41ca9cu: goto label_41ca9c;
        case 0x41caa0u: goto label_41caa0;
        case 0x41caa4u: goto label_41caa4;
        case 0x41caa8u: goto label_41caa8;
        case 0x41caacu: goto label_41caac;
        case 0x41cab0u: goto label_41cab0;
        case 0x41cab4u: goto label_41cab4;
        case 0x41cab8u: goto label_41cab8;
        case 0x41cabcu: goto label_41cabc;
        case 0x41cac0u: goto label_41cac0;
        case 0x41cac4u: goto label_41cac4;
        case 0x41cac8u: goto label_41cac8;
        case 0x41caccu: goto label_41cacc;
        case 0x41cad0u: goto label_41cad0;
        case 0x41cad4u: goto label_41cad4;
        case 0x41cad8u: goto label_41cad8;
        case 0x41cadcu: goto label_41cadc;
        case 0x41cae0u: goto label_41cae0;
        case 0x41cae4u: goto label_41cae4;
        case 0x41cae8u: goto label_41cae8;
        case 0x41caecu: goto label_41caec;
        case 0x41caf0u: goto label_41caf0;
        case 0x41caf4u: goto label_41caf4;
        case 0x41caf8u: goto label_41caf8;
        case 0x41cafcu: goto label_41cafc;
        case 0x41cb00u: goto label_41cb00;
        case 0x41cb04u: goto label_41cb04;
        case 0x41cb08u: goto label_41cb08;
        case 0x41cb0cu: goto label_41cb0c;
        case 0x41cb10u: goto label_41cb10;
        case 0x41cb14u: goto label_41cb14;
        case 0x41cb18u: goto label_41cb18;
        case 0x41cb1cu: goto label_41cb1c;
        case 0x41cb20u: goto label_41cb20;
        case 0x41cb24u: goto label_41cb24;
        case 0x41cb28u: goto label_41cb28;
        case 0x41cb2cu: goto label_41cb2c;
        case 0x41cb30u: goto label_41cb30;
        case 0x41cb34u: goto label_41cb34;
        case 0x41cb38u: goto label_41cb38;
        case 0x41cb3cu: goto label_41cb3c;
        case 0x41cb40u: goto label_41cb40;
        case 0x41cb44u: goto label_41cb44;
        case 0x41cb48u: goto label_41cb48;
        case 0x41cb4cu: goto label_41cb4c;
        case 0x41cb50u: goto label_41cb50;
        case 0x41cb54u: goto label_41cb54;
        case 0x41cb58u: goto label_41cb58;
        case 0x41cb5cu: goto label_41cb5c;
        case 0x41cb60u: goto label_41cb60;
        case 0x41cb64u: goto label_41cb64;
        case 0x41cb68u: goto label_41cb68;
        case 0x41cb6cu: goto label_41cb6c;
        case 0x41cb70u: goto label_41cb70;
        case 0x41cb74u: goto label_41cb74;
        case 0x41cb78u: goto label_41cb78;
        case 0x41cb7cu: goto label_41cb7c;
        case 0x41cb80u: goto label_41cb80;
        case 0x41cb84u: goto label_41cb84;
        case 0x41cb88u: goto label_41cb88;
        case 0x41cb8cu: goto label_41cb8c;
        case 0x41cb90u: goto label_41cb90;
        case 0x41cb94u: goto label_41cb94;
        case 0x41cb98u: goto label_41cb98;
        case 0x41cb9cu: goto label_41cb9c;
        case 0x41cba0u: goto label_41cba0;
        case 0x41cba4u: goto label_41cba4;
        case 0x41cba8u: goto label_41cba8;
        case 0x41cbacu: goto label_41cbac;
        case 0x41cbb0u: goto label_41cbb0;
        case 0x41cbb4u: goto label_41cbb4;
        case 0x41cbb8u: goto label_41cbb8;
        case 0x41cbbcu: goto label_41cbbc;
        case 0x41cbc0u: goto label_41cbc0;
        case 0x41cbc4u: goto label_41cbc4;
        case 0x41cbc8u: goto label_41cbc8;
        case 0x41cbccu: goto label_41cbcc;
        case 0x41cbd0u: goto label_41cbd0;
        case 0x41cbd4u: goto label_41cbd4;
        case 0x41cbd8u: goto label_41cbd8;
        case 0x41cbdcu: goto label_41cbdc;
        case 0x41cbe0u: goto label_41cbe0;
        case 0x41cbe4u: goto label_41cbe4;
        case 0x41cbe8u: goto label_41cbe8;
        case 0x41cbecu: goto label_41cbec;
        case 0x41cbf0u: goto label_41cbf0;
        case 0x41cbf4u: goto label_41cbf4;
        case 0x41cbf8u: goto label_41cbf8;
        case 0x41cbfcu: goto label_41cbfc;
        case 0x41cc00u: goto label_41cc00;
        case 0x41cc04u: goto label_41cc04;
        case 0x41cc08u: goto label_41cc08;
        case 0x41cc0cu: goto label_41cc0c;
        default: break;
    }

    ctx->pc = 0x41c4e0u;

label_41c4e0:
    // 0x41c4e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x41c4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_41c4e4:
    // 0x41c4e4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x41c4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_41c4e8:
    // 0x41c4e8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x41c4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_41c4ec:
    // 0x41c4ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x41c4ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41c4f0:
    // 0x41c4f0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x41c4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_41c4f4:
    // 0x41c4f4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x41c4f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_41c4f8:
    // 0x41c4f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x41c4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_41c4fc:
    // 0x41c4fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x41c4fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41c500:
    // 0x41c500: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x41c500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_41c504:
    // 0x41c504: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x41c504u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_41c508:
    // 0x41c508: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x41c508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_41c50c:
    // 0x41c50c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x41c50cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_41c510:
    // 0x41c510: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x41c510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_41c514:
    // 0x41c514: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x41c514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_41c518:
    // 0x41c518: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x41c518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_41c51c:
    // 0x41c51c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x41c51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_41c520:
    // 0x41c520: 0x124001ae  beqz        $s2, . + 4 + (0x1AE << 2)
label_41c524:
    if (ctx->pc == 0x41C524u) {
        ctx->pc = 0x41C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C520u;
        // 0x41c524: 0xafa8001c  sw          $t0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C528u;
        goto label_41c528;
    }
    ctx->pc = 0x41C520u;
    {
        const bool branch_taken_0x41c520 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C520u;
        // 0x41c524: 0xafa8001c  sw          $t0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c520) {
            ctx->pc = 0x41CBDCu;
            goto label_41cbdc;
        }
    }
    ctx->pc = 0x41C528u;
label_41c528:
    // 0x41c528: 0xc047e6c  jal         func_11F9B0
label_41c52c:
    if (ctx->pc == 0x41C52Cu) {
        ctx->pc = 0x41C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C528u;
        // 0x41c52c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C530u;
        goto label_41c530;
    }
    ctx->pc = 0x41C528u;
    SET_GPR_U32(ctx, 31, 0x41C530u);
    ctx->pc = 0x41C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C528u;
    // 0x41c52c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x41C528u, 0x41C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C530u;
label_41c530:
    // 0x41c530: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41c530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c534:
    // 0x41c534: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_41c538:
    if (ctx->pc == 0x41C538u) {
        ctx->pc = 0x41C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C534u;
        // 0x41c538: 0x92a20411  lbu         $v0, 0x411($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1041)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C53Cu;
        goto label_41c53c;
    }
    ctx->pc = 0x41C534u;
    {
        const bool branch_taken_0x41c534 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c534) {
            ctx->pc = 0x41C538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C534u;
            // 0x41c538: 0x92a20411  lbu         $v0, 0x411($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1041)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41C560u;
            goto label_41c560;
        }
    }
    ctx->pc = 0x41C53Cu;
label_41c53c:
    // 0x41c53c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x41c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_41c540:
    // 0x41c540: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x41c540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_41c544:
    // 0x41c544: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x41c544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_41c548:
    // 0x41c548: 0x40f809  jalr        $v0
label_41c54c:
    if (ctx->pc == 0x41C54Cu) {
        ctx->pc = 0x41C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C548u;
        // 0x41c54c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C550u;
        goto label_41c550;
    }
    ctx->pc = 0x41C548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41C550u);
        ctx->pc = 0x41C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C548u;
        // 0x41c54c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C548u, 0x41C550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C550u;
label_41c550:
    // 0x41c550: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x41c550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41c554:
    // 0x41c554: 0x104301a2  beq         $v0, $v1, . + 4 + (0x1A2 << 2)
label_41c558:
    if (ctx->pc == 0x41C558u) {
        ctx->pc = 0x41C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C554u;
        // 0x41c558: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C55Cu;
        goto label_41c55c;
    }
    ctx->pc = 0x41C554u;
    {
        const bool branch_taken_0x41c554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x41C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C554u;
        // 0x41c558: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c554) {
            ctx->pc = 0x41CBE0u;
            goto label_41cbe0;
        }
    }
    ctx->pc = 0x41C55Cu;
label_41c55c:
    // 0x41c55c: 0x92a20411  lbu         $v0, 0x411($s5)
    ctx->pc = 0x41c55cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1041)));
label_41c560:
    // 0x41c560: 0x1440019f  bnez        $v0, . + 4 + (0x19F << 2)
label_41c564:
    if (ctx->pc == 0x41C564u) {
        ctx->pc = 0x41C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C560u;
        // 0x41c564: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C568u;
        goto label_41c568;
    }
    ctx->pc = 0x41C560u;
    {
        const bool branch_taken_0x41c560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C560u;
        // 0x41c564: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c560) {
            ctx->pc = 0x41CBE0u;
            goto label_41cbe0;
        }
    }
    ctx->pc = 0x41C568u;
label_41c568:
    // 0x41c568: 0x925103ac  lbu         $s1, 0x3AC($s2)
    ctx->pc = 0x41c568u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 940)));
label_41c56c:
    // 0x41c56c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41c570:
    // 0x41c570: 0x5622019c  bnel        $s1, $v0, . + 4 + (0x19C << 2)
label_41c574:
    if (ctx->pc == 0x41C574u) {
        ctx->pc = 0x41C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C570u;
        // 0x41c574: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C578u;
        goto label_41c578;
    }
    ctx->pc = 0x41C570u;
    {
        const bool branch_taken_0x41c570 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x41c570) {
            ctx->pc = 0x41C574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C570u;
            // 0x41c574: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CBE4u;
            goto label_41cbe4;
        }
    }
    ctx->pc = 0x41C578u;
label_41c578:
    // 0x41c578: 0x825301b0  lb          $s3, 0x1B0($s2)
    ctx->pc = 0x41c578u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_41c57c:
    // 0x41c57c: 0x2b31821  addu        $v1, $s5, $s3
    ctx->pc = 0x41c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_41c580:
    // 0x41c580: 0x9062042e  lbu         $v0, 0x42E($v1)
    ctx->pc = 0x41c580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1070)));
label_41c584:
    // 0x41c584: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x41c584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_41c588:
    // 0x41c588: 0x10510195  beq         $v0, $s1, . + 4 + (0x195 << 2)
label_41c58c:
    if (ctx->pc == 0x41C58Cu) {
        ctx->pc = 0x41C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C588u;
        // 0x41c58c: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C590u;
        goto label_41c590;
    }
    ctx->pc = 0x41C588u;
    {
        const bool branch_taken_0x41c588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x41C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C588u;
        // 0x41c58c: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c588) {
            ctx->pc = 0x41CBE0u;
            goto label_41cbe0;
        }
    }
    ctx->pc = 0x41C590u;
label_41c590:
    // 0x41c590: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x41c590u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_41c594:
    // 0x41c594: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x41c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_41c598:
    // 0x41c598: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x41c598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_41c59c:
    // 0x41c59c: 0x9043041e  lbu         $v1, 0x41E($v0)
    ctx->pc = 0x41c59cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1054)));
label_41c5a0:
    // 0x41c5a0: 0x50600190  beql        $v1, $zero, . + 4 + (0x190 << 2)
label_41c5a4:
    if (ctx->pc == 0x41C5A4u) {
        ctx->pc = 0x41C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C5A0u;
        // 0x41c5a4: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C5A8u;
        goto label_41c5a8;
    }
    ctx->pc = 0x41C5A0u;
    {
        const bool branch_taken_0x41c5a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c5a0) {
            ctx->pc = 0x41C5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C5A0u;
            // 0x41c5a4: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CBE4u;
            goto label_41cbe4;
        }
    }
    ctx->pc = 0x41C5A8u;
label_41c5a8:
    // 0x41c5a8: 0xc087502  jal         func_21D408
label_41c5ac:
    if (ctx->pc == 0x41C5ACu) {
        ctx->pc = 0x41C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C5A8u;
        // 0x41c5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C5B0u;
        goto label_41c5b0;
    }
    ctx->pc = 0x41C5A8u;
    SET_GPR_U32(ctx, 31, 0x41C5B0u);
    ctx->pc = 0x41C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C5A8u;
    // 0x41c5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41C5A8u, 0x41C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C5B0u;
label_41c5b0:
    // 0x41c5b0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x41c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_41c5b4:
    // 0x41c5b4: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x41c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_41c5b8:
    // 0x41c5b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x41c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_41c5bc:
    // 0x41c5bc: 0x8c77020c  lw          $s7, 0x20C($v1)
    ctx->pc = 0x41c5bcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_41c5c0:
    // 0x41c5c0: 0x16800058  bnez        $s4, . + 4 + (0x58 << 2)
label_41c5c4:
    if (ctx->pc == 0x41C5C4u) {
        ctx->pc = 0x41C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C5C0u;
        // 0x41c5c4: 0xa05e041c  sb          $fp, 0x41C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1052), (uint8_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C5C8u;
        goto label_41c5c8;
    }
    ctx->pc = 0x41C5C0u;
    {
        const bool branch_taken_0x41c5c0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x41C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C5C0u;
        // 0x41c5c4: 0xa05e041c  sb          $fp, 0x41C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1052), (uint8_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c5c0) {
            ctx->pc = 0x41C724u;
            goto label_41c724;
        }
    }
    ctx->pc = 0x41C5C8u;
label_41c5c8:
    // 0x41c5c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41c5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41c5cc:
    // 0x41c5cc: 0xc087b0c  jal         func_21EC30
label_41c5d0:
    if (ctx->pc == 0x41C5D0u) {
        ctx->pc = 0x41C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C5CCu;
        // 0x41c5d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C5D4u;
        goto label_41c5d4;
    }
    ctx->pc = 0x41C5CCu;
    SET_GPR_U32(ctx, 31, 0x41C5D4u);
    ctx->pc = 0x41C5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C5CCu;
    // 0x41c5d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC30u, 0x41C5CCu, 0x41C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C5D4u;
label_41c5d4:
    // 0x41c5d4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x41c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_41c5d8:
    // 0x41c5d8: 0xc043d5e  jal         func_10F578
label_41c5dc:
    if (ctx->pc == 0x41C5DCu) {
        ctx->pc = 0x41C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C5D8u;
        // 0x41c5dc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C5E0u;
        goto label_41c5e0;
    }
    ctx->pc = 0x41C5D8u;
    SET_GPR_U32(ctx, 31, 0x41C5E0u);
    ctx->pc = 0x41C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C5D8u;
    // 0x41c5dc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x41C5D8u, 0x41C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C5E0u;
label_41c5e0:
    // 0x41c5e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_41c5e4:
    if (ctx->pc == 0x41C5E4u) {
        ctx->pc = 0x41C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C5E0u;
        // 0x41c5e4: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C5E8u;
        goto label_41c5e8;
    }
    ctx->pc = 0x41C5E0u;
    {
        const bool branch_taken_0x41c5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C5E0u;
        // 0x41c5e4: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c5e0) {
            ctx->pc = 0x41C5F0u;
            goto label_41c5f0;
        }
    }
    ctx->pc = 0x41C5E8u;
label_41c5e8:
    // 0x41c5e8: 0x92420194  lbu         $v0, 0x194($s2)
    ctx->pc = 0x41c5e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 404)));
label_41c5ec:
    // 0x41c5ec: 0x222800a  movz        $s0, $s1, $v0
    ctx->pc = 0x41c5ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
label_41c5f0:
    // 0x41c5f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41c5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41c5f4:
    // 0x41c5f4: 0x10a00a  movz        $s4, $zero, $s0
    ctx->pc = 0x41c5f4u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_41c5f8:
    // 0x41c5f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41c5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41c5fc:
    // 0x41c5fc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x41c5fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41c600:
    // 0x41c600: 0xc1070ce  jal         func_41C338
label_41c604:
    if (ctx->pc == 0x41C604u) {
        ctx->pc = 0x41C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C600u;
        // 0x41c604: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C608u;
        goto label_41c608;
    }
    ctx->pc = 0x41C600u;
    SET_GPR_U32(ctx, 31, 0x41C608u);
    ctx->pc = 0x41C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C600u;
    // 0x41c604: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C338u, 0x41C600u, 0x41C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C608u;
label_41c608:
    // 0x41c608: 0x10510175  beq         $v0, $s1, . + 4 + (0x175 << 2)
label_41c60c:
    if (ctx->pc == 0x41C60Cu) {
        ctx->pc = 0x41C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C608u;
        // 0x41c60c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C610u;
        goto label_41c610;
    }
    ctx->pc = 0x41C608u;
    {
        const bool branch_taken_0x41c608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x41C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C608u;
        // 0x41c60c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c608) {
            ctx->pc = 0x41CBE0u;
            goto label_41cbe0;
        }
    }
    ctx->pc = 0x41C610u;
label_41c610:
    // 0x41c610: 0x8ef00040  lw          $s0, 0x40($s7)
    ctx->pc = 0x41c610u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
label_41c614:
    // 0x41c614: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x41c614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_41c618:
    // 0x41c618: 0x1451004b  bne         $v0, $s1, . + 4 + (0x4B << 2)
label_41c61c:
    if (ctx->pc == 0x41C61Cu) {
        ctx->pc = 0x41C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C618u;
        // 0x41c61c: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C620u;
        goto label_41c620;
    }
    ctx->pc = 0x41C618u;
    {
        const bool branch_taken_0x41c618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x41C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C618u;
        // 0x41c61c: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c618) {
            ctx->pc = 0x41C748u;
            goto label_41c748;
        }
    }
    ctx->pc = 0x41C620u;
label_41c620:
    // 0x41c620: 0x9043041a  lbu         $v1, 0x41A($v0)
    ctx->pc = 0x41c620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1050)));
label_41c624:
    // 0x41c624: 0x147e0048  bne         $v1, $fp, . + 4 + (0x48 << 2)
label_41c628:
    if (ctx->pc == 0x41C628u) {
        ctx->pc = 0x41C62Cu;
        goto label_41c62c;
    }
    ctx->pc = 0x41C624u;
    {
        const bool branch_taken_0x41c624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 30));
        if (branch_taken_0x41c624) {
            ctx->pc = 0x41C748u;
            goto label_41c748;
        }
    }
    ctx->pc = 0x41C62Cu;
label_41c62c:
    // 0x41c62c: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x41c62cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_41c630:
    // 0x41c630: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_41c634:
    if (ctx->pc == 0x41C634u) {
        ctx->pc = 0x41C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C630u;
        // 0x41c634: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C638u;
        goto label_41c638;
    }
    ctx->pc = 0x41C630u;
    {
        const bool branch_taken_0x41c630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C630u;
        // 0x41c634: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c630) {
            ctx->pc = 0x41C748u;
            goto label_41c748;
        }
    }
    ctx->pc = 0x41C638u;
label_41c638:
    // 0x41c638: 0x17c20025  bne         $fp, $v0, . + 4 + (0x25 << 2)
label_41c63c:
    if (ctx->pc == 0x41C63Cu) {
        ctx->pc = 0x41C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C638u;
        // 0x41c63c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C640u;
        goto label_41c640;
    }
    ctx->pc = 0x41C638u;
    {
        const bool branch_taken_0x41c638 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x41C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C638u;
        // 0x41c63c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c638) {
            ctx->pc = 0x41C6D0u;
            goto label_41c6d0;
        }
    }
    ctx->pc = 0x41C640u;
label_41c640:
    // 0x41c640: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x41c640u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_41c644:
    // 0x41c644: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x41c644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_41c648:
    // 0x41c648: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x41c648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_41c64c:
    // 0x41c64c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x41c64cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_41c650:
    // 0x41c650: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x41c650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41c654:
    // 0x41c654: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x41c654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_41c658:
    // 0x41c658: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x41c658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_41c65c:
    // 0x41c65c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41c65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41c660:
    // 0x41c660: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x41c660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_41c664:
    // 0x41c664: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41c664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41c668:
    // 0x41c668: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x41c668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_41c66c:
    // 0x41c66c: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x41c66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_41c670:
    // 0x41c670: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x41c670u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_41c674:
    // 0x41c674: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41c674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41c678:
    // 0x41c678: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x41c678u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41c67c:
    // 0x41c67c: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x41c67cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_41c680:
    // 0x41c680: 0xc105df6  jal         func_4177D8
label_41c684:
    if (ctx->pc == 0x41C684u) {
        ctx->pc = 0x41C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C680u;
        // 0x41c684: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C688u;
        goto label_41c688;
    }
    ctx->pc = 0x41C680u;
    SET_GPR_U32(ctx, 31, 0x41C688u);
    ctx->pc = 0x41C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C680u;
    // 0x41c684: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x41C680u, 0x41C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C688u;
label_41c688:
    // 0x41c688: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x41c688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c68c:
    // 0x41c68c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_41c690:
    if (ctx->pc == 0x41C690u) {
        ctx->pc = 0x41C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C68Cu;
        // 0x41c690: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C694u;
        goto label_41c694;
    }
    ctx->pc = 0x41C68Cu;
    {
        const bool branch_taken_0x41c68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C68Cu;
        // 0x41c690: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c68c) {
            ctx->pc = 0x41C708u;
            goto label_41c708;
        }
    }
    ctx->pc = 0x41C694u;
label_41c694:
    // 0x41c694: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x41c694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_41c698:
    // 0x41c698: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x41c698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41c69c:
    // 0x41c69c: 0x0  nop
    ctx->pc = 0x41c69cu;
    // NOP
label_41c6a0:
    // 0x41c6a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x41c6a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41c6a4:
    // 0x41c6a4: 0x0  nop
    ctx->pc = 0x41c6a4u;
    // NOP
label_41c6a8:
    // 0x41c6a8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_41c6ac:
    if (ctx->pc == 0x41C6ACu) {
        ctx->pc = 0x41C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6A8u;
        // 0x41c6ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C6B0u;
        goto label_41c6b0;
    }
    ctx->pc = 0x41C6A8u;
    {
        const bool branch_taken_0x41c6a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6A8u;
        // 0x41c6ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c6a8) {
            ctx->pc = 0x41C708u;
            goto label_41c708;
        }
    }
    ctx->pc = 0x41C6B0u;
label_41c6b0:
    // 0x41c6b0: 0x906500d8  lbu         $a1, 0xD8($v1)
    ctx->pc = 0x41c6b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 216)));
label_41c6b4:
    // 0x41c6b4: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x41c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_41c6b8:
    // 0x41c6b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41c6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41c6bc:
    // 0x41c6bc: 0xc0e6960  jal         func_39A580
label_41c6c0:
    if (ctx->pc == 0x41C6C0u) {
        ctx->pc = 0x41C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6BCu;
        // 0x41c6c0: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C6C4u;
        goto label_41c6c4;
    }
    ctx->pc = 0x41C6BCu;
    SET_GPR_U32(ctx, 31, 0x41C6C4u);
    ctx->pc = 0x41C6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C6BCu;
    // 0x41c6c0: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A580u, 0x41C6BCu, 0x41C6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C6C4u;
label_41c6c4:
    // 0x41c6c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x41c6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_41c6c8:
    // 0x41c6c8: 0x1000000f  b           . + 4 + (0xF << 2)
label_41c6cc:
    if (ctx->pc == 0x41C6CCu) {
        ctx->pc = 0x41C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6C8u;
        // 0x41c6cc: 0x3c2880a  movz        $s1, $fp, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C6D0u;
        goto label_41c6d0;
    }
    ctx->pc = 0x41C6C8u;
    {
        const bool branch_taken_0x41c6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6C8u;
        // 0x41c6cc: 0x3c2880a  movz        $s1, $fp, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c6c8) {
            ctx->pc = 0x41C708u;
            goto label_41c708;
        }
    }
    ctx->pc = 0x41C6D0u;
label_41c6d0:
    // 0x41c6d0: 0x17c0000e  bnez        $fp, . + 4 + (0xE << 2)
label_41c6d4:
    if (ctx->pc == 0x41C6D4u) {
        ctx->pc = 0x41C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6D0u;
        // 0x41c6d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C6D8u;
        goto label_41c6d8;
    }
    ctx->pc = 0x41C6D0u;
    {
        const bool branch_taken_0x41c6d0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x41C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6D0u;
        // 0x41c6d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c6d0) {
            ctx->pc = 0x41C70Cu;
            goto label_41c70c;
        }
    }
    ctx->pc = 0x41C6D8u;
label_41c6d8:
    // 0x41c6d8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_41c6dc:
    if (ctx->pc == 0x41C6DCu) {
        ctx->pc = 0x41C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6D8u;
        // 0x41c6dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C6E0u;
        goto label_41c6e0;
    }
    ctx->pc = 0x41C6D8u;
    {
        const bool branch_taken_0x41c6d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6D8u;
        // 0x41c6dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c6d8) {
            ctx->pc = 0x41C710u;
            goto label_41c710;
        }
    }
    ctx->pc = 0x41C6E0u;
label_41c6e0:
    // 0x41c6e0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x41c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_41c6e4:
    // 0x41c6e4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x41c6e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_41c6e8:
    // 0x41c6e8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x41c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_41c6ec:
    // 0x41c6ec: 0x40f809  jalr        $v0
label_41c6f0:
    if (ctx->pc == 0x41C6F0u) {
        ctx->pc = 0x41C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6ECu;
        // 0x41c6f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C6F4u;
        goto label_41c6f4;
    }
    ctx->pc = 0x41C6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41C6F4u);
        ctx->pc = 0x41C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6ECu;
        // 0x41c6f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C6ECu, 0x41C6F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C6F4u;
label_41c6f4:
    // 0x41c6f4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x41c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_41c6f8:
    // 0x41c6f8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_41c6fc:
    if (ctx->pc == 0x41C6FCu) {
        ctx->pc = 0x41C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6F8u;
        // 0x41c6fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C700u;
        goto label_41c700;
    }
    ctx->pc = 0x41C6F8u;
    {
        const bool branch_taken_0x41c6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x41C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C6F8u;
        // 0x41c6fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c6f8) {
            ctx->pc = 0x41C70Cu;
            goto label_41c70c;
        }
    }
    ctx->pc = 0x41C700u;
label_41c700:
    // 0x41c700: 0xc0c4538  jal         func_3114E0
label_41c704:
    if (ctx->pc == 0x41C704u) {
        ctx->pc = 0x41C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C700u;
        // 0x41c704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C708u;
        goto label_41c708;
    }
    ctx->pc = 0x41C700u;
    SET_GPR_U32(ctx, 31, 0x41C708u);
    ctx->pc = 0x41C704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C700u;
    // 0x41c704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3114E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3114E0u, 0x41C700u, 0x41C708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C708u;
label_41c708:
    // 0x41c708: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41c708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41c70c:
    // 0x41c70c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41c70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41c710:
    // 0x41c710: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x41c710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41c714:
    // 0x41c714: 0xc107310  jal         func_41CC40
label_41c718:
    if (ctx->pc == 0x41C718u) {
        ctx->pc = 0x41C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C714u;
        // 0x41c718: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C71Cu;
        goto label_41c71c;
    }
    ctx->pc = 0x41C714u;
    SET_GPR_U32(ctx, 31, 0x41C71Cu);
    ctx->pc = 0x41C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C714u;
    // 0x41c718: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CC40u, 0x41C714u, 0x41C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C71Cu;
label_41c71c:
    // 0x41c71c: 0x10000130  b           . + 4 + (0x130 << 2)
label_41c720:
    if (ctx->pc == 0x41C720u) {
        ctx->pc = 0x41C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C71Cu;
        // 0x41c720: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C724u;
        goto label_41c724;
    }
    ctx->pc = 0x41C71Cu;
    {
        const bool branch_taken_0x41c71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C71Cu;
        // 0x41c720: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c71c) {
            ctx->pc = 0x41CBE0u;
            goto label_41cbe0;
        }
    }
    ctx->pc = 0x41C724u;
label_41c724:
    // 0x41c724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x41c724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41c728:
    // 0x41c728: 0x17c20007  bne         $fp, $v0, . + 4 + (0x7 << 2)
label_41c72c:
    if (ctx->pc == 0x41C72Cu) {
        ctx->pc = 0x41C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C728u;
        // 0x41c72c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C730u;
        goto label_41c730;
    }
    ctx->pc = 0x41C728u;
    {
        const bool branch_taken_0x41c728 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x41C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C728u;
        // 0x41c72c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c728) {
            ctx->pc = 0x41C748u;
            goto label_41c748;
        }
    }
    ctx->pc = 0x41C730u;
label_41c730:
    // 0x41c730: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41c730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41c734:
    // 0x41c734: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x41c734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41c738:
    // 0x41c738: 0xc1070ce  jal         func_41C338
label_41c73c:
    if (ctx->pc == 0x41C73Cu) {
        ctx->pc = 0x41C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C738u;
        // 0x41c73c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C740u;
        goto label_41c740;
    }
    ctx->pc = 0x41C738u;
    SET_GPR_U32(ctx, 31, 0x41C740u);
    ctx->pc = 0x41C73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C738u;
    // 0x41c73c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C338u, 0x41C738u, 0x41C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C740u;
label_41c740:
    // 0x41c740: 0x10510127  beq         $v0, $s1, . + 4 + (0x127 << 2)
label_41c744:
    if (ctx->pc == 0x41C744u) {
        ctx->pc = 0x41C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C740u;
        // 0x41c744: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C748u;
        goto label_41c748;
    }
    ctx->pc = 0x41C740u;
    {
        const bool branch_taken_0x41c740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x41C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C740u;
        // 0x41c744: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c740) {
            ctx->pc = 0x41CBE0u;
            goto label_41cbe0;
        }
    }
    ctx->pc = 0x41C748u;
label_41c748:
    // 0x41c748: 0xc0c575c  jal         func_315D70
label_41c74c:
    if (ctx->pc == 0x41C74Cu) {
        ctx->pc = 0x41C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C748u;
        // 0x41c74c: 0x86e40030  lh          $a0, 0x30($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C750u;
        goto label_41c750;
    }
    ctx->pc = 0x41C748u;
    SET_GPR_U32(ctx, 31, 0x41C750u);
    ctx->pc = 0x41C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C748u;
    // 0x41c74c: 0x86e40030  lh          $a0, 0x30($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315D70u, 0x41C748u, 0x41C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C750u;
label_41c750:
    // 0x41c750: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41c750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41c754:
    // 0x41c754: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x41c754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_41c758:
    // 0x41c758: 0xc0596dc  jal         func_165B70
label_41c75c:
    if (ctx->pc == 0x41C75Cu) {
        ctx->pc = 0x41C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C758u;
        // 0x41c75c: 0x8c45bd30  lw          $a1, -0x42D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C760u;
        goto label_41c760;
    }
    ctx->pc = 0x41C758u;
    SET_GPR_U32(ctx, 31, 0x41C760u);
    ctx->pc = 0x41C75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C758u;
    // 0x41c75c: 0x8c45bd30  lw          $a1, -0x42D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B70u, 0x41C758u, 0x41C760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C760u;
label_41c760:
    // 0x41c760: 0x2fc20007  sltiu       $v0, $fp, 0x7
    ctx->pc = 0x41c760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_41c764:
    // 0x41c764: 0x10400114  beqz        $v0, . + 4 + (0x114 << 2)
label_41c768:
    if (ctx->pc == 0x41C768u) {
        ctx->pc = 0x41C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C764u;
        // 0x41c768: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C76Cu;
        goto label_41c76c;
    }
    ctx->pc = 0x41C764u;
    {
        const bool branch_taken_0x41c764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C764u;
        // 0x41c768: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c764) {
            ctx->pc = 0x41CBB8u;
            goto label_41cbb8;
        }
    }
    ctx->pc = 0x41C76Cu;
label_41c76c:
    // 0x41c76c: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x41c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_41c770:
    // 0x41c770: 0x2442ae80  addiu       $v0, $v0, -0x5180
    ctx->pc = 0x41c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946432));
label_41c774:
    // 0x41c774: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41c774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41c778:
    // 0x41c778: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x41c778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_41c77c:
    // 0x41c77c: 0x800008  jr          $a0
label_41c780:
    if (ctx->pc == 0x41C780u) {
        ctx->pc = 0x41C784u;
        goto label_41c784;
    }
    ctx->pc = 0x41C77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x41C784u: goto label_41c784;
            case 0x41C7C8u: goto label_41c7c8;
            case 0x41C82Cu: goto label_41c82c;
            case 0x41C9B4u: goto label_41c9b4;
            case 0x41CA8Cu: goto label_41ca8c;
            case 0x41CAD0u: goto label_41cad0;
            case 0x41CBA4u: goto label_41cba4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C77Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x41C784u;
label_41c784:
    // 0x41c784: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41c784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41c788:
    // 0x41c788: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x41c788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_41c78c:
    // 0x41c78c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41c78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41c790:
    // 0x41c790: 0xc107132  jal         func_41C4C8
label_41c794:
    if (ctx->pc == 0x41C794u) {
        ctx->pc = 0x41C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C790u;
        // 0x41c794: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C798u;
        goto label_41c798;
    }
    ctx->pc = 0x41C790u;
    SET_GPR_U32(ctx, 31, 0x41C798u);
    ctx->pc = 0x41C794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C790u;
    // 0x41c794: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4C8u, 0x41C790u, 0x41C798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C798u;
label_41c798:
    // 0x41c798: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41c798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41c79c:
    // 0x41c79c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41c79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41c7a0:
    // 0x41c7a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x41c7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41c7a4:
    // 0x41c7a4: 0xc107310  jal         func_41CC40
label_41c7a8:
    if (ctx->pc == 0x41C7A8u) {
        ctx->pc = 0x41C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C7A4u;
        // 0x41c7a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C7ACu;
        goto label_41c7ac;
    }
    ctx->pc = 0x41C7A4u;
    SET_GPR_U32(ctx, 31, 0x41C7ACu);
    ctx->pc = 0x41C7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C7A4u;
    // 0x41c7a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CC40u, 0x41C7A4u, 0x41C7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C7ACu;
label_41c7ac:
    // 0x41c7ac: 0x86e40030  lh          $a0, 0x30($s7)
    ctx->pc = 0x41c7acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 48)));
label_41c7b0:
    // 0x41c7b0: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x41c7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_41c7b4:
    // 0x41c7b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41c7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41c7b8:
    // 0x41c7b8: 0xc0c4380  jal         func_310E00
label_41c7bc:
    if (ctx->pc == 0x41C7BCu) {
        ctx->pc = 0x41C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C7B8u;
        // 0x41c7bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C7C0u;
        goto label_41c7c0;
    }
    ctx->pc = 0x41C7B8u;
    SET_GPR_U32(ctx, 31, 0x41C7C0u);
    ctx->pc = 0x41C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C7B8u;
    // 0x41c7bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310E00u, 0x41C7B8u, 0x41C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C7C0u;
label_41c7c0:
    // 0x41c7c0: 0x100000fe  b           . + 4 + (0xFE << 2)
label_41c7c4:
    if (ctx->pc == 0x41C7C4u) {
        ctx->pc = 0x41C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C7C0u;
        // 0x41c7c4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C7C8u;
        goto label_41c7c8;
    }
    ctx->pc = 0x41C7C0u;
    {
        const bool branch_taken_0x41c7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C7C0u;
        // 0x41c7c4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c7c0) {
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41C7C8u;
label_41c7c8:
    // 0x41c7c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41c7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41c7cc:
    // 0x41c7cc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x41c7ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_41c7d0:
    // 0x41c7d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41c7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41c7d4:
    // 0x41c7d4: 0xc107132  jal         func_41C4C8
label_41c7d8:
    if (ctx->pc == 0x41C7D8u) {
        ctx->pc = 0x41C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C7D4u;
        // 0x41c7d8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C7DCu;
        goto label_41c7dc;
    }
    ctx->pc = 0x41C7D4u;
    SET_GPR_U32(ctx, 31, 0x41C7DCu);
    ctx->pc = 0x41C7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C7D4u;
    // 0x41c7d8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4C8u, 0x41C7D4u, 0x41C7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C7DCu;
label_41c7dc:
    // 0x41c7dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x41c7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41c7e0:
    // 0x41c7e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41c7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41c7e4:
    // 0x41c7e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41c7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41c7e8:
    // 0x41c7e8: 0xc107310  jal         func_41CC40
label_41c7ec:
    if (ctx->pc == 0x41C7ECu) {
        ctx->pc = 0x41C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C7E8u;
        // 0x41c7ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C7F0u;
        goto label_41c7f0;
    }
    ctx->pc = 0x41C7E8u;
    SET_GPR_U32(ctx, 31, 0x41C7F0u);
    ctx->pc = 0x41C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C7E8u;
    // 0x41c7ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CC40u, 0x41C7E8u, 0x41C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C7F0u;
label_41c7f0:
    // 0x41c7f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x41c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_41c7f4:
    // 0x41c7f4: 0x906202d5  lbu         $v0, 0x2D5($v1)
    ctx->pc = 0x41c7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 725)));
label_41c7f8:
    // 0x41c7f8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_41c7fc:
    if (ctx->pc == 0x41C7FCu) {
        ctx->pc = 0x41C800u;
        goto label_41c800;
    }
    ctx->pc = 0x41C7F8u;
    {
        const bool branch_taken_0x41c7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c7f8) {
            ctx->pc = 0x41C81Cu;
            goto label_41c81c;
        }
    }
    ctx->pc = 0x41C800u;
label_41c800:
    // 0x41c800: 0x86e40030  lh          $a0, 0x30($s7)
    ctx->pc = 0x41c800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 48)));
label_41c804:
    // 0x41c804: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x41c804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_41c808:
    // 0x41c808: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41c808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41c80c:
    // 0x41c80c: 0xc0c4d00  jal         func_313400
label_41c810:
    if (ctx->pc == 0x41C810u) {
        ctx->pc = 0x41C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C80Cu;
        // 0x41c810: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C814u;
        goto label_41c814;
    }
    ctx->pc = 0x41C80Cu;
    SET_GPR_U32(ctx, 31, 0x41C814u);
    ctx->pc = 0x41C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C80Cu;
    // 0x41c810: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313400u, 0x41C80Cu, 0x41C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C814u;
label_41c814:
    // 0x41c814: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_41c818:
    if (ctx->pc == 0x41C818u) {
        ctx->pc = 0x41C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C814u;
        // 0x41c818: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C81Cu;
        goto label_41c81c;
    }
    ctx->pc = 0x41C814u;
    {
        const bool branch_taken_0x41c814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C814u;
        // 0x41c818: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c814) {
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41C81Cu;
label_41c81c:
    // 0x41c81c: 0xc0c4a28  jal         func_3128A0
label_41c820:
    if (ctx->pc == 0x41C820u) {
        ctx->pc = 0x41C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C81Cu;
        // 0x41c820: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C824u;
        goto label_41c824;
    }
    ctx->pc = 0x41C81Cu;
    SET_GPR_U32(ctx, 31, 0x41C824u);
    ctx->pc = 0x41C820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C81Cu;
    // 0x41c820: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3128A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3128A0u, 0x41C81Cu, 0x41C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C824u;
label_41c824:
    // 0x41c824: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_41c828:
    if (ctx->pc == 0x41C828u) {
        ctx->pc = 0x41C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C824u;
        // 0x41c828: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C82Cu;
        goto label_41c82c;
    }
    ctx->pc = 0x41C824u;
    {
        const bool branch_taken_0x41c824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C824u;
        // 0x41c828: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c824) {
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41C82Cu;
label_41c82c:
    // 0x41c82c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41c82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41c830:
    // 0x41c830: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x41c830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_41c834:
    // 0x41c834: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41c834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41c838:
    // 0x41c838: 0xc107132  jal         func_41C4C8
label_41c83c:
    if (ctx->pc == 0x41C83Cu) {
        ctx->pc = 0x41C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C838u;
        // 0x41c83c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C840u;
        goto label_41c840;
    }
    ctx->pc = 0x41C838u;
    SET_GPR_U32(ctx, 31, 0x41C840u);
    ctx->pc = 0x41C83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C838u;
    // 0x41c83c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4C8u, 0x41C838u, 0x41C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C840u;
label_41c840:
    // 0x41c840: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41c840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41c844:
    // 0x41c844: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41c844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41c848:
    // 0x41c848: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x41c848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41c84c:
    // 0x41c84c: 0xc107310  jal         func_41CC40
label_41c850:
    if (ctx->pc == 0x41C850u) {
        ctx->pc = 0x41C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C84Cu;
        // 0x41c850: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C854u;
        goto label_41c854;
    }
    ctx->pc = 0x41C84Cu;
    SET_GPR_U32(ctx, 31, 0x41C854u);
    ctx->pc = 0x41C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C84Cu;
    // 0x41c850: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CC40u, 0x41C84Cu, 0x41C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C854u;
label_41c854:
    // 0x41c854: 0x86e40030  lh          $a0, 0x30($s7)
    ctx->pc = 0x41c854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 48)));
label_41c858:
    // 0x41c858: 0xc0c814c  jal         func_320530
label_41c85c:
    if (ctx->pc == 0x41C85Cu) {
        ctx->pc = 0x41C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C858u;
        // 0x41c85c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C860u;
        goto label_41c860;
    }
    ctx->pc = 0x41C858u;
    SET_GPR_U32(ctx, 31, 0x41C860u);
    ctx->pc = 0x41C85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C858u;
    // 0x41c85c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320530u, 0x41C858u, 0x41C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C860u;
label_41c860:
    // 0x41c860: 0x568000d6  bnel        $s4, $zero, . + 4 + (0xD6 << 2)
label_41c864:
    if (ctx->pc == 0x41C864u) {
        ctx->pc = 0x41C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C860u;
        // 0x41c864: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C868u;
        goto label_41c868;
    }
    ctx->pc = 0x41C860u;
    {
        const bool branch_taken_0x41c860 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c860) {
            ctx->pc = 0x41C864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C860u;
            // 0x41c864: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41C868u;
label_41c868:
    // 0x41c868: 0x3c052fef  lui         $a1, 0x2FEF
    ctx->pc = 0x41c868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12271 << 16));
label_41c86c:
    // 0x41c86c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41c86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41c870:
    // 0x41c870: 0xc089998  jal         func_226660
label_41c874:
    if (ctx->pc == 0x41C874u) {
        ctx->pc = 0x41C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C870u;
        // 0x41c874: 0x34a5efff  ori         $a1, $a1, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C878u;
        goto label_41c878;
    }
    ctx->pc = 0x41C870u;
    SET_GPR_U32(ctx, 31, 0x41C878u);
    ctx->pc = 0x41C874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C870u;
    // 0x41c874: 0x34a5efff  ori         $a1, $a1, 0xEFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61439);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x41C870u, 0x41C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C878u;
label_41c878:
    // 0x41c878: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_41c87c:
    if (ctx->pc == 0x41C87Cu) {
        ctx->pc = 0x41C880u;
        goto label_41c880;
    }
    ctx->pc = 0x41C878u;
    {
        const bool branch_taken_0x41c878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c878) {
            ctx->pc = 0x41C8D8u;
            goto label_41c8d8;
        }
    }
    ctx->pc = 0x41C880u;
label_41c880:
    // 0x41c880: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x41c880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_41c884:
    // 0x41c884: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x41c884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_41c888:
    // 0x41c888: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x41c888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_41c88c:
    // 0x41c88c: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x41c88cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_41c890:
    // 0x41c890: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x41c890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_41c894:
    // 0x41c894: 0xc08997c  jal         func_2265F0
label_41c898:
    if (ctx->pc == 0x41C898u) {
        ctx->pc = 0x41C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C894u;
        // 0x41c898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C89Cu;
        goto label_41c89c;
    }
    ctx->pc = 0x41C894u;
    SET_GPR_U32(ctx, 31, 0x41C89Cu);
    ctx->pc = 0x41C898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C894u;
    // 0x41c898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x41C894u, 0x41C89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C89Cu;
label_41c89c:
    // 0x41c89c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_41c8a0:
    if (ctx->pc == 0x41C8A0u) {
        ctx->pc = 0x41C8A4u;
        goto label_41c8a4;
    }
    ctx->pc = 0x41C89Cu;
    {
        const bool branch_taken_0x41c89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c89c) {
            ctx->pc = 0x41C8D8u;
            goto label_41c8d8;
        }
    }
    ctx->pc = 0x41C8A4u;
label_41c8a4:
    // 0x41c8a4: 0xc089000  jal         func_224000
label_41c8a8:
    if (ctx->pc == 0x41C8A8u) {
        ctx->pc = 0x41C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C8A4u;
        // 0x41c8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C8ACu;
        goto label_41c8ac;
    }
    ctx->pc = 0x41C8A4u;
    SET_GPR_U32(ctx, 31, 0x41C8ACu);
    ctx->pc = 0x41C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C8A4u;
    // 0x41c8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x41C8A4u, 0x41C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C8ACu;
label_41c8ac:
    // 0x41c8ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_41c8b0:
    if (ctx->pc == 0x41C8B0u) {
        ctx->pc = 0x41C8B4u;
        goto label_41c8b4;
    }
    ctx->pc = 0x41C8ACu;
    {
        const bool branch_taken_0x41c8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c8ac) {
            ctx->pc = 0x41C8D8u;
            goto label_41c8d8;
        }
    }
    ctx->pc = 0x41C8B4u;
label_41c8b4:
    // 0x41c8b4: 0xc08a0d0  jal         func_228340
label_41c8b8:
    if (ctx->pc == 0x41C8B8u) {
        ctx->pc = 0x41C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C8B4u;
        // 0x41c8b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C8BCu;
        goto label_41c8bc;
    }
    ctx->pc = 0x41C8B4u;
    SET_GPR_U32(ctx, 31, 0x41C8BCu);
    ctx->pc = 0x41C8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C8B4u;
    // 0x41c8b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x41C8B4u, 0x41C8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C8BCu;
label_41c8bc:
    // 0x41c8bc: 0x240302a8  addiu       $v1, $zero, 0x2A8
    ctx->pc = 0x41c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
label_41c8c0:
    // 0x41c8c0: 0x240502a4  addiu       $a1, $zero, 0x2A4
    ctx->pc = 0x41c8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
label_41c8c4:
    // 0x41c8c4: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x41c8c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_41c8c8:
    // 0x41c8c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41c8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41c8cc:
    // 0x41c8cc: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x41c8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_41c8d0:
    // 0x41c8d0: 0xc096a30  jal         func_25A8C0
label_41c8d4:
    if (ctx->pc == 0x41C8D4u) {
        ctx->pc = 0x41C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C8D0u;
        // 0x41c8d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C8D8u;
        goto label_41c8d8;
    }
    ctx->pc = 0x41C8D0u;
    SET_GPR_U32(ctx, 31, 0x41C8D8u);
    ctx->pc = 0x41C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C8D0u;
    // 0x41c8d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8C0u, 0x41C8D0u, 0x41C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C8D8u;
label_41c8d8:
    // 0x41c8d8: 0x568000b8  bnel        $s4, $zero, . + 4 + (0xB8 << 2)
label_41c8dc:
    if (ctx->pc == 0x41C8DCu) {
        ctx->pc = 0x41C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C8D8u;
        // 0x41c8dc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C8E0u;
        goto label_41c8e0;
    }
    ctx->pc = 0x41C8D8u;
    {
        const bool branch_taken_0x41c8d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c8d8) {
            ctx->pc = 0x41C8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C8D8u;
            // 0x41c8dc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41C8E0u;
label_41c8e0:
    // 0x41c8e0: 0xc089f22  jal         func_227C88
label_41c8e4:
    if (ctx->pc == 0x41C8E4u) {
        ctx->pc = 0x41C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C8E0u;
        // 0x41c8e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C8E8u;
        goto label_41c8e8;
    }
    ctx->pc = 0x41C8E0u;
    SET_GPR_U32(ctx, 31, 0x41C8E8u);
    ctx->pc = 0x41C8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C8E0u;
    // 0x41c8e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C88u, 0x41C8E0u, 0x41C8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C8E8u;
label_41c8e8:
    // 0x41c8e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41c8ec:
    // 0x41c8ec: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_41c8f0:
    if (ctx->pc == 0x41C8F0u) {
        ctx->pc = 0x41C8F4u;
        goto label_41c8f4;
    }
    ctx->pc = 0x41C8ECu;
    {
        const bool branch_taken_0x41c8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x41c8ec) {
            ctx->pc = 0x41C928u;
            goto label_41c928;
        }
    }
    ctx->pc = 0x41C8F4u;
label_41c8f4:
    // 0x41c8f4: 0xc089b98  jal         func_226E60
label_41c8f8:
    if (ctx->pc == 0x41C8F8u) {
        ctx->pc = 0x41C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C8F4u;
        // 0x41c8f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C8FCu;
        goto label_41c8fc;
    }
    ctx->pc = 0x41C8F4u;
    SET_GPR_U32(ctx, 31, 0x41C8FCu);
    ctx->pc = 0x41C8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C8F4u;
    // 0x41c8f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x41C8F4u, 0x41C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C8FCu;
label_41c8fc:
    // 0x41c8fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41c8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c900:
    // 0x41c900: 0x520000ae  beql        $s0, $zero, . + 4 + (0xAE << 2)
label_41c904:
    if (ctx->pc == 0x41C904u) {
        ctx->pc = 0x41C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C900u;
        // 0x41c904: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C908u;
        goto label_41c908;
    }
    ctx->pc = 0x41C900u;
    {
        const bool branch_taken_0x41c900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c900) {
            ctx->pc = 0x41C904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C900u;
            // 0x41c904: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41C908u;
label_41c908:
    // 0x41c908: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41c908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41c90c:
    // 0x41c90c: 0xc088aa4  jal         func_222A90
label_41c910:
    if (ctx->pc == 0x41C910u) {
        ctx->pc = 0x41C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C90Cu;
        // 0x41c910: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C914u;
        goto label_41c914;
    }
    ctx->pc = 0x41C90Cu;
    SET_GPR_U32(ctx, 31, 0x41C914u);
    ctx->pc = 0x41C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C90Cu;
    // 0x41c910: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x41C90Cu, 0x41C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C914u;
label_41c914:
    // 0x41c914: 0x544000a9  bnel        $v0, $zero, . + 4 + (0xA9 << 2)
label_41c918:
    if (ctx->pc == 0x41C918u) {
        ctx->pc = 0x41C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C914u;
        // 0x41c918: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C91Cu;
        goto label_41c91c;
    }
    ctx->pc = 0x41C914u;
    {
        const bool branch_taken_0x41c914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c914) {
            ctx->pc = 0x41C918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C914u;
            // 0x41c918: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41C91Cu;
label_41c91c:
    // 0x41c91c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x41c91cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_41c920:
    // 0x41c920: 0x10000017  b           . + 4 + (0x17 << 2)
label_41c924:
    if (ctx->pc == 0x41C924u) {
        ctx->pc = 0x41C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C920u;
        // 0x41c924: 0x21027  nor         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C928u;
        goto label_41c928;
    }
    ctx->pc = 0x41C920u;
    {
        const bool branch_taken_0x41c920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C920u;
        // 0x41c924: 0x21027  nor         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c920) {
            ctx->pc = 0x41C980u;
            goto label_41c980;
        }
    }
    ctx->pc = 0x41C928u;
label_41c928:
    // 0x41c928: 0xc0e409a  jal         func_390268
label_41c92c:
    if (ctx->pc == 0x41C92Cu) {
        ctx->pc = 0x41C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C928u;
        // 0x41c92c: 0x26a40280  addiu       $a0, $s5, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C930u;
        goto label_41c930;
    }
    ctx->pc = 0x41C928u;
    SET_GPR_U32(ctx, 31, 0x41C930u);
    ctx->pc = 0x41C92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C928u;
    // 0x41c92c: 0x26a40280  addiu       $a0, $s5, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41C928u, 0x41C930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C930u;
label_41c930:
    // 0x41c930: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x41c930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c934:
    // 0x41c934: 0xc0e409a  jal         func_390268
label_41c938:
    if (ctx->pc == 0x41C938u) {
        ctx->pc = 0x41C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C934u;
        // 0x41c938: 0x26a40284  addiu       $a0, $s5, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 644));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C93Cu;
        goto label_41c93c;
    }
    ctx->pc = 0x41C934u;
    SET_GPR_U32(ctx, 31, 0x41C93Cu);
    ctx->pc = 0x41C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C934u;
    // 0x41c938: 0x26a40284  addiu       $a0, $s5, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41C934u, 0x41C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C93Cu;
label_41c93c:
    // 0x41c93c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_41c940:
    if (ctx->pc == 0x41C940u) {
        ctx->pc = 0x41C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C93Cu;
        // 0x41c940: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C944u;
        goto label_41c944;
    }
    ctx->pc = 0x41C93Cu;
    {
        const bool branch_taken_0x41c93c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C93Cu;
        // 0x41c940: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c93c) {
            ctx->pc = 0x41C96Cu;
            goto label_41c96c;
        }
    }
    ctx->pc = 0x41C944u;
label_41c944:
    // 0x41c944: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41c944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41c948:
    // 0x41c948: 0xc088aa4  jal         func_222A90
label_41c94c:
    if (ctx->pc == 0x41C94Cu) {
        ctx->pc = 0x41C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C948u;
        // 0x41c94c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C950u;
        goto label_41c950;
    }
    ctx->pc = 0x41C948u;
    SET_GPR_U32(ctx, 31, 0x41C950u);
    ctx->pc = 0x41C94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C948u;
    // 0x41c94c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x41C948u, 0x41C950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C950u;
label_41c950:
    // 0x41c950: 0x5440009a  bnel        $v0, $zero, . + 4 + (0x9A << 2)
label_41c954:
    if (ctx->pc == 0x41C954u) {
        ctx->pc = 0x41C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C950u;
        // 0x41c954: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C958u;
        goto label_41c958;
    }
    ctx->pc = 0x41C950u;
    {
        const bool branch_taken_0x41c950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c950) {
            ctx->pc = 0x41C954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C950u;
            // 0x41c954: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41C958u;
label_41c958:
    // 0x41c958: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x41c958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41c95c:
    // 0x41c95c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41c95cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41c960:
    // 0x41c960: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x41c960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_41c964:
    // 0x41c964: 0x1000000c  b           . + 4 + (0xC << 2)
label_41c968:
    if (ctx->pc == 0x41C968u) {
        ctx->pc = 0x41C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C964u;
        // 0x41c968: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C96Cu;
        goto label_41c96c;
    }
    ctx->pc = 0x41C964u;
    {
        const bool branch_taken_0x41c964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C964u;
        // 0x41c968: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c964) {
            ctx->pc = 0x41C998u;
            goto label_41c998;
        }
    }
    ctx->pc = 0x41C96Cu;
label_41c96c:
    // 0x41c96c: 0x52000093  beql        $s0, $zero, . + 4 + (0x93 << 2)
label_41c970:
    if (ctx->pc == 0x41C970u) {
        ctx->pc = 0x41C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C96Cu;
        // 0x41c970: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C974u;
        goto label_41c974;
    }
    ctx->pc = 0x41C96Cu;
    {
        const bool branch_taken_0x41c96c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c96c) {
            ctx->pc = 0x41C970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C96Cu;
            // 0x41c970: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41C974u;
label_41c974:
    // 0x41c974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41c974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41c978:
    // 0x41c978: 0xc088aa4  jal         func_222A90
label_41c97c:
    if (ctx->pc == 0x41C97Cu) {
        ctx->pc = 0x41C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C978u;
        // 0x41c97c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C980u;
        goto label_41c980;
    }
    ctx->pc = 0x41C978u;
    SET_GPR_U32(ctx, 31, 0x41C980u);
    ctx->pc = 0x41C97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C978u;
    // 0x41c97c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x41C978u, 0x41C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C980u;
label_41c980:
    // 0x41c980: 0x5440008e  bnel        $v0, $zero, . + 4 + (0x8E << 2)
label_41c984:
    if (ctx->pc == 0x41C984u) {
        ctx->pc = 0x41C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C980u;
        // 0x41c984: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C988u;
        goto label_41c988;
    }
    ctx->pc = 0x41C980u;
    {
        const bool branch_taken_0x41c980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c980) {
            ctx->pc = 0x41C984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C980u;
            // 0x41c984: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41C988u;
label_41c988:
    // 0x41c988: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x41c988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41c98c:
    // 0x41c98c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41c98cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41c990:
    // 0x41c990: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x41c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_41c994:
    // 0x41c994: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x41c994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_41c998:
    // 0x41c998: 0x40f809  jalr        $v0
label_41c99c:
    if (ctx->pc == 0x41C99Cu) {
        ctx->pc = 0x41C9A0u;
        goto label_41c9a0;
    }
    ctx->pc = 0x41C998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41C9A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C998u, 0x41C9A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C9A0u;
label_41c9a0:
    // 0x41c9a0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x41c9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_41c9a4:
    // 0x41c9a4: 0xc0596dc  jal         func_165B70
label_41c9a8:
    if (ctx->pc == 0x41C9A8u) {
        ctx->pc = 0x41C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C9A4u;
        // 0x41c9a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C9ACu;
        goto label_41c9ac;
    }
    ctx->pc = 0x41C9A4u;
    SET_GPR_U32(ctx, 31, 0x41C9ACu);
    ctx->pc = 0x41C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C9A4u;
    // 0x41c9a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B70u, 0x41C9A4u, 0x41C9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C9ACu;
label_41c9ac:
    // 0x41c9ac: 0x10000083  b           . + 4 + (0x83 << 2)
label_41c9b0:
    if (ctx->pc == 0x41C9B0u) {
        ctx->pc = 0x41C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C9ACu;
        // 0x41c9b0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C9B4u;
        goto label_41c9b4;
    }
    ctx->pc = 0x41C9ACu;
    {
        const bool branch_taken_0x41c9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C9ACu;
        // 0x41c9b0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c9ac) {
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41C9B4u;
label_41c9b4:
    // 0x41c9b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41c9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41c9b8:
    // 0x41c9b8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x41c9b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_41c9bc:
    // 0x41c9bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41c9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41c9c0:
    // 0x41c9c0: 0xc107132  jal         func_41C4C8
label_41c9c4:
    if (ctx->pc == 0x41C9C4u) {
        ctx->pc = 0x41C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C9C0u;
        // 0x41c9c4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C9C8u;
        goto label_41c9c8;
    }
    ctx->pc = 0x41C9C0u;
    SET_GPR_U32(ctx, 31, 0x41C9C8u);
    ctx->pc = 0x41C9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C9C0u;
    // 0x41c9c4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4C8u, 0x41C9C0u, 0x41C9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C9C8u;
label_41c9c8:
    // 0x41c9c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41c9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41c9cc:
    // 0x41c9cc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x41c9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41c9d0:
    // 0x41c9d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41c9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41c9d4:
    // 0x41c9d4: 0xc107310  jal         func_41CC40
label_41c9d8:
    if (ctx->pc == 0x41C9D8u) {
        ctx->pc = 0x41C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C9D4u;
        // 0x41c9d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C9DCu;
        goto label_41c9dc;
    }
    ctx->pc = 0x41C9D4u;
    SET_GPR_U32(ctx, 31, 0x41C9DCu);
    ctx->pc = 0x41C9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C9D4u;
    // 0x41c9d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CC40u, 0x41C9D4u, 0x41C9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C9DCu;
label_41c9dc:
    // 0x41c9dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x41c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_41c9e0:
    // 0x41c9e0: 0x86f00030  lh          $s0, 0x30($s7)
    ctx->pc = 0x41c9e0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 48)));
label_41c9e4:
    // 0x41c9e4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41c9e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41c9e8:
    // 0x41c9e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x41c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_41c9ec:
    // 0x41c9ec: 0x40f809  jalr        $v0
label_41c9f0:
    if (ctx->pc == 0x41C9F0u) {
        ctx->pc = 0x41C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C9ECu;
        // 0x41c9f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C9F4u;
        goto label_41c9f4;
    }
    ctx->pc = 0x41C9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41C9F4u);
        ctx->pc = 0x41C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C9ECu;
        // 0x41c9f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C9ECu, 0x41C9F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C9F4u;
label_41c9f4:
    // 0x41c9f4: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x41c9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_41c9f8:
    // 0x41c9f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41c9f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41c9fc:
    // 0x41c9fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41c9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41ca00:
    // 0x41ca00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41ca00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41ca04:
    // 0x41ca04: 0xc0c5766  jal         func_315D98
label_41ca08:
    if (ctx->pc == 0x41CA08u) {
        ctx->pc = 0x41CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA04u;
        // 0x41ca08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CA0Cu;
        goto label_41ca0c;
    }
    ctx->pc = 0x41CA04u;
    SET_GPR_U32(ctx, 31, 0x41CA0Cu);
    ctx->pc = 0x41CA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CA04u;
    // 0x41ca08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315D98u, 0x41CA04u, 0x41CA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CA0Cu;
label_41ca0c:
    // 0x41ca0c: 0x5680006b  bnel        $s4, $zero, . + 4 + (0x6B << 2)
label_41ca10:
    if (ctx->pc == 0x41CA10u) {
        ctx->pc = 0x41CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA0Cu;
        // 0x41ca10: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CA14u;
        goto label_41ca14;
    }
    ctx->pc = 0x41CA0Cu;
    {
        const bool branch_taken_0x41ca0c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x41ca0c) {
            ctx->pc = 0x41CA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41CA0Cu;
            // 0x41ca10: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41CA14u;
label_41ca14:
    // 0x41ca14: 0x3c052fef  lui         $a1, 0x2FEF
    ctx->pc = 0x41ca14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12271 << 16));
label_41ca18:
    // 0x41ca18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41ca18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41ca1c:
    // 0x41ca1c: 0xc089998  jal         func_226660
label_41ca20:
    if (ctx->pc == 0x41CA20u) {
        ctx->pc = 0x41CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA1Cu;
        // 0x41ca20: 0x34a5efff  ori         $a1, $a1, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CA24u;
        goto label_41ca24;
    }
    ctx->pc = 0x41CA1Cu;
    SET_GPR_U32(ctx, 31, 0x41CA24u);
    ctx->pc = 0x41CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CA1Cu;
    // 0x41ca20: 0x34a5efff  ori         $a1, $a1, 0xEFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61439);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x41CA1Cu, 0x41CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CA24u;
label_41ca24:
    // 0x41ca24: 0x54400065  bnel        $v0, $zero, . + 4 + (0x65 << 2)
label_41ca28:
    if (ctx->pc == 0x41CA28u) {
        ctx->pc = 0x41CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA24u;
        // 0x41ca28: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CA2Cu;
        goto label_41ca2c;
    }
    ctx->pc = 0x41CA24u;
    {
        const bool branch_taken_0x41ca24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41ca24) {
            ctx->pc = 0x41CA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41CA24u;
            // 0x41ca28: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41CA2Cu;
label_41ca2c:
    // 0x41ca2c: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x41ca2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_41ca30:
    // 0x41ca30: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x41ca30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_41ca34:
    // 0x41ca34: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x41ca34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_41ca38:
    // 0x41ca38: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x41ca38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_41ca3c:
    // 0x41ca3c: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x41ca3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_41ca40:
    // 0x41ca40: 0xc08997c  jal         func_2265F0
label_41ca44:
    if (ctx->pc == 0x41CA44u) {
        ctx->pc = 0x41CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA40u;
        // 0x41ca44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CA48u;
        goto label_41ca48;
    }
    ctx->pc = 0x41CA40u;
    SET_GPR_U32(ctx, 31, 0x41CA48u);
    ctx->pc = 0x41CA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CA40u;
    // 0x41ca44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x41CA40u, 0x41CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CA48u;
label_41ca48:
    // 0x41ca48: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
label_41ca4c:
    if (ctx->pc == 0x41CA4Cu) {
        ctx->pc = 0x41CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA48u;
        // 0x41ca4c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CA50u;
        goto label_41ca50;
    }
    ctx->pc = 0x41CA48u;
    {
        const bool branch_taken_0x41ca48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41ca48) {
            ctx->pc = 0x41CA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41CA48u;
            // 0x41ca4c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41CA50u;
label_41ca50:
    // 0x41ca50: 0xc089000  jal         func_224000
label_41ca54:
    if (ctx->pc == 0x41CA54u) {
        ctx->pc = 0x41CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA50u;
        // 0x41ca54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CA58u;
        goto label_41ca58;
    }
    ctx->pc = 0x41CA50u;
    SET_GPR_U32(ctx, 31, 0x41CA58u);
    ctx->pc = 0x41CA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CA50u;
    // 0x41ca54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x41CA50u, 0x41CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CA58u;
label_41ca58:
    // 0x41ca58: 0x54400058  bnel        $v0, $zero, . + 4 + (0x58 << 2)
label_41ca5c:
    if (ctx->pc == 0x41CA5Cu) {
        ctx->pc = 0x41CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA58u;
        // 0x41ca5c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CA60u;
        goto label_41ca60;
    }
    ctx->pc = 0x41CA58u;
    {
        const bool branch_taken_0x41ca58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41ca58) {
            ctx->pc = 0x41CA5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41CA58u;
            // 0x41ca5c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41CA60u;
label_41ca60:
    // 0x41ca60: 0xc08a0d0  jal         func_228340
label_41ca64:
    if (ctx->pc == 0x41CA64u) {
        ctx->pc = 0x41CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA60u;
        // 0x41ca64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CA68u;
        goto label_41ca68;
    }
    ctx->pc = 0x41CA60u;
    SET_GPR_U32(ctx, 31, 0x41CA68u);
    ctx->pc = 0x41CA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CA60u;
    // 0x41ca64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x41CA60u, 0x41CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CA68u;
label_41ca68:
    // 0x41ca68: 0x240302a7  addiu       $v1, $zero, 0x2A7
    ctx->pc = 0x41ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
label_41ca6c:
    // 0x41ca6c: 0x240502a3  addiu       $a1, $zero, 0x2A3
    ctx->pc = 0x41ca6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 675));
label_41ca70:
    // 0x41ca70: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x41ca70u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_41ca74:
    // 0x41ca74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41ca74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41ca78:
    // 0x41ca78: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x41ca78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_41ca7c:
    // 0x41ca7c: 0xc096a30  jal         func_25A8C0
label_41ca80:
    if (ctx->pc == 0x41CA80u) {
        ctx->pc = 0x41CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA7Cu;
        // 0x41ca80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CA84u;
        goto label_41ca84;
    }
    ctx->pc = 0x41CA7Cu;
    SET_GPR_U32(ctx, 31, 0x41CA84u);
    ctx->pc = 0x41CA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CA7Cu;
    // 0x41ca80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8C0u, 0x41CA7Cu, 0x41CA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CA84u;
label_41ca84:
    // 0x41ca84: 0x1000004d  b           . + 4 + (0x4D << 2)
label_41ca88:
    if (ctx->pc == 0x41CA88u) {
        ctx->pc = 0x41CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA84u;
        // 0x41ca88: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CA8Cu;
        goto label_41ca8c;
    }
    ctx->pc = 0x41CA84u;
    {
        const bool branch_taken_0x41ca84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA84u;
        // 0x41ca88: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ca84) {
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41CA8Cu;
label_41ca8c:
    // 0x41ca8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41ca8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41ca90:
    // 0x41ca90: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x41ca90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_41ca94:
    // 0x41ca94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41ca94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41ca98:
    // 0x41ca98: 0xc107132  jal         func_41C4C8
label_41ca9c:
    if (ctx->pc == 0x41CA9Cu) {
        ctx->pc = 0x41CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CA98u;
        // 0x41ca9c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CAA0u;
        goto label_41caa0;
    }
    ctx->pc = 0x41CA98u;
    SET_GPR_U32(ctx, 31, 0x41CAA0u);
    ctx->pc = 0x41CA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CA98u;
    // 0x41ca9c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4C8u, 0x41CA98u, 0x41CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CAA0u;
label_41caa0:
    // 0x41caa0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41caa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41caa4:
    // 0x41caa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41caa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41caa8:
    // 0x41caa8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x41caa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41caac:
    // 0x41caac: 0xc107310  jal         func_41CC40
label_41cab0:
    if (ctx->pc == 0x41CAB0u) {
        ctx->pc = 0x41CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CAACu;
        // 0x41cab0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CAB4u;
        goto label_41cab4;
    }
    ctx->pc = 0x41CAACu;
    SET_GPR_U32(ctx, 31, 0x41CAB4u);
    ctx->pc = 0x41CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CAACu;
    // 0x41cab0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CC40u, 0x41CAACu, 0x41CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CAB4u;
label_41cab4:
    // 0x41cab4: 0x86e40030  lh          $a0, 0x30($s7)
    ctx->pc = 0x41cab4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 48)));
label_41cab8:
    // 0x41cab8: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x41cab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
label_41cabc:
    // 0x41cabc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41cabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41cac0:
    // 0x41cac0: 0xc0c655c  jal         func_319570
label_41cac4:
    if (ctx->pc == 0x41CAC4u) {
        ctx->pc = 0x41CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CAC0u;
        // 0x41cac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CAC8u;
        goto label_41cac8;
    }
    ctx->pc = 0x41CAC0u;
    SET_GPR_U32(ctx, 31, 0x41CAC8u);
    ctx->pc = 0x41CAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CAC0u;
    // 0x41cac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319570u, 0x41CAC0u, 0x41CAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CAC8u;
label_41cac8:
    // 0x41cac8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_41cacc:
    if (ctx->pc == 0x41CACCu) {
        ctx->pc = 0x41CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CAC8u;
        // 0x41cacc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CAD0u;
        goto label_41cad0;
    }
    ctx->pc = 0x41CAC8u;
    {
        const bool branch_taken_0x41cac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CAC8u;
        // 0x41cacc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cac8) {
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41CAD0u;
label_41cad0:
    // 0x41cad0: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x41cad0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_41cad4:
    // 0x41cad4: 0x15000006  bnez        $t0, . + 4 + (0x6 << 2)
label_41cad8:
    if (ctx->pc == 0x41CAD8u) {
        ctx->pc = 0x41CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CAD4u;
        // 0x41cad8: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CADCu;
        goto label_41cadc;
    }
    ctx->pc = 0x41CAD4u;
    {
        const bool branch_taken_0x41cad4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CAD4u;
        // 0x41cad8: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cad4) {
            ctx->pc = 0x41CAF0u;
            goto label_41caf0;
        }
    }
    ctx->pc = 0x41CADCu;
label_41cadc:
    // 0x41cadc: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x41cadcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_41cae0:
    // 0x41cae0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x41cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_41cae4:
    // 0x41cae4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x41cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_41cae8:
    // 0x41cae8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x41cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_41caec:
    // 0x41caec: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x41caecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41caf0:
    // 0x41caf0: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x41caf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_41caf4:
    // 0x41caf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41caf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41caf8:
    // 0x41caf8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x41caf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_41cafc:
    // 0x41cafc: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x41cafcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_41cb00:
    // 0x41cb00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x41cb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41cb04:
    // 0x41cb04: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x41cb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_41cb08:
    // 0x41cb08: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x41cb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_41cb0c:
    // 0x41cb0c: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x41cb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_41cb10:
    // 0x41cb10: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x41cb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_41cb14:
    // 0x41cb14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41cb14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41cb18:
    // 0x41cb18: 0xc105df6  jal         func_4177D8
label_41cb1c:
    if (ctx->pc == 0x41CB1Cu) {
        ctx->pc = 0x41CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CB18u;
        // 0x41cb1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CB20u;
        goto label_41cb20;
    }
    ctx->pc = 0x41CB18u;
    SET_GPR_U32(ctx, 31, 0x41CB20u);
    ctx->pc = 0x41CB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CB18u;
    // 0x41cb1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x41CB18u, 0x41CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CB20u;
label_41cb20:
    // 0x41cb20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x41cb20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41cb24:
    // 0x41cb24: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_41cb28:
    if (ctx->pc == 0x41CB28u) {
        ctx->pc = 0x41CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CB24u;
        // 0x41cb28: 0xc7a10018  lwc1        $f1, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CB2Cu;
        goto label_41cb2c;
    }
    ctx->pc = 0x41CB24u;
    {
        const bool branch_taken_0x41cb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CB24u;
        // 0x41cb28: 0xc7a10018  lwc1        $f1, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cb24) {
            ctx->pc = 0x41CB68u;
            goto label_41cb68;
        }
    }
    ctx->pc = 0x41CB2Cu;
label_41cb2c:
    // 0x41cb2c: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x41cb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_41cb30:
    // 0x41cb30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x41cb30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41cb34:
    // 0x41cb34: 0x0  nop
    ctx->pc = 0x41cb34u;
    // NOP
label_41cb38:
    // 0x41cb38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x41cb38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41cb3c:
    // 0x41cb3c: 0x0  nop
    ctx->pc = 0x41cb3cu;
    // NOP
label_41cb40:
    // 0x41cb40: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_41cb44:
    if (ctx->pc == 0x41CB44u) {
        ctx->pc = 0x41CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CB40u;
        // 0x41cb44: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CB48u;
        goto label_41cb48;
    }
    ctx->pc = 0x41CB40u;
    {
        const bool branch_taken_0x41cb40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CB40u;
        // 0x41cb44: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cb40) {
            ctx->pc = 0x41CB68u;
            goto label_41cb68;
        }
    }
    ctx->pc = 0x41CB48u;
label_41cb48:
    // 0x41cb48: 0x906500d8  lbu         $a1, 0xD8($v1)
    ctx->pc = 0x41cb48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 216)));
label_41cb4c:
    // 0x41cb4c: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x41cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_41cb50:
    // 0x41cb50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41cb50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41cb54:
    // 0x41cb54: 0xc0e6960  jal         func_39A580
label_41cb58:
    if (ctx->pc == 0x41CB58u) {
        ctx->pc = 0x41CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CB54u;
        // 0x41cb58: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CB5Cu;
        goto label_41cb5c;
    }
    ctx->pc = 0x41CB54u;
    SET_GPR_U32(ctx, 31, 0x41CB5Cu);
    ctx->pc = 0x41CB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CB54u;
    // 0x41cb58: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A580u, 0x41CB54u, 0x41CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CB5Cu;
label_41cb5c:
    // 0x41cb5c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x41cb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_41cb60:
    // 0x41cb60: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x41cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_41cb64:
    // 0x41cb64: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x41cb64u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_41cb68:
    // 0x41cb68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41cb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41cb6c:
    // 0x41cb6c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x41cb6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_41cb70:
    // 0x41cb70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41cb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41cb74:
    // 0x41cb74: 0xc107132  jal         func_41C4C8
label_41cb78:
    if (ctx->pc == 0x41CB78u) {
        ctx->pc = 0x41CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CB74u;
        // 0x41cb78: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CB7Cu;
        goto label_41cb7c;
    }
    ctx->pc = 0x41CB74u;
    SET_GPR_U32(ctx, 31, 0x41CB7Cu);
    ctx->pc = 0x41CB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CB74u;
    // 0x41cb78: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4C8u, 0x41CB74u, 0x41CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CB7Cu;
label_41cb7c:
    // 0x41cb7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41cb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41cb80:
    // 0x41cb80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41cb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41cb84:
    // 0x41cb84: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x41cb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41cb88:
    // 0x41cb88: 0xc107310  jal         func_41CC40
label_41cb8c:
    if (ctx->pc == 0x41CB8Cu) {
        ctx->pc = 0x41CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CB88u;
        // 0x41cb8c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CB90u;
        goto label_41cb90;
    }
    ctx->pc = 0x41CB88u;
    SET_GPR_U32(ctx, 31, 0x41CB90u);
    ctx->pc = 0x41CB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CB88u;
    // 0x41cb8c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CC40u, 0x41CB88u, 0x41CB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CB90u;
label_41cb90:
    // 0x41cb90: 0x86e40030  lh          $a0, 0x30($s7)
    ctx->pc = 0x41cb90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 48)));
label_41cb94:
    // 0x41cb94: 0xc0c82d8  jal         func_320B60
label_41cb98:
    if (ctx->pc == 0x41CB98u) {
        ctx->pc = 0x41CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CB94u;
        // 0x41cb98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CB9Cu;
        goto label_41cb9c;
    }
    ctx->pc = 0x41CB94u;
    SET_GPR_U32(ctx, 31, 0x41CB9Cu);
    ctx->pc = 0x41CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CB94u;
    // 0x41cb98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320B60u, 0x41CB94u, 0x41CB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CB9Cu;
label_41cb9c:
    // 0x41cb9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_41cba0:
    if (ctx->pc == 0x41CBA0u) {
        ctx->pc = 0x41CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CB9Cu;
        // 0x41cba0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CBA4u;
        goto label_41cba4;
    }
    ctx->pc = 0x41CB9Cu;
    {
        const bool branch_taken_0x41cb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CB9Cu;
        // 0x41cba0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cb9c) {
            ctx->pc = 0x41CBBCu;
            goto label_41cbbc;
        }
    }
    ctx->pc = 0x41CBA4u;
label_41cba4:
    // 0x41cba4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41cba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41cba8:
    // 0x41cba8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x41cba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_41cbac:
    // 0x41cbac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41cbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41cbb0:
    // 0x41cbb0: 0xc107132  jal         func_41C4C8
label_41cbb4:
    if (ctx->pc == 0x41CBB4u) {
        ctx->pc = 0x41CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CBB0u;
        // 0x41cbb4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CBB8u;
        goto label_41cbb8;
    }
    ctx->pc = 0x41CBB0u;
    SET_GPR_U32(ctx, 31, 0x41CBB8u);
    ctx->pc = 0x41CBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CBB0u;
    // 0x41cbb4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4C8u, 0x41CBB0u, 0x41CBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CBB8u;
label_41cbb8:
    // 0x41cbb8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x41cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_41cbbc:
    // 0x41cbbc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41cbbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41cbc0:
    // 0x41cbc0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x41cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_41cbc4:
    // 0x41cbc4: 0x40f809  jalr        $v0
label_41cbc8:
    if (ctx->pc == 0x41CBC8u) {
        ctx->pc = 0x41CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CBC4u;
        // 0x41cbc8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CBCCu;
        goto label_41cbcc;
    }
    ctx->pc = 0x41CBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41CBCCu);
        ctx->pc = 0x41CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CBC4u;
        // 0x41cbc8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CBC4u, 0x41CBCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41CBCCu;
label_41cbcc:
    // 0x41cbcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41cbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41cbd0:
    // 0x41cbd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41cbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41cbd4:
    // 0x41cbd4: 0xc106d78  jal         func_41B5E0
label_41cbd8:
    if (ctx->pc == 0x41CBD8u) {
        ctx->pc = 0x41CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CBD4u;
        // 0x41cbd8: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CBDCu;
        goto label_41cbdc;
    }
    ctx->pc = 0x41CBD4u;
    SET_GPR_U32(ctx, 31, 0x41CBDCu);
    ctx->pc = 0x41CBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CBD4u;
    // 0x41cbd8: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B5E0u, 0x41CBD4u, 0x41CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CBDCu;
label_41cbdc:
    // 0x41cbdc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x41cbdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_41cbe0:
    // 0x41cbe0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x41cbe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_41cbe4:
    // 0x41cbe4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x41cbe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_41cbe8:
    // 0x41cbe8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x41cbe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_41cbec:
    // 0x41cbec: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x41cbecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41cbf0:
    // 0x41cbf0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x41cbf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41cbf4:
    // 0x41cbf4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x41cbf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41cbf8:
    // 0x41cbf8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x41cbf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41cbfc:
    // 0x41cbfc: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x41cbfcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41cc00:
    // 0x41cc00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x41cc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_41cc04:
    // 0x41cc04: 0x3e00008  jr          $ra
label_41cc08:
    if (ctx->pc == 0x41CC08u) {
        ctx->pc = 0x41CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CC04u;
        // 0x41cc08: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CC0Cu;
        goto label_41cc0c;
    }
    ctx->pc = 0x41CC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CC04u;
        // 0x41cc08: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CC0Cu;
label_41cc0c:
    // 0x41cc0c: 0x0  nop
    ctx->pc = 0x41cc0cu;
    // NOP
    ctx->pc = 0x41cc10u;
}
