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

// Function: sub_002A83F8
// Address: 0x2a83f8 - 0x2a8e90
void sub_002A83F8_0x2a83f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A83F8_0x2a83f8");
#endif

    switch (ctx->pc) {
        case 0x2a83f8u: goto label_2a83f8;
        case 0x2a83fcu: goto label_2a83fc;
        case 0x2a8400u: goto label_2a8400;
        case 0x2a8404u: goto label_2a8404;
        case 0x2a8408u: goto label_2a8408;
        case 0x2a840cu: goto label_2a840c;
        case 0x2a8410u: goto label_2a8410;
        case 0x2a8414u: goto label_2a8414;
        case 0x2a8418u: goto label_2a8418;
        case 0x2a841cu: goto label_2a841c;
        case 0x2a8420u: goto label_2a8420;
        case 0x2a8424u: goto label_2a8424;
        case 0x2a8428u: goto label_2a8428;
        case 0x2a842cu: goto label_2a842c;
        case 0x2a8430u: goto label_2a8430;
        case 0x2a8434u: goto label_2a8434;
        case 0x2a8438u: goto label_2a8438;
        case 0x2a843cu: goto label_2a843c;
        case 0x2a8440u: goto label_2a8440;
        case 0x2a8444u: goto label_2a8444;
        case 0x2a8448u: goto label_2a8448;
        case 0x2a844cu: goto label_2a844c;
        case 0x2a8450u: goto label_2a8450;
        case 0x2a8454u: goto label_2a8454;
        case 0x2a8458u: goto label_2a8458;
        case 0x2a845cu: goto label_2a845c;
        case 0x2a8460u: goto label_2a8460;
        case 0x2a8464u: goto label_2a8464;
        case 0x2a8468u: goto label_2a8468;
        case 0x2a846cu: goto label_2a846c;
        case 0x2a8470u: goto label_2a8470;
        case 0x2a8474u: goto label_2a8474;
        case 0x2a8478u: goto label_2a8478;
        case 0x2a847cu: goto label_2a847c;
        case 0x2a8480u: goto label_2a8480;
        case 0x2a8484u: goto label_2a8484;
        case 0x2a8488u: goto label_2a8488;
        case 0x2a848cu: goto label_2a848c;
        case 0x2a8490u: goto label_2a8490;
        case 0x2a8494u: goto label_2a8494;
        case 0x2a8498u: goto label_2a8498;
        case 0x2a849cu: goto label_2a849c;
        case 0x2a84a0u: goto label_2a84a0;
        case 0x2a84a4u: goto label_2a84a4;
        case 0x2a84a8u: goto label_2a84a8;
        case 0x2a84acu: goto label_2a84ac;
        case 0x2a84b0u: goto label_2a84b0;
        case 0x2a84b4u: goto label_2a84b4;
        case 0x2a84b8u: goto label_2a84b8;
        case 0x2a84bcu: goto label_2a84bc;
        case 0x2a84c0u: goto label_2a84c0;
        case 0x2a84c4u: goto label_2a84c4;
        case 0x2a84c8u: goto label_2a84c8;
        case 0x2a84ccu: goto label_2a84cc;
        case 0x2a84d0u: goto label_2a84d0;
        case 0x2a84d4u: goto label_2a84d4;
        case 0x2a84d8u: goto label_2a84d8;
        case 0x2a84dcu: goto label_2a84dc;
        case 0x2a84e0u: goto label_2a84e0;
        case 0x2a84e4u: goto label_2a84e4;
        case 0x2a84e8u: goto label_2a84e8;
        case 0x2a84ecu: goto label_2a84ec;
        case 0x2a84f0u: goto label_2a84f0;
        case 0x2a84f4u: goto label_2a84f4;
        case 0x2a84f8u: goto label_2a84f8;
        case 0x2a84fcu: goto label_2a84fc;
        case 0x2a8500u: goto label_2a8500;
        case 0x2a8504u: goto label_2a8504;
        case 0x2a8508u: goto label_2a8508;
        case 0x2a850cu: goto label_2a850c;
        case 0x2a8510u: goto label_2a8510;
        case 0x2a8514u: goto label_2a8514;
        case 0x2a8518u: goto label_2a8518;
        case 0x2a851cu: goto label_2a851c;
        case 0x2a8520u: goto label_2a8520;
        case 0x2a8524u: goto label_2a8524;
        case 0x2a8528u: goto label_2a8528;
        case 0x2a852cu: goto label_2a852c;
        case 0x2a8530u: goto label_2a8530;
        case 0x2a8534u: goto label_2a8534;
        case 0x2a8538u: goto label_2a8538;
        case 0x2a853cu: goto label_2a853c;
        case 0x2a8540u: goto label_2a8540;
        case 0x2a8544u: goto label_2a8544;
        case 0x2a8548u: goto label_2a8548;
        case 0x2a854cu: goto label_2a854c;
        case 0x2a8550u: goto label_2a8550;
        case 0x2a8554u: goto label_2a8554;
        case 0x2a8558u: goto label_2a8558;
        case 0x2a855cu: goto label_2a855c;
        case 0x2a8560u: goto label_2a8560;
        case 0x2a8564u: goto label_2a8564;
        case 0x2a8568u: goto label_2a8568;
        case 0x2a856cu: goto label_2a856c;
        case 0x2a8570u: goto label_2a8570;
        case 0x2a8574u: goto label_2a8574;
        case 0x2a8578u: goto label_2a8578;
        case 0x2a857cu: goto label_2a857c;
        case 0x2a8580u: goto label_2a8580;
        case 0x2a8584u: goto label_2a8584;
        case 0x2a8588u: goto label_2a8588;
        case 0x2a858cu: goto label_2a858c;
        case 0x2a8590u: goto label_2a8590;
        case 0x2a8594u: goto label_2a8594;
        case 0x2a8598u: goto label_2a8598;
        case 0x2a859cu: goto label_2a859c;
        case 0x2a85a0u: goto label_2a85a0;
        case 0x2a85a4u: goto label_2a85a4;
        case 0x2a85a8u: goto label_2a85a8;
        case 0x2a85acu: goto label_2a85ac;
        case 0x2a85b0u: goto label_2a85b0;
        case 0x2a85b4u: goto label_2a85b4;
        case 0x2a85b8u: goto label_2a85b8;
        case 0x2a85bcu: goto label_2a85bc;
        case 0x2a85c0u: goto label_2a85c0;
        case 0x2a85c4u: goto label_2a85c4;
        case 0x2a85c8u: goto label_2a85c8;
        case 0x2a85ccu: goto label_2a85cc;
        case 0x2a85d0u: goto label_2a85d0;
        case 0x2a85d4u: goto label_2a85d4;
        case 0x2a85d8u: goto label_2a85d8;
        case 0x2a85dcu: goto label_2a85dc;
        case 0x2a85e0u: goto label_2a85e0;
        case 0x2a85e4u: goto label_2a85e4;
        case 0x2a85e8u: goto label_2a85e8;
        case 0x2a85ecu: goto label_2a85ec;
        case 0x2a85f0u: goto label_2a85f0;
        case 0x2a85f4u: goto label_2a85f4;
        case 0x2a85f8u: goto label_2a85f8;
        case 0x2a85fcu: goto label_2a85fc;
        case 0x2a8600u: goto label_2a8600;
        case 0x2a8604u: goto label_2a8604;
        case 0x2a8608u: goto label_2a8608;
        case 0x2a860cu: goto label_2a860c;
        case 0x2a8610u: goto label_2a8610;
        case 0x2a8614u: goto label_2a8614;
        case 0x2a8618u: goto label_2a8618;
        case 0x2a861cu: goto label_2a861c;
        case 0x2a8620u: goto label_2a8620;
        case 0x2a8624u: goto label_2a8624;
        case 0x2a8628u: goto label_2a8628;
        case 0x2a862cu: goto label_2a862c;
        case 0x2a8630u: goto label_2a8630;
        case 0x2a8634u: goto label_2a8634;
        case 0x2a8638u: goto label_2a8638;
        case 0x2a863cu: goto label_2a863c;
        case 0x2a8640u: goto label_2a8640;
        case 0x2a8644u: goto label_2a8644;
        case 0x2a8648u: goto label_2a8648;
        case 0x2a864cu: goto label_2a864c;
        case 0x2a8650u: goto label_2a8650;
        case 0x2a8654u: goto label_2a8654;
        case 0x2a8658u: goto label_2a8658;
        case 0x2a865cu: goto label_2a865c;
        case 0x2a8660u: goto label_2a8660;
        case 0x2a8664u: goto label_2a8664;
        case 0x2a8668u: goto label_2a8668;
        case 0x2a866cu: goto label_2a866c;
        case 0x2a8670u: goto label_2a8670;
        case 0x2a8674u: goto label_2a8674;
        case 0x2a8678u: goto label_2a8678;
        case 0x2a867cu: goto label_2a867c;
        case 0x2a8680u: goto label_2a8680;
        case 0x2a8684u: goto label_2a8684;
        case 0x2a8688u: goto label_2a8688;
        case 0x2a868cu: goto label_2a868c;
        case 0x2a8690u: goto label_2a8690;
        case 0x2a8694u: goto label_2a8694;
        case 0x2a8698u: goto label_2a8698;
        case 0x2a869cu: goto label_2a869c;
        case 0x2a86a0u: goto label_2a86a0;
        case 0x2a86a4u: goto label_2a86a4;
        case 0x2a86a8u: goto label_2a86a8;
        case 0x2a86acu: goto label_2a86ac;
        case 0x2a86b0u: goto label_2a86b0;
        case 0x2a86b4u: goto label_2a86b4;
        case 0x2a86b8u: goto label_2a86b8;
        case 0x2a86bcu: goto label_2a86bc;
        case 0x2a86c0u: goto label_2a86c0;
        case 0x2a86c4u: goto label_2a86c4;
        case 0x2a86c8u: goto label_2a86c8;
        case 0x2a86ccu: goto label_2a86cc;
        case 0x2a86d0u: goto label_2a86d0;
        case 0x2a86d4u: goto label_2a86d4;
        case 0x2a86d8u: goto label_2a86d8;
        case 0x2a86dcu: goto label_2a86dc;
        case 0x2a86e0u: goto label_2a86e0;
        case 0x2a86e4u: goto label_2a86e4;
        case 0x2a86e8u: goto label_2a86e8;
        case 0x2a86ecu: goto label_2a86ec;
        case 0x2a86f0u: goto label_2a86f0;
        case 0x2a86f4u: goto label_2a86f4;
        case 0x2a86f8u: goto label_2a86f8;
        case 0x2a86fcu: goto label_2a86fc;
        case 0x2a8700u: goto label_2a8700;
        case 0x2a8704u: goto label_2a8704;
        case 0x2a8708u: goto label_2a8708;
        case 0x2a870cu: goto label_2a870c;
        case 0x2a8710u: goto label_2a8710;
        case 0x2a8714u: goto label_2a8714;
        case 0x2a8718u: goto label_2a8718;
        case 0x2a871cu: goto label_2a871c;
        case 0x2a8720u: goto label_2a8720;
        case 0x2a8724u: goto label_2a8724;
        case 0x2a8728u: goto label_2a8728;
        case 0x2a872cu: goto label_2a872c;
        case 0x2a8730u: goto label_2a8730;
        case 0x2a8734u: goto label_2a8734;
        case 0x2a8738u: goto label_2a8738;
        case 0x2a873cu: goto label_2a873c;
        case 0x2a8740u: goto label_2a8740;
        case 0x2a8744u: goto label_2a8744;
        case 0x2a8748u: goto label_2a8748;
        case 0x2a874cu: goto label_2a874c;
        case 0x2a8750u: goto label_2a8750;
        case 0x2a8754u: goto label_2a8754;
        case 0x2a8758u: goto label_2a8758;
        case 0x2a875cu: goto label_2a875c;
        case 0x2a8760u: goto label_2a8760;
        case 0x2a8764u: goto label_2a8764;
        case 0x2a8768u: goto label_2a8768;
        case 0x2a876cu: goto label_2a876c;
        case 0x2a8770u: goto label_2a8770;
        case 0x2a8774u: goto label_2a8774;
        case 0x2a8778u: goto label_2a8778;
        case 0x2a877cu: goto label_2a877c;
        case 0x2a8780u: goto label_2a8780;
        case 0x2a8784u: goto label_2a8784;
        case 0x2a8788u: goto label_2a8788;
        case 0x2a878cu: goto label_2a878c;
        case 0x2a8790u: goto label_2a8790;
        case 0x2a8794u: goto label_2a8794;
        case 0x2a8798u: goto label_2a8798;
        case 0x2a879cu: goto label_2a879c;
        case 0x2a87a0u: goto label_2a87a0;
        case 0x2a87a4u: goto label_2a87a4;
        case 0x2a87a8u: goto label_2a87a8;
        case 0x2a87acu: goto label_2a87ac;
        case 0x2a87b0u: goto label_2a87b0;
        case 0x2a87b4u: goto label_2a87b4;
        case 0x2a87b8u: goto label_2a87b8;
        case 0x2a87bcu: goto label_2a87bc;
        case 0x2a87c0u: goto label_2a87c0;
        case 0x2a87c4u: goto label_2a87c4;
        case 0x2a87c8u: goto label_2a87c8;
        case 0x2a87ccu: goto label_2a87cc;
        case 0x2a87d0u: goto label_2a87d0;
        case 0x2a87d4u: goto label_2a87d4;
        case 0x2a87d8u: goto label_2a87d8;
        case 0x2a87dcu: goto label_2a87dc;
        case 0x2a87e0u: goto label_2a87e0;
        case 0x2a87e4u: goto label_2a87e4;
        case 0x2a87e8u: goto label_2a87e8;
        case 0x2a87ecu: goto label_2a87ec;
        case 0x2a87f0u: goto label_2a87f0;
        case 0x2a87f4u: goto label_2a87f4;
        case 0x2a87f8u: goto label_2a87f8;
        case 0x2a87fcu: goto label_2a87fc;
        case 0x2a8800u: goto label_2a8800;
        case 0x2a8804u: goto label_2a8804;
        case 0x2a8808u: goto label_2a8808;
        case 0x2a880cu: goto label_2a880c;
        case 0x2a8810u: goto label_2a8810;
        case 0x2a8814u: goto label_2a8814;
        case 0x2a8818u: goto label_2a8818;
        case 0x2a881cu: goto label_2a881c;
        case 0x2a8820u: goto label_2a8820;
        case 0x2a8824u: goto label_2a8824;
        case 0x2a8828u: goto label_2a8828;
        case 0x2a882cu: goto label_2a882c;
        case 0x2a8830u: goto label_2a8830;
        case 0x2a8834u: goto label_2a8834;
        case 0x2a8838u: goto label_2a8838;
        case 0x2a883cu: goto label_2a883c;
        case 0x2a8840u: goto label_2a8840;
        case 0x2a8844u: goto label_2a8844;
        case 0x2a8848u: goto label_2a8848;
        case 0x2a884cu: goto label_2a884c;
        case 0x2a8850u: goto label_2a8850;
        case 0x2a8854u: goto label_2a8854;
        case 0x2a8858u: goto label_2a8858;
        case 0x2a885cu: goto label_2a885c;
        case 0x2a8860u: goto label_2a8860;
        case 0x2a8864u: goto label_2a8864;
        case 0x2a8868u: goto label_2a8868;
        case 0x2a886cu: goto label_2a886c;
        case 0x2a8870u: goto label_2a8870;
        case 0x2a8874u: goto label_2a8874;
        case 0x2a8878u: goto label_2a8878;
        case 0x2a887cu: goto label_2a887c;
        case 0x2a8880u: goto label_2a8880;
        case 0x2a8884u: goto label_2a8884;
        case 0x2a8888u: goto label_2a8888;
        case 0x2a888cu: goto label_2a888c;
        case 0x2a8890u: goto label_2a8890;
        case 0x2a8894u: goto label_2a8894;
        case 0x2a8898u: goto label_2a8898;
        case 0x2a889cu: goto label_2a889c;
        case 0x2a88a0u: goto label_2a88a0;
        case 0x2a88a4u: goto label_2a88a4;
        case 0x2a88a8u: goto label_2a88a8;
        case 0x2a88acu: goto label_2a88ac;
        case 0x2a88b0u: goto label_2a88b0;
        case 0x2a88b4u: goto label_2a88b4;
        case 0x2a88b8u: goto label_2a88b8;
        case 0x2a88bcu: goto label_2a88bc;
        case 0x2a88c0u: goto label_2a88c0;
        case 0x2a88c4u: goto label_2a88c4;
        case 0x2a88c8u: goto label_2a88c8;
        case 0x2a88ccu: goto label_2a88cc;
        case 0x2a88d0u: goto label_2a88d0;
        case 0x2a88d4u: goto label_2a88d4;
        case 0x2a88d8u: goto label_2a88d8;
        case 0x2a88dcu: goto label_2a88dc;
        case 0x2a88e0u: goto label_2a88e0;
        case 0x2a88e4u: goto label_2a88e4;
        case 0x2a88e8u: goto label_2a88e8;
        case 0x2a88ecu: goto label_2a88ec;
        case 0x2a88f0u: goto label_2a88f0;
        case 0x2a88f4u: goto label_2a88f4;
        case 0x2a88f8u: goto label_2a88f8;
        case 0x2a88fcu: goto label_2a88fc;
        case 0x2a8900u: goto label_2a8900;
        case 0x2a8904u: goto label_2a8904;
        case 0x2a8908u: goto label_2a8908;
        case 0x2a890cu: goto label_2a890c;
        case 0x2a8910u: goto label_2a8910;
        case 0x2a8914u: goto label_2a8914;
        case 0x2a8918u: goto label_2a8918;
        case 0x2a891cu: goto label_2a891c;
        case 0x2a8920u: goto label_2a8920;
        case 0x2a8924u: goto label_2a8924;
        case 0x2a8928u: goto label_2a8928;
        case 0x2a892cu: goto label_2a892c;
        case 0x2a8930u: goto label_2a8930;
        case 0x2a8934u: goto label_2a8934;
        case 0x2a8938u: goto label_2a8938;
        case 0x2a893cu: goto label_2a893c;
        case 0x2a8940u: goto label_2a8940;
        case 0x2a8944u: goto label_2a8944;
        case 0x2a8948u: goto label_2a8948;
        case 0x2a894cu: goto label_2a894c;
        case 0x2a8950u: goto label_2a8950;
        case 0x2a8954u: goto label_2a8954;
        case 0x2a8958u: goto label_2a8958;
        case 0x2a895cu: goto label_2a895c;
        case 0x2a8960u: goto label_2a8960;
        case 0x2a8964u: goto label_2a8964;
        case 0x2a8968u: goto label_2a8968;
        case 0x2a896cu: goto label_2a896c;
        case 0x2a8970u: goto label_2a8970;
        case 0x2a8974u: goto label_2a8974;
        case 0x2a8978u: goto label_2a8978;
        case 0x2a897cu: goto label_2a897c;
        case 0x2a8980u: goto label_2a8980;
        case 0x2a8984u: goto label_2a8984;
        case 0x2a8988u: goto label_2a8988;
        case 0x2a898cu: goto label_2a898c;
        case 0x2a8990u: goto label_2a8990;
        case 0x2a8994u: goto label_2a8994;
        case 0x2a8998u: goto label_2a8998;
        case 0x2a899cu: goto label_2a899c;
        case 0x2a89a0u: goto label_2a89a0;
        case 0x2a89a4u: goto label_2a89a4;
        case 0x2a89a8u: goto label_2a89a8;
        case 0x2a89acu: goto label_2a89ac;
        case 0x2a89b0u: goto label_2a89b0;
        case 0x2a89b4u: goto label_2a89b4;
        case 0x2a89b8u: goto label_2a89b8;
        case 0x2a89bcu: goto label_2a89bc;
        case 0x2a89c0u: goto label_2a89c0;
        case 0x2a89c4u: goto label_2a89c4;
        case 0x2a89c8u: goto label_2a89c8;
        case 0x2a89ccu: goto label_2a89cc;
        case 0x2a89d0u: goto label_2a89d0;
        case 0x2a89d4u: goto label_2a89d4;
        case 0x2a89d8u: goto label_2a89d8;
        case 0x2a89dcu: goto label_2a89dc;
        case 0x2a89e0u: goto label_2a89e0;
        case 0x2a89e4u: goto label_2a89e4;
        case 0x2a89e8u: goto label_2a89e8;
        case 0x2a89ecu: goto label_2a89ec;
        case 0x2a89f0u: goto label_2a89f0;
        case 0x2a89f4u: goto label_2a89f4;
        case 0x2a89f8u: goto label_2a89f8;
        case 0x2a89fcu: goto label_2a89fc;
        case 0x2a8a00u: goto label_2a8a00;
        case 0x2a8a04u: goto label_2a8a04;
        case 0x2a8a08u: goto label_2a8a08;
        case 0x2a8a0cu: goto label_2a8a0c;
        case 0x2a8a10u: goto label_2a8a10;
        case 0x2a8a14u: goto label_2a8a14;
        case 0x2a8a18u: goto label_2a8a18;
        case 0x2a8a1cu: goto label_2a8a1c;
        case 0x2a8a20u: goto label_2a8a20;
        case 0x2a8a24u: goto label_2a8a24;
        case 0x2a8a28u: goto label_2a8a28;
        case 0x2a8a2cu: goto label_2a8a2c;
        case 0x2a8a30u: goto label_2a8a30;
        case 0x2a8a34u: goto label_2a8a34;
        case 0x2a8a38u: goto label_2a8a38;
        case 0x2a8a3cu: goto label_2a8a3c;
        case 0x2a8a40u: goto label_2a8a40;
        case 0x2a8a44u: goto label_2a8a44;
        case 0x2a8a48u: goto label_2a8a48;
        case 0x2a8a4cu: goto label_2a8a4c;
        case 0x2a8a50u: goto label_2a8a50;
        case 0x2a8a54u: goto label_2a8a54;
        case 0x2a8a58u: goto label_2a8a58;
        case 0x2a8a5cu: goto label_2a8a5c;
        case 0x2a8a60u: goto label_2a8a60;
        case 0x2a8a64u: goto label_2a8a64;
        case 0x2a8a68u: goto label_2a8a68;
        case 0x2a8a6cu: goto label_2a8a6c;
        case 0x2a8a70u: goto label_2a8a70;
        case 0x2a8a74u: goto label_2a8a74;
        case 0x2a8a78u: goto label_2a8a78;
        case 0x2a8a7cu: goto label_2a8a7c;
        case 0x2a8a80u: goto label_2a8a80;
        case 0x2a8a84u: goto label_2a8a84;
        case 0x2a8a88u: goto label_2a8a88;
        case 0x2a8a8cu: goto label_2a8a8c;
        case 0x2a8a90u: goto label_2a8a90;
        case 0x2a8a94u: goto label_2a8a94;
        case 0x2a8a98u: goto label_2a8a98;
        case 0x2a8a9cu: goto label_2a8a9c;
        case 0x2a8aa0u: goto label_2a8aa0;
        case 0x2a8aa4u: goto label_2a8aa4;
        case 0x2a8aa8u: goto label_2a8aa8;
        case 0x2a8aacu: goto label_2a8aac;
        case 0x2a8ab0u: goto label_2a8ab0;
        case 0x2a8ab4u: goto label_2a8ab4;
        case 0x2a8ab8u: goto label_2a8ab8;
        case 0x2a8abcu: goto label_2a8abc;
        case 0x2a8ac0u: goto label_2a8ac0;
        case 0x2a8ac4u: goto label_2a8ac4;
        case 0x2a8ac8u: goto label_2a8ac8;
        case 0x2a8accu: goto label_2a8acc;
        case 0x2a8ad0u: goto label_2a8ad0;
        case 0x2a8ad4u: goto label_2a8ad4;
        case 0x2a8ad8u: goto label_2a8ad8;
        case 0x2a8adcu: goto label_2a8adc;
        case 0x2a8ae0u: goto label_2a8ae0;
        case 0x2a8ae4u: goto label_2a8ae4;
        case 0x2a8ae8u: goto label_2a8ae8;
        case 0x2a8aecu: goto label_2a8aec;
        case 0x2a8af0u: goto label_2a8af0;
        case 0x2a8af4u: goto label_2a8af4;
        case 0x2a8af8u: goto label_2a8af8;
        case 0x2a8afcu: goto label_2a8afc;
        case 0x2a8b00u: goto label_2a8b00;
        case 0x2a8b04u: goto label_2a8b04;
        case 0x2a8b08u: goto label_2a8b08;
        case 0x2a8b0cu: goto label_2a8b0c;
        case 0x2a8b10u: goto label_2a8b10;
        case 0x2a8b14u: goto label_2a8b14;
        case 0x2a8b18u: goto label_2a8b18;
        case 0x2a8b1cu: goto label_2a8b1c;
        case 0x2a8b20u: goto label_2a8b20;
        case 0x2a8b24u: goto label_2a8b24;
        case 0x2a8b28u: goto label_2a8b28;
        case 0x2a8b2cu: goto label_2a8b2c;
        case 0x2a8b30u: goto label_2a8b30;
        case 0x2a8b34u: goto label_2a8b34;
        case 0x2a8b38u: goto label_2a8b38;
        case 0x2a8b3cu: goto label_2a8b3c;
        case 0x2a8b40u: goto label_2a8b40;
        case 0x2a8b44u: goto label_2a8b44;
        case 0x2a8b48u: goto label_2a8b48;
        case 0x2a8b4cu: goto label_2a8b4c;
        case 0x2a8b50u: goto label_2a8b50;
        case 0x2a8b54u: goto label_2a8b54;
        case 0x2a8b58u: goto label_2a8b58;
        case 0x2a8b5cu: goto label_2a8b5c;
        case 0x2a8b60u: goto label_2a8b60;
        case 0x2a8b64u: goto label_2a8b64;
        case 0x2a8b68u: goto label_2a8b68;
        case 0x2a8b6cu: goto label_2a8b6c;
        case 0x2a8b70u: goto label_2a8b70;
        case 0x2a8b74u: goto label_2a8b74;
        case 0x2a8b78u: goto label_2a8b78;
        case 0x2a8b7cu: goto label_2a8b7c;
        case 0x2a8b80u: goto label_2a8b80;
        case 0x2a8b84u: goto label_2a8b84;
        case 0x2a8b88u: goto label_2a8b88;
        case 0x2a8b8cu: goto label_2a8b8c;
        case 0x2a8b90u: goto label_2a8b90;
        case 0x2a8b94u: goto label_2a8b94;
        case 0x2a8b98u: goto label_2a8b98;
        case 0x2a8b9cu: goto label_2a8b9c;
        case 0x2a8ba0u: goto label_2a8ba0;
        case 0x2a8ba4u: goto label_2a8ba4;
        case 0x2a8ba8u: goto label_2a8ba8;
        case 0x2a8bacu: goto label_2a8bac;
        case 0x2a8bb0u: goto label_2a8bb0;
        case 0x2a8bb4u: goto label_2a8bb4;
        case 0x2a8bb8u: goto label_2a8bb8;
        case 0x2a8bbcu: goto label_2a8bbc;
        case 0x2a8bc0u: goto label_2a8bc0;
        case 0x2a8bc4u: goto label_2a8bc4;
        case 0x2a8bc8u: goto label_2a8bc8;
        case 0x2a8bccu: goto label_2a8bcc;
        case 0x2a8bd0u: goto label_2a8bd0;
        case 0x2a8bd4u: goto label_2a8bd4;
        case 0x2a8bd8u: goto label_2a8bd8;
        case 0x2a8bdcu: goto label_2a8bdc;
        case 0x2a8be0u: goto label_2a8be0;
        case 0x2a8be4u: goto label_2a8be4;
        case 0x2a8be8u: goto label_2a8be8;
        case 0x2a8becu: goto label_2a8bec;
        case 0x2a8bf0u: goto label_2a8bf0;
        case 0x2a8bf4u: goto label_2a8bf4;
        case 0x2a8bf8u: goto label_2a8bf8;
        case 0x2a8bfcu: goto label_2a8bfc;
        case 0x2a8c00u: goto label_2a8c00;
        case 0x2a8c04u: goto label_2a8c04;
        case 0x2a8c08u: goto label_2a8c08;
        case 0x2a8c0cu: goto label_2a8c0c;
        case 0x2a8c10u: goto label_2a8c10;
        case 0x2a8c14u: goto label_2a8c14;
        case 0x2a8c18u: goto label_2a8c18;
        case 0x2a8c1cu: goto label_2a8c1c;
        case 0x2a8c20u: goto label_2a8c20;
        case 0x2a8c24u: goto label_2a8c24;
        case 0x2a8c28u: goto label_2a8c28;
        case 0x2a8c2cu: goto label_2a8c2c;
        case 0x2a8c30u: goto label_2a8c30;
        case 0x2a8c34u: goto label_2a8c34;
        case 0x2a8c38u: goto label_2a8c38;
        case 0x2a8c3cu: goto label_2a8c3c;
        case 0x2a8c40u: goto label_2a8c40;
        case 0x2a8c44u: goto label_2a8c44;
        case 0x2a8c48u: goto label_2a8c48;
        case 0x2a8c4cu: goto label_2a8c4c;
        case 0x2a8c50u: goto label_2a8c50;
        case 0x2a8c54u: goto label_2a8c54;
        case 0x2a8c58u: goto label_2a8c58;
        case 0x2a8c5cu: goto label_2a8c5c;
        case 0x2a8c60u: goto label_2a8c60;
        case 0x2a8c64u: goto label_2a8c64;
        case 0x2a8c68u: goto label_2a8c68;
        case 0x2a8c6cu: goto label_2a8c6c;
        case 0x2a8c70u: goto label_2a8c70;
        case 0x2a8c74u: goto label_2a8c74;
        case 0x2a8c78u: goto label_2a8c78;
        case 0x2a8c7cu: goto label_2a8c7c;
        case 0x2a8c80u: goto label_2a8c80;
        case 0x2a8c84u: goto label_2a8c84;
        case 0x2a8c88u: goto label_2a8c88;
        case 0x2a8c8cu: goto label_2a8c8c;
        case 0x2a8c90u: goto label_2a8c90;
        case 0x2a8c94u: goto label_2a8c94;
        case 0x2a8c98u: goto label_2a8c98;
        case 0x2a8c9cu: goto label_2a8c9c;
        case 0x2a8ca0u: goto label_2a8ca0;
        case 0x2a8ca4u: goto label_2a8ca4;
        case 0x2a8ca8u: goto label_2a8ca8;
        case 0x2a8cacu: goto label_2a8cac;
        case 0x2a8cb0u: goto label_2a8cb0;
        case 0x2a8cb4u: goto label_2a8cb4;
        case 0x2a8cb8u: goto label_2a8cb8;
        case 0x2a8cbcu: goto label_2a8cbc;
        case 0x2a8cc0u: goto label_2a8cc0;
        case 0x2a8cc4u: goto label_2a8cc4;
        case 0x2a8cc8u: goto label_2a8cc8;
        case 0x2a8cccu: goto label_2a8ccc;
        case 0x2a8cd0u: goto label_2a8cd0;
        case 0x2a8cd4u: goto label_2a8cd4;
        case 0x2a8cd8u: goto label_2a8cd8;
        case 0x2a8cdcu: goto label_2a8cdc;
        case 0x2a8ce0u: goto label_2a8ce0;
        case 0x2a8ce4u: goto label_2a8ce4;
        case 0x2a8ce8u: goto label_2a8ce8;
        case 0x2a8cecu: goto label_2a8cec;
        case 0x2a8cf0u: goto label_2a8cf0;
        case 0x2a8cf4u: goto label_2a8cf4;
        case 0x2a8cf8u: goto label_2a8cf8;
        case 0x2a8cfcu: goto label_2a8cfc;
        case 0x2a8d00u: goto label_2a8d00;
        case 0x2a8d04u: goto label_2a8d04;
        case 0x2a8d08u: goto label_2a8d08;
        case 0x2a8d0cu: goto label_2a8d0c;
        case 0x2a8d10u: goto label_2a8d10;
        case 0x2a8d14u: goto label_2a8d14;
        case 0x2a8d18u: goto label_2a8d18;
        case 0x2a8d1cu: goto label_2a8d1c;
        case 0x2a8d20u: goto label_2a8d20;
        case 0x2a8d24u: goto label_2a8d24;
        case 0x2a8d28u: goto label_2a8d28;
        case 0x2a8d2cu: goto label_2a8d2c;
        case 0x2a8d30u: goto label_2a8d30;
        case 0x2a8d34u: goto label_2a8d34;
        case 0x2a8d38u: goto label_2a8d38;
        case 0x2a8d3cu: goto label_2a8d3c;
        case 0x2a8d40u: goto label_2a8d40;
        case 0x2a8d44u: goto label_2a8d44;
        case 0x2a8d48u: goto label_2a8d48;
        case 0x2a8d4cu: goto label_2a8d4c;
        case 0x2a8d50u: goto label_2a8d50;
        case 0x2a8d54u: goto label_2a8d54;
        case 0x2a8d58u: goto label_2a8d58;
        case 0x2a8d5cu: goto label_2a8d5c;
        case 0x2a8d60u: goto label_2a8d60;
        case 0x2a8d64u: goto label_2a8d64;
        case 0x2a8d68u: goto label_2a8d68;
        case 0x2a8d6cu: goto label_2a8d6c;
        case 0x2a8d70u: goto label_2a8d70;
        case 0x2a8d74u: goto label_2a8d74;
        case 0x2a8d78u: goto label_2a8d78;
        case 0x2a8d7cu: goto label_2a8d7c;
        case 0x2a8d80u: goto label_2a8d80;
        case 0x2a8d84u: goto label_2a8d84;
        case 0x2a8d88u: goto label_2a8d88;
        case 0x2a8d8cu: goto label_2a8d8c;
        case 0x2a8d90u: goto label_2a8d90;
        case 0x2a8d94u: goto label_2a8d94;
        case 0x2a8d98u: goto label_2a8d98;
        case 0x2a8d9cu: goto label_2a8d9c;
        case 0x2a8da0u: goto label_2a8da0;
        case 0x2a8da4u: goto label_2a8da4;
        case 0x2a8da8u: goto label_2a8da8;
        case 0x2a8dacu: goto label_2a8dac;
        case 0x2a8db0u: goto label_2a8db0;
        case 0x2a8db4u: goto label_2a8db4;
        case 0x2a8db8u: goto label_2a8db8;
        case 0x2a8dbcu: goto label_2a8dbc;
        case 0x2a8dc0u: goto label_2a8dc0;
        case 0x2a8dc4u: goto label_2a8dc4;
        case 0x2a8dc8u: goto label_2a8dc8;
        case 0x2a8dccu: goto label_2a8dcc;
        case 0x2a8dd0u: goto label_2a8dd0;
        case 0x2a8dd4u: goto label_2a8dd4;
        case 0x2a8dd8u: goto label_2a8dd8;
        case 0x2a8ddcu: goto label_2a8ddc;
        case 0x2a8de0u: goto label_2a8de0;
        case 0x2a8de4u: goto label_2a8de4;
        case 0x2a8de8u: goto label_2a8de8;
        case 0x2a8decu: goto label_2a8dec;
        case 0x2a8df0u: goto label_2a8df0;
        case 0x2a8df4u: goto label_2a8df4;
        case 0x2a8df8u: goto label_2a8df8;
        case 0x2a8dfcu: goto label_2a8dfc;
        case 0x2a8e00u: goto label_2a8e00;
        case 0x2a8e04u: goto label_2a8e04;
        case 0x2a8e08u: goto label_2a8e08;
        case 0x2a8e0cu: goto label_2a8e0c;
        case 0x2a8e10u: goto label_2a8e10;
        case 0x2a8e14u: goto label_2a8e14;
        case 0x2a8e18u: goto label_2a8e18;
        case 0x2a8e1cu: goto label_2a8e1c;
        case 0x2a8e20u: goto label_2a8e20;
        case 0x2a8e24u: goto label_2a8e24;
        case 0x2a8e28u: goto label_2a8e28;
        case 0x2a8e2cu: goto label_2a8e2c;
        case 0x2a8e30u: goto label_2a8e30;
        case 0x2a8e34u: goto label_2a8e34;
        case 0x2a8e38u: goto label_2a8e38;
        case 0x2a8e3cu: goto label_2a8e3c;
        case 0x2a8e40u: goto label_2a8e40;
        case 0x2a8e44u: goto label_2a8e44;
        case 0x2a8e48u: goto label_2a8e48;
        case 0x2a8e4cu: goto label_2a8e4c;
        case 0x2a8e50u: goto label_2a8e50;
        case 0x2a8e54u: goto label_2a8e54;
        case 0x2a8e58u: goto label_2a8e58;
        case 0x2a8e5cu: goto label_2a8e5c;
        case 0x2a8e60u: goto label_2a8e60;
        case 0x2a8e64u: goto label_2a8e64;
        case 0x2a8e68u: goto label_2a8e68;
        case 0x2a8e6cu: goto label_2a8e6c;
        case 0x2a8e70u: goto label_2a8e70;
        case 0x2a8e74u: goto label_2a8e74;
        case 0x2a8e78u: goto label_2a8e78;
        case 0x2a8e7cu: goto label_2a8e7c;
        case 0x2a8e80u: goto label_2a8e80;
        case 0x2a8e84u: goto label_2a8e84;
        case 0x2a8e88u: goto label_2a8e88;
        case 0x2a8e8cu: goto label_2a8e8c;
        default: break;
    }

    ctx->pc = 0x2a83f8u;

