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

// Function: sub_001B8530
// Address: 0x1b8530 - 0x1b8d38
void sub_001B8530_0x1b8530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8530_0x1b8530");
#endif

    switch (ctx->pc) {
        case 0x1b8530u: goto label_1b8530;
        case 0x1b8534u: goto label_1b8534;
        case 0x1b8538u: goto label_1b8538;
        case 0x1b853cu: goto label_1b853c;
        case 0x1b8540u: goto label_1b8540;
        case 0x1b8544u: goto label_1b8544;
        case 0x1b8548u: goto label_1b8548;
        case 0x1b854cu: goto label_1b854c;
        case 0x1b8550u: goto label_1b8550;
        case 0x1b8554u: goto label_1b8554;
        case 0x1b8558u: goto label_1b8558;
        case 0x1b855cu: goto label_1b855c;
        case 0x1b8560u: goto label_1b8560;
        case 0x1b8564u: goto label_1b8564;
        case 0x1b8568u: goto label_1b8568;
        case 0x1b856cu: goto label_1b856c;
        case 0x1b8570u: goto label_1b8570;
        case 0x1b8574u: goto label_1b8574;
        case 0x1b8578u: goto label_1b8578;
        case 0x1b857cu: goto label_1b857c;
        case 0x1b8580u: goto label_1b8580;
        case 0x1b8584u: goto label_1b8584;
        case 0x1b8588u: goto label_1b8588;
        case 0x1b858cu: goto label_1b858c;
        case 0x1b8590u: goto label_1b8590;
        case 0x1b8594u: goto label_1b8594;
        case 0x1b8598u: goto label_1b8598;
        case 0x1b859cu: goto label_1b859c;
        case 0x1b85a0u: goto label_1b85a0;
        case 0x1b85a4u: goto label_1b85a4;
        case 0x1b85a8u: goto label_1b85a8;
        case 0x1b85acu: goto label_1b85ac;
        case 0x1b85b0u: goto label_1b85b0;
        case 0x1b85b4u: goto label_1b85b4;
        case 0x1b85b8u: goto label_1b85b8;
        case 0x1b85bcu: goto label_1b85bc;
        case 0x1b85c0u: goto label_1b85c0;
        case 0x1b85c4u: goto label_1b85c4;
        case 0x1b85c8u: goto label_1b85c8;
        case 0x1b85ccu: goto label_1b85cc;
        case 0x1b85d0u: goto label_1b85d0;
        case 0x1b85d4u: goto label_1b85d4;
        case 0x1b85d8u: goto label_1b85d8;
        case 0x1b85dcu: goto label_1b85dc;
        case 0x1b85e0u: goto label_1b85e0;
        case 0x1b85e4u: goto label_1b85e4;
        case 0x1b85e8u: goto label_1b85e8;
        case 0x1b85ecu: goto label_1b85ec;
        case 0x1b85f0u: goto label_1b85f0;
        case 0x1b85f4u: goto label_1b85f4;
        case 0x1b85f8u: goto label_1b85f8;
        case 0x1b85fcu: goto label_1b85fc;
        case 0x1b8600u: goto label_1b8600;
        case 0x1b8604u: goto label_1b8604;
        case 0x1b8608u: goto label_1b8608;
        case 0x1b860cu: goto label_1b860c;
        case 0x1b8610u: goto label_1b8610;
        case 0x1b8614u: goto label_1b8614;
        case 0x1b8618u: goto label_1b8618;
        case 0x1b861cu: goto label_1b861c;
        case 0x1b8620u: goto label_1b8620;
        case 0x1b8624u: goto label_1b8624;
        case 0x1b8628u: goto label_1b8628;
        case 0x1b862cu: goto label_1b862c;
        case 0x1b8630u: goto label_1b8630;
        case 0x1b8634u: goto label_1b8634;
        case 0x1b8638u: goto label_1b8638;
        case 0x1b863cu: goto label_1b863c;
        case 0x1b8640u: goto label_1b8640;
        case 0x1b8644u: goto label_1b8644;
        case 0x1b8648u: goto label_1b8648;
        case 0x1b864cu: goto label_1b864c;
        case 0x1b8650u: goto label_1b8650;
        case 0x1b8654u: goto label_1b8654;
        case 0x1b8658u: goto label_1b8658;
        case 0x1b865cu: goto label_1b865c;
        case 0x1b8660u: goto label_1b8660;
        case 0x1b8664u: goto label_1b8664;
        case 0x1b8668u: goto label_1b8668;
        case 0x1b866cu: goto label_1b866c;
        case 0x1b8670u: goto label_1b8670;
        case 0x1b8674u: goto label_1b8674;
        case 0x1b8678u: goto label_1b8678;
        case 0x1b867cu: goto label_1b867c;
        case 0x1b8680u: goto label_1b8680;
        case 0x1b8684u: goto label_1b8684;
        case 0x1b8688u: goto label_1b8688;
        case 0x1b868cu: goto label_1b868c;
        case 0x1b8690u: goto label_1b8690;
        case 0x1b8694u: goto label_1b8694;
        case 0x1b8698u: goto label_1b8698;
        case 0x1b869cu: goto label_1b869c;
        case 0x1b86a0u: goto label_1b86a0;
        case 0x1b86a4u: goto label_1b86a4;
        case 0x1b86a8u: goto label_1b86a8;
        case 0x1b86acu: goto label_1b86ac;
        case 0x1b86b0u: goto label_1b86b0;
        case 0x1b86b4u: goto label_1b86b4;
        case 0x1b86b8u: goto label_1b86b8;
        case 0x1b86bcu: goto label_1b86bc;
        case 0x1b86c0u: goto label_1b86c0;
        case 0x1b86c4u: goto label_1b86c4;
        case 0x1b86c8u: goto label_1b86c8;
        case 0x1b86ccu: goto label_1b86cc;
        case 0x1b86d0u: goto label_1b86d0;
        case 0x1b86d4u: goto label_1b86d4;
        case 0x1b86d8u: goto label_1b86d8;
        case 0x1b86dcu: goto label_1b86dc;
        case 0x1b86e0u: goto label_1b86e0;
        case 0x1b86e4u: goto label_1b86e4;
        case 0x1b86e8u: goto label_1b86e8;
        case 0x1b86ecu: goto label_1b86ec;
        case 0x1b86f0u: goto label_1b86f0;
        case 0x1b86f4u: goto label_1b86f4;
        case 0x1b86f8u: goto label_1b86f8;
        case 0x1b86fcu: goto label_1b86fc;
        case 0x1b8700u: goto label_1b8700;
        case 0x1b8704u: goto label_1b8704;
        case 0x1b8708u: goto label_1b8708;
        case 0x1b870cu: goto label_1b870c;
        case 0x1b8710u: goto label_1b8710;
        case 0x1b8714u: goto label_1b8714;
        case 0x1b8718u: goto label_1b8718;
        case 0x1b871cu: goto label_1b871c;
        case 0x1b8720u: goto label_1b8720;
        case 0x1b8724u: goto label_1b8724;
        case 0x1b8728u: goto label_1b8728;
        case 0x1b872cu: goto label_1b872c;
        case 0x1b8730u: goto label_1b8730;
        case 0x1b8734u: goto label_1b8734;
        case 0x1b8738u: goto label_1b8738;
        case 0x1b873cu: goto label_1b873c;
        case 0x1b8740u: goto label_1b8740;
        case 0x1b8744u: goto label_1b8744;
        case 0x1b8748u: goto label_1b8748;
        case 0x1b874cu: goto label_1b874c;
        case 0x1b8750u: goto label_1b8750;
        case 0x1b8754u: goto label_1b8754;
        case 0x1b8758u: goto label_1b8758;
        case 0x1b875cu: goto label_1b875c;
        case 0x1b8760u: goto label_1b8760;
        case 0x1b8764u: goto label_1b8764;
        case 0x1b8768u: goto label_1b8768;
        case 0x1b876cu: goto label_1b876c;
        case 0x1b8770u: goto label_1b8770;
        case 0x1b8774u: goto label_1b8774;
        case 0x1b8778u: goto label_1b8778;
        case 0x1b877cu: goto label_1b877c;
        case 0x1b8780u: goto label_1b8780;
        case 0x1b8784u: goto label_1b8784;
        case 0x1b8788u: goto label_1b8788;
        case 0x1b878cu: goto label_1b878c;
        case 0x1b8790u: goto label_1b8790;
        case 0x1b8794u: goto label_1b8794;
        case 0x1b8798u: goto label_1b8798;
        case 0x1b879cu: goto label_1b879c;
        case 0x1b87a0u: goto label_1b87a0;
        case 0x1b87a4u: goto label_1b87a4;
        case 0x1b87a8u: goto label_1b87a8;
        case 0x1b87acu: goto label_1b87ac;
        case 0x1b87b0u: goto label_1b87b0;
        case 0x1b87b4u: goto label_1b87b4;
        case 0x1b87b8u: goto label_1b87b8;
        case 0x1b87bcu: goto label_1b87bc;
        case 0x1b87c0u: goto label_1b87c0;
        case 0x1b87c4u: goto label_1b87c4;
        case 0x1b87c8u: goto label_1b87c8;
        case 0x1b87ccu: goto label_1b87cc;
        case 0x1b87d0u: goto label_1b87d0;
        case 0x1b87d4u: goto label_1b87d4;
        case 0x1b87d8u: goto label_1b87d8;
        case 0x1b87dcu: goto label_1b87dc;
        case 0x1b87e0u: goto label_1b87e0;
        case 0x1b87e4u: goto label_1b87e4;
        case 0x1b87e8u: goto label_1b87e8;
        case 0x1b87ecu: goto label_1b87ec;
        case 0x1b87f0u: goto label_1b87f0;
        case 0x1b87f4u: goto label_1b87f4;
        case 0x1b87f8u: goto label_1b87f8;
        case 0x1b87fcu: goto label_1b87fc;
        case 0x1b8800u: goto label_1b8800;
        case 0x1b8804u: goto label_1b8804;
        case 0x1b8808u: goto label_1b8808;
        case 0x1b880cu: goto label_1b880c;
        case 0x1b8810u: goto label_1b8810;
        case 0x1b8814u: goto label_1b8814;
        case 0x1b8818u: goto label_1b8818;
        case 0x1b881cu: goto label_1b881c;
        case 0x1b8820u: goto label_1b8820;
        case 0x1b8824u: goto label_1b8824;
        case 0x1b8828u: goto label_1b8828;
        case 0x1b882cu: goto label_1b882c;
        case 0x1b8830u: goto label_1b8830;
        case 0x1b8834u: goto label_1b8834;
        case 0x1b8838u: goto label_1b8838;
        case 0x1b883cu: goto label_1b883c;
        case 0x1b8840u: goto label_1b8840;
        case 0x1b8844u: goto label_1b8844;
        case 0x1b8848u: goto label_1b8848;
        case 0x1b884cu: goto label_1b884c;
        case 0x1b8850u: goto label_1b8850;
        case 0x1b8854u: goto label_1b8854;
        case 0x1b8858u: goto label_1b8858;
        case 0x1b885cu: goto label_1b885c;
        case 0x1b8860u: goto label_1b8860;
        case 0x1b8864u: goto label_1b8864;
        case 0x1b8868u: goto label_1b8868;
        case 0x1b886cu: goto label_1b886c;
        case 0x1b8870u: goto label_1b8870;
        case 0x1b8874u: goto label_1b8874;
        case 0x1b8878u: goto label_1b8878;
        case 0x1b887cu: goto label_1b887c;
        case 0x1b8880u: goto label_1b8880;
        case 0x1b8884u: goto label_1b8884;
        case 0x1b8888u: goto label_1b8888;
        case 0x1b888cu: goto label_1b888c;
        case 0x1b8890u: goto label_1b8890;
        case 0x1b8894u: goto label_1b8894;
        case 0x1b8898u: goto label_1b8898;
        case 0x1b889cu: goto label_1b889c;
        case 0x1b88a0u: goto label_1b88a0;
        case 0x1b88a4u: goto label_1b88a4;
        case 0x1b88a8u: goto label_1b88a8;
        case 0x1b88acu: goto label_1b88ac;
        case 0x1b88b0u: goto label_1b88b0;
        case 0x1b88b4u: goto label_1b88b4;
        case 0x1b88b8u: goto label_1b88b8;
        case 0x1b88bcu: goto label_1b88bc;
        case 0x1b88c0u: goto label_1b88c0;
        case 0x1b88c4u: goto label_1b88c4;
        case 0x1b88c8u: goto label_1b88c8;
        case 0x1b88ccu: goto label_1b88cc;
        case 0x1b88d0u: goto label_1b88d0;
        case 0x1b88d4u: goto label_1b88d4;
        case 0x1b88d8u: goto label_1b88d8;
        case 0x1b88dcu: goto label_1b88dc;
        case 0x1b88e0u: goto label_1b88e0;
        case 0x1b88e4u: goto label_1b88e4;
        case 0x1b88e8u: goto label_1b88e8;
        case 0x1b88ecu: goto label_1b88ec;
        case 0x1b88f0u: goto label_1b88f0;
        case 0x1b88f4u: goto label_1b88f4;
        case 0x1b88f8u: goto label_1b88f8;
        case 0x1b88fcu: goto label_1b88fc;
        case 0x1b8900u: goto label_1b8900;
        case 0x1b8904u: goto label_1b8904;
        case 0x1b8908u: goto label_1b8908;
        case 0x1b890cu: goto label_1b890c;
        case 0x1b8910u: goto label_1b8910;
        case 0x1b8914u: goto label_1b8914;
        case 0x1b8918u: goto label_1b8918;
        case 0x1b891cu: goto label_1b891c;
        case 0x1b8920u: goto label_1b8920;
        case 0x1b8924u: goto label_1b8924;
        case 0x1b8928u: goto label_1b8928;
        case 0x1b892cu: goto label_1b892c;
        case 0x1b8930u: goto label_1b8930;
        case 0x1b8934u: goto label_1b8934;
        case 0x1b8938u: goto label_1b8938;
        case 0x1b893cu: goto label_1b893c;
        case 0x1b8940u: goto label_1b8940;
        case 0x1b8944u: goto label_1b8944;
        case 0x1b8948u: goto label_1b8948;
        case 0x1b894cu: goto label_1b894c;
        case 0x1b8950u: goto label_1b8950;
        case 0x1b8954u: goto label_1b8954;
        case 0x1b8958u: goto label_1b8958;
        case 0x1b895cu: goto label_1b895c;
        case 0x1b8960u: goto label_1b8960;
        case 0x1b8964u: goto label_1b8964;
        case 0x1b8968u: goto label_1b8968;
        case 0x1b896cu: goto label_1b896c;
        case 0x1b8970u: goto label_1b8970;
        case 0x1b8974u: goto label_1b8974;
        case 0x1b8978u: goto label_1b8978;
        case 0x1b897cu: goto label_1b897c;
        case 0x1b8980u: goto label_1b8980;
        case 0x1b8984u: goto label_1b8984;
        case 0x1b8988u: goto label_1b8988;
        case 0x1b898cu: goto label_1b898c;
        case 0x1b8990u: goto label_1b8990;
        case 0x1b8994u: goto label_1b8994;
        case 0x1b8998u: goto label_1b8998;
        case 0x1b899cu: goto label_1b899c;
        case 0x1b89a0u: goto label_1b89a0;
        case 0x1b89a4u: goto label_1b89a4;
        case 0x1b89a8u: goto label_1b89a8;
        case 0x1b89acu: goto label_1b89ac;
        case 0x1b89b0u: goto label_1b89b0;
        case 0x1b89b4u: goto label_1b89b4;
        case 0x1b89b8u: goto label_1b89b8;
        case 0x1b89bcu: goto label_1b89bc;
        case 0x1b89c0u: goto label_1b89c0;
        case 0x1b89c4u: goto label_1b89c4;
        case 0x1b89c8u: goto label_1b89c8;
        case 0x1b89ccu: goto label_1b89cc;
        case 0x1b89d0u: goto label_1b89d0;
        case 0x1b89d4u: goto label_1b89d4;
        case 0x1b89d8u: goto label_1b89d8;
        case 0x1b89dcu: goto label_1b89dc;
        case 0x1b89e0u: goto label_1b89e0;
        case 0x1b89e4u: goto label_1b89e4;
        case 0x1b89e8u: goto label_1b89e8;
        case 0x1b89ecu: goto label_1b89ec;
        case 0x1b89f0u: goto label_1b89f0;
        case 0x1b89f4u: goto label_1b89f4;
        case 0x1b89f8u: goto label_1b89f8;
        case 0x1b89fcu: goto label_1b89fc;
        case 0x1b8a00u: goto label_1b8a00;
        case 0x1b8a04u: goto label_1b8a04;
        case 0x1b8a08u: goto label_1b8a08;
        case 0x1b8a0cu: goto label_1b8a0c;
        case 0x1b8a10u: goto label_1b8a10;
        case 0x1b8a14u: goto label_1b8a14;
        case 0x1b8a18u: goto label_1b8a18;
        case 0x1b8a1cu: goto label_1b8a1c;
        case 0x1b8a20u: goto label_1b8a20;
        case 0x1b8a24u: goto label_1b8a24;
        case 0x1b8a28u: goto label_1b8a28;
        case 0x1b8a2cu: goto label_1b8a2c;
        case 0x1b8a30u: goto label_1b8a30;
        case 0x1b8a34u: goto label_1b8a34;
        case 0x1b8a38u: goto label_1b8a38;
        case 0x1b8a3cu: goto label_1b8a3c;
        case 0x1b8a40u: goto label_1b8a40;
        case 0x1b8a44u: goto label_1b8a44;
        case 0x1b8a48u: goto label_1b8a48;
        case 0x1b8a4cu: goto label_1b8a4c;
        case 0x1b8a50u: goto label_1b8a50;
        case 0x1b8a54u: goto label_1b8a54;
        case 0x1b8a58u: goto label_1b8a58;
        case 0x1b8a5cu: goto label_1b8a5c;
        case 0x1b8a60u: goto label_1b8a60;
        case 0x1b8a64u: goto label_1b8a64;
        case 0x1b8a68u: goto label_1b8a68;
        case 0x1b8a6cu: goto label_1b8a6c;
        case 0x1b8a70u: goto label_1b8a70;
        case 0x1b8a74u: goto label_1b8a74;
        case 0x1b8a78u: goto label_1b8a78;
        case 0x1b8a7cu: goto label_1b8a7c;
        case 0x1b8a80u: goto label_1b8a80;
        case 0x1b8a84u: goto label_1b8a84;
        case 0x1b8a88u: goto label_1b8a88;
        case 0x1b8a8cu: goto label_1b8a8c;
        case 0x1b8a90u: goto label_1b8a90;
        case 0x1b8a94u: goto label_1b8a94;
        case 0x1b8a98u: goto label_1b8a98;
        case 0x1b8a9cu: goto label_1b8a9c;
        case 0x1b8aa0u: goto label_1b8aa0;
        case 0x1b8aa4u: goto label_1b8aa4;
        case 0x1b8aa8u: goto label_1b8aa8;
        case 0x1b8aacu: goto label_1b8aac;
        case 0x1b8ab0u: goto label_1b8ab0;
        case 0x1b8ab4u: goto label_1b8ab4;
        case 0x1b8ab8u: goto label_1b8ab8;
        case 0x1b8abcu: goto label_1b8abc;
        case 0x1b8ac0u: goto label_1b8ac0;
        case 0x1b8ac4u: goto label_1b8ac4;
        case 0x1b8ac8u: goto label_1b8ac8;
        case 0x1b8accu: goto label_1b8acc;
        case 0x1b8ad0u: goto label_1b8ad0;
        case 0x1b8ad4u: goto label_1b8ad4;
        case 0x1b8ad8u: goto label_1b8ad8;
        case 0x1b8adcu: goto label_1b8adc;
        case 0x1b8ae0u: goto label_1b8ae0;
        case 0x1b8ae4u: goto label_1b8ae4;
        case 0x1b8ae8u: goto label_1b8ae8;
        case 0x1b8aecu: goto label_1b8aec;
        case 0x1b8af0u: goto label_1b8af0;
        case 0x1b8af4u: goto label_1b8af4;
        case 0x1b8af8u: goto label_1b8af8;
        case 0x1b8afcu: goto label_1b8afc;
        case 0x1b8b00u: goto label_1b8b00;
        case 0x1b8b04u: goto label_1b8b04;
        case 0x1b8b08u: goto label_1b8b08;
        case 0x1b8b0cu: goto label_1b8b0c;
        case 0x1b8b10u: goto label_1b8b10;
        case 0x1b8b14u: goto label_1b8b14;
        case 0x1b8b18u: goto label_1b8b18;
        case 0x1b8b1cu: goto label_1b8b1c;
        case 0x1b8b20u: goto label_1b8b20;
        case 0x1b8b24u: goto label_1b8b24;
        case 0x1b8b28u: goto label_1b8b28;
        case 0x1b8b2cu: goto label_1b8b2c;
        case 0x1b8b30u: goto label_1b8b30;
        case 0x1b8b34u: goto label_1b8b34;
        case 0x1b8b38u: goto label_1b8b38;
        case 0x1b8b3cu: goto label_1b8b3c;
        case 0x1b8b40u: goto label_1b8b40;
        case 0x1b8b44u: goto label_1b8b44;
        case 0x1b8b48u: goto label_1b8b48;
        case 0x1b8b4cu: goto label_1b8b4c;
        case 0x1b8b50u: goto label_1b8b50;
        case 0x1b8b54u: goto label_1b8b54;
        case 0x1b8b58u: goto label_1b8b58;
        case 0x1b8b5cu: goto label_1b8b5c;
        case 0x1b8b60u: goto label_1b8b60;
        case 0x1b8b64u: goto label_1b8b64;
        case 0x1b8b68u: goto label_1b8b68;
        case 0x1b8b6cu: goto label_1b8b6c;
        case 0x1b8b70u: goto label_1b8b70;
        case 0x1b8b74u: goto label_1b8b74;
        case 0x1b8b78u: goto label_1b8b78;
        case 0x1b8b7cu: goto label_1b8b7c;
        case 0x1b8b80u: goto label_1b8b80;
        case 0x1b8b84u: goto label_1b8b84;
        case 0x1b8b88u: goto label_1b8b88;
        case 0x1b8b8cu: goto label_1b8b8c;
        case 0x1b8b90u: goto label_1b8b90;
        case 0x1b8b94u: goto label_1b8b94;
        case 0x1b8b98u: goto label_1b8b98;
        case 0x1b8b9cu: goto label_1b8b9c;
        case 0x1b8ba0u: goto label_1b8ba0;
        case 0x1b8ba4u: goto label_1b8ba4;
        case 0x1b8ba8u: goto label_1b8ba8;
        case 0x1b8bacu: goto label_1b8bac;
        case 0x1b8bb0u: goto label_1b8bb0;
        case 0x1b8bb4u: goto label_1b8bb4;
        case 0x1b8bb8u: goto label_1b8bb8;
        case 0x1b8bbcu: goto label_1b8bbc;
        case 0x1b8bc0u: goto label_1b8bc0;
        case 0x1b8bc4u: goto label_1b8bc4;
        case 0x1b8bc8u: goto label_1b8bc8;
        case 0x1b8bccu: goto label_1b8bcc;
        case 0x1b8bd0u: goto label_1b8bd0;
        case 0x1b8bd4u: goto label_1b8bd4;
        case 0x1b8bd8u: goto label_1b8bd8;
        case 0x1b8bdcu: goto label_1b8bdc;
        case 0x1b8be0u: goto label_1b8be0;
        case 0x1b8be4u: goto label_1b8be4;
        case 0x1b8be8u: goto label_1b8be8;
        case 0x1b8becu: goto label_1b8bec;
        case 0x1b8bf0u: goto label_1b8bf0;
        case 0x1b8bf4u: goto label_1b8bf4;
        case 0x1b8bf8u: goto label_1b8bf8;
        case 0x1b8bfcu: goto label_1b8bfc;
        case 0x1b8c00u: goto label_1b8c00;
        case 0x1b8c04u: goto label_1b8c04;
        case 0x1b8c08u: goto label_1b8c08;
        case 0x1b8c0cu: goto label_1b8c0c;
        case 0x1b8c10u: goto label_1b8c10;
        case 0x1b8c14u: goto label_1b8c14;
        case 0x1b8c18u: goto label_1b8c18;
        case 0x1b8c1cu: goto label_1b8c1c;
        case 0x1b8c20u: goto label_1b8c20;
        case 0x1b8c24u: goto label_1b8c24;
        case 0x1b8c28u: goto label_1b8c28;
        case 0x1b8c2cu: goto label_1b8c2c;
        case 0x1b8c30u: goto label_1b8c30;
        case 0x1b8c34u: goto label_1b8c34;
        case 0x1b8c38u: goto label_1b8c38;
        case 0x1b8c3cu: goto label_1b8c3c;
        case 0x1b8c40u: goto label_1b8c40;
        case 0x1b8c44u: goto label_1b8c44;
        case 0x1b8c48u: goto label_1b8c48;
        case 0x1b8c4cu: goto label_1b8c4c;
        case 0x1b8c50u: goto label_1b8c50;
        case 0x1b8c54u: goto label_1b8c54;
        case 0x1b8c58u: goto label_1b8c58;
        case 0x1b8c5cu: goto label_1b8c5c;
        case 0x1b8c60u: goto label_1b8c60;
        case 0x1b8c64u: goto label_1b8c64;
        case 0x1b8c68u: goto label_1b8c68;
        case 0x1b8c6cu: goto label_1b8c6c;
        case 0x1b8c70u: goto label_1b8c70;
        case 0x1b8c74u: goto label_1b8c74;
        case 0x1b8c78u: goto label_1b8c78;
        case 0x1b8c7cu: goto label_1b8c7c;
        case 0x1b8c80u: goto label_1b8c80;
        case 0x1b8c84u: goto label_1b8c84;
        case 0x1b8c88u: goto label_1b8c88;
        case 0x1b8c8cu: goto label_1b8c8c;
        case 0x1b8c90u: goto label_1b8c90;
        case 0x1b8c94u: goto label_1b8c94;
        case 0x1b8c98u: goto label_1b8c98;
        case 0x1b8c9cu: goto label_1b8c9c;
        case 0x1b8ca0u: goto label_1b8ca0;
        case 0x1b8ca4u: goto label_1b8ca4;
        case 0x1b8ca8u: goto label_1b8ca8;
        case 0x1b8cacu: goto label_1b8cac;
        case 0x1b8cb0u: goto label_1b8cb0;
        case 0x1b8cb4u: goto label_1b8cb4;
        case 0x1b8cb8u: goto label_1b8cb8;
        case 0x1b8cbcu: goto label_1b8cbc;
        case 0x1b8cc0u: goto label_1b8cc0;
        case 0x1b8cc4u: goto label_1b8cc4;
        case 0x1b8cc8u: goto label_1b8cc8;
        case 0x1b8cccu: goto label_1b8ccc;
        case 0x1b8cd0u: goto label_1b8cd0;
        case 0x1b8cd4u: goto label_1b8cd4;
        case 0x1b8cd8u: goto label_1b8cd8;
        case 0x1b8cdcu: goto label_1b8cdc;
        case 0x1b8ce0u: goto label_1b8ce0;
        case 0x1b8ce4u: goto label_1b8ce4;
        case 0x1b8ce8u: goto label_1b8ce8;
        case 0x1b8cecu: goto label_1b8cec;
        case 0x1b8cf0u: goto label_1b8cf0;
        case 0x1b8cf4u: goto label_1b8cf4;
        case 0x1b8cf8u: goto label_1b8cf8;
        case 0x1b8cfcu: goto label_1b8cfc;
        case 0x1b8d00u: goto label_1b8d00;
        case 0x1b8d04u: goto label_1b8d04;
        case 0x1b8d08u: goto label_1b8d08;
        case 0x1b8d0cu: goto label_1b8d0c;
        case 0x1b8d10u: goto label_1b8d10;
        case 0x1b8d14u: goto label_1b8d14;
        case 0x1b8d18u: goto label_1b8d18;
        case 0x1b8d1cu: goto label_1b8d1c;
        case 0x1b8d20u: goto label_1b8d20;
        case 0x1b8d24u: goto label_1b8d24;
        case 0x1b8d28u: goto label_1b8d28;
        case 0x1b8d2cu: goto label_1b8d2c;
        case 0x1b8d30u: goto label_1b8d30;
        case 0x1b8d34u: goto label_1b8d34;
        default: break;
    }

    ctx->pc = 0x1b8530u;

