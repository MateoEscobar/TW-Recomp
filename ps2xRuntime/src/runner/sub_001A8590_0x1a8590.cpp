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

// Function: sub_001A8590
// Address: 0x1a8590 - 0x1a8b48
void sub_001A8590_0x1a8590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8590_0x1a8590");
#endif

    switch (ctx->pc) {
        case 0x1a8590u: goto label_1a8590;
        case 0x1a8594u: goto label_1a8594;
        case 0x1a8598u: goto label_1a8598;
        case 0x1a859cu: goto label_1a859c;
        case 0x1a85a0u: goto label_1a85a0;
        case 0x1a85a4u: goto label_1a85a4;
        case 0x1a85a8u: goto label_1a85a8;
        case 0x1a85acu: goto label_1a85ac;
        case 0x1a85b0u: goto label_1a85b0;
        case 0x1a85b4u: goto label_1a85b4;
        case 0x1a85b8u: goto label_1a85b8;
        case 0x1a85bcu: goto label_1a85bc;
        case 0x1a85c0u: goto label_1a85c0;
        case 0x1a85c4u: goto label_1a85c4;
        case 0x1a85c8u: goto label_1a85c8;
        case 0x1a85ccu: goto label_1a85cc;
        case 0x1a85d0u: goto label_1a85d0;
        case 0x1a85d4u: goto label_1a85d4;
        case 0x1a85d8u: goto label_1a85d8;
        case 0x1a85dcu: goto label_1a85dc;
        case 0x1a85e0u: goto label_1a85e0;
        case 0x1a85e4u: goto label_1a85e4;
        case 0x1a85e8u: goto label_1a85e8;
        case 0x1a85ecu: goto label_1a85ec;
        case 0x1a85f0u: goto label_1a85f0;
        case 0x1a85f4u: goto label_1a85f4;
        case 0x1a85f8u: goto label_1a85f8;
        case 0x1a85fcu: goto label_1a85fc;
        case 0x1a8600u: goto label_1a8600;
        case 0x1a8604u: goto label_1a8604;
        case 0x1a8608u: goto label_1a8608;
        case 0x1a860cu: goto label_1a860c;
        case 0x1a8610u: goto label_1a8610;
        case 0x1a8614u: goto label_1a8614;
        case 0x1a8618u: goto label_1a8618;
        case 0x1a861cu: goto label_1a861c;
        case 0x1a8620u: goto label_1a8620;
        case 0x1a8624u: goto label_1a8624;
        case 0x1a8628u: goto label_1a8628;
        case 0x1a862cu: goto label_1a862c;
        case 0x1a8630u: goto label_1a8630;
        case 0x1a8634u: goto label_1a8634;
        case 0x1a8638u: goto label_1a8638;
        case 0x1a863cu: goto label_1a863c;
        case 0x1a8640u: goto label_1a8640;
        case 0x1a8644u: goto label_1a8644;
        case 0x1a8648u: goto label_1a8648;
        case 0x1a864cu: goto label_1a864c;
        case 0x1a8650u: goto label_1a8650;
        case 0x1a8654u: goto label_1a8654;
        case 0x1a8658u: goto label_1a8658;
        case 0x1a865cu: goto label_1a865c;
        case 0x1a8660u: goto label_1a8660;
        case 0x1a8664u: goto label_1a8664;
        case 0x1a8668u: goto label_1a8668;
        case 0x1a866cu: goto label_1a866c;
        case 0x1a8670u: goto label_1a8670;
        case 0x1a8674u: goto label_1a8674;
        case 0x1a8678u: goto label_1a8678;
        case 0x1a867cu: goto label_1a867c;
        case 0x1a8680u: goto label_1a8680;
        case 0x1a8684u: goto label_1a8684;
        case 0x1a8688u: goto label_1a8688;
        case 0x1a868cu: goto label_1a868c;
        case 0x1a8690u: goto label_1a8690;
        case 0x1a8694u: goto label_1a8694;
        case 0x1a8698u: goto label_1a8698;
        case 0x1a869cu: goto label_1a869c;
        case 0x1a86a0u: goto label_1a86a0;
        case 0x1a86a4u: goto label_1a86a4;
        case 0x1a86a8u: goto label_1a86a8;
        case 0x1a86acu: goto label_1a86ac;
        case 0x1a86b0u: goto label_1a86b0;
        case 0x1a86b4u: goto label_1a86b4;
        case 0x1a86b8u: goto label_1a86b8;
        case 0x1a86bcu: goto label_1a86bc;
        case 0x1a86c0u: goto label_1a86c0;
        case 0x1a86c4u: goto label_1a86c4;
        case 0x1a86c8u: goto label_1a86c8;
        case 0x1a86ccu: goto label_1a86cc;
        case 0x1a86d0u: goto label_1a86d0;
        case 0x1a86d4u: goto label_1a86d4;
        case 0x1a86d8u: goto label_1a86d8;
        case 0x1a86dcu: goto label_1a86dc;
        case 0x1a86e0u: goto label_1a86e0;
        case 0x1a86e4u: goto label_1a86e4;
        case 0x1a86e8u: goto label_1a86e8;
        case 0x1a86ecu: goto label_1a86ec;
        case 0x1a86f0u: goto label_1a86f0;
        case 0x1a86f4u: goto label_1a86f4;
        case 0x1a86f8u: goto label_1a86f8;
        case 0x1a86fcu: goto label_1a86fc;
        case 0x1a8700u: goto label_1a8700;
        case 0x1a8704u: goto label_1a8704;
        case 0x1a8708u: goto label_1a8708;
        case 0x1a870cu: goto label_1a870c;
        case 0x1a8710u: goto label_1a8710;
        case 0x1a8714u: goto label_1a8714;
        case 0x1a8718u: goto label_1a8718;
        case 0x1a871cu: goto label_1a871c;
        case 0x1a8720u: goto label_1a8720;
        case 0x1a8724u: goto label_1a8724;
        case 0x1a8728u: goto label_1a8728;
        case 0x1a872cu: goto label_1a872c;
        case 0x1a8730u: goto label_1a8730;
        case 0x1a8734u: goto label_1a8734;
        case 0x1a8738u: goto label_1a8738;
        case 0x1a873cu: goto label_1a873c;
        case 0x1a8740u: goto label_1a8740;
        case 0x1a8744u: goto label_1a8744;
        case 0x1a8748u: goto label_1a8748;
        case 0x1a874cu: goto label_1a874c;
        case 0x1a8750u: goto label_1a8750;
        case 0x1a8754u: goto label_1a8754;
        case 0x1a8758u: goto label_1a8758;
        case 0x1a875cu: goto label_1a875c;
        case 0x1a8760u: goto label_1a8760;
        case 0x1a8764u: goto label_1a8764;
        case 0x1a8768u: goto label_1a8768;
        case 0x1a876cu: goto label_1a876c;
        case 0x1a8770u: goto label_1a8770;
        case 0x1a8774u: goto label_1a8774;
        case 0x1a8778u: goto label_1a8778;
        case 0x1a877cu: goto label_1a877c;
        case 0x1a8780u: goto label_1a8780;
        case 0x1a8784u: goto label_1a8784;
        case 0x1a8788u: goto label_1a8788;
        case 0x1a878cu: goto label_1a878c;
        case 0x1a8790u: goto label_1a8790;
        case 0x1a8794u: goto label_1a8794;
        case 0x1a8798u: goto label_1a8798;
        case 0x1a879cu: goto label_1a879c;
        case 0x1a87a0u: goto label_1a87a0;
        case 0x1a87a4u: goto label_1a87a4;
        case 0x1a87a8u: goto label_1a87a8;
        case 0x1a87acu: goto label_1a87ac;
        case 0x1a87b0u: goto label_1a87b0;
        case 0x1a87b4u: goto label_1a87b4;
        case 0x1a87b8u: goto label_1a87b8;
        case 0x1a87bcu: goto label_1a87bc;
        case 0x1a87c0u: goto label_1a87c0;
        case 0x1a87c4u: goto label_1a87c4;
        case 0x1a87c8u: goto label_1a87c8;
        case 0x1a87ccu: goto label_1a87cc;
        case 0x1a87d0u: goto label_1a87d0;
        case 0x1a87d4u: goto label_1a87d4;
        case 0x1a87d8u: goto label_1a87d8;
        case 0x1a87dcu: goto label_1a87dc;
        case 0x1a87e0u: goto label_1a87e0;
        case 0x1a87e4u: goto label_1a87e4;
        case 0x1a87e8u: goto label_1a87e8;
        case 0x1a87ecu: goto label_1a87ec;
        case 0x1a87f0u: goto label_1a87f0;
        case 0x1a87f4u: goto label_1a87f4;
        case 0x1a87f8u: goto label_1a87f8;
        case 0x1a87fcu: goto label_1a87fc;
        case 0x1a8800u: goto label_1a8800;
        case 0x1a8804u: goto label_1a8804;
        case 0x1a8808u: goto label_1a8808;
        case 0x1a880cu: goto label_1a880c;
        case 0x1a8810u: goto label_1a8810;
        case 0x1a8814u: goto label_1a8814;
        case 0x1a8818u: goto label_1a8818;
        case 0x1a881cu: goto label_1a881c;
        case 0x1a8820u: goto label_1a8820;
        case 0x1a8824u: goto label_1a8824;
        case 0x1a8828u: goto label_1a8828;
        case 0x1a882cu: goto label_1a882c;
        case 0x1a8830u: goto label_1a8830;
        case 0x1a8834u: goto label_1a8834;
        case 0x1a8838u: goto label_1a8838;
        case 0x1a883cu: goto label_1a883c;
        case 0x1a8840u: goto label_1a8840;
        case 0x1a8844u: goto label_1a8844;
        case 0x1a8848u: goto label_1a8848;
        case 0x1a884cu: goto label_1a884c;
        case 0x1a8850u: goto label_1a8850;
        case 0x1a8854u: goto label_1a8854;
        case 0x1a8858u: goto label_1a8858;
        case 0x1a885cu: goto label_1a885c;
        case 0x1a8860u: goto label_1a8860;
        case 0x1a8864u: goto label_1a8864;
        case 0x1a8868u: goto label_1a8868;
        case 0x1a886cu: goto label_1a886c;
        case 0x1a8870u: goto label_1a8870;
        case 0x1a8874u: goto label_1a8874;
        case 0x1a8878u: goto label_1a8878;
        case 0x1a887cu: goto label_1a887c;
        case 0x1a8880u: goto label_1a8880;
        case 0x1a8884u: goto label_1a8884;
        case 0x1a8888u: goto label_1a8888;
        case 0x1a888cu: goto label_1a888c;
        case 0x1a8890u: goto label_1a8890;
        case 0x1a8894u: goto label_1a8894;
        case 0x1a8898u: goto label_1a8898;
        case 0x1a889cu: goto label_1a889c;
        case 0x1a88a0u: goto label_1a88a0;
        case 0x1a88a4u: goto label_1a88a4;
        case 0x1a88a8u: goto label_1a88a8;
        case 0x1a88acu: goto label_1a88ac;
        case 0x1a88b0u: goto label_1a88b0;
        case 0x1a88b4u: goto label_1a88b4;
        case 0x1a88b8u: goto label_1a88b8;
        case 0x1a88bcu: goto label_1a88bc;
        case 0x1a88c0u: goto label_1a88c0;
        case 0x1a88c4u: goto label_1a88c4;
        case 0x1a88c8u: goto label_1a88c8;
        case 0x1a88ccu: goto label_1a88cc;
        case 0x1a88d0u: goto label_1a88d0;
        case 0x1a88d4u: goto label_1a88d4;
        case 0x1a88d8u: goto label_1a88d8;
        case 0x1a88dcu: goto label_1a88dc;
        case 0x1a88e0u: goto label_1a88e0;
        case 0x1a88e4u: goto label_1a88e4;
        case 0x1a88e8u: goto label_1a88e8;
        case 0x1a88ecu: goto label_1a88ec;
        case 0x1a88f0u: goto label_1a88f0;
        case 0x1a88f4u: goto label_1a88f4;
        case 0x1a88f8u: goto label_1a88f8;
        case 0x1a88fcu: goto label_1a88fc;
        case 0x1a8900u: goto label_1a8900;
        case 0x1a8904u: goto label_1a8904;
        case 0x1a8908u: goto label_1a8908;
        case 0x1a890cu: goto label_1a890c;
        case 0x1a8910u: goto label_1a8910;
        case 0x1a8914u: goto label_1a8914;
        case 0x1a8918u: goto label_1a8918;
        case 0x1a891cu: goto label_1a891c;
        case 0x1a8920u: goto label_1a8920;
        case 0x1a8924u: goto label_1a8924;
        case 0x1a8928u: goto label_1a8928;
        case 0x1a892cu: goto label_1a892c;
        case 0x1a8930u: goto label_1a8930;
        case 0x1a8934u: goto label_1a8934;
        case 0x1a8938u: goto label_1a8938;
        case 0x1a893cu: goto label_1a893c;
        case 0x1a8940u: goto label_1a8940;
        case 0x1a8944u: goto label_1a8944;
        case 0x1a8948u: goto label_1a8948;
        case 0x1a894cu: goto label_1a894c;
        case 0x1a8950u: goto label_1a8950;
        case 0x1a8954u: goto label_1a8954;
        case 0x1a8958u: goto label_1a8958;
        case 0x1a895cu: goto label_1a895c;
        case 0x1a8960u: goto label_1a8960;
        case 0x1a8964u: goto label_1a8964;
        case 0x1a8968u: goto label_1a8968;
        case 0x1a896cu: goto label_1a896c;
        case 0x1a8970u: goto label_1a8970;
        case 0x1a8974u: goto label_1a8974;
        case 0x1a8978u: goto label_1a8978;
        case 0x1a897cu: goto label_1a897c;
        case 0x1a8980u: goto label_1a8980;
        case 0x1a8984u: goto label_1a8984;
        case 0x1a8988u: goto label_1a8988;
        case 0x1a898cu: goto label_1a898c;
        case 0x1a8990u: goto label_1a8990;
        case 0x1a8994u: goto label_1a8994;
        case 0x1a8998u: goto label_1a8998;
        case 0x1a899cu: goto label_1a899c;
        case 0x1a89a0u: goto label_1a89a0;
        case 0x1a89a4u: goto label_1a89a4;
        case 0x1a89a8u: goto label_1a89a8;
        case 0x1a89acu: goto label_1a89ac;
        case 0x1a89b0u: goto label_1a89b0;
        case 0x1a89b4u: goto label_1a89b4;
        case 0x1a89b8u: goto label_1a89b8;
        case 0x1a89bcu: goto label_1a89bc;
        case 0x1a89c0u: goto label_1a89c0;
        case 0x1a89c4u: goto label_1a89c4;
        case 0x1a89c8u: goto label_1a89c8;
        case 0x1a89ccu: goto label_1a89cc;
        case 0x1a89d0u: goto label_1a89d0;
        case 0x1a89d4u: goto label_1a89d4;
        case 0x1a89d8u: goto label_1a89d8;
        case 0x1a89dcu: goto label_1a89dc;
        case 0x1a89e0u: goto label_1a89e0;
        case 0x1a89e4u: goto label_1a89e4;
        case 0x1a89e8u: goto label_1a89e8;
        case 0x1a89ecu: goto label_1a89ec;
        case 0x1a89f0u: goto label_1a89f0;
        case 0x1a89f4u: goto label_1a89f4;
        case 0x1a89f8u: goto label_1a89f8;
        case 0x1a89fcu: goto label_1a89fc;
        case 0x1a8a00u: goto label_1a8a00;
        case 0x1a8a04u: goto label_1a8a04;
        case 0x1a8a08u: goto label_1a8a08;
        case 0x1a8a0cu: goto label_1a8a0c;
        case 0x1a8a10u: goto label_1a8a10;
        case 0x1a8a14u: goto label_1a8a14;
        case 0x1a8a18u: goto label_1a8a18;
        case 0x1a8a1cu: goto label_1a8a1c;
        case 0x1a8a20u: goto label_1a8a20;
        case 0x1a8a24u: goto label_1a8a24;
        case 0x1a8a28u: goto label_1a8a28;
        case 0x1a8a2cu: goto label_1a8a2c;
        case 0x1a8a30u: goto label_1a8a30;
        case 0x1a8a34u: goto label_1a8a34;
        case 0x1a8a38u: goto label_1a8a38;
        case 0x1a8a3cu: goto label_1a8a3c;
        case 0x1a8a40u: goto label_1a8a40;
        case 0x1a8a44u: goto label_1a8a44;
        case 0x1a8a48u: goto label_1a8a48;
        case 0x1a8a4cu: goto label_1a8a4c;
        case 0x1a8a50u: goto label_1a8a50;
        case 0x1a8a54u: goto label_1a8a54;
        case 0x1a8a58u: goto label_1a8a58;
        case 0x1a8a5cu: goto label_1a8a5c;
        case 0x1a8a60u: goto label_1a8a60;
        case 0x1a8a64u: goto label_1a8a64;
        case 0x1a8a68u: goto label_1a8a68;
        case 0x1a8a6cu: goto label_1a8a6c;
        case 0x1a8a70u: goto label_1a8a70;
        case 0x1a8a74u: goto label_1a8a74;
        case 0x1a8a78u: goto label_1a8a78;
        case 0x1a8a7cu: goto label_1a8a7c;
        case 0x1a8a80u: goto label_1a8a80;
        case 0x1a8a84u: goto label_1a8a84;
        case 0x1a8a88u: goto label_1a8a88;
        case 0x1a8a8cu: goto label_1a8a8c;
        case 0x1a8a90u: goto label_1a8a90;
        case 0x1a8a94u: goto label_1a8a94;
        case 0x1a8a98u: goto label_1a8a98;
        case 0x1a8a9cu: goto label_1a8a9c;
        case 0x1a8aa0u: goto label_1a8aa0;
        case 0x1a8aa4u: goto label_1a8aa4;
        case 0x1a8aa8u: goto label_1a8aa8;
        case 0x1a8aacu: goto label_1a8aac;
        case 0x1a8ab0u: goto label_1a8ab0;
        case 0x1a8ab4u: goto label_1a8ab4;
        case 0x1a8ab8u: goto label_1a8ab8;
        case 0x1a8abcu: goto label_1a8abc;
        case 0x1a8ac0u: goto label_1a8ac0;
        case 0x1a8ac4u: goto label_1a8ac4;
        case 0x1a8ac8u: goto label_1a8ac8;
        case 0x1a8accu: goto label_1a8acc;
        case 0x1a8ad0u: goto label_1a8ad0;
        case 0x1a8ad4u: goto label_1a8ad4;
        case 0x1a8ad8u: goto label_1a8ad8;
        case 0x1a8adcu: goto label_1a8adc;
        case 0x1a8ae0u: goto label_1a8ae0;
        case 0x1a8ae4u: goto label_1a8ae4;
        case 0x1a8ae8u: goto label_1a8ae8;
        case 0x1a8aecu: goto label_1a8aec;
        case 0x1a8af0u: goto label_1a8af0;
        case 0x1a8af4u: goto label_1a8af4;
        case 0x1a8af8u: goto label_1a8af8;
        case 0x1a8afcu: goto label_1a8afc;
        case 0x1a8b00u: goto label_1a8b00;
        case 0x1a8b04u: goto label_1a8b04;
        case 0x1a8b08u: goto label_1a8b08;
        case 0x1a8b0cu: goto label_1a8b0c;
        case 0x1a8b10u: goto label_1a8b10;
        case 0x1a8b14u: goto label_1a8b14;
        case 0x1a8b18u: goto label_1a8b18;
        case 0x1a8b1cu: goto label_1a8b1c;
        case 0x1a8b20u: goto label_1a8b20;
        case 0x1a8b24u: goto label_1a8b24;
        case 0x1a8b28u: goto label_1a8b28;
        case 0x1a8b2cu: goto label_1a8b2c;
        case 0x1a8b30u: goto label_1a8b30;
        case 0x1a8b34u: goto label_1a8b34;
        case 0x1a8b38u: goto label_1a8b38;
        case 0x1a8b3cu: goto label_1a8b3c;
        case 0x1a8b40u: goto label_1a8b40;
        case 0x1a8b44u: goto label_1a8b44;
        default: break;
    }

    ctx->pc = 0x1a8590u;

