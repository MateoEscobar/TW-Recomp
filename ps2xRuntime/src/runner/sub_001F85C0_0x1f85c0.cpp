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

// Function: sub_001F85C0
// Address: 0x1f85c0 - 0x1f8b30
void sub_001F85C0_0x1f85c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F85C0_0x1f85c0");
#endif

    switch (ctx->pc) {
        case 0x1f85c0u: goto label_1f85c0;
        case 0x1f85c4u: goto label_1f85c4;
        case 0x1f85c8u: goto label_1f85c8;
        case 0x1f85ccu: goto label_1f85cc;
        case 0x1f85d0u: goto label_1f85d0;
        case 0x1f85d4u: goto label_1f85d4;
        case 0x1f85d8u: goto label_1f85d8;
        case 0x1f85dcu: goto label_1f85dc;
        case 0x1f85e0u: goto label_1f85e0;
        case 0x1f85e4u: goto label_1f85e4;
        case 0x1f85e8u: goto label_1f85e8;
        case 0x1f85ecu: goto label_1f85ec;
        case 0x1f85f0u: goto label_1f85f0;
        case 0x1f85f4u: goto label_1f85f4;
        case 0x1f85f8u: goto label_1f85f8;
        case 0x1f85fcu: goto label_1f85fc;
        case 0x1f8600u: goto label_1f8600;
        case 0x1f8604u: goto label_1f8604;
        case 0x1f8608u: goto label_1f8608;
        case 0x1f860cu: goto label_1f860c;
        case 0x1f8610u: goto label_1f8610;
        case 0x1f8614u: goto label_1f8614;
        case 0x1f8618u: goto label_1f8618;
        case 0x1f861cu: goto label_1f861c;
        case 0x1f8620u: goto label_1f8620;
        case 0x1f8624u: goto label_1f8624;
        case 0x1f8628u: goto label_1f8628;
        case 0x1f862cu: goto label_1f862c;
        case 0x1f8630u: goto label_1f8630;
        case 0x1f8634u: goto label_1f8634;
        case 0x1f8638u: goto label_1f8638;
        case 0x1f863cu: goto label_1f863c;
        case 0x1f8640u: goto label_1f8640;
        case 0x1f8644u: goto label_1f8644;
        case 0x1f8648u: goto label_1f8648;
        case 0x1f864cu: goto label_1f864c;
        case 0x1f8650u: goto label_1f8650;
        case 0x1f8654u: goto label_1f8654;
        case 0x1f8658u: goto label_1f8658;
        case 0x1f865cu: goto label_1f865c;
        case 0x1f8660u: goto label_1f8660;
        case 0x1f8664u: goto label_1f8664;
        case 0x1f8668u: goto label_1f8668;
        case 0x1f866cu: goto label_1f866c;
        case 0x1f8670u: goto label_1f8670;
        case 0x1f8674u: goto label_1f8674;
        case 0x1f8678u: goto label_1f8678;
        case 0x1f867cu: goto label_1f867c;
        case 0x1f8680u: goto label_1f8680;
        case 0x1f8684u: goto label_1f8684;
        case 0x1f8688u: goto label_1f8688;
        case 0x1f868cu: goto label_1f868c;
        case 0x1f8690u: goto label_1f8690;
        case 0x1f8694u: goto label_1f8694;
        case 0x1f8698u: goto label_1f8698;
        case 0x1f869cu: goto label_1f869c;
        case 0x1f86a0u: goto label_1f86a0;
        case 0x1f86a4u: goto label_1f86a4;
        case 0x1f86a8u: goto label_1f86a8;
        case 0x1f86acu: goto label_1f86ac;
        case 0x1f86b0u: goto label_1f86b0;
        case 0x1f86b4u: goto label_1f86b4;
        case 0x1f86b8u: goto label_1f86b8;
        case 0x1f86bcu: goto label_1f86bc;
        case 0x1f86c0u: goto label_1f86c0;
        case 0x1f86c4u: goto label_1f86c4;
        case 0x1f86c8u: goto label_1f86c8;
        case 0x1f86ccu: goto label_1f86cc;
        case 0x1f86d0u: goto label_1f86d0;
        case 0x1f86d4u: goto label_1f86d4;
        case 0x1f86d8u: goto label_1f86d8;
        case 0x1f86dcu: goto label_1f86dc;
        case 0x1f86e0u: goto label_1f86e0;
        case 0x1f86e4u: goto label_1f86e4;
        case 0x1f86e8u: goto label_1f86e8;
        case 0x1f86ecu: goto label_1f86ec;
        case 0x1f86f0u: goto label_1f86f0;
        case 0x1f86f4u: goto label_1f86f4;
        case 0x1f86f8u: goto label_1f86f8;
        case 0x1f86fcu: goto label_1f86fc;
        case 0x1f8700u: goto label_1f8700;
        case 0x1f8704u: goto label_1f8704;
        case 0x1f8708u: goto label_1f8708;
        case 0x1f870cu: goto label_1f870c;
        case 0x1f8710u: goto label_1f8710;
        case 0x1f8714u: goto label_1f8714;
        case 0x1f8718u: goto label_1f8718;
        case 0x1f871cu: goto label_1f871c;
        case 0x1f8720u: goto label_1f8720;
        case 0x1f8724u: goto label_1f8724;
        case 0x1f8728u: goto label_1f8728;
        case 0x1f872cu: goto label_1f872c;
        case 0x1f8730u: goto label_1f8730;
        case 0x1f8734u: goto label_1f8734;
        case 0x1f8738u: goto label_1f8738;
        case 0x1f873cu: goto label_1f873c;
        case 0x1f8740u: goto label_1f8740;
        case 0x1f8744u: goto label_1f8744;
        case 0x1f8748u: goto label_1f8748;
        case 0x1f874cu: goto label_1f874c;
        case 0x1f8750u: goto label_1f8750;
        case 0x1f8754u: goto label_1f8754;
        case 0x1f8758u: goto label_1f8758;
        case 0x1f875cu: goto label_1f875c;
        case 0x1f8760u: goto label_1f8760;
        case 0x1f8764u: goto label_1f8764;
        case 0x1f8768u: goto label_1f8768;
        case 0x1f876cu: goto label_1f876c;
        case 0x1f8770u: goto label_1f8770;
        case 0x1f8774u: goto label_1f8774;
        case 0x1f8778u: goto label_1f8778;
        case 0x1f877cu: goto label_1f877c;
        case 0x1f8780u: goto label_1f8780;
        case 0x1f8784u: goto label_1f8784;
        case 0x1f8788u: goto label_1f8788;
        case 0x1f878cu: goto label_1f878c;
        case 0x1f8790u: goto label_1f8790;
        case 0x1f8794u: goto label_1f8794;
        case 0x1f8798u: goto label_1f8798;
        case 0x1f879cu: goto label_1f879c;
        case 0x1f87a0u: goto label_1f87a0;
        case 0x1f87a4u: goto label_1f87a4;
        case 0x1f87a8u: goto label_1f87a8;
        case 0x1f87acu: goto label_1f87ac;
        case 0x1f87b0u: goto label_1f87b0;
        case 0x1f87b4u: goto label_1f87b4;
        case 0x1f87b8u: goto label_1f87b8;
        case 0x1f87bcu: goto label_1f87bc;
        case 0x1f87c0u: goto label_1f87c0;
        case 0x1f87c4u: goto label_1f87c4;
        case 0x1f87c8u: goto label_1f87c8;
        case 0x1f87ccu: goto label_1f87cc;
        case 0x1f87d0u: goto label_1f87d0;
        case 0x1f87d4u: goto label_1f87d4;
        case 0x1f87d8u: goto label_1f87d8;
        case 0x1f87dcu: goto label_1f87dc;
        case 0x1f87e0u: goto label_1f87e0;
        case 0x1f87e4u: goto label_1f87e4;
        case 0x1f87e8u: goto label_1f87e8;
        case 0x1f87ecu: goto label_1f87ec;
        case 0x1f87f0u: goto label_1f87f0;
        case 0x1f87f4u: goto label_1f87f4;
        case 0x1f87f8u: goto label_1f87f8;
        case 0x1f87fcu: goto label_1f87fc;
        case 0x1f8800u: goto label_1f8800;
        case 0x1f8804u: goto label_1f8804;
        case 0x1f8808u: goto label_1f8808;
        case 0x1f880cu: goto label_1f880c;
        case 0x1f8810u: goto label_1f8810;
        case 0x1f8814u: goto label_1f8814;
        case 0x1f8818u: goto label_1f8818;
        case 0x1f881cu: goto label_1f881c;
        case 0x1f8820u: goto label_1f8820;
        case 0x1f8824u: goto label_1f8824;
        case 0x1f8828u: goto label_1f8828;
        case 0x1f882cu: goto label_1f882c;
        case 0x1f8830u: goto label_1f8830;
        case 0x1f8834u: goto label_1f8834;
        case 0x1f8838u: goto label_1f8838;
        case 0x1f883cu: goto label_1f883c;
        case 0x1f8840u: goto label_1f8840;
        case 0x1f8844u: goto label_1f8844;
        case 0x1f8848u: goto label_1f8848;
        case 0x1f884cu: goto label_1f884c;
        case 0x1f8850u: goto label_1f8850;
        case 0x1f8854u: goto label_1f8854;
        case 0x1f8858u: goto label_1f8858;
        case 0x1f885cu: goto label_1f885c;
        case 0x1f8860u: goto label_1f8860;
        case 0x1f8864u: goto label_1f8864;
        case 0x1f8868u: goto label_1f8868;
        case 0x1f886cu: goto label_1f886c;
        case 0x1f8870u: goto label_1f8870;
        case 0x1f8874u: goto label_1f8874;
        case 0x1f8878u: goto label_1f8878;
        case 0x1f887cu: goto label_1f887c;
        case 0x1f8880u: goto label_1f8880;
        case 0x1f8884u: goto label_1f8884;
        case 0x1f8888u: goto label_1f8888;
        case 0x1f888cu: goto label_1f888c;
        case 0x1f8890u: goto label_1f8890;
        case 0x1f8894u: goto label_1f8894;
        case 0x1f8898u: goto label_1f8898;
        case 0x1f889cu: goto label_1f889c;
        case 0x1f88a0u: goto label_1f88a0;
        case 0x1f88a4u: goto label_1f88a4;
        case 0x1f88a8u: goto label_1f88a8;
        case 0x1f88acu: goto label_1f88ac;
        case 0x1f88b0u: goto label_1f88b0;
        case 0x1f88b4u: goto label_1f88b4;
        case 0x1f88b8u: goto label_1f88b8;
        case 0x1f88bcu: goto label_1f88bc;
        case 0x1f88c0u: goto label_1f88c0;
        case 0x1f88c4u: goto label_1f88c4;
        case 0x1f88c8u: goto label_1f88c8;
        case 0x1f88ccu: goto label_1f88cc;
        case 0x1f88d0u: goto label_1f88d0;
        case 0x1f88d4u: goto label_1f88d4;
        case 0x1f88d8u: goto label_1f88d8;
        case 0x1f88dcu: goto label_1f88dc;
        case 0x1f88e0u: goto label_1f88e0;
        case 0x1f88e4u: goto label_1f88e4;
        case 0x1f88e8u: goto label_1f88e8;
        case 0x1f88ecu: goto label_1f88ec;
        case 0x1f88f0u: goto label_1f88f0;
        case 0x1f88f4u: goto label_1f88f4;
        case 0x1f88f8u: goto label_1f88f8;
        case 0x1f88fcu: goto label_1f88fc;
        case 0x1f8900u: goto label_1f8900;
        case 0x1f8904u: goto label_1f8904;
        case 0x1f8908u: goto label_1f8908;
        case 0x1f890cu: goto label_1f890c;
        case 0x1f8910u: goto label_1f8910;
        case 0x1f8914u: goto label_1f8914;
        case 0x1f8918u: goto label_1f8918;
        case 0x1f891cu: goto label_1f891c;
        case 0x1f8920u: goto label_1f8920;
        case 0x1f8924u: goto label_1f8924;
        case 0x1f8928u: goto label_1f8928;
        case 0x1f892cu: goto label_1f892c;
        case 0x1f8930u: goto label_1f8930;
        case 0x1f8934u: goto label_1f8934;
        case 0x1f8938u: goto label_1f8938;
        case 0x1f893cu: goto label_1f893c;
        case 0x1f8940u: goto label_1f8940;
        case 0x1f8944u: goto label_1f8944;
        case 0x1f8948u: goto label_1f8948;
        case 0x1f894cu: goto label_1f894c;
        case 0x1f8950u: goto label_1f8950;
        case 0x1f8954u: goto label_1f8954;
        case 0x1f8958u: goto label_1f8958;
        case 0x1f895cu: goto label_1f895c;
        case 0x1f8960u: goto label_1f8960;
        case 0x1f8964u: goto label_1f8964;
        case 0x1f8968u: goto label_1f8968;
        case 0x1f896cu: goto label_1f896c;
        case 0x1f8970u: goto label_1f8970;
        case 0x1f8974u: goto label_1f8974;
        case 0x1f8978u: goto label_1f8978;
        case 0x1f897cu: goto label_1f897c;
        case 0x1f8980u: goto label_1f8980;
        case 0x1f8984u: goto label_1f8984;
        case 0x1f8988u: goto label_1f8988;
        case 0x1f898cu: goto label_1f898c;
        case 0x1f8990u: goto label_1f8990;
        case 0x1f8994u: goto label_1f8994;
        case 0x1f8998u: goto label_1f8998;
        case 0x1f899cu: goto label_1f899c;
        case 0x1f89a0u: goto label_1f89a0;
        case 0x1f89a4u: goto label_1f89a4;
        case 0x1f89a8u: goto label_1f89a8;
        case 0x1f89acu: goto label_1f89ac;
        case 0x1f89b0u: goto label_1f89b0;
        case 0x1f89b4u: goto label_1f89b4;
        case 0x1f89b8u: goto label_1f89b8;
        case 0x1f89bcu: goto label_1f89bc;
        case 0x1f89c0u: goto label_1f89c0;
        case 0x1f89c4u: goto label_1f89c4;
        case 0x1f89c8u: goto label_1f89c8;
        case 0x1f89ccu: goto label_1f89cc;
        case 0x1f89d0u: goto label_1f89d0;
        case 0x1f89d4u: goto label_1f89d4;
        case 0x1f89d8u: goto label_1f89d8;
        case 0x1f89dcu: goto label_1f89dc;
        case 0x1f89e0u: goto label_1f89e0;
        case 0x1f89e4u: goto label_1f89e4;
        case 0x1f89e8u: goto label_1f89e8;
        case 0x1f89ecu: goto label_1f89ec;
        case 0x1f89f0u: goto label_1f89f0;
        case 0x1f89f4u: goto label_1f89f4;
        case 0x1f89f8u: goto label_1f89f8;
        case 0x1f89fcu: goto label_1f89fc;
        case 0x1f8a00u: goto label_1f8a00;
        case 0x1f8a04u: goto label_1f8a04;
        case 0x1f8a08u: goto label_1f8a08;
        case 0x1f8a0cu: goto label_1f8a0c;
        case 0x1f8a10u: goto label_1f8a10;
        case 0x1f8a14u: goto label_1f8a14;
        case 0x1f8a18u: goto label_1f8a18;
        case 0x1f8a1cu: goto label_1f8a1c;
        case 0x1f8a20u: goto label_1f8a20;
        case 0x1f8a24u: goto label_1f8a24;
        case 0x1f8a28u: goto label_1f8a28;
        case 0x1f8a2cu: goto label_1f8a2c;
        case 0x1f8a30u: goto label_1f8a30;
        case 0x1f8a34u: goto label_1f8a34;
        case 0x1f8a38u: goto label_1f8a38;
        case 0x1f8a3cu: goto label_1f8a3c;
        case 0x1f8a40u: goto label_1f8a40;
        case 0x1f8a44u: goto label_1f8a44;
        case 0x1f8a48u: goto label_1f8a48;
        case 0x1f8a4cu: goto label_1f8a4c;
        case 0x1f8a50u: goto label_1f8a50;
        case 0x1f8a54u: goto label_1f8a54;
        case 0x1f8a58u: goto label_1f8a58;
        case 0x1f8a5cu: goto label_1f8a5c;
        case 0x1f8a60u: goto label_1f8a60;
        case 0x1f8a64u: goto label_1f8a64;
        case 0x1f8a68u: goto label_1f8a68;
        case 0x1f8a6cu: goto label_1f8a6c;
        case 0x1f8a70u: goto label_1f8a70;
        case 0x1f8a74u: goto label_1f8a74;
        case 0x1f8a78u: goto label_1f8a78;
        case 0x1f8a7cu: goto label_1f8a7c;
        case 0x1f8a80u: goto label_1f8a80;
        case 0x1f8a84u: goto label_1f8a84;
        case 0x1f8a88u: goto label_1f8a88;
        case 0x1f8a8cu: goto label_1f8a8c;
        case 0x1f8a90u: goto label_1f8a90;
        case 0x1f8a94u: goto label_1f8a94;
        case 0x1f8a98u: goto label_1f8a98;
        case 0x1f8a9cu: goto label_1f8a9c;
        case 0x1f8aa0u: goto label_1f8aa0;
        case 0x1f8aa4u: goto label_1f8aa4;
        case 0x1f8aa8u: goto label_1f8aa8;
        case 0x1f8aacu: goto label_1f8aac;
        case 0x1f8ab0u: goto label_1f8ab0;
        case 0x1f8ab4u: goto label_1f8ab4;
        case 0x1f8ab8u: goto label_1f8ab8;
        case 0x1f8abcu: goto label_1f8abc;
        case 0x1f8ac0u: goto label_1f8ac0;
        case 0x1f8ac4u: goto label_1f8ac4;
        case 0x1f8ac8u: goto label_1f8ac8;
        case 0x1f8accu: goto label_1f8acc;
        case 0x1f8ad0u: goto label_1f8ad0;
        case 0x1f8ad4u: goto label_1f8ad4;
        case 0x1f8ad8u: goto label_1f8ad8;
        case 0x1f8adcu: goto label_1f8adc;
        case 0x1f8ae0u: goto label_1f8ae0;
        case 0x1f8ae4u: goto label_1f8ae4;
        case 0x1f8ae8u: goto label_1f8ae8;
        case 0x1f8aecu: goto label_1f8aec;
        case 0x1f8af0u: goto label_1f8af0;
        case 0x1f8af4u: goto label_1f8af4;
        case 0x1f8af8u: goto label_1f8af8;
        case 0x1f8afcu: goto label_1f8afc;
        case 0x1f8b00u: goto label_1f8b00;
        case 0x1f8b04u: goto label_1f8b04;
        case 0x1f8b08u: goto label_1f8b08;
        case 0x1f8b0cu: goto label_1f8b0c;
        case 0x1f8b10u: goto label_1f8b10;
        case 0x1f8b14u: goto label_1f8b14;
        case 0x1f8b18u: goto label_1f8b18;
        case 0x1f8b1cu: goto label_1f8b1c;
        case 0x1f8b20u: goto label_1f8b20;
        case 0x1f8b24u: goto label_1f8b24;
        case 0x1f8b28u: goto label_1f8b28;
        case 0x1f8b2cu: goto label_1f8b2c;
        default: break;
    }

    ctx->pc = 0x1f85c0u;