label_1b8530:
    // 0x1b8530: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1b8530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1b8534:
    // 0x1b8534: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b8534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b8538:
    // 0x1b8538: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b853c:
    // 0x1b853c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1b853cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1b8540:
    // 0x1b8540: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1b8540u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1b8544:
    // 0x1b8544: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1b8544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1b8548:
    // 0x1b8548: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1b8548u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1b854c:
    // 0x1b854c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b854cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1b8550:
    // 0x1b8550: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b8550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8554:
    // 0x1b8554: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1b8554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1b8558:
    // 0x1b8558: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1b8558u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1b855c:
    // 0x1b855c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1b855cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1b8560:
    // 0x1b8560: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1b8560u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1b8564:
    // 0x1b8564: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1b8564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1b8568:
    // 0x1b8568: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1b8568u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1b856c:
    // 0x1b856c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1b856cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1b8570:
    // 0x1b8570: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1b8570u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1b8574:
    // 0x1b8574: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1b8574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1b8578:
    // 0x1b8578: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1b8578u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1b857c:
    // 0x1b857c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1b857cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1b8580:
    // 0x1b8580: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1b8580u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1b8584:
    // 0x1b8584: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b8584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b8588:
    // 0x1b8588: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1b8588u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1b858c:
    // 0x1b858c: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x1b858cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1b8590:
    // 0x1b8590: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1b8590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1b8594:
    // 0x1b8594: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x1b8594u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1b8598:
    // 0x1b8598: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b8598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b859c:
    // 0x1b859c: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1b859cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1b85a0:
    // 0x1b85a0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b85a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b85a4:
    // 0x1b85a4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1b85a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1b85a8:
    // 0x1b85a8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b85a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b85ac:
    // 0x1b85ac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b85acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1b85b0:
    // 0x1b85b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b85b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b85b4:
    // 0x1b85b4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b85b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1b85b8:
    // 0x1b85b8: 0x180b82d  daddu       $s7, $t4, $zero
    ctx->pc = 0x1b85b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_1b85bc:
    // 0x1b85bc: 0x3c013e42  lui         $at, 0x3E42
    ctx->pc = 0x1b85bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15938 << 16));
