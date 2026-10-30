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

// Function: sub_002F8468
// Address: 0x2f8468 - 0x2f8c90
void sub_002F8468_0x2f8468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8468_0x2f8468");
#endif

    switch (ctx->pc) {
        case 0x2f8468u: goto label_2f8468;
        case 0x2f846cu: goto label_2f846c;
        case 0x2f8470u: goto label_2f8470;
        case 0x2f8474u: goto label_2f8474;
        case 0x2f8478u: goto label_2f8478;
        case 0x2f847cu: goto label_2f847c;
        case 0x2f8480u: goto label_2f8480;
        case 0x2f8484u: goto label_2f8484;
        case 0x2f8488u: goto label_2f8488;
        case 0x2f848cu: goto label_2f848c;
        case 0x2f8490u: goto label_2f8490;
        case 0x2f8494u: goto label_2f8494;
        case 0x2f8498u: goto label_2f8498;
        case 0x2f849cu: goto label_2f849c;
        case 0x2f84a0u: goto label_2f84a0;
        case 0x2f84a4u: goto label_2f84a4;
        case 0x2f84a8u: goto label_2f84a8;
        case 0x2f84acu: goto label_2f84ac;
        case 0x2f84b0u: goto label_2f84b0;
        case 0x2f84b4u: goto label_2f84b4;
        case 0x2f84b8u: goto label_2f84b8;
        case 0x2f84bcu: goto label_2f84bc;
        case 0x2f84c0u: goto label_2f84c0;
        case 0x2f84c4u: goto label_2f84c4;
        case 0x2f84c8u: goto label_2f84c8;
        case 0x2f84ccu: goto label_2f84cc;
        case 0x2f84d0u: goto label_2f84d0;
        case 0x2f84d4u: goto label_2f84d4;
        case 0x2f84d8u: goto label_2f84d8;
        case 0x2f84dcu: goto label_2f84dc;
        case 0x2f84e0u: goto label_2f84e0;
        case 0x2f84e4u: goto label_2f84e4;
        case 0x2f84e8u: goto label_2f84e8;
        case 0x2f84ecu: goto label_2f84ec;
        case 0x2f84f0u: goto label_2f84f0;
        case 0x2f84f4u: goto label_2f84f4;
        case 0x2f84f8u: goto label_2f84f8;
        case 0x2f84fcu: goto label_2f84fc;
        case 0x2f8500u: goto label_2f8500;
        case 0x2f8504u: goto label_2f8504;
        case 0x2f8508u: goto label_2f8508;
        case 0x2f850cu: goto label_2f850c;
        case 0x2f8510u: goto label_2f8510;
        case 0x2f8514u: goto label_2f8514;
        case 0x2f8518u: goto label_2f8518;
        case 0x2f851cu: goto label_2f851c;
        case 0x2f8520u: goto label_2f8520;
        case 0x2f8524u: goto label_2f8524;
        case 0x2f8528u: goto label_2f8528;
        case 0x2f852cu: goto label_2f852c;
        case 0x2f8530u: goto label_2f8530;
        case 0x2f8534u: goto label_2f8534;
        case 0x2f8538u: goto label_2f8538;
        case 0x2f853cu: goto label_2f853c;
        case 0x2f8540u: goto label_2f8540;
        case 0x2f8544u: goto label_2f8544;
        case 0x2f8548u: goto label_2f8548;
        case 0x2f854cu: goto label_2f854c;
        case 0x2f8550u: goto label_2f8550;
        case 0x2f8554u: goto label_2f8554;
        case 0x2f8558u: goto label_2f8558;
        case 0x2f855cu: goto label_2f855c;
        case 0x2f8560u: goto label_2f8560;
        case 0x2f8564u: goto label_2f8564;
        case 0x2f8568u: goto label_2f8568;
        case 0x2f856cu: goto label_2f856c;
        case 0x2f8570u: goto label_2f8570;
        case 0x2f8574u: goto label_2f8574;
        case 0x2f8578u: goto label_2f8578;
        case 0x2f857cu: goto label_2f857c;
        case 0x2f8580u: goto label_2f8580;
        case 0x2f8584u: goto label_2f8584;
        case 0x2f8588u: goto label_2f8588;
        case 0x2f858cu: goto label_2f858c;
        case 0x2f8590u: goto label_2f8590;
        case 0x2f8594u: goto label_2f8594;
        case 0x2f8598u: goto label_2f8598;
        case 0x2f859cu: goto label_2f859c;
        case 0x2f85a0u: goto label_2f85a0;
        case 0x2f85a4u: goto label_2f85a4;
        case 0x2f85a8u: goto label_2f85a8;
        case 0x2f85acu: goto label_2f85ac;
        case 0x2f85b0u: goto label_2f85b0;
        case 0x2f85b4u: goto label_2f85b4;
        case 0x2f85b8u: goto label_2f85b8;
        case 0x2f85bcu: goto label_2f85bc;
        case 0x2f85c0u: goto label_2f85c0;
        case 0x2f85c4u: goto label_2f85c4;
        case 0x2f85c8u: goto label_2f85c8;
        case 0x2f85ccu: goto label_2f85cc;
        case 0x2f85d0u: goto label_2f85d0;
        case 0x2f85d4u: goto label_2f85d4;
        case 0x2f85d8u: goto label_2f85d8;
        case 0x2f85dcu: goto label_2f85dc;
        case 0x2f85e0u: goto label_2f85e0;
        case 0x2f85e4u: goto label_2f85e4;
        case 0x2f85e8u: goto label_2f85e8;
        case 0x2f85ecu: goto label_2f85ec;
        case 0x2f85f0u: goto label_2f85f0;
        case 0x2f85f4u: goto label_2f85f4;
        case 0x2f85f8u: goto label_2f85f8;
        case 0x2f85fcu: goto label_2f85fc;
        case 0x2f8600u: goto label_2f8600;
        case 0x2f8604u: goto label_2f8604;
        case 0x2f8608u: goto label_2f8608;
        case 0x2f860cu: goto label_2f860c;
        case 0x2f8610u: goto label_2f8610;
        case 0x2f8614u: goto label_2f8614;
        case 0x2f8618u: goto label_2f8618;
        case 0x2f861cu: goto label_2f861c;
        case 0x2f8620u: goto label_2f8620;
        case 0x2f8624u: goto label_2f8624;
        case 0x2f8628u: goto label_2f8628;
        case 0x2f862cu: goto label_2f862c;
        case 0x2f8630u: goto label_2f8630;
        case 0x2f8634u: goto label_2f8634;
        case 0x2f8638u: goto label_2f8638;
        case 0x2f863cu: goto label_2f863c;
        case 0x2f8640u: goto label_2f8640;
        case 0x2f8644u: goto label_2f8644;
        case 0x2f8648u: goto label_2f8648;
        case 0x2f864cu: goto label_2f864c;
        case 0x2f8650u: goto label_2f8650;
        case 0x2f8654u: goto label_2f8654;
        case 0x2f8658u: goto label_2f8658;
        case 0x2f865cu: goto label_2f865c;
        case 0x2f8660u: goto label_2f8660;
        case 0x2f8664u: goto label_2f8664;
        case 0x2f8668u: goto label_2f8668;
        case 0x2f866cu: goto label_2f866c;
        case 0x2f8670u: goto label_2f8670;
        case 0x2f8674u: goto label_2f8674;
        case 0x2f8678u: goto label_2f8678;
        case 0x2f867cu: goto label_2f867c;
        case 0x2f8680u: goto label_2f8680;
        case 0x2f8684u: goto label_2f8684;
        case 0x2f8688u: goto label_2f8688;
        case 0x2f868cu: goto label_2f868c;
        case 0x2f8690u: goto label_2f8690;
        case 0x2f8694u: goto label_2f8694;
        case 0x2f8698u: goto label_2f8698;
        case 0x2f869cu: goto label_2f869c;
        case 0x2f86a0u: goto label_2f86a0;
        case 0x2f86a4u: goto label_2f86a4;
        case 0x2f86a8u: goto label_2f86a8;
        case 0x2f86acu: goto label_2f86ac;
        case 0x2f86b0u: goto label_2f86b0;
        case 0x2f86b4u: goto label_2f86b4;
        case 0x2f86b8u: goto label_2f86b8;
        case 0x2f86bcu: goto label_2f86bc;
        case 0x2f86c0u: goto label_2f86c0;
        case 0x2f86c4u: goto label_2f86c4;
        case 0x2f86c8u: goto label_2f86c8;
        case 0x2f86ccu: goto label_2f86cc;
        case 0x2f86d0u: goto label_2f86d0;
        case 0x2f86d4u: goto label_2f86d4;
        case 0x2f86d8u: goto label_2f86d8;
        case 0x2f86dcu: goto label_2f86dc;
        case 0x2f86e0u: goto label_2f86e0;
        case 0x2f86e4u: goto label_2f86e4;
        case 0x2f86e8u: goto label_2f86e8;
        case 0x2f86ecu: goto label_2f86ec;
        case 0x2f86f0u: goto label_2f86f0;
        case 0x2f86f4u: goto label_2f86f4;
        case 0x2f86f8u: goto label_2f86f8;
        case 0x2f86fcu: goto label_2f86fc;
        case 0x2f8700u: goto label_2f8700;
        case 0x2f8704u: goto label_2f8704;
        case 0x2f8708u: goto label_2f8708;
        case 0x2f870cu: goto label_2f870c;
        case 0x2f8710u: goto label_2f8710;
        case 0x2f8714u: goto label_2f8714;
        case 0x2f8718u: goto label_2f8718;
        case 0x2f871cu: goto label_2f871c;
        case 0x2f8720u: goto label_2f8720;
        case 0x2f8724u: goto label_2f8724;
        case 0x2f8728u: goto label_2f8728;
        case 0x2f872cu: goto label_2f872c;
        case 0x2f8730u: goto label_2f8730;
        case 0x2f8734u: goto label_2f8734;
        case 0x2f8738u: goto label_2f8738;
        case 0x2f873cu: goto label_2f873c;
        case 0x2f8740u: goto label_2f8740;
        case 0x2f8744u: goto label_2f8744;
        case 0x2f8748u: goto label_2f8748;
        case 0x2f874cu: goto label_2f874c;
        case 0x2f8750u: goto label_2f8750;
        case 0x2f8754u: goto label_2f8754;
        case 0x2f8758u: goto label_2f8758;
        case 0x2f875cu: goto label_2f875c;
        case 0x2f8760u: goto label_2f8760;
        case 0x2f8764u: goto label_2f8764;
        case 0x2f8768u: goto label_2f8768;
        case 0x2f876cu: goto label_2f876c;
        case 0x2f8770u: goto label_2f8770;
        case 0x2f8774u: goto label_2f8774;
        case 0x2f8778u: goto label_2f8778;
        case 0x2f877cu: goto label_2f877c;
        case 0x2f8780u: goto label_2f8780;
        case 0x2f8784u: goto label_2f8784;
        case 0x2f8788u: goto label_2f8788;
        case 0x2f878cu: goto label_2f878c;
        case 0x2f8790u: goto label_2f8790;
        case 0x2f8794u: goto label_2f8794;
        case 0x2f8798u: goto label_2f8798;
        case 0x2f879cu: goto label_2f879c;
        case 0x2f87a0u: goto label_2f87a0;
        case 0x2f87a4u: goto label_2f87a4;
        case 0x2f87a8u: goto label_2f87a8;
        case 0x2f87acu: goto label_2f87ac;
        case 0x2f87b0u: goto label_2f87b0;
        case 0x2f87b4u: goto label_2f87b4;
        case 0x2f87b8u: goto label_2f87b8;
        case 0x2f87bcu: goto label_2f87bc;
        case 0x2f87c0u: goto label_2f87c0;
        case 0x2f87c4u: goto label_2f87c4;
        case 0x2f87c8u: goto label_2f87c8;
        case 0x2f87ccu: goto label_2f87cc;
        case 0x2f87d0u: goto label_2f87d0;
        case 0x2f87d4u: goto label_2f87d4;
        case 0x2f87d8u: goto label_2f87d8;
        case 0x2f87dcu: goto label_2f87dc;
        case 0x2f87e0u: goto label_2f87e0;
        case 0x2f87e4u: goto label_2f87e4;
        case 0x2f87e8u: goto label_2f87e8;
        case 0x2f87ecu: goto label_2f87ec;
        case 0x2f87f0u: goto label_2f87f0;
        case 0x2f87f4u: goto label_2f87f4;
        case 0x2f87f8u: goto label_2f87f8;
        case 0x2f87fcu: goto label_2f87fc;
        case 0x2f8800u: goto label_2f8800;
        case 0x2f8804u: goto label_2f8804;
        case 0x2f8808u: goto label_2f8808;
        case 0x2f880cu: goto label_2f880c;
        case 0x2f8810u: goto label_2f8810;
        case 0x2f8814u: goto label_2f8814;
        case 0x2f8818u: goto label_2f8818;
        case 0x2f881cu: goto label_2f881c;
        case 0x2f8820u: goto label_2f8820;
        case 0x2f8824u: goto label_2f8824;
        case 0x2f8828u: goto label_2f8828;
        case 0x2f882cu: goto label_2f882c;
        case 0x2f8830u: goto label_2f8830;
        case 0x2f8834u: goto label_2f8834;
        case 0x2f8838u: goto label_2f8838;
        case 0x2f883cu: goto label_2f883c;
        case 0x2f8840u: goto label_2f8840;
        case 0x2f8844u: goto label_2f8844;
        case 0x2f8848u: goto label_2f8848;
        case 0x2f884cu: goto label_2f884c;
        case 0x2f8850u: goto label_2f8850;
        case 0x2f8854u: goto label_2f8854;
        case 0x2f8858u: goto label_2f8858;
        case 0x2f885cu: goto label_2f885c;
        case 0x2f8860u: goto label_2f8860;
        case 0x2f8864u: goto label_2f8864;
        case 0x2f8868u: goto label_2f8868;
        case 0x2f886cu: goto label_2f886c;
        case 0x2f8870u: goto label_2f8870;
        case 0x2f8874u: goto label_2f8874;
        case 0x2f8878u: goto label_2f8878;
        case 0x2f887cu: goto label_2f887c;
        case 0x2f8880u: goto label_2f8880;
        case 0x2f8884u: goto label_2f8884;
        case 0x2f8888u: goto label_2f8888;
        case 0x2f888cu: goto label_2f888c;
        case 0x2f8890u: goto label_2f8890;
        case 0x2f8894u: goto label_2f8894;
        case 0x2f8898u: goto label_2f8898;
        case 0x2f889cu: goto label_2f889c;
        case 0x2f88a0u: goto label_2f88a0;
        case 0x2f88a4u: goto label_2f88a4;
        case 0x2f88a8u: goto label_2f88a8;
        case 0x2f88acu: goto label_2f88ac;
        case 0x2f88b0u: goto label_2f88b0;
        case 0x2f88b4u: goto label_2f88b4;
        case 0x2f88b8u: goto label_2f88b8;
        case 0x2f88bcu: goto label_2f88bc;
        case 0x2f88c0u: goto label_2f88c0;
        case 0x2f88c4u: goto label_2f88c4;
        case 0x2f88c8u: goto label_2f88c8;
        case 0x2f88ccu: goto label_2f88cc;
        case 0x2f88d0u: goto label_2f88d0;
        case 0x2f88d4u: goto label_2f88d4;
        case 0x2f88d8u: goto label_2f88d8;
        case 0x2f88dcu: goto label_2f88dc;
        case 0x2f88e0u: goto label_2f88e0;
        case 0x2f88e4u: goto label_2f88e4;
        case 0x2f88e8u: goto label_2f88e8;
        case 0x2f88ecu: goto label_2f88ec;
        case 0x2f88f0u: goto label_2f88f0;
        case 0x2f88f4u: goto label_2f88f4;
        case 0x2f88f8u: goto label_2f88f8;
        case 0x2f88fcu: goto label_2f88fc;
        case 0x2f8900u: goto label_2f8900;
        case 0x2f8904u: goto label_2f8904;
        case 0x2f8908u: goto label_2f8908;
        case 0x2f890cu: goto label_2f890c;
        case 0x2f8910u: goto label_2f8910;
        case 0x2f8914u: goto label_2f8914;
        case 0x2f8918u: goto label_2f8918;
        case 0x2f891cu: goto label_2f891c;
        case 0x2f8920u: goto label_2f8920;
        case 0x2f8924u: goto label_2f8924;
        case 0x2f8928u: goto label_2f8928;
        case 0x2f892cu: goto label_2f892c;
        case 0x2f8930u: goto label_2f8930;
        case 0x2f8934u: goto label_2f8934;
        case 0x2f8938u: goto label_2f8938;
        case 0x2f893cu: goto label_2f893c;
        case 0x2f8940u: goto label_2f8940;
        case 0x2f8944u: goto label_2f8944;
        case 0x2f8948u: goto label_2f8948;
        case 0x2f894cu: goto label_2f894c;
        case 0x2f8950u: goto label_2f8950;
        case 0x2f8954u: goto label_2f8954;
        case 0x2f8958u: goto label_2f8958;
        case 0x2f895cu: goto label_2f895c;
        case 0x2f8960u: goto label_2f8960;
        case 0x2f8964u: goto label_2f8964;
        case 0x2f8968u: goto label_2f8968;
        case 0x2f896cu: goto label_2f896c;
        case 0x2f8970u: goto label_2f8970;
        case 0x2f8974u: goto label_2f8974;
        case 0x2f8978u: goto label_2f8978;
        case 0x2f897cu: goto label_2f897c;
        case 0x2f8980u: goto label_2f8980;
        case 0x2f8984u: goto label_2f8984;
        case 0x2f8988u: goto label_2f8988;
        case 0x2f898cu: goto label_2f898c;
        case 0x2f8990u: goto label_2f8990;
        case 0x2f8994u: goto label_2f8994;
        case 0x2f8998u: goto label_2f8998;
        case 0x2f899cu: goto label_2f899c;
        case 0x2f89a0u: goto label_2f89a0;
        case 0x2f89a4u: goto label_2f89a4;
        case 0x2f89a8u: goto label_2f89a8;
        case 0x2f89acu: goto label_2f89ac;
        case 0x2f89b0u: goto label_2f89b0;
        case 0x2f89b4u: goto label_2f89b4;
        case 0x2f89b8u: goto label_2f89b8;
        case 0x2f89bcu: goto label_2f89bc;
        case 0x2f89c0u: goto label_2f89c0;
        case 0x2f89c4u: goto label_2f89c4;
        case 0x2f89c8u: goto label_2f89c8;
        case 0x2f89ccu: goto label_2f89cc;
        case 0x2f89d0u: goto label_2f89d0;
        case 0x2f89d4u: goto label_2f89d4;
        case 0x2f89d8u: goto label_2f89d8;
        case 0x2f89dcu: goto label_2f89dc;
        case 0x2f89e0u: goto label_2f89e0;
        case 0x2f89e4u: goto label_2f89e4;
        case 0x2f89e8u: goto label_2f89e8;
        case 0x2f89ecu: goto label_2f89ec;
        case 0x2f89f0u: goto label_2f89f0;
        case 0x2f89f4u: goto label_2f89f4;
        case 0x2f89f8u: goto label_2f89f8;
        case 0x2f89fcu: goto label_2f89fc;
        case 0x2f8a00u: goto label_2f8a00;
        case 0x2f8a04u: goto label_2f8a04;
        case 0x2f8a08u: goto label_2f8a08;
        case 0x2f8a0cu: goto label_2f8a0c;
        case 0x2f8a10u: goto label_2f8a10;
        case 0x2f8a14u: goto label_2f8a14;
        case 0x2f8a18u: goto label_2f8a18;
        case 0x2f8a1cu: goto label_2f8a1c;
        case 0x2f8a20u: goto label_2f8a20;
        case 0x2f8a24u: goto label_2f8a24;
        case 0x2f8a28u: goto label_2f8a28;
        case 0x2f8a2cu: goto label_2f8a2c;
        case 0x2f8a30u: goto label_2f8a30;
        case 0x2f8a34u: goto label_2f8a34;
        case 0x2f8a38u: goto label_2f8a38;
        case 0x2f8a3cu: goto label_2f8a3c;
        case 0x2f8a40u: goto label_2f8a40;
        case 0x2f8a44u: goto label_2f8a44;
        case 0x2f8a48u: goto label_2f8a48;
        case 0x2f8a4cu: goto label_2f8a4c;
        case 0x2f8a50u: goto label_2f8a50;
        case 0x2f8a54u: goto label_2f8a54;
        case 0x2f8a58u: goto label_2f8a58;
        case 0x2f8a5cu: goto label_2f8a5c;
        case 0x2f8a60u: goto label_2f8a60;
        case 0x2f8a64u: goto label_2f8a64;
        case 0x2f8a68u: goto label_2f8a68;
        case 0x2f8a6cu: goto label_2f8a6c;
        case 0x2f8a70u: goto label_2f8a70;
        case 0x2f8a74u: goto label_2f8a74;
        case 0x2f8a78u: goto label_2f8a78;
        case 0x2f8a7cu: goto label_2f8a7c;
        case 0x2f8a80u: goto label_2f8a80;
        case 0x2f8a84u: goto label_2f8a84;
        case 0x2f8a88u: goto label_2f8a88;
        case 0x2f8a8cu: goto label_2f8a8c;
        case 0x2f8a90u: goto label_2f8a90;
        case 0x2f8a94u: goto label_2f8a94;
        case 0x2f8a98u: goto label_2f8a98;
        case 0x2f8a9cu: goto label_2f8a9c;
        case 0x2f8aa0u: goto label_2f8aa0;
        case 0x2f8aa4u: goto label_2f8aa4;
        case 0x2f8aa8u: goto label_2f8aa8;
        case 0x2f8aacu: goto label_2f8aac;
        case 0x2f8ab0u: goto label_2f8ab0;
        case 0x2f8ab4u: goto label_2f8ab4;
        case 0x2f8ab8u: goto label_2f8ab8;
        case 0x2f8abcu: goto label_2f8abc;
        case 0x2f8ac0u: goto label_2f8ac0;
        case 0x2f8ac4u: goto label_2f8ac4;
        case 0x2f8ac8u: goto label_2f8ac8;
        case 0x2f8accu: goto label_2f8acc;
        case 0x2f8ad0u: goto label_2f8ad0;
        case 0x2f8ad4u: goto label_2f8ad4;
        case 0x2f8ad8u: goto label_2f8ad8;
        case 0x2f8adcu: goto label_2f8adc;
        case 0x2f8ae0u: goto label_2f8ae0;
        case 0x2f8ae4u: goto label_2f8ae4;
        case 0x2f8ae8u: goto label_2f8ae8;
        case 0x2f8aecu: goto label_2f8aec;
        case 0x2f8af0u: goto label_2f8af0;
        case 0x2f8af4u: goto label_2f8af4;
        case 0x2f8af8u: goto label_2f8af8;
        case 0x2f8afcu: goto label_2f8afc;
        case 0x2f8b00u: goto label_2f8b00;
        case 0x2f8b04u: goto label_2f8b04;
        case 0x2f8b08u: goto label_2f8b08;
        case 0x2f8b0cu: goto label_2f8b0c;
        case 0x2f8b10u: goto label_2f8b10;
        case 0x2f8b14u: goto label_2f8b14;
        case 0x2f8b18u: goto label_2f8b18;
        case 0x2f8b1cu: goto label_2f8b1c;
        case 0x2f8b20u: goto label_2f8b20;
        case 0x2f8b24u: goto label_2f8b24;
        case 0x2f8b28u: goto label_2f8b28;
        case 0x2f8b2cu: goto label_2f8b2c;
        case 0x2f8b30u: goto label_2f8b30;
        case 0x2f8b34u: goto label_2f8b34;
        case 0x2f8b38u: goto label_2f8b38;
        case 0x2f8b3cu: goto label_2f8b3c;
        case 0x2f8b40u: goto label_2f8b40;
        case 0x2f8b44u: goto label_2f8b44;
        case 0x2f8b48u: goto label_2f8b48;
        case 0x2f8b4cu: goto label_2f8b4c;
        case 0x2f8b50u: goto label_2f8b50;
        case 0x2f8b54u: goto label_2f8b54;
        case 0x2f8b58u: goto label_2f8b58;
        case 0x2f8b5cu: goto label_2f8b5c;
        case 0x2f8b60u: goto label_2f8b60;
        case 0x2f8b64u: goto label_2f8b64;
        case 0x2f8b68u: goto label_2f8b68;
        case 0x2f8b6cu: goto label_2f8b6c;
        case 0x2f8b70u: goto label_2f8b70;
        case 0x2f8b74u: goto label_2f8b74;
        case 0x2f8b78u: goto label_2f8b78;
        case 0x2f8b7cu: goto label_2f8b7c;
        case 0x2f8b80u: goto label_2f8b80;
        case 0x2f8b84u: goto label_2f8b84;
        case 0x2f8b88u: goto label_2f8b88;
        case 0x2f8b8cu: goto label_2f8b8c;
        case 0x2f8b90u: goto label_2f8b90;
        case 0x2f8b94u: goto label_2f8b94;
        case 0x2f8b98u: goto label_2f8b98;
        case 0x2f8b9cu: goto label_2f8b9c;
        case 0x2f8ba0u: goto label_2f8ba0;
        case 0x2f8ba4u: goto label_2f8ba4;
        case 0x2f8ba8u: goto label_2f8ba8;
        case 0x2f8bacu: goto label_2f8bac;
        case 0x2f8bb0u: goto label_2f8bb0;
        case 0x2f8bb4u: goto label_2f8bb4;
        case 0x2f8bb8u: goto label_2f8bb8;
        case 0x2f8bbcu: goto label_2f8bbc;
        case 0x2f8bc0u: goto label_2f8bc0;
        case 0x2f8bc4u: goto label_2f8bc4;
        case 0x2f8bc8u: goto label_2f8bc8;
        case 0x2f8bccu: goto label_2f8bcc;
        case 0x2f8bd0u: goto label_2f8bd0;
        case 0x2f8bd4u: goto label_2f8bd4;
        case 0x2f8bd8u: goto label_2f8bd8;
        case 0x2f8bdcu: goto label_2f8bdc;
        case 0x2f8be0u: goto label_2f8be0;
        case 0x2f8be4u: goto label_2f8be4;
        case 0x2f8be8u: goto label_2f8be8;
        case 0x2f8becu: goto label_2f8bec;
        case 0x2f8bf0u: goto label_2f8bf0;
        case 0x2f8bf4u: goto label_2f8bf4;
        case 0x2f8bf8u: goto label_2f8bf8;
        case 0x2f8bfcu: goto label_2f8bfc;
        case 0x2f8c00u: goto label_2f8c00;
        case 0x2f8c04u: goto label_2f8c04;
        case 0x2f8c08u: goto label_2f8c08;
        case 0x2f8c0cu: goto label_2f8c0c;
        case 0x2f8c10u: goto label_2f8c10;
        case 0x2f8c14u: goto label_2f8c14;
        case 0x2f8c18u: goto label_2f8c18;
        case 0x2f8c1cu: goto label_2f8c1c;
        case 0x2f8c20u: goto label_2f8c20;
        case 0x2f8c24u: goto label_2f8c24;
        case 0x2f8c28u: goto label_2f8c28;
        case 0x2f8c2cu: goto label_2f8c2c;
        case 0x2f8c30u: goto label_2f8c30;
        case 0x2f8c34u: goto label_2f8c34;
        case 0x2f8c38u: goto label_2f8c38;
        case 0x2f8c3cu: goto label_2f8c3c;
        case 0x2f8c40u: goto label_2f8c40;
        case 0x2f8c44u: goto label_2f8c44;
        case 0x2f8c48u: goto label_2f8c48;
        case 0x2f8c4cu: goto label_2f8c4c;
        case 0x2f8c50u: goto label_2f8c50;
        case 0x2f8c54u: goto label_2f8c54;
        case 0x2f8c58u: goto label_2f8c58;
        case 0x2f8c5cu: goto label_2f8c5c;
        case 0x2f8c60u: goto label_2f8c60;
        case 0x2f8c64u: goto label_2f8c64;
        case 0x2f8c68u: goto label_2f8c68;
        case 0x2f8c6cu: goto label_2f8c6c;
        case 0x2f8c70u: goto label_2f8c70;
        case 0x2f8c74u: goto label_2f8c74;
        case 0x2f8c78u: goto label_2f8c78;
        case 0x2f8c7cu: goto label_2f8c7c;
        case 0x2f8c80u: goto label_2f8c80;
        case 0x2f8c84u: goto label_2f8c84;
        case 0x2f8c88u: goto label_2f8c88;
        case 0x2f8c8cu: goto label_2f8c8c;
        default: break;
    }

    ctx->pc = 0x2f8468u;