label_1f85c0:
    // 0x1f85c0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1f85c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1f85c4:
    // 0x1f85c4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1f85c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_1f85c8:
    // 0x1f85c8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1f85c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_1f85cc:
    // 0x1f85cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f85ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f85d0:
    // 0x1f85d0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1f85d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_1f85d4:
    // 0x1f85d4: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1f85d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_1f85d8:
    // 0x1f85d8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1f85d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_1f85dc:
    // 0x1f85dc: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1f85dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_1f85e0:
    // 0x1f85e0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1f85e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1f85e4:
    // 0x1f85e4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1f85e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1f85e8:
    // 0x1f85e8: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x1f85e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_1f85ec:
    // 0x1f85ec: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f85ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1f85f0:
    // 0x1f85f0: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x1f85f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1f85f4:
    // 0x1f85f4: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1f85f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1f85f8:
    // 0x1f85f8: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1f85f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1f85fc:
    // 0x1f85fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f8600:
    // 0x1f8600: 0x5440013c  bnel        $v0, $zero, . + 4 + (0x13C << 2)
label_1f8604:
    if (ctx->pc == 0x1F8604u) {
        ctx->pc = 0x1F8604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8600u;
        // 0x1f8604: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8608u;
        goto label_1f8608;
    }
    ctx->pc = 0x1F8600u;
    {
        const bool branch_taken_0x1f8600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8600) {
            ctx->pc = 0x1F8604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8600u;
            // 0x1f8604: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8AF4u;
            goto label_1f8af4;
        }
    }
    ctx->pc = 0x1F8608u;