label_1b85c0:
    // 0x1b85c0: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1b85c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1b85c4:
    // 0x1b85c4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1b85c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1b85c8:
    // 0x1b85c8: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1b85c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1b85cc:
    // 0x1b85cc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b85ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1b85d0:
    // 0x1b85d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b85d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b85d4:
    // 0x1b85d4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1b85d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1b85d8:
    // 0x1b85d8: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x1b85d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1b85dc:
    // 0x1b85dc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1b85dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1b85e0:
    // 0x1b85e0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b85e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b85e4:
    // 0x1b85e4: 0x25b0d6d4  addiu       $s0, $t5, -0x292C
    ctx->pc = 0x1b85e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), 4294956756));
label_1b85e8:
    // 0x1b85e8: 0x3c014048  lui         $at, 0x4048
    ctx->pc = 0x1b85e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16456 << 16));
label_1b85ec:
    // 0x1b85ec: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1b85ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1b85f0:
    // 0x1b85f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b85f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b85f4:
    // 0x1b85f4: 0x3c01bba3  lui         $at, 0xBBA3
    ctx->pc = 0x1b85f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48035 << 16));
label_1b85f8:
    // 0x1b85f8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b85f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1b85fc:
    // 0x1b85fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b85fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b8600:
    // 0x1b8600: 0x3c013c34  lui         $at, 0x3C34
    ctx->pc = 0x1b8600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15412 << 16));
label_1b8604:
    // 0x1b8604: 0x34213958  ori         $at, $at, 0x3958
    ctx->pc = 0x1b8604u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14680);
label_1b8608:
    // 0x1b8608: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b8608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b860c:
    // 0x1b860c: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x1b860cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1b8610:
    // 0x1b8610: 0xe5a5d6d4  swc1        $f5, -0x292C($t5)
    ctx->pc = 0x1b8610u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294956756), bits); }
label_1b8614:
    // 0x1b8614: 0xe4a4d6e0  swc1        $f4, -0x2920($a1)
    ctx->pc = 0x1b8614u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956768), bits); }
label_1b8618:
    // 0x1b8618: 0xe443d6e4  swc1        $f3, -0x291C($v0)
    ctx->pc = 0x1b8618u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956772), bits); }
label_1b861c:
    // 0x1b861c: 0xe462d700  swc1        $f2, -0x2900($v1)
    ctx->pc = 0x1b861cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956800), bits); }
label_1b8620:
    // 0x1b8620: 0xe481d704  swc1        $f1, -0x28FC($a0)
    ctx->pc = 0x1b8620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956804), bits); }
label_1b8624:
    // 0x1b8624: 0xe5e7d6d8  swc1        $f7, -0x2928($t7)
    ctx->pc = 0x1b8624u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294956760), bits); }
label_1b8628:
    // 0x1b8628: 0xe5c6d6dc  swc1        $f6, -0x2924($t6)
    ctx->pc = 0x1b8628u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294956764), bits); }
label_1b862c:
    // 0x1b862c: 0xe4c0d6fc  swc1        $f0, -0x2904($a2)
    ctx->pc = 0x1b862cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956796), bits); }
label_1b8630:
    // 0x1b8630: 0xe580d6e8  swc1        $f0, -0x2918($t4)
    ctx->pc = 0x1b8630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294956776), bits); }
label_1b8634:
    // 0x1b8634: 0xe540d6ec  swc1        $f0, -0x2914($t2)
    ctx->pc = 0x1b8634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294956780), bits); }
label_1b8638:
    // 0x1b8638: 0xe560d6f0  swc1        $f0, -0x2910($t3)
    ctx->pc = 0x1b8638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294956784), bits); }
label_1b863c:
    // 0x1b863c: 0xe500d6f4  swc1        $f0, -0x290C($t0)
    ctx->pc = 0x1b863cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294956788), bits); }
label_1b8640:
    // 0x1b8640: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