label_2f8468:
    // 0x2f8468: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2f8468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2f846c:
    // 0x2f846c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2f846cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2f8470:
    // 0x2f8470: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2f8470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2f8474:
    // 0x2f8474: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f8474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8478:
    // 0x2f8478: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2f8478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2f847c:
    // 0x2f847c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f847cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f8480:
    // 0x2f8480: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2f8480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2f8484:
    // 0x2f8484: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2f8484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2f8488:
    // 0x2f8488: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f8488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2f848c:
    // 0x2f848c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2f848cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_2f8490:
    // 0x2f8490: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2f8490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_2f8494:
    // 0x2f8494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f8494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2f8498:
    // 0x2f8498: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x2f8498u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2f849c:
    // 0x2f849c: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2f849cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2f84a0:
    // 0x2f84a0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2f84a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2f84a4:
    // 0x2f84a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f84a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f84a8:
    // 0x2f84a8: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2f84a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2f84ac:
    // 0x2f84ac: 0x1c4001e9  bgtz        $v0, . + 4 + (0x1E9 << 2)
label_2f84b0:
    if (ctx->pc == 0x2F84B0u) {
        ctx->pc = 0x2F84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84ACu;
        // 0x2f84b0: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F84B4u;
        goto label_2f84b4;
    }
    ctx->pc = 0x2F84ACu;
    {
        const bool branch_taken_0x2f84ac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2F84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84ACu;
        // 0x2f84b0: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84ac) {
            ctx->pc = 0x2F8C54u;
            goto label_2f8c54;
        }
    }
    ctx->pc = 0x2F84B4u;