label_1f8608:
    // 0x1f8608: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f8608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f860c:
    // 0x1f860c: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1f860cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1f8610:
    // 0x1f8610: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f8610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8614:
    // 0x1f8614: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1f8614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1f8618:
    // 0x1f8618: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f861c:
    if (ctx->pc == 0x1F861Cu) {
        ctx->pc = 0x1F861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8618u;
        // 0x1f861c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8620u;
        goto label_1f8620;
    }
    ctx->pc = 0x1F8618u;
    {
        const bool branch_taken_0x1f8618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8618u;
        // 0x1f861c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8618) {
            ctx->pc = 0x1F8648u;
            goto label_1f8648;
        }
    }
    ctx->pc = 0x1F8620u;
label_1f8620:
    // 0x1f8620: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1f8624:
    if (ctx->pc == 0x1F8624u) {
        ctx->pc = 0x1F8624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8620u;
        // 0x1f8624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8628u;
        goto label_1f8628;
    }
    ctx->pc = 0x1F8620u;
    {
        const bool branch_taken_0x1f8620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8620u;
        // 0x1f8624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8620) {
            ctx->pc = 0x1F8680u;
            goto label_1f8680;
        }
    }
    ctx->pc = 0x1F8628u;
label_1f8628:
    // 0x1f8628: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1f8628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1f862c:
    // 0x1f862c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f862cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1f8630:
    // 0x1f8630: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f8630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f8634:
    // 0x1f8634: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1f8634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_1f8638:
    // 0x1f8638: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1f8638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1f863c:
    // 0x1f863c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f863cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8640:
    // 0x1f8640: 0x1000000b  b           . + 4 + (0xB << 2)