label_1a8590:
    // 0x1a8590: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a8590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1a8594:
    // 0x1a8594: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1a8594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1a8598:
    // 0x1a8598: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1a8598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1a859c:
    // 0x1a859c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a859cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a85a0:
    // 0x1a85a0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1a85a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1a85a4:
    // 0x1a85a4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1a85a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1a85a8:
    // 0x1a85a8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1a85a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1a85ac:
    // 0x1a85ac: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1a85acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1a85b0:
    // 0x1a85b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a85b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1a85b4:
    // 0x1a85b4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1a85b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1a85b8:
    // 0x1a85b8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1a85b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1a85bc:
    // 0x1a85bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a85bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a85c0:
    // 0x1a85c0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x1a85c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_1a85c4:
    // 0x1a85c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a85c8:
    if (ctx->pc == 0x1A85C8u) {
        ctx->pc = 0x1A85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85C4u;
        // 0x1a85c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A85CCu;
        goto label_1a85cc;
    }
    ctx->pc = 0x1A85C4u;
    {
        const bool branch_taken_0x1a85c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85C4u;
        // 0x1a85c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85c4) {
            ctx->pc = 0x1A85D4u;
            goto label_1a85d4;
        }
    }
    ctx->pc = 0x1A85CCu;
label_1a85cc:
    // 0x1a85cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a85d0:
    if (ctx->pc == 0x1A85D0u) {
        ctx->pc = 0x1A85D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85CCu;
        // 0x1a85d0: 0xae221558  sw          $v0, 0x1558($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A85D4u;
        goto label_1a85d4;
    }
    ctx->pc = 0x1A85CCu;
    {
        const bool branch_taken_0x1a85cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A85D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85CCu;
        // 0x1a85d0: 0xae221558  sw          $v0, 0x1558($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85cc) {
            ctx->pc = 0x1A85D8u;
            goto label_1a85d8;
        }
    }
    ctx->pc = 0x1A85D4u;