label_2a83f8:
    // 0x2a83f8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2a83f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2a83fc:
    // 0x2a83fc: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2a83fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_2a8400:
    // 0x2a8400: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2a8400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_2a8404:
    // 0x2a8404: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2a8404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_2a8408:
    // 0x2a8408: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a8408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a840c:
    // 0x2a840c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2a840cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_2a8410:
    // 0x2a8410: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2a8410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a8414:
    // 0x2a8414: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2a8414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_2a8418:
    // 0x2a8418: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2a8418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2a841c:
    // 0x2a841c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2a841cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2a8420:
    // 0x2a8420: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2a8420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_2a8424:
    // 0x2a8424: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a8424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2a8428:
    // 0x2a8428: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2a8428u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2a842c:
    // 0x2a842c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2a842cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_2a8430:
    // 0x2a8430: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2a8430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_2a8434:
    // 0x2a8434: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2a8434u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a8438:
    // 0x2a8438: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x2a8438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2a843c:
    // 0x2a843c: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x2a843cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a8440:
    // 0x2a8440: 0xc0e409a  jal         func_390268
label_2a8444:
    if (ctx->pc == 0x2A8444u) {
        ctx->pc = 0x2A8444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8440u;
        // 0x2a8444: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8448u;
        goto label_2a8448;
    }
    ctx->pc = 0x2A8440u;
    SET_GPR_U32(ctx, 31, 0x2A8448u);
    ctx->pc = 0x2A8444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8440u;
    // 0x2a8444: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A8440u, 0x2A8448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8448u;