label_1f8644:
    if (ctx->pc == 0x1F8644u) {
        ctx->pc = 0x1F8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8640u;
        // 0x1f8644: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8648u;
        goto label_1f8648;
    }
    ctx->pc = 0x1F8640u;
    {
        const bool branch_taken_0x1f8640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8640u;
        // 0x1f8644: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8640) {
            ctx->pc = 0x1F8670u;
            goto label_1f8670;
        }
    }
    ctx->pc = 0x1F8648u;
label_1f8648:
    // 0x1f8648: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1f8648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1f864c:
    // 0x1f864c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1f8650:
    if (ctx->pc == 0x1F8650u) {
        ctx->pc = 0x1F8650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F864Cu;
        // 0x1f8650: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8654u;
        goto label_1f8654;
    }
    ctx->pc = 0x1F864Cu;
    {
        const bool branch_taken_0x1f864c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f864c) {
            ctx->pc = 0x1F8650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F864Cu;
            // 0x1f8650: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8654u;
            goto label_1f8654;
        }
    }
    ctx->pc = 0x1F8654u;
label_1f8654:
    // 0x1f8654: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1f8654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_1f8658:
    // 0x1f8658: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1f8658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1f865c:
    // 0x1f865c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f865cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f8660:
    // 0x1f8660: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f8660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f8664:
    // 0x1f8664: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1f8664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1f8668:
    // 0x1f8668: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f8668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1f866c:
    // 0x1f866c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f866cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8670:
    // 0x1f8670: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f8670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f8674:
    // 0x1f8674: 0xe461f46c  swc1        $f1, -0xB94($v1)
    ctx->pc = 0x1f8674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964332), bits); }
label_1f8678:
    // 0x1f8678: 0xe440f470  swc1        $f0, -0xB90($v0)
    ctx->pc = 0x1f8678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964336), bits); }
label_1f867c:
    // 0x1f867c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f867cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8680:
    // 0x1f8680: 0xc07e032  jal         func_1F80C8
label_1f8684:
    if (ctx->pc == 0x1F8684u) {
        ctx->pc = 0x1F8684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8680u;
        // 0x1f8684: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8688u;
        goto label_1f8688;
    }
    ctx->pc = 0x1F8680u;
    SET_GPR_U32(ctx, 31, 0x1F8688u);
    ctx->pc = 0x1F8684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8680u;
    // 0x1f8684: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F80C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F80C8u, 0x1F8680u, 0x1F8688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8688u;
label_1f8688:
    // 0x1f8688: 0x8eaa27e4  lw          $t2, 0x27E4($s5)
    ctx->pc = 0x1f8688u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_1f868c:
    // 0x1f868c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1f868cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1f8690:
    // 0x1f8690: 0x24547910  addiu       $s4, $v0, 0x7910
    ctx->pc = 0x1f8690u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30992));
label_1f8694:
    // 0x1f8694: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f8694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f8698:
    // 0x1f8698: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1f8698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1f869c:
    // 0x1f869c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f869cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f86a0:
    // 0x1f86a0: 0x24a57970  addiu       $a1, $a1, 0x7970
    ctx->pc = 0x1f86a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31088));
label_1f86a4:
    // 0x1f86a4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1f86a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f86a8:
    // 0x1f86a8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f86a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f86ac:
    // 0x1f86ac: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1f86acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f86b0:
    // 0x1f86b0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f86b4:
    // 0x1f86b4: 0x240900c4  addiu       $t1, $zero, 0xC4
    ctx->pc = 0x1f86b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_1f86b8:
    // 0x1f86b8: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1f86b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1f86bc:
    // 0x1f86bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f86bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f86c0:
    // 0x1f86c0: 0x40f809  jalr        $v0
label_1f86c4:
    if (ctx->pc == 0x1F86C4u) {
        ctx->pc = 0x1F86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86C0u;
        // 0x1f86c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F86C8u;
        goto label_1f86c8;
    }
    ctx->pc = 0x1F86C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F86C8u);
        ctx->pc = 0x1F86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86C0u;
        // 0x1f86c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F86C0u, 0x1F86C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F86C8u;
label_1f86c8:
    // 0x1f86c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f86c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f86cc:
    // 0x1f86cc: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_1f86d0:
    if (ctx->pc == 0x1F86D0u) {
        ctx->pc = 0x1F86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86CCu;
        // 0x1f86d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F86D4u;
        goto label_1f86d4;
    }
    ctx->pc = 0x1F86CCu;
    {
        const bool branch_taken_0x1f86cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86CCu;
        // 0x1f86d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86cc) {
            ctx->pc = 0x1F86E0u;
            goto label_1f86e0;
        }
    }
    ctx->pc = 0x1F86D4u;
label_1f86d4:
    // 0x1f86d4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1f86d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_1f86d8:
    // 0x1f86d8: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1f86d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_1f86dc:
    // 0x1f86dc: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1f86dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_1f86e0:
    // 0x1f86e0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1f86e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1f86e4:
    // 0x1f86e4: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x1f86e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_1f86e8:
    // 0x1f86e8: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1f86e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1f86ec:
    // 0x1f86ec: 0xae07008c  sw          $a3, 0x8C($s0)
    ctx->pc = 0x1f86ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 7));
label_1f86f0:
    // 0x1f86f0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1f86f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f86f4:
    // 0x1f86f4: 0x248a7998  addiu       $t2, $a0, 0x7998
    ctx->pc = 0x1f86f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 31128));
label_1f86f8:
    // 0x1f86f8: 0x69420007  ldl         $v0, 0x7($t2)
    ctx->pc = 0x1f86f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1f86fc:
    // 0x1f86fc: 0x6d420000  ldr         $v0, 0x0($t2)
    ctx->pc = 0x1f86fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1f8700:
    // 0x1f8700: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x1f8700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8704:
    // 0x1f8704: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x1f8704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f8708:
    // 0x1f8708: 0xac67ee84  sw          $a3, -0x117C($v1)
    ctx->pc = 0x1f8708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294962820), GPR_U32(ctx, 7));
label_1f870c:
    // 0x1f870c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f8710:
    // 0x1f8710: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f8710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f8714:
    // 0x1f8714: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f8714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1f8718:
    // 0x1f8718: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f8718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f871c:
    // 0x1f871c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f871cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f8720:
    // 0x1f8720: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f8720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f8724:
    // 0x1f8724: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f8724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1f8728:
    // 0x1f8728: 0x60f809  jalr        $v1
label_1f872c:
    if (ctx->pc == 0x1F872Cu) {
        ctx->pc = 0x1F872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8728u;
        // 0x1f872c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8730u;
        goto label_1f8730;
    }
    ctx->pc = 0x1F8728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F8730u);
        ctx->pc = 0x1F872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8728u;
        // 0x1f872c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8728u, 0x1F8730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8730u;
label_1f8730:
    // 0x1f8730: 0xc07f728  jal         func_1FDCA0
label_1f8734:
    if (ctx->pc == 0x1F8734u) {
        ctx->pc = 0x1F8738u;
        goto label_1f8738;
    }
    ctx->pc = 0x1F8730u;
    SET_GPR_U32(ctx, 31, 0x1F8738u);
    ctx->pc = 0x1FDCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCA0u, 0x1F8730u, 0x1F8738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8738u;