label_1a85d4:
    // 0x1a85d4: 0xae201558  sw          $zero, 0x1558($s1)
    ctx->pc = 0x1a85d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5464), GPR_U32(ctx, 0));
label_1a85d8:
    // 0x1a85d8: 0xc089f76  jal         func_227DD8
label_1a85dc:
    if (ctx->pc == 0x1A85DCu) {
        ctx->pc = 0x1A85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85D8u;
        // 0x1a85dc: 0x8e24156c  lw          $a0, 0x156C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A85E0u;
        goto label_1a85e0;
    }
    ctx->pc = 0x1A85D8u;
    SET_GPR_U32(ctx, 31, 0x1A85E0u);
    ctx->pc = 0x1A85DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A85D8u;
    // 0x1a85dc: 0x8e24156c  lw          $a0, 0x156C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x1A85D8u, 0x1A85E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A85E0u;
label_1a85e0:
    // 0x1a85e0: 0x144000dd  bnez        $v0, . + 4 + (0xDD << 2)
label_1a85e4:
    if (ctx->pc == 0x1A85E4u) {
        ctx->pc = 0x1A85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85E0u;
        // 0x1a85e4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A85E8u;
        goto label_1a85e8;
    }
    ctx->pc = 0x1A85E0u;
    {
        const bool branch_taken_0x1a85e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85E0u;
        // 0x1a85e4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85e0) {
            ctx->pc = 0x1A8958u;
            goto label_1a8958;
        }
    }
    ctx->pc = 0x1A85E8u;
label_1a85e8:
    // 0x1a85e8: 0x8e221554  lw          $v0, 0x1554($s1)
    ctx->pc = 0x1a85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5460)));
label_1a85ec:
    // 0x1a85ec: 0x504000db  beql        $v0, $zero, . + 4 + (0xDB << 2)
label_1a85f0:
    if (ctx->pc == 0x1A85F0u) {
        ctx->pc = 0x1A85F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85ECu;
        // 0x1a85f0: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A85F4u;
        goto label_1a85f4;
    }
    ctx->pc = 0x1A85ECu;
    {
        const bool branch_taken_0x1a85ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a85ec) {
            ctx->pc = 0x1A85F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A85ECu;
            // 0x1a85f0: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A895Cu;
            goto label_1a895c;
        }
    }
    ctx->pc = 0x1A85F4u;
label_1a85f4:
    // 0x1a85f4: 0x8e22155c  lw          $v0, 0x155C($s1)
    ctx->pc = 0x1a85f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5468)));
label_1a85f8:
    // 0x1a85f8: 0x504000d8  beql        $v0, $zero, . + 4 + (0xD8 << 2)
label_1a85fc:
    if (ctx->pc == 0x1A85FCu) {
        ctx->pc = 0x1A85FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85F8u;
        // 0x1a85fc: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8600u;
        goto label_1a8600;
    }
    ctx->pc = 0x1A85F8u;
    {
        const bool branch_taken_0x1a85f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a85f8) {
            ctx->pc = 0x1A85FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A85F8u;
            // 0x1a85fc: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A895Cu;
            goto label_1a895c;
        }
    }
    ctx->pc = 0x1A8600u;
label_1a8600:
    // 0x1a8600: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a8600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a8604:
    // 0x1a8604: 0x504000d5  beql        $v0, $zero, . + 4 + (0xD5 << 2)
label_1a8608:
    if (ctx->pc == 0x1A8608u) {
        ctx->pc = 0x1A8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8604u;
        // 0x1a8608: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A860Cu;
        goto label_1a860c;
    }
    ctx->pc = 0x1A8604u;
    {
        const bool branch_taken_0x1a8604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8604) {
            ctx->pc = 0x1A8608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8604u;
            // 0x1a8608: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A895Cu;
            goto label_1a895c;
        }
    }
    ctx->pc = 0x1A860Cu;
label_1a860c:
    // 0x1a860c: 0x8e221548  lw          $v0, 0x1548($s1)
    ctx->pc = 0x1a860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5448)));
label_1a8610:
    // 0x1a8610: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1a8614:
    if (ctx->pc == 0x1A8614u) {
        ctx->pc = 0x1A8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8610u;
        // 0x1a8614: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8618u;
        goto label_1a8618;
    }
    ctx->pc = 0x1A8610u;
    {
        const bool branch_taken_0x1a8610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8610u;
        // 0x1a8614: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8610) {
            ctx->pc = 0x1A8654u;
            goto label_1a8654;
        }
    }
    ctx->pc = 0x1A8618u;
label_1a8618:
    // 0x1a8618: 0x8e251540  lw          $a1, 0x1540($s1)
    ctx->pc = 0x1a8618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5440)));
label_1a861c:
    // 0x1a861c: 0xc06a14c  jal         func_1A8530
label_1a8620:
    if (ctx->pc == 0x1A8620u) {
        ctx->pc = 0x1A8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A861Cu;
        // 0x1a8620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8624u;
        goto label_1a8624;
    }
    ctx->pc = 0x1A861Cu;
    SET_GPR_U32(ctx, 31, 0x1A8624u);
    ctx->pc = 0x1A8620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A861Cu;
    // 0x1a8620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1A861Cu, 0x1A8624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8624u;
label_1a8624:
    // 0x1a8624: 0x8e251574  lw          $a1, 0x1574($s1)
    ctx->pc = 0x1a8624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5492)));
label_1a8628:
    // 0x1a8628: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a8628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a862c:
    // 0x1a862c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x1a862cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1a8630:
    // 0x1a8630: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a8630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a8634:
    // 0x1a8634: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a8634u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a8638:
    // 0x1a8638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a863c:
    // 0x1a863c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a863cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a8640:
    // 0x1a8640: 0x9082041e  lbu         $v0, 0x41E($a0)
    ctx->pc = 0x1a8640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1054)));
label_1a8644:
    // 0x1a8644: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
label_1a8648:
    if (ctx->pc == 0x1A8648u) {
        ctx->pc = 0x1A8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8644u;
        // 0x1a8648: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A864Cu;
        goto label_1a864c;
    }
    ctx->pc = 0x1A8644u;
    {
        const bool branch_taken_0x1a8644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8644u;
        // 0x1a8648: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8644) {
            ctx->pc = 0x1A8958u;
            goto label_1a8958;
        }
    }
    ctx->pc = 0x1A864Cu;