label_2f84b4:
    // 0x2f84b4: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2f84b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2f84b8:
    // 0x2f84b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f84b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f84bc:
    // 0x2f84bc: 0xc089998  jal         func_226660
label_2f84c0:
    if (ctx->pc == 0x2F84C0u) {
        ctx->pc = 0x2F84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84BCu;
        // 0x2f84c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F84C4u;
        goto label_2f84c4;
    }
    ctx->pc = 0x2F84BCu;
    SET_GPR_U32(ctx, 31, 0x2F84C4u);
    ctx->pc = 0x2F84C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F84BCu;
    // 0x2f84c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2F84BCu, 0x2F84C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F84C4u;
label_2f84c4:
    // 0x2f84c4: 0x105001e4  beq         $v0, $s0, . + 4 + (0x1E4 << 2)
label_2f84c8:
    if (ctx->pc == 0x2F84C8u) {
        ctx->pc = 0x2F84C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84C4u;
        // 0x2f84c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F84CCu;
        goto label_2f84cc;
    }
    ctx->pc = 0x2F84C4u;
    {
        const bool branch_taken_0x2f84c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F84C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84C4u;
        // 0x2f84c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84c4) {
            ctx->pc = 0x2F8C58u;
            goto label_2f8c58;
        }
    }
    ctx->pc = 0x2F84CCu;
label_2f84cc:
    // 0x2f84cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f84ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f84d0:
    // 0x2f84d0: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2f84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2f84d4:
    // 0x2f84d4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2f84d8:
    if (ctx->pc == 0x2F84D8u) {
        ctx->pc = 0x2F84D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84D4u;
        // 0x2f84d8: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F84DCu;
        goto label_2f84dc;
    }
    ctx->pc = 0x2F84D4u;
    {
        const bool branch_taken_0x2f84d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f84d4) {
            ctx->pc = 0x2F84D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F84D4u;
            // 0x2f84d8: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F84DCu;
            goto label_2f84dc;
        }
    }
    ctx->pc = 0x2F84DCu;
label_2f84dc:
    // 0x2f84dc: 0x9232002a  lbu         $s2, 0x2A($s1)
    ctx->pc = 0x2f84dcu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_2f84e0:
    // 0x2f84e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f84e4:
    // 0x2f84e4: 0x1642002c  bne         $s2, $v0, . + 4 + (0x2C << 2)
label_2f84e8:
    if (ctx->pc == 0x2F84E8u) {
        ctx->pc = 0x2F84ECu;
        goto label_2f84ec;
    }
    ctx->pc = 0x2F84E4u;
    {
        const bool branch_taken_0x2f84e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f84e4) {
            ctx->pc = 0x2F8598u;
            goto label_2f8598;
        }
    }
    ctx->pc = 0x2F84ECu;
label_2f84ec:
    // 0x2f84ec: 0x9222002e  lbu         $v0, 0x2E($s1)
    ctx->pc = 0x2f84ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
label_2f84f0:
    // 0x2f84f0: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_2f84f4:
    if (ctx->pc == 0x2F84F4u) {
        ctx->pc = 0x2F84F8u;
        goto label_2f84f8;
    }
    ctx->pc = 0x2F84F0u;
    {
        const bool branch_taken_0x2f84f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f84f0) {
            ctx->pc = 0x2F8580u;
            goto label_2f8580;
        }
    }
    ctx->pc = 0x2F84F8u;
label_2f84f8:
    // 0x2f84f8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2f84f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f84fc:
    // 0x2f84fc: 0xc0e409a  jal         func_390268
label_2f8500:
    if (ctx->pc == 0x2F8500u) {
        ctx->pc = 0x2F8500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84FCu;
        // 0x2f8500: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8504u;
        goto label_2f8504;
    }
    ctx->pc = 0x2F84FCu;
    SET_GPR_U32(ctx, 31, 0x2F8504u);
    ctx->pc = 0x2F8500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F84FCu;
    // 0x2f8500: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F84FCu, 0x2F8504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8504u;
label_2f8504:
    // 0x2f8504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8508:
    // 0x2f8508: 0xc0a34d6  jal         func_28D358
label_2f850c:
    if (ctx->pc == 0x2F850Cu) {
        ctx->pc = 0x2F850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8508u;
        // 0x2f850c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8510u;
        goto label_2f8510;
    }
    ctx->pc = 0x2F8508u;
    SET_GPR_U32(ctx, 31, 0x2F8510u);
    ctx->pc = 0x2F850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8508u;
    // 0x2f850c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2F8508u, 0x2F8510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8510u;
label_2f8510:
    // 0x2f8510: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f8510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8514:
    // 0x2f8514: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_2f8518:
    if (ctx->pc == 0x2F8518u) {
        ctx->pc = 0x2F851Cu;
        goto label_2f851c;
    }
    ctx->pc = 0x2F8514u;
    {
        const bool branch_taken_0x2f8514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8514) {
            ctx->pc = 0x2F8554u;
            goto label_2f8554;
        }
    }
    ctx->pc = 0x2F851Cu;
label_2f851c:
    // 0x2f851c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f851cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8520:
    // 0x2f8520: 0xc0a367c  jal         func_28D9F0
label_2f8524:
    if (ctx->pc == 0x2F8524u) {
        ctx->pc = 0x2F8524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8520u;
        // 0x2f8524: 0xc4940140  lwc1        $f20, 0x140($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8528u;
        goto label_2f8528;
    }
    ctx->pc = 0x2F8520u;
    SET_GPR_U32(ctx, 31, 0x2F8528u);
    ctx->pc = 0x2F8524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8520u;
    // 0x2f8524: 0xc4940140  lwc1        $f20, 0x140($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F8520u, 0x2F8528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8528u;
label_2f8528:
    // 0x2f8528: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2f852c:
    if (ctx->pc == 0x2F852Cu) {
        ctx->pc = 0x2F852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8528u;
        // 0x2f852c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8530u;
        goto label_2f8530;
    }
    ctx->pc = 0x2F8528u;
    {
        const bool branch_taken_0x2f8528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8528u;
        // 0x2f852c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8528) {
            ctx->pc = 0x2F8554u;
            goto label_2f8554;
        }
    }
    ctx->pc = 0x2F8530u;
label_2f8530:
    // 0x2f8530: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f8530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f8534:
    // 0x2f8534: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f8534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f8538:
    // 0x2f8538: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f8538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f853c:
    // 0x2f853c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f853cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8540:
    // 0x2f8540: 0x460d6340  add.s       $f13, $f12, $f13
    ctx->pc = 0x2f8540u;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
label_2f8544:
    // 0x2f8544: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f8544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8548:
    // 0x2f8548: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f8548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f854c:
    // 0x2f854c: 0xc0bf3d4  jal         func_2FCF50
label_2f8550:
    if (ctx->pc == 0x2F8550u) {
        ctx->pc = 0x2F8550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F854Cu;
        // 0x2f8550: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8554u;
        goto label_2f8554;
    }
    ctx->pc = 0x2F854Cu;
    SET_GPR_U32(ctx, 31, 0x2F8554u);
    ctx->pc = 0x2F8550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F854Cu;
    // 0x2f8550: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2F854Cu, 0x2F8554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8554u;
label_2f8554:
    // 0x2f8554: 0xc089bdc  jal         func_226F70
label_2f8558:
    if (ctx->pc == 0x2F8558u) {
        ctx->pc = 0x2F8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8554u;
        // 0x2f8558: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F855Cu;
        goto label_2f855c;
    }
    ctx->pc = 0x2F8554u;
    SET_GPR_U32(ctx, 31, 0x2F855Cu);
    ctx->pc = 0x2F8558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8554u;
    // 0x2f8558: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2F8554u, 0x2F855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F855Cu;
label_2f855c:
    // 0x2f855c: 0xde6300e0  ld          $v1, 0xE0($s3)
    ctx->pc = 0x2f855cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2f8560:
    // 0x2f8560: 0x2404f7ff  addiu       $a0, $zero, -0x801
    ctx->pc = 0x2f8560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2f8564:
    // 0x2f8564: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f8564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8568:
    // 0x2f8568: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2f8568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2f856c:
    // 0x2f856c: 0xfe6300e0  sd          $v1, 0xE0($s3)
    ctx->pc = 0x2f856cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 3));
label_2f8570:
    // 0x2f8570: 0x9224002e  lbu         $a0, 0x2E($s1)
    ctx->pc = 0x2f8570u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
label_2f8574:
    // 0x2f8574: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f8574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2f8578:
    // 0x2f8578: 0x100001b7  b           . + 4 + (0x1B7 << 2)
label_2f857c:
    if (ctx->pc == 0x2F857Cu) {
        ctx->pc = 0x2F857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8578u;
        // 0x2f857c: 0xa224002e  sb          $a0, 0x2E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8580u;
        goto label_2f8580;
    }
    ctx->pc = 0x2F8578u;
    {
        const bool branch_taken_0x2f8578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8578u;
        // 0x2f857c: 0xa224002e  sb          $a0, 0x2E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8578) {
            ctx->pc = 0x2F8C58u;
            goto label_2f8c58;
        }
    }
    ctx->pc = 0x2F8580u;
label_2f8580:
    // 0x2f8580: 0xc0bdfb8  jal         func_2F7EE0
label_2f8584:
    if (ctx->pc == 0x2F8584u) {
        ctx->pc = 0x2F8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8580u;
        // 0x2f8584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8588u;
        goto label_2f8588;
    }
    ctx->pc = 0x2F8580u;
    SET_GPR_U32(ctx, 31, 0x2F8588u);
    ctx->pc = 0x2F8584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8580u;
    // 0x2f8584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7EE0u, 0x2F8580u, 0x2F8588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8588u;
label_2f8588:
    // 0x2f8588: 0xa220002a  sb          $zero, 0x2A($s1)
    ctx->pc = 0x2f8588u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
label_2f858c:
    // 0x2f858c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f858cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8590:
    // 0x2f8590: 0x100001b1  b           . + 4 + (0x1B1 << 2)
label_2f8594:
    if (ctx->pc == 0x2F8594u) {
        ctx->pc = 0x2F8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8590u;
        // 0x2f8594: 0xa220002e  sb          $zero, 0x2E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8598u;
        goto label_2f8598;
    }
    ctx->pc = 0x2F8590u;
    {
        const bool branch_taken_0x2f8590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8590u;
        // 0x2f8594: 0xa220002e  sb          $zero, 0x2E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8590) {
            ctx->pc = 0x2F8C58u;
            goto label_2f8c58;
        }
    }
    ctx->pc = 0x2F8598u;
label_2f8598:
    // 0x2f8598: 0x1640007a  bnez        $s2, . + 4 + (0x7A << 2)
label_2f859c:
    if (ctx->pc == 0x2F859Cu) {
        ctx->pc = 0x2F859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8598u;
        // 0x2f859c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F85A0u;
        goto label_2f85a0;
    }
    ctx->pc = 0x2F8598u;
    {
        const bool branch_taken_0x2f8598 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8598u;
        // 0x2f859c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8598) {
            ctx->pc = 0x2F8784u;
            goto label_2f8784;
        }
    }
    ctx->pc = 0x2F85A0u;
label_2f85a0:
    // 0x2f85a0: 0xde6300e0  ld          $v1, 0xE0($s3)
    ctx->pc = 0x2f85a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2f85a4:
    // 0x2f85a4: 0x8c85b734  lw          $a1, -0x48CC($a0)
    ctx->pc = 0x2f85a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2f85a8:
    // 0x2f85a8: 0x2402f7ff  addiu       $v0, $zero, -0x801
    ctx->pc = 0x2f85a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2f85ac:
    // 0x2f85ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2f85acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f85b0:
    // 0x2f85b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f85b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f85b4:
    // 0x2f85b4: 0x8cb20048  lw          $s2, 0x48($a1)
    ctx->pc = 0x2f85b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2f85b8:
    // 0x2f85b8: 0xc08a0d0  jal         func_228340
label_2f85bc:
    if (ctx->pc == 0x2F85BCu) {
        ctx->pc = 0x2F85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85B8u;
        // 0x2f85bc: 0xfe6300e0  sd          $v1, 0xE0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F85C0u;
        goto label_2f85c0;
    }
    ctx->pc = 0x2F85B8u;
    SET_GPR_U32(ctx, 31, 0x2F85C0u);
    ctx->pc = 0x2F85BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F85B8u;
    // 0x2f85bc: 0xfe6300e0  sd          $v1, 0xE0($s3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2F85B8u, 0x2F85C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F85C0u;
label_2f85c0:
    // 0x2f85c0: 0x54500005  bnel        $v0, $s0, . + 4 + (0x5 << 2)
label_2f85c4:
    if (ctx->pc == 0x2F85C4u) {
        ctx->pc = 0x2F85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85C0u;
        // 0x2f85c4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F85C8u;
        goto label_2f85c8;
    }
    ctx->pc = 0x2F85C0u;
    {
        const bool branch_taken_0x2f85c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f85c0) {
            ctx->pc = 0x2F85C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F85C0u;
            // 0x2f85c4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F85D8u;
            goto label_2f85d8;
        }
    }
    ctx->pc = 0x2F85C8u;
label_2f85c8:
    // 0x2f85c8: 0xc08bfbc  jal         func_22FEF0
label_2f85cc:
    if (ctx->pc == 0x2F85CCu) {
        ctx->pc = 0x2F85CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85C8u;
        // 0x2f85cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F85D0u;
        goto label_2f85d0;
    }
    ctx->pc = 0x2F85C8u;
    SET_GPR_U32(ctx, 31, 0x2F85D0u);
    ctx->pc = 0x2F85CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F85C8u;
    // 0x2f85cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2F85C8u, 0x2F85D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F85D0u;
label_2f85d0:
    // 0x2f85d0: 0x100001a1  b           . + 4 + (0x1A1 << 2)