label_1f8738:
    // 0x1f8738: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1f8738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1f873c:
    // 0x1f873c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x1f873cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f8740:
    // 0x1f8740: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x1f8740u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1f8744:
    // 0x1f8744: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f8744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f8748:
    // 0x1f8748: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1f8748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1f874c:
    // 0x1f874c: 0x24a579a0  addiu       $a1, $a1, 0x79A0
    ctx->pc = 0x1f874cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31136));
label_1f8750:
    // 0x1f8750: 0xe636000c  swc1        $f22, 0xC($s1)
    ctx->pc = 0x1f8750u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1f8754:
    // 0x1f8754: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f8754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f8758:
    // 0x1f8758: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x1f8758u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_1f875c:
    // 0x1f875c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f875cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f8760:
    // 0x1f8760: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1f8760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f8764:
    // 0x1f8764: 0x240900ce  addiu       $t1, $zero, 0xCE
    ctx->pc = 0x1f8764u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
label_1f8768:
    // 0x1f8768: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f8768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f876c:
    // 0x1f876c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f876cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8770:
    // 0x1f8770: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f8770u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8774:
    // 0x1f8774: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f8774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f8778:
    // 0x1f8778: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f8778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f877c:
    // 0x1f877c: 0x40f809  jalr        $v0
label_1f8780:
    if (ctx->pc == 0x1F8780u) {
        ctx->pc = 0x1F8780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F877Cu;
        // 0x1f8780: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8784u;
        goto label_1f8784;
    }
    ctx->pc = 0x1F877Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F8784u);
        ctx->pc = 0x1F8780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F877Cu;
        // 0x1f8780: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F877Cu, 0x1F8784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8784u;
label_1f8784:
    // 0x1f8784: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f8788:
    if (ctx->pc == 0x1F8788u) {
        ctx->pc = 0x1F878Cu;
        goto label_1f878c;
    }
    ctx->pc = 0x1F8784u;
    {
        const bool branch_taken_0x1f8784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8784) {
            ctx->pc = 0x1F8794u;
            goto label_1f8794;
        }
    }
    ctx->pc = 0x1F878Cu;
label_1f878c:
    // 0x1f878c: 0xc0733e2  jal         func_1CCF88
label_1f8790:
    if (ctx->pc == 0x1F8790u) {
        ctx->pc = 0x1F8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F878Cu;
        // 0x1f8790: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8794u;
        goto label_1f8794;
    }
    ctx->pc = 0x1F878Cu;
    SET_GPR_U32(ctx, 31, 0x1F8794u);
    ctx->pc = 0x1F8790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F878Cu;
    // 0x1f8790: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1F878Cu, 0x1F8794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8794u;
label_1f8794:
    // 0x1f8794: 0x3c01400e  lui         $at, 0x400E
    ctx->pc = 0x1f8794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16398 << 16));
label_1f8798:
    // 0x1f8798: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1f8798u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1f879c:
    // 0x1f879c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f879cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f87a0:
    // 0x1f87a0: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x1f87a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f87a4:
    // 0x1f87a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f87a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f87a8:
    // 0x1f87a8: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x1f87a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
label_1f87ac:
    // 0x1f87ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f87acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f87b0:
    // 0x1f87b0: 0xc05e602  jal         func_179808
label_1f87b4:
    if (ctx->pc == 0x1F87B4u) {
        ctx->pc = 0x1F87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87B0u;
        // 0x1f87b4: 0x3c160064  lui         $s6, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F87B8u;
        goto label_1f87b8;
    }
    ctx->pc = 0x1F87B0u;
    SET_GPR_U32(ctx, 31, 0x1F87B8u);
    ctx->pc = 0x1F87B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F87B0u;
    // 0x1f87b4: 0x3c160064  lui         $s6, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1F87B0u, 0x1F87B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F87B8u;
label_1f87b8:
    // 0x1f87b8: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x1f87b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1f87bc:
    // 0x1f87bc: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1f87bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f87c0:
    // 0x1f87c0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1f87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1f87c4:
    // 0x1f87c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f87c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f87c8:
    // 0x1f87c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f87c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f87cc:
    // 0x1f87cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f87ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f87d0:
    // 0x1f87d0: 0x8c53d310  lw          $s3, -0x2CF0($v0)
    ctx->pc = 0x1f87d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1f87d4:
    // 0x1f87d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f87d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f87d8:
    // 0x1f87d8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1f87d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1f87dc:
    // 0x1f87dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f87dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f87e0:
    // 0x1f87e0: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x1f87e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_1f87e4:
    // 0x1f87e4: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1f87e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f87e8:
    // 0x1f87e8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1f87e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1f87ec:
    // 0x1f87ec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f87ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f87f0:
    // 0x1f87f0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1f87f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1f87f4:
    // 0x1f87f4: 0x40f809  jalr        $v0
label_1f87f8:
    if (ctx->pc == 0x1F87F8u) {
        ctx->pc = 0x1F87F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87F4u;
        // 0x1f87f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F87FCu;
        goto label_1f87fc;
    }
    ctx->pc = 0x1F87F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F87FCu);
        ctx->pc = 0x1F87F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87F4u;
        // 0x1f87f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F87F4u, 0x1F87FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F87FCu;
label_1f87fc:
    // 0x1f87fc: 0xc067b9c  jal         func_19EE70
label_1f8800:
    if (ctx->pc == 0x1F8800u) {
        ctx->pc = 0x1F8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87FCu;
        // 0x1f8800: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8804u;
        goto label_1f8804;
    }
    ctx->pc = 0x1F87FCu;
    SET_GPR_U32(ctx, 31, 0x1F8804u);
    ctx->pc = 0x1F8800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F87FCu;
    // 0x1f8800: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F87FCu, 0x1F8804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8804u;
label_1f8804:
    // 0x1f8804: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x1f8804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1f8808:
    // 0x1f8808: 0xc073478  jal         func_1CD1E0
label_1f880c:
    if (ctx->pc == 0x1F880Cu) {
        ctx->pc = 0x1F880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8808u;
        // 0x1f880c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8810u;
        goto label_1f8810;
    }
    ctx->pc = 0x1F8808u;
    SET_GPR_U32(ctx, 31, 0x1F8810u);
    ctx->pc = 0x1F880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8808u;
    // 0x1f880c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1F8808u, 0x1F8810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8810u;
label_1f8810:
    // 0x1f8810: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f8810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f8814:
    // 0x1f8814: 0xc05e602  jal         func_179808
label_1f8818:
    if (ctx->pc == 0x1F8818u) {
        ctx->pc = 0x1F8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8814u;
        // 0x1f8818: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F881Cu;
        goto label_1f881c;
    }
    ctx->pc = 0x1F8814u;
    SET_GPR_U32(ctx, 31, 0x1F881Cu);
    ctx->pc = 0x1F8818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8814u;
    // 0x1f8818: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1F8814u, 0x1F881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F881Cu;
label_1f881c:
    // 0x1f881c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1f881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f8820:
    // 0x1f8820: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1f8820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8824:
    // 0x1f8824: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f8824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1f8828:
    // 0x1f8828: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f8828u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f882c:
    // 0x1f882c: 0xc07f734  jal         func_1FDCD0