label_1a864c:
    // 0x1a864c: 0x8e221548  lw          $v0, 0x1548($s1)
    ctx->pc = 0x1a864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5448)));
label_1a8650:
    // 0x1a8650: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a8650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a8654:
    // 0x1a8654: 0x26300050  addiu       $s0, $s1, 0x50
    ctx->pc = 0x1a8654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1a8658:
    // 0x1a8658: 0x9043d320  lbu         $v1, -0x2CE0($v0)
    ctx->pc = 0x1a8658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955808)));
label_1a865c:
    // 0x1a865c: 0xa203018c  sb          $v1, 0x18C($s0)
    ctx->pc = 0x1a865cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 396), (uint8_t)GPR_U32(ctx, 3));
label_1a8660:
    // 0x1a8660: 0x8e221548  lw          $v0, 0x1548($s1)
    ctx->pc = 0x1a8660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5448)));
label_1a8664:
    // 0x1a8664: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1a8668:
    if (ctx->pc == 0x1A8668u) {
        ctx->pc = 0x1A8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8664u;
        // 0x1a8668: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A866Cu;
        goto label_1a866c;
    }
    ctx->pc = 0x1A8664u;
    {
        const bool branch_taken_0x1a8664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8664u;
        // 0x1a8668: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8664) {
            ctx->pc = 0x1A86E0u;
            goto label_1a86e0;
        }
    }
    ctx->pc = 0x1A866Cu;
label_1a866c:
    // 0x1a866c: 0x8e251540  lw          $a1, 0x1540($s1)
    ctx->pc = 0x1a866cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5440)));
label_1a8670:
    // 0x1a8670: 0xc06a14c  jal         func_1A8530
label_1a8674:
    if (ctx->pc == 0x1A8674u) {
        ctx->pc = 0x1A8674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8670u;
        // 0x1a8674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8678u;
        goto label_1a8678;
    }
    ctx->pc = 0x1A8670u;
    SET_GPR_U32(ctx, 31, 0x1A8678u);
    ctx->pc = 0x1A8674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8670u;
    // 0x1a8674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1A8670u, 0x1A8678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8678u;
label_1a8678:
    // 0x1a8678: 0x8e251574  lw          $a1, 0x1574($s1)
    ctx->pc = 0x1a8678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5492)));
label_1a867c:
    // 0x1a867c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a867cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a8680:
    // 0x1a8680: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x1a8680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1a8684:
    // 0x1a8684: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a8684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a8688:
    // 0x1a8688: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a8688u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a868c:
    // 0x1a868c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a868cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8690:
    // 0x1a8690: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a8690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a8694:
    // 0x1a8694: 0x9082041e  lbu         $v0, 0x41E($a0)
    ctx->pc = 0x1a8694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1054)));
label_1a8698:
    // 0x1a8698: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a869c:
    if (ctx->pc == 0x1A869Cu) {
        ctx->pc = 0x1A869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8698u;
        // 0x1a869c: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A86A0u;
        goto label_1a86a0;
    }
    ctx->pc = 0x1A8698u;
    {
        const bool branch_taken_0x1a8698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8698u;
        // 0x1a869c: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8698) {
            ctx->pc = 0x1A86C8u;
            goto label_1a86c8;
        }
    }
    ctx->pc = 0x1A86A0u;
label_1a86a0:
    // 0x1a86a0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1a86a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a86a4:
    // 0x1a86a4: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x1a86a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
label_1a86a8:
    // 0x1a86a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a86a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a86ac:
    // 0x1a86ac: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x1a86acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
label_1a86b0:
    // 0x1a86b0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1a86b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_1a86b4:
    // 0x1a86b4: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x1a86b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_1a86b8:
    // 0x1a86b8: 0xc06ec0e  jal         func_1BB038
label_1a86bc:
    if (ctx->pc == 0x1A86BCu) {
        ctx->pc = 0x1A86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86B8u;
        // 0x1a86bc: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A86C0u;
        goto label_1a86c0;
    }
    ctx->pc = 0x1A86B8u;
    SET_GPR_U32(ctx, 31, 0x1A86C0u);
    ctx->pc = 0x1A86BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86B8u;
    // 0x1a86bc: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB038u, 0x1A86B8u, 0x1A86C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86C0u;
label_1a86c0:
    // 0x1a86c0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a86c4:
    if (ctx->pc == 0x1A86C4u) {
        ctx->pc = 0x1A86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86C0u;
        // 0x1a86c4: 0x26220f40  addiu       $v0, $s1, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A86C8u;
        goto label_1a86c8;
    }
    ctx->pc = 0x1A86C0u;
    {
        const bool branch_taken_0x1a86c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86C0u;
        // 0x1a86c4: 0x26220f40  addiu       $v0, $s1, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86c0) {
            ctx->pc = 0x1A86F0u;
            goto label_1a86f0;
        }
    }
    ctx->pc = 0x1A86C8u;
label_1a86c8:
    // 0x1a86c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1a86c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1a86cc:
    // 0x1a86cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a86ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a86d0:
    // 0x1a86d0: 0xc06ec0e  jal         func_1BB038
label_1a86d4:
    if (ctx->pc == 0x1A86D4u) {
        ctx->pc = 0x1A86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86D0u;
        // 0x1a86d4: 0x8c4507b8  lw          $a1, 0x7B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1976)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A86D8u;
        goto label_1a86d8;
    }
    ctx->pc = 0x1A86D0u;
    SET_GPR_U32(ctx, 31, 0x1A86D8u);
    ctx->pc = 0x1A86D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86D0u;
    // 0x1a86d4: 0x8c4507b8  lw          $a1, 0x7B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1976)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB038u, 0x1A86D0u, 0x1A86D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86D8u;
label_1a86d8:
    // 0x1a86d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a86dc:
    if (ctx->pc == 0x1A86DCu) {
        ctx->pc = 0x1A86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86D8u;
        // 0x1a86dc: 0x26220f40  addiu       $v0, $s1, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A86E0u;
        goto label_1a86e0;
    }
    ctx->pc = 0x1A86D8u;
    {
        const bool branch_taken_0x1a86d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86D8u;
        // 0x1a86dc: 0x26220f40  addiu       $v0, $s1, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86d8) {
            ctx->pc = 0x1A86F0u;
            goto label_1a86f0;
        }
    }
    ctx->pc = 0x1A86E0u;
label_1a86e0:
    // 0x1a86e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a86e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a86e4:
    // 0x1a86e4: 0xc06ec0e  jal         func_1BB038
label_1a86e8:
    if (ctx->pc == 0x1A86E8u) {
        ctx->pc = 0x1A86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86E4u;
        // 0x1a86e8: 0x8c4507a0  lw          $a1, 0x7A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A86ECu;
        goto label_1a86ec;
    }
    ctx->pc = 0x1A86E4u;
    SET_GPR_U32(ctx, 31, 0x1A86ECu);
    ctx->pc = 0x1A86E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86E4u;
    // 0x1a86e8: 0x8c4507a0  lw          $a1, 0x7A0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1952)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB038u, 0x1A86E4u, 0x1A86ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86ECu;
label_1a86ec:
    // 0x1a86ec: 0x26220f40  addiu       $v0, $s1, 0xF40
    ctx->pc = 0x1a86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
label_1a86f0:
    // 0x1a86f0: 0x26250340  addiu       $a1, $s1, 0x340
    ctx->pc = 0x1a86f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_1a86f4:
    // 0x1a86f4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1a86f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1a86f8:
    // 0x1a86f8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1a86f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a86fc:
    // 0x1a86fc: 0x26370940  addiu       $s7, $s1, 0x940
    ctx->pc = 0x1a86fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
label_1a8700:
    // 0x1a8700: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x1a8700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
label_1a8704:
    // 0x1a8704: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1a8704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_1a8708:
    // 0x1a8708: 0x27b60004  addiu       $s6, $sp, 0x4
    ctx->pc = 0x1a8708u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1a870c:
    // 0x1a870c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1a870cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1a8710:
    // 0x1a8710: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x1a8710u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a8714:
    // 0x1a8714: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1a8714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_1a8718:
    // 0x1a8718: 0x27b50008  addiu       $s5, $sp, 0x8
    ctx->pc = 0x1a8718u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1a871c:
    // 0x1a871c: 0xafbe0028  sw          $fp, 0x28($sp)
    ctx->pc = 0x1a871cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 30));
label_1a8720:
    // 0x1a8720: 0x27b4000c  addiu       $s4, $sp, 0xC
    ctx->pc = 0x1a8720u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1a8724:
    // 0x1a8724: 0xafb7002c  sw          $s7, 0x2C($sp)
    ctx->pc = 0x1a8724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 23));
label_1a8728:
    // 0x1a8728: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1a8728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a872c:
    // 0x1a872c: 0x0  nop
    ctx->pc = 0x1a872cu;
    // NOP
label_1a8730:
    // 0x1a8730: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1a8730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8734:
    // 0x1a8734: 0xc06a14c  jal         func_1A8530
label_1a8738:
    if (ctx->pc == 0x1A8738u) {
        ctx->pc = 0x1A8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8734u;
        // 0x1a8738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A873Cu;
        goto label_1a873c;
    }
    ctx->pc = 0x1A8734u;
    SET_GPR_U32(ctx, 31, 0x1A873Cu);
    ctx->pc = 0x1A8738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8734u;
    // 0x1a8738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1A8734u, 0x1A873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A873Cu;
label_1a873c:
    // 0x1a873c: 0x8e251574  lw          $a1, 0x1574($s1)
    ctx->pc = 0x1a873cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5492)));