label_1b8644:
    if (ctx->pc == 0x1B8644u) {
        ctx->pc = 0x1B8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8640u;
        // 0x1b8644: 0xe520d6f8  swc1        $f0, -0x2908($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294956792), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8648u;
        goto label_1b8648;
    }
    ctx->pc = 0x1B8640u;
    {
        const bool branch_taken_0x1b8640 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8640u;
        // 0x1b8644: 0xe520d6f8  swc1        $f0, -0x2908($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294956792), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8640) {
            ctx->pc = 0x1B866Cu;
            goto label_1b866c;
        }
    }
    ctx->pc = 0x1B8648u;
label_1b8648:
    // 0x1b8648: 0xc06e0c8  jal         func_1B8320
label_1b864c:
    if (ctx->pc == 0x1B864Cu) {
        ctx->pc = 0x1B864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8648u;
        // 0x1b864c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8650u;
        goto label_1b8650;
    }
    ctx->pc = 0x1B8648u;
    SET_GPR_U32(ctx, 31, 0x1B8650u);
    ctx->pc = 0x1B864Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8648u;
    // 0x1b864c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8320u, 0x1B8648u, 0x1B8650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8650u;
label_1b8650:
    // 0x1b8650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8654:
    // 0x1b8654: 0x144301a7  bne         $v0, $v1, . + 4 + (0x1A7 << 2)
label_1b8658:
    if (ctx->pc == 0x1B8658u) {
        ctx->pc = 0x1B8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8654u;
        // 0x1b8658: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B865Cu;
        goto label_1b865c;
    }
    ctx->pc = 0x1B8654u;
    {
        const bool branch_taken_0x1b8654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8654u;
        // 0x1b8658: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8654) {
            ctx->pc = 0x1B8CF4u;
            goto label_1b8cf4;
        }
    }
    ctx->pc = 0x1B865Cu;
label_1b865c:
    // 0x1b865c: 0x8e420468  lw          $v0, 0x468($s2)
    ctx->pc = 0x1b865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1128)));
label_1b8660:
    // 0x1b8660: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1b8660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b8664:
    // 0x1b8664: 0x504001a4  beql        $v0, $zero, . + 4 + (0x1A4 << 2)
label_1b8668:
    if (ctx->pc == 0x1B8668u) {
        ctx->pc = 0x1B8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8664u;
        // 0x1b8668: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B866Cu;
        goto label_1b866c;
    }
    ctx->pc = 0x1B8664u;
    {
        const bool branch_taken_0x1b8664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8664) {
            ctx->pc = 0x1B8668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8664u;
            // 0x1b8668: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8CF8u;
            goto label_1b8cf8;
        }
    }
    ctx->pc = 0x1B866Cu;
label_1b866c:
    // 0x1b866c: 0x8e420478  lw          $v0, 0x478($s2)
    ctx->pc = 0x1b866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1144)));
label_1b8670:
    // 0x1b8670: 0x504001a1  beql        $v0, $zero, . + 4 + (0x1A1 << 2)
label_1b8674:
    if (ctx->pc == 0x1B8674u) {
        ctx->pc = 0x1B8674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8670u;
        // 0x1b8674: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8678u;
        goto label_1b8678;
    }
    ctx->pc = 0x1B8670u;
    {
        const bool branch_taken_0x1b8670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8670) {
            ctx->pc = 0x1B8674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8670u;
            // 0x1b8674: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8CF8u;
            goto label_1b8cf8;
        }
    }
    ctx->pc = 0x1B8678u;
label_1b8678:
    // 0x1b8678: 0x8e440468  lw          $a0, 0x468($s2)
    ctx->pc = 0x1b8678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1128)));
label_1b867c:
    // 0x1b867c: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x1b867cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1b8680:
    // 0x1b8680: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x1b8680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1b8684:
    // 0x1b8684: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b8684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1b8688:
    // 0x1b8688: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x1b8688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b868c:
    // 0x1b868c: 0xe6400454  swc1        $f0, 0x454($s2)
    ctx->pc = 0x1b868cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1108), bits); }
label_1b8690:
    // 0x1b8690: 0x90620464  lbu         $v0, 0x464($v1)
    ctx->pc = 0x1b8690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1124)));
label_1b8694:
    // 0x1b8694: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_1b8698:
    if (ctx->pc == 0x1B8698u) {
        ctx->pc = 0x1B8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8694u;
        // 0x1b8698: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B869Cu;
        goto label_1b869c;
    }
    ctx->pc = 0x1B8694u;
    {
        const bool branch_taken_0x1b8694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8694u;
        // 0x1b8698: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8694) {
            ctx->pc = 0x1B86ECu;
            goto label_1b86ec;
        }
    }
    ctx->pc = 0x1B869Cu;
label_1b869c:
    // 0x1b869c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b869cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b86a0:
    // 0x1b86a0: 0x8c420458  lw          $v0, 0x458($v0)
    ctx->pc = 0x1b86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1112)));
label_1b86a4:
    // 0x1b86a4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1b86a8:
    if (ctx->pc == 0x1B86A8u) {
        ctx->pc = 0x1B86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86A4u;
        // 0x1b86a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86ACu;
        goto label_1b86ac;
    }
    ctx->pc = 0x1B86A4u;
    {
        const bool branch_taken_0x1b86a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86A4u;
        // 0x1b86a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86a4) {
            ctx->pc = 0x1B86C0u;
            goto label_1b86c0;
        }
    }
    ctx->pc = 0x1B86ACu;
label_1b86ac:
    // 0x1b86ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b86acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b86b0:
    // 0x1b86b0: 0x0  nop
    ctx->pc = 0x1b86b0u;
    // NOP
label_1b86b4:
    // 0x1b86b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b86b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1b86b8:
    // 0x1b86b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1b86bc:
    if (ctx->pc == 0x1B86BCu) {
        ctx->pc = 0x1B86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86B8u;
        // 0x1b86bc: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86C0u;
        goto label_1b86c0;
    }
    ctx->pc = 0x1B86B8u;
    {
        const bool branch_taken_0x1b86b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86B8u;
        // 0x1b86bc: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86b8) {
            ctx->pc = 0x1B86DCu;
            goto label_1b86dc;
        }
    }
    ctx->pc = 0x1B86C0u;
label_1b86c0:
    // 0x1b86c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b86c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b86c4:
    // 0x1b86c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b86c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b86c8:
    // 0x1b86c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b86c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b86cc:
    // 0x1b86cc: 0x0  nop
    ctx->pc = 0x1b86ccu;
    // NOP
label_1b86d0:
    // 0x1b86d0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b86d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1b86d4:
    // 0x1b86d4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b86d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b86d8:
    // 0x1b86d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b86d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b86dc:
    // 0x1b86dc: 0xc6410454  lwc1        $f1, 0x454($s2)
    ctx->pc = 0x1b86dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b86e0:
    // 0x1b86e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b86e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b86e4:
    // 0x1b86e4: 0x10000014  b           . + 4 + (0x14 << 2)
label_1b86e8:
    if (ctx->pc == 0x1B86E8u) {
        ctx->pc = 0x1B86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86E4u;
        // 0x1b86e8: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86ECu;
        goto label_1b86ec;
    }
    ctx->pc = 0x1B86E4u;
    {
        const bool branch_taken_0x1b86e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86E4u;
        // 0x1b86e8: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86e4) {
            ctx->pc = 0x1B8738u;
            goto label_1b8738;
        }
    }
    ctx->pc = 0x1B86ECu;
label_1b86ec:
    // 0x1b86ec: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b86f0:
    // 0x1b86f0: 0x8c420458  lw          $v0, 0x458($v0)
    ctx->pc = 0x1b86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1112)));
label_1b86f4:
    // 0x1b86f4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1b86f8:
    if (ctx->pc == 0x1B86F8u) {
        ctx->pc = 0x1B86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86F4u;
        // 0x1b86f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86FCu;
        goto label_1b86fc;
    }
    ctx->pc = 0x1B86F4u;
    {
        const bool branch_taken_0x1b86f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86F4u;
        // 0x1b86f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86f4) {
            ctx->pc = 0x1B8710u;
            goto label_1b8710;
        }
    }
    ctx->pc = 0x1B86FCu;
label_1b86fc:
    // 0x1b86fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b86fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b8700:
    // 0x1b8700: 0x0  nop
    ctx->pc = 0x1b8700u;
    // NOP
label_1b8704:
    // 0x1b8704: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b8704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1b8708:
    // 0x1b8708: 0x10000008  b           . + 4 + (0x8 << 2)
label_1b870c:
    if (ctx->pc == 0x1B870Cu) {
        ctx->pc = 0x1B870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8708u;
        // 0x1b870c: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8710u;
        goto label_1b8710;
    }
    ctx->pc = 0x1B8708u;
    {
        const bool branch_taken_0x1b8708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8708u;
        // 0x1b870c: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8708) {
            ctx->pc = 0x1B872Cu;
            goto label_1b872c;
        }
    }
    ctx->pc = 0x1B8710u;
label_1b8710:
    // 0x1b8710: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b8710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b8714:
    // 0x1b8714: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b8714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b8718:
    // 0x1b8718: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b8718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b871c:
    // 0x1b871c: 0x0  nop
    ctx->pc = 0x1b871cu;
    // NOP
label_1b8720:
    // 0x1b8720: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b8720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1b8724:
    // 0x1b8724: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b8724u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b8728:
    // 0x1b8728: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b8728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b872c:
    // 0x1b872c: 0xc6410454  lwc1        $f1, 0x454($s2)
    ctx->pc = 0x1b872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8730:
    // 0x1b8730: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b8730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b8734:
    // 0x1b8734: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b8734u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b8738:
    // 0x1b8738: 0xe6410454  swc1        $f1, 0x454($s2)
    ctx->pc = 0x1b8738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1108), bits); }
label_1b873c:
    // 0x1b873c: 0xc6410454  lwc1        $f1, 0x454($s2)
    ctx->pc = 0x1b873cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8740:
    // 0x1b8740: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b8740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8744:
    // 0x1b8744: 0x0  nop
    ctx->pc = 0x1b8744u;
    // NOP
label_1b8748:
    // 0x1b8748: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b8748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b874c:
    // 0x1b874c: 0x0  nop
    ctx->pc = 0x1b874cu;
    // NOP
label_1b8750:
    // 0x1b8750: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1b8754:
    if (ctx->pc == 0x1B8754u) {
        ctx->pc = 0x1B8758u;
        goto label_1b8758;
    }
    ctx->pc = 0x1B8750u;
    {
        const bool branch_taken_0x1b8750 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8750) {
            ctx->pc = 0x1B876Cu;
            goto label_1b876c;
        }
    }
    ctx->pc = 0x1B8758u;
label_1b8758:
    // 0x1b8758: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1b8758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_1b875c:
    // 0x1b875c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b875cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1b8760:
    // 0x1b8760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8764:
    // 0x1b8764: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b8768:
    if (ctx->pc == 0x1B8768u) {
        ctx->pc = 0x1B8768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8764u;
        // 0x1b8768: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B876Cu;
        goto label_1b876c;
    }
    ctx->pc = 0x1B8764u;
    {
        const bool branch_taken_0x1b8764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8764u;
        // 0x1b8768: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8764) {
            ctx->pc = 0x1B8790u;
            goto label_1b8790;
        }
    }
    ctx->pc = 0x1B876Cu;
label_1b876c:
    // 0x1b876c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1b876cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_1b8770:
    // 0x1b8770: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b8770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1b8774:
    // 0x1b8774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8778:
    // 0x1b8778: 0x0  nop
    ctx->pc = 0x1b8778u;
    // NOP
label_1b877c:
    // 0x1b877c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b877cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8780:
    // 0x1b8780: 0x0  nop
    ctx->pc = 0x1b8780u;
    // NOP