label_1f8830:
    if (ctx->pc == 0x1F8830u) {
        ctx->pc = 0x1F8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F882Cu;
        // 0x1f8830: 0xe6c1ee88  swc1        $f1, -0x1178($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4294962824), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8834u;
        goto label_1f8834;
    }
    ctx->pc = 0x1F882Cu;
    SET_GPR_U32(ctx, 31, 0x1F8834u);
    ctx->pc = 0x1F8830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F882Cu;
    // 0x1f8830: 0xe6c1ee88  swc1        $f1, -0x1178($s6) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4294962824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDCD0u, 0x1F882Cu, 0x1F8834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8834u;
label_1f8834:
    // 0x1f8834: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1f8834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1f8838:
    // 0x1f8838: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f8838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f883c:
    // 0x1f883c: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x1f883cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1f8840:
    // 0x1f8840: 0x24a579b0  addiu       $a1, $a1, 0x79B0
    ctx->pc = 0x1f8840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31152));
label_1f8844:
    // 0x1f8844: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1f8844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1f8848:
    // 0x1f8848: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x1f8848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_1f884c:
    // 0x1f884c: 0xe636000c  swc1        $f22, 0xC($s1)
    ctx->pc = 0x1f884cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1f8850:
    // 0x1f8850: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f8850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f8854:
    // 0x1f8854: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x1f8854u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_1f8858:
    // 0x1f8858: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1f8858u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f885c:
    // 0x1f885c: 0x240900d6  addiu       $t1, $zero, 0xD6
    ctx->pc = 0x1f885cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
label_1f8860:
    // 0x1f8860: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f8860u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8864:
    // 0x1f8864: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f8864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f8868:
    // 0x1f8868: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f8868u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f886c:
    // 0x1f886c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f886cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f8870:
    // 0x1f8870: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f8870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f8874:
    // 0x1f8874: 0x40f809  jalr        $v0
label_1f8878:
    if (ctx->pc == 0x1F8878u) {
        ctx->pc = 0x1F8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8874u;
        // 0x1f8878: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F887Cu;
        goto label_1f887c;
    }
    ctx->pc = 0x1F8874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F887Cu);
        ctx->pc = 0x1F8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8874u;
        // 0x1f8878: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8874u, 0x1F887Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F887Cu;
label_1f887c:
    // 0x1f887c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f8880:
    if (ctx->pc == 0x1F8880u) {
        ctx->pc = 0x1F8880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F887Cu;
        // 0x1f8880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8884u;
        goto label_1f8884;
    }
    ctx->pc = 0x1F887Cu;
    {
        const bool branch_taken_0x1f887c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F887Cu;
        // 0x1f8880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f887c) {
            ctx->pc = 0x1F8890u;
            goto label_1f8890;
        }
    }
    ctx->pc = 0x1F8884u;
label_1f8884:
    // 0x1f8884: 0xc073a9c  jal         func_1CEA70
label_1f8888:
    if (ctx->pc == 0x1F8888u) {
        ctx->pc = 0x1F8888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8884u;
        // 0x1f8888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F888Cu;
        goto label_1f888c;
    }
    ctx->pc = 0x1F8884u;
    SET_GPR_U32(ctx, 31, 0x1F888Cu);
    ctx->pc = 0x1F8888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8884u;
    // 0x1f8888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x1F8884u, 0x1F888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F888Cu;
label_1f888c:
    // 0x1f888c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f888cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8890:
    // 0x1f8890: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f8890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f8894:
    // 0x1f8894: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f8898:
    // 0x1f8898: 0xc073ad0  jal         func_1CEB40
label_1f889c:
    if (ctx->pc == 0x1F889Cu) {
        ctx->pc = 0x1F889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8898u;
        // 0x1f889c: 0xae0200a4  sw          $v0, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F88A0u;
        goto label_1f88a0;
    }
    ctx->pc = 0x1F8898u;
    SET_GPR_U32(ctx, 31, 0x1F88A0u);
    ctx->pc = 0x1F889Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8898u;
    // 0x1f889c: 0xae0200a4  sw          $v0, 0xA4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1F8898u, 0x1F88A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88A0u;
label_1f88a0:
    // 0x1f88a0: 0x3c1e0064  lui         $fp, 0x64
    ctx->pc = 0x1f88a0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)100 << 16));
label_1f88a4:
    // 0x1f88a4: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1f88a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1f88a8:
    // 0x1f88a8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f88a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1f88ac:
    // 0x1f88ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f88acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f88b0:
    // 0x1f88b0: 0xc067b9c  jal         func_19EE70
label_1f88b4:
    if (ctx->pc == 0x1F88B4u) {
        ctx->pc = 0x1F88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88B0u;
        // 0x1f88b4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F88B8u;
        goto label_1f88b8;
    }
    ctx->pc = 0x1F88B0u;
    SET_GPR_U32(ctx, 31, 0x1F88B8u);
    ctx->pc = 0x1F88B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F88B0u;
    // 0x1f88b4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F88B0u, 0x1F88B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88B8u;
label_1f88b8:
    // 0x1f88b8: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x1f88b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1f88bc:
    // 0x1f88bc: 0xc073b0a  jal         func_1CEC28
label_1f88c0:
    if (ctx->pc == 0x1F88C0u) {
        ctx->pc = 0x1F88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88BCu;
        // 0x1f88c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F88C4u;
        goto label_1f88c4;
    }
    ctx->pc = 0x1F88BCu;
    SET_GPR_U32(ctx, 31, 0x1F88C4u);
    ctx->pc = 0x1F88C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F88BCu;
    // 0x1f88c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1F88BCu, 0x1F88C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88C4u;
label_1f88c4:
    // 0x1f88c4: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1f88c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_1f88c8:
    // 0x1f88c8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f88c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1f88cc:
    // 0x1f88cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f88ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f88d0:
    // 0x1f88d0: 0xc05e602  jal         func_179808
label_1f88d4:
    if (ctx->pc == 0x1F88D4u) {
        ctx->pc = 0x1F88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88D0u;
        // 0x1f88d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F88D8u;
        goto label_1f88d8;
    }
    ctx->pc = 0x1F88D0u;
    SET_GPR_U32(ctx, 31, 0x1F88D8u);
    ctx->pc = 0x1F88D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F88D0u;
    // 0x1f88d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1F88D0u, 0x1F88D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88D8u;
label_1f88d8:
    // 0x1f88d8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1f88d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f88dc:
    // 0x1f88dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f88dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f88e0:
    // 0x1f88e0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1f88e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f88e4:
    // 0x1f88e4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1f88e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_1f88e8:
    // 0x1f88e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f88e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f88ec:
    // 0x1f88ec: 0xc07e0b0  jal         func_1F82C0
label_1f88f0:
    if (ctx->pc == 0x1F88F0u) {
        ctx->pc = 0x1F88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88ECu;
        // 0x1f88f0: 0xe7c0ee8c  swc1        $f0, -0x1174($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294962828), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F88F4u;
        goto label_1f88f4;
    }
    ctx->pc = 0x1F88ECu;
    SET_GPR_U32(ctx, 31, 0x1F88F4u);
    ctx->pc = 0x1F88F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F88ECu;
    // 0x1f88f0: 0xe7c0ee8c  swc1        $f0, -0x1174($fp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294962828), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F82C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F82C0u, 0x1F88ECu, 0x1F88F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88F4u;
label_1f88f4:
    // 0x1f88f4: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x1f88f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1f88f8:
    // 0x1f88f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f88fc:
    // 0x1f88fc: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1f88fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1f8900:
    // 0x1f8900: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1f8900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1f8904:
    // 0x1f8904: 0x60f809  jalr        $v1