label_1a8740:
    // 0x1a8740: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a8740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a8744:
    // 0x1a8744: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x1a8744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1a8748:
    // 0x1a8748: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a8748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a874c:
    // 0x1a874c: 0x8e261540  lw          $a2, 0x1540($s1)
    ctx->pc = 0x1a874cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5440)));
label_1a8750:
    // 0x1a8750: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a8750u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a8754:
    // 0x1a8754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8758:
    // 0x1a8758: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1a8758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1a875c:
    // 0x1a875c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a875cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a8760:
    // 0x1a8760: 0x9082041e  lbu         $v0, 0x41E($a0)
    ctx->pc = 0x1a8760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1054)));
label_1a8764:
    // 0x1a8764: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a8764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a8768:
    // 0x1a8768: 0x14a60022  bne         $a1, $a2, . + 4 + (0x22 << 2)
label_1a876c:
    if (ctx->pc == 0x1A876Cu) {
        ctx->pc = 0x1A876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8768u;
        // 0x1a876c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8770u;
        goto label_1a8770;
    }
    ctx->pc = 0x1A8768u;
    {
        const bool branch_taken_0x1a8768 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1A876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8768u;
        // 0x1a876c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8768) {
            ctx->pc = 0x1A87F4u;
            goto label_1a87f4;
        }
    }
    ctx->pc = 0x1A8770u;
label_1a8770:
    // 0x1a8770: 0x8e221560  lw          $v0, 0x1560($s1)
    ctx->pc = 0x1a8770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5472)));
label_1a8774:
    // 0x1a8774: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1a8778:
    if (ctx->pc == 0x1A8778u) {
        ctx->pc = 0x1A8778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8774u;
        // 0x1a8778: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A877Cu;
        goto label_1a877c;
    }
    ctx->pc = 0x1A8774u;
    {
        const bool branch_taken_0x1a8774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8774u;
        // 0x1a8778: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8774) {
            ctx->pc = 0x1A87F4u;
            goto label_1a87f4;
        }
    }
    ctx->pc = 0x1A877Cu;
label_1a877c:
    // 0x1a877c: 0x8e030940  lw          $v1, 0x940($s0)
    ctx->pc = 0x1a877cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2368)));
label_1a8780:
    // 0x1a8780: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1a8780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1a8784:
    // 0x1a8784: 0xa3b30004  sb          $s3, 0x4($sp)
    ctx->pc = 0x1a8784u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 19));
label_1a8788:
    // 0x1a8788: 0x29200  sll         $s2, $v0, 8
    ctx->pc = 0x1a8788u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1a878c:
    // 0x1a878c: 0xa2d30001  sb          $s3, 0x1($s6)
    ctx->pc = 0x1a878cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 19));
label_1a8790:
    // 0x1a8790: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a8790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1a8794:
    // 0x1a8794: 0xa2d30002  sb          $s3, 0x2($s6)
    ctx->pc = 0x1a8794u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 19));
label_1a8798:
    // 0x1a8798: 0xa2d30003  sb          $s3, 0x3($s6)
    ctx->pc = 0x1a8798u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 19));
label_1a879c:
    // 0x1a879c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a879cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a87a0:
    // 0x1a87a0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a87a4:
    // 0x1a87a4: 0x40f809  jalr        $v0
label_1a87a8:
    if (ctx->pc == 0x1A87A8u) {
        ctx->pc = 0x1A87A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87A4u;
        // 0x1a87a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A87ACu;
        goto label_1a87ac;
    }
    ctx->pc = 0x1A87A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A87ACu);
        ctx->pc = 0x1A87A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87A4u;
        // 0x1a87a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A87A4u, 0x1A87ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A87ACu;
label_1a87ac:
    // 0x1a87ac: 0x8e030340  lw          $v1, 0x340($s0)
    ctx->pc = 0x1a87acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
label_1a87b0:
    // 0x1a87b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1a87b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1a87b4:
    // 0x1a87b4: 0x244507a0  addiu       $a1, $v0, 0x7A0
    ctx->pc = 0x1a87b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1952));
label_1a87b8:
    // 0x1a87b8: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1a87b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1a87bc:
    // 0x1a87bc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a87c0:
    // 0x1a87c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a87c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a87c4:
    // 0x1a87c4: 0x40f809  jalr        $v0
label_1a87c8:
    if (ctx->pc == 0x1A87C8u) {
        ctx->pc = 0x1A87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87C4u;
        // 0x1a87c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A87CCu;
        goto label_1a87cc;
    }
    ctx->pc = 0x1A87C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A87CCu);
        ctx->pc = 0x1A87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87C4u;
        // 0x1a87c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A87C4u, 0x1A87CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A87CCu;
label_1a87cc:
    // 0x1a87cc: 0x8e030f40  lw          $v1, 0xF40($s0)
    ctx->pc = 0x1a87ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3904)));
label_1a87d0:
    // 0x1a87d0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1a87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1a87d4:
    // 0x1a87d4: 0x244507a8  addiu       $a1, $v0, 0x7A8
    ctx->pc = 0x1a87d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1960));
label_1a87d8:
    // 0x1a87d8: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1a87d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1a87dc:
    // 0x1a87dc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a87e0:
    // 0x1a87e0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1a87e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1a87e4:
    // 0x1a87e4: 0x40f809  jalr        $v0
label_1a87e8:
    if (ctx->pc == 0x1A87E8u) {
        ctx->pc = 0x1A87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87E4u;
        // 0x1a87e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A87ECu;
        goto label_1a87ec;
    }
    ctx->pc = 0x1A87E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A87ECu);
        ctx->pc = 0x1A87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87E4u;
        // 0x1a87e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A87E4u, 0x1A87ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A87ECu;
label_1a87ec:
    // 0x1a87ec: 0x10000020  b           . + 4 + (0x20 << 2)
label_1a87f0:
    if (ctx->pc == 0x1A87F0u) {
        ctx->pc = 0x1A87F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87ECu;
        // 0x1a87f0: 0x8e020f40  lw          $v0, 0xF40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3904)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A87F4u;
        goto label_1a87f4;
    }
    ctx->pc = 0x1A87ECu;
    {
        const bool branch_taken_0x1a87ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A87F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87ECu;
        // 0x1a87f0: 0x8e020f40  lw          $v0, 0xF40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87ec) {
            ctx->pc = 0x1A8870u;
            goto label_1a8870;
        }
    }
    ctx->pc = 0x1A87F4u;
label_1a87f4:
    // 0x1a87f4: 0x8e030940  lw          $v1, 0x940($s0)
    ctx->pc = 0x1a87f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2368)));
label_1a87f8:
    // 0x1a87f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a87f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a87fc:
    // 0x1a87fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a87fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8800:
    // 0x1a8800: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1a8800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1a8804:
    // 0x1a8804: 0xa3b30008  sb          $s3, 0x8($sp)
    ctx->pc = 0x1a8804u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 19));
label_1a8808:
    // 0x1a8808: 0x29200  sll         $s2, $v0, 8
    ctx->pc = 0x1a8808u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1a880c:
    // 0x1a880c: 0xa2b30001  sb          $s3, 0x1($s5)
    ctx->pc = 0x1a880cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 19));
label_1a8810:
    // 0x1a8810: 0xa2b30002  sb          $s3, 0x2($s5)
    ctx->pc = 0x1a8810u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 19));
label_1a8814:
    // 0x1a8814: 0xa2b30003  sb          $s3, 0x3($s5)
    ctx->pc = 0x1a8814u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 19));
label_1a8818:
    // 0x1a8818: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a8818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a881c:
    // 0x1a881c: 0x40f809  jalr        $v0
label_1a8820:
    if (ctx->pc == 0x1A8820u) {
        ctx->pc = 0x1A8820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A881Cu;
        // 0x1a8820: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8824u;
        goto label_1a8824;
    }
    ctx->pc = 0x1A881Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8824u);
        ctx->pc = 0x1A8820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A881Cu;
        // 0x1a8820: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A881Cu, 0x1A8824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8824u;
label_1a8824:
    // 0x1a8824: 0x8e030340  lw          $v1, 0x340($s0)
    ctx->pc = 0x1a8824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
label_1a8828:
    // 0x1a8828: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1a8828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1a882c:
    // 0x1a882c: 0x244507a8  addiu       $a1, $v0, 0x7A8
    ctx->pc = 0x1a882cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1960));
label_1a8830:
    // 0x1a8830: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1a8830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1a8834:
    // 0x1a8834: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a8834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a8838:
    // 0x1a8838: 0x40f809  jalr        $v0
label_1a883c:
    if (ctx->pc == 0x1A883Cu) {
        ctx->pc = 0x1A883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8838u;
        // 0x1a883c: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8840u;
        goto label_1a8840;
    }
    ctx->pc = 0x1A8838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8840u);
        ctx->pc = 0x1A883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8838u;
        // 0x1a883c: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8838u, 0x1A8840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8840u;
label_1a8840:
    // 0x1a8840: 0x8e030f40  lw          $v1, 0xF40($s0)
    ctx->pc = 0x1a8840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3904)));
label_1a8844:
    // 0x1a8844: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1a8844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1a8848:
    // 0x1a8848: 0xa3a0000c  sb          $zero, 0xC($sp)
    ctx->pc = 0x1a8848u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 0));
label_1a884c:
    // 0x1a884c: 0xa2800001  sb          $zero, 0x1($s4)
    ctx->pc = 0x1a884cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 0));
label_1a8850:
    // 0x1a8850: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a8850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a8854:
    // 0x1a8854: 0xa2800002  sb          $zero, 0x2($s4)
    ctx->pc = 0x1a8854u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 0));