label_2f85d4:
    if (ctx->pc == 0x2F85D4u) {
        ctx->pc = 0x2F85D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85D0u;
        // 0x2f85d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F85D8u;
        goto label_2f85d8;
    }
    ctx->pc = 0x2F85D0u;
    {
        const bool branch_taken_0x2f85d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F85D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85D0u;
        // 0x2f85d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f85d0) {
            ctx->pc = 0x2F8C58u;
            goto label_2f8c58;
        }
    }
    ctx->pc = 0x2F85D8u;
label_2f85d8:
    // 0x2f85d8: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x2f85d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_2f85dc:
    // 0x2f85dc: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_2f85e0:
    if (ctx->pc == 0x2F85E0u) {
        ctx->pc = 0x2F85E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85DCu;
        // 0x2f85e0: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F85E4u;
        goto label_2f85e4;
    }
    ctx->pc = 0x2F85DCu;
    {
        const bool branch_taken_0x2f85dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f85dc) {
            ctx->pc = 0x2F85E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F85DCu;
            // 0x2f85e0: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F85F4u;
            goto label_2f85f4;
        }
    }
    ctx->pc = 0x2F85E4u;
label_2f85e4:
    // 0x2f85e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f85e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f85e8:
    // 0x2f85e8: 0xc0be00c  jal         func_2F8030
label_2f85ec:
    if (ctx->pc == 0x2F85ECu) {
        ctx->pc = 0x2F85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85E8u;
        // 0x2f85ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F85F0u;
        goto label_2f85f0;
    }
    ctx->pc = 0x2F85E8u;
    SET_GPR_U32(ctx, 31, 0x2F85F0u);
    ctx->pc = 0x2F85ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F85E8u;
    // 0x2f85ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8030u, 0x2F85E8u, 0x2F85F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F85F0u;
label_2f85f0:
    // 0x2f85f0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2f85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2f85f4:
    // 0x2f85f4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2f85f8:
    if (ctx->pc == 0x2F85F8u) {
        ctx->pc = 0x2F85F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85F4u;
        // 0x2f85f8: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F85FCu;
        goto label_2f85fc;
    }
    ctx->pc = 0x2F85F4u;
    {
        const bool branch_taken_0x2f85f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F85F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85F4u;
        // 0x2f85f8: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f85f4) {
            ctx->pc = 0x2F8634u;
            goto label_2f8634;
        }
    }
    ctx->pc = 0x2F85FCu;
label_2f85fc:
    // 0x2f85fc: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x2f85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
label_2f8600:
    // 0x2f8600: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2f8600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f8604:
    // 0x2f8604: 0xc043d5e  jal         func_10F578
label_2f8608:
    if (ctx->pc == 0x2F8608u) {
        ctx->pc = 0x2F8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8604u;
        // 0x2f8608: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F860Cu;
        goto label_2f860c;
    }
    ctx->pc = 0x2F8604u;
    SET_GPR_U32(ctx, 31, 0x2F860Cu);
    ctx->pc = 0x2F8608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8604u;
    // 0x2f8608: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2F8604u, 0x2F860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F860Cu;
label_2f860c:
    // 0x2f860c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_2f8610:
    if (ctx->pc == 0x2F8610u) {
        ctx->pc = 0x2F8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F860Cu;
        // 0x2f8610: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8614u;
        goto label_2f8614;
    }
    ctx->pc = 0x2F860Cu;
    {
        const bool branch_taken_0x2f860c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F860Cu;
        // 0x2f8610: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f860c) {
            ctx->pc = 0x2F869Cu;
            goto label_2f869c;
        }
    }
    ctx->pc = 0x2F8614u;
label_2f8614:
    // 0x2f8614: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2f8614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2f8618:
    // 0x2f8618: 0x24050fa0  addiu       $a1, $zero, 0xFA0
    ctx->pc = 0x2f8618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_2f861c:
    // 0x2f861c: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2f861cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2f8620:
    // 0x2f8620: 0xc0cd4fc  jal         func_3353F0
label_2f8624:
    if (ctx->pc == 0x2F8624u) {
        ctx->pc = 0x2F8624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8620u;
        // 0x2f8624: 0x24061770  addiu       $a2, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8628u;
        goto label_2f8628;
    }
    ctx->pc = 0x2F8620u;
    SET_GPR_U32(ctx, 31, 0x2F8628u);
    ctx->pc = 0x2F8624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8620u;
    // 0x2f8624: 0x24061770  addiu       $a2, $zero, 0x1770 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2F8620u, 0x2F8628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8628u;
label_2f8628:
    // 0x2f8628: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2f8628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2f862c:
    // 0x2f862c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2f8630:
    if (ctx->pc == 0x2F8630u) {
        ctx->pc = 0x2F8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F862Cu;
        // 0x2f8630: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8634u;
        goto label_2f8634;
    }
    ctx->pc = 0x2F862Cu;
    {
        const bool branch_taken_0x2f862c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F862Cu;
        // 0x2f8630: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f862c) {
            ctx->pc = 0x2F8698u;
            goto label_2f8698;
        }
    }
    ctx->pc = 0x2F8634u;
label_2f8634:
    // 0x2f8634: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2f8638:
    if (ctx->pc == 0x2F8638u) {
        ctx->pc = 0x2F8638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8634u;
        // 0x2f8638: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F863Cu;
        goto label_2f863c;
    }
    ctx->pc = 0x2F8634u;
    {
        const bool branch_taken_0x2f8634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8634u;
        // 0x2f8638: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8634) {
            ctx->pc = 0x2F869Cu;
            goto label_2f869c;
        }
    }
    ctx->pc = 0x2F863Cu;
label_2f863c:
    // 0x2f863c: 0xc0a47b4  jal         func_291ED0
label_2f8640:
    if (ctx->pc == 0x2F8640u) {
        ctx->pc = 0x2F8640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F863Cu;
        // 0x2f8640: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8644u;
        goto label_2f8644;
    }
    ctx->pc = 0x2F863Cu;
    SET_GPR_U32(ctx, 31, 0x2F8644u);
    ctx->pc = 0x2F8640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F863Cu;
    // 0x2f8640: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2F863Cu, 0x2F8644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8644u;
label_2f8644:
    // 0x2f8644: 0x14500015  bne         $v0, $s0, . + 4 + (0x15 << 2)
label_2f8648:
    if (ctx->pc == 0x2F8648u) {
        ctx->pc = 0x2F8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8644u;
        // 0x2f8648: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F864Cu;
        goto label_2f864c;
    }
    ctx->pc = 0x2F8644u;
    {
        const bool branch_taken_0x2f8644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2F8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8644u;
        // 0x2f8648: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8644) {
            ctx->pc = 0x2F869Cu;
            goto label_2f869c;
        }
    }
    ctx->pc = 0x2F864Cu;
label_2f864c:
    // 0x2f864c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f864cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f8650:
    // 0x2f8650: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f8650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f8654:
    // 0x2f8654: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f8654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f8658:
    // 0x2f8658: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2f8658u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2f865c:
    // 0x2f865c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f865cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8660:
    // 0x2f8660: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2f8660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2f8664:
    // 0x2f8664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f8664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8668:
    // 0x2f8668: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f8668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f866c:
    // 0x2f866c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f866cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8670:
    // 0x2f8670: 0xc088178  jal         func_2205E0
label_2f8674:
    if (ctx->pc == 0x2F8674u) {
        ctx->pc = 0x2F8674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8670u;
        // 0x2f8674: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8678u;
        goto label_2f8678;
    }
    ctx->pc = 0x2F8670u;
    SET_GPR_U32(ctx, 31, 0x2F8678u);
    ctx->pc = 0x2F8674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8670u;
    // 0x2f8674: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2F8670u, 0x2F8678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8678u;
label_2f8678:
    // 0x2f8678: 0xc0a367c  jal         func_28D9F0
label_2f867c:
    if (ctx->pc == 0x2F867Cu) {
        ctx->pc = 0x2F867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8678u;
        // 0x2f867c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8680u;
        goto label_2f8680;
    }
    ctx->pc = 0x2F8678u;
    SET_GPR_U32(ctx, 31, 0x2F8680u);
    ctx->pc = 0x2F867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8678u;
    // 0x2f867c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F8678u, 0x2F8680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8680u;
label_2f8680:
    // 0x2f8680: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f8684:
    if (ctx->pc == 0x2F8684u) {
        ctx->pc = 0x2F8684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8680u;
        // 0x2f8684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8688u;
        goto label_2f8688;
    }
    ctx->pc = 0x2F8680u;
    {
        const bool branch_taken_0x2f8680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8680u;
        // 0x2f8684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8680) {
            ctx->pc = 0x2F8694u;
            goto label_2f8694;
        }
    }
    ctx->pc = 0x2F8688u;
label_2f8688:
    // 0x2f8688: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f8688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f868c:
    // 0x2f868c: 0xc0bebdc  jal         func_2FAF70
label_2f8690:
    if (ctx->pc == 0x2F8690u) {
        ctx->pc = 0x2F8690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F868Cu;
        // 0x2f8690: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8694u;
        goto label_2f8694;
    }
    ctx->pc = 0x2F868Cu;
    SET_GPR_U32(ctx, 31, 0x2F8694u);
    ctx->pc = 0x2F8690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F868Cu;
    // 0x2f8690: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2F868Cu, 0x2F8694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8694u;
label_2f8694:
    // 0x2f8694: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x2f8694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_2f8698:
    // 0x2f8698: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2f8698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2f869c:
    // 0x2f869c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2f869cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f86a0:
    // 0x2f86a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2f86a4:
    if (ctx->pc == 0x2F86A4u) {
        ctx->pc = 0x2F86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86A0u;
        // 0x2f86a4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F86A8u;
        goto label_2f86a8;
    }
    ctx->pc = 0x2F86A0u;
    {
        const bool branch_taken_0x2f86a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f86a0) {
            ctx->pc = 0x2F86A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F86A0u;
            // 0x2f86a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F86A8u;
            goto label_2f86a8;
        }
    }
    ctx->pc = 0x2F86A8u;
label_2f86a8:
    // 0x2f86a8: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x2f86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_2f86ac:
    // 0x2f86ac: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2f86acu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2f86b0:
    // 0x2f86b0: 0x2010  mfhi        $a0
    ctx->pc = 0x2f86b0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2f86b4:
    // 0x2f86b4: 0x5480001f  bnel        $a0, $zero, . + 4 + (0x1F << 2)
label_2f86b8:
    if (ctx->pc == 0x2F86B8u) {
        ctx->pc = 0x2F86B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86B4u;
        // 0x2f86b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F86BCu;
        goto label_2f86bc;
    }
    ctx->pc = 0x2F86B4u;
    {
        const bool branch_taken_0x2f86b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f86b4) {
            ctx->pc = 0x2F86B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F86B4u;
            // 0x2f86b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8734u;
            goto label_2f8734;
        }
    }
    ctx->pc = 0x2F86BCu;
label_2f86bc:
    // 0x2f86bc: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2f86bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2f86c0:
    // 0x2f86c0: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2f86c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2f86c4:
    // 0x2f86c4: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2f86c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2f86c8:
    // 0x2f86c8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2f86c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2f86cc:
    // 0x2f86cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f86ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f86d0:
    // 0x2f86d0: 0x24c40164  addiu       $a0, $a2, 0x164
    ctx->pc = 0x2f86d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 356));
label_2f86d4:
    // 0x2f86d4: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2f86d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2f86d8:
    // 0x2f86d8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f86dc:
    // 0x2f86dc: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2f86dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2f86e0:
    // 0x2f86e0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2f86e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f86e4:
    // 0x2f86e4: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x2f86e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_2f86e8:
    // 0x2f86e8: 0xc136d6c  jal         func_4DB5B0
label_2f86ec:
    if (ctx->pc == 0x2F86ECu) {
        ctx->pc = 0x2F86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86E8u;
        // 0x2f86ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F86F0u;
        goto label_2f86f0;
    }
    ctx->pc = 0x2F86E8u;
    SET_GPR_U32(ctx, 31, 0x2F86F0u);
    ctx->pc = 0x2F86ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F86E8u;
    // 0x2f86ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x2F86E8u, 0x2F86F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F86F0u;
label_2f86f0:
    // 0x2f86f0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f86f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2f86f4:
    // 0x2f86f4: 0xc0e409a  jal         func_390268
label_2f86f8:
    if (ctx->pc == 0x2F86F8u) {
        ctx->pc = 0x2F86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86F4u;
        // 0x2f86f8: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F86FCu;
        goto label_2f86fc;
    }
    ctx->pc = 0x2F86F4u;
    SET_GPR_U32(ctx, 31, 0x2F86FCu);
    ctx->pc = 0x2F86F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F86F4u;
    // 0x2f86f8: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F86F4u, 0x2F86FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F86FCu;
label_2f86fc:
    // 0x2f86fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2f8700:
    if (ctx->pc == 0x2F8700u) {
        ctx->pc = 0x2F8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86FCu;
        // 0x2f8700: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8704u;
        goto label_2f8704;
    }
    ctx->pc = 0x2F86FCu;
    {
        const bool branch_taken_0x2f86fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86FCu;
        // 0x2f8700: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f86fc) {
            ctx->pc = 0x2F8730u;
            goto label_2f8730;
        }
    }
    ctx->pc = 0x2F8704u;
label_2f8704:
    // 0x2f8704: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f8704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f8708:
    // 0x2f8708: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f8708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f870c:
    // 0x2f870c: 0x0  nop
    ctx->pc = 0x2f870cu;
    // NOP
label_2f8710:
    // 0x2f8710: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2f8710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f8714:
    // 0x2f8714: 0x0  nop
    ctx->pc = 0x2f8714u;
    // NOP
label_2f8718:
    // 0x2f8718: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_2f871c:
    if (ctx->pc == 0x2F871Cu) {
        ctx->pc = 0x2F871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8718u;
        // 0x2f871c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8720u;
        goto label_2f8720;
    }
    ctx->pc = 0x2F8718u;
    {
        const bool branch_taken_0x2f8718 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8718u;
        // 0x2f871c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8718) {
            ctx->pc = 0x2F8774u;
            goto label_2f8774;
        }
    }
    ctx->pc = 0x2F8720u;
label_2f8720:
    // 0x2f8720: 0x26640284  addiu       $a0, $s3, 0x284
    ctx->pc = 0x2f8720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
label_2f8724:
    // 0x2f8724: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x2f8724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_2f8728:
    // 0x2f8728: 0xc0a6800  jal         func_29A000
label_2f872c:
    if (ctx->pc == 0x2F872Cu) {
        ctx->pc = 0x2F872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8728u;
        // 0x2f872c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8730u;
        goto label_2f8730;
    }
    ctx->pc = 0x2F8728u;
    SET_GPR_U32(ctx, 31, 0x2F8730u);
    ctx->pc = 0x2F872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8728u;
    // 0x2f872c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2F8728u, 0x2F8730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8730u;
label_2f8730:
    // 0x2f8730: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f8730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8734:
    // 0x2f8734: 0xc136b80  jal         func_4DAE00