label_1f8908:
    if (ctx->pc == 0x1F8908u) {
        ctx->pc = 0x1F8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8904u;
        // 0x1f8908: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F890Cu;
        goto label_1f890c;
    }
    ctx->pc = 0x1F8904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F890Cu);
        ctx->pc = 0x1F8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8904u;
        // 0x1f8908: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8904u, 0x1F890Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F890Cu;
label_1f890c:
    // 0x1f890c: 0xc07e3e6  jal         func_1F8F98
label_1f8910:
    if (ctx->pc == 0x1F8910u) {
        ctx->pc = 0x1F8910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F890Cu;
        // 0x1f8910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8914u;
        goto label_1f8914;
    }
    ctx->pc = 0x1F890Cu;
    SET_GPR_U32(ctx, 31, 0x1F8914u);
    ctx->pc = 0x1F8910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F890Cu;
    // 0x1f8910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8F98u, 0x1F890Cu, 0x1F8914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8914u;
label_1f8914:
    // 0x1f8914: 0xc6c0ee88  lwc1        $f0, -0x1178($s6)
    ctx->pc = 0x1f8914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294962824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f8918:
    // 0x1f8918: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1f8918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1f891c:
    // 0x1f891c: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x1f891cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1f8920:
    // 0x1f8920: 0x245679c0  addiu       $s6, $v0, 0x79C0
    ctx->pc = 0x1f8920u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 31168));
label_1f8924:
    // 0x1f8924: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1f8924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1f8928:
    // 0x1f8928: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1f8928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_1f892c:
    // 0x1f892c: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x1f892cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_1f8930:
    // 0x1f8930: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f8930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f8934:
    // 0x1f8934: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1f8934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f8938:
    // 0x1f8938: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f8938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f893c:
    // 0x1f893c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1f893cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1f8940:
    // 0x1f8940: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1f8940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f8944:
    // 0x1f8944: 0x240900e4  addiu       $t1, $zero, 0xE4
    ctx->pc = 0x1f8944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_1f8948:
    // 0x1f8948: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f8948u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f894c:
    // 0x1f894c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f894cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f8950:
    // 0x1f8950: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f8950u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8954:
    // 0x1f8954: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f8954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f8958:
    // 0x1f8958: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f8958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f895c:
    // 0x1f895c: 0x40f809  jalr        $v0
label_1f8960:
    if (ctx->pc == 0x1F8960u) {
        ctx->pc = 0x1F8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F895Cu;
        // 0x1f8960: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8964u;
        goto label_1f8964;
    }
    ctx->pc = 0x1F895Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F8964u);
        ctx->pc = 0x1F8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F895Cu;
        // 0x1f8960: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F895Cu, 0x1F8964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8964u;
label_1f8964:
    // 0x1f8964: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f8968:
    if (ctx->pc == 0x1F8968u) {
        ctx->pc = 0x1F8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8964u;
        // 0x1f8968: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F896Cu;
        goto label_1f896c;
    }
    ctx->pc = 0x1F8964u;
    {
        const bool branch_taken_0x1f8964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8964) {
            ctx->pc = 0x1F8968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8964u;
            // 0x1f8968: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8978u;
            goto label_1f8978;
        }
    }
    ctx->pc = 0x1F896Cu;
label_1f896c:
    // 0x1f896c: 0xc0686fe  jal         func_1A1BF8
label_1f8970:
    if (ctx->pc == 0x1F8970u) {
        ctx->pc = 0x1F8970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F896Cu;
        // 0x1f8970: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8974u;
        goto label_1f8974;
    }
    ctx->pc = 0x1F896Cu;
    SET_GPR_U32(ctx, 31, 0x1F8974u);
    ctx->pc = 0x1F8970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F896Cu;
    // 0x1f8970: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1F896Cu, 0x1F8974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8974u;
label_1f8974:
    // 0x1f8974: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x1f8974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_1f8978:
    // 0x1f8978: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1f8978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f897c:
    // 0x1f897c: 0x8e0a0098  lw          $t2, 0x98($s0)
    ctx->pc = 0x1f897cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1f8980:
    // 0x1f8980: 0x241700ff  addiu       $s7, $zero, 0xFF
    ctx->pc = 0x1f8980u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1f8984:
    // 0x1f8984: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f8984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f8988:
    // 0x1f8988: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x1f8988u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_1f898c:
    // 0x1f898c: 0x3c0145fd  lui         $at, 0x45FD
    ctx->pc = 0x1f898cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17917 << 16));
label_1f8990:
    // 0x1f8990: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x1f8990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_1f8994:
    // 0x1f8994: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f8994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1f8998:
    // 0x1f8998: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f8998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f899c:
    // 0x1f899c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1f899cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1f89a0:
    // 0x1f89a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f89a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f89a4:
    // 0x1f89a4: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1f89a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1f89a8:
    // 0x1f89a8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f89a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f89ac:
    // 0x1f89ac: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1f89acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
label_1f89b0:
    // 0x1f89b0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f89b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f89b4:
    // 0x1f89b4: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x1f89b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
label_1f89b8:
    // 0x1f89b8: 0x3529001e  ori         $t1, $t1, 0x1E
    ctx->pc = 0x1f89b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)30);
label_1f89bc:
    // 0x1f89bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f89bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f89c0:
    // 0x1f89c0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1f89c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1f89c4:
    // 0x1f89c4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1f89c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1f89c8:
    // 0x1f89c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f89c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f89cc:
    // 0x1f89cc: 0x40f809  jalr        $v0
label_1f89d0:
    if (ctx->pc == 0x1F89D0u) {
        ctx->pc = 0x1F89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89CCu;
        // 0x1f89d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F89D4u;
        goto label_1f89d4;
    }
    ctx->pc = 0x1F89CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F89D4u);
        ctx->pc = 0x1F89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89CCu;
        // 0x1f89d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F89CCu, 0x1F89D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F89D4u;
label_1f89d4:
    // 0x1f89d4: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x1f89d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1f89d8:
    // 0x1f89d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f89d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f89dc:
    // 0x1f89dc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f89dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f89e0:
    // 0x1f89e0: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1f89e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1f89e4:
    // 0x1f89e4: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1f89e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1f89e8:
    // 0x1f89e8: 0x60f809  jalr        $v1
label_1f89ec:
    if (ctx->pc == 0x1F89ECu) {
        ctx->pc = 0x1F89ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89E8u;
        // 0x1f89ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F89F0u;
        goto label_1f89f0;
    }
    ctx->pc = 0x1F89E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F89F0u);
        ctx->pc = 0x1F89ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89E8u;
        // 0x1f89ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F89E8u, 0x1F89F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F89F0u;
label_1f89f0:
    // 0x1f89f0: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x1f89f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1f89f4:
    // 0x1f89f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f89f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f89f8:
    // 0x1f89f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f89fc:
    // 0x1f89fc: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1f89fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1f8a00:
    // 0x1f8a00: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1f8a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1f8a04:
    // 0x1f8a04: 0x60f809  jalr        $v1
label_1f8a08:
    if (ctx->pc == 0x1F8A08u) {
        ctx->pc = 0x1F8A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A04u;
        // 0x1f8a08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8A0Cu;
        goto label_1f8a0c;
    }
    ctx->pc = 0x1F8A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F8A0Cu);
        ctx->pc = 0x1F8A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A04u;
        // 0x1f8a08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8A04u, 0x1F8A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8A0Cu;