label_2a8448:
    // 0x2a8448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a844c:
    // 0x2a844c: 0xc0a34d6  jal         func_28D358
label_2a8450:
    if (ctx->pc == 0x2A8450u) {
        ctx->pc = 0x2A8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A844Cu;
        // 0x2a8450: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8454u;
        goto label_2a8454;
    }
    ctx->pc = 0x2A844Cu;
    SET_GPR_U32(ctx, 31, 0x2A8454u);
    ctx->pc = 0x2A8450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A844Cu;
    // 0x2a8450: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2A844Cu, 0x2A8454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8454u;
label_2a8454:
    // 0x2a8454: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a8454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8458:
    // 0x2a8458: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_2a845c:
    if (ctx->pc == 0x2A845Cu) {
        ctx->pc = 0x2A845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8458u;
        // 0x2a845c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8460u;
        goto label_2a8460;
    }
    ctx->pc = 0x2A8458u;
    {
        const bool branch_taken_0x2a8458 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8458) {
            ctx->pc = 0x2A845Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8458u;
            // 0x2a845c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A847Cu;
            goto label_2a847c;
        }
    }
    ctx->pc = 0x2A8460u;
label_2a8460:
    // 0x2a8460: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a8460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a8464:
    // 0x2a8464: 0xc0a3792  jal         func_28DE48
label_2a8468:
    if (ctx->pc == 0x2A8468u) {
        ctx->pc = 0x2A8468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8464u;
        // 0x2a8468: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A846Cu;
        goto label_2a846c;
    }
    ctx->pc = 0x2A8464u;
    SET_GPR_U32(ctx, 31, 0x2A846Cu);
    ctx->pc = 0x2A8468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8464u;
    // 0x2a8468: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2A8464u, 0x2A846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A846Cu;
label_2a846c:
    // 0x2a846c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a846cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a8470:
    // 0x2a8470: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a8470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a8474:
    // 0x2a8474: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2a8474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2a8478:
    // 0x2a8478: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a8478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a847c:
    // 0x2a847c: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2a847cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2a8480:
    // 0x2a8480: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_2a8484:
    if (ctx->pc == 0x2A8484u) {
        ctx->pc = 0x2A8484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8480u;
        // 0x2a8484: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8488u;
        goto label_2a8488;
    }
    ctx->pc = 0x2A8480u;
    {
        const bool branch_taken_0x2a8480 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A8484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8480u;
        // 0x2a8484: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8480) {
            ctx->pc = 0x2A84D8u;
            goto label_2a84d8;
        }
    }
    ctx->pc = 0x2A8488u;
label_2a8488:
    // 0x2a8488: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x2a8488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_2a848c:
    // 0x2a848c: 0x10a00272  beqz        $a1, . + 4 + (0x272 << 2)
label_2a8490:
    if (ctx->pc == 0x2A8490u) {
        ctx->pc = 0x2A8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A848Cu;
        // 0x2a8490: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8494u;
        goto label_2a8494;
    }
    ctx->pc = 0x2A848Cu;
    {
        const bool branch_taken_0x2a848c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A848Cu;
        // 0x2a8490: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a848c) {
            ctx->pc = 0x2A8E58u;
            goto label_2a8e58;
        }
    }
    ctx->pc = 0x2A8494u;
label_2a8494:
    // 0x2a8494: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2a8494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a8498:
    // 0x2a8498: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2a8498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a849c:
    // 0x2a849c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2a849cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a84a0:
    // 0x2a84a0: 0x1060026d  beqz        $v1, . + 4 + (0x26D << 2)
label_2a84a4:
    if (ctx->pc == 0x2A84A4u) {
        ctx->pc = 0x2A84A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84A0u;
        // 0x2a84a4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A84A8u;
        goto label_2a84a8;
    }
    ctx->pc = 0x2A84A0u;
    {
        const bool branch_taken_0x2a84a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A84A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84A0u;
        // 0x2a84a4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a84a0) {
            ctx->pc = 0x2A8E58u;
            goto label_2a8e58;
        }
    }
    ctx->pc = 0x2A84A8u;
label_2a84a8:
    // 0x2a84a8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2a84a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2a84ac:
    // 0x2a84ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a84acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a84b0:
    // 0x2a84b0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2a84b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a84b4:
    // 0x2a84b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a84b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a84b8:
    // 0x2a84b8: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x2a84b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2a84bc:
    // 0x2a84bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a84bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a84c0:
    // 0x2a84c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a84c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a84c4:
    // 0x2a84c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a84c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a84c8:
    // 0x2a84c8: 0xc088178  jal         func_2205E0
label_2a84cc:
    if (ctx->pc == 0x2A84CCu) {
        ctx->pc = 0x2A84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84C8u;
        // 0x2a84cc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A84D0u;
        goto label_2a84d0;
    }
    ctx->pc = 0x2A84C8u;
    SET_GPR_U32(ctx, 31, 0x2A84D0u);
    ctx->pc = 0x2A84CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A84C8u;
    // 0x2a84cc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2A84C8u, 0x2A84D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A84D0u;
label_2a84d0:
    // 0x2a84d0: 0x10000261  b           . + 4 + (0x261 << 2)
label_2a84d4:
    if (ctx->pc == 0x2A84D4u) {
        ctx->pc = 0x2A84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84D0u;
        // 0x2a84d4: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A84D8u;
        goto label_2a84d8;
    }
    ctx->pc = 0x2A84D0u;
    {
        const bool branch_taken_0x2a84d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84D0u;
        // 0x2a84d4: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a84d0) {
            ctx->pc = 0x2A8E58u;
            goto label_2a8e58;
        }
    }
    ctx->pc = 0x2A84D8u;
label_2a84d8:
    // 0x2a84d8: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2a84d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2a84dc:
    // 0x2a84dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a84e0:
    if (ctx->pc == 0x2A84E0u) {
        ctx->pc = 0x2A84E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84DCu;
        // 0x2a84e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A84E4u;
        goto label_2a84e4;
    }
    ctx->pc = 0x2A84DCu;
    {
        const bool branch_taken_0x2a84dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A84E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84DCu;
        // 0x2a84e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a84dc) {
            ctx->pc = 0x2A84F0u;
            goto label_2a84f0;
        }
    }
    ctx->pc = 0x2A84E4u;
label_2a84e4:
    // 0x2a84e4: 0xac600284  sw          $zero, 0x284($v1)
    ctx->pc = 0x2a84e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
label_2a84e8:
    // 0x2a84e8: 0xae42004c  sw          $v0, 0x4C($s2)
    ctx->pc = 0x2a84e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
label_2a84ec:
    // 0x2a84ec: 0xa2500051  sb          $s0, 0x51($s2)
    ctx->pc = 0x2a84ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 81), (uint8_t)GPR_U32(ctx, 16));
label_2a84f0:
    // 0x2a84f0: 0xc08a08a  jal         func_228228
label_2a84f4:
    if (ctx->pc == 0x2A84F4u) {
        ctx->pc = 0x2A84F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84F0u;
        // 0x2a84f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A84F8u;
        goto label_2a84f8;
    }
    ctx->pc = 0x2A84F0u;
    SET_GPR_U32(ctx, 31, 0x2A84F8u);
    ctx->pc = 0x2A84F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A84F0u;
    // 0x2a84f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2A84F0u, 0x2A84F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A84F8u;
label_2a84f8:
    // 0x2a84f8: 0x10500257  beq         $v0, $s0, . + 4 + (0x257 << 2)
label_2a84fc:
    if (ctx->pc == 0x2A84FCu) {
        ctx->pc = 0x2A84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84F8u;
        // 0x2a84fc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8500u;
        goto label_2a8500;
    }
    ctx->pc = 0x2A84F8u;
    {
        const bool branch_taken_0x2a84f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2A84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84F8u;
        // 0x2a84fc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a84f8) {
            ctx->pc = 0x2A8E58u;
            goto label_2a8e58;
        }
    }
    ctx->pc = 0x2A8500u;
label_2a8500:
    // 0x2a8500: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x2a8500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_2a8504:
    // 0x2a8504: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2a8504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2a8508:
    // 0x2a8508: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2a8508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a850c:
    // 0x2a850c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2a850cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2a8510:
    // 0x2a8510: 0x14400251  bnez        $v0, . + 4 + (0x251 << 2)
label_2a8514:
    if (ctx->pc == 0x2A8514u) {
        ctx->pc = 0x2A8514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8510u;
        // 0x2a8514: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8518u;
        goto label_2a8518;
    }
    ctx->pc = 0x2A8510u;
    {
        const bool branch_taken_0x2a8510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8510u;
        // 0x2a8514: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8510) {
            ctx->pc = 0x2A8E58u;
            goto label_2a8e58;
        }
    }
    ctx->pc = 0x2A8518u;
label_2a8518:
    // 0x2a8518: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x2a8518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2a851c:
    // 0x2a851c: 0x14a0002f  bnez        $a1, . + 4 + (0x2F << 2)
label_2a8520:
    if (ctx->pc == 0x2A8520u) {
        ctx->pc = 0x2A8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A851Cu;
        // 0x2a8520: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8524u;
        goto label_2a8524;
    }
    ctx->pc = 0x2A851Cu;
    {
        const bool branch_taken_0x2a851c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A851Cu;
        // 0x2a8520: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a851c) {
            ctx->pc = 0x2A85DCu;
            goto label_2a85dc;
        }
    }
    ctx->pc = 0x2A8524u;
label_2a8524:
    // 0x2a8524: 0x12200249  beqz        $s1, . + 4 + (0x249 << 2)
label_2a8528:
    if (ctx->pc == 0x2A8528u) {
        ctx->pc = 0x2A8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8524u;
        // 0x2a8528: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A852Cu;
        goto label_2a852c;
    }
    ctx->pc = 0x2A8524u;
    {
        const bool branch_taken_0x2a8524 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8524u;
        // 0x2a8528: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8524) {
            ctx->pc = 0x2A8E4Cu;
            goto label_2a8e4c;
        }
    }
    ctx->pc = 0x2A852Cu;
label_2a852c:
    // 0x2a852c: 0xc0a367c  jal         func_28D9F0
label_2a8530:
    if (ctx->pc == 0x2A8530u) {
        ctx->pc = 0x2A8530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A852Cu;
        // 0x2a8530: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8534u;
        goto label_2a8534;
    }
    ctx->pc = 0x2A852Cu;
    SET_GPR_U32(ctx, 31, 0x2A8534u);
    ctx->pc = 0x2A8530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A852Cu;
    // 0x2a8530: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A852Cu, 0x2A8534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8534u;
label_2a8534:
    // 0x2a8534: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8538:
    // 0x2a8538: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2a853c:
    if (ctx->pc == 0x2A853Cu) {
        ctx->pc = 0x2A853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8538u;
        // 0x2a853c: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8540u;
        goto label_2a8540;
    }
    ctx->pc = 0x2A8538u;
    {
        const bool branch_taken_0x2a8538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8538u;
        // 0x2a853c: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8538) {
            ctx->pc = 0x2A8564u;
            goto label_2a8564;
        }
    }
    ctx->pc = 0x2A8540u;
label_2a8540:
    // 0x2a8540: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x2a8540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2a8544:
    // 0x2a8544: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2a8544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_2a8548:
    // 0x2a8548: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a8548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a854c:
    // 0x2a854c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2a854cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2a8550:
    // 0x2a8550: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2a8550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2a8554:
    // 0x2a8554: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a8554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8558:
    // 0x2a8558: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2a8558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2a855c:
    // 0x2a855c: 0xc0bf800  jal         func_2FE000
label_2a8560:
    if (ctx->pc == 0x2A8560u) {
        ctx->pc = 0x2A8560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A855Cu;
        // 0x2a8560: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8564u;
        goto label_2a8564;
    }
    ctx->pc = 0x2A855Cu;
    SET_GPR_U32(ctx, 31, 0x2A8564u);
    ctx->pc = 0x2A8560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A855Cu;
    // 0x2a8560: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2A855Cu, 0x2A8564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8564u;
label_2a8564:
    // 0x2a8564: 0xc0a367c  jal         func_28D9F0
label_2a8568:
    if (ctx->pc == 0x2A8568u) {
        ctx->pc = 0x2A8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8564u;
        // 0x2a8568: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A856Cu;
        goto label_2a856c;
    }
    ctx->pc = 0x2A8564u;
    SET_GPR_U32(ctx, 31, 0x2A856Cu);
    ctx->pc = 0x2A8568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8564u;
    // 0x2a8568: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A8564u, 0x2A856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A856Cu;
label_2a856c:
    // 0x2a856c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2a8570:
    if (ctx->pc == 0x2A8570u) {
        ctx->pc = 0x2A8570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A856Cu;
        // 0x2a8570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8574u;
        goto label_2a8574;
    }
    ctx->pc = 0x2A856Cu;
    {
        const bool branch_taken_0x2a856c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A856Cu;
        // 0x2a8570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a856c) {
            ctx->pc = 0x2A8594u;
            goto label_2a8594;
        }
    }
    ctx->pc = 0x2A8574u;
label_2a8574:
    // 0x2a8574: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a8574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a8578:
    // 0x2a8578: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2a8578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2a857c:
    // 0x2a857c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a857cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a8580:
    // 0x2a8580: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a8580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8584:
    // 0x2a8584: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2a8584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2a8588:
    // 0x2a8588: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a8588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a858c:
    // 0x2a858c: 0xc0be8c0  jal         func_2FA300
label_2a8590:
    if (ctx->pc == 0x2A8590u) {
        ctx->pc = 0x2A8590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A858Cu;
        // 0x2a8590: 0x240801f4  addiu       $t0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8594u;
        goto label_2a8594;
    }
    ctx->pc = 0x2A858Cu;
    SET_GPR_U32(ctx, 31, 0x2A8594u);
    ctx->pc = 0x2A8590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A858Cu;
    // 0x2a8590: 0x240801f4  addiu       $t0, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2A858Cu, 0x2A8594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8594u;
label_2a8594:
    // 0x2a8594: 0xc0a367c  jal         func_28D9F0
label_2a8598:
    if (ctx->pc == 0x2A8598u) {
        ctx->pc = 0x2A8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8594u;
        // 0x2a8598: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A859Cu;
        goto label_2a859c;
    }
    ctx->pc = 0x2A8594u;
    SET_GPR_U32(ctx, 31, 0x2A859Cu);
    ctx->pc = 0x2A8598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8594u;
    // 0x2a8598: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A8594u, 0x2A859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A859Cu;
label_2a859c:
    // 0x2a859c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a85a0:
    if (ctx->pc == 0x2A85A0u) {
        ctx->pc = 0x2A85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A859Cu;
        // 0x2a85a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A85A4u;
        goto label_2a85a4;
    }
    ctx->pc = 0x2A859Cu;
    {
        const bool branch_taken_0x2a859c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A859Cu;
        // 0x2a85a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a859c) {
            ctx->pc = 0x2A85C0u;
            goto label_2a85c0;
        }
    }
    ctx->pc = 0x2A85A4u;
label_2a85a4:
    // 0x2a85a4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a85a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a85a8:
    // 0x2a85a8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2a85a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2a85ac:
    // 0x2a85ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a85acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a85b0:
    // 0x2a85b0: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2a85b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2a85b4:
    // 0x2a85b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a85b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a85b8:
    // 0x2a85b8: 0xc0bee1a  jal         func_2FB868
label_2a85bc:
    if (ctx->pc == 0x2A85BCu) {
        ctx->pc = 0x2A85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A85B8u;
        // 0x2a85bc: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A85C0u;
        goto label_2a85c0;
    }
    ctx->pc = 0x2A85B8u;
    SET_GPR_U32(ctx, 31, 0x2A85C0u);
    ctx->pc = 0x2A85BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A85B8u;
    // 0x2a85bc: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB868u, 0x2A85B8u, 0x2A85C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A85C0u;
label_2a85c0:
    // 0x2a85c0: 0x8ee4b734  lw          $a0, -0x48CC($s7)
    ctx->pc = 0x2a85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
label_2a85c4:
    // 0x2a85c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a85c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a85c8:
    // 0x2a85c8: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2a85c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a85cc:
    // 0x2a85cc: 0xae50004c  sw          $s0, 0x4C($s2)
    ctx->pc = 0x2a85ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 16));