label_1b8784:
    // 0x1b8784: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1b8788:
    if (ctx->pc == 0x1B8788u) {
        ctx->pc = 0x1B8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8784u;
        // 0x1b8788: 0x8e440468  lw          $a0, 0x468($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B878Cu;
        goto label_1b878c;
    }
    ctx->pc = 0x1B8784u;
    {
        const bool branch_taken_0x1b8784 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8784) {
            ctx->pc = 0x1B8788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8784u;
            // 0x1b8788: 0x8e440468  lw          $a0, 0x468($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8798u;
            goto label_1b8798;
        }
    }
    ctx->pc = 0x1B878Cu;
label_1b878c:
    // 0x1b878c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b878cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b8790:
    // 0x1b8790: 0xe6400454  swc1        $f0, 0x454($s2)
    ctx->pc = 0x1b8790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1108), bits); }
label_1b8794:
    // 0x1b8794: 0x8e440468  lw          $a0, 0x468($s2)
    ctx->pc = 0x1b8794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1128)));
label_1b8798:
    // 0x1b8798: 0x26510040  addiu       $s1, $s2, 0x40
    ctx->pc = 0x1b8798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1b879c:
    // 0x1b879c: 0xc64c0454  lwc1        $f12, 0x454($s2)
    ctx->pc = 0x1b879cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b87a0:
    // 0x1b87a0: 0x26550480  addiu       $s5, $s2, 0x480
    ctx->pc = 0x1b87a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
label_1b87a4:
    // 0x1b87a4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1b87a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1b87a8:
    // 0x1b87a8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1b87a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b87ac:
    // 0x1b87ac: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1b87acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1b87b0:
    // 0x1b87b0: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1b87b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b87b4:
    // 0x1b87b4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x1b87b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1b87b8:
    // 0x1b87b8: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1b87b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_1b87bc:
    // 0x1b87bc: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1b87bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1b87c0:
    // 0x1b87c0: 0x84620090  lh          $v0, 0x90($v1)
    ctx->pc = 0x1b87c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1b87c4:
    // 0x1b87c4: 0x8c650094  lw          $a1, 0x94($v1)
    ctx->pc = 0x1b87c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1b87c8:
    // 0x1b87c8: 0xa0f809  jalr        $a1
label_1b87cc:
    if (ctx->pc == 0x1B87CCu) {
        ctx->pc = 0x1B87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87C8u;
        // 0x1b87cc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B87D0u;
        goto label_1b87d0;
    }
    ctx->pc = 0x1B87C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1B87D0u);
        ctx->pc = 0x1B87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87C8u;
        // 0x1b87cc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B87C8u, 0x1B87D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B87D0u;
label_1b87d0:
    // 0x1b87d0: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1b87d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b87d4:
    // 0x1b87d4: 0x0  nop
    ctx->pc = 0x1b87d4u;
    // NOP
label_1b87d8:
    // 0x1b87d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b87dc:
    // 0x1b87dc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1b87dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1b87e0:
    // 0x1b87e0: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1b87e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1b87e4:
    // 0x1b87e4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1b87e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1b87e8:
    // 0x1b87e8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1b87e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1b87ec:
    // 0x1b87ec: 0x60f809  jalr        $v1
label_1b87f0:
    if (ctx->pc == 0x1B87F0u) {
        ctx->pc = 0x1B87F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87ECu;
        // 0x1b87f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B87F4u;
        goto label_1b87f4;
    }
    ctx->pc = 0x1B87ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B87F4u);
        ctx->pc = 0x1B87F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87ECu;
        // 0x1b87f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B87ECu, 0x1B87F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B87F4u;
label_1b87f4:
    // 0x1b87f4: 0x661fff8  bgez        $s3, . + 4 + (-0x8 << 2)
label_1b87f8:
    if (ctx->pc == 0x1B87F8u) {
        ctx->pc = 0x1B87F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87F4u;
        // 0x1b87f8: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B87FCu;
        goto label_1b87fc;
    }
    ctx->pc = 0x1B87F4u;
    {
        const bool branch_taken_0x1b87f4 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1B87F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87F4u;
        // 0x1b87f8: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b87f4) {
            ctx->pc = 0x1B87D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b87d8;
        }
    }
    ctx->pc = 0x1B87FCu;
label_1b87fc:
    // 0x1b87fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b87fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b8800:
    // 0x1b8800: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8804:
    // 0x1b8804: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x1b8804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_1b8808:
    // 0x1b8808: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1b8808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1b880c:
    // 0x1b880c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1b880cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b8810:
    // 0x1b8810: 0xc047e6c  jal         func_11F9B0
label_1b8814:
    if (ctx->pc == 0x1B8814u) {
        ctx->pc = 0x1B8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8810u;
        // 0x1b8814: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8818u;
        goto label_1b8818;
    }
    ctx->pc = 0x1B8810u;
    SET_GPR_U32(ctx, 31, 0x1B8818u);
    ctx->pc = 0x1B8814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8810u;
    // 0x1b8814: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1B8810u, 0x1B8818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8818u;
label_1b8818:
    // 0x1b8818: 0x8e450474  lw          $a1, 0x474($s2)
    ctx->pc = 0x1b8818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1140)));
label_1b881c:
    // 0x1b881c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b881cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b8820:
    // 0x1b8820: 0x2484d670  addiu       $a0, $a0, -0x2990
    ctx->pc = 0x1b8820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956656));
label_1b8824:
    // 0x1b8824: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b8824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b8828:
    // 0x1b8828: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1b8828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1b882c:
    // 0x1b882c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b882cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b8830:
    // 0x1b8830: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b8830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b8834:
    // 0x1b8834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b8834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b8838:
    // 0x1b8838: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b8838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1b883c:
    // 0x1b883c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b883cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b8840:
    // 0x1b8840: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1b8840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8844:
    // 0x1b8844: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1b8844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8848:
    // 0x1b8848: 0x8c44cdb4  lw          $a0, -0x324C($v0)
    ctx->pc = 0x1b8848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1b884c:
    // 0x1b884c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1b884cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1b8850:
    // 0x1b8850: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1b8850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b8854:
    // 0x1b8854: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x1b8854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_1b8858:
    // 0x1b8858: 0xe683000c  swc1        $f3, 0xC($s4)
    ctx->pc = 0x1b8858u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1b885c:
    // 0x1b885c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1b885cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b8860:
    // 0x1b8860: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1b8860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1b8864:
    // 0x1b8864: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_1b8868:
    if (ctx->pc == 0x1B8868u) {
        ctx->pc = 0x1B8868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8864u;
        // 0x1b8868: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B886Cu;
        goto label_1b886c;
    }
    ctx->pc = 0x1B8864u;
    {
        const bool branch_taken_0x1b8864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8864u;
        // 0x1b8868: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8864) {
            ctx->pc = 0x1B8934u;
            goto label_1b8934;
        }
    }
    ctx->pc = 0x1B886Cu;
label_1b886c:
    // 0x1b886c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1b8870:
    if (ctx->pc == 0x1B8870u) {
        ctx->pc = 0x1B8870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B886Cu;
        // 0x1b8870: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8874u;
        goto label_1b8874;
    }
    ctx->pc = 0x1B886Cu;
    {
        const bool branch_taken_0x1b886c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B886Cu;
        // 0x1b8870: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b886c) {
            ctx->pc = 0x1B88CCu;
            goto label_1b88cc;
        }
    }
    ctx->pc = 0x1B8874u;
label_1b8874:
    // 0x1b8874: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_1b8878:
    if (ctx->pc == 0x1B8878u) {
        ctx->pc = 0x1B8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8874u;
        // 0x1b8878: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B887Cu;
        goto label_1b887c;
    }
    ctx->pc = 0x1B8874u;
    {
        const bool branch_taken_0x1b8874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8874u;
        // 0x1b8878: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8874) {
            ctx->pc = 0x1B89D4u;
            goto label_1b89d4;
        }
    }
    ctx->pc = 0x1B887Cu;
label_1b887c:
    // 0x1b887c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1b887cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_1b8880:
    // 0x1b8880: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1b8880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1b8884:
    // 0x1b8884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8888:
    // 0x1b8888: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1b8888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_1b888c:
    // 0x1b888c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b888cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1b8890:
    // 0x1b8890: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b8890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b8894:
    // 0x1b8894: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b8894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b8898:
    // 0x1b8898: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1b8898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1b889c:
    // 0x1b889c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b889cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b88a0:
    // 0x1b88a0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1b88a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1b88a4:
    // 0x1b88a4: 0xe6c0d6ec  swc1        $f0, -0x2914($s6)
    ctx->pc = 0x1b88a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4294956780), bits); }
label_1b88a8:
    // 0x1b88a8: 0xe443d6f4  swc1        $f3, -0x290C($v0)
    ctx->pc = 0x1b88a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956788), bits); }
label_1b88ac:
    // 0x1b88ac: 0xe461d6f8  swc1        $f1, -0x2908($v1)
    ctx->pc = 0x1b88acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956792), bits); }
label_1b88b0:
    // 0x1b88b0: 0xe4a2d6fc  swc1        $f2, -0x2904($a1)
    ctx->pc = 0x1b88b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956796), bits); }
label_1b88b4:
    // 0x1b88b4: 0xe6e0d6e8  swc1        $f0, -0x2918($s7)
    ctx->pc = 0x1b88b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294956776), bits); }
label_1b88b8:
    // 0x1b88b8: 0x3c013b03  lui         $at, 0x3B03
    ctx->pc = 0x1b88b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15107 << 16));
label_1b88bc:
    // 0x1b88bc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b88bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1b88c0:
    // 0x1b88c0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1b88c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1b88c4:
    // 0x1b88c4: 0x10000043  b           . + 4 + (0x43 << 2)
label_1b88c8:
    if (ctx->pc == 0x1B88C8u) {
        ctx->pc = 0x1B88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88C4u;
        // 0x1b88c8: 0xe7c2d6f0  swc1        $f2, -0x2910($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294956784), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B88CCu;
        goto label_1b88cc;
    }
    ctx->pc = 0x1B88C4u;
    {
        const bool branch_taken_0x1b88c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88C4u;
        // 0x1b88c8: 0xe7c2d6f0  swc1        $f2, -0x2910($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294956784), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88c4) {
            ctx->pc = 0x1B89D4u;
            goto label_1b89d4;
        }
    }
    ctx->pc = 0x1B88CCu;
label_1b88cc:
    // 0x1b88cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b88d0:
    if (ctx->pc == 0x1B88D0u) {
        ctx->pc = 0x1B88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88CCu;
        // 0x1b88d0: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B88D4u;
        goto label_1b88d4;
    }
    ctx->pc = 0x1B88CCu;
    {
        const bool branch_taken_0x1b88cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88CCu;
        // 0x1b88d0: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88cc) {
            ctx->pc = 0x1B88F8u;
            goto label_1b88f8;
        }
    }
    ctx->pc = 0x1B88D4u;
label_1b88d4:
    // 0x1b88d4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1b88d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1b88d8:
    // 0x1b88d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b88d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b88dc:
    // 0x1b88dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b88dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b88e0:
    // 0x1b88e0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1b88e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_1b88e4:
    // 0x1b88e4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1b88e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1b88e8:
    // 0x1b88e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b88e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b88ec:
    // 0x1b88ec: 0xe7c0d6f0  swc1        $f0, -0x2910($fp)
    ctx->pc = 0x1b88ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294956784), bits); }
label_1b88f0:
    // 0x1b88f0: 0x10000038  b           . + 4 + (0x38 << 2)