label_2f8738:
    if (ctx->pc == 0x2F8738u) {
        ctx->pc = 0x2F8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8734u;
        // 0x2f8738: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F873Cu;
        goto label_2f873c;
    }
    ctx->pc = 0x2F8734u;
    SET_GPR_U32(ctx, 31, 0x2F873Cu);
    ctx->pc = 0x2F8738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8734u;
    // 0x2f8738: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2F8734u, 0x2F873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F873Cu;
label_2f873c:
    // 0x2f873c: 0x10400145  beqz        $v0, . + 4 + (0x145 << 2)
label_2f8740:
    if (ctx->pc == 0x2F8740u) {
        ctx->pc = 0x2F8740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F873Cu;
        // 0x2f8740: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8744u;
        goto label_2f8744;
    }
    ctx->pc = 0x2F873Cu;
    {
        const bool branch_taken_0x2f873c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F873Cu;
        // 0x2f8740: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f873c) {
            ctx->pc = 0x2F8C54u;
            goto label_2f8c54;
        }
    }
    ctx->pc = 0x2F8744u;
label_2f8744:
    // 0x2f8744: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x2f8744u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2f8748:
    // 0x2f8748: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f8748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f874c:
    // 0x2f874c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2f874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f8750:
    // 0x2f8750: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f8750u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2f8754:
    // 0x2f8754: 0x248401a4  addiu       $a0, $a0, 0x1A4
    ctx->pc = 0x2f8754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
label_2f8758:
    // 0x2f8758: 0xc13b782  jal         func_4EDE08
label_2f875c:
    if (ctx->pc == 0x2F875Cu) {
        ctx->pc = 0x2F875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8758u;
        // 0x2f875c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8760u;
        goto label_2f8760;
    }
    ctx->pc = 0x2F8758u;
    SET_GPR_U32(ctx, 31, 0x2F8760u);
    ctx->pc = 0x2F875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8758u;
    // 0x2f875c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x2F8758u, 0x2F8760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8760u;
label_2f8760:
    // 0x2f8760: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2f8760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_2f8764:
    // 0x2f8764: 0xc0e409a  jal         func_390268
label_2f8768:
    if (ctx->pc == 0x2F8768u) {
        ctx->pc = 0x2F8768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8764u;
        // 0x2f8768: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F876Cu;
        goto label_2f876c;
    }
    ctx->pc = 0x2F8764u;
    SET_GPR_U32(ctx, 31, 0x2F876Cu);
    ctx->pc = 0x2F8768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8764u;
    // 0x2f8768: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F8764u, 0x2F876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F876Cu;
label_2f876c:
    // 0x2f876c: 0x10400139  beqz        $v0, . + 4 + (0x139 << 2)
label_2f8770:
    if (ctx->pc == 0x2F8770u) {
        ctx->pc = 0x2F8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F876Cu;
        // 0x2f8770: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8774u;
        goto label_2f8774;
    }
    ctx->pc = 0x2F876Cu;
    {
        const bool branch_taken_0x2f876c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F876Cu;
        // 0x2f8770: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f876c) {
            ctx->pc = 0x2F8C54u;
            goto label_2f8c54;
        }
    }
    ctx->pc = 0x2F8774u;
label_2f8774:
    // 0x2f8774: 0xc0be02c  jal         func_2F80B0
label_2f8778:
    if (ctx->pc == 0x2F8778u) {
        ctx->pc = 0x2F8778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8774u;
        // 0x2f8778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F877Cu;
        goto label_2f877c;
    }
    ctx->pc = 0x2F8774u;
    SET_GPR_U32(ctx, 31, 0x2F877Cu);
    ctx->pc = 0x2F8778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8774u;
    // 0x2f8778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F80B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F80B0u, 0x2F8774u, 0x2F877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F877Cu;
label_2f877c:
    // 0x2f877c: 0x10000136  b           . + 4 + (0x136 << 2)
label_2f8780:
    if (ctx->pc == 0x2F8780u) {
        ctx->pc = 0x2F8780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F877Cu;
        // 0x2f8780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8784u;
        goto label_2f8784;
    }
    ctx->pc = 0x2F877Cu;
    {
        const bool branch_taken_0x2f877c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F877Cu;
        // 0x2f8780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f877c) {
            ctx->pc = 0x2F8C58u;
            goto label_2f8c58;
        }
    }
    ctx->pc = 0x2F8784u;
label_2f8784:
    // 0x2f8784: 0x16500134  bne         $s2, $s0, . + 4 + (0x134 << 2)
label_2f8788:
    if (ctx->pc == 0x2F8788u) {
        ctx->pc = 0x2F8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8784u;
        // 0x2f8788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F878Cu;
        goto label_2f878c;
    }
    ctx->pc = 0x2F8784u;
    {
        const bool branch_taken_0x2f8784 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x2F8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8784u;
        // 0x2f8788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8784) {
            ctx->pc = 0x2F8C58u;
            goto label_2f8c58;
        }
    }
    ctx->pc = 0x2F878Cu;
label_2f878c:
    // 0x2f878c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f878cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8790:
    // 0x2f8790: 0x906202d4  lbu         $v0, 0x2D4($v1)
    ctx->pc = 0x2f8790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 724)));
label_2f8794:
    // 0x2f8794: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f8794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f8798:
    // 0x2f8798: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
label_2f879c:
    if (ctx->pc == 0x2F879Cu) {
        ctx->pc = 0x2F879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8798u;
        // 0x2f879c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F87A0u;
        goto label_2f87a0;
    }
    ctx->pc = 0x2F8798u;
    {
        const bool branch_taken_0x2f8798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8798u;
        // 0x2f879c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8798) {
            ctx->pc = 0x2F87A8u;
            goto label_2f87a8;
        }
    }
    ctx->pc = 0x2F87A0u;
label_2f87a0:
    // 0x2f87a0: 0xc0be00c  jal         func_2F8030
label_2f87a4:
    if (ctx->pc == 0x2F87A4u) {
        ctx->pc = 0x2F87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87A0u;
        // 0x2f87a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F87A8u;
        goto label_2f87a8;
    }
    ctx->pc = 0x2F87A0u;
    SET_GPR_U32(ctx, 31, 0x2F87A8u);
    ctx->pc = 0x2F87A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F87A0u;
    // 0x2f87a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8030u, 0x2F87A0u, 0x2F87A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F87A8u;
label_2f87a8:
    // 0x2f87a8: 0x3c05aeeb  lui         $a1, 0xAEEB
    ctx->pc = 0x2f87a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44779 << 16));
label_2f87ac:
    // 0x2f87ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f87acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f87b0:
    // 0x2f87b0: 0xc089998  jal         func_226660
label_2f87b4:
    if (ctx->pc == 0x2F87B4u) {
        ctx->pc = 0x2F87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87B0u;
        // 0x2f87b4: 0x34a5f7ff  ori         $a1, $a1, 0xF7FF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63487);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F87B8u;
        goto label_2f87b8;
    }
    ctx->pc = 0x2F87B0u;
    SET_GPR_U32(ctx, 31, 0x2F87B8u);
    ctx->pc = 0x2F87B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F87B0u;
    // 0x2f87b4: 0x34a5f7ff  ori         $a1, $a1, 0xF7FF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63487);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2F87B0u, 0x2F87B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F87B8u;
label_2f87b8:
    // 0x2f87b8: 0x10520127  beq         $v0, $s2, . + 4 + (0x127 << 2)
label_2f87bc:
    if (ctx->pc == 0x2F87BCu) {
        ctx->pc = 0x2F87BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87B8u;
        // 0x2f87bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F87C0u;
        goto label_2f87c0;
    }
    ctx->pc = 0x2F87B8u;
    {
        const bool branch_taken_0x2f87b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F87BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87B8u;
        // 0x2f87bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f87b8) {
            ctx->pc = 0x2F8C58u;
            goto label_2f8c58;
        }
    }
    ctx->pc = 0x2F87C0u;
label_2f87c0:
    // 0x2f87c0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2f87c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f87c4:
    // 0x2f87c4: 0xc0e409a  jal         func_390268
label_2f87c8:
    if (ctx->pc == 0x2F87C8u) {
        ctx->pc = 0x2F87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87C4u;
        // 0x2f87c8: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F87CCu;
        goto label_2f87cc;
    }
    ctx->pc = 0x2F87C4u;
    SET_GPR_U32(ctx, 31, 0x2F87CCu);
    ctx->pc = 0x2F87C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F87C4u;
    // 0x2f87c8: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F87C4u, 0x2F87CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F87CCu;
label_2f87cc:
    // 0x2f87cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f87ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f87d0:
    // 0x2f87d0: 0xc0a34d6  jal         func_28D358
label_2f87d4:
    if (ctx->pc == 0x2F87D4u) {
        ctx->pc = 0x2F87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87D0u;
        // 0x2f87d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F87D8u;
        goto label_2f87d8;
    }
    ctx->pc = 0x2F87D0u;
    SET_GPR_U32(ctx, 31, 0x2F87D8u);
    ctx->pc = 0x2F87D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F87D0u;
    // 0x2f87d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2F87D0u, 0x2F87D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F87D8u;
label_2f87d8:
    // 0x2f87d8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2f87d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2f87dc:
    // 0x2f87dc: 0x9230002b  lbu         $s0, 0x2B($s1)
    ctx->pc = 0x2f87dcu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
label_2f87e0:
    // 0x2f87e0: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2f87e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2f87e4:
    // 0x2f87e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f87e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f87e8:
    // 0x2f87e8: 0x16120036  bne         $s0, $s2, . + 4 + (0x36 << 2)
label_2f87ec:
    if (ctx->pc == 0x2F87ECu) {
        ctx->pc = 0x2F87ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87E8u;
        // 0x2f87ec: 0x8c950048  lw          $s5, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F87F0u;
        goto label_2f87f0;
    }
    ctx->pc = 0x2F87E8u;
    {
        const bool branch_taken_0x2f87e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F87ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87E8u;
        // 0x2f87ec: 0x8c950048  lw          $s5, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f87e8) {
            ctx->pc = 0x2F88C4u;
            goto label_2f88c4;
        }
    }
    ctx->pc = 0x2F87F0u;
label_2f87f0:
    // 0x2f87f0: 0xa220002b  sb          $zero, 0x2B($s1)
    ctx->pc = 0x2f87f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 0));
label_2f87f4:
    // 0x2f87f4: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2f87f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2f87f8:
    // 0x2f87f8: 0xa220002f  sb          $zero, 0x2F($s1)
    ctx->pc = 0x2f87f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
label_2f87fc:
    // 0x2f87fc: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x2f87fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2f8800:
    // 0x2f8800: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f8800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f8804:
    // 0x2f8804: 0x12800035  beqz        $s4, . + 4 + (0x35 << 2)
label_2f8808:
    if (ctx->pc == 0x2F8808u) {
        ctx->pc = 0x2F8808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8804u;
        // 0x2f8808: 0xfe6200e0  sd          $v0, 0xE0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F880Cu;
        goto label_2f880c;
    }
    ctx->pc = 0x2F8804u;
    {
        const bool branch_taken_0x2f8804 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8804u;
        // 0x2f8808: 0xfe6200e0  sd          $v0, 0xE0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8804) {
            ctx->pc = 0x2F88DCu;
            goto label_2f88dc;
        }
    }
    ctx->pc = 0x2F880Cu;
label_2f880c:
    // 0x2f880c: 0xc088ed2  jal         func_223B48
label_2f8810:
    if (ctx->pc == 0x2F8810u) {
        ctx->pc = 0x2F8810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F880Cu;
        // 0x2f8810: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8814u;
        goto label_2f8814;
    }
    ctx->pc = 0x2F880Cu;
    SET_GPR_U32(ctx, 31, 0x2F8814u);
    ctx->pc = 0x2F8810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F880Cu;
    // 0x2f8810: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2F880Cu, 0x2F8814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8814u;
label_2f8814:
    // 0x2f8814: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_2f8818:
    if (ctx->pc == 0x2F8818u) {
        ctx->pc = 0x2F881Cu;
        goto label_2f881c;
    }
    ctx->pc = 0x2F8814u;
    {
        const bool branch_taken_0x2f8814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2f8814) {
            ctx->pc = 0x2F882Cu;
            goto label_2f882c;
        }
    }
    ctx->pc = 0x2F881Cu;
label_2f881c:
    // 0x2f881c: 0xc088e80  jal         func_223A00
label_2f8820:
    if (ctx->pc == 0x2F8820u) {
        ctx->pc = 0x2F8820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F881Cu;
        // 0x2f8820: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8824u;
        goto label_2f8824;
    }
    ctx->pc = 0x2F881Cu;
    SET_GPR_U32(ctx, 31, 0x2F8824u);
    ctx->pc = 0x2F8820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F881Cu;
    // 0x2f8820: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x2F881Cu, 0x2F8824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8824u;
label_2f8824:
    // 0x2f8824: 0x14500027  bne         $v0, $s0, . + 4 + (0x27 << 2)
label_2f8828:
    if (ctx->pc == 0x2F8828u) {
        ctx->pc = 0x2F882Cu;
        goto label_2f882c;
    }
    ctx->pc = 0x2F8824u;
    {
        const bool branch_taken_0x2f8824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f8824) {
            ctx->pc = 0x2F88C4u;
            goto label_2f88c4;
        }
    }
    ctx->pc = 0x2F882Cu;
label_2f882c:
    // 0x2f882c: 0xc047e6c  jal         func_11F9B0
label_2f8830:
    if (ctx->pc == 0x2F8830u) {
        ctx->pc = 0x2F8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F882Cu;
        // 0x2f8830: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8834u;
        goto label_2f8834;
    }
    ctx->pc = 0x2F882Cu;
    SET_GPR_U32(ctx, 31, 0x2F8834u);
    ctx->pc = 0x2F8830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F882Cu;
    // 0x2f8830: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x2F882Cu, 0x2F8834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8834u;
label_2f8834:
    // 0x2f8834: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f8834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8838:
    // 0x2f8838: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
label_2f883c:
    if (ctx->pc == 0x2F883Cu) {
        ctx->pc = 0x2F8840u;
        goto label_2f8840;
    }
    ctx->pc = 0x2F8838u;
    {
        const bool branch_taken_0x2f8838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8838) {
            ctx->pc = 0x2F88C4u;
            goto label_2f88c4;
        }
    }
    ctx->pc = 0x2F8840u;
label_2f8840:
    // 0x2f8840: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2f8840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f8844:
    // 0x2f8844: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x2f8844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_2f8848:
    // 0x2f8848: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x2f8848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_2f884c:
    // 0x2f884c: 0x40f809  jalr        $v0
label_2f8850:
    if (ctx->pc == 0x2F8850u) {
        ctx->pc = 0x2F8850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F884Cu;
        // 0x2f8850: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8854u;
        goto label_2f8854;
    }
    ctx->pc = 0x2F884Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F8854u);
        ctx->pc = 0x2F8850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F884Cu;
        // 0x2f8850: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F884Cu, 0x2F8854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F8854u;