label_2a85d0:
    // 0x2a85d0: 0x246300c8  addiu       $v1, $v1, 0xC8
    ctx->pc = 0x2a85d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
label_2a85d4:
    // 0x2a85d4: 0x10000221  b           . + 4 + (0x221 << 2)
label_2a85d8:
    if (ctx->pc == 0x2A85D8u) {
        ctx->pc = 0x2A85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A85D4u;
        // 0x2a85d8: 0xae430044  sw          $v1, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A85DCu;
        goto label_2a85dc;
    }
    ctx->pc = 0x2A85D4u;
    {
        const bool branch_taken_0x2a85d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A85D4u;
        // 0x2a85d8: 0xae430044  sw          $v1, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a85d4) {
            ctx->pc = 0x2A8E5Cu;
            goto label_2a8e5c;
        }
    }
    ctx->pc = 0x2A85DCu;
label_2a85dc:
    // 0x2a85dc: 0x26620090  addiu       $v0, $s3, 0x90
    ctx->pc = 0x2a85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2a85e0:
    // 0x2a85e0: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2a85e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2a85e4:
    // 0x2a85e4: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x2a85e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2a85e8:
    // 0x2a85e8: 0x24964b00  addiu       $s6, $a0, 0x4B00
    ctx->pc = 0x2a85e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2a85ec:
    // 0x2a85ec: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2a85ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a85f0:
    // 0x2a85f0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2a85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2a85f4:
    // 0x2a85f4: 0x14b0002f  bne         $a1, $s0, . + 4 + (0x2F << 2)
label_2a85f8:
    if (ctx->pc == 0x2A85F8u) {
        ctx->pc = 0x2A85F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A85F4u;
        // 0x2a85f8: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A85FCu;
        goto label_2a85fc;
    }
    ctx->pc = 0x2A85F4u;
    {
        const bool branch_taken_0x2a85f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x2A85F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A85F4u;
        // 0x2a85f8: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a85f4) {
            ctx->pc = 0x2A86B4u;
            goto label_2a86b4;
        }
    }
    ctx->pc = 0x2A85FCu;
label_2a85fc:
    // 0x2a85fc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a85fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a8600:
    // 0x2a8600: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a8600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a8604:
    // 0x2a8604: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a8604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a8608:
    // 0x2a8608: 0x40f809  jalr        $v0
label_2a860c:
    if (ctx->pc == 0x2A860Cu) {
        ctx->pc = 0x2A860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8608u;
        // 0x2a860c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8610u;
        goto label_2a8610;
    }
    ctx->pc = 0x2A8608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A8610u);
        ctx->pc = 0x2A860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8608u;
        // 0x2a860c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8608u, 0x2A8610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A8610u;
label_2a8610:
    // 0x2a8610: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a8610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8614:
    // 0x2a8614: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x2a8614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_2a8618:
    // 0x2a8618: 0x8e620360  lw          $v0, 0x360($s3)
    ctx->pc = 0x2a8618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 864)));
label_2a861c:
    // 0x2a861c: 0xc0e4060  jal         func_390180
label_2a8620:
    if (ctx->pc == 0x2A8620u) {
        ctx->pc = 0x2A8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A861Cu;
        // 0x2a8620: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8624u;
        goto label_2a8624;
    }
    ctx->pc = 0x2A861Cu;
    SET_GPR_U32(ctx, 31, 0x2A8624u);
    ctx->pc = 0x2A8620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A861Cu;
    // 0x2a8620: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2A861Cu, 0x2A8624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8624u;
label_2a8624:
    // 0x2a8624: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_2a8628:
    if (ctx->pc == 0x2A8628u) {
        ctx->pc = 0x2A8628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8624u;
        // 0x2a8628: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A862Cu;
        goto label_2a862c;
    }
    ctx->pc = 0x2A8624u;
    {
        const bool branch_taken_0x2a8624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8624) {
            ctx->pc = 0x2A8628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8624u;
            // 0x2a8628: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8694u;
            goto label_2a8694;
        }
    }
    ctx->pc = 0x2A862Cu;
label_2a862c:
    // 0x2a862c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2a862cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2a8630:
    // 0x2a8630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a8634:
    // 0x2a8634: 0x24a536c8  addiu       $a1, $a1, 0x36C8
    ctx->pc = 0x2a8634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
label_2a8638:
    // 0x2a8638: 0xc08e2a2  jal         func_238A88
label_2a863c:
    if (ctx->pc == 0x2A863Cu) {
        ctx->pc = 0x2A863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8638u;
        // 0x2a863c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8640u;
        goto label_2a8640;
    }
    ctx->pc = 0x2A8638u;
    SET_GPR_U32(ctx, 31, 0x2A8640u);
    ctx->pc = 0x2A863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8638u;
    // 0x2a863c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A88u, 0x2A8638u, 0x2A8640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8640u;
label_2a8640:
    // 0x2a8640: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2a8640u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_2a8644:
    // 0x2a8644: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2a8644u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_2a8648:
    // 0x2a8648: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x2a8648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_2a864c:
    // 0x2a864c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a864cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a8650:
    // 0x2a8650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8654:
    // 0x2a8654: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2a8654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2a8658:
    // 0x2a8658: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2a8658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a865c:
    // 0x2a865c: 0xc06ca64  jal         func_1B2990
label_2a8660:
    if (ctx->pc == 0x2A8660u) {
        ctx->pc = 0x2A8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A865Cu;
        // 0x2a8660: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8664u;
        goto label_2a8664;
    }
    ctx->pc = 0x2A865Cu;
    SET_GPR_U32(ctx, 31, 0x2A8664u);
    ctx->pc = 0x2A8660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A865Cu;
    // 0x2a8660: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2990u, 0x2A865Cu, 0x2A8664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8664u;
label_2a8664:
    // 0x2a8664: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2a8664u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_2a8668:
    // 0x2a8668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a866c:
    // 0x2a866c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a866cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a8670:
    // 0x2a8670: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2a8670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2a8674:
    // 0x2a8674: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2a8674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a8678:
    // 0x2a8678: 0xc06ca64  jal         func_1B2990
label_2a867c:
    if (ctx->pc == 0x2A867Cu) {
        ctx->pc = 0x2A867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8678u;
        // 0x2a867c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8680u;
        goto label_2a8680;
    }
    ctx->pc = 0x2A8678u;
    SET_GPR_U32(ctx, 31, 0x2A8680u);
    ctx->pc = 0x2A867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8678u;
    // 0x2a867c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2990u, 0x2A8678u, 0x2A8680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8680u;
label_2a8680:
    // 0x2a8680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8684:
    // 0x2a8684: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a8684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a8688:
    // 0x2a8688: 0xc06ccb8  jal         func_1B32E0
label_2a868c:
    if (ctx->pc == 0x2A868Cu) {
        ctx->pc = 0x2A868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8688u;
        // 0x2a868c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8690u;
        goto label_2a8690;
    }
    ctx->pc = 0x2A8688u;
    SET_GPR_U32(ctx, 31, 0x2A8690u);
    ctx->pc = 0x2A868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8688u;
    // 0x2a868c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B32E0u, 0x2A8688u, 0x2A8690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8690u;
label_2a8690:
    // 0x2a8690: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a8690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a8694:
    // 0x2a8694: 0xc0a2ab0  jal         func_28AAC0
label_2a8698:
    if (ctx->pc == 0x2A8698u) {
        ctx->pc = 0x2A8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8694u;
        // 0x2a8698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A869Cu;
        goto label_2a869c;
    }
    ctx->pc = 0x2A8694u;
    SET_GPR_U32(ctx, 31, 0x2A869Cu);
    ctx->pc = 0x2A8698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8694u;
    // 0x2a8698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2A8694u, 0x2A869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A869Cu;
label_2a869c:
    // 0x2a869c: 0xc08bfbc  jal         func_22FEF0
label_2a86a0:
    if (ctx->pc == 0x2A86A0u) {
        ctx->pc = 0x2A86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A869Cu;
        // 0x2a86a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A86A4u;
        goto label_2a86a4;
    }
    ctx->pc = 0x2A869Cu;
    SET_GPR_U32(ctx, 31, 0x2A86A4u);
    ctx->pc = 0x2A86A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A869Cu;
    // 0x2a86a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2A869Cu, 0x2A86A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A86A4u;
label_2a86a4:
    // 0x2a86a4: 0xc0a9ffe  jal         func_2A7FF8
label_2a86a8:
    if (ctx->pc == 0x2A86A8u) {
        ctx->pc = 0x2A86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86A4u;
        // 0x2a86a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A86ACu;
        goto label_2a86ac;
    }
    ctx->pc = 0x2A86A4u;
    SET_GPR_U32(ctx, 31, 0x2A86ACu);
    ctx->pc = 0x2A86A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A86A4u;
    // 0x2a86a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7FF8u, 0x2A86A4u, 0x2A86ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A86ACu;
label_2a86ac:
    // 0x2a86ac: 0x100001e7  b           . + 4 + (0x1E7 << 2)
label_2a86b0:
    if (ctx->pc == 0x2A86B0u) {
        ctx->pc = 0x2A86B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86ACu;
        // 0x2a86b0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A86B4u;
        goto label_2a86b4;
    }
    ctx->pc = 0x2A86ACu;
    {
        const bool branch_taken_0x2a86ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A86B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86ACu;
        // 0x2a86b0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86ac) {
            ctx->pc = 0x2A8E4Cu;
            goto label_2a8e4c;
        }
    }
    ctx->pc = 0x2A86B4u;
label_2a86b4:
    // 0x2a86b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a86b8:
    // 0x2a86b8: 0x14a20151  bne         $a1, $v0, . + 4 + (0x151 << 2)
label_2a86bc:
    if (ctx->pc == 0x2A86BCu) {
        ctx->pc = 0x2A86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86B8u;
        // 0x2a86bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A86C0u;
        goto label_2a86c0;
    }
    ctx->pc = 0x2A86B8u;
    {
        const bool branch_taken_0x2a86b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86B8u;
        // 0x2a86bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86b8) {
            ctx->pc = 0x2A8C00u;
            goto label_2a8c00;
        }
    }
    ctx->pc = 0x2A86C0u;
label_2a86c0:
    // 0x2a86c0: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x2a86c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_2a86c4:
    // 0x2a86c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a86c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a86c8:
    // 0x2a86c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a86c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a86cc:
    // 0x2a86cc: 0xc0cdb38  jal         func_336CE0
label_2a86d0:
    if (ctx->pc == 0x2A86D0u) {
        ctx->pc = 0x2A86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86CCu;
        // 0x2a86d0: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A86D4u;
        goto label_2a86d4;
    }
    ctx->pc = 0x2A86CCu;
    SET_GPR_U32(ctx, 31, 0x2A86D4u);
    ctx->pc = 0x2A86D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A86CCu;
    // 0x2a86d0: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2A86CCu, 0x2A86D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A86D4u;
label_2a86d4:
    // 0x2a86d4: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x2a86d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2a86d8:
    // 0x2a86d8: 0x104000ea  beqz        $v0, . + 4 + (0xEA << 2)
label_2a86dc:
    if (ctx->pc == 0x2A86DCu) {
        ctx->pc = 0x2A86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86D8u;
        // 0x2a86dc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A86E0u;
        goto label_2a86e0;
    }
    ctx->pc = 0x2A86D8u;
    {
        const bool branch_taken_0x2a86d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86D8u;
        // 0x2a86dc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86d8) {
            ctx->pc = 0x2A8A84u;
            goto label_2a8a84;
        }
    }
    ctx->pc = 0x2A86E0u;
label_2a86e0:
    // 0x2a86e0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2a86e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_2a86e4:
    // 0x2a86e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a86e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a86e8:
    // 0x2a86e8: 0x0  nop
    ctx->pc = 0x2a86e8u;
    // NOP
label_2a86ec:
    // 0x2a86ec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2a86ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a86f0:
    // 0x2a86f0: 0x0  nop
    ctx->pc = 0x2a86f0u;
    // NOP
label_2a86f4:
    // 0x2a86f4: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_2a86f8:
    if (ctx->pc == 0x2A86F8u) {
        ctx->pc = 0x2A86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86F4u;
        // 0x2a86f8: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A86FCu;
        goto label_2a86fc;
    }
    ctx->pc = 0x2A86F4u;
    {
        const bool branch_taken_0x2a86f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86F4u;
        // 0x2a86f8: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a86f4) {
            ctx->pc = 0x2A8768u;
            goto label_2a8768;
        }
    }
    ctx->pc = 0x2A86FCu;
label_2a86fc:
    // 0x2a86fc: 0xc0a367c  jal         func_28D9F0
label_2a8700:
    if (ctx->pc == 0x2A8700u) {
        ctx->pc = 0x2A8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A86FCu;
        // 0x2a8700: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8704u;
        goto label_2a8704;
    }
    ctx->pc = 0x2A86FCu;
    SET_GPR_U32(ctx, 31, 0x2A8704u);
    ctx->pc = 0x2A8700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A86FCu;
    // 0x2a8700: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A86FCu, 0x2A8704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8704u;
label_2a8704:
    // 0x2a8704: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8708:
    // 0x2a8708: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2a870c:
    if (ctx->pc == 0x2A870Cu) {
        ctx->pc = 0x2A870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8708u;
        // 0x2a870c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8710u;
        goto label_2a8710;
    }
    ctx->pc = 0x2A8708u;
    {
        const bool branch_taken_0x2a8708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8708u;
        // 0x2a870c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8708) {
            ctx->pc = 0x2A8738u;
            goto label_2a8738;
        }
    }
    ctx->pc = 0x2A8710u;
label_2a8710:
    // 0x2a8710: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a8710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a8714:
    // 0x2a8714: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2a8714u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a8718:
    // 0x2a8718: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a8718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a871c:
    // 0x2a871c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2a871cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2a8720:
    // 0x2a8720: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a8720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8724:
    // 0x2a8724: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2a8724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a8728:
    // 0x2a8728: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a8728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a872c:
    // 0x2a872c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a872cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8730:
    // 0x2a8730: 0xc0bee7a  jal         func_2FB9E8
label_2a8734:
    if (ctx->pc == 0x2A8734u) {
        ctx->pc = 0x2A8734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8730u;
        // 0x2a8734: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8738u;
        goto label_2a8738;
    }
    ctx->pc = 0x2A8730u;
    SET_GPR_U32(ctx, 31, 0x2A8738u);
    ctx->pc = 0x2A8734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8730u;
    // 0x2a8734: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A8730u, 0x2A8738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8738u;
label_2a8738:
    // 0x2a8738: 0xc0a367c  jal         func_28D9F0
label_2a873c:
    if (ctx->pc == 0x2A873Cu) {
        ctx->pc = 0x2A873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8738u;
        // 0x2a873c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8740u;
        goto label_2a8740;
    }
    ctx->pc = 0x2A8738u;
    SET_GPR_U32(ctx, 31, 0x2A8740u);
    ctx->pc = 0x2A873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8738u;
    // 0x2a873c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A8738u, 0x2A8740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8740u;
label_2a8740:
    // 0x2a8740: 0x104001c5  beqz        $v0, . + 4 + (0x1C5 << 2)
label_2a8744:
    if (ctx->pc == 0x2A8744u) {
        ctx->pc = 0x2A8744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8740u;
        // 0x2a8744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8748u;
        goto label_2a8748;
    }
    ctx->pc = 0x2A8740u;
    {
        const bool branch_taken_0x2a8740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8740u;
        // 0x2a8744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8740) {
            ctx->pc = 0x2A8E58u;
            goto label_2a8e58;
        }
    }
    ctx->pc = 0x2A8748u;
label_2a8748:
    // 0x2a8748: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a8748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a874c:
    // 0x2a874c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a874cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2a8750:
    // 0x2a8750: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a8750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8754:
    // 0x2a8754: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a8754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8758:
    // 0x2a8758: 0xc0bf800  jal         func_2FE000
label_2a875c:
    if (ctx->pc == 0x2A875Cu) {
        ctx->pc = 0x2A875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8758u;
        // 0x2a875c: 0x240701f4  addiu       $a3, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8760u;
        goto label_2a8760;
    }
    ctx->pc = 0x2A8758u;
    SET_GPR_U32(ctx, 31, 0x2A8760u);
    ctx->pc = 0x2A875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8758u;
    // 0x2a875c: 0x240701f4  addiu       $a3, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2A8758u, 0x2A8760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8760u;
label_2a8760:
    // 0x2a8760: 0x100001be  b           . + 4 + (0x1BE << 2)
label_2a8764:
    if (ctx->pc == 0x2A8764u) {
        ctx->pc = 0x2A8764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8760u;
        // 0x2a8764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8768u;
        goto label_2a8768;
    }
    ctx->pc = 0x2A8760u;
    {
        const bool branch_taken_0x2a8760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8760u;
        // 0x2a8764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8760) {
            ctx->pc = 0x2A8E5Cu;
            goto label_2a8e5c;
        }
    }
    ctx->pc = 0x2A8768u;
label_2a8768:
    // 0x2a8768: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x2a8768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_2a876c:
    // 0x2a876c: 0x8c64bd30  lw          $a0, -0x42D0($v1)
    ctx->pc = 0x2a876cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2a8770:
    // 0x2a8770: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x2a8770u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a8774:
    // 0x2a8774: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2a8774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_2a8778:
    // 0x2a8778: 0x1044007c  beq         $v0, $a0, . + 4 + (0x7C << 2)
label_2a877c:
    if (ctx->pc == 0x2A877Cu) {
        ctx->pc = 0x2A877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8778u;
        // 0x2a877c: 0x27b10048  addiu       $s1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8780u;
        goto label_2a8780;
    }
    ctx->pc = 0x2A8778u;
    {
        const bool branch_taken_0x2a8778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2A877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8778u;
        // 0x2a877c: 0x27b10048  addiu       $s1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8778) {
            ctx->pc = 0x2A896Cu;
            goto label_2a896c;
        }
    }
    ctx->pc = 0x2A8780u;
label_2a8780:
    // 0x2a8780: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a8780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a8784:
    // 0x2a8784: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a8784u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a8788:
    // 0x2a8788: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a8788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a878c:
    // 0x2a878c: 0x40f809  jalr        $v0
label_2a8790:
    if (ctx->pc == 0x2A8790u) {
        ctx->pc = 0x2A8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A878Cu;
        // 0x2a8790: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8794u;
        goto label_2a8794;
    }
    ctx->pc = 0x2A878Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A8794u);
        ctx->pc = 0x2A8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A878Cu;
        // 0x2a8790: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A878Cu, 0x2A8794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A8794u;