label_1b88f4:
    if (ctx->pc == 0x1B88F4u) {
        ctx->pc = 0x1B88F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88F0u;
        // 0x1b88f4: 0xe4c1d6f8  swc1        $f1, -0x2908($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956792), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B88F8u;
        goto label_1b88f8;
    }
    ctx->pc = 0x1B88F0u;
    {
        const bool branch_taken_0x1b88f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B88F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88F0u;
        // 0x1b88f4: 0xe4c1d6f8  swc1        $f1, -0x2908($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956792), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88f0) {
            ctx->pc = 0x1B89D4u;
            goto label_1b89d4;
        }
    }
    ctx->pc = 0x1B88F8u;
label_1b88f8:
    // 0x1b88f8: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x1b88f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
label_1b88fc:
    // 0x1b88fc: 0x3421c6a8  ori         $at, $at, 0xC6A8
    ctx->pc = 0x1b88fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50856);
label_1b8900:
    // 0x1b8900: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8904:
    // 0x1b8904: 0x54a00006  bnel        $a1, $zero, . + 4 + (0x6 << 2)
label_1b8908:
    if (ctx->pc == 0x1B8908u) {
        ctx->pc = 0x1B8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8904u;
        // 0x1b8908: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B890Cu;
        goto label_1b890c;
    }
    ctx->pc = 0x1B8904u;
    {
        const bool branch_taken_0x1b8904 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8904) {
            ctx->pc = 0x1B8908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8904u;
            // 0x1b8908: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8920u;
            goto label_1b8920;
        }
    }
    ctx->pc = 0x1B890Cu;
label_1b890c:
    // 0x1b890c: 0x3c01bf10  lui         $at, 0xBF10
    ctx->pc = 0x1b890cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48912 << 16));
label_1b8910:
    // 0x1b8910: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1b8910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_1b8914:
    // 0x1b8914: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8918:
    // 0x1b8918: 0x0  nop
    ctx->pc = 0x1b8918u;
    // NOP
label_1b891c:
    // 0x1b891c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b891cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b8920:
    // 0x1b8920: 0x3c01bd8f  lui         $at, 0xBD8F
    ctx->pc = 0x1b8920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48527 << 16));
label_1b8924:
    // 0x1b8924: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1b8924u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1b8928:
    // 0x1b8928: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b892c:
    // 0x1b892c: 0x10000029  b           . + 4 + (0x29 << 2)
label_1b8930:
    if (ctx->pc == 0x1B8930u) {
        ctx->pc = 0x1B8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B892Cu;
        // 0x1b8930: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8934u;
        goto label_1b8934;
    }
    ctx->pc = 0x1B892Cu;
    {
        const bool branch_taken_0x1b892c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B892Cu;
        // 0x1b8930: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b892c) {
            ctx->pc = 0x1B89D4u;
            goto label_1b89d4;
        }
    }
    ctx->pc = 0x1B8934u;
label_1b8934:
    // 0x1b8934: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1b8934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1b8938:
    // 0x1b8938: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1b893c:
    if (ctx->pc == 0x1B893Cu) {
        ctx->pc = 0x1B893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8938u;
        // 0x1b893c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8940u;
        goto label_1b8940;
    }
    ctx->pc = 0x1B8938u;
    {
        const bool branch_taken_0x1b8938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8938u;
        // 0x1b893c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8938) {
            ctx->pc = 0x1B8990u;
            goto label_1b8990;
        }
    }
    ctx->pc = 0x1B8940u;
label_1b8940:
    // 0x1b8940: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1b8940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1b8944:
    // 0x1b8944: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b8944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1b8948:
    // 0x1b8948: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b8948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b894c:
    // 0x1b894c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b894cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b8950:
    // 0x1b8950: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b8950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b8954:
    // 0x1b8954: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b8954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b8958:
    // 0x1b8958: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1b8958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_1b895c:
    // 0x1b895c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b895cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1b8960:
    // 0x1b8960: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8964:
    // 0x1b8964: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1b8964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1b8968:
    // 0x1b8968: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1b8968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_1b896c:
    // 0x1b896c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b896cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1b8970:
    // 0x1b8970: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b8970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8974:
    // 0x1b8974: 0xe6c2d6ec  swc1        $f2, -0x2914($s6)
    ctx->pc = 0x1b8974u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4294956780), bits); }
label_1b8978:
    // 0x1b8978: 0xe440d6f4  swc1        $f0, -0x290C($v0)
    ctx->pc = 0x1b8978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956788), bits); }
label_1b897c:
    // 0x1b897c: 0xe463d6f8  swc1        $f3, -0x2908($v1)
    ctx->pc = 0x1b897cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956792), bits); }
label_1b8980:
    // 0x1b8980: 0xe4a1d6fc  swc1        $f1, -0x2904($a1)
    ctx->pc = 0x1b8980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956796), bits); }
label_1b8984:
    // 0x1b8984: 0xe6e2d6e8  swc1        $f2, -0x2918($s7)
    ctx->pc = 0x1b8984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294956776), bits); }
label_1b8988:
    // 0x1b8988: 0x10000012  b           . + 4 + (0x12 << 2)
label_1b898c:
    if (ctx->pc == 0x1B898Cu) {
        ctx->pc = 0x1B898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8988u;
        // 0x1b898c: 0xe7c3d6f0  swc1        $f3, -0x2910($fp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294956784), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8990u;
        goto label_1b8990;
    }
    ctx->pc = 0x1B8988u;
    {
        const bool branch_taken_0x1b8988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8988u;
        // 0x1b898c: 0xe7c3d6f0  swc1        $f3, -0x2910($fp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294956784), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8988) {
            ctx->pc = 0x1B89D4u;
            goto label_1b89d4;
        }
    }
    ctx->pc = 0x1B8990u;
label_1b8990:
    // 0x1b8990: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1b8990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1b8994:
    // 0x1b8994: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b8994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1b8998:
    // 0x1b8998: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b899c:
    // 0x1b899c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1b899cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1b89a0:
    // 0x1b89a0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1b89a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1b89a4:
    // 0x1b89a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b89a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b89a8:
    // 0x1b89a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b89ac:
    // 0x1b89ac: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1b89acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_1b89b0:
    // 0x1b89b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b89b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b89b4:
    // 0x1b89b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b89b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b89b8:
    // 0x1b89b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b89b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b89bc:
    // 0x1b89bc: 0xe6c0d6ec  swc1        $f0, -0x2914($s6)
    ctx->pc = 0x1b89bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4294956780), bits); }
label_1b89c0:
    // 0x1b89c0: 0xe4c1d6f4  swc1        $f1, -0x290C($a2)
    ctx->pc = 0x1b89c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956788), bits); }
label_1b89c4:
    // 0x1b89c4: 0xe442d6f8  swc1        $f2, -0x2908($v0)
    ctx->pc = 0x1b89c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956792), bits); }
label_1b89c8:
    // 0x1b89c8: 0xe463d6fc  swc1        $f3, -0x2904($v1)
    ctx->pc = 0x1b89c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956796), bits); }
label_1b89cc:
    // 0x1b89cc: 0xe6e0d6e8  swc1        $f0, -0x2918($s7)
    ctx->pc = 0x1b89ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294956776), bits); }
label_1b89d0:
    // 0x1b89d0: 0xe7c2d6f0  swc1        $f2, -0x2910($fp)
    ctx->pc = 0x1b89d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294956784), bits); }
label_1b89d4:
    // 0x1b89d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b89d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b89d8:
    // 0x1b89d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b89d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b89dc:
    // 0x1b89dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b89dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b89e0:
    // 0x1b89e0: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x1b89e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1b89e4:
    // 0x1b89e4: 0x0  nop
    ctx->pc = 0x1b89e4u;
    // NOP
label_1b89e8:
    // 0x1b89e8: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x1b89e8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b89ec:
    // 0x1b89ec: 0x0  nop
    ctx->pc = 0x1b89ecu;
    // NOP
label_1b89f0:
    // 0x1b89f0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b89f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1b89f4:
    // 0x1b89f4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1b89f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1b89f8:
    // 0x1b89f8: 0xc4a0d6dc  lwc1        $f0, -0x2924($a1)
    ctx->pc = 0x1b89f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294956764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b89fc:
    // 0x1b89fc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1b89fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1b8a00:
    // 0x1b8a00: 0xc4cdd6d8  lwc1        $f13, -0x2928($a2)
    ctx->pc = 0x1b8a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294956760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b8a04:
    // 0x1b8a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8a08:
    // 0x1b8a08: 0xc6ecd6e8  lwc1        $f12, -0x2918($s7)
    ctx->pc = 0x1b8a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294956776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b8a0c:
    // 0x1b8a0c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b8a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b8a10:
    // 0x1b8a10: 0xc6c1d6ec  lwc1        $f1, -0x2914($s6)
    ctx->pc = 0x1b8a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294956780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8a14:
    // 0x1b8a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8a18:
    // 0x1b8a18: 0x460c6b02  mul.s       $f12, $f13, $f12
    ctx->pc = 0x1b8a18u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
label_1b8a1c:
    // 0x1b8a1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b8a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b8a20:
    // 0x1b8a20: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1b8a20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1b8a24:
    // 0x1b8a24: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1b8a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1b8a28:
    // 0x1b8a28: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x1b8a28u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
label_1b8a2c:
    // 0x1b8a2c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1b8a2cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1b8a30:
    // 0x1b8a30: 0xc068848  jal         func_1A2120
label_1b8a34:
    if (ctx->pc == 0x1B8A34u) {
        ctx->pc = 0x1B8A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A30u;
        // 0x1b8a34: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A38u;
        goto label_1b8a38;
    }
    ctx->pc = 0x1B8A30u;
    SET_GPR_U32(ctx, 31, 0x1B8A38u);
    ctx->pc = 0x1B8A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8A30u;
    // 0x1b8a34: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1B8A30u, 0x1B8A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8A38u;
label_1b8a38:
    // 0x1b8a38: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1b8a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b8a3c:
    // 0x1b8a3c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_1b8a40:
    if (ctx->pc == 0x1B8A40u) {
        ctx->pc = 0x1B8A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A3Cu;
        // 0x1b8a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A44u;
        goto label_1b8a44;
    }
    ctx->pc = 0x1B8A3Cu;
    {
        const bool branch_taken_0x1b8a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A3Cu;
        // 0x1b8a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a3c) {
            ctx->pc = 0x1B89E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b89e8;
        }
    }
    ctx->pc = 0x1B8A44u;
label_1b8a44:
    // 0x1b8a44: 0x3c01433f  lui         $at, 0x433F
    ctx->pc = 0x1b8a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17215 << 16));
label_1b8a48:
    // 0x1b8a48: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1b8a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1b8a4c:
    // 0x1b8a4c: 0xa2420538  sb          $v0, 0x538($s2)
    ctx->pc = 0x1b8a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1336), (uint8_t)GPR_U32(ctx, 2));
label_1b8a50:
    // 0x1b8a50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b8a54:
    // 0x1b8a54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b8a58:
    // 0x1b8a58: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1b8a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_1b8a5c:
    // 0x1b8a5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8a60:
    // 0x1b8a60: 0xc441d6b4  lwc1        $f1, -0x294C($v0)
    ctx->pc = 0x1b8a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8a64:
    // 0x1b8a64: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b8a68:
    // 0x1b8a68: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1b8a68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8a6c:
    // 0x1b8a6c: 0xc442d6b8  lwc1        $f2, -0x2948($v0)
    ctx->pc = 0x1b8a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8a70:
    // 0x1b8a70: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b8a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1b8a74:
    // 0x1b8a74: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b8a74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1b8a78:
    // 0x1b8a78: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b8a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b8a7c:
    // 0x1b8a7c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1b8a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1b8a80:
    // 0x1b8a80: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x1b8a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1b8a84:
    // 0x1b8a84: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1b8a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1b8a88:
    // 0x1b8a88: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x1b8a88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1b8a8c:
    // 0x1b8a8c: 0x7e430480  sq          $v1, 0x480($s2)
    ctx->pc = 0x1b8a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1152), GPR_VEC(ctx, 3));