label_1a8858:
    // 0x1a8858: 0xa2930003  sb          $s3, 0x3($s4)
    ctx->pc = 0x1a8858u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 19));
label_1a885c:
    // 0x1a885c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a885cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a8860:
    // 0x1a8860: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a8860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a8864:
    // 0x1a8864: 0x40f809  jalr        $v0
label_1a8868:
    if (ctx->pc == 0x1A8868u) {
        ctx->pc = 0x1A8868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8864u;
        // 0x1a8868: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A886Cu;
        goto label_1a886c;
    }
    ctx->pc = 0x1A8864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A886Cu);
        ctx->pc = 0x1A8868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8864u;
        // 0x1a8868: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8864u, 0x1A886Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A886Cu;
label_1a886c:
    // 0x1a886c: 0x8e020f40  lw          $v0, 0xF40($s0)
    ctx->pc = 0x1a886cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3904)));
label_1a8870:
    // 0x1a8870: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x1a8870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1a8874:
    // 0x1a8874: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1a8874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1a8878:
    // 0x1a8878: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1a8878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1a887c:
    // 0x1a887c: 0x60f809  jalr        $v1
label_1a8880:
    if (ctx->pc == 0x1A8880u) {
        ctx->pc = 0x1A8880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A887Cu;
        // 0x1a8880: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8884u;
        goto label_1a8884;
    }
    ctx->pc = 0x1A887Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A8884u);
        ctx->pc = 0x1A8880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A887Cu;
        // 0x1a8880: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A887Cu, 0x1A8884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8884u;
label_1a8884:
    // 0x1a8884: 0x8e020340  lw          $v0, 0x340($s0)
    ctx->pc = 0x1a8884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
label_1a8888:
    // 0x1a8888: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1a8888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1a888c:
    // 0x1a888c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1a888cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1a8890:
    // 0x1a8890: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a8890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a8894:
    // 0x1a8894: 0x60f809  jalr        $v1
label_1a8898:
    if (ctx->pc == 0x1A8898u) {
        ctx->pc = 0x1A8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8894u;
        // 0x1a8898: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A889Cu;
        goto label_1a889c;
    }
    ctx->pc = 0x1A8894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A889Cu);
        ctx->pc = 0x1A8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8894u;
        // 0x1a8898: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8894u, 0x1A889Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A889Cu;
label_1a889c:
    // 0x1a889c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1a889cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1a88a0:
    // 0x1a88a0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_1a88a4:
    if (ctx->pc == 0x1A88A4u) {
        ctx->pc = 0x1A88A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88A0u;
        // 0x1a88a4: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A88A8u;
        goto label_1a88a8;
    }
    ctx->pc = 0x1A88A0u;
    {
        const bool branch_taken_0x1a88a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A88A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88A0u;
        // 0x1a88a4: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a88a0) {
            ctx->pc = 0x1A88D0u;
            goto label_1a88d0;
        }
    }
    ctx->pc = 0x1A88A8u;
label_1a88a8:
    // 0x1a88a8: 0x8e060940  lw          $a2, 0x940($s0)
    ctx->pc = 0x1a88a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2368)));
label_1a88ac:
    // 0x1a88ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1a88acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1a88b0:
    // 0x1a88b0: 0x244507b8  addiu       $a1, $v0, 0x7B8
    ctx->pc = 0x1a88b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1976));
label_1a88b4:
    // 0x1a88b4: 0x26440940  addiu       $a0, $s2, 0x940
    ctx->pc = 0x1a88b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
label_1a88b8:
    // 0x1a88b8: 0x84c20020  lh          $v0, 0x20($a2)
    ctx->pc = 0x1a88b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
label_1a88bc:
    // 0x1a88bc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1a88bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1a88c0:
    // 0x1a88c0: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x1a88c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1a88c4:
    // 0x1a88c4: 0x60f809  jalr        $v1
label_1a88c8:
    if (ctx->pc == 0x1A88C8u) {
        ctx->pc = 0x1A88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88C4u;
        // 0x1a88c8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A88CCu;
        goto label_1a88cc;
    }
    ctx->pc = 0x1A88C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A88CCu);
        ctx->pc = 0x1A88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88C4u;
        // 0x1a88c8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A88C4u, 0x1A88CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A88CCu;
label_1a88cc:
    // 0x1a88cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1a88d0:
    // 0x1a88d0: 0x26440940  addiu       $a0, $s2, 0x940
    ctx->pc = 0x1a88d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
label_1a88d4:
    // 0x1a88d4: 0x8e020940  lw          $v0, 0x940($s0)
    ctx->pc = 0x1a88d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2368)));
label_1a88d8:
    // 0x1a88d8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1a88d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1a88dc:
    // 0x1a88dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a88dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a88e0:
    // 0x1a88e0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1a88e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a88e4:
    // 0x1a88e4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a88e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1a88e8:
    // 0x1a88e8: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1a88e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1a88ec:
    // 0x1a88ec: 0x84430038  lh          $v1, 0x38($v0)
    ctx->pc = 0x1a88ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1a88f0:
    // 0x1a88f0: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x1a88f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
label_1a88f4:
    // 0x1a88f4: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x1a88f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
label_1a88f8:
    // 0x1a88f8: 0x27de0100  addiu       $fp, $fp, 0x100
    ctx->pc = 0x1a88f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 256));
label_1a88fc:
    // 0x1a88fc: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1a88fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1a8900:
    // 0x1a8900: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a8900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1a8904:
    // 0x1a8904: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1a8904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1a8908:
    // 0x1a8908: 0x26f70100  addiu       $s7, $s7, 0x100
    ctx->pc = 0x1a8908u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 256));
label_1a890c:
    // 0x1a890c: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1a890cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_1a8910:
    // 0x1a8910: 0xa0f809  jalr        $a1
label_1a8914:
    if (ctx->pc == 0x1A8914u) {
        ctx->pc = 0x1A8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8910u;
        // 0x1a8914: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8918u;
        goto label_1a8918;
    }
    ctx->pc = 0x1A8910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1A8918u);
        ctx->pc = 0x1A8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8910u;
        // 0x1a8914: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8910u, 0x1A8918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8918u;
label_1a8918:
    // 0x1a8918: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a8918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a891c:
    // 0x1a891c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1a891cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1a8920:
    // 0x1a8920: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x1a8920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1a8924:
    // 0x1a8924: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a8924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a8928:
    // 0x1a8928: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x1a8928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
label_1a892c:
    // 0x1a892c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1a892cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1a8930:
    // 0x1a8930: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a8930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1a8934:
    // 0x1a8934: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1a8934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_1a8938:
    // 0x1a8938: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x1a8938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
label_1a893c:
    // 0x1a893c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1a893cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8940:
    // 0x1a8940: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x1a8940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1a8944:
    // 0x1a8944: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1a8944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1a8948:
    // 0x1a8948: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x1a8948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1a894c:
    // 0x1a894c: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
label_1a8950:
    if (ctx->pc == 0x1A8950u) {
        ctx->pc = 0x1A8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A894Cu;
        // 0x1a8950: 0xafa3002c  sw          $v1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8954u;
        goto label_1a8954;
    }
    ctx->pc = 0x1A894Cu;
    {
        const bool branch_taken_0x1a894c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A894Cu;
        // 0x1a8950: 0xafa3002c  sw          $v1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a894c) {
            ctx->pc = 0x1A8730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8730;
        }
    }
    ctx->pc = 0x1A8954u;
label_1a8954:
    // 0x1a8954: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1a8954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a8958:
    // 0x1a8958: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1a8958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a895c:
    // 0x1a895c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1a895cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a8960:
    // 0x1a8960: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1a8960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a8964:
    // 0x1a8964: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1a8964u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a8968:
    // 0x1a8968: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1a8968u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a896c:
    // 0x1a896c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a896cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a8970:
    // 0x1a8970: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1a8970u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a8974:
    // 0x1a8974: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1a8974u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a8978:
    // 0x1a8978: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a8978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a897c:
    // 0x1a897c: 0x3e00008  jr          $ra
label_1a8980:
    if (ctx->pc == 0x1A8980u) {
        ctx->pc = 0x1A8980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A897Cu;
        // 0x1a8980: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8984u;
        goto label_1a8984;
    }
    ctx->pc = 0x1A897Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A897Cu;
        // 0x1a8980: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A897Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8984u;
label_1a8984:
    // 0x1a8984: 0x0  nop
    ctx->pc = 0x1a8984u;
    // NOP
label_1a8988:
    // 0x1a8988: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a8988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a898c:
    // 0x1a898c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a898cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1a8990:
    // 0x1a8990: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a8990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1a8994:
    // 0x1a8994: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a8994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8998:
    // 0x1a8998: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a8998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1a899c:
    // 0x1a899c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a899cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a89a0:
    // 0x1a89a0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a89a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1a89a4:
    // 0x1a89a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a89a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a89a8:
    // 0x1a89a8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a89a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1a89ac:
    // 0x1a89ac: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1a89acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a89b0:
    // 0x1a89b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a89b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a89b4:
    // 0x1a89b4: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1a89b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1a89b8:
    // 0x1a89b8: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x1a89b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_1a89bc:
    // 0x1a89bc: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1a89bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_1a89c0:
    // 0x1a89c0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a89c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a89c4:
    // 0x1a89c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a89c8:
    if (ctx->pc == 0x1A89C8u) {
        ctx->pc = 0x1A89C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89C4u;
        // 0x1a89c8: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89CCu;
        goto label_1a89cc;
    }
    ctx->pc = 0x1A89C4u;
    {
        const bool branch_taken_0x1a89c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A89C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89C4u;
        // 0x1a89c8: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a89c4) {
            ctx->pc = 0x1A89F8u;
            goto label_1a89f8;
        }
    }
    ctx->pc = 0x1A89CCu;