label_2f8854:
    // 0x2f8854: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f8854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f8858:
    // 0x2f8858: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
label_2f885c:
    if (ctx->pc == 0x2F885Cu) {
        ctx->pc = 0x2F8860u;
        goto label_2f8860;
    }
    ctx->pc = 0x2F8858u;
    {
        const bool branch_taken_0x2f8858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f8858) {
            ctx->pc = 0x2F88C4u;
            goto label_2f88c4;
        }
    }
    ctx->pc = 0x2F8860u;
label_2f8860:
    // 0x2f8860: 0xc087502  jal         func_21D408
label_2f8864:
    if (ctx->pc == 0x2F8864u) {
        ctx->pc = 0x2F8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8860u;
        // 0x2f8864: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8868u;
        goto label_2f8868;
    }
    ctx->pc = 0x2F8860u;
    SET_GPR_U32(ctx, 31, 0x2F8868u);
    ctx->pc = 0x2F8864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8860u;
    // 0x2f8864: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2F8860u, 0x2F8868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8868u;
label_2f8868:
    // 0x2f8868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f8868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f886c:
    // 0x2f886c: 0xc0a445e  jal         func_291178
label_2f8870:
    if (ctx->pc == 0x2F8870u) {
        ctx->pc = 0x2F8870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F886Cu;
        // 0x2f8870: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8874u;
        goto label_2f8874;
    }
    ctx->pc = 0x2F886Cu;
    SET_GPR_U32(ctx, 31, 0x2F8874u);
    ctx->pc = 0x2F8870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F886Cu;
    // 0x2f8870: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2F886Cu, 0x2F8874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8874u;
label_2f8874:
    // 0x2f8874: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f8874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8878:
    // 0x2f8878: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2f8878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2f887c:
    // 0x2f887c: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x2f887cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2f8880:
    // 0x2f8880: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2f8884:
    if (ctx->pc == 0x2F8884u) {
        ctx->pc = 0x2F8884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8880u;
        // 0x2f8884: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8888u;
        goto label_2f8888;
    }
    ctx->pc = 0x2F8880u;
    {
        const bool branch_taken_0x2f8880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8880u;
        // 0x2f8884: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8880) {
            ctx->pc = 0x2F88B8u;
            goto label_2f88b8;
        }
    }
    ctx->pc = 0x2F8888u;
label_2f8888:
    // 0x2f8888: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2f8888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2f888c:
    // 0x2f888c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2f888cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2f8890:
    // 0x2f8890: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2f8890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2f8894:
    // 0x2f8894: 0x40f809  jalr        $v0
label_2f8898:
    if (ctx->pc == 0x2F8898u) {
        ctx->pc = 0x2F8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8894u;
        // 0x2f8898: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F889Cu;
        goto label_2f889c;
    }
    ctx->pc = 0x2F8894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F889Cu);
        ctx->pc = 0x2F8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8894u;
        // 0x2f8898: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8894u, 0x2F889Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F889Cu;
label_2f889c:
    // 0x2f889c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f889cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f88a0:
    // 0x2f88a0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2f88a4:
    if (ctx->pc == 0x2F88A4u) {
        ctx->pc = 0x2F88A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88A0u;
        // 0x2f88a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F88A8u;
        goto label_2f88a8;
    }
    ctx->pc = 0x2F88A0u;
    {
        const bool branch_taken_0x2f88a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F88A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88A0u;
        // 0x2f88a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88a0) {
            ctx->pc = 0x2F88B8u;
            goto label_2f88b8;
        }
    }
    ctx->pc = 0x2F88A8u;
label_2f88a8:
    // 0x2f88a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f88a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f88ac:
    // 0x2f88ac: 0xc0c372e  jal         func_30DCB8
label_2f88b0:
    if (ctx->pc == 0x2F88B0u) {
        ctx->pc = 0x2F88B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88ACu;
        // 0x2f88b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F88B4u;
        goto label_2f88b4;
    }
    ctx->pc = 0x2F88ACu;
    SET_GPR_U32(ctx, 31, 0x2F88B4u);
    ctx->pc = 0x2F88B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F88ACu;
    // 0x2f88b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DCB8u, 0x2F88ACu, 0x2F88B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F88B4u;
label_2f88b4:
    // 0x2f88b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f88b8:
    // 0x2f88b8: 0xa220002e  sb          $zero, 0x2E($s1)
    ctx->pc = 0x2f88b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 0));
label_2f88bc:
    // 0x2f88bc: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_2f88c0:
    if (ctx->pc == 0x2F88C0u) {
        ctx->pc = 0x2F88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88BCu;
        // 0x2f88c0: 0xa222002a  sb          $v0, 0x2A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F88C4u;
        goto label_2f88c4;
    }
    ctx->pc = 0x2F88BCu;
    {
        const bool branch_taken_0x2f88bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88BCu;
        // 0x2f88c0: 0xa222002a  sb          $v0, 0x2A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88bc) {
            ctx->pc = 0x2F8C54u;
            goto label_2f8c54;
        }
    }
    ctx->pc = 0x2F88C4u;
label_2f88c4:
    // 0x2f88c4: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_2f88c8:
    if (ctx->pc == 0x2F88C8u) {
        ctx->pc = 0x2F88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88C4u;
        // 0x2f88c8: 0x26a207d0  addiu       $v0, $s5, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F88CCu;
        goto label_2f88cc;
    }
    ctx->pc = 0x2F88C4u;
    {
        const bool branch_taken_0x2f88c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88C4u;
        // 0x2f88c8: 0x26a207d0  addiu       $v0, $s5, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88c4) {
            ctx->pc = 0x2F88E0u;
            goto label_2f88e0;
        }
    }
    ctx->pc = 0x2F88CCu;
label_2f88cc:
    // 0x2f88cc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2f88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2f88d0:
    // 0x2f88d0: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x2f88d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2f88d4:
    // 0x2f88d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2f88d8:
    if (ctx->pc == 0x2F88D8u) {
        ctx->pc = 0x2F88DCu;
        goto label_2f88dc;
    }
    ctx->pc = 0x2F88D4u;
    {
        const bool branch_taken_0x2f88d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f88d4) {
            ctx->pc = 0x2F88F8u;
            goto label_2f88f8;
        }
    }
    ctx->pc = 0x2F88DCu;
label_2f88dc:
    // 0x2f88dc: 0x26a207d0  addiu       $v0, $s5, 0x7D0
    ctx->pc = 0x2f88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2000));
label_2f88e0:
    // 0x2f88e0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f88e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2f88e4:
    // 0x2f88e4: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2f88e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2f88e8:
    // 0x2f88e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f88e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f88ec:
    // 0x2f88ec: 0xc0a7c8c  jal         func_29F230
label_2f88f0:
    if (ctx->pc == 0x2F88F0u) {
        ctx->pc = 0x2F88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88ECu;
        // 0x2f88f0: 0x34a5fbf9  ori         $a1, $a1, 0xFBF9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64505);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F88F4u;
        goto label_2f88f4;
    }
    ctx->pc = 0x2F88ECu;
    SET_GPR_U32(ctx, 31, 0x2F88F4u);
    ctx->pc = 0x2F88F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F88ECu;
    // 0x2f88f0: 0x34a5fbf9  ori         $a1, $a1, 0xFBF9 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64505);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2F88ECu, 0x2F88F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F88F4u;
label_2f88f4:
    // 0x2f88f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f88f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f88f8:
    // 0x2f88f8: 0x128000d7  beqz        $s4, . + 4 + (0xD7 << 2)
label_2f88fc:
    if (ctx->pc == 0x2F88FCu) {
        ctx->pc = 0x2F88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88F8u;
        // 0x2f88fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8900u;
        goto label_2f8900;
    }
    ctx->pc = 0x2F88F8u;
    {
        const bool branch_taken_0x2f88f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88F8u;
        // 0x2f88fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88f8) {
            ctx->pc = 0x2F8C58u;
            goto label_2f8c58;
        }
    }
    ctx->pc = 0x2F8900u;
label_2f8900:
    // 0x2f8900: 0xc087502  jal         func_21D408
label_2f8904:
    if (ctx->pc == 0x2F8904u) {
        ctx->pc = 0x2F8904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8900u;
        // 0x2f8904: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8908u;
        goto label_2f8908;
    }
    ctx->pc = 0x2F8900u;
    SET_GPR_U32(ctx, 31, 0x2F8908u);
    ctx->pc = 0x2F8904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8900u;
    // 0x2f8904: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2F8900u, 0x2F8908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8908u;
label_2f8908:
    // 0x2f8908: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f8908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f890c:
    // 0x2f890c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f890cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8910:
    // 0x2f8910: 0xc0a3792  jal         func_28DE48
label_2f8914:
    if (ctx->pc == 0x2F8914u) {
        ctx->pc = 0x2F8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8910u;
        // 0x2f8914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8918u;
        goto label_2f8918;
    }
    ctx->pc = 0x2F8910u;
    SET_GPR_U32(ctx, 31, 0x2F8918u);
    ctx->pc = 0x2F8914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8910u;
    // 0x2f8914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2F8910u, 0x2F8918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8918u;
label_2f8918:
    // 0x2f8918: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2f891c:
    if (ctx->pc == 0x2F891Cu) {
        ctx->pc = 0x2F891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8918u;
        // 0x2f891c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8920u;
        goto label_2f8920;
    }
    ctx->pc = 0x2F8918u;
    {
        const bool branch_taken_0x2f8918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8918u;
        // 0x2f891c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8918) {
            ctx->pc = 0x2F893Cu;
            goto label_2f893c;
        }
    }
    ctx->pc = 0x2F8920u;
label_2f8920:
    // 0x2f8920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8924:
    // 0x2f8924: 0xc0a445e  jal         func_291178
label_2f8928:
    if (ctx->pc == 0x2F8928u) {
        ctx->pc = 0x2F8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8924u;
        // 0x2f8928: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F892Cu;
        goto label_2f892c;
    }
    ctx->pc = 0x2F8924u;
    SET_GPR_U32(ctx, 31, 0x2F892Cu);
    ctx->pc = 0x2F8928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8924u;
    // 0x2f8928: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2F8924u, 0x2F892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F892Cu;
label_2f892c:
    // 0x2f892c: 0xc089bdc  jal         func_226F70
label_2f8930:
    if (ctx->pc == 0x2F8930u) {
        ctx->pc = 0x2F8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F892Cu;
        // 0x2f8930: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8934u;
        goto label_2f8934;
    }
    ctx->pc = 0x2F892Cu;
    SET_GPR_U32(ctx, 31, 0x2F8934u);
    ctx->pc = 0x2F8930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F892Cu;
    // 0x2f8930: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2F892Cu, 0x2F8934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8934u;
label_2f8934:
    // 0x2f8934: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_2f8938:
    if (ctx->pc == 0x2F8938u) {
        ctx->pc = 0x2F8938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8934u;
        // 0x2f8938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F893Cu;
        goto label_2f893c;
    }
    ctx->pc = 0x2F8934u;
    {
        const bool branch_taken_0x2f8934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8934u;
        // 0x2f8938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8934) {
            ctx->pc = 0x2F8C58u;
            goto label_2f8c58;
        }
    }
    ctx->pc = 0x2F893Cu;
label_2f893c:
    // 0x2f893c: 0xc08bfa0  jal         func_22FE80
label_2f8940:
    if (ctx->pc == 0x2F8940u) {
        ctx->pc = 0x2F8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F893Cu;
        // 0x2f8940: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8944u;
        goto label_2f8944;
    }
    ctx->pc = 0x2F893Cu;
    SET_GPR_U32(ctx, 31, 0x2F8944u);
    ctx->pc = 0x2F8940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F893Cu;
    // 0x2f8940: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2F893Cu, 0x2F8944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8944u;
label_2f8944:
    // 0x2f8944: 0x9222002f  lbu         $v0, 0x2F($s1)
    ctx->pc = 0x2f8944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
label_2f8948:
    // 0x2f8948: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_2f894c:
    if (ctx->pc == 0x2F894Cu) {
        ctx->pc = 0x2F894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8948u;
        // 0x2f894c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8950u;
        goto label_2f8950;
    }
    ctx->pc = 0x2F8948u;
    {
        const bool branch_taken_0x2f8948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2F894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8948u;
        // 0x2f894c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8948) {
            ctx->pc = 0x2F8968u;
            goto label_2f8968;
        }
    }
    ctx->pc = 0x2F8950u;
label_2f8950:
    // 0x2f8950: 0xc0874fa  jal         func_21D3E8
label_2f8954:
    if (ctx->pc == 0x2F8954u) {
        ctx->pc = 0x2F8954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8950u;
        // 0x2f8954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8958u;
        goto label_2f8958;
    }
    ctx->pc = 0x2F8950u;
    SET_GPR_U32(ctx, 31, 0x2F8958u);
    ctx->pc = 0x2F8954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8950u;
    // 0x2f8954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2F8950u, 0x2F8958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8958u;
label_2f8958:
    // 0x2f8958: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f8958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f895c:
    // 0x2f895c: 0xc051fbc  jal         func_147EF0
label_2f8960:
    if (ctx->pc == 0x2F8960u) {
        ctx->pc = 0x2F8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F895Cu;
        // 0x2f8960: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8964u;
        goto label_2f8964;
    }
    ctx->pc = 0x2F895Cu;
    SET_GPR_U32(ctx, 31, 0x2F8964u);
    ctx->pc = 0x2F8960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F895Cu;
    // 0x2f8960: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2F895Cu, 0x2F8964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8964u;
label_2f8964:
    // 0x2f8964: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f8964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f8968:
    // 0x2f8968: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2f8968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2f896c:
    // 0x2f896c: 0x2457b880  addiu       $s7, $v0, -0x4780
    ctx->pc = 0x2f896cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
label_2f8970:
    // 0x2f8970: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2f8970u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8974:
    // 0x2f8974: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2f8974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f8978:
    // 0x2f8978: 0xc0cd4ee  jal         func_3353B8
label_2f897c:
    if (ctx->pc == 0x2F897Cu) {
        ctx->pc = 0x2F897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8978u;
        // 0x2f897c: 0x24120011  addiu       $s2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8980u;
        goto label_2f8980;
    }
    ctx->pc = 0x2F8978u;
    SET_GPR_U32(ctx, 31, 0x2F8980u);
    ctx->pc = 0x2F897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8978u;
    // 0x2f897c: 0x24120011  addiu       $s2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2F8978u, 0x2F8980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8980u;
label_2f8980:
    // 0x2f8980: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x2f8980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2f8984:
    // 0x2f8984: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2f8984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f8988:
    // 0x2f8988: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2f8988u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f898c:
    // 0x2f898c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f898cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8990:
    // 0x2f8990: 0xa3900a  movz        $s2, $a1, $v1
    ctx->pc = 0x2f8990u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 5));