label_1b8a90:
    // 0x1b8a90: 0xe6420534  swc1        $f2, 0x534($s2)
    ctx->pc = 0x1b8a90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1332), bits); }
label_1b8a94:
    // 0x1b8a94: 0xe65404a0  swc1        $f20, 0x4A0($s2)
    ctx->pc = 0x1b8a94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1184), bits); }
label_1b8a98:
    // 0x1b8a98: 0xe65404a4  swc1        $f20, 0x4A4($s2)
    ctx->pc = 0x1b8a98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1188), bits); }
label_1b8a9c:
    // 0x1b8a9c: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x1b8a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1b8aa0:
    // 0x1b8aa0: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x1b8aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1b8aa4:
    // 0x1b8aa4: 0x6ba5002f  ldl         $a1, 0x2F($sp)
    ctx->pc = 0x1b8aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1b8aa8:
    // 0x1b8aa8: 0x6fa50028  ldr         $a1, 0x28($sp)
    ctx->pc = 0x1b8aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1b8aac:
    // 0x1b8aac: 0xb24304c3  sdl         $v1, 0x4C3($s2)
    ctx->pc = 0x1b8aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 1219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8ab0:
    // 0x1b8ab0: 0xb64304bc  sdr         $v1, 0x4BC($s2)
    ctx->pc = 0x1b8ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 1212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8ab4:
    // 0x1b8ab4: 0xb24504cb  sdl         $a1, 0x4CB($s2)
    ctx->pc = 0x1b8ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 1227); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8ab8:
    // 0x1b8ab8: 0xb64504c4  sdr         $a1, 0x4C4($s2)
    ctx->pc = 0x1b8ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 1220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8abc:
    // 0x1b8abc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b8abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b8ac0:
    // 0x1b8ac0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1b8ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1b8ac4:
    // 0x1b8ac4: 0xc461d6c0  lwc1        $f1, -0x2940($v1)
    ctx->pc = 0x1b8ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8ac8:
    // 0x1b8ac8: 0xc7c0d6f0  lwc1        $f0, -0x2910($fp)
    ctx->pc = 0x1b8ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294956784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8acc:
    // 0x1b8acc: 0xc4a2d6f4  lwc1        $f2, -0x290C($a1)
    ctx->pc = 0x1b8accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294956788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8ad0:
    // 0x1b8ad0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b8ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1b8ad4:
    // 0x1b8ad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b8ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b8ad8:
    // 0x1b8ad8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b8ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1b8adc:
    // 0x1b8adc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b8adcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1b8ae0:
    // 0x1b8ae0: 0xae4004dc  sw          $zero, 0x4DC($s2)
    ctx->pc = 0x1b8ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1244), GPR_U32(ctx, 0));
label_1b8ae4:
    // 0x1b8ae4: 0xe65504d4  swc1        $f21, 0x4D4($s2)
    ctx->pc = 0x1b8ae4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1236), bits); }
label_1b8ae8:
    // 0x1b8ae8: 0xe65504d8  swc1        $f21, 0x4D8($s2)
    ctx->pc = 0x1b8ae8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1240), bits); }
label_1b8aec:
    // 0x1b8aec: 0xe6400498  swc1        $f0, 0x498($s2)
    ctx->pc = 0x1b8aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1176), bits); }
label_1b8af0:
    // 0x1b8af0: 0xc05f0aa  jal         func_17C2A8
label_1b8af4:
    if (ctx->pc == 0x1B8AF4u) {
        ctx->pc = 0x1B8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AF0u;
        // 0x1b8af4: 0xe641049c  swc1        $f1, 0x49C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8AF8u;
        goto label_1b8af8;
    }
    ctx->pc = 0x1B8AF0u;
    SET_GPR_U32(ctx, 31, 0x1B8AF8u);
    ctx->pc = 0x1B8AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8AF0u;
    // 0x1b8af4: 0xe641049c  swc1        $f1, 0x49C($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C2A8u, 0x1B8AF0u, 0x1B8AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8AF8u;
label_1b8af8:
    // 0x1b8af8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1b8af8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1b8afc:
    // 0x1b8afc: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1b8afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_1b8b00:
    // 0x1b8b00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b8b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8b04:
    // 0x1b8b04: 0xc4c3d6b4  lwc1        $f3, -0x294C($a2)
    ctx->pc = 0x1b8b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294956724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b8b08:
    // 0x1b8b08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b8b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b8b0c:
    // 0x1b8b0c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1b8b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_1b8b10:
    // 0x1b8b10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8b14:
    // 0x1b8b14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b8b18:
    // 0x1b8b18: 0xc442d6bc  lwc1        $f2, -0x2944($v0)
    ctx->pc = 0x1b8b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8b1c:
    // 0x1b8b1c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1b8b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1b8b20:
    // 0x1b8b20: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1b8b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1b8b24:
    // 0x1b8b24: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x1b8b24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1b8b28:
    // 0x1b8b28: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1b8b28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1b8b2c:
    // 0x1b8b2c: 0xe6420534  swc1        $f2, 0x534($s2)
    ctx->pc = 0x1b8b2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1332), bits); }
label_1b8b30:
    // 0x1b8b30: 0xe65404a4  swc1        $f20, 0x4A4($s2)
    ctx->pc = 0x1b8b30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1188), bits); }
label_1b8b34:
    // 0x1b8b34: 0xe65404a0  swc1        $f20, 0x4A0($s2)
    ctx->pc = 0x1b8b34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1184), bits); }
label_1b8b38:
    // 0x1b8b38: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1b8b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1b8b3c:
    // 0x1b8b3c: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1b8b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1b8b40:
    // 0x1b8b40: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x1b8b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1b8b44:
    // 0x1b8b44: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x1b8b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1b8b48:
    // 0x1b8b48: 0xb24204c3  sdl         $v0, 0x4C3($s2)
    ctx->pc = 0x1b8b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 1219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8b4c:
    // 0x1b8b4c: 0xb64204bc  sdr         $v0, 0x4BC($s2)
    ctx->pc = 0x1b8b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 1212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8b50:
    // 0x1b8b50: 0xb24304cb  sdl         $v1, 0x4CB($s2)
    ctx->pc = 0x1b8b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 1227); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8b54:
    // 0x1b8b54: 0xb64304c4  sdr         $v1, 0x4C4($s2)
    ctx->pc = 0x1b8b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 1220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8b58:
    // 0x1b8b58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b8b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b8b5c:
    // 0x1b8b5c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b8b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b8b60:
    // 0x1b8b60: 0xc441d6c0  lwc1        $f1, -0x2940($v0)
    ctx->pc = 0x1b8b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8b64:
    // 0x1b8b64: 0xc7c0d6f0  lwc1        $f0, -0x2910($fp)
    ctx->pc = 0x1b8b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294956784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8b68:
    // 0x1b8b68: 0xc462d6f4  lwc1        $f2, -0x290C($v1)
    ctx->pc = 0x1b8b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8b6c:
    // 0x1b8b6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b8b6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1b8b70:
    // 0x1b8b70: 0xae4004dc  sw          $zero, 0x4DC($s2)
    ctx->pc = 0x1b8b70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1244), GPR_U32(ctx, 0));
label_1b8b74:
    // 0x1b8b74: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b8b74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1b8b78:
    // 0x1b8b78: 0xe65504d4  swc1        $f21, 0x4D4($s2)
    ctx->pc = 0x1b8b78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1236), bits); }
label_1b8b7c:
    // 0x1b8b7c: 0xe65504d8  swc1        $f21, 0x4D8($s2)
    ctx->pc = 0x1b8b7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1240), bits); }
label_1b8b80:
    // 0x1b8b80: 0xe6400498  swc1        $f0, 0x498($s2)
    ctx->pc = 0x1b8b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1176), bits); }
label_1b8b84:
    // 0x1b8b84: 0xc05f0aa  jal         func_17C2A8
label_1b8b88:
    if (ctx->pc == 0x1B8B88u) {
        ctx->pc = 0x1B8B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B84u;
        // 0x1b8b88: 0xe641049c  swc1        $f1, 0x49C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B8Cu;
        goto label_1b8b8c;
    }
    ctx->pc = 0x1B8B84u;
    SET_GPR_U32(ctx, 31, 0x1B8B8Cu);
    ctx->pc = 0x1B8B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8B84u;
    // 0x1b8b88: 0xe641049c  swc1        $f1, 0x49C($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C2A8u, 0x1B8B84u, 0x1B8B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8B8Cu;
label_1b8b8c:
    // 0x1b8b8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b8b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b8b90:
    // 0x1b8b90: 0x8e45046c  lw          $a1, 0x46C($s2)
    ctx->pc = 0x1b8b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1132)));
label_1b8b94:
    // 0x1b8b94: 0xc0616ac  jal         func_185AB0
label_1b8b98:
    if (ctx->pc == 0x1B8B98u) {
        ctx->pc = 0x1B8B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B94u;
        // 0x1b8b98: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B9Cu;
        goto label_1b8b9c;
    }
    ctx->pc = 0x1B8B94u;
    SET_GPR_U32(ctx, 31, 0x1B8B9Cu);
    ctx->pc = 0x1B8B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8B94u;
    // 0x1b8b98: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1B8B94u, 0x1B8B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8B9Cu;
label_1b8b9c:
    // 0x1b8b9c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1b8b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8ba0:
    // 0x1b8ba0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ba4:
    // 0x1b8ba4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1b8ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1b8ba8:
    // 0x1b8ba8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b8ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b8bac:
    // 0x1b8bac: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x1b8bacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_1b8bb0:
    // 0x1b8bb0: 0xc4a1d6f8  lwc1        $f1, -0x2908($a1)
    ctx->pc = 0x1b8bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294956792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8bb4:
    // 0x1b8bb4: 0xc442d6b0  lwc1        $f2, -0x2950($v0)
    ctx->pc = 0x1b8bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8bb8:
    // 0x1b8bb8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1b8bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1b8bbc:
    // 0x1b8bbc: 0xc4c3d6fc  lwc1        $f3, -0x2904($a2)
    ctx->pc = 0x1b8bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294956796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b8bc0:
    // 0x1b8bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8bc4:
    // 0x1b8bc4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1b8bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1b8bc8:
    // 0x1b8bc8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1b8bc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1b8bcc:
    // 0x1b8bcc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1b8bccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1b8bd0:
    // 0x1b8bd0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b8bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1b8bd4:
    // 0x1b8bd4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b8bd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1b8bd8:
    // 0x1b8bd8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b8bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b8bdc:
    // 0x1b8bdc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1b8bdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8be0:
    // 0x1b8be0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1b8be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_1b8be4:
    // 0x1b8be4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8be8:
    // 0x1b8be8: 0xae4004a0  sw          $zero, 0x4A0($s2)
    ctx->pc = 0x1b8be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1184), GPR_U32(ctx, 0));
label_1b8bec:
    // 0x1b8bec: 0xe64404a4  swc1        $f4, 0x4A4($s2)
    ctx->pc = 0x1b8becu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1188), bits); }
label_1b8bf0:
    // 0x1b8bf0: 0xe6410498  swc1        $f1, 0x498($s2)
    ctx->pc = 0x1b8bf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1176), bits); }