label_1a89cc:
    // 0x1a89cc: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x1a89ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_1a89d0:
    // 0x1a89d0: 0xc0e409a  jal         func_390268
label_1a89d4:
    if (ctx->pc == 0x1A89D4u) {
        ctx->pc = 0x1A89D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89D0u;
        // 0x1a89d4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89D8u;
        goto label_1a89d8;
    }
    ctx->pc = 0x1A89D0u;
    SET_GPR_U32(ctx, 31, 0x1A89D8u);
    ctx->pc = 0x1A89D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A89D0u;
    // 0x1a89d4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1A89D0u, 0x1A89D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A89D8u;
label_1a89d8:
    // 0x1a89d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a89d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a89dc:
    // 0x1a89dc: 0x5240fff6  beql        $s2, $zero, . + 4 + (-0xA << 2)
label_1a89e0:
    if (ctx->pc == 0x1A89E0u) {
        ctx->pc = 0x1A89E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89DCu;
        // 0x1a89e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89E4u;
        goto label_1a89e4;
    }
    ctx->pc = 0x1A89DCu;
    {
        const bool branch_taken_0x1a89dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a89dc) {
            ctx->pc = 0x1A89E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A89DCu;
            // 0x1a89e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A89B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a89b8;
        }
    }
    ctx->pc = 0x1A89E4u;
label_1a89e4:
    // 0x1a89e4: 0x8e430380  lw          $v1, 0x380($s2)
    ctx->pc = 0x1a89e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_1a89e8:
    // 0x1a89e8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1a89e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1a89ec:
    // 0x1a89ec: 0x5462fff2  bnel        $v1, $v0, . + 4 + (-0xE << 2)
label_1a89f0:
    if (ctx->pc == 0x1A89F0u) {
        ctx->pc = 0x1A89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89ECu;
        // 0x1a89f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89F4u;
        goto label_1a89f4;
    }
    ctx->pc = 0x1A89ECu;
    {
        const bool branch_taken_0x1a89ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a89ec) {
            ctx->pc = 0x1A89F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A89ECu;
            // 0x1a89f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A89B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a89b8;
        }
    }
    ctx->pc = 0x1A89F4u;
label_1a89f4:
    // 0x1a89f4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1a89f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a89f8:
    // 0x1a89f8: 0xc08a01c  jal         func_228070
label_1a89fc:
    if (ctx->pc == 0x1A89FCu) {
        ctx->pc = 0x1A89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89F8u;
        // 0x1a89fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A00u;
        goto label_1a8a00;
    }
    ctx->pc = 0x1A89F8u;
    SET_GPR_U32(ctx, 31, 0x1A8A00u);
    ctx->pc = 0x1A89FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A89F8u;
    // 0x1a89fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x1A89F8u, 0x1A8A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8A00u;
label_1a8a00:
    // 0x1a8a00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a8a04:
    if (ctx->pc == 0x1A8A04u) {
        ctx->pc = 0x1A8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A00u;
        // 0x1a8a04: 0x8e63489c  lw          $v1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A08u;
        goto label_1a8a08;
    }
    ctx->pc = 0x1A8A00u;
    {
        const bool branch_taken_0x1a8a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A00u;
        // 0x1a8a04: 0x8e63489c  lw          $v1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a00) {
            ctx->pc = 0x1A8A18u;
            goto label_1a8a18;
        }
    }
    ctx->pc = 0x1A8A08u;
label_1a8a08:
    // 0x1a8a08: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1a8a08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1a8a0c:
    // 0x1a8a0c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1a8a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1a8a10:
    // 0x1a8a10: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
label_1a8a14:
    if (ctx->pc == 0x1A8A14u) {
        ctx->pc = 0x1A8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A10u;
        // 0x1a8a14: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A18u;
        goto label_1a8a18;
    }
    ctx->pc = 0x1A8A10u;
    {
        const bool branch_taken_0x1a8a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A10u;
        // 0x1a8a14: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a10) {
            ctx->pc = 0x1A8B2Cu;
            goto label_1a8b2c;
        }
    }
    ctx->pc = 0x1A8A18u;
label_1a8a18:
    // 0x1a8a18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a8a1c:
    // 0x1a8a1c: 0x12820042  beq         $s4, $v0, . + 4 + (0x42 << 2)
label_1a8a20:
    if (ctx->pc == 0x1A8A20u) {
        ctx->pc = 0x1A8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A1Cu;
        // 0x1a8a20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A24u;
        goto label_1a8a24;
    }
    ctx->pc = 0x1A8A1Cu;
    {
        const bool branch_taken_0x1a8a1c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A1Cu;
        // 0x1a8a20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a1c) {
            ctx->pc = 0x1A8B28u;
            goto label_1a8b28;
        }
    }
    ctx->pc = 0x1A8A24u;
label_1a8a24:
    // 0x1a8a24: 0x924303ac  lbu         $v1, 0x3AC($s2)
    ctx->pc = 0x1a8a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 940)));
label_1a8a28:
    // 0x1a8a28: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
label_1a8a2c:
    if (ctx->pc == 0x1A8A2Cu) {
        ctx->pc = 0x1A8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A28u;
        // 0x1a8a2c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A30u;
        goto label_1a8a30;
    }
    ctx->pc = 0x1A8A28u;
    {
        const bool branch_taken_0x1a8a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A28u;
        // 0x1a8a2c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a28) {
            ctx->pc = 0x1A8B2Cu;
            goto label_1a8b2c;
        }
    }
    ctx->pc = 0x1A8A30u;
label_1a8a30:
    // 0x1a8a30: 0x8e62489c  lw          $v0, 0x489C($s3)
    ctx->pc = 0x1a8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_1a8a34:
    // 0x1a8a34: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1a8a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1a8a38:
    // 0x1a8a38: 0x9045041c  lbu         $a1, 0x41C($v0)
    ctx->pc = 0x1a8a38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1052)));
label_1a8a3c:
    // 0x1a8a3c: 0x2ca30006  sltiu       $v1, $a1, 0x6
    ctx->pc = 0x1a8a3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1a8a40:
    // 0x1a8a40: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_1a8a44:
    if (ctx->pc == 0x1A8A44u) {
        ctx->pc = 0x1A8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A40u;
        // 0x1a8a44: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A48u;
        goto label_1a8a48;
    }
    ctx->pc = 0x1A8A40u;
    {
        const bool branch_taken_0x1a8a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A40u;
        // 0x1a8a44: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a40) {
            ctx->pc = 0x1A8A90u;
            goto label_1a8a90;
        }
    }
    ctx->pc = 0x1A8A48u;
label_1a8a48:
    // 0x1a8a48: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a8a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1a8a4c:
    // 0x1a8a4c: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x1a8a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
label_1a8a50:
    // 0x1a8a50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a8a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a8a54:
    // 0x1a8a54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a8a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a8a58:
    // 0x1a8a58: 0x800008  jr          $a0
label_1a8a5c:
    if (ctx->pc == 0x1A8A5Cu) {
        ctx->pc = 0x1A8A60u;
        goto label_1a8a60;
    }
    ctx->pc = 0x1A8A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8A60u: goto label_1a8a60;
            case 0x1A8A68u: goto label_1a8a68;
            case 0x1A8A70u: goto label_1a8a70;
            case 0x1A8A78u: goto label_1a8a78;
            case 0x1A8A80u: goto label_1a8a80;
            case 0x1A8A88u: goto label_1a8a88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8A58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A8A60u;
label_1a8a60:
    // 0x1a8a60: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a8a64:
    if (ctx->pc == 0x1A8A64u) {
        ctx->pc = 0x1A8A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A60u;
        // 0x1a8a64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A68u;
        goto label_1a8a68;
    }
    ctx->pc = 0x1A8A60u;
    {
        const bool branch_taken_0x1a8a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A60u;
        // 0x1a8a64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a60) {
            ctx->pc = 0x1A8A8Cu;
            goto label_1a8a8c;
        }
    }
    ctx->pc = 0x1A8A68u;
label_1a8a68:
    // 0x1a8a68: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a8a6c:
    if (ctx->pc == 0x1A8A6Cu) {
        ctx->pc = 0x1A8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A68u;
        // 0x1a8a6c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A70u;
        goto label_1a8a70;
    }
    ctx->pc = 0x1A8A68u;
    {
        const bool branch_taken_0x1a8a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A68u;
        // 0x1a8a6c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a68) {
            ctx->pc = 0x1A8A8Cu;
            goto label_1a8a8c;
        }
    }
    ctx->pc = 0x1A8A70u;
label_1a8a70:
    // 0x1a8a70: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a8a74:
    if (ctx->pc == 0x1A8A74u) {
        ctx->pc = 0x1A8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A70u;
        // 0x1a8a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A78u;
        goto label_1a8a78;
    }
    ctx->pc = 0x1A8A70u;
    {
        const bool branch_taken_0x1a8a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A70u;
        // 0x1a8a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a70) {
            ctx->pc = 0x1A8A8Cu;
            goto label_1a8a8c;
        }
    }
    ctx->pc = 0x1A8A78u;
label_1a8a78:
    // 0x1a8a78: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a8a7c:
    if (ctx->pc == 0x1A8A7Cu) {
        ctx->pc = 0x1A8A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A78u;
        // 0x1a8a7c: 0xae201540  sw          $zero, 0x1540($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A80u;
        goto label_1a8a80;
    }
    ctx->pc = 0x1A8A78u;
    {
        const bool branch_taken_0x1a8a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A78u;
        // 0x1a8a7c: 0xae201540  sw          $zero, 0x1540($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a78) {
            ctx->pc = 0x1A8A90u;
            goto label_1a8a90;
        }
    }
    ctx->pc = 0x1A8A80u;