label_2a8794:
    // 0x2a8794: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2a8798:
    // 0x2a8798: 0x50620075  beql        $v1, $v0, . + 4 + (0x75 << 2)
label_2a879c:
    if (ctx->pc == 0x2A879Cu) {
        ctx->pc = 0x2A879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8798u;
        // 0x2a879c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A87A0u;
        goto label_2a87a0;
    }
    ctx->pc = 0x2A8798u;
    {
        const bool branch_taken_0x2a8798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a8798) {
            ctx->pc = 0x2A879Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8798u;
            // 0x2a879c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8970u;
            goto label_2a8970;
        }
    }
    ctx->pc = 0x2A87A0u;
label_2a87a0:
    // 0x2a87a0: 0xc0e4060  jal         func_390180
label_2a87a4:
    if (ctx->pc == 0x2A87A4u) {
        ctx->pc = 0x2A87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87A0u;
        // 0x2a87a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A87A8u;
        goto label_2a87a8;
    }
    ctx->pc = 0x2A87A0u;
    SET_GPR_U32(ctx, 31, 0x2A87A8u);
    ctx->pc = 0x2A87A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A87A0u;
    // 0x2a87a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2A87A0u, 0x2A87A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A87A8u;
label_2a87a8:
    // 0x2a87a8: 0xc08a61a  jal         func_229868
label_2a87ac:
    if (ctx->pc == 0x2A87ACu) {
        ctx->pc = 0x2A87ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87A8u;
        // 0x2a87ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A87B0u;
        goto label_2a87b0;
    }
    ctx->pc = 0x2A87A8u;
    SET_GPR_U32(ctx, 31, 0x2A87B0u);
    ctx->pc = 0x2A87ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A87A8u;
    // 0x2a87ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2A87A8u, 0x2A87B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A87B0u;
label_2a87b0:
    // 0x2a87b0: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x2a87b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_2a87b4:
    // 0x2a87b4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2a87b8:
    if (ctx->pc == 0x2A87B8u) {
        ctx->pc = 0x2A87B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87B4u;
        // 0x2a87b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A87BCu;
        goto label_2a87bc;
    }
    ctx->pc = 0x2A87B4u;
    {
        const bool branch_taken_0x2a87b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A87B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87B4u;
        // 0x2a87b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87b4) {
            ctx->pc = 0x2A87D0u;
            goto label_2a87d0;
        }
    }
    ctx->pc = 0x2A87BCu;
label_2a87bc:
    // 0x2a87bc: 0x8ee3b734  lw          $v1, -0x48CC($s7)
    ctx->pc = 0x2a87bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
label_2a87c0:
    // 0x2a87c0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2a87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a87c4:
    // 0x2a87c4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2a87c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a87c8:
    // 0x2a87c8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_2a87cc:
    if (ctx->pc == 0x2A87CCu) {
        ctx->pc = 0x2A87D0u;
        goto label_2a87d0;
    }
    ctx->pc = 0x2A87C8u;
    {
        const bool branch_taken_0x2a87c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a87c8) {
            ctx->pc = 0x2A8880u;
            goto label_2a8880;
        }
    }
    ctx->pc = 0x2A87D0u;
label_2a87d0:
    // 0x2a87d0: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
label_2a87d4:
    if (ctx->pc == 0x2A87D4u) {
        ctx->pc = 0x2A87D8u;
        goto label_2a87d8;
    }
    ctx->pc = 0x2A87D0u;
    {
        const bool branch_taken_0x2a87d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a87d0) {
            ctx->pc = 0x2A8880u;
            goto label_2a8880;
        }
    }
    ctx->pc = 0x2A87D8u;
label_2a87d8:
    // 0x2a87d8: 0x84b00092  lh          $s0, 0x92($a1)
    ctx->pc = 0x2a87d8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
label_2a87dc:
    // 0x2a87dc: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x2a87dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2a87e0:
    // 0x2a87e0: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2a87e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2a87e4:
    // 0x2a87e4: 0xc10587a  jal         func_4161E8
label_2a87e8:
    if (ctx->pc == 0x2A87E8u) {
        ctx->pc = 0x2A87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87E4u;
        // 0x2a87e8: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A87ECu;
        goto label_2a87ec;
    }
    ctx->pc = 0x2A87E4u;
    SET_GPR_U32(ctx, 31, 0x2A87ECu);
    ctx->pc = 0x2A87E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A87E4u;
    // 0x2a87e8: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A87E4u, 0x2A87ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A87ECu;
label_2a87ec:
    // 0x2a87ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a87ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a87f0:
    // 0x2a87f0: 0xc0cdb38  jal         func_336CE0
label_2a87f4:
    if (ctx->pc == 0x2A87F4u) {
        ctx->pc = 0x2A87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87F0u;
        // 0x2a87f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A87F8u;
        goto label_2a87f8;
    }
    ctx->pc = 0x2A87F0u;
    SET_GPR_U32(ctx, 31, 0x2A87F8u);
    ctx->pc = 0x2A87F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A87F0u;
    // 0x2a87f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2A87F0u, 0x2A87F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A87F8u;
label_2a87f8:
    // 0x2a87f8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2a87f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2a87fc:
    // 0x2a87fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a87fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a8800:
    // 0x2a8800: 0x0  nop
    ctx->pc = 0x2a8800u;
    // NOP
label_2a8804:
    // 0x2a8804: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a8804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a8808:
    // 0x2a8808: 0x0  nop
    ctx->pc = 0x2a8808u;
    // NOP
label_2a880c:
    // 0x2a880c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_2a8810:
    if (ctx->pc == 0x2A8810u) {
        ctx->pc = 0x2A8810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A880Cu;
        // 0x2a8810: 0x8ee3b734  lw          $v1, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8814u;
        goto label_2a8814;
    }
    ctx->pc = 0x2A880Cu;
    {
        const bool branch_taken_0x2a880c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A880Cu;
        // 0x2a8810: 0x8ee3b734  lw          $v1, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a880c) {
            ctx->pc = 0x2A8880u;
            goto label_2a8880;
        }
    }
    ctx->pc = 0x2A8814u;
label_2a8814:
    // 0x2a8814: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a8814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a8818:
    // 0x2a8818: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2a8818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a881c:
    // 0x2a881c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x2a881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_2a8820:
    // 0x2a8820: 0xc0a367c  jal         func_28D9F0
label_2a8824:
    if (ctx->pc == 0x2A8824u) {
        ctx->pc = 0x2A8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8820u;
        // 0x2a8824: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8828u;
        goto label_2a8828;
    }
    ctx->pc = 0x2A8820u;
    SET_GPR_U32(ctx, 31, 0x2A8828u);
    ctx->pc = 0x2A8824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8820u;
    // 0x2a8824: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A8820u, 0x2A8828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8828u;
label_2a8828:
    // 0x2a8828: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2a882c:
    if (ctx->pc == 0x2A882Cu) {
        ctx->pc = 0x2A882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8828u;
        // 0x2a882c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8830u;
        goto label_2a8830;
    }
    ctx->pc = 0x2A8828u;
    {
        const bool branch_taken_0x2a8828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8828u;
        // 0x2a882c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8828) {
            ctx->pc = 0x2A8850u;
            goto label_2a8850;
        }
    }
    ctx->pc = 0x2A8830u;
label_2a8830:
    // 0x2a8830: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a8830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a8834:
    // 0x2a8834: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2a8834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2a8838:
    // 0x2a8838: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a8838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a883c:
    // 0x2a883c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a883cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8840:
    // 0x2a8840: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2a8840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2a8844:
    // 0x2a8844: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2a8844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a8848:
    // 0x2a8848: 0xc0be8c0  jal         func_2FA300
label_2a884c:
    if (ctx->pc == 0x2A884Cu) {
        ctx->pc = 0x2A884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8848u;
        // 0x2a884c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8850u;
        goto label_2a8850;
    }
    ctx->pc = 0x2A8848u;
    SET_GPR_U32(ctx, 31, 0x2A8850u);
    ctx->pc = 0x2A884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8848u;
    // 0x2a884c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2A8848u, 0x2A8850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8850u;
label_2a8850:
    // 0x2a8850: 0x8fc9bd30  lw          $t1, -0x42D0($fp)
    ctx->pc = 0x2a8850u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
label_2a8854:
    // 0x2a8854: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a8854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a8858:
    // 0x2a8858: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a885c:
    // 0x2a885c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a885cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8860:
    // 0x2a8860: 0x24050081  addiu       $a1, $zero, 0x81
    ctx->pc = 0x2a8860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_2a8864:
    // 0x2a8864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a8864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8868:
    // 0x2a8868: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a8868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a886c:
    // 0x2a886c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a886cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8870:
    // 0x2a8870: 0xc088178  jal         func_2205E0
label_2a8874:
    if (ctx->pc == 0x2A8874u) {
        ctx->pc = 0x2A8874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8870u;
        // 0x2a8874: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8878u;
        goto label_2a8878;
    }
    ctx->pc = 0x2A8870u;
    SET_GPR_U32(ctx, 31, 0x2A8878u);
    ctx->pc = 0x2A8874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8870u;
    // 0x2a8874: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2A8870u, 0x2A8878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8878u;
label_2a8878:
    // 0x2a8878: 0x10000178  b           . + 4 + (0x178 << 2)
label_2a887c:
    if (ctx->pc == 0x2A887Cu) {
        ctx->pc = 0x2A887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8878u;
        // 0x2a887c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8880u;
        goto label_2a8880;
    }
    ctx->pc = 0x2A8878u;
    {
        const bool branch_taken_0x2a8878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8878u;
        // 0x2a887c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8878) {
            ctx->pc = 0x2A8E5Cu;
            goto label_2a8e5c;
        }
    }
    ctx->pc = 0x2A8880u;
label_2a8880:
    // 0x2a8880: 0xc0e409a  jal         func_390268
label_2a8884:
    if (ctx->pc == 0x2A8884u) {
        ctx->pc = 0x2A8884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8880u;
        // 0x2a8884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8888u;
        goto label_2a8888;
    }
    ctx->pc = 0x2A8880u;
    SET_GPR_U32(ctx, 31, 0x2A8888u);
    ctx->pc = 0x2A8884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8880u;
    // 0x2a8884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A8880u, 0x2A8888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8888u;
label_2a8888:
    // 0x2a8888: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a8888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a888c:
    // 0x2a888c: 0xc087502  jal         func_21D408
label_2a8890:
    if (ctx->pc == 0x2A8890u) {
        ctx->pc = 0x2A8890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A888Cu;
        // 0x2a8890: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8894u;
        goto label_2a8894;
    }
    ctx->pc = 0x2A888Cu;
    SET_GPR_U32(ctx, 31, 0x2A8894u);
    ctx->pc = 0x2A8890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A888Cu;
    // 0x2a8890: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A888Cu, 0x2A8894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8894u;
label_2a8894:
    // 0x2a8894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a8894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8898:
    // 0x2a8898: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x2a8898u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_2a889c:
    // 0x2a889c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2a88a0:
    if (ctx->pc == 0x2A88A0u) {
        ctx->pc = 0x2A88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A889Cu;
        // 0x2a88a0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A88A4u;
        goto label_2a88a4;
    }
    ctx->pc = 0x2A889Cu;
    {
        const bool branch_taken_0x2a889c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A889Cu;
        // 0x2a88a0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a889c) {
            ctx->pc = 0x2A88B0u;
            goto label_2a88b0;
        }
    }
    ctx->pc = 0x2A88A4u;
label_2a88a4:
    // 0x2a88a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a88a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a88a8:
    // 0x2a88a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a88ac:
    if (ctx->pc == 0x2A88ACu) {
        ctx->pc = 0x2A88ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A88A8u;
        // 0x2a88ac: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A88B0u;
        goto label_2a88b0;
    }
    ctx->pc = 0x2A88A8u;
    {
        const bool branch_taken_0x2a88a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A88ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A88A8u;
        // 0x2a88ac: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a88a8) {
            ctx->pc = 0x2A88B4u;
            goto label_2a88b4;
        }
    }
    ctx->pc = 0x2A88B0u;
label_2a88b0:
    // 0x2a88b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a88b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a88b4:
    // 0x2a88b4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2a88b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2a88b8:
    // 0x2a88b8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2a88b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2a88bc:
    // 0x2a88bc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a88bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a88c0:
    // 0x2a88c0: 0x40f809  jalr        $v0
label_2a88c4:
    if (ctx->pc == 0x2A88C4u) {
        ctx->pc = 0x2A88C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A88C0u;
        // 0x2a88c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A88C8u;
        goto label_2a88c8;
    }
    ctx->pc = 0x2A88C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A88C8u);
        ctx->pc = 0x2A88C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A88C0u;
        // 0x2a88c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A88C0u, 0x2A88C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A88C8u;
label_2a88c8:
    // 0x2a88c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a88c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a88cc:
    // 0x2a88cc: 0x54430162  bnel        $v0, $v1, . + 4 + (0x162 << 2)
label_2a88d0:
    if (ctx->pc == 0x2A88D0u) {
        ctx->pc = 0x2A88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A88CCu;
        // 0x2a88d0: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A88D4u;
        goto label_2a88d4;
    }
    ctx->pc = 0x2A88CCu;
    {
        const bool branch_taken_0x2a88cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a88cc) {
            ctx->pc = 0x2A88D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A88CCu;
            // 0x2a88d0: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8E58u;
            goto label_2a8e58;
        }
    }
    ctx->pc = 0x2A88D4u;
label_2a88d4:
    // 0x2a88d4: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x2a88d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_2a88d8:
    // 0x2a88d8: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
label_2a88dc:
    if (ctx->pc == 0x2A88DCu) {
        ctx->pc = 0x2A88DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A88D8u;
        // 0x2a88dc: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A88E0u;
        goto label_2a88e0;
    }
    ctx->pc = 0x2A88D8u;
    {
        const bool branch_taken_0x2a88d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A88DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A88D8u;
        // 0x2a88dc: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a88d8) {
            ctx->pc = 0x2A8964u;
            goto label_2a8964;
        }
    }
    ctx->pc = 0x2A88E0u;
label_2a88e0:
    // 0x2a88e0: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x2a88e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2a88e4:
    // 0x2a88e4: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2a88e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2a88e8:
    // 0x2a88e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a88e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a88ec:
    // 0x2a88ec: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2a88ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2a88f0:
    // 0x2a88f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a88f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a88f4:
    // 0x2a88f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a88f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a88f8:
    // 0x2a88f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a88f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a88fc:
    // 0x2a88fc: 0xc105df6  jal         func_4177D8
label_2a8900:
    if (ctx->pc == 0x2A8900u) {
        ctx->pc = 0x2A8900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A88FCu;
        // 0x2a8900: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8904u;
        goto label_2a8904;
    }
    ctx->pc = 0x2A88FCu;
    SET_GPR_U32(ctx, 31, 0x2A8904u);
    ctx->pc = 0x2A8900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A88FCu;
    // 0x2a8900: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2A88FCu, 0x2A8904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8904u;
label_2a8904:
    // 0x2a8904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8908:
    // 0x2a8908: 0xc0a35f6  jal         func_28D7D8
label_2a890c:
    if (ctx->pc == 0x2A890Cu) {
        ctx->pc = 0x2A890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8908u;
        // 0x2a890c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8910u;
        goto label_2a8910;
    }
    ctx->pc = 0x2A8908u;
    SET_GPR_U32(ctx, 31, 0x2A8910u);
    ctx->pc = 0x2A890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8908u;
    // 0x2a890c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x2A8908u, 0x2A8910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8910u;
label_2a8910:
    // 0x2a8910: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a8910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a8914:
    // 0x2a8914: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a8914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a8918:
    // 0x2a8918: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a8918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a891c:
    // 0x2a891c: 0x40f809  jalr        $v0
label_2a8920:
    if (ctx->pc == 0x2A8920u) {
        ctx->pc = 0x2A8920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A891Cu;
        // 0x2a8920: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8924u;
        goto label_2a8924;
    }
    ctx->pc = 0x2A891Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A8924u);
        ctx->pc = 0x2A8920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A891Cu;
        // 0x2a8920: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A891Cu, 0x2A8924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A8924u;
label_2a8924:
    // 0x2a8924: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a8924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a8928:
    // 0x2a8928: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a8928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a892c:
    // 0x2a892c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a892cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a8930:
    // 0x2a8930: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a8930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a8934:
    // 0x2a8934: 0x40f809  jalr        $v0
label_2a8938:
    if (ctx->pc == 0x2A8938u) {
        ctx->pc = 0x2A8938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8934u;
        // 0x2a8938: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A893Cu;
        goto label_2a893c;
    }
    ctx->pc = 0x2A8934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A893Cu);
        ctx->pc = 0x2A8938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8934u;
        // 0x2a8938: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8934u, 0x2A893Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A893Cu;
label_2a893c:
    // 0x2a893c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a893cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8940:
    // 0x2a8940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8944:
    // 0x2a8944: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a8944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2a8948:
    // 0x2a8948: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a8948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a894c:
    // 0x2a894c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a894cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8950:
    // 0x2a8950: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a8950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a8954:
    // 0x2a8954: 0xc0b6a04  jal         func_2DA810
label_2a8958:
    if (ctx->pc == 0x2A8958u) {
        ctx->pc = 0x2A8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8954u;
        // 0x2a8958: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A895Cu;
        goto label_2a895c;
    }
    ctx->pc = 0x2A8954u;
    SET_GPR_U32(ctx, 31, 0x2A895Cu);
    ctx->pc = 0x2A8958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8954u;
    // 0x2a8958: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA810u, 0x2A8954u, 0x2A895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A895Cu;
label_2a895c:
    // 0x2a895c: 0x1000013f  b           . + 4 + (0x13F << 2)
label_2a8960:
    if (ctx->pc == 0x2A8960u) {
        ctx->pc = 0x2A8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A895Cu;
        // 0x2a8960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8964u;
        goto label_2a8964;
    }
    ctx->pc = 0x2A895Cu;
    {
        const bool branch_taken_0x2a895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A895Cu;
        // 0x2a8960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a895c) {
            ctx->pc = 0x2A8E5Cu;
            goto label_2a8e5c;
        }
    }
    ctx->pc = 0x2A8964u;
label_2a8964:
    // 0x2a8964: 0x1000013c  b           . + 4 + (0x13C << 2)