label_1b8bf4:
    // 0x1b8bf4: 0xe642049c  swc1        $f2, 0x49C($s2)
    ctx->pc = 0x1b8bf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1180), bits); }
label_1b8bf8:
    // 0x1b8bf8: 0xe6400534  swc1        $f0, 0x534($s2)
    ctx->pc = 0x1b8bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1332), bits); }
label_1b8bfc:
    // 0x1b8bfc: 0xc060b58  jal         func_182D60
label_1b8c00:
    if (ctx->pc == 0x1B8C00u) {
        ctx->pc = 0x1B8C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8BFCu;
        // 0x1b8c00: 0x7e420480  sq          $v0, 0x480($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 1152), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C04u;
        goto label_1b8c04;
    }
    ctx->pc = 0x1B8BFCu;
    SET_GPR_U32(ctx, 31, 0x1B8C04u);
    ctx->pc = 0x1B8C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8BFCu;
    // 0x1b8c00: 0x7e420480  sq          $v0, 0x480($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 1152), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1B8BFCu, 0x1B8C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8C04u;
label_1b8c04:
    // 0x1b8c04: 0xc066116  jal         func_198458
label_1b8c08:
    if (ctx->pc == 0x1B8C08u) {
        ctx->pc = 0x1B8C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C04u;
        // 0x1b8c08: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C0Cu;
        goto label_1b8c0c;
    }
    ctx->pc = 0x1B8C04u;
    SET_GPR_U32(ctx, 31, 0x1B8C0Cu);
    ctx->pc = 0x1B8C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8C04u;
    // 0x1b8c08: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198458u, 0x1B8C04u, 0x1B8C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8C0Cu;
label_1b8c0c:
    // 0x1b8c0c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1b8c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1b8c10:
    // 0x1b8c10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8c14:
    // 0x1b8c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8c18:
    // 0x1b8c18: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x1b8c18u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1b8c1c:
    // 0x1b8c1c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1b8c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1b8c20:
    // 0x1b8c20: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x1b8c20u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1b8c24:
    // 0x1b8c24: 0xe7b60024  swc1        $f22, 0x24($sp)
    ctx->pc = 0x1b8c24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1b8c28:
    // 0x1b8c28: 0xae4204dc  sw          $v0, 0x4DC($s2)
    ctx->pc = 0x1b8c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1244), GPR_U32(ctx, 2));
label_1b8c2c:
    // 0x1b8c2c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1b8c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1b8c30:
    // 0x1b8c30: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1b8c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1b8c34:
    // 0x1b8c34: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x1b8c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1b8c38:
    // 0x1b8c38: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x1b8c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1b8c3c:
    // 0x1b8c3c: 0xb24204c3  sdl         $v0, 0x4C3($s2)
    ctx->pc = 0x1b8c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 1219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8c40:
    // 0x1b8c40: 0xb64204bc  sdr         $v0, 0x4BC($s2)
    ctx->pc = 0x1b8c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 1212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8c44:
    // 0x1b8c44: 0xb24304cb  sdl         $v1, 0x4CB($s2)
    ctx->pc = 0x1b8c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 1227); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8c48:
    // 0x1b8c48: 0xb64304c4  sdr         $v1, 0x4C4($s2)
    ctx->pc = 0x1b8c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 1220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b8c4c:
    // 0x1b8c4c: 0xc060b58  jal         func_182D60
label_1b8c50:
    if (ctx->pc == 0x1B8C50u) {
        ctx->pc = 0x1B8C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C4Cu;
        // 0x1b8c50: 0xe65504d4  swc1        $f21, 0x4D4($s2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1236), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C54u;
        goto label_1b8c54;
    }
    ctx->pc = 0x1B8C4Cu;
    SET_GPR_U32(ctx, 31, 0x1B8C54u);
    ctx->pc = 0x1B8C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8C4Cu;
    // 0x1b8c50: 0xe65504d4  swc1        $f21, 0x4D4($s2) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1236), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1B8C4Cu, 0x1B8C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8C54u;
label_1b8c54:
    // 0x1b8c54: 0xc060786  jal         func_181E18
label_1b8c58:
    if (ctx->pc == 0x1B8C58u) {
        ctx->pc = 0x1B8C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C54u;
        // 0x1b8c58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C5Cu;
        goto label_1b8c5c;
    }
    ctx->pc = 0x1B8C54u;
    SET_GPR_U32(ctx, 31, 0x1B8C5Cu);
    ctx->pc = 0x1B8C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8C54u;
    // 0x1b8c58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E18u, 0x1B8C54u, 0x1B8C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8C5Cu;
label_1b8c5c:
    // 0x1b8c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8c60:
    // 0x1b8c60: 0xc060b58  jal         func_182D60
label_1b8c64:
    if (ctx->pc == 0x1B8C64u) {
        ctx->pc = 0x1B8C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C60u;
        // 0x1b8c64: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C68u;
        goto label_1b8c68;
    }
    ctx->pc = 0x1B8C60u;
    SET_GPR_U32(ctx, 31, 0x1B8C68u);
    ctx->pc = 0x1B8C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8C60u;
    // 0x1b8c64: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1B8C60u, 0x1B8C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8C68u;
label_1b8c68:
    // 0x1b8c68: 0xc06078a  jal         func_181E28
label_1b8c6c:
    if (ctx->pc == 0x1B8C6Cu) {
        ctx->pc = 0x1B8C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C68u;
        // 0x1b8c6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C70u;
        goto label_1b8c70;
    }
    ctx->pc = 0x1B8C68u;
    SET_GPR_U32(ctx, 31, 0x1B8C70u);
    ctx->pc = 0x1B8C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8C68u;
    // 0x1b8c6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E28u, 0x1B8C68u, 0x1B8C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8C70u;
label_1b8c70:
    // 0x1b8c70: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_1b8c74:
    if (ctx->pc == 0x1B8C74u) {
        ctx->pc = 0x1B8C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C70u;
        // 0x1b8c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C78u;
        goto label_1b8c78;
    }
    ctx->pc = 0x1B8C70u;
    {
        const bool branch_taken_0x1b8c70 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1B8C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C70u;
        // 0x1b8c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c70) {
            ctx->pc = 0x1B8C8Cu;
            goto label_1b8c8c;
        }
    }
    ctx->pc = 0x1B8C78u;
label_1b8c78:
    // 0x1b8c78: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1b8c78u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8c7c:
    // 0x1b8c7c: 0x0  nop
    ctx->pc = 0x1b8c7cu;
    // NOP
label_1b8c80:
    // 0x1b8c80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b8c80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b8c84:
    // 0x1b8c84: 0x10000008  b           . + 4 + (0x8 << 2)
label_1b8c88:
    if (ctx->pc == 0x1B8C88u) {
        ctx->pc = 0x1B8C8Cu;
        goto label_1b8c8c;
    }
    ctx->pc = 0x1B8C84u;
    {
        const bool branch_taken_0x1b8c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c84) {
            ctx->pc = 0x1B8CA8u;
            goto label_1b8ca8;
        }
    }
    ctx->pc = 0x1B8C8Cu;
label_1b8c8c:
    // 0x1b8c8c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1b8c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_1b8c90:
    // 0x1b8c90: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1b8c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1b8c94:
    // 0x1b8c94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b8c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b8c98:
    // 0x1b8c98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b8c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8c9c:
    // 0x1b8c9c: 0x0  nop
    ctx->pc = 0x1b8c9cu;
    // NOP
label_1b8ca0:
    // 0x1b8ca0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b8ca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b8ca4:
    // 0x1b8ca4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b8ca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b8ca8:
    // 0x1b8ca8: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1b8cac:
    if (ctx->pc == 0x1B8CACu) {
        ctx->pc = 0x1B8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CA8u;
        // 0x1b8cac: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8CB0u;
        goto label_1b8cb0;
    }
    ctx->pc = 0x1B8CA8u;
    {
        const bool branch_taken_0x1b8ca8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CA8u;
        // 0x1b8cac: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ca8) {
            ctx->pc = 0x1B8CC4u;
            goto label_1b8cc4;
        }
    }
    ctx->pc = 0x1B8CB0u;
label_1b8cb0:
    // 0x1b8cb0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b8cb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8cb4:
    // 0x1b8cb4: 0x0  nop
    ctx->pc = 0x1b8cb4u;
    // NOP
label_1b8cb8:
    // 0x1b8cb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b8cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b8cbc:
    // 0x1b8cbc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b8cc0:
    if (ctx->pc == 0x1B8CC0u) {
        ctx->pc = 0x1B8CC4u;
        goto label_1b8cc4;
    }
    ctx->pc = 0x1B8CBCu;
    {
        const bool branch_taken_0x1b8cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8cbc) {
            ctx->pc = 0x1B8CDCu;
            goto label_1b8cdc;
        }
    }
    ctx->pc = 0x1B8CC4u;
label_1b8cc4:
    // 0x1b8cc4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1b8cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1b8cc8:
    // 0x1b8cc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b8cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b8ccc:
    // 0x1b8ccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8cd0:
    // 0x1b8cd0: 0x0  nop
    ctx->pc = 0x1b8cd0u;
    // NOP
label_1b8cd4:
    // 0x1b8cd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b8cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b8cd8:
    // 0x1b8cd8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b8cd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b8cdc:
    // 0x1b8cdc: 0x0  nop
    ctx->pc = 0x1b8cdcu;
    // NOP
label_1b8ce0:
    // 0x1b8ce0: 0x0  nop
    ctx->pc = 0x1b8ce0u;
    // NOP
label_1b8ce4:
    // 0x1b8ce4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b8ce4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1b8ce8:
    // 0x1b8ce8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b8cec:
    // 0x1b8cec: 0xc05f0aa  jal         func_17C2A8
label_1b8cf0:
    if (ctx->pc == 0x1B8CF0u) {
        ctx->pc = 0x1B8CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CECu;
        // 0x1b8cf0: 0xe64004d8  swc1        $f0, 0x4D8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8CF4u;
        goto label_1b8cf4;
    }
    ctx->pc = 0x1B8CECu;
    SET_GPR_U32(ctx, 31, 0x1B8CF4u);
    ctx->pc = 0x1B8CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8CECu;
    // 0x1b8cf0: 0xe64004d8  swc1        $f0, 0x4D8($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C2A8u, 0x1B8CECu, 0x1B8CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8CF4u;
label_1b8cf4:
    // 0x1b8cf4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1b8cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1b8cf8:
    // 0x1b8cf8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1b8cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1b8cfc:
    // 0x1b8cfc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1b8cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b8d00:
    // 0x1b8d00: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1b8d00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b8d04:
    // 0x1b8d04: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1b8d04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b8d08:
    // 0x1b8d08: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1b8d08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b8d0c:
    // 0x1b8d0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b8d0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b8d10:
    // 0x1b8d10: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1b8d10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b8d14:
    // 0x1b8d14: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1b8d14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b8d18:
    // 0x1b8d18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b8d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b8d1c:
    // 0x1b8d1c: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x1b8d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1b8d20:
    // 0x1b8d20: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x1b8d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b8d24:
    // 0x1b8d24: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1b8d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b8d28:
    // 0x1b8d28: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1b8d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b8d2c:
    // 0x1b8d2c: 0x3e00008  jr          $ra
label_1b8d30:
    if (ctx->pc == 0x1B8D30u) {
        ctx->pc = 0x1B8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D2Cu;
        // 0x1b8d30: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D34u;
        goto label_1b8d34;
    }
    ctx->pc = 0x1B8D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D2Cu;
        // 0x1b8d30: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8D34u;
label_1b8d34:
    // 0x1b8d34: 0x0  nop
    ctx->pc = 0x1b8d34u;
    // NOP
    ctx->pc = 0x1b8d38u;
}