label_2f8994:
    // 0x2f8994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f8994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8998:
    // 0x2f8998: 0xc0a41ae  jal         func_2906B8
label_2f899c:
    if (ctx->pc == 0x2F899Cu) {
        ctx->pc = 0x2F899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8998u;
        // 0x2f899c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F89A0u;
        goto label_2f89a0;
    }
    ctx->pc = 0x2F8998u;
    SET_GPR_U32(ctx, 31, 0x2F89A0u);
    ctx->pc = 0x2F899Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8998u;
    // 0x2f899c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2906B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2906B8u, 0x2F8998u, 0x2F89A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F89A0u;
label_2f89a0:
    // 0x2f89a0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2f89a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f89a4:
    // 0x2f89a4: 0x16d0006b  bne         $s6, $s0, . + 4 + (0x6B << 2)
label_2f89a8:
    if (ctx->pc == 0x2F89A8u) {
        ctx->pc = 0x2F89A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F89A4u;
        // 0x2f89a8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F89ACu;
        goto label_2f89ac;
    }
    ctx->pc = 0x2F89A4u;
    {
        const bool branch_taken_0x2f89a4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 16));
        ctx->pc = 0x2F89A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F89A4u;
        // 0x2f89a8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f89a4) {
            ctx->pc = 0x2F8B54u;
            goto label_2f8b54;
        }
    }
    ctx->pc = 0x2F89ACu;
label_2f89ac:
    // 0x2f89ac: 0x26950090  addiu       $s5, $s4, 0x90
    ctx->pc = 0x2f89acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_2f89b0:
    // 0x2f89b0: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x2f89b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2f89b4:
    // 0x2f89b4: 0x86a50002  lh          $a1, 0x2($s5)
    ctx->pc = 0x2f89b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2f89b8:
    // 0x2f89b8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2f89bc:
    // 0x2f89bc: 0x24504b00  addiu       $s0, $v0, 0x4B00
    ctx->pc = 0x2f89bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f89c0:
    // 0x2f89c0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f89c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2f89c4:
    // 0x2f89c4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f89c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2f89c8:
    // 0x2f89c8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2f89c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2f89cc:
    // 0x2f89cc: 0xc0cdb38  jal         func_336CE0
label_2f89d0:
    if (ctx->pc == 0x2F89D0u) {
        ctx->pc = 0x2F89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F89CCu;
        // 0x2f89d0: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F89D4u;
        goto label_2f89d4;
    }
    ctx->pc = 0x2F89CCu;
    SET_GPR_U32(ctx, 31, 0x2F89D4u);
    ctx->pc = 0x2F89D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F89CCu;
    // 0x2f89d0: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2F89CCu, 0x2F89D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F89D4u;
label_2f89d4:
    // 0x2f89d4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2f89d4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2f89d8:
    // 0x2f89d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f89d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f89dc:
    // 0x2f89dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f89dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f89e0:
    // 0x2f89e0: 0xc08c340  jal         func_230D00
label_2f89e4:
    if (ctx->pc == 0x2F89E4u) {
        ctx->pc = 0x2F89E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F89E0u;
        // 0x2f89e4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F89E8u;
        goto label_2f89e8;
    }
    ctx->pc = 0x2F89E0u;
    SET_GPR_U32(ctx, 31, 0x2F89E8u);
    ctx->pc = 0x2F89E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F89E0u;
    // 0x2f89e4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D00u, 0x2F89E0u, 0x2F89E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F89E8u;
label_2f89e8:
    // 0x2f89e8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2f89e8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2f89ec:
    // 0x2f89ec: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x2f89ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f89f0:
    // 0x2f89f0: 0x0  nop
    ctx->pc = 0x2f89f0u;
    // NOP
label_2f89f4:
    // 0x2f89f4: 0x45000030  bc1f        . + 4 + (0x30 << 2)
label_2f89f8:
    if (ctx->pc == 0x2F89F8u) {
        ctx->pc = 0x2F89F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F89F4u;
        // 0x2f89f8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F89FCu;
        goto label_2f89fc;
    }
    ctx->pc = 0x2F89F4u;
    {
        const bool branch_taken_0x2f89f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F89F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F89F4u;
        // 0x2f89f8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f89f4) {
            ctx->pc = 0x2F8AB8u;
            goto label_2f8ab8;
        }
    }
    ctx->pc = 0x2F89FCu;
label_2f89fc:
    // 0x2f89fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8a00:
    // 0x2f8a00: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2f8a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2f8a04:
    // 0x2f8a04: 0xc0cd4ee  jal         func_3353B8
label_2f8a08:
    if (ctx->pc == 0x2F8A08u) {
        ctx->pc = 0x2F8A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A04u;
        // 0x2f8a08: 0xc454013c  lwc1        $f20, 0x13C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A0Cu;
        goto label_2f8a0c;
    }
    ctx->pc = 0x2F8A04u;
    SET_GPR_U32(ctx, 31, 0x2F8A0Cu);
    ctx->pc = 0x2F8A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8A04u;
    // 0x2f8a08: 0xc454013c  lwc1        $f20, 0x13C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2F8A04u, 0x2F8A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8A0Cu;
label_2f8a0c:
    // 0x2f8a0c: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x2f8a0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_2f8a10:
    // 0x2f8a10: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2f8a14:
    if (ctx->pc == 0x2F8A14u) {
        ctx->pc = 0x2F8A18u;
        goto label_2f8a18;
    }
    ctx->pc = 0x2F8A10u;
    {
        const bool branch_taken_0x2f8a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8a10) {
            ctx->pc = 0x2F8A54u;
            goto label_2f8a54;
        }
    }
    ctx->pc = 0x2F8A18u;
label_2f8a18:
    // 0x2f8a18: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2f8a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2f8a1c:
    // 0x2f8a1c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2f8a1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f8a20:
    // 0x2f8a20: 0x0  nop
    ctx->pc = 0x2f8a20u;
    // NOP
label_2f8a24:
    // 0x2f8a24: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2f8a28:
    if (ctx->pc == 0x2F8A28u) {
        ctx->pc = 0x2F8A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A24u;
        // 0x2f8a28: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A2Cu;
        goto label_2f8a2c;
    }
    ctx->pc = 0x2F8A24u;
    {
        const bool branch_taken_0x2f8a24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F8A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A24u;
        // 0x2f8a28: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a24) {
            ctx->pc = 0x2F8A54u;
            goto label_2f8a54;
        }
    }
    ctx->pc = 0x2F8A2Cu;
label_2f8a2c:
    // 0x2f8a2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f8a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f8a30:
    // 0x2f8a30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f8a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f8a34:
    // 0x2f8a34: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2f8a34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2f8a38:
    // 0x2f8a38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f8a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8a3c:
    // 0x2f8a3c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2f8a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_2f8a40:
    // 0x2f8a40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f8a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8a44:
    // 0x2f8a44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f8a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8a48:
    // 0x2f8a48: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f8a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8a4c:
    // 0x2f8a4c: 0xc088178  jal         func_2205E0
label_2f8a50:
    if (ctx->pc == 0x2F8A50u) {
        ctx->pc = 0x2F8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A4Cu;
        // 0x2f8a50: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A54u;
        goto label_2f8a54;
    }
    ctx->pc = 0x2F8A4Cu;
    SET_GPR_U32(ctx, 31, 0x2F8A54u);
    ctx->pc = 0x2F8A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8A4Cu;
    // 0x2f8a50: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2F8A4Cu, 0x2F8A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8A54u;
label_2f8a54:
    // 0x2f8a54: 0xc086618  jal         func_219860
label_2f8a58:
    if (ctx->pc == 0x2F8A58u) {
        ctx->pc = 0x2F8A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A54u;
        // 0x2f8a58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A5Cu;
        goto label_2f8a5c;
    }
    ctx->pc = 0x2F8A54u;
    SET_GPR_U32(ctx, 31, 0x2F8A5Cu);
    ctx->pc = 0x2F8A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8A54u;
    // 0x2f8a58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2F8A54u, 0x2F8A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8A5Cu;
label_2f8a5c:
    // 0x2f8a5c: 0x46000500  add.s       $f20, $f0, $f0
    ctx->pc = 0x2f8a5cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f8a60:
    // 0x2f8a60: 0x0  nop
    ctx->pc = 0x2f8a60u;
    // NOP
label_2f8a64:
    // 0x2f8a64: 0x0  nop
    ctx->pc = 0x2f8a64u;
    // NOP
label_2f8a68:
    // 0x2f8a68: 0x46160044  c1          0x160044
    ctx->pc = 0x2f8a68u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2f8a6c:
    // 0x2f8a6c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f8a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2f8a70:
    // 0x2f8a70: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f8a70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f8a74:
    // 0x2f8a74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f8a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8a78:
    // 0x2f8a78: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f8a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8a7c:
    // 0x2f8a7c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2f8a7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2f8a80:
    // 0x2f8a80: 0x46000d68  max.s       $f21, $f1, $f0
    ctx->pc = 0x2f8a80u;
    ctx->f[21] = std::max(ctx->f[1], ctx->f[0]);
label_2f8a84:
    // 0x2f8a84: 0xc0a367c  jal         func_28D9F0
label_2f8a88:
    if (ctx->pc == 0x2F8A88u) {
        ctx->pc = 0x2F8A8Cu;
        goto label_2f8a8c;
    }
    ctx->pc = 0x2F8A84u;
    SET_GPR_U32(ctx, 31, 0x2F8A8Cu);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F8A84u, 0x2F8A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8A8Cu;
label_2f8a8c:
    // 0x2f8a8c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_2f8a90:
    if (ctx->pc == 0x2F8A90u) {
        ctx->pc = 0x2F8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A8Cu;
        // 0x2f8a90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A94u;
        goto label_2f8a94;
    }
    ctx->pc = 0x2F8A8Cu;
    {
        const bool branch_taken_0x2f8a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A8Cu;
        // 0x2f8a90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a8c) {
            ctx->pc = 0x2F8B4Cu;
            goto label_2f8b4c;
        }
    }
    ctx->pc = 0x2F8A94u;
label_2f8a94:
    // 0x2f8a94: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f8a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8a98:
    // 0x2f8a98: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f8a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f8a9c:
    // 0x2f8a9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f8a9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f8aa0:
    // 0x2f8aa0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2f8aa0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2f8aa4:
    // 0x2f8aa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f8aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8aa8:
    // 0x2f8aa8: 0xc0bf3d4  jal         func_2FCF50
label_2f8aac:
    if (ctx->pc == 0x2F8AACu) {
        ctx->pc = 0x2F8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AA8u;
        // 0x2f8aac: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8AB0u;
        goto label_2f8ab0;
    }
    ctx->pc = 0x2F8AA8u;
    SET_GPR_U32(ctx, 31, 0x2F8AB0u);
    ctx->pc = 0x2F8AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8AA8u;
    // 0x2f8aac: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2F8AA8u, 0x2F8AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8AB0u;
label_2f8ab0:
    // 0x2f8ab0: 0x10000068  b           . + 4 + (0x68 << 2)
label_2f8ab4:
    if (ctx->pc == 0x2F8AB4u) {
        ctx->pc = 0x2F8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AB0u;
        // 0x2f8ab4: 0xa220002f  sb          $zero, 0x2F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8AB8u;
        goto label_2f8ab8;
    }
    ctx->pc = 0x2F8AB0u;
    {
        const bool branch_taken_0x2f8ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AB0u;
        // 0x2f8ab4: 0xa220002f  sb          $zero, 0x2F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ab0) {
            ctx->pc = 0x2F8C54u;
            goto label_2f8c54;
        }
    }
    ctx->pc = 0x2F8AB8u;
label_2f8ab8:
    // 0x2f8ab8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f8ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8abc:
    // 0x2f8abc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f8abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f8ac0:
    // 0x2f8ac0: 0xc0891de  jal         func_224778
label_2f8ac4:
    if (ctx->pc == 0x2F8AC4u) {
        ctx->pc = 0x2F8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AC0u;
        // 0x2f8ac4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8AC8u;
        goto label_2f8ac8;
    }
    ctx->pc = 0x2F8AC0u;
    SET_GPR_U32(ctx, 31, 0x2F8AC8u);
    ctx->pc = 0x2F8AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8AC0u;
    // 0x2f8ac4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2F8AC0u, 0x2F8AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8AC8u;
label_2f8ac8:
    // 0x2f8ac8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2f8ac8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8acc:
    // 0x2f8acc: 0x16f60062  bne         $s7, $s6, . + 4 + (0x62 << 2)
label_2f8ad0:
    if (ctx->pc == 0x2F8AD0u) {
        ctx->pc = 0x2F8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8ACCu;
        // 0x2f8ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8AD4u;
        goto label_2f8ad4;
    }
    ctx->pc = 0x2F8ACCu;
    {
        const bool branch_taken_0x2f8acc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 22));
        ctx->pc = 0x2F8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8ACCu;
        // 0x2f8ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8acc) {
            ctx->pc = 0x2F8C58u;
            goto label_2f8c58;
        }
    }
    ctx->pc = 0x2F8AD4u;
label_2f8ad4:
    // 0x2f8ad4: 0x86a20002  lh          $v0, 0x2($s5)
    ctx->pc = 0x2f8ad4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2f8ad8:
    // 0x2f8ad8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f8ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f8adc:
    // 0x2f8adc: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x2f8adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_2f8ae0:
    // 0x2f8ae0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x2f8ae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_2f8ae4:
    // 0x2f8ae4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f8ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f8ae8:
    // 0x2f8ae8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f8ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8aec:
    // 0x2f8aec: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f8af0:
    // 0x2f8af0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f8af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2f8af4:
    // 0x2f8af4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f8af4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f8af8:
    // 0x2f8af8: 0xc088708  jal         func_221C20
label_2f8afc:
    if (ctx->pc == 0x2F8AFCu) {
        ctx->pc = 0x2F8AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AF8u;
        // 0x2f8afc: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8B00u;
        goto label_2f8b00;
    }
    ctx->pc = 0x2F8AF8u;
    SET_GPR_U32(ctx, 31, 0x2F8B00u);
    ctx->pc = 0x2F8AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8AF8u;
    // 0x2f8afc: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x2F8AF8u, 0x2F8B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8B00u;
label_2f8b00:
    // 0x2f8b00: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f8b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8b04:
    // 0x2f8b04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f8b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f8b08:
    // 0x2f8b08: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f8b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2f8b0c:
    // 0x2f8b0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f8b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f8b10:
    // 0x2f8b10: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f8b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f8b14:
    // 0x2f8b14: 0xc0a3892  jal         func_28E248
label_2f8b18:
    if (ctx->pc == 0x2F8B18u) {
        ctx->pc = 0x2F8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B14u;
        // 0x2f8b18: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8B1Cu;
        goto label_2f8b1c;
    }
    ctx->pc = 0x2F8B14u;
    SET_GPR_U32(ctx, 31, 0x2F8B1Cu);
    ctx->pc = 0x2F8B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8B14u;
    // 0x2f8b18: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2F8B14u, 0x2F8B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8B1Cu;