label_1a8a80:
    // 0x1a8a80: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a8a84:
    if (ctx->pc == 0x1A8A84u) {
        ctx->pc = 0x1A8A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A80u;
        // 0x1a8a84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A88u;
        goto label_1a8a88;
    }
    ctx->pc = 0x1A8A80u;
    {
        const bool branch_taken_0x1a8a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A80u;
        // 0x1a8a84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a80) {
            ctx->pc = 0x1A8A8Cu;
            goto label_1a8a8c;
        }
    }
    ctx->pc = 0x1A8A88u;
label_1a8a88:
    // 0x1a8a88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a8a8c:
    // 0x1a8a8c: 0xae221540  sw          $v0, 0x1540($s1)
    ctx->pc = 0x1a8a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5440), GPR_U32(ctx, 2));
label_1a8a90:
    // 0x1a8a90: 0x8e231540  lw          $v1, 0x1540($s1)
    ctx->pc = 0x1a8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5440)));
label_1a8a94:
    // 0x1a8a94: 0x8e221544  lw          $v0, 0x1544($s1)
    ctx->pc = 0x1a8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5444)));
label_1a8a98:
    // 0x1a8a98: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_1a8a9c:
    if (ctx->pc == 0x1A8A9Cu) {
        ctx->pc = 0x1A8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A98u;
        // 0x1a8a9c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AA0u;
        goto label_1a8aa0;
    }
    ctx->pc = 0x1A8A98u;
    {
        const bool branch_taken_0x1a8a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A98u;
        // 0x1a8a9c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a98) {
            ctx->pc = 0x1A8AD4u;
            goto label_1a8ad4;
        }
    }
    ctx->pc = 0x1A8AA0u;
label_1a8aa0:
    // 0x1a8aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8aa4:
    // 0x1a8aa4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1a8aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1a8aa8:
    // 0x1a8aa8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1a8aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1a8aac:
    // 0x1a8aac: 0xae220244  sw          $v0, 0x244($s1)
    ctx->pc = 0x1a8aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 2));
label_1a8ab0:
    // 0x1a8ab0: 0x246307c0  addiu       $v1, $v1, 0x7C0
    ctx->pc = 0x1a8ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1984));
label_1a8ab4:
    // 0x1a8ab4: 0x8e221540  lw          $v0, 0x1540($s1)
    ctx->pc = 0x1a8ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5440)));
label_1a8ab8:
    // 0x1a8ab8: 0xae221544  sw          $v0, 0x1544($s1)
    ctx->pc = 0x1a8ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5444), GPR_U32(ctx, 2));
label_1a8abc:
    // 0x1a8abc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a8ac0:
    // 0x1a8ac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8ac4:
    // 0x1a8ac4: 0xc06ec94  jal         func_1BB250
label_1a8ac8:
    if (ctx->pc == 0x1A8AC8u) {
        ctx->pc = 0x1A8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AC4u;
        // 0x1a8ac8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8ACCu;
        goto label_1a8acc;
    }
    ctx->pc = 0x1A8AC4u;
    SET_GPR_U32(ctx, 31, 0x1A8ACCu);
    ctx->pc = 0x1A8AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AC4u;
    // 0x1a8ac8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1A8AC4u, 0x1A8ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8ACCu;
label_1a8acc:
    // 0x1a8acc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a8ad0:
    if (ctx->pc == 0x1A8AD0u) {
        ctx->pc = 0x1A8AD4u;
        goto label_1a8ad4;
    }
    ctx->pc = 0x1A8ACCu;
    {
        const bool branch_taken_0x1a8acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8acc) {
            ctx->pc = 0x1A8AE0u;
            goto label_1a8ae0;
        }
    }
    ctx->pc = 0x1A8AD4u;
label_1a8ad4:
    // 0x1a8ad4: 0x38a20007  xori        $v0, $a1, 0x7
    ctx->pc = 0x1a8ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
label_1a8ad8:
    // 0x1a8ad8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a8adc:
    if (ctx->pc == 0x1A8ADCu) {
        ctx->pc = 0x1A8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AD8u;
        // 0x1a8adc: 0x26300050  addiu       $s0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AE0u;
        goto label_1a8ae0;
    }
    ctx->pc = 0x1A8AD8u;
    {
        const bool branch_taken_0x1a8ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AD8u;
        // 0x1a8adc: 0x26300050  addiu       $s0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ad8) {
            ctx->pc = 0x1A8AF0u;
            goto label_1a8af0;
        }
    }
    ctx->pc = 0x1A8AE0u;
label_1a8ae0:
    // 0x1a8ae0: 0xc107304  jal         func_41CC10
label_1a8ae4:
    if (ctx->pc == 0x1A8AE4u) {
        ctx->pc = 0x1A8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AE0u;
        // 0x1a8ae4: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AE8u;
        goto label_1a8ae8;
    }
    ctx->pc = 0x1A8AE0u;
    SET_GPR_U32(ctx, 31, 0x1A8AE8u);
    ctx->pc = 0x1A8AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AE0u;
    // 0x1a8ae4: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CC10u, 0x1A8AE0u, 0x1A8AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8AE8u;
label_1a8ae8:
    // 0x1a8ae8: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a8aec:
    if (ctx->pc == 0x1A8AECu) {
        ctx->pc = 0x1A8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AE8u;
        // 0x1a8aec: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AF0u;
        goto label_1a8af0;
    }
    ctx->pc = 0x1A8AE8u;
    {
        const bool branch_taken_0x1a8ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AE8u;
        // 0x1a8aec: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ae8) {
            ctx->pc = 0x1A8B2Cu;
            goto label_1a8b2c;
        }
    }
    ctx->pc = 0x1A8AF0u;
label_1a8af0:
    // 0x1a8af0: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1a8af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_1a8af4:
    // 0x1a8af4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_1a8af8:
    if (ctx->pc == 0x1A8AF8u) {
        ctx->pc = 0x1A8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AF4u;
        // 0x1a8af8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AFCu;
        goto label_1a8afc;
    }
    ctx->pc = 0x1A8AF4u;
    {
        const bool branch_taken_0x1a8af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8af4) {
            ctx->pc = 0x1A8AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8AF4u;
            // 0x1a8af8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8B2Cu;
            goto label_1a8b2c;
        }
    }
    ctx->pc = 0x1A8AFCu;
label_1a8afc:
    // 0x1a8afc: 0xc06ecbc  jal         func_1BB2F0
label_1a8b00:
    if (ctx->pc == 0x1A8B00u) {
        ctx->pc = 0x1A8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AFCu;
        // 0x1a8b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B04u;
        goto label_1a8b04;
    }
    ctx->pc = 0x1A8AFCu;
    SET_GPR_U32(ctx, 31, 0x1A8B04u);
    ctx->pc = 0x1A8B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AFCu;
    // 0x1a8b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB2F0u, 0x1A8AFCu, 0x1A8B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B04u;
label_1a8b04:
    // 0x1a8b04: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1a8b08:
    if (ctx->pc == 0x1A8B08u) {
        ctx->pc = 0x1A8B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B04u;
        // 0x1a8b08: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B0Cu;
        goto label_1a8b0c;
    }
    ctx->pc = 0x1A8B04u;
    {
        const bool branch_taken_0x1a8b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8b04) {
            ctx->pc = 0x1A8B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8B04u;
            // 0x1a8b08: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8B2Cu;
            goto label_1a8b2c;
        }
    }
    ctx->pc = 0x1A8B0Cu;
label_1a8b0c:
    // 0x1a8b0c: 0xc06e4a4  jal         func_1B9290
label_1a8b10:
    if (ctx->pc == 0x1A8B10u) {
        ctx->pc = 0x1A8B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B0Cu;
        // 0x1a8b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B14u;
        goto label_1a8b14;
    }
    ctx->pc = 0x1A8B0Cu;
    SET_GPR_U32(ctx, 31, 0x1A8B14u);
    ctx->pc = 0x1A8B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B0Cu;
    // 0x1a8b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1A8B0Cu, 0x1A8B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B14u;
label_1a8b14:
    // 0x1a8b14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a8b18:
    // 0x1a8b18: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1a8b18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1a8b1c:
    // 0x1a8b1c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1a8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1a8b20:
    // 0x1a8b20: 0x60f809  jalr        $v1
label_1a8b24:
    if (ctx->pc == 0x1A8B24u) {
        ctx->pc = 0x1A8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B20u;
        // 0x1a8b24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B28u;
        goto label_1a8b28;
    }
    ctx->pc = 0x1A8B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A8B28u);
        ctx->pc = 0x1A8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B20u;
        // 0x1a8b24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8B20u, 0x1A8B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8B28u;
label_1a8b28:
    // 0x1a8b28: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a8b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a8b2c:
    // 0x1a8b2c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a8b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a8b30:
    // 0x1a8b30: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a8b30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8b34:
    // 0x1a8b34: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a8b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a8b38:
    // 0x1a8b38: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a8b38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8b3c:
    // 0x1a8b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8b40:
    // 0x1a8b40: 0x3e00008  jr          $ra
label_1a8b44:
    if (ctx->pc == 0x1A8B44u) {
        ctx->pc = 0x1A8B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B40u;
        // 0x1a8b44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B48u;
        goto label_fallthrough_0x1a8b40;
    }
    ctx->pc = 0x1A8B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B40u;
        // 0x1a8b44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a8b40:
    ctx->pc = 0x1A8B48u;
}