label_2a8968:
    if (ctx->pc == 0x2A8968u) {
        ctx->pc = 0x2A8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8964u;
        // 0x2a8968: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A896Cu;
        goto label_2a896c;
    }
    ctx->pc = 0x2A8964u;
    {
        const bool branch_taken_0x2a8964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8964u;
        // 0x2a8968: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8964) {
            ctx->pc = 0x2A8E58u;
            goto label_2a8e58;
        }
    }
    ctx->pc = 0x2A896Cu;
label_2a896c:
    // 0x2a896c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a8970:
    // 0x2a8970: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a8970u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a8974:
    // 0x2a8974: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a8974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a8978:
    // 0x2a8978: 0x40f809  jalr        $v0
label_2a897c:
    if (ctx->pc == 0x2A897Cu) {
        ctx->pc = 0x2A897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8978u;
        // 0x2a897c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8980u;
        goto label_2a8980;
    }
    ctx->pc = 0x2A8978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A8980u);
        ctx->pc = 0x2A897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8978u;
        // 0x2a897c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8978u, 0x2A8980u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A8980u;
label_2a8980:
    // 0x2a8980: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x2a8980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2a8984:
    // 0x2a8984: 0xc10586c  jal         func_4161B0
label_2a8988:
    if (ctx->pc == 0x2A8988u) {
        ctx->pc = 0x2A8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8984u;
        // 0x2a8988: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A898Cu;
        goto label_2a898c;
    }
    ctx->pc = 0x2A8984u;
    SET_GPR_U32(ctx, 31, 0x2A898Cu);
    ctx->pc = 0x2A8988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8984u;
    // 0x2a8988: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B0u, 0x2A8984u, 0x2A898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A898Cu;
label_2a898c:
    // 0x2a898c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2a898cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2a8990:
    // 0x2a8990: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a8990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a8994:
    // 0x2a8994: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2a8994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a8998:
    // 0x2a8998: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2a8998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2a899c:
    // 0x2a899c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a899cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2a89a0:
    // 0x2a89a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a89a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a89a4:
    // 0x2a89a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a89a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2a89a8:
    // 0x2a89a8: 0x0  nop
    ctx->pc = 0x2a89a8u;
    // NOP
label_2a89ac:
    // 0x2a89ac: 0x0  nop
    ctx->pc = 0x2a89acu;
    // NOP
label_2a89b0:
    // 0x2a89b0: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
label_2a89b4:
    if (ctx->pc == 0x2A89B4u) {
        ctx->pc = 0x2A89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A89B0u;
        // 0x2a89b4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A89B8u;
        goto label_2a89b8;
    }
    ctx->pc = 0x2A89B0u;
    {
        const bool branch_taken_0x2a89b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2A89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A89B0u;
        // 0x2a89b4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a89b0) {
            ctx->pc = 0x2A89A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a89a0;
        }
    }
    ctx->pc = 0x2A89B8u;
label_2a89b8:
    // 0x2a89b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a89b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2a89bc:
    // 0x2a89bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a89bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a89c0:
    // 0x2a89c0: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x2a89c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_2a89c4:
    // 0x2a89c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a89c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a89c8:
    // 0x2a89c8: 0x24e7c498  addiu       $a3, $a3, -0x3B68
    ctx->pc = 0x2a89c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952088));
label_2a89cc:
    // 0x2a89cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a89ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a89d0:
    // 0x2a89d0: 0xc0a71b4  jal         func_29C6D0
label_2a89d4:
    if (ctx->pc == 0x2A89D4u) {
        ctx->pc = 0x2A89D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A89D0u;
        // 0x2a89d4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A89D8u;
        goto label_2a89d8;
    }
    ctx->pc = 0x2A89D0u;
    SET_GPR_U32(ctx, 31, 0x2A89D8u);
    ctx->pc = 0x2A89D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A89D0u;
    // 0x2a89d4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C6D0u, 0x2A89D0u, 0x2A89D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A89D8u;
label_2a89d8:
    // 0x2a89d8: 0xc136b80  jal         func_4DAE00
label_2a89dc:
    if (ctx->pc == 0x2A89DCu) {
        ctx->pc = 0x2A89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A89D8u;
        // 0x2a89dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A89E0u;
        goto label_2a89e0;
    }
    ctx->pc = 0x2A89D8u;
    SET_GPR_U32(ctx, 31, 0x2A89E0u);
    ctx->pc = 0x2A89DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A89D8u;
    // 0x2a89dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2A89D8u, 0x2A89E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A89E0u;
label_2a89e0:
    // 0x2a89e0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2a89e4:
    if (ctx->pc == 0x2A89E4u) {
        ctx->pc = 0x2A89E8u;
        goto label_2a89e8;
    }
    ctx->pc = 0x2A89E0u;
    {
        const bool branch_taken_0x2a89e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a89e0) {
            ctx->pc = 0x2A8A20u;
            goto label_2a8a20;
        }
    }
    ctx->pc = 0x2A89E8u;
label_2a89e8:
    // 0x2a89e8: 0xc0a367c  jal         func_28D9F0
label_2a89ec:
    if (ctx->pc == 0x2A89ECu) {
        ctx->pc = 0x2A89ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A89E8u;
        // 0x2a89ec: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A89F0u;
        goto label_2a89f0;
    }
    ctx->pc = 0x2A89E8u;
    SET_GPR_U32(ctx, 31, 0x2A89F0u);
    ctx->pc = 0x2A89ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A89E8u;
    // 0x2a89ec: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A89E8u, 0x2A89F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A89F0u;
label_2a89f0:
    // 0x2a89f0: 0x10400119  beqz        $v0, . + 4 + (0x119 << 2)
label_2a89f4:
    if (ctx->pc == 0x2A89F4u) {
        ctx->pc = 0x2A89F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A89F0u;
        // 0x2a89f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A89F8u;
        goto label_2a89f8;
    }
    ctx->pc = 0x2A89F0u;
    {
        const bool branch_taken_0x2a89f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A89F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A89F0u;
        // 0x2a89f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a89f0) {
            ctx->pc = 0x2A8E58u;
            goto label_2a8e58;
        }
    }
    ctx->pc = 0x2A89F8u;
label_2a89f8:
    // 0x2a89f8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a89f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a89fc:
    // 0x2a89fc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2a89fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2a8a00:
    // 0x2a8a00: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a8a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a8a04:
    // 0x2a8a04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a8a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8a08:
    // 0x2a8a08: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2a8a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2a8a0c:
    // 0x2a8a0c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2a8a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a8a10:
    // 0x2a8a10: 0xc0be8c0  jal         func_2FA300
label_2a8a14:
    if (ctx->pc == 0x2A8A14u) {
        ctx->pc = 0x2A8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A10u;
        // 0x2a8a14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8A18u;
        goto label_2a8a18;
    }
    ctx->pc = 0x2A8A10u;
    SET_GPR_U32(ctx, 31, 0x2A8A18u);
    ctx->pc = 0x2A8A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8A10u;
    // 0x2a8a14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2A8A10u, 0x2A8A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8A18u;
label_2a8a18:
    // 0x2a8a18: 0x10000110  b           . + 4 + (0x110 << 2)
label_2a8a1c:
    if (ctx->pc == 0x2A8A1Cu) {
        ctx->pc = 0x2A8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A18u;
        // 0x2a8a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8A20u;
        goto label_2a8a20;
    }
    ctx->pc = 0x2A8A18u;
    {
        const bool branch_taken_0x2a8a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A18u;
        // 0x2a8a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a18) {
            ctx->pc = 0x2A8E5Cu;
            goto label_2a8e5c;
        }
    }
    ctx->pc = 0x2A8A20u;
label_2a8a20:
    // 0x2a8a20: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x2a8a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_2a8a24:
    // 0x2a8a24: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2a8a24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_2a8a28:
    // 0x2a8a28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8a2c:
    // 0x2a8a2c: 0x0  nop
    ctx->pc = 0x2a8a2cu;
    // NOP
label_2a8a30:
    // 0x2a8a30: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2a8a30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a8a34:
    // 0x2a8a34: 0x0  nop
    ctx->pc = 0x2a8a34u;
    // NOP
label_2a8a38:
    // 0x2a8a38: 0x45000034  bc1f        . + 4 + (0x34 << 2)
label_2a8a3c:
    if (ctx->pc == 0x2A8A3Cu) {
        ctx->pc = 0x2A8A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A38u;
        // 0x2a8a3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8A40u;
        goto label_2a8a40;
    }
    ctx->pc = 0x2A8A38u;
    {
        const bool branch_taken_0x2a8a38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A38u;
        // 0x2a8a3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a38) {
            ctx->pc = 0x2A8B0Cu;
            goto label_2a8b0c;
        }
    }
    ctx->pc = 0x2A8A40u;
label_2a8a40:
    // 0x2a8a40: 0xc0a367c  jal         func_28D9F0
label_2a8a44:
    if (ctx->pc == 0x2A8A44u) {
        ctx->pc = 0x2A8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A40u;
        // 0x2a8a44: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8A48u;
        goto label_2a8a48;
    }
    ctx->pc = 0x2A8A40u;
    SET_GPR_U32(ctx, 31, 0x2A8A48u);
    ctx->pc = 0x2A8A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8A40u;
    // 0x2a8a44: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A8A40u, 0x2A8A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8A48u;
label_2a8a48:
    // 0x2a8a48: 0x10400103  beqz        $v0, . + 4 + (0x103 << 2)
label_2a8a4c:
    if (ctx->pc == 0x2A8A4Cu) {
        ctx->pc = 0x2A8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A48u;
        // 0x2a8a4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8A50u;
        goto label_2a8a50;
    }
    ctx->pc = 0x2A8A48u;
    {
        const bool branch_taken_0x2a8a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A48u;
        // 0x2a8a4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a48) {
            ctx->pc = 0x2A8E58u;
            goto label_2a8e58;
        }
    }
    ctx->pc = 0x2A8A50u;
label_2a8a50:
    // 0x2a8a50: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a8a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a8a54:
    // 0x2a8a54: 0x8fcabd30  lw          $t2, -0x42D0($fp)
    ctx->pc = 0x2a8a54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
label_2a8a58:
    // 0x2a8a58: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a8a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a8a5c:
    // 0x2a8a5c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2a8a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2a8a60:
    // 0x2a8a60: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2a8a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2a8a64:
    // 0x2a8a64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a8a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8a68:
    // 0x2a8a68: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2a8a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a8a6c:
    // 0x2a8a6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a8a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8a70:
    // 0x2a8a70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a8a70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8a74:
    // 0x2a8a74: 0xc0bee7a  jal         func_2FB9E8
label_2a8a78:
    if (ctx->pc == 0x2A8A78u) {
        ctx->pc = 0x2A8A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A74u;
        // 0x2a8a78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8A7Cu;
        goto label_2a8a7c;
    }
    ctx->pc = 0x2A8A74u;
    SET_GPR_U32(ctx, 31, 0x2A8A7Cu);
    ctx->pc = 0x2A8A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8A74u;
    // 0x2a8a78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A8A74u, 0x2A8A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8A7Cu;
label_2a8a7c:
    // 0x2a8a7c: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_2a8a80:
    if (ctx->pc == 0x2A8A80u) {
        ctx->pc = 0x2A8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A7Cu;
        // 0x2a8a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8A84u;
        goto label_2a8a84;
    }
    ctx->pc = 0x2A8A7Cu;
    {
        const bool branch_taken_0x2a8a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A7Cu;
        // 0x2a8a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a7c) {
            ctx->pc = 0x2A8E5Cu;
            goto label_2a8e5c;
        }
    }
    ctx->pc = 0x2A8A84u;
label_2a8a84:
    // 0x2a8a84: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2a8a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_2a8a88:
    // 0x2a8a88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8a8c:
    // 0x2a8a8c: 0x0  nop
    ctx->pc = 0x2a8a8cu;
    // NOP
label_2a8a90:
    // 0x2a8a90: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2a8a90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a8a94:
    // 0x2a8a94: 0x0  nop
    ctx->pc = 0x2a8a94u;
    // NOP
label_2a8a98:
    // 0x2a8a98: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_2a8a9c:
    if (ctx->pc == 0x2A8A9Cu) {
        ctx->pc = 0x2A8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A98u;
        // 0x2a8a9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8AA0u;
        goto label_2a8aa0;
    }
    ctx->pc = 0x2A8A98u;
    {
        const bool branch_taken_0x2a8a98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A98u;
        // 0x2a8a9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a98) {
            ctx->pc = 0x2A8B0Cu;
            goto label_2a8b0c;
        }
    }
    ctx->pc = 0x2A8AA0u;
label_2a8aa0:
    // 0x2a8aa0: 0xc0a367c  jal         func_28D9F0
label_2a8aa4:
    if (ctx->pc == 0x2A8AA4u) {
        ctx->pc = 0x2A8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AA0u;
        // 0x2a8aa4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8AA8u;
        goto label_2a8aa8;
    }
    ctx->pc = 0x2A8AA0u;
    SET_GPR_U32(ctx, 31, 0x2A8AA8u);
    ctx->pc = 0x2A8AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8AA0u;
    // 0x2a8aa4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A8AA0u, 0x2A8AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8AA8u;
label_2a8aa8:
    // 0x2a8aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8aac:
    // 0x2a8aac: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2a8ab0:
    if (ctx->pc == 0x2A8AB0u) {
        ctx->pc = 0x2A8AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AACu;
        // 0x2a8ab0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8AB4u;
        goto label_2a8ab4;
    }
    ctx->pc = 0x2A8AACu;
    {
        const bool branch_taken_0x2a8aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AACu;
        // 0x2a8ab0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8aac) {
            ctx->pc = 0x2A8ADCu;
            goto label_2a8adc;
        }
    }
    ctx->pc = 0x2A8AB4u;
label_2a8ab4:
    // 0x2a8ab4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a8ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a8ab8:
    // 0x2a8ab8: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2a8ab8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a8abc:
    // 0x2a8abc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a8abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8ac0:
    // 0x2a8ac0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2a8ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2a8ac4:
    // 0x2a8ac4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a8ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8ac8:
    // 0x2a8ac8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2a8ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a8acc:
    // 0x2a8acc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a8accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8ad0:
    // 0x2a8ad0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a8ad0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8ad4:
    // 0x2a8ad4: 0xc0bee7a  jal         func_2FB9E8
label_2a8ad8:
    if (ctx->pc == 0x2A8AD8u) {
        ctx->pc = 0x2A8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AD4u;
        // 0x2a8ad8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8ADCu;
        goto label_2a8adc;
    }
    ctx->pc = 0x2A8AD4u;
    SET_GPR_U32(ctx, 31, 0x2A8ADCu);
    ctx->pc = 0x2A8AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8AD4u;
    // 0x2a8ad8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A8AD4u, 0x2A8ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8ADCu;
label_2a8adc:
    // 0x2a8adc: 0xc0a367c  jal         func_28D9F0
label_2a8ae0:
    if (ctx->pc == 0x2A8AE0u) {
        ctx->pc = 0x2A8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8ADCu;
        // 0x2a8ae0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8AE4u;
        goto label_2a8ae4;
    }
    ctx->pc = 0x2A8ADCu;
    SET_GPR_U32(ctx, 31, 0x2A8AE4u);
    ctx->pc = 0x2A8AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8ADCu;
    // 0x2a8ae0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A8ADCu, 0x2A8AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8AE4u;
label_2a8ae4:
    // 0x2a8ae4: 0x104000dc  beqz        $v0, . + 4 + (0xDC << 2)
label_2a8ae8:
    if (ctx->pc == 0x2A8AE8u) {
        ctx->pc = 0x2A8AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AE4u;
        // 0x2a8ae8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8AECu;
        goto label_2a8aec;
    }
    ctx->pc = 0x2A8AE4u;
    {
        const bool branch_taken_0x2a8ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AE4u;
        // 0x2a8ae8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8ae4) {
            ctx->pc = 0x2A8E58u;
            goto label_2a8e58;
        }
    }
    ctx->pc = 0x2A8AECu;
label_2a8aec:
    // 0x2a8aec: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a8aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a8af0:
    // 0x2a8af0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a8af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2a8af4:
    // 0x2a8af4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a8af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8af8:
    // 0x2a8af8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a8af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8afc:
    // 0x2a8afc: 0xc0bf800  jal         func_2FE000
label_2a8b00:
    if (ctx->pc == 0x2A8B00u) {
        ctx->pc = 0x2A8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AFCu;
        // 0x2a8b00: 0x240701f4  addiu       $a3, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8B04u;
        goto label_2a8b04;
    }
    ctx->pc = 0x2A8AFCu;
    SET_GPR_U32(ctx, 31, 0x2A8B04u);
    ctx->pc = 0x2A8B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8AFCu;
    // 0x2a8b00: 0x240701f4  addiu       $a3, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2A8AFCu, 0x2A8B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8B04u;
label_2a8b04:
    // 0x2a8b04: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_2a8b08:
    if (ctx->pc == 0x2A8B08u) {
        ctx->pc = 0x2A8B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B04u;
        // 0x2a8b08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8B0Cu;
        goto label_2a8b0c;
    }
    ctx->pc = 0x2A8B04u;
    {
        const bool branch_taken_0x2a8b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B04u;
        // 0x2a8b08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b04) {
            ctx->pc = 0x2A8E5Cu;
            goto label_2a8e5c;
        }
    }
    ctx->pc = 0x2A8B0Cu;
label_2a8b0c:
    // 0x2a8b0c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2a8b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2a8b10:
    // 0x2a8b10: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x2a8b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_2a8b14:
    // 0x2a8b14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8b18:
    // 0x2a8b18: 0xc105df6  jal         func_4177D8
label_2a8b1c:
    if (ctx->pc == 0x2A8B1Cu) {
        ctx->pc = 0x2A8B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B18u;
        // 0x2a8b1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8B20u;
        goto label_2a8b20;
    }
    ctx->pc = 0x2A8B18u;
    SET_GPR_U32(ctx, 31, 0x2A8B20u);
    ctx->pc = 0x2A8B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8B18u;
    // 0x2a8b1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2A8B18u, 0x2A8B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8B20u;
label_2a8b20:
    // 0x2a8b20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a8b24:
    if (ctx->pc == 0x2A8B24u) {
        ctx->pc = 0x2A8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B20u;
        // 0x2a8b24: 0xc7a1004c  lwc1        $f1, 0x4C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8B28u;
        goto label_2a8b28;
    }
    ctx->pc = 0x2A8B20u;
    {
        const bool branch_taken_0x2a8b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B20u;
        // 0x2a8b24: 0xc7a1004c  lwc1        $f1, 0x4C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b20) {
            ctx->pc = 0x2A8B44u;
            goto label_2a8b44;
        }
    }
    ctx->pc = 0x2A8B28u;