label_2f8b1c:
    // 0x2f8b1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f8b20:
    // 0x2f8b20: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2f8b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2f8b24:
    // 0x2f8b24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f8b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f8b28:
    // 0x2f8b28: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2f8b28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2f8b2c:
    // 0x2f8b2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f8b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8b30:
    // 0x2f8b30: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x2f8b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2f8b34:
    // 0x2f8b34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f8b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8b38:
    // 0x2f8b38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f8b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8b3c:
    // 0x2f8b3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f8b3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8b40:
    // 0x2f8b40: 0xc088178  jal         func_2205E0
label_2f8b44:
    if (ctx->pc == 0x2F8B44u) {
        ctx->pc = 0x2F8B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B40u;
        // 0x2f8b44: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8B48u;
        goto label_2f8b48;
    }
    ctx->pc = 0x2F8B40u;
    SET_GPR_U32(ctx, 31, 0x2F8B48u);
    ctx->pc = 0x2F8B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8B40u;
    // 0x2f8b44: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2F8B40u, 0x2F8B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8B48u;
label_2f8b48:
    // 0x2f8b48: 0xa237002b  sb          $s7, 0x2B($s1)
    ctx->pc = 0x2f8b48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 23));
label_2f8b4c:
    // 0x2f8b4c: 0x10000041  b           . + 4 + (0x41 << 2)
label_2f8b50:
    if (ctx->pc == 0x2F8B50u) {
        ctx->pc = 0x2F8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B4Cu;
        // 0x2f8b50: 0xa220002f  sb          $zero, 0x2F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8B54u;
        goto label_2f8b54;
    }
    ctx->pc = 0x2F8B4Cu;
    {
        const bool branch_taken_0x2f8b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B4Cu;
        // 0x2f8b50: 0xa220002f  sb          $zero, 0x2F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b4c) {
            ctx->pc = 0x2F8C54u;
            goto label_2f8c54;
        }
    }
    ctx->pc = 0x2F8B54u;
label_2f8b54:
    // 0x2f8b54: 0xc0cd4ee  jal         func_3353B8
label_2f8b58:
    if (ctx->pc == 0x2F8B58u) {
        ctx->pc = 0x2F8B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B54u;
        // 0x2f8b58: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8B5Cu;
        goto label_2f8b5c;
    }
    ctx->pc = 0x2F8B54u;
    SET_GPR_U32(ctx, 31, 0x2F8B5Cu);
    ctx->pc = 0x2F8B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8B54u;
    // 0x2f8b58: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2F8B54u, 0x2F8B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8B5Cu;
label_2f8b5c:
    // 0x2f8b5c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2f8b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2f8b60:
    // 0x2f8b60: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2f8b64:
    if (ctx->pc == 0x2F8B64u) {
        ctx->pc = 0x2F8B68u;
        goto label_2f8b68;
    }
    ctx->pc = 0x2F8B60u;
    {
        const bool branch_taken_0x2f8b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8b60) {
            ctx->pc = 0x2F8BB0u;
            goto label_2f8bb0;
        }
    }
    ctx->pc = 0x2F8B68u;
label_2f8b68:
    // 0x2f8b68: 0xc0a367c  jal         func_28D9F0
label_2f8b6c:
    if (ctx->pc == 0x2F8B6Cu) {
        ctx->pc = 0x2F8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B68u;
        // 0x2f8b6c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8B70u;
        goto label_2f8b70;
    }
    ctx->pc = 0x2F8B68u;
    SET_GPR_U32(ctx, 31, 0x2F8B70u);
    ctx->pc = 0x2F8B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8B68u;
    // 0x2f8b6c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F8B68u, 0x2F8B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8B70u;
label_2f8b70:
    // 0x2f8b70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f8b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8b74:
    // 0x2f8b74: 0x52000022  beql        $s0, $zero, . + 4 + (0x22 << 2)
label_2f8b78:
    if (ctx->pc == 0x2F8B78u) {
        ctx->pc = 0x2F8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B74u;
        // 0x2f8b78: 0xa220002f  sb          $zero, 0x2F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8B7Cu;
        goto label_2f8b7c;
    }
    ctx->pc = 0x2F8B74u;
    {
        const bool branch_taken_0x2f8b74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8b74) {
            ctx->pc = 0x2F8B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8B74u;
            // 0x2f8b78: 0xa220002f  sb          $zero, 0x2F($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8C00u;
            goto label_2f8c00;
        }
    }
    ctx->pc = 0x2F8B7Cu;
label_2f8b7c:
    // 0x2f8b7c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2f8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f8b80:
    // 0x2f8b80: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2f8b80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2f8b84:
    // 0x2f8b84: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2f8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f8b88:
    // 0x2f8b88: 0x40f809  jalr        $v0
label_2f8b8c:
    if (ctx->pc == 0x2F8B8Cu) {
        ctx->pc = 0x2F8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B88u;
        // 0x2f8b8c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8B90u;
        goto label_2f8b90;
    }
    ctx->pc = 0x2F8B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F8B90u);
        ctx->pc = 0x2F8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B88u;
        // 0x2f8b8c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8B88u, 0x2F8B90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F8B90u;
label_2f8b90:
    // 0x2f8b90: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f8b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8b94:
    // 0x2f8b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8b98:
    // 0x2f8b98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f8b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8b9c:
    // 0x2f8b9c: 0x240703e8  addiu       $a3, $zero, 0x3E8
    ctx->pc = 0x2f8b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2f8ba0:
    // 0x2f8ba0: 0xc0bfabe  jal         func_2FEAF8
label_2f8ba4:
    if (ctx->pc == 0x2F8BA4u) {
        ctx->pc = 0x2F8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BA0u;
        // 0x2f8ba4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8BA8u;
        goto label_2f8ba8;
    }
    ctx->pc = 0x2F8BA0u;
    SET_GPR_U32(ctx, 31, 0x2F8BA8u);
    ctx->pc = 0x2F8BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8BA0u;
    // 0x2f8ba4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAF8u, 0x2F8BA0u, 0x2F8BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8BA8u;
label_2f8ba8:
    // 0x2f8ba8: 0x10000015  b           . + 4 + (0x15 << 2)
label_2f8bac:
    if (ctx->pc == 0x2F8BACu) {
        ctx->pc = 0x2F8BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BA8u;
        // 0x2f8bac: 0xa220002f  sb          $zero, 0x2F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8BB0u;
        goto label_2f8bb0;
    }
    ctx->pc = 0x2F8BA8u;
    {
        const bool branch_taken_0x2f8ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BA8u;
        // 0x2f8bac: 0xa220002f  sb          $zero, 0x2F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ba8) {
            ctx->pc = 0x2F8C00u;
            goto label_2f8c00;
        }
    }
    ctx->pc = 0x2F8BB0u;
label_2f8bb0:
    // 0x2f8bb0: 0xc086618  jal         func_219860
label_2f8bb4:
    if (ctx->pc == 0x2F8BB4u) {
        ctx->pc = 0x2F8BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BB0u;
        // 0x2f8bb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8BB8u;
        goto label_2f8bb8;
    }
    ctx->pc = 0x2F8BB0u;
    SET_GPR_U32(ctx, 31, 0x2F8BB8u);
    ctx->pc = 0x2F8BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8BB0u;
    // 0x2f8bb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2F8BB0u, 0x2F8BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8BB8u;
label_2f8bb8:
    // 0x2f8bb8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f8bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8bbc:
    // 0x2f8bbc: 0x46000540  add.s       $f21, $f0, $f0
    ctx->pc = 0x2f8bbcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f8bc0:
    // 0x2f8bc0: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x2f8bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_2f8bc4:
    // 0x2f8bc4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2f8bc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2f8bc8:
    // 0x2f8bc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f8bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f8bcc:
    // 0x2f8bcc: 0xc480013c  lwc1        $f0, 0x13C($a0)
    ctx->pc = 0x2f8bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8bd0:
    // 0x2f8bd0: 0xc0a367c  jal         func_28D9F0
label_2f8bd4:
    if (ctx->pc == 0x2F8BD4u) {
        ctx->pc = 0x2F8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BD0u;
        // 0x2f8bd4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8BD8u;
        goto label_2f8bd8;
    }
    ctx->pc = 0x2F8BD0u;
    SET_GPR_U32(ctx, 31, 0x2F8BD8u);
    ctx->pc = 0x2F8BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8BD0u;
    // 0x2f8bd4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F8BD0u, 0x2F8BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8BD8u;
label_2f8bd8:
    // 0x2f8bd8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2f8bdc:
    if (ctx->pc == 0x2F8BDCu) {
        ctx->pc = 0x2F8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BD8u;
        // 0x2f8bdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8BE0u;
        goto label_2f8be0;
    }
    ctx->pc = 0x2F8BD8u;
    {
        const bool branch_taken_0x2f8bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BD8u;
        // 0x2f8bdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8bd8) {
            ctx->pc = 0x2F8BFCu;
            goto label_2f8bfc;
        }
    }
    ctx->pc = 0x2F8BE0u;
label_2f8be0:
    // 0x2f8be0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f8be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8be4:
    // 0x2f8be4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f8be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f8be8:
    // 0x2f8be8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2f8be8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2f8bec:
    // 0x2f8bec: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2f8becu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2f8bf0:
    // 0x2f8bf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f8bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8bf4:
    // 0x2f8bf4: 0xc0bf3d4  jal         func_2FCF50
label_2f8bf8:
    if (ctx->pc == 0x2F8BF8u) {
        ctx->pc = 0x2F8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BF4u;
        // 0x2f8bf8: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8BFCu;
        goto label_2f8bfc;
    }
    ctx->pc = 0x2F8BF4u;
    SET_GPR_U32(ctx, 31, 0x2F8BFCu);
    ctx->pc = 0x2F8BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8BF4u;
    // 0x2f8bf8: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2F8BF4u, 0x2F8BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8BFCu;
label_2f8bfc:
    // 0x2f8bfc: 0xa220002f  sb          $zero, 0x2F($s1)
    ctx->pc = 0x2f8bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
label_2f8c00:
    // 0x2f8c00: 0x26a4b880  addiu       $a0, $s5, -0x4780
    ctx->pc = 0x2f8c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948992));
label_2f8c04:
    // 0x2f8c04: 0xc0cd4ee  jal         func_3353B8
label_2f8c08:
    if (ctx->pc == 0x2F8C08u) {
        ctx->pc = 0x2F8C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C04u;
        // 0x2f8c08: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8C0Cu;
        goto label_2f8c0c;
    }
    ctx->pc = 0x2F8C04u;
    SET_GPR_U32(ctx, 31, 0x2F8C0Cu);
    ctx->pc = 0x2F8C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8C04u;
    // 0x2f8c08: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2F8C04u, 0x2F8C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8C0Cu;
label_2f8c0c:
    // 0x2f8c0c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_2f8c10:
    if (ctx->pc == 0x2F8C10u) {
        ctx->pc = 0x2F8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C0Cu;
        // 0x2f8c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8C14u;
        goto label_2f8c14;
    }
    ctx->pc = 0x2F8C0Cu;
    {
        const bool branch_taken_0x2f8c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C0Cu;
        // 0x2f8c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c0c) {
            ctx->pc = 0x2F8C58u;
            goto label_2f8c58;
        }
    }
    ctx->pc = 0x2F8C14u;
label_2f8c14:
    // 0x2f8c14: 0xc0a47b4  jal         func_291ED0
label_2f8c18:
    if (ctx->pc == 0x2F8C18u) {
        ctx->pc = 0x2F8C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C14u;
        // 0x2f8c18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8C1Cu;
        goto label_2f8c1c;
    }
    ctx->pc = 0x2F8C14u;
    SET_GPR_U32(ctx, 31, 0x2F8C1Cu);
    ctx->pc = 0x2F8C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8C14u;
    // 0x2f8c18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2F8C14u, 0x2F8C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8C1Cu;
label_2f8c1c:
    // 0x2f8c1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8c20:
    // 0x2f8c20: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_2f8c24:
    if (ctx->pc == 0x2F8C24u) {
        ctx->pc = 0x2F8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C20u;
        // 0x2f8c24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8C28u;
        goto label_2f8c28;
    }
    ctx->pc = 0x2F8C20u;
    {
        const bool branch_taken_0x2f8c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C20u;
        // 0x2f8c24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c20) {
            ctx->pc = 0x2F8C58u;
            goto label_2f8c58;
        }
    }
    ctx->pc = 0x2F8C28u;
label_2f8c28:
    // 0x2f8c28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f8c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f8c2c:
    // 0x2f8c2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f8c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f8c30:
    // 0x2f8c30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f8c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f8c34:
    // 0x2f8c34: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2f8c34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2f8c38:
    // 0x2f8c38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f8c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8c3c:
    // 0x2f8c3c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2f8c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2f8c40:
    // 0x2f8c40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f8c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8c44:
    // 0x2f8c44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f8c44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8c48:
    // 0x2f8c48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f8c48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8c4c:
    // 0x2f8c4c: 0xc088178  jal         func_2205E0
label_2f8c50:
    if (ctx->pc == 0x2F8C50u) {
        ctx->pc = 0x2F8C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C4Cu;
        // 0x2f8c50: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8C54u;
        goto label_2f8c54;
    }
    ctx->pc = 0x2F8C4Cu;
    SET_GPR_U32(ctx, 31, 0x2F8C54u);
    ctx->pc = 0x2F8C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8C4Cu;
    // 0x2f8c50: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2F8C4Cu, 0x2F8C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8C54u;
label_2f8c54:
    // 0x2f8c54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f8c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8c58:
    // 0x2f8c58: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2f8c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f8c5c:
    // 0x2f8c5c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2f8c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2f8c60:
    // 0x2f8c60: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2f8c60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f8c64:
    // 0x2f8c64: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2f8c64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f8c68:
    // 0x2f8c68: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2f8c68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f8c6c:
    // 0x2f8c6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f8c6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f8c70:
    // 0x2f8c70: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2f8c70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f8c74:
    // 0x2f8c74: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2f8c74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f8c78:
    // 0x2f8c78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f8c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f8c7c:
    // 0x2f8c7c: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x2f8c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2f8c80:
    // 0x2f8c80: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2f8c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f8c84:
    // 0x2f8c84: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2f8c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f8c88:
    // 0x2f8c88: 0x3e00008  jr          $ra
label_2f8c8c:
    if (ctx->pc == 0x2F8C8Cu) {
        ctx->pc = 0x2F8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C88u;
        // 0x2f8c8c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8C90u;
        goto label_fallthrough_0x2f8c88;
    }
    ctx->pc = 0x2F8C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C88u;
        // 0x2f8c8c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f8c88:
    ctx->pc = 0x2F8C90u;
}