label_1f8a0c:
    // 0x1f8a0c: 0xc7c0ee8c  lwc1        $f0, -0x1174($fp)
    ctx->pc = 0x1f8a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294962828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f8a10:
    // 0x1f8a10: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f8a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f8a14:
    // 0x1f8a14: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x1f8a14u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_1f8a18:
    // 0x1f8a18: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1f8a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f8a1c:
    // 0x1f8a1c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1f8a1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1f8a20:
    // 0x1f8a20: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1f8a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f8a24:
    // 0x1f8a24: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f8a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f8a28:
    // 0x1f8a28: 0x240900ea  addiu       $t1, $zero, 0xEA
    ctx->pc = 0x1f8a28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
label_1f8a2c:
    // 0x1f8a2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f8a2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8a30:
    // 0x1f8a30: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f8a30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8a34:
    // 0x1f8a34: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1f8a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1f8a38:
    // 0x1f8a38: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f8a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f8a3c:
    // 0x1f8a3c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f8a3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f8a40:
    // 0x1f8a40: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f8a44:
    // 0x1f8a44: 0x40f809  jalr        $v0
label_1f8a48:
    if (ctx->pc == 0x1F8A48u) {
        ctx->pc = 0x1F8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A44u;
        // 0x1f8a48: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8A4Cu;
        goto label_1f8a4c;
    }
    ctx->pc = 0x1F8A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F8A4Cu);
        ctx->pc = 0x1F8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A44u;
        // 0x1f8a48: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8A44u, 0x1F8A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8A4Cu;
label_1f8a4c:
    // 0x1f8a4c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f8a50:
    if (ctx->pc == 0x1F8A50u) {
        ctx->pc = 0x1F8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A4Cu;
        // 0x1f8a50: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8A54u;
        goto label_1f8a54;
    }
    ctx->pc = 0x1F8A4Cu;
    {
        const bool branch_taken_0x1f8a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8a4c) {
            ctx->pc = 0x1F8A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8A4Cu;
            // 0x1f8a50: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8A60u;
            goto label_1f8a60;
        }
    }
    ctx->pc = 0x1F8A54u;
label_1f8a54:
    // 0x1f8a54: 0xc0686fe  jal         func_1A1BF8
label_1f8a58:
    if (ctx->pc == 0x1F8A58u) {
        ctx->pc = 0x1F8A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A54u;
        // 0x1f8a58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8A5Cu;
        goto label_1f8a5c;
    }
    ctx->pc = 0x1F8A54u;
    SET_GPR_U32(ctx, 31, 0x1F8A5Cu);
    ctx->pc = 0x1F8A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8A54u;
    // 0x1f8a58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1F8A54u, 0x1F8A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A5Cu;
label_1f8a5c:
    // 0x1f8a5c: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1f8a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1f8a60:
    // 0x1f8a60: 0x3c09001c  lui         $t1, 0x1C
    ctx->pc = 0x1f8a60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28 << 16));
label_1f8a64:
    // 0x1f8a64: 0x8e0a0098  lw          $t2, 0x98($s0)
    ctx->pc = 0x1f8a64u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1f8a68:
    // 0x1f8a68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f8a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f8a6c:
    // 0x1f8a6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f8a70:
    // 0x1f8a70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f8a70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f8a74:
    // 0x1f8a74: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1f8a74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1f8a78:
    // 0x1f8a78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f8a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8a7c:
    // 0x1f8a7c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1f8a7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1f8a80:
    // 0x1f8a80: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f8a80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8a84:
    // 0x1f8a84: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x1f8a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
label_1f8a88:
    // 0x1f8a88: 0x3529001e  ori         $t1, $t1, 0x1E
    ctx->pc = 0x1f8a88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)30);
label_1f8a8c:
    // 0x1f8a8c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1f8a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1f8a90:
    // 0x1f8a90: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f8a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f8a94:
    // 0x1f8a94: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1f8a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
label_1f8a98:
    // 0x1f8a98: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f8a98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8a9c:
    // 0x1f8a9c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1f8a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1f8aa0:
    // 0x1f8aa0: 0x40f809  jalr        $v0
label_1f8aa4:
    if (ctx->pc == 0x1F8AA4u) {
        ctx->pc = 0x1F8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AA0u;
        // 0x1f8aa4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8AA8u;
        goto label_1f8aa8;
    }
    ctx->pc = 0x1F8AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F8AA8u);
        ctx->pc = 0x1F8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AA0u;
        // 0x1f8aa4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8AA0u, 0x1F8AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8AA8u;
label_1f8aa8:
    // 0x1f8aa8: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x1f8aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1f8aac:
    // 0x1f8aac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f8aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8ab0:
    // 0x1f8ab0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f8ab4:
    // 0x1f8ab4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1f8ab4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1f8ab8:
    // 0x1f8ab8: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1f8ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1f8abc:
    // 0x1f8abc: 0x60f809  jalr        $v1
label_1f8ac0:
    if (ctx->pc == 0x1F8AC0u) {
        ctx->pc = 0x1F8AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8ABCu;
        // 0x1f8ac0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8AC4u;
        goto label_1f8ac4;
    }
    ctx->pc = 0x1F8ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F8AC4u);
        ctx->pc = 0x1F8AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8ABCu;
        // 0x1f8ac0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8ABCu, 0x1F8AC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8AC4u;
label_1f8ac4:
    // 0x1f8ac4: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1f8ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1f8ac8:
    // 0x1f8ac8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f8ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1f8acc:
    // 0x1f8acc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f8accu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1f8ad0:
    // 0x1f8ad0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f8ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f8ad4:
    // 0x1f8ad4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8ad8:
    // 0x1f8ad8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1f8ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1f8adc:
    // 0x1f8adc: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1f8adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1f8ae0:
    // 0x1f8ae0: 0x60f809  jalr        $v1
label_1f8ae4:
    if (ctx->pc == 0x1F8AE4u) {
        ctx->pc = 0x1F8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AE0u;
        // 0x1f8ae4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8AE8u;
        goto label_1f8ae8;
    }
    ctx->pc = 0x1F8AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F8AE8u);
        ctx->pc = 0x1F8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AE0u;
        // 0x1f8ae4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8AE0u, 0x1F8AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8AE8u;
label_1f8ae8:
    // 0x1f8ae8: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1f8ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_1f8aec:
    // 0x1f8aec: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1f8aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1f8af0:
    // 0x1f8af0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1f8af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1f8af4:
    // 0x1f8af4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1f8af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1f8af8:
    // 0x1f8af8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1f8af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1f8afc:
    // 0x1f8afc: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1f8afcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1f8b00:
    // 0x1f8b00: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1f8b00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1f8b04:
    // 0x1f8b04: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1f8b04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f8b08:
    // 0x1f8b08: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1f8b08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f8b0c:
    // 0x1f8b0c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1f8b0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f8b10:
    // 0x1f8b10: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1f8b10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f8b14:
    // 0x1f8b14: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f8b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f8b18:
    // 0x1f8b18: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x1f8b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1f8b1c:
    // 0x1f8b1c: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1f8b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f8b20:
    // 0x1f8b20: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1f8b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f8b24:
    // 0x1f8b24: 0x3e00008  jr          $ra
label_1f8b28:
    if (ctx->pc == 0x1F8B28u) {
        ctx->pc = 0x1F8B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B24u;
        // 0x1f8b28: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8B2Cu;
        goto label_1f8b2c;
    }
    ctx->pc = 0x1F8B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B24u;
        // 0x1f8b28: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8B2Cu;
label_1f8b2c:
    // 0x1f8b2c: 0x0  nop
    ctx->pc = 0x1f8b2cu;
    // NOP
    ctx->pc = 0x1f8b30u;
}