label_2a8b28:
    // 0x2a8b28: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a8b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2a8b2c:
    // 0x2a8b2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8b30:
    // 0x2a8b30: 0x0  nop
    ctx->pc = 0x2a8b30u;
    // NOP
label_2a8b34:
    // 0x2a8b34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a8b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a8b38:
    // 0x2a8b38: 0x0  nop
    ctx->pc = 0x2a8b38u;
    // NOP
label_2a8b3c:
    // 0x2a8b3c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2a8b40:
    if (ctx->pc == 0x2A8B40u) {
        ctx->pc = 0x2A8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B3Cu;
        // 0x2a8b40: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8B44u;
        goto label_2a8b44;
    }
    ctx->pc = 0x2A8B3Cu;
    {
        const bool branch_taken_0x2a8b3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B3Cu;
        // 0x2a8b40: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b3c) {
            ctx->pc = 0x2A8B50u;
            goto label_2a8b50;
        }
    }
    ctx->pc = 0x2A8B44u;
label_2a8b44:
    // 0x2a8b44: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x2a8b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2a8b48:
    // 0x2a8b48: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_2a8b4c:
    if (ctx->pc == 0x2A8B4Cu) {
        ctx->pc = 0x2A8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B48u;
        // 0x2a8b4c: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8B50u;
        goto label_2a8b50;
    }
    ctx->pc = 0x2A8B48u;
    {
        const bool branch_taken_0x2a8b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B48u;
        // 0x2a8b4c: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b48) {
            ctx->pc = 0x2A8BD0u;
            goto label_2a8bd0;
        }
    }
    ctx->pc = 0x2A8B50u;
label_2a8b50:
    // 0x2a8b50: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x2a8b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2a8b54:
    // 0x2a8b54: 0x8e02bd30  lw          $v0, -0x42D0($s0)
    ctx->pc = 0x2a8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_2a8b58:
    // 0x2a8b58: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_2a8b5c:
    if (ctx->pc == 0x2A8B5Cu) {
        ctx->pc = 0x2A8B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B58u;
        // 0x2a8b5c: 0x8ee3b734  lw          $v1, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8B60u;
        goto label_2a8b60;
    }
    ctx->pc = 0x2A8B58u;
    {
        const bool branch_taken_0x2a8b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A8B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B58u;
        // 0x2a8b5c: 0x8ee3b734  lw          $v1, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b58) {
            ctx->pc = 0x2A8BC0u;
            goto label_2a8bc0;
        }
    }
    ctx->pc = 0x2A8B60u;
label_2a8b60:
    // 0x2a8b60: 0xc0a367c  jal         func_28D9F0
label_2a8b64:
    if (ctx->pc == 0x2A8B64u) {
        ctx->pc = 0x2A8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B60u;
        // 0x2a8b64: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8B68u;
        goto label_2a8b68;
    }
    ctx->pc = 0x2A8B60u;
    SET_GPR_U32(ctx, 31, 0x2A8B68u);
    ctx->pc = 0x2A8B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8B60u;
    // 0x2a8b64: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A8B60u, 0x2A8B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8B68u;
label_2a8b68:
    // 0x2a8b68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2a8b6c:
    if (ctx->pc == 0x2A8B6Cu) {
        ctx->pc = 0x2A8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B68u;
        // 0x2a8b6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8B70u;
        goto label_2a8b70;
    }
    ctx->pc = 0x2A8B68u;
    {
        const bool branch_taken_0x2a8b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B68u;
        // 0x2a8b6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b68) {
            ctx->pc = 0x2A8B90u;
            goto label_2a8b90;
        }
    }
    ctx->pc = 0x2A8B70u;
label_2a8b70:
    // 0x2a8b70: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a8b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a8b74:
    // 0x2a8b74: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2a8b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2a8b78:
    // 0x2a8b78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a8b78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a8b7c:
    // 0x2a8b7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a8b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8b80:
    // 0x2a8b80: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2a8b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2a8b84:
    // 0x2a8b84: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2a8b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a8b88:
    // 0x2a8b88: 0xc0be8c0  jal         func_2FA300
label_2a8b8c:
    if (ctx->pc == 0x2A8B8Cu) {
        ctx->pc = 0x2A8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B88u;
        // 0x2a8b8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8B90u;
        goto label_2a8b90;
    }
    ctx->pc = 0x2A8B88u;
    SET_GPR_U32(ctx, 31, 0x2A8B90u);
    ctx->pc = 0x2A8B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8B88u;
    // 0x2a8b8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2A8B88u, 0x2A8B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8B90u;
label_2a8b90:
    // 0x2a8b90: 0x8e09bd30  lw          $t1, -0x42D0($s0)
    ctx->pc = 0x2a8b90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_2a8b94:
    // 0x2a8b94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a8b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a8b98:
    // 0x2a8b98: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2a8b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2a8b9c:
    // 0x2a8b9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a8b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8ba0:
    // 0x2a8ba0: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x2a8ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2a8ba4:
    // 0x2a8ba4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a8ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8ba8:
    // 0x2a8ba8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a8ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8bac:
    // 0x2a8bac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a8bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8bb0:
    // 0x2a8bb0: 0xc088178  jal         func_2205E0
label_2a8bb4:
    if (ctx->pc == 0x2A8BB4u) {
        ctx->pc = 0x2A8BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BB0u;
        // 0x2a8bb4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8BB8u;
        goto label_2a8bb8;
    }
    ctx->pc = 0x2A8BB0u;
    SET_GPR_U32(ctx, 31, 0x2A8BB8u);
    ctx->pc = 0x2A8BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8BB0u;
    // 0x2a8bb4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2A8BB0u, 0x2A8BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8BB8u;
label_2a8bb8:
    // 0x2a8bb8: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_2a8bbc:
    if (ctx->pc == 0x2A8BBCu) {
        ctx->pc = 0x2A8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BB8u;
        // 0x2a8bbc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8BC0u;
        goto label_2a8bc0;
    }
    ctx->pc = 0x2A8BB8u;
    {
        const bool branch_taken_0x2a8bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BB8u;
        // 0x2a8bbc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8bb8) {
            ctx->pc = 0x2A8E4Cu;
            goto label_2a8e4c;
        }
    }
    ctx->pc = 0x2A8BC0u;
label_2a8bc0:
    // 0x2a8bc0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2a8bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a8bc4:
    // 0x2a8bc4: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x2a8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
label_2a8bc8:
    // 0x2a8bc8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2a8bcc:
    if (ctx->pc == 0x2A8BCCu) {
        ctx->pc = 0x2A8BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BC8u;
        // 0x2a8bcc: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8BD0u;
        goto label_2a8bd0;
    }
    ctx->pc = 0x2A8BC8u;
    {
        const bool branch_taken_0x2a8bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BC8u;
        // 0x2a8bcc: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8bc8) {
            ctx->pc = 0x2A8BF8u;
            goto label_2a8bf8;
        }
    }
    ctx->pc = 0x2A8BD0u;
label_2a8bd0:
    // 0x2a8bd0: 0xc0a367c  jal         func_28D9F0
label_2a8bd4:
    if (ctx->pc == 0x2A8BD4u) {
        ctx->pc = 0x2A8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BD0u;
        // 0x2a8bd4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8BD8u;
        goto label_2a8bd8;
    }
    ctx->pc = 0x2A8BD0u;
    SET_GPR_U32(ctx, 31, 0x2A8BD8u);
    ctx->pc = 0x2A8BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8BD0u;
    // 0x2a8bd4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A8BD0u, 0x2A8BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8BD8u;
label_2a8bd8:
    // 0x2a8bd8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a8bdc:
    if (ctx->pc == 0x2A8BDCu) {
        ctx->pc = 0x2A8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BD8u;
        // 0x2a8bdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8BE0u;
        goto label_2a8be0;
    }
    ctx->pc = 0x2A8BD8u;
    {
        const bool branch_taken_0x2a8bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BD8u;
        // 0x2a8bdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8bd8) {
            ctx->pc = 0x2A8BF8u;
            goto label_2a8bf8;
        }
    }
    ctx->pc = 0x2A8BE0u;
label_2a8be0:
    // 0x2a8be0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a8be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a8be4:
    // 0x2a8be4: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x2a8be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2a8be8:
    // 0x2a8be8: 0x24071770  addiu       $a3, $zero, 0x1770
    ctx->pc = 0x2a8be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_2a8bec:
    // 0x2a8bec: 0x24080054  addiu       $t0, $zero, 0x54
    ctx->pc = 0x2a8becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2a8bf0:
    // 0x2a8bf0: 0xc0bed94  jal         func_2FB650
label_2a8bf4:
    if (ctx->pc == 0x2A8BF4u) {
        ctx->pc = 0x2A8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BF0u;
        // 0x2a8bf4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8BF8u;
        goto label_2a8bf8;
    }
    ctx->pc = 0x2A8BF0u;
    SET_GPR_U32(ctx, 31, 0x2A8BF8u);
    ctx->pc = 0x2A8BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8BF0u;
    // 0x2a8bf4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB650u, 0x2A8BF0u, 0x2A8BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8BF8u;
label_2a8bf8:
    // 0x2a8bf8: 0x10000094  b           . + 4 + (0x94 << 2)
label_2a8bfc:
    if (ctx->pc == 0x2A8BFCu) {
        ctx->pc = 0x2A8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BF8u;
        // 0x2a8bfc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8C00u;
        goto label_2a8c00;
    }
    ctx->pc = 0x2A8BF8u;
    {
        const bool branch_taken_0x2a8bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BF8u;
        // 0x2a8bfc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8bf8) {
            ctx->pc = 0x2A8E4Cu;
            goto label_2a8e4c;
        }
    }
    ctx->pc = 0x2A8C00u;
label_2a8c00:
    // 0x2a8c00: 0x14a20096  bne         $a1, $v0, . + 4 + (0x96 << 2)
label_2a8c04:
    if (ctx->pc == 0x2A8C04u) {
        ctx->pc = 0x2A8C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C00u;
        // 0x2a8c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8C08u;
        goto label_2a8c08;
    }
    ctx->pc = 0x2A8C00u;
    {
        const bool branch_taken_0x2a8c00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A8C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C00u;
        // 0x2a8c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c00) {
            ctx->pc = 0x2A8E5Cu;
            goto label_2a8e5c;
        }
    }
    ctx->pc = 0x2A8C08u;
label_2a8c08:
    // 0x2a8c08: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a8c0c:
    // 0x2a8c0c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a8c0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a8c10:
    // 0x2a8c10: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a8c14:
    // 0x2a8c14: 0x40f809  jalr        $v0
label_2a8c18:
    if (ctx->pc == 0x2A8C18u) {
        ctx->pc = 0x2A8C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C14u;
        // 0x2a8c18: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8C1Cu;
        goto label_2a8c1c;
    }
    ctx->pc = 0x2A8C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A8C1Cu);
        ctx->pc = 0x2A8C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C14u;
        // 0x2a8c18: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8C14u, 0x2A8C1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A8C1Cu;
label_2a8c1c:
    // 0x2a8c1c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x2a8c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2a8c20:
    // 0x2a8c20: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2a8c24:
    if (ctx->pc == 0x2A8C24u) {
        ctx->pc = 0x2A8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C20u;
        // 0x2a8c24: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8C28u;
        goto label_2a8c28;
    }
    ctx->pc = 0x2A8C20u;
    {
        const bool branch_taken_0x2a8c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C20u;
        // 0x2a8c24: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c20) {
            ctx->pc = 0x2A8C38u;
            goto label_2a8c38;
        }
    }
    ctx->pc = 0x2A8C28u;
label_2a8c28:
    // 0x2a8c28: 0xc10586e  jal         func_4161B8
label_2a8c2c:
    if (ctx->pc == 0x2A8C2Cu) {
        ctx->pc = 0x2A8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C28u;
        // 0x2a8c2c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8C30u;
        goto label_2a8c30;
    }
    ctx->pc = 0x2A8C28u;
    SET_GPR_U32(ctx, 31, 0x2A8C30u);
    ctx->pc = 0x2A8C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8C28u;
    // 0x2a8c2c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B8u, 0x2A8C28u, 0x2A8C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8C30u;
label_2a8c30:
    // 0x2a8c30: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2a8c34:
    if (ctx->pc == 0x2A8C34u) {
        ctx->pc = 0x2A8C38u;
        goto label_2a8c38;
    }
    ctx->pc = 0x2A8C30u;
    {
        const bool branch_taken_0x2a8c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8c30) {
            ctx->pc = 0x2A8CE8u;
            goto label_2a8ce8;
        }
    }
    ctx->pc = 0x2A8C38u;
label_2a8c38:
    // 0x2a8c38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a8c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a8c3c:
    // 0x2a8c3c: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x2a8c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2a8c40:
    // 0x2a8c40: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x2a8c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a8c44:
    // 0x2a8c44: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
label_2a8c48:
    if (ctx->pc == 0x2A8C48u) {
        ctx->pc = 0x2A8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C44u;
        // 0x2a8c48: 0x2642003c  addiu       $v0, $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8C4Cu;
        goto label_2a8c4c;
    }
    ctx->pc = 0x2A8C44u;
    {
        const bool branch_taken_0x2a8c44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C44u;
        // 0x2a8c48: 0x2642003c  addiu       $v0, $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c44) {
            ctx->pc = 0x2A8CE8u;
            goto label_2a8ce8;
        }
    }
    ctx->pc = 0x2A8C4Cu;
label_2a8c4c:
    // 0x2a8c4c: 0xc0e409a  jal         func_390268
label_2a8c50:
    if (ctx->pc == 0x2A8C50u) {
        ctx->pc = 0x2A8C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C4Cu;
        // 0x2a8c50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8C54u;
        goto label_2a8c54;
    }
    ctx->pc = 0x2A8C4Cu;
    SET_GPR_U32(ctx, 31, 0x2A8C54u);
    ctx->pc = 0x2A8C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8C4Cu;
    // 0x2a8c50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A8C4Cu, 0x2A8C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8C54u;
label_2a8c54:
    // 0x2a8c54: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_2a8c58:
    if (ctx->pc == 0x2A8C58u) {
        ctx->pc = 0x2A8C5Cu;
        goto label_2a8c5c;
    }
    ctx->pc = 0x2A8C54u;
    {
        const bool branch_taken_0x2a8c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8c54) {
            ctx->pc = 0x2A8CE8u;
            goto label_2a8ce8;
        }
    }
    ctx->pc = 0x2A8C5Cu;
label_2a8c5c:
    // 0x2a8c5c: 0xc087502  jal         func_21D408
label_2a8c60:
    if (ctx->pc == 0x2A8C60u) {
        ctx->pc = 0x2A8C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C5Cu;
        // 0x2a8c60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8C64u;
        goto label_2a8c64;
    }
    ctx->pc = 0x2A8C5Cu;
    SET_GPR_U32(ctx, 31, 0x2A8C64u);
    ctx->pc = 0x2A8C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8C5Cu;
    // 0x2a8c60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A8C5Cu, 0x2A8C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8C64u;
label_2a8c64:
    // 0x2a8c64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a8c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8c68:
    // 0x2a8c68: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x2a8c68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_2a8c6c:
    // 0x2a8c6c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2a8c70:
    if (ctx->pc == 0x2A8C70u) {
        ctx->pc = 0x2A8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C6Cu;
        // 0x2a8c70: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8C74u;
        goto label_2a8c74;
    }
    ctx->pc = 0x2A8C6Cu;
    {
        const bool branch_taken_0x2a8c6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C6Cu;
        // 0x2a8c70: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c6c) {
            ctx->pc = 0x2A8C80u;
            goto label_2a8c80;
        }
    }
    ctx->pc = 0x2A8C74u;
label_2a8c74:
    // 0x2a8c74: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a8c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a8c78:
    // 0x2a8c78: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a8c7c:
    if (ctx->pc == 0x2A8C7Cu) {
        ctx->pc = 0x2A8C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C78u;
        // 0x2a8c7c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8C80u;
        goto label_2a8c80;
    }
    ctx->pc = 0x2A8C78u;
    {
        const bool branch_taken_0x2a8c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C78u;
        // 0x2a8c7c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c78) {
            ctx->pc = 0x2A8C84u;
            goto label_2a8c84;
        }
    }
    ctx->pc = 0x2A8C80u;
label_2a8c80:
    // 0x2a8c80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8c84:
    // 0x2a8c84: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2a8c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2a8c88:
    // 0x2a8c88: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2a8c88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2a8c8c:
    // 0x2a8c8c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a8c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a8c90:
    // 0x2a8c90: 0x40f809  jalr        $v0
label_2a8c94:
    if (ctx->pc == 0x2A8C94u) {
        ctx->pc = 0x2A8C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C90u;
        // 0x2a8c94: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8C98u;
        goto label_2a8c98;
    }
    ctx->pc = 0x2A8C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A8C98u);
        ctx->pc = 0x2A8C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C90u;
        // 0x2a8c94: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8C90u, 0x2A8C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A8C98u;
label_2a8c98:
    // 0x2a8c98: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x2a8c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_2a8c9c:
    // 0x2a8c9c: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_2a8ca0:
    if (ctx->pc == 0x2A8CA0u) {
        ctx->pc = 0x2A8CA4u;
        goto label_2a8ca4;
    }
    ctx->pc = 0x2A8C9Cu;
    {
        const bool branch_taken_0x2a8c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a8c9c) {
            ctx->pc = 0x2A8CE8u;
            goto label_2a8ce8;
        }
    }
    ctx->pc = 0x2A8CA4u;
label_2a8ca4:
    // 0x2a8ca4: 0xc0a35f6  jal         func_28D7D8
label_2a8ca8:
    if (ctx->pc == 0x2A8CA8u) {
        ctx->pc = 0x2A8CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8CA4u;
        // 0x2a8ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8CACu;
        goto label_2a8cac;
    }
    ctx->pc = 0x2A8CA4u;
    SET_GPR_U32(ctx, 31, 0x2A8CACu);
    ctx->pc = 0x2A8CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8CA4u;
    // 0x2a8ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x2A8CA4u, 0x2A8CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8CACu;
label_2a8cac:
    // 0x2a8cac: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a8cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a8cb0:
    // 0x2a8cb0: 0x8e50003c  lw          $s0, 0x3C($s2)
    ctx->pc = 0x2a8cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2a8cb4:
    // 0x2a8cb4: 0xc105712  jal         func_415C48
label_2a8cb8:
    if (ctx->pc == 0x2A8CB8u) {
        ctx->pc = 0x2A8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8CB4u;
        // 0x2a8cb8: 0x248435a0  addiu       $a0, $a0, 0x35A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8CBCu;
        goto label_2a8cbc;
    }
    ctx->pc = 0x2A8CB4u;
    SET_GPR_U32(ctx, 31, 0x2A8CBCu);
    ctx->pc = 0x2A8CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8CB4u;
    // 0x2a8cb8: 0x248435a0  addiu       $a0, $a0, 0x35A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2A8CB4u, 0x2A8CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8CBCu;
label_2a8cbc:
    // 0x2a8cbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a8cbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8cc0:
    // 0x2a8cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8cc4:
    // 0x2a8cc4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2a8cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2a8cc8:
    // 0x2a8cc8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a8cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a8ccc:
    // 0x2a8ccc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a8cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8cd0:
    // 0x2a8cd0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a8cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a8cd4:
    // 0x2a8cd4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a8cd4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2a8cd8:
    // 0x2a8cd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8cd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8cdc:
    // 0x2a8cdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a8cdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8ce0:
    // 0x2a8ce0: 0xc0b68b0  jal         func_2DA2C0
label_2a8ce4:
    if (ctx->pc == 0x2A8CE4u) {
        ctx->pc = 0x2A8CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8CE0u;
        // 0x2a8ce4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8CE8u;
        goto label_2a8ce8;
    }
    ctx->pc = 0x2A8CE0u;
    SET_GPR_U32(ctx, 31, 0x2A8CE8u);
    ctx->pc = 0x2A8CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8CE0u;
    // 0x2a8ce4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2C0u, 0x2A8CE0u, 0x2A8CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8CE8u;
label_2a8ce8:
    // 0x2a8ce8: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_2a8cec:
    if (ctx->pc == 0x2A8CECu) {
        ctx->pc = 0x2A8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8CE8u;
        // 0x2a8cec: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8CF0u;
        goto label_2a8cf0;
    }
    ctx->pc = 0x2A8CE8u;
    {
        const bool branch_taken_0x2a8ce8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8CE8u;
        // 0x2a8cec: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8ce8) {
            ctx->pc = 0x2A8D28u;
            goto label_2a8d28;
        }
    }
    ctx->pc = 0x2A8CF0u;
label_2a8cf0:
    // 0x2a8cf0: 0x92420051  lbu         $v0, 0x51($s2)
    ctx->pc = 0x2a8cf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 81)));
label_2a8cf4:
    // 0x2a8cf4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2a8cf8:
    if (ctx->pc == 0x2A8CF8u) {
        ctx->pc = 0x2A8CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8CF4u;
        // 0x2a8cf8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8CFCu;
        goto label_2a8cfc;
    }
    ctx->pc = 0x2A8CF4u;
    {
        const bool branch_taken_0x2a8cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8CF4u;
        // 0x2a8cf8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8cf4) {
            ctx->pc = 0x2A8D28u;
            goto label_2a8d28;
        }
    }
    ctx->pc = 0x2A8CFCu;
label_2a8cfc:
    // 0x2a8cfc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a8cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a8d00:
    // 0x2a8d00: 0x86460040  lh          $a2, 0x40($s2)
    ctx->pc = 0x2a8d00u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
label_2a8d04:
    // 0x2a8d04: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2a8d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2a8d08:
    // 0x2a8d08: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2a8d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2a8d0c:
    // 0x2a8d0c: 0x8e470038  lw          $a3, 0x38($s2)
    ctx->pc = 0x2a8d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2a8d10:
    // 0x2a8d10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a8d10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d14:
    // 0x2a8d14: 0x8e480034  lw          $t0, 0x34($s2)
    ctx->pc = 0x2a8d14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2a8d18:
    // 0x2a8d18: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2a8d18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8d1c:
    // 0x2a8d1c: 0xc106e2c  jal         func_41B8B0
label_2a8d20:
    if (ctx->pc == 0x2A8D20u) {
        ctx->pc = 0x2A8D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D1Cu;
        // 0x2a8d20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8D24u;
        goto label_2a8d24;
    }
    ctx->pc = 0x2A8D1Cu;
    SET_GPR_U32(ctx, 31, 0x2A8D24u);
    ctx->pc = 0x2A8D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8D1Cu;
    // 0x2a8d20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B8B0u, 0x2A8D1Cu, 0x2A8D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8D24u;
label_2a8d24:
    // 0x2a8d24: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2a8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2a8d28:
    // 0x2a8d28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a8d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d2c:
    // 0x2a8d2c: 0xc08e2b8  jal         func_238AE0
label_2a8d30:
    if (ctx->pc == 0x2A8D30u) {
        ctx->pc = 0x2A8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D2Cu;
        // 0x2a8d30: 0x24514b00  addiu       $s1, $v0, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8D34u;
        goto label_2a8d34;
    }
    ctx->pc = 0x2A8D2Cu;
    SET_GPR_U32(ctx, 31, 0x2A8D34u);
    ctx->pc = 0x2A8D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8D2Cu;
    // 0x2a8d30: 0x24514b00  addiu       $s1, $v0, 0x4B00 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AE0u, 0x2A8D2Cu, 0x2A8D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8D34u;
label_2a8d34:
    // 0x2a8d34: 0xc06d026  jal         func_1B4098
label_2a8d38:
    if (ctx->pc == 0x2A8D38u) {
        ctx->pc = 0x2A8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D34u;
        // 0x2a8d38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8D3Cu;
        goto label_2a8d3c;
    }
    ctx->pc = 0x2A8D34u;
    SET_GPR_U32(ctx, 31, 0x2A8D3Cu);
    ctx->pc = 0x2A8D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8D34u;
    // 0x2a8d38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4098u, 0x2A8D34u, 0x2A8D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8D3Cu;
label_2a8d3c:
    // 0x2a8d3c: 0x87c40002  lh          $a0, 0x2($fp)
    ctx->pc = 0x2a8d3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_2a8d40:
    // 0x2a8d40: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a8d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a8d44:
    // 0x2a8d44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a8d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d48:
    // 0x2a8d48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8d48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d4c:
    // 0x2a8d4c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2a8d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2a8d50:
    // 0x2a8d50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a8d50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d54:
    // 0x2a8d54: 0xc105df6  jal         func_4177D8
label_2a8d58:
    if (ctx->pc == 0x2A8D58u) {
        ctx->pc = 0x2A8D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D54u;
        // 0x2a8d58: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8D5Cu;
        goto label_2a8d5c;
    }
    ctx->pc = 0x2A8D54u;
    SET_GPR_U32(ctx, 31, 0x2A8D5Cu);
    ctx->pc = 0x2A8D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8D54u;
    // 0x2a8d58: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2A8D54u, 0x2A8D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8D5Cu;
label_2a8d5c:
    // 0x2a8d5c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a8d5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d60:
    // 0x2a8d60: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_2a8d64:
    if (ctx->pc == 0x2A8D64u) {
        ctx->pc = 0x2A8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D60u;
        // 0x2a8d64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8D68u;
        goto label_2a8d68;
    }
    ctx->pc = 0x2A8D60u;
    {
        const bool branch_taken_0x2a8d60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D60u;
        // 0x2a8d64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8d60) {
            ctx->pc = 0x2A8DA8u;
            goto label_2a8da8;
        }
    }
    ctx->pc = 0x2A8D68u;
label_2a8d68:
    // 0x2a8d68: 0x87d00002  lh          $s0, 0x2($fp)
    ctx->pc = 0x2a8d68u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_2a8d6c:
    // 0x2a8d6c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2a8d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2a8d70:
    // 0x2a8d70: 0xc10587a  jal         func_4161E8
label_2a8d74:
    if (ctx->pc == 0x2A8D74u) {
        ctx->pc = 0x2A8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D70u;
        // 0x2a8d74: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8D78u;
        goto label_2a8d78;
    }
    ctx->pc = 0x2A8D70u;
    SET_GPR_U32(ctx, 31, 0x2A8D78u);
    ctx->pc = 0x2A8D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8D70u;
    // 0x2a8d74: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A8D70u, 0x2A8D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8D78u;
label_2a8d78:
    // 0x2a8d78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a8d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d7c:
    // 0x2a8d7c: 0xc091e56  jal         func_247958
label_2a8d80:
    if (ctx->pc == 0x2A8D80u) {
        ctx->pc = 0x2A8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D7Cu;
        // 0x2a8d80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8D84u;
        goto label_2a8d84;
    }
    ctx->pc = 0x2A8D7Cu;
    SET_GPR_U32(ctx, 31, 0x2A8D84u);
    ctx->pc = 0x2A8D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8D7Cu;
    // 0x2a8d80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247958u, 0x2A8D7Cu, 0x2A8D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8D84u;
label_2a8d84:
    // 0x2a8d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d88:
    // 0x2a8d88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a8d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d8c:
    // 0x2a8d8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a8d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d90:
    // 0x2a8d90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d94:
    // 0x2a8d94: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a8d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8d98:
    // 0x2a8d98: 0xc09381e  jal         func_24E078
label_2a8d9c:
    if (ctx->pc == 0x2A8D9Cu) {
        ctx->pc = 0x2A8D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D98u;
        // 0x2a8d9c: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8DA0u;
        goto label_2a8da0;
    }
    ctx->pc = 0x2A8D98u;
    SET_GPR_U32(ctx, 31, 0x2A8DA0u);
    ctx->pc = 0x2A8D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8D98u;
    // 0x2a8d9c: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2A8D98u, 0x2A8DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8DA0u;
label_2a8da0:
    // 0x2a8da0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2a8da4:
    if (ctx->pc == 0x2A8DA4u) {
        ctx->pc = 0x2A8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8DA0u;
        // 0x2a8da4: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8DA8u;
        goto label_2a8da8;
    }
    ctx->pc = 0x2A8DA0u;
    {
        const bool branch_taken_0x2a8da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8DA0u;
        // 0x2a8da4: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8da0) {
            ctx->pc = 0x2A8DBCu;
            goto label_2a8dbc;
        }
    }
    ctx->pc = 0x2A8DA8u;
label_2a8da8:
    // 0x2a8da8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a8da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a8dac:
    // 0x2a8dac: 0xc0b530e  jal         func_2D4C38
label_2a8db0:
    if (ctx->pc == 0x2A8DB0u) {
        ctx->pc = 0x2A8DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8DACu;
        // 0x2a8db0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8DB4u;
        goto label_2a8db4;
    }
    ctx->pc = 0x2A8DACu;
    SET_GPR_U32(ctx, 31, 0x2A8DB4u);
    ctx->pc = 0x2A8DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8DACu;
    // 0x2a8db0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4C38u, 0x2A8DACu, 0x2A8DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8DB4u;
label_2a8db4:
    // 0x2a8db4: 0x10000025  b           . + 4 + (0x25 << 2)
label_2a8db8:
    if (ctx->pc == 0x2A8DB8u) {
        ctx->pc = 0x2A8DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8DB4u;
        // 0x2a8db8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8DBCu;
        goto label_2a8dbc;
    }
    ctx->pc = 0x2A8DB4u;
    {
        const bool branch_taken_0x2a8db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8DB4u;
        // 0x2a8db8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8db4) {
            ctx->pc = 0x2A8E4Cu;
            goto label_2a8e4c;
        }
    }
    ctx->pc = 0x2A8DBCu;
label_2a8dbc:
    // 0x2a8dbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a8dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8dc0:
    // 0x2a8dc0: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_2a8dc4:
    if (ctx->pc == 0x2A8DC4u) {
        ctx->pc = 0x2A8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8DC0u;
        // 0x2a8dc4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8DC8u;
        goto label_2a8dc8;
    }
    ctx->pc = 0x2A8DC0u;
    {
        const bool branch_taken_0x2a8dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8DC0u;
        // 0x2a8dc4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8dc0) {
            ctx->pc = 0x2A8DD4u;
            goto label_2a8dd4;
        }
    }
    ctx->pc = 0x2A8DC8u;
label_2a8dc8:
    // 0x2a8dc8: 0x92420051  lbu         $v0, 0x51($s2)
    ctx->pc = 0x2a8dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 81)));
label_2a8dcc:
    // 0x2a8dcc: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_2a8dd0:
    if (ctx->pc == 0x2A8DD0u) {
        ctx->pc = 0x2A8DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8DCCu;
        // 0x2a8dd0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8DD4u;
        goto label_2a8dd4;
    }
    ctx->pc = 0x2A8DCCu;
    {
        const bool branch_taken_0x2a8dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A8DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8DCCu;
        // 0x2a8dd0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8dcc) {
            ctx->pc = 0x2A8DFCu;
            goto label_2a8dfc;
        }
    }
    ctx->pc = 0x2A8DD4u;
label_2a8dd4:
    // 0x2a8dd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a8dd8:
    // 0x2a8dd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a8dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8ddc:
    // 0x2a8ddc: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2a8ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a8de0:
    // 0x2a8de0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a8de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a8de4:
    // 0x2a8de4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2a8de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a8de8:
    // 0x2a8de8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a8de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8dec:
    // 0x2a8dec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a8decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8df0:
    // 0x2a8df0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a8df0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8df4:
    // 0x2a8df4: 0xc088178  jal         func_2205E0
label_2a8df8:
    if (ctx->pc == 0x2A8DF8u) {
        ctx->pc = 0x2A8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8DF4u;
        // 0x2a8df8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8DFCu;
        goto label_2a8dfc;
    }
    ctx->pc = 0x2A8DF4u;
    SET_GPR_U32(ctx, 31, 0x2A8DFCu);
    ctx->pc = 0x2A8DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8DF4u;
    // 0x2a8df8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2A8DF4u, 0x2A8DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8DFCu;
label_2a8dfc:
    // 0x2a8dfc: 0xc0a4e54  jal         func_293950
label_2a8e00:
    if (ctx->pc == 0x2A8E00u) {
        ctx->pc = 0x2A8E04u;
        goto label_2a8e04;
    }
    ctx->pc = 0x2A8DFCu;
    SET_GPR_U32(ctx, 31, 0x2A8E04u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A8DFCu, 0x2A8E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8E04u;
label_2a8e04:
    // 0x2a8e04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a8e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8e08:
    // 0x2a8e08: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2a8e0c:
    if (ctx->pc == 0x2A8E0Cu) {
        ctx->pc = 0x2A8E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E08u;
        // 0x2a8e0c: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8E10u;
        goto label_2a8e10;
    }
    ctx->pc = 0x2A8E08u;
    {
        const bool branch_taken_0x2a8e08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E08u;
        // 0x2a8e0c: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8e08) {
            ctx->pc = 0x2A8E3Cu;
            goto label_2a8e3c;
        }
    }
    ctx->pc = 0x2A8E10u;
label_2a8e10:
    // 0x2a8e10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a8e10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8e14:
    // 0x2a8e14: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a8e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a8e18:
    // 0x2a8e18: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a8e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a8e1c:
    // 0x2a8e1c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a8e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a8e20:
    // 0x2a8e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8e24:
    // 0x2a8e24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a8e28:
    // 0x2a8e28: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a8e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a8e2c:
    // 0x2a8e2c: 0x3400a  movz        $t0, $zero, $v1
    ctx->pc = 0x2a8e2cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_2a8e30:
    // 0x2a8e30: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2a8e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a8e34:
    // 0x2a8e34: 0xc0b6a3e  jal         func_2DA8F8
label_2a8e38:
    if (ctx->pc == 0x2A8E38u) {
        ctx->pc = 0x2A8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E34u;
        // 0x2a8e38: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8E3Cu;
        goto label_2a8e3c;
    }
    ctx->pc = 0x2A8E34u;
    SET_GPR_U32(ctx, 31, 0x2A8E3Cu);
    ctx->pc = 0x2A8E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8E34u;
    // 0x2a8e38: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8F8u, 0x2A8E34u, 0x2A8E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8E3Cu;
label_2a8e3c:
    // 0x2a8e3c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a8e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a8e40:
    // 0x2a8e40: 0xc0a35d6  jal         func_28D758
label_2a8e44:
    if (ctx->pc == 0x2A8E44u) {
        ctx->pc = 0x2A8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E40u;
        // 0x2a8e44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8E48u;
        goto label_2a8e48;
    }
    ctx->pc = 0x2A8E40u;
    SET_GPR_U32(ctx, 31, 0x2A8E48u);
    ctx->pc = 0x2A8E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8E40u;
    // 0x2a8e44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A8E40u, 0x2A8E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8E48u;
label_2a8e48:
    // 0x2a8e48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a8e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a8e4c:
    // 0x2a8e4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8e50:
    // 0x2a8e50: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a8e54:
    if (ctx->pc == 0x2A8E54u) {
        ctx->pc = 0x2A8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E50u;
        // 0x2a8e54: 0xae43004c  sw          $v1, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8E58u;
        goto label_2a8e58;
    }
    ctx->pc = 0x2A8E50u;
    {
        const bool branch_taken_0x2a8e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E50u;
        // 0x2a8e54: 0xae43004c  sw          $v1, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8e50) {
            ctx->pc = 0x2A8E5Cu;
            goto label_2a8e5c;
        }
    }
    ctx->pc = 0x2A8E58u;
label_2a8e58:
    // 0x2a8e58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8e5c:
    // 0x2a8e5c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2a8e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2a8e60:
    // 0x2a8e60: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2a8e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2a8e64:
    // 0x2a8e64: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2a8e64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2a8e68:
    // 0x2a8e68: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2a8e68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2a8e6c:
    // 0x2a8e6c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2a8e6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2a8e70:
    // 0x2a8e70: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2a8e70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2a8e74:
    // 0x2a8e74: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2a8e74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2a8e78:
    // 0x2a8e78: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2a8e78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a8e7c:
    // 0x2a8e7c: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2a8e7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a8e80:
    // 0x2a8e80: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a8e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a8e84:
    // 0x2a8e84: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2a8e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a8e88:
    // 0x2a8e88: 0x3e00008  jr          $ra
label_2a8e8c:
    if (ctx->pc == 0x2A8E8Cu) {
        ctx->pc = 0x2A8E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E88u;
        // 0x2a8e8c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8E90u;
        goto label_fallthrough_0x2a8e88;
    }
    ctx->pc = 0x2A8E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E88u;
        // 0x2a8e8c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a8e88:
    ctx->pc = 0x2A8E90u;
}
