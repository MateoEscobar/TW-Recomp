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

// Function: sub_001E86C8
// Address: 0x1e86c8 - 0x1e8d00
void sub_001E86C8_0x1e86c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E86C8_0x1e86c8");
#endif

    switch (ctx->pc) {
        case 0x1e86c8u: goto label_1e86c8;
        case 0x1e86ccu: goto label_1e86cc;
        case 0x1e86d0u: goto label_1e86d0;
        case 0x1e86d4u: goto label_1e86d4;
        case 0x1e86d8u: goto label_1e86d8;
        case 0x1e86dcu: goto label_1e86dc;
        case 0x1e86e0u: goto label_1e86e0;
        case 0x1e86e4u: goto label_1e86e4;
        case 0x1e86e8u: goto label_1e86e8;
        case 0x1e86ecu: goto label_1e86ec;
        case 0x1e86f0u: goto label_1e86f0;
        case 0x1e86f4u: goto label_1e86f4;
        case 0x1e86f8u: goto label_1e86f8;
        case 0x1e86fcu: goto label_1e86fc;
        case 0x1e8700u: goto label_1e8700;
        case 0x1e8704u: goto label_1e8704;
        case 0x1e8708u: goto label_1e8708;
        case 0x1e870cu: goto label_1e870c;
        case 0x1e8710u: goto label_1e8710;
        case 0x1e8714u: goto label_1e8714;
        case 0x1e8718u: goto label_1e8718;
        case 0x1e871cu: goto label_1e871c;
        case 0x1e8720u: goto label_1e8720;
        case 0x1e8724u: goto label_1e8724;
        case 0x1e8728u: goto label_1e8728;
        case 0x1e872cu: goto label_1e872c;
        case 0x1e8730u: goto label_1e8730;
        case 0x1e8734u: goto label_1e8734;
        case 0x1e8738u: goto label_1e8738;
        case 0x1e873cu: goto label_1e873c;
        case 0x1e8740u: goto label_1e8740;
        case 0x1e8744u: goto label_1e8744;
        case 0x1e8748u: goto label_1e8748;
        case 0x1e874cu: goto label_1e874c;
        case 0x1e8750u: goto label_1e8750;
        case 0x1e8754u: goto label_1e8754;
        case 0x1e8758u: goto label_1e8758;
        case 0x1e875cu: goto label_1e875c;
        case 0x1e8760u: goto label_1e8760;
        case 0x1e8764u: goto label_1e8764;
        case 0x1e8768u: goto label_1e8768;
        case 0x1e876cu: goto label_1e876c;
        case 0x1e8770u: goto label_1e8770;
        case 0x1e8774u: goto label_1e8774;
        case 0x1e8778u: goto label_1e8778;
        case 0x1e877cu: goto label_1e877c;
        case 0x1e8780u: goto label_1e8780;
        case 0x1e8784u: goto label_1e8784;
        case 0x1e8788u: goto label_1e8788;
        case 0x1e878cu: goto label_1e878c;
        case 0x1e8790u: goto label_1e8790;
        case 0x1e8794u: goto label_1e8794;
        case 0x1e8798u: goto label_1e8798;
        case 0x1e879cu: goto label_1e879c;
        case 0x1e87a0u: goto label_1e87a0;
        case 0x1e87a4u: goto label_1e87a4;
        case 0x1e87a8u: goto label_1e87a8;
        case 0x1e87acu: goto label_1e87ac;
        case 0x1e87b0u: goto label_1e87b0;
        case 0x1e87b4u: goto label_1e87b4;
        case 0x1e87b8u: goto label_1e87b8;
        case 0x1e87bcu: goto label_1e87bc;
        case 0x1e87c0u: goto label_1e87c0;
        case 0x1e87c4u: goto label_1e87c4;
        case 0x1e87c8u: goto label_1e87c8;
        case 0x1e87ccu: goto label_1e87cc;
        case 0x1e87d0u: goto label_1e87d0;
        case 0x1e87d4u: goto label_1e87d4;
        case 0x1e87d8u: goto label_1e87d8;
        case 0x1e87dcu: goto label_1e87dc;
        case 0x1e87e0u: goto label_1e87e0;
        case 0x1e87e4u: goto label_1e87e4;
        case 0x1e87e8u: goto label_1e87e8;
        case 0x1e87ecu: goto label_1e87ec;
        case 0x1e87f0u: goto label_1e87f0;
        case 0x1e87f4u: goto label_1e87f4;
        case 0x1e87f8u: goto label_1e87f8;
        case 0x1e87fcu: goto label_1e87fc;
        case 0x1e8800u: goto label_1e8800;
        case 0x1e8804u: goto label_1e8804;
        case 0x1e8808u: goto label_1e8808;
        case 0x1e880cu: goto label_1e880c;
        case 0x1e8810u: goto label_1e8810;
        case 0x1e8814u: goto label_1e8814;
        case 0x1e8818u: goto label_1e8818;
        case 0x1e881cu: goto label_1e881c;
        case 0x1e8820u: goto label_1e8820;
        case 0x1e8824u: goto label_1e8824;
        case 0x1e8828u: goto label_1e8828;
        case 0x1e882cu: goto label_1e882c;
        case 0x1e8830u: goto label_1e8830;
        case 0x1e8834u: goto label_1e8834;
        case 0x1e8838u: goto label_1e8838;
        case 0x1e883cu: goto label_1e883c;
        case 0x1e8840u: goto label_1e8840;
        case 0x1e8844u: goto label_1e8844;
        case 0x1e8848u: goto label_1e8848;
        case 0x1e884cu: goto label_1e884c;
        case 0x1e8850u: goto label_1e8850;
        case 0x1e8854u: goto label_1e8854;
        case 0x1e8858u: goto label_1e8858;
        case 0x1e885cu: goto label_1e885c;
        case 0x1e8860u: goto label_1e8860;
        case 0x1e8864u: goto label_1e8864;
        case 0x1e8868u: goto label_1e8868;
        case 0x1e886cu: goto label_1e886c;
        case 0x1e8870u: goto label_1e8870;
        case 0x1e8874u: goto label_1e8874;
        case 0x1e8878u: goto label_1e8878;
        case 0x1e887cu: goto label_1e887c;
        case 0x1e8880u: goto label_1e8880;
        case 0x1e8884u: goto label_1e8884;
        case 0x1e8888u: goto label_1e8888;
        case 0x1e888cu: goto label_1e888c;
        case 0x1e8890u: goto label_1e8890;
        case 0x1e8894u: goto label_1e8894;
        case 0x1e8898u: goto label_1e8898;
        case 0x1e889cu: goto label_1e889c;
        case 0x1e88a0u: goto label_1e88a0;
        case 0x1e88a4u: goto label_1e88a4;
        case 0x1e88a8u: goto label_1e88a8;
        case 0x1e88acu: goto label_1e88ac;
        case 0x1e88b0u: goto label_1e88b0;
        case 0x1e88b4u: goto label_1e88b4;
        case 0x1e88b8u: goto label_1e88b8;
        case 0x1e88bcu: goto label_1e88bc;
        case 0x1e88c0u: goto label_1e88c0;
        case 0x1e88c4u: goto label_1e88c4;
        case 0x1e88c8u: goto label_1e88c8;
        case 0x1e88ccu: goto label_1e88cc;
        case 0x1e88d0u: goto label_1e88d0;
        case 0x1e88d4u: goto label_1e88d4;
        case 0x1e88d8u: goto label_1e88d8;
        case 0x1e88dcu: goto label_1e88dc;
        case 0x1e88e0u: goto label_1e88e0;
        case 0x1e88e4u: goto label_1e88e4;
        case 0x1e88e8u: goto label_1e88e8;
        case 0x1e88ecu: goto label_1e88ec;
        case 0x1e88f0u: goto label_1e88f0;
        case 0x1e88f4u: goto label_1e88f4;
        case 0x1e88f8u: goto label_1e88f8;
        case 0x1e88fcu: goto label_1e88fc;
        case 0x1e8900u: goto label_1e8900;
        case 0x1e8904u: goto label_1e8904;
        case 0x1e8908u: goto label_1e8908;
        case 0x1e890cu: goto label_1e890c;
        case 0x1e8910u: goto label_1e8910;
        case 0x1e8914u: goto label_1e8914;
        case 0x1e8918u: goto label_1e8918;
        case 0x1e891cu: goto label_1e891c;
        case 0x1e8920u: goto label_1e8920;
        case 0x1e8924u: goto label_1e8924;
        case 0x1e8928u: goto label_1e8928;
        case 0x1e892cu: goto label_1e892c;
        case 0x1e8930u: goto label_1e8930;
        case 0x1e8934u: goto label_1e8934;
        case 0x1e8938u: goto label_1e8938;
        case 0x1e893cu: goto label_1e893c;
        case 0x1e8940u: goto label_1e8940;
        case 0x1e8944u: goto label_1e8944;
        case 0x1e8948u: goto label_1e8948;
        case 0x1e894cu: goto label_1e894c;
        case 0x1e8950u: goto label_1e8950;
        case 0x1e8954u: goto label_1e8954;
        case 0x1e8958u: goto label_1e8958;
        case 0x1e895cu: goto label_1e895c;
        case 0x1e8960u: goto label_1e8960;
        case 0x1e8964u: goto label_1e8964;
        case 0x1e8968u: goto label_1e8968;
        case 0x1e896cu: goto label_1e896c;
        case 0x1e8970u: goto label_1e8970;
        case 0x1e8974u: goto label_1e8974;
        case 0x1e8978u: goto label_1e8978;
        case 0x1e897cu: goto label_1e897c;
        case 0x1e8980u: goto label_1e8980;
        case 0x1e8984u: goto label_1e8984;
        case 0x1e8988u: goto label_1e8988;
        case 0x1e898cu: goto label_1e898c;
        case 0x1e8990u: goto label_1e8990;
        case 0x1e8994u: goto label_1e8994;
        case 0x1e8998u: goto label_1e8998;
        case 0x1e899cu: goto label_1e899c;
        case 0x1e89a0u: goto label_1e89a0;
        case 0x1e89a4u: goto label_1e89a4;
        case 0x1e89a8u: goto label_1e89a8;
        case 0x1e89acu: goto label_1e89ac;
        case 0x1e89b0u: goto label_1e89b0;
        case 0x1e89b4u: goto label_1e89b4;
        case 0x1e89b8u: goto label_1e89b8;
        case 0x1e89bcu: goto label_1e89bc;
        case 0x1e89c0u: goto label_1e89c0;
        case 0x1e89c4u: goto label_1e89c4;
        case 0x1e89c8u: goto label_1e89c8;
        case 0x1e89ccu: goto label_1e89cc;
        case 0x1e89d0u: goto label_1e89d0;
        case 0x1e89d4u: goto label_1e89d4;
        case 0x1e89d8u: goto label_1e89d8;
        case 0x1e89dcu: goto label_1e89dc;
        case 0x1e89e0u: goto label_1e89e0;
        case 0x1e89e4u: goto label_1e89e4;
        case 0x1e89e8u: goto label_1e89e8;
        case 0x1e89ecu: goto label_1e89ec;
        case 0x1e89f0u: goto label_1e89f0;
        case 0x1e89f4u: goto label_1e89f4;
        case 0x1e89f8u: goto label_1e89f8;
        case 0x1e89fcu: goto label_1e89fc;
        case 0x1e8a00u: goto label_1e8a00;
        case 0x1e8a04u: goto label_1e8a04;
        case 0x1e8a08u: goto label_1e8a08;
        case 0x1e8a0cu: goto label_1e8a0c;
        case 0x1e8a10u: goto label_1e8a10;
        case 0x1e8a14u: goto label_1e8a14;
        case 0x1e8a18u: goto label_1e8a18;
        case 0x1e8a1cu: goto label_1e8a1c;
        case 0x1e8a20u: goto label_1e8a20;
        case 0x1e8a24u: goto label_1e8a24;
        case 0x1e8a28u: goto label_1e8a28;
        case 0x1e8a2cu: goto label_1e8a2c;
        case 0x1e8a30u: goto label_1e8a30;
        case 0x1e8a34u: goto label_1e8a34;
        case 0x1e8a38u: goto label_1e8a38;
        case 0x1e8a3cu: goto label_1e8a3c;
        case 0x1e8a40u: goto label_1e8a40;
        case 0x1e8a44u: goto label_1e8a44;
        case 0x1e8a48u: goto label_1e8a48;
        case 0x1e8a4cu: goto label_1e8a4c;
        case 0x1e8a50u: goto label_1e8a50;
        case 0x1e8a54u: goto label_1e8a54;
        case 0x1e8a58u: goto label_1e8a58;
        case 0x1e8a5cu: goto label_1e8a5c;
        case 0x1e8a60u: goto label_1e8a60;
        case 0x1e8a64u: goto label_1e8a64;
        case 0x1e8a68u: goto label_1e8a68;
        case 0x1e8a6cu: goto label_1e8a6c;
        case 0x1e8a70u: goto label_1e8a70;
        case 0x1e8a74u: goto label_1e8a74;
        case 0x1e8a78u: goto label_1e8a78;
        case 0x1e8a7cu: goto label_1e8a7c;
        case 0x1e8a80u: goto label_1e8a80;
        case 0x1e8a84u: goto label_1e8a84;
        case 0x1e8a88u: goto label_1e8a88;
        case 0x1e8a8cu: goto label_1e8a8c;
        case 0x1e8a90u: goto label_1e8a90;
        case 0x1e8a94u: goto label_1e8a94;
        case 0x1e8a98u: goto label_1e8a98;
        case 0x1e8a9cu: goto label_1e8a9c;
        case 0x1e8aa0u: goto label_1e8aa0;
        case 0x1e8aa4u: goto label_1e8aa4;
        case 0x1e8aa8u: goto label_1e8aa8;
        case 0x1e8aacu: goto label_1e8aac;
        case 0x1e8ab0u: goto label_1e8ab0;
        case 0x1e8ab4u: goto label_1e8ab4;
        case 0x1e8ab8u: goto label_1e8ab8;
        case 0x1e8abcu: goto label_1e8abc;
        case 0x1e8ac0u: goto label_1e8ac0;
        case 0x1e8ac4u: goto label_1e8ac4;
        case 0x1e8ac8u: goto label_1e8ac8;
        case 0x1e8accu: goto label_1e8acc;
        case 0x1e8ad0u: goto label_1e8ad0;
        case 0x1e8ad4u: goto label_1e8ad4;
        case 0x1e8ad8u: goto label_1e8ad8;
        case 0x1e8adcu: goto label_1e8adc;
        case 0x1e8ae0u: goto label_1e8ae0;
        case 0x1e8ae4u: goto label_1e8ae4;
        case 0x1e8ae8u: goto label_1e8ae8;
        case 0x1e8aecu: goto label_1e8aec;
        case 0x1e8af0u: goto label_1e8af0;
        case 0x1e8af4u: goto label_1e8af4;
        case 0x1e8af8u: goto label_1e8af8;
        case 0x1e8afcu: goto label_1e8afc;
        case 0x1e8b00u: goto label_1e8b00;
        case 0x1e8b04u: goto label_1e8b04;
        case 0x1e8b08u: goto label_1e8b08;
        case 0x1e8b0cu: goto label_1e8b0c;
        case 0x1e8b10u: goto label_1e8b10;
        case 0x1e8b14u: goto label_1e8b14;
        case 0x1e8b18u: goto label_1e8b18;
        case 0x1e8b1cu: goto label_1e8b1c;
        case 0x1e8b20u: goto label_1e8b20;
        case 0x1e8b24u: goto label_1e8b24;
        case 0x1e8b28u: goto label_1e8b28;
        case 0x1e8b2cu: goto label_1e8b2c;
        case 0x1e8b30u: goto label_1e8b30;
        case 0x1e8b34u: goto label_1e8b34;
        case 0x1e8b38u: goto label_1e8b38;
        case 0x1e8b3cu: goto label_1e8b3c;
        case 0x1e8b40u: goto label_1e8b40;
        case 0x1e8b44u: goto label_1e8b44;
        case 0x1e8b48u: goto label_1e8b48;
        case 0x1e8b4cu: goto label_1e8b4c;
        case 0x1e8b50u: goto label_1e8b50;
        case 0x1e8b54u: goto label_1e8b54;
        case 0x1e8b58u: goto label_1e8b58;
        case 0x1e8b5cu: goto label_1e8b5c;
        case 0x1e8b60u: goto label_1e8b60;
        case 0x1e8b64u: goto label_1e8b64;
        case 0x1e8b68u: goto label_1e8b68;
        case 0x1e8b6cu: goto label_1e8b6c;
        case 0x1e8b70u: goto label_1e8b70;
        case 0x1e8b74u: goto label_1e8b74;
        case 0x1e8b78u: goto label_1e8b78;
        case 0x1e8b7cu: goto label_1e8b7c;
        case 0x1e8b80u: goto label_1e8b80;
        case 0x1e8b84u: goto label_1e8b84;
        case 0x1e8b88u: goto label_1e8b88;
        case 0x1e8b8cu: goto label_1e8b8c;
        case 0x1e8b90u: goto label_1e8b90;
        case 0x1e8b94u: goto label_1e8b94;
        case 0x1e8b98u: goto label_1e8b98;
        case 0x1e8b9cu: goto label_1e8b9c;
        case 0x1e8ba0u: goto label_1e8ba0;
        case 0x1e8ba4u: goto label_1e8ba4;
        case 0x1e8ba8u: goto label_1e8ba8;
        case 0x1e8bacu: goto label_1e8bac;
        case 0x1e8bb0u: goto label_1e8bb0;
        case 0x1e8bb4u: goto label_1e8bb4;
        case 0x1e8bb8u: goto label_1e8bb8;
        case 0x1e8bbcu: goto label_1e8bbc;
        case 0x1e8bc0u: goto label_1e8bc0;
        case 0x1e8bc4u: goto label_1e8bc4;
        case 0x1e8bc8u: goto label_1e8bc8;
        case 0x1e8bccu: goto label_1e8bcc;
        case 0x1e8bd0u: goto label_1e8bd0;
        case 0x1e8bd4u: goto label_1e8bd4;
        case 0x1e8bd8u: goto label_1e8bd8;
        case 0x1e8bdcu: goto label_1e8bdc;
        case 0x1e8be0u: goto label_1e8be0;
        case 0x1e8be4u: goto label_1e8be4;
        case 0x1e8be8u: goto label_1e8be8;
        case 0x1e8becu: goto label_1e8bec;
        case 0x1e8bf0u: goto label_1e8bf0;
        case 0x1e8bf4u: goto label_1e8bf4;
        case 0x1e8bf8u: goto label_1e8bf8;
        case 0x1e8bfcu: goto label_1e8bfc;
        case 0x1e8c00u: goto label_1e8c00;
        case 0x1e8c04u: goto label_1e8c04;
        case 0x1e8c08u: goto label_1e8c08;
        case 0x1e8c0cu: goto label_1e8c0c;
        case 0x1e8c10u: goto label_1e8c10;
        case 0x1e8c14u: goto label_1e8c14;
        case 0x1e8c18u: goto label_1e8c18;
        case 0x1e8c1cu: goto label_1e8c1c;
        case 0x1e8c20u: goto label_1e8c20;
        case 0x1e8c24u: goto label_1e8c24;
        case 0x1e8c28u: goto label_1e8c28;
        case 0x1e8c2cu: goto label_1e8c2c;
        case 0x1e8c30u: goto label_1e8c30;
        case 0x1e8c34u: goto label_1e8c34;
        case 0x1e8c38u: goto label_1e8c38;
        case 0x1e8c3cu: goto label_1e8c3c;
        case 0x1e8c40u: goto label_1e8c40;
        case 0x1e8c44u: goto label_1e8c44;
        case 0x1e8c48u: goto label_1e8c48;
        case 0x1e8c4cu: goto label_1e8c4c;
        case 0x1e8c50u: goto label_1e8c50;
        case 0x1e8c54u: goto label_1e8c54;
        case 0x1e8c58u: goto label_1e8c58;
        case 0x1e8c5cu: goto label_1e8c5c;
        case 0x1e8c60u: goto label_1e8c60;
        case 0x1e8c64u: goto label_1e8c64;
        case 0x1e8c68u: goto label_1e8c68;
        case 0x1e8c6cu: goto label_1e8c6c;
        case 0x1e8c70u: goto label_1e8c70;
        case 0x1e8c74u: goto label_1e8c74;
        case 0x1e8c78u: goto label_1e8c78;
        case 0x1e8c7cu: goto label_1e8c7c;
        case 0x1e8c80u: goto label_1e8c80;
        case 0x1e8c84u: goto label_1e8c84;
        case 0x1e8c88u: goto label_1e8c88;
        case 0x1e8c8cu: goto label_1e8c8c;
        case 0x1e8c90u: goto label_1e8c90;
        case 0x1e8c94u: goto label_1e8c94;
        case 0x1e8c98u: goto label_1e8c98;
        case 0x1e8c9cu: goto label_1e8c9c;
        case 0x1e8ca0u: goto label_1e8ca0;
        case 0x1e8ca4u: goto label_1e8ca4;
        case 0x1e8ca8u: goto label_1e8ca8;
        case 0x1e8cacu: goto label_1e8cac;
        case 0x1e8cb0u: goto label_1e8cb0;
        case 0x1e8cb4u: goto label_1e8cb4;
        case 0x1e8cb8u: goto label_1e8cb8;
        case 0x1e8cbcu: goto label_1e8cbc;
        case 0x1e8cc0u: goto label_1e8cc0;
        case 0x1e8cc4u: goto label_1e8cc4;
        case 0x1e8cc8u: goto label_1e8cc8;
        case 0x1e8cccu: goto label_1e8ccc;
        case 0x1e8cd0u: goto label_1e8cd0;
        case 0x1e8cd4u: goto label_1e8cd4;
        case 0x1e8cd8u: goto label_1e8cd8;
        case 0x1e8cdcu: goto label_1e8cdc;
        case 0x1e8ce0u: goto label_1e8ce0;
        case 0x1e8ce4u: goto label_1e8ce4;
        case 0x1e8ce8u: goto label_1e8ce8;
        case 0x1e8cecu: goto label_1e8cec;
        case 0x1e8cf0u: goto label_1e8cf0;
        case 0x1e8cf4u: goto label_1e8cf4;
        case 0x1e8cf8u: goto label_1e8cf8;
        case 0x1e8cfcu: goto label_1e8cfc;
        default: break;
    }

    ctx->pc = 0x1e86c8u;

label_1e86c8:
    // 0x1e86c8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1e86c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1e86cc:
    // 0x1e86cc: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x1e86ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_1e86d0:
    // 0x1e86d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e86d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e86d4:
    // 0x1e86d4: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1e86d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_1e86d8:
    // 0x1e86d8: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1e86d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_1e86dc:
    // 0x1e86dc: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x1e86dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_1e86e0:
    // 0x1e86e0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1e86e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1e86e4:
    // 0x1e86e4: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x1e86e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_1e86e8:
    // 0x1e86e8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1e86e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1e86ec:
    // 0x1e86ec: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x1e86ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_1e86f0:
    // 0x1e86f0: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1e86f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1e86f4:
    // 0x1e86f4: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x1e86f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_1e86f8:
    // 0x1e86f8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1e86f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1e86fc:
    // 0x1e86fc: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x1e86fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_1e8700:
    // 0x1e8700: 0x26b60260  addiu       $s6, $s5, 0x260
    ctx->pc = 0x1e8700u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 608));
label_1e8704:
    // 0x1e8704: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x1e8704u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1e8708:
    // 0x1e8708: 0x26b70a00  addiu       $s7, $s5, 0xA00
    ctx->pc = 0x1e8708u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 2560));
label_1e870c:
    // 0x1e870c: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x1e870cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_1e8710:
    // 0x1e8710: 0x26b40ad0  addiu       $s4, $s5, 0xAD0
    ctx->pc = 0x1e8710u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 2768));
label_1e8714:
    // 0x1e8714: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1e8714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1e8718:
    // 0x1e8718: 0xc07a070  jal         func_1E81C0
label_1e871c:
    if (ctx->pc == 0x1E871Cu) {
        ctx->pc = 0x1E871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8718u;
        // 0x1e871c: 0xe7b50158  swc1        $f21, 0x158($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8720u;
        goto label_1e8720;
    }
    ctx->pc = 0x1E8718u;
    SET_GPR_U32(ctx, 31, 0x1E8720u);
    ctx->pc = 0x1E871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8718u;
    // 0x1e871c: 0xe7b50158  swc1        $f21, 0x158($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E81C0u, 0x1E8718u, 0x1E8720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8720u;
label_1e8720:
    // 0x1e8720: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e8720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e8724:
    // 0x1e8724: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e8724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e8728:
    // 0x1e8728: 0x7aa30020  lq          $v1, 0x20($s5)
    ctx->pc = 0x1e8728u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 32)));
label_1e872c:
    // 0x1e872c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e872cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e8730:
    // 0x1e8730: 0xc444f2ec  lwc1        $f4, -0xD14($v0)
    ctx->pc = 0x1e8730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e8734:
    // 0x1e8734: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1e8734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e8738:
    // 0x1e8738: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1e8738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_1e873c:
    // 0x1e873c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e873cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8740:
    // 0x1e8740: 0xc602f334  lwc1        $f2, -0xCCC($s0)
    ctx->pc = 0x1e8740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8744:
    // 0x1e8744: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e8744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e8748:
    // 0x1e8748: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1e8748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e874c:
    // 0x1e874c: 0x26b00390  addiu       $s0, $s5, 0x390
    ctx->pc = 0x1e874cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 912));
label_1e8750:
    // 0x1e8750: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1e8750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8754:
    // 0x1e8754: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1e8754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1e8758:
    // 0x1e8758: 0xc643f2f0  lwc1        $f3, -0xD10($s2)
    ctx->pc = 0x1e8758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e875c:
    // 0x1e875c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1e875cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1e8760:
    // 0x1e8760: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1e8760u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1e8764:
    // 0x1e8764: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e8764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1e8768:
    // 0x1e8768: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1e8768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1e876c:
    // 0x1e876c: 0xc068818  jal         func_1A2060
label_1e8770:
    if (ctx->pc == 0x1E8770u) {
        ctx->pc = 0x1E8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E876Cu;
        // 0x1e8770: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8774u;
        goto label_1e8774;
    }
    ctx->pc = 0x1E876Cu;
    SET_GPR_U32(ctx, 31, 0x1E8774u);
    ctx->pc = 0x1E8770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E876Cu;
    // 0x1e8770: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1E876Cu, 0x1E8774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8774u;
label_1e8774:
    // 0x1e8774: 0xc06886e  jal         func_1A21B8
label_1e8778:
    if (ctx->pc == 0x1E8778u) {
        ctx->pc = 0x1E8778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8774u;
        // 0x1e8778: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E877Cu;
        goto label_1e877c;
    }
    ctx->pc = 0x1E8774u;
    SET_GPR_U32(ctx, 31, 0x1E877Cu);
    ctx->pc = 0x1E8778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8774u;
    // 0x1e8778: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1E8774u, 0x1E877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E877Cu;
label_1e877c:
    // 0x1e877c: 0xc66cf2e4  lwc1        $f12, -0xD1C($s3)
    ctx->pc = 0x1e877cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294963940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e8780:
    // 0x1e8780: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e8780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e8784:
    // 0x1e8784: 0xc62df2e8  lwc1        $f13, -0xD18($s1)
    ctx->pc = 0x1e8784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294963944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e8788:
    // 0x1e8788: 0xc068848  jal         func_1A2120
label_1e878c:
    if (ctx->pc == 0x1E878Cu) {
        ctx->pc = 0x1E878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8788u;
        // 0x1e878c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8790u;
        goto label_1e8790;
    }
    ctx->pc = 0x1E8788u;
    SET_GPR_U32(ctx, 31, 0x1E8790u);
    ctx->pc = 0x1E878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8788u;
    // 0x1e878c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1E8788u, 0x1E8790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8790u;
label_1e8790:
    // 0x1e8790: 0x7aa30020  lq          $v1, 0x20($s5)
    ctx->pc = 0x1e8790u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 32)));
label_1e8794:
    // 0x1e8794: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e8794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e8798:
    // 0x1e8798: 0xc444f330  lwc1        $f4, -0xCD0($v0)
    ctx->pc = 0x1e8798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e879c:
    // 0x1e879c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1e879cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1e87a0:
    // 0x1e87a0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1e87a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_1e87a4:
    // 0x1e87a4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1e87a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e87a8:
    // 0x1e87a8: 0xc4e2f2fc  lwc1        $f2, -0xD04($a3)
    ctx->pc = 0x1e87a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294963964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e87ac:
    // 0x1e87ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e87acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e87b0:
    // 0x1e87b0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1e87b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e87b4:
    // 0x1e87b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e87b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e87b8:
    // 0x1e87b8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1e87b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e87bc:
    // 0x1e87bc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1e87bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1e87c0:
    // 0x1e87c0: 0xc643f2f0  lwc1        $f3, -0xD10($s2)
    ctx->pc = 0x1e87c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e87c4:
    // 0x1e87c4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e87c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1e87c8:
    // 0x1e87c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e87c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1e87cc:
    // 0x1e87cc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1e87ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1e87d0:
    // 0x1e87d0: 0xc068818  jal         func_1A2060
label_1e87d4:
    if (ctx->pc == 0x1E87D4u) {
        ctx->pc = 0x1E87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E87D0u;
        // 0x1e87d4: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E87D8u;
        goto label_1e87d8;
    }
    ctx->pc = 0x1E87D0u;
    SET_GPR_U32(ctx, 31, 0x1E87D8u);
    ctx->pc = 0x1E87D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E87D0u;
    // 0x1e87d4: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1E87D0u, 0x1E87D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E87D8u;
label_1e87d8:
    // 0x1e87d8: 0xc06886e  jal         func_1A21B8
label_1e87dc:
    if (ctx->pc == 0x1E87DCu) {
        ctx->pc = 0x1E87DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E87D8u;
        // 0x1e87dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E87E0u;
        goto label_1e87e0;
    }
    ctx->pc = 0x1E87D8u;
    SET_GPR_U32(ctx, 31, 0x1E87E0u);
    ctx->pc = 0x1E87DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E87D8u;
    // 0x1e87dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1E87D8u, 0x1E87E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E87E0u;
label_1e87e0:
    // 0x1e87e0: 0xc62df2e8  lwc1        $f13, -0xD18($s1)
    ctx->pc = 0x1e87e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294963944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e87e4:
    // 0x1e87e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e87e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e87e8:
    // 0x1e87e8: 0xc66cf2e4  lwc1        $f12, -0xD1C($s3)
    ctx->pc = 0x1e87e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294963940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e87ec:
    // 0x1e87ec: 0xc068848  jal         func_1A2120
label_1e87f0:
    if (ctx->pc == 0x1E87F0u) {
        ctx->pc = 0x1E87F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E87ECu;
        // 0x1e87f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E87F4u;
        goto label_1e87f4;
    }
    ctx->pc = 0x1E87ECu;
    SET_GPR_U32(ctx, 31, 0x1E87F4u);
    ctx->pc = 0x1E87F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E87ECu;
    // 0x1e87f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1E87ECu, 0x1E87F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E87F4u;
label_1e87f4:
    // 0x1e87f4: 0xc6a00030  lwc1        $f0, 0x30($s5)
    ctx->pc = 0x1e87f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e87f8:
    // 0x1e87f8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1e87f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1e87fc:
    // 0x1e87fc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e87fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8800:
    // 0x1e8800: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1e8800u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1e8804:
    // 0x1e8804: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e8804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1e8808:
    // 0x1e8808: 0xc6a30360  lwc1        $f3, 0x360($s5)
    ctx->pc = 0x1e8808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e880c:
    // 0x1e880c: 0x7ac20090  lq          $v0, 0x90($s6)
    ctx->pc = 0x1e880cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 144)));
label_1e8810:
    // 0x1e8810: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e8810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e8814:
    // 0x1e8814: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e8814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e8818:
    // 0x1e8818: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e881c:
    // 0x1e881c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e881cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e8820:
    // 0x1e8820: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1e8820u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1e8824:
    // 0x1e8824: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1e8824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1e8828:
    // 0x1e8828: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1e8828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e882c:
    // 0x1e882c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1e882cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_1e8830:
    // 0x1e8830: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1e8830u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1e8834:
    // 0x1e8834: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e8834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1e8838:
    // 0x1e8838: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e8838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1e883c:
    // 0x1e883c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1e883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8840:
    // 0x1e8840: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1e8840u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e8844:
    // 0x1e8844: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1e8844u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1e8848:
    // 0x1e8848: 0x3c013d38  lui         $at, 0x3D38
    ctx->pc = 0x1e8848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15672 << 16));
label_1e884c:
    // 0x1e884c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1e884cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1e8850:
    // 0x1e8850: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e8850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e8854:
    // 0x1e8854: 0x7ae200b0  lq          $v0, 0xB0($s7)
    ctx->pc = 0x1e8854u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 176)));
label_1e8858:
    // 0x1e8858: 0xc6a40368  lwc1        $f4, 0x368($s5)
    ctx->pc = 0x1e8858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e885c:
    // 0x1e885c: 0xc6a00028  lwc1        $f0, 0x28($s5)
    ctx->pc = 0x1e885cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8860:
    // 0x1e8860: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e8860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1e8864:
    // 0x1e8864: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e8864u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e8868:
    // 0x1e8868: 0xc4a3f32c  lwc1        $f3, -0xCD4($a1)
    ctx->pc = 0x1e8868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294964012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e886c:
    // 0x1e886c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1e886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8870:
    // 0x1e8870: 0xc4c5f328  lwc1        $f5, -0xCD8($a2)
    ctx->pc = 0x1e8870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e8874:
    // 0x1e8874: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e8874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e8878:
    // 0x1e8878: 0xc46cf318  lwc1        $f12, -0xCE8($v1)
    ctx->pc = 0x1e8878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e887c:
    // 0x1e887c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1e887cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1e8880:
    // 0x1e8880: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e8880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1e8884:
    // 0x1e8884: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1e8884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e8888:
    // 0x1e8888: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e8888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1e888c:
    // 0x1e888c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1e888cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8890:
    // 0x1e8890: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1e8890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_1e8894:
    // 0x1e8894: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1e8894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e8898:
    // 0x1e8898: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1e8898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e889c:
    // 0x1e889c: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x1e889cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1e88a0:
    // 0x1e88a0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e88a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1e88a4:
    // 0x1e88a4: 0xc05e602  jal         func_179808
label_1e88a8:
    if (ctx->pc == 0x1E88A8u) {
        ctx->pc = 0x1E88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88A4u;
        // 0x1e88a8: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E88ACu;
        goto label_1e88ac;
    }
    ctx->pc = 0x1E88A4u;
    SET_GPR_U32(ctx, 31, 0x1E88ACu);
    ctx->pc = 0x1E88A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E88A4u;
    // 0x1e88a8: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1E88A4u, 0x1E88ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E88ACu;
label_1e88ac:
    // 0x1e88ac: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x1e88acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1e88b0:
    // 0x1e88b0: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x1e88b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1e88b4:
    // 0x1e88b4: 0x6ba3006f  ldl         $v1, 0x6F($sp)
    ctx->pc = 0x1e88b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1e88b8:
    // 0x1e88b8: 0x6fa30068  ldr         $v1, 0x68($sp)
    ctx->pc = 0x1e88b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1e88bc:
    // 0x1e88bc: 0xb2a20a7f  sdl         $v0, 0xA7F($s5)
    ctx->pc = 0x1e88bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 2687); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e88c0:
    // 0x1e88c0: 0xb6a20a78  sdr         $v0, 0xA78($s5)
    ctx->pc = 0x1e88c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 2680); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e88c4:
    // 0x1e88c4: 0xb2a30a87  sdl         $v1, 0xA87($s5)
    ctx->pc = 0x1e88c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 2695); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e88c8:
    // 0x1e88c8: 0xb6a30a80  sdr         $v1, 0xA80($s5)
    ctx->pc = 0x1e88c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 2688); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e88cc:
    // 0x1e88cc: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x1e88ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e88d0:
    // 0x1e88d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e88d4:
    // 0x1e88d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e88d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e88d8:
    // 0x1e88d8: 0xc05e602  jal         func_179808
label_1e88dc:
    if (ctx->pc == 0x1E88DCu) {
        ctx->pc = 0x1E88DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88D8u;
        // 0x1e88dc: 0xc44cf31c  lwc1        $f12, -0xCE4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E88E0u;
        goto label_1e88e0;
    }
    ctx->pc = 0x1E88D8u;
    SET_GPR_U32(ctx, 31, 0x1E88E0u);
    ctx->pc = 0x1E88DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E88D8u;
    // 0x1e88dc: 0xc44cf31c  lwc1        $f12, -0xCE4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1E88D8u, 0x1E88E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E88E0u;
label_1e88e0:
    // 0x1e88e0: 0x6ba60077  ldl         $a2, 0x77($sp)
    ctx->pc = 0x1e88e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1e88e4:
    // 0x1e88e4: 0x6fa60070  ldr         $a2, 0x70($sp)
    ctx->pc = 0x1e88e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1e88e8:
    // 0x1e88e8: 0x6ba7007f  ldl         $a3, 0x7F($sp)
    ctx->pc = 0x1e88e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1e88ec:
    // 0x1e88ec: 0x6fa70078  ldr         $a3, 0x78($sp)
    ctx->pc = 0x1e88ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1e88f0:
    // 0x1e88f0: 0xb3a60067  sdl         $a2, 0x67($sp)
    ctx->pc = 0x1e88f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e88f4:
    // 0x1e88f4: 0xb7a60060  sdr         $a2, 0x60($sp)
    ctx->pc = 0x1e88f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e88f8:
    // 0x1e88f8: 0xb3a7006f  sdl         $a3, 0x6F($sp)
    ctx->pc = 0x1e88f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e88fc:
    // 0x1e88fc: 0xb7a70068  sdr         $a3, 0x68($sp)
    ctx->pc = 0x1e88fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e8900:
    // 0x1e8900: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e8900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e8904:
    // 0x1e8904: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1e8904u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1e8908:
    // 0x1e8908: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1e8908u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1e890c:
    // 0x1e890c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1e890cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e8910:
    // 0x1e8910: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e8910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8914:
    // 0x1e8914: 0x6ba40067  ldl         $a0, 0x67($sp)
    ctx->pc = 0x1e8914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1e8918:
    // 0x1e8918: 0x6fa40060  ldr         $a0, 0x60($sp)
    ctx->pc = 0x1e8918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1e891c:
    // 0x1e891c: 0x6ba6006f  ldl         $a2, 0x6F($sp)
    ctx->pc = 0x1e891cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1e8920:
    // 0x1e8920: 0x6fa60068  ldr         $a2, 0x68($sp)
    ctx->pc = 0x1e8920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1e8924:
    // 0x1e8924: 0xb2a40b4f  sdl         $a0, 0xB4F($s5)
    ctx->pc = 0x1e8924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 2895); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e8928:
    // 0x1e8928: 0xb6a40b48  sdr         $a0, 0xB48($s5)
    ctx->pc = 0x1e8928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 2888); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e892c:
    // 0x1e892c: 0xb2a60b57  sdl         $a2, 0xB57($s5)
    ctx->pc = 0x1e892cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 2903); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e8930:
    // 0x1e8930: 0xb6a60b50  sdr         $a2, 0xB50($s5)
    ctx->pc = 0x1e8930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 2896); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e8934:
    // 0x1e8934: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1e8934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_1e8938:
    // 0x1e8938: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e8938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e893c:
    // 0x1e893c: 0xc460f33c  lwc1        $f0, -0xCC4($v1)
    ctx->pc = 0x1e893cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8940:
    // 0x1e8940: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e8940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8944:
    // 0x1e8944: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1e8944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8948:
    // 0x1e8948: 0xc4e3f338  lwc1        $f3, -0xCC8($a3)
    ctx->pc = 0x1e8948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294964024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e894c:
    // 0x1e894c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e894cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e8950:
    // 0x1e8950: 0xc502f300  lwc1        $f2, -0xD00($t0)
    ctx->pc = 0x1e8950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294963968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8954:
    // 0x1e8954: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1e8954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8958:
    // 0x1e8958: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e8958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1e895c:
    // 0x1e895c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e895cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1e8960:
    // 0x1e8960: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1e8960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1e8964:
    // 0x1e8964: 0xc073464  jal         func_1CD190
label_1e8968:
    if (ctx->pc == 0x1E8968u) {
        ctx->pc = 0x1E8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8964u;
        // 0x1e8968: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E896Cu;
        goto label_1e896c;
    }
    ctx->pc = 0x1E8964u;
    SET_GPR_U32(ctx, 31, 0x1E896Cu);
    ctx->pc = 0x1E8968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8964u;
    // 0x1e8968: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1E8964u, 0x1E896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E896Cu;
label_1e896c:
    // 0x1e896c: 0xc0734a0  jal         func_1CD280
label_1e8970:
    if (ctx->pc == 0x1E8970u) {
        ctx->pc = 0x1E8970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E896Cu;
        // 0x1e8970: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8974u;
        goto label_1e8974;
    }
    ctx->pc = 0x1E896Cu;
    SET_GPR_U32(ctx, 31, 0x1E8974u);
    ctx->pc = 0x1E8970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E896Cu;
    // 0x1e8970: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1E896Cu, 0x1E8974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8974u;
label_1e8974:
    // 0x1e8974: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e8974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e8978:
    // 0x1e8978: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e8978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e897c:
    // 0x1e897c: 0xc442f304  lwc1        $f2, -0xCFC($v0)
    ctx->pc = 0x1e897cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8980:
    // 0x1e8980: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1e8980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8984:
    // 0x1e8984: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1e8984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8988:
    // 0x1e8988: 0xc463f308  lwc1        $f3, -0xCF8($v1)
    ctx->pc = 0x1e8988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e898c:
    // 0x1e898c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e898cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1e8990:
    // 0x1e8990: 0x8ea20ba0  lw          $v0, 0xBA0($s5)
    ctx->pc = 0x1e8990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2976)));
label_1e8994:
    // 0x1e8994: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1e8994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1e8998:
    // 0x1e8998: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1e8998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e899c:
    // 0x1e899c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e89a0:
    if (ctx->pc == 0x1E89A0u) {
        ctx->pc = 0x1E89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E899Cu;
        // 0x1e89a0: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E89A4u;
        goto label_1e89a4;
    }
    ctx->pc = 0x1E899Cu;
    {
        const bool branch_taken_0x1e899c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E899Cu;
        // 0x1e89a0: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e899c) {
            ctx->pc = 0x1E89B0u;
            goto label_1e89b0;
        }
    }
    ctx->pc = 0x1E89A4u;
label_1e89a4:
    // 0x1e89a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e89a8:
    // 0x1e89a8: 0xc440f340  lwc1        $f0, -0xCC0($v0)
    ctx->pc = 0x1e89a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e89ac:
    // 0x1e89ac: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1e89acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1e89b0:
    // 0x1e89b0: 0x8ea20ba0  lw          $v0, 0xBA0($s5)
    ctx->pc = 0x1e89b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2976)));
label_1e89b4:
    // 0x1e89b4: 0x2e0f02d  daddu       $fp, $s7, $zero
    ctx->pc = 0x1e89b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1e89b8:
    // 0x1e89b8: 0xafb600a4  sw          $s6, 0xA4($sp)
    ctx->pc = 0x1e89b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 22));
label_1e89bc:
    // 0x1e89bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e89bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e89c0:
    // 0x1e89c0: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x1e89c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e89c4:
    // 0x1e89c4: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x1e89c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e89c8:
    // 0x1e89c8: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_1e89cc:
    if (ctx->pc == 0x1E89CCu) {
        ctx->pc = 0x1E89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89C8u;
        // 0x1e89cc: 0x26b60070  addiu       $s6, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E89D0u;
        goto label_1e89d0;
    }
    ctx->pc = 0x1E89C8u;
    {
        const bool branch_taken_0x1e89c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89C8u;
        // 0x1e89cc: 0x26b60070  addiu       $s6, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89c8) {
            ctx->pc = 0x1E8B2Cu;
            goto label_1e8b2c;
        }
    }
    ctx->pc = 0x1E89D0u;
label_1e89d0:
    // 0x1e89d0: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x1e89d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1e89d4:
    // 0x1e89d4: 0x26b10490  addiu       $s1, $s5, 0x490
    ctx->pc = 0x1e89d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1168));
label_1e89d8:
    // 0x1e89d8: 0x26b00790  addiu       $s0, $s5, 0x790
    ctx->pc = 0x1e89d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1936));
label_1e89dc:
    // 0x1e89dc: 0x0  nop
    ctx->pc = 0x1e89dcu;
    // NOP
label_1e89e0:
    // 0x1e89e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e89e4:
    // 0x1e89e4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1e89e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1e89e8:
    // 0x1e89e8: 0xc44cf320  lwc1        $f12, -0xCE0($v0)
    ctx->pc = 0x1e89e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e89ec:
    // 0x1e89ec: 0xc05e602  jal         func_179808
label_1e89f0:
    if (ctx->pc == 0x1E89F0u) {
        ctx->pc = 0x1E89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89ECu;
        // 0x1e89f0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E89F4u;
        goto label_1e89f4;
    }
    ctx->pc = 0x1E89ECu;
    SET_GPR_U32(ctx, 31, 0x1E89F4u);
    ctx->pc = 0x1E89F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E89ECu;
    // 0x1e89f0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1E89ECu, 0x1E89F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E89F4u;
label_1e89f4:
    // 0x1e89f4: 0x6ba30087  ldl         $v1, 0x87($sp)
    ctx->pc = 0x1e89f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1e89f8:
    // 0x1e89f8: 0x6fa30080  ldr         $v1, 0x80($sp)
    ctx->pc = 0x1e89f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1e89fc:
    // 0x1e89fc: 0x6ba4008f  ldl         $a0, 0x8F($sp)
    ctx->pc = 0x1e89fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1e8a00:
    // 0x1e8a00: 0x6fa40088  ldr         $a0, 0x88($sp)
    ctx->pc = 0x1e8a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1e8a04:
    // 0x1e8a04: 0xb3a30067  sdl         $v1, 0x67($sp)
    ctx->pc = 0x1e8a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e8a08:
    // 0x1e8a08: 0xb7a30060  sdr         $v1, 0x60($sp)
    ctx->pc = 0x1e8a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e8a0c:
    // 0x1e8a0c: 0xb3a4006f  sdl         $a0, 0x6F($sp)
    ctx->pc = 0x1e8a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e8a10:
    // 0x1e8a10: 0xb7a40068  sdr         $a0, 0x68($sp)
    ctx->pc = 0x1e8a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e8a14:
    // 0x1e8a14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e8a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8a18:
    // 0x1e8a18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e8a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e8a1c:
    // 0x1e8a1c: 0x6ba70067  ldl         $a3, 0x67($sp)
    ctx->pc = 0x1e8a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1e8a20:
    // 0x1e8a20: 0x6fa70060  ldr         $a3, 0x60($sp)
    ctx->pc = 0x1e8a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1e8a24:
    // 0x1e8a24: 0x6ba9006f  ldl         $t1, 0x6F($sp)
    ctx->pc = 0x1e8a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1e8a28:
    // 0x1e8a28: 0x6fa90068  ldr         $t1, 0x68($sp)
    ctx->pc = 0x1e8a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1e8a2c:
    // 0x1e8a2c: 0xb207007f  sdl         $a3, 0x7F($s0)
    ctx->pc = 0x1e8a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e8a30:
    // 0x1e8a30: 0xb6070078  sdr         $a3, 0x78($s0)
    ctx->pc = 0x1e8a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e8a34:
    // 0x1e8a34: 0xb2090087  sdl         $t1, 0x87($s0)
    ctx->pc = 0x1e8a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e8a38:
    // 0x1e8a38: 0xb6090080  sdr         $t1, 0x80($s0)
    ctx->pc = 0x1e8a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e8a3c:
    // 0x1e8a3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e8a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8a40:
    // 0x1e8a40: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e8a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1e8a44:
    // 0x1e8a44: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1e8a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e8a48:
    // 0x1e8a48: 0x60f809  jalr        $v1
label_1e8a4c:
    if (ctx->pc == 0x1E8A4Cu) {
        ctx->pc = 0x1E8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A48u;
        // 0x1e8a4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8A50u;
        goto label_1e8a50;
    }
    ctx->pc = 0x1E8A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E8A50u);
        ctx->pc = 0x1E8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A48u;
        // 0x1e8a4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8A48u, 0x1E8A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8A50u;
label_1e8a50:
    // 0x1e8a50: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1e8a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8a54:
    // 0x1e8a54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e8a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e8a58:
    // 0x1e8a58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e8a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e8a5c:
    // 0x1e8a5c: 0x84c40020  lh          $a0, 0x20($a2)
    ctx->pc = 0x1e8a5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
label_1e8a60:
    // 0x1e8a60: 0xa3a000a0  sb          $zero, 0xA0($sp)
    ctx->pc = 0x1e8a60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 0));
label_1e8a64:
    // 0x1e8a64: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x1e8a64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
label_1e8a68:
    // 0x1e8a68: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x1e8a68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
label_1e8a6c:
    // 0x1e8a6c: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x1e8a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_1e8a70:
    // 0x1e8a70: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x1e8a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1e8a74:
    // 0x1e8a74: 0x40f809  jalr        $v0
label_1e8a78:
    if (ctx->pc == 0x1E8A78u) {
        ctx->pc = 0x1E8A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A74u;
        // 0x1e8a78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8A7Cu;
        goto label_1e8a7c;
    }
    ctx->pc = 0x1E8A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E8A7Cu);
        ctx->pc = 0x1E8A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A74u;
        // 0x1e8a78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8A74u, 0x1E8A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8A7Cu;
label_1e8a7c:
    // 0x1e8a7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8a80:
    // 0x1e8a80: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1e8a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1e8a84:
    // 0x1e8a84: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e8a88:
    // 0x1e8a88: 0x40f809  jalr        $v0
label_1e8a8c:
    if (ctx->pc == 0x1E8A8Cu) {
        ctx->pc = 0x1E8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A88u;
        // 0x1e8a8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8A90u;
        goto label_1e8a90;
    }
    ctx->pc = 0x1E8A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E8A90u);
        ctx->pc = 0x1E8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A88u;
        // 0x1e8a8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8A88u, 0x1E8A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8A90u;
label_1e8a90:
    // 0x1e8a90: 0x7a0300b0  lq          $v1, 0xB0($s0)
    ctx->pc = 0x1e8a90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 176)));
label_1e8a94:
    // 0x1e8a94: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1e8a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1e8a98:
    // 0x1e8a98: 0x3c013da7  lui         $at, 0x3DA7
    ctx->pc = 0x1e8a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15783 << 16));
label_1e8a9c:
    // 0x1e8a9c: 0x3421ef9e  ori         $at, $at, 0xEF9E
    ctx->pc = 0x1e8a9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61342);
label_1e8aa0:
    // 0x1e8aa0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e8aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e8aa4:
    // 0x1e8aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e8aa8:
    // 0x1e8aa8: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x1e8aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_1e8aac:
    // 0x1e8aac: 0x261000d0  addiu       $s0, $s0, 0xD0
    ctx->pc = 0x1e8aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1e8ab0:
    // 0x1e8ab0: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1e8ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8ab4:
    // 0x1e8ab4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1e8ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8ab8:
    // 0x1e8ab8: 0xc4acf2dc  lwc1        $f12, -0xD24($a1)
    ctx->pc = 0x1e8ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294963932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e8abc:
    // 0x1e8abc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e8abcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1e8ac0:
    // 0x1e8ac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8ac4:
    // 0x1e8ac4: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x1e8ac4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_1e8ac8:
    // 0x1e8ac8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e8ac8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e8acc:
    // 0x1e8acc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e8accu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e8ad0:
    // 0x1e8ad0: 0xc068848  jal         func_1A2120
label_1e8ad4:
    if (ctx->pc == 0x1E8AD4u) {
        ctx->pc = 0x1E8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AD0u;
        // 0x1e8ad4: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8AD8u;
        goto label_1e8ad8;
    }
    ctx->pc = 0x1E8AD0u;
    SET_GPR_U32(ctx, 31, 0x1E8AD8u);
    ctx->pc = 0x1E8AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8AD0u;
    // 0x1e8ad4: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1E8AD0u, 0x1E8AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8AD8u;
label_1e8ad8:
    // 0x1e8ad8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e8adc:
    // 0x1e8adc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e8adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8ae0:
    // 0x1e8ae0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e8ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e8ae4:
    // 0x1e8ae4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e8ae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1e8ae8:
    // 0x1e8ae8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1e8ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e8aec:
    // 0x1e8aec: 0x60f809  jalr        $v1
label_1e8af0:
    if (ctx->pc == 0x1E8AF0u) {
        ctx->pc = 0x1E8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AECu;
        // 0x1e8af0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8AF4u;
        goto label_1e8af4;
    }
    ctx->pc = 0x1E8AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E8AF4u);
        ctx->pc = 0x1E8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AECu;
        // 0x1e8af0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8AECu, 0x1E8AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8AF4u;
label_1e8af4:
    // 0x1e8af4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e8af8:
    // 0x1e8af8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e8af8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1e8afc:
    // 0x1e8afc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1e8afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1e8b00:
    // 0x1e8b00: 0x60f809  jalr        $v1
label_1e8b04:
    if (ctx->pc == 0x1E8B04u) {
        ctx->pc = 0x1E8B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B00u;
        // 0x1e8b04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8B08u;
        goto label_1e8b08;
    }
    ctx->pc = 0x1E8B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E8B08u);
        ctx->pc = 0x1E8B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B00u;
        // 0x1e8b04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8B00u, 0x1E8B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8B08u;
label_1e8b08:
    // 0x1e8b08: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1e8b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1e8b0c:
    // 0x1e8b0c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1e8b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1e8b10:
    // 0x1e8b10: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1e8b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8b14:
    // 0x1e8b14: 0xc4c1f324  lwc1        $f1, -0xCDC($a2)
    ctx->pc = 0x1e8b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8b18:
    // 0x1e8b18: 0x8ea20ba0  lw          $v0, 0xBA0($s5)
    ctx->pc = 0x1e8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2976)));
label_1e8b1c:
    // 0x1e8b1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e8b1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e8b20:
    // 0x1e8b20: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1e8b20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e8b24:
    // 0x1e8b24: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
label_1e8b28:
    if (ctx->pc == 0x1E8B28u) {
        ctx->pc = 0x1E8B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B24u;
        // 0x1e8b28: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8B2Cu;
        goto label_1e8b2c;
    }
    ctx->pc = 0x1E8B24u;
    {
        const bool branch_taken_0x1e8b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B24u;
        // 0x1e8b28: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b24) {
            ctx->pc = 0x1E89E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e89e0;
        }
    }
    ctx->pc = 0x1E8B2Cu;
label_1e8b2c:
    // 0x1e8b2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e8b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e8b30:
    // 0x1e8b30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e8b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8b34:
    // 0x1e8b34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e8b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e8b38:
    // 0x1e8b38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e8b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e8b3c:
    // 0x1e8b3c: 0xc073464  jal         func_1CD190
label_1e8b40:
    if (ctx->pc == 0x1E8B40u) {
        ctx->pc = 0x1E8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B3Cu;
        // 0x1e8b40: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8B44u;
        goto label_1e8b44;
    }
    ctx->pc = 0x1E8B3Cu;
    SET_GPR_U32(ctx, 31, 0x1E8B44u);
    ctx->pc = 0x1E8B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8B3Cu;
    // 0x1e8b40: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1E8B3Cu, 0x1E8B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B44u;
label_1e8b44:
    // 0x1e8b44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e8b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e8b48:
    // 0x1e8b48: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1e8b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1e8b4c:
    // 0x1e8b4c: 0xc0734a0  jal         func_1CD280
label_1e8b50:
    if (ctx->pc == 0x1E8B50u) {
        ctx->pc = 0x1E8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B4Cu;
        // 0x1e8b50: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8B54u;
        goto label_1e8b54;
    }
    ctx->pc = 0x1E8B4Cu;
    SET_GPR_U32(ctx, 31, 0x1E8B54u);
    ctx->pc = 0x1E8B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8B4Cu;
    // 0x1e8b50: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1E8B4Cu, 0x1E8B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B54u;
label_1e8b54:
    // 0x1e8b54: 0x7aa20020  lq          $v0, 0x20($s5)
    ctx->pc = 0x1e8b54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 32)));
label_1e8b58:
    // 0x1e8b58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1e8b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1e8b5c:
    // 0x1e8b5c: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x1e8b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8b60:
    // 0x1e8b60: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e8b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e8b64:
    // 0x1e8b64: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e8b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1e8b68:
    // 0x1e8b68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e8b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8b6c:
    // 0x1e8b6c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1e8b6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1e8b70:
    // 0x1e8b70: 0x8fa700a4  lw          $a3, 0xA4($sp)
    ctx->pc = 0x1e8b70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1e8b74:
    // 0x1e8b74: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e8b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8b78:
    // 0x1e8b78: 0xc6a20360  lwc1        $f2, 0x360($s5)
    ctx->pc = 0x1e8b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8b7c:
    // 0x1e8b7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e8b7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e8b80:
    // 0x1e8b80: 0x78e20090  lq          $v0, 0x90($a3)
    ctx->pc = 0x1e8b80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 144)));
label_1e8b84:
    // 0x1e8b84: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1e8b84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e8b88:
    // 0x1e8b88: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1e8b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1e8b8c:
    // 0x1e8b8c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e8b8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1e8b90:
    // 0x1e8b90: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1e8b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_1e8b94:
    // 0x1e8b94: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e8b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1e8b98:
    // 0x1e8b98: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e8b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1e8b9c:
    // 0x1e8b9c: 0xc06e4ea  jal         func_1B93A8
label_1e8ba0:
    if (ctx->pc == 0x1E8BA0u) {
        ctx->pc = 0x1E8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B9Cu;
        // 0x1e8ba0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8BA4u;
        goto label_1e8ba4;
    }
    ctx->pc = 0x1E8B9Cu;
    SET_GPR_U32(ctx, 31, 0x1E8BA4u);
    ctx->pc = 0x1E8BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8B9Cu;
    // 0x1e8ba0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1E8B9Cu, 0x1E8BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8BA4u;
label_1e8ba4:
    // 0x1e8ba4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x1e8ba4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e8ba8:
    // 0x1e8ba8: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1e8ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1e8bac:
    // 0x1e8bac: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1e8bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8bb0:
    // 0x1e8bb0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e8bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e8bb4:
    // 0x1e8bb4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e8bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1e8bb8:
    // 0x1e8bb8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e8bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e8bbc:
    // 0x1e8bbc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e8bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1e8bc0:
    // 0x1e8bc0: 0xc525f334  lwc1        $f5, -0xCCC($t1)
    ctx->pc = 0x1e8bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294964020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e8bc4:
    // 0x1e8bc4: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x1e8bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e8bc8:
    // 0x1e8bc8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e8bcc:
    // 0x1e8bcc: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1e8bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8bd0:
    // 0x1e8bd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e8bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8bd4:
    // 0x1e8bd4: 0xc6a10028  lwc1        $f1, 0x28($s5)
    ctx->pc = 0x1e8bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8bd8:
    // 0x1e8bd8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e8bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e8bdc:
    // 0x1e8bdc: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1e8bdcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_1e8be0:
    // 0x1e8be0: 0xc6a60368  lwc1        $f6, 0x368($s5)
    ctx->pc = 0x1e8be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e8be4:
    // 0x1e8be4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e8be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e8be8:
    // 0x1e8be8: 0xc443f2f8  lwc1        $f3, -0xD08($v0)
    ctx->pc = 0x1e8be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e8bec:
    // 0x1e8bec: 0xc464f30c  lwc1        $f4, -0xCF4($v1)
    ctx->pc = 0x1e8becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e8bf0:
    // 0x1e8bf0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1e8bf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_1e8bf4:
    // 0x1e8bf4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e8bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8bf8:
    // 0x1e8bf8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e8bf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1e8bfc:
    // 0x1e8bfc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1e8bfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1e8c00:
    // 0x1e8c00: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e8c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e8c04:
    // 0x1e8c04: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x1e8c04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_1e8c08:
    // 0x1e8c08: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1e8c08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_1e8c0c:
    // 0x1e8c0c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1e8c0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_1e8c10:
    // 0x1e8c10: 0xc06e4dc  jal         func_1B9370
label_1e8c14:
    if (ctx->pc == 0x1E8C14u) {
        ctx->pc = 0x1E8C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C10u;
        // 0x1e8c14: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C18u;
        goto label_1e8c18;
    }
    ctx->pc = 0x1E8C10u;
    SET_GPR_U32(ctx, 31, 0x1E8C18u);
    ctx->pc = 0x1E8C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8C10u;
    // 0x1e8c14: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1E8C10u, 0x1E8C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C18u;
label_1e8c18:
    // 0x1e8c18: 0xc06e552  jal         func_1B9548
label_1e8c1c:
    if (ctx->pc == 0x1E8C1Cu) {
        ctx->pc = 0x1E8C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C18u;
        // 0x1e8c1c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C20u;
        goto label_1e8c20;
    }
    ctx->pc = 0x1E8C18u;
    SET_GPR_U32(ctx, 31, 0x1E8C20u);
    ctx->pc = 0x1E8C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8C18u;
    // 0x1e8c1c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1E8C18u, 0x1E8C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C20u;
label_1e8c20:
    // 0x1e8c20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1e8c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1e8c24:
    // 0x1e8c24: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e8c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e8c28:
    // 0x1e8c28: 0xc06e4ea  jal         func_1B93A8
label_1e8c2c:
    if (ctx->pc == 0x1E8C2Cu) {
        ctx->pc = 0x1E8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C28u;
        // 0x1e8c2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C30u;
        goto label_1e8c30;
    }
    ctx->pc = 0x1E8C28u;
    SET_GPR_U32(ctx, 31, 0x1E8C30u);
    ctx->pc = 0x1E8C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8C28u;
    // 0x1e8c2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1E8C28u, 0x1E8C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C30u;
label_1e8c30:
    // 0x1e8c30: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1e8c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8c34:
    // 0x1e8c34: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1e8c34u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1e8c38:
    // 0x1e8c38: 0xc6a10028  lwc1        $f1, 0x28($s5)
    ctx->pc = 0x1e8c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8c3c:
    // 0x1e8c3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e8c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e8c40:
    // 0x1e8c40: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e8c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1e8c44:
    // 0x1e8c44: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e8c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8c48:
    // 0x1e8c48: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x1e8c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e8c4c:
    // 0x1e8c4c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e8c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e8c50:
    // 0x1e8c50: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1e8c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1e8c54:
    // 0x1e8c54: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e8c54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1e8c58:
    // 0x1e8c58: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e8c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1e8c5c:
    // 0x1e8c5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e8c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e8c60:
    // 0x1e8c60: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e8c60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e8c64:
    // 0x1e8c64: 0xc545f334  lwc1        $f5, -0xCCC($t2)
    ctx->pc = 0x1e8c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294964020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e8c68:
    // 0x1e8c68: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1e8c68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1e8c6c:
    // 0x1e8c6c: 0x7ac60020  lq          $a2, 0x20($s6)
    ctx->pc = 0x1e8c6cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 22), 32)));
label_1e8c70:
    // 0x1e8c70: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1e8c70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e8c74:
    // 0x1e8c74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e8c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e8c78:
    // 0x1e8c78: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1e8c78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1e8c7c:
    // 0x1e8c7c: 0xc440f2e0  lwc1        $f0, -0xD20($v0)
    ctx->pc = 0x1e8c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8c80:
    // 0x1e8c80: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1e8c80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_1e8c84:
    // 0x1e8c84: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e8c88:
    // 0x1e8c88: 0xc443f2f4  lwc1        $f3, -0xD0C($v0)
    ctx->pc = 0x1e8c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e8c8c:
    // 0x1e8c8c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1e8c8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_1e8c90:
    // 0x1e8c90: 0x7fa60090  sq          $a2, 0x90($sp)
    ctx->pc = 0x1e8c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 6));
label_1e8c94:
    // 0x1e8c94: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1e8c94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e8c98:
    // 0x1e8c98: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x1e8c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
label_1e8c9c:
    // 0x1e8c9c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e8c9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e8ca0:
    // 0x1e8ca0: 0xc462f310  lwc1        $f2, -0xCF0($v1)
    ctx->pc = 0x1e8ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8ca4:
    // 0x1e8ca4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e8ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8ca8:
    // 0x1e8ca8: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1e8ca8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e8cac:
    // 0x1e8cac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e8cacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1e8cb0:
    // 0x1e8cb0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e8cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1e8cb4:
    // 0x1e8cb4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e8cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1e8cb8:
    // 0x1e8cb8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1e8cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e8cbc:
    // 0x1e8cbc: 0xc07a4da  jal         func_1E9368
label_1e8cc0:
    if (ctx->pc == 0x1E8CC0u) {
        ctx->pc = 0x1E8CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8CBCu;
        // 0x1e8cc0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8CC4u;
        goto label_1e8cc4;
    }
    ctx->pc = 0x1E8CBCu;
    SET_GPR_U32(ctx, 31, 0x1E8CC4u);
    ctx->pc = 0x1E8CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8CBCu;
    // 0x1e8cc0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9368u, 0x1E8CBCu, 0x1E8CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8CC4u;
label_1e8cc4:
    // 0x1e8cc4: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1e8cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1e8cc8:
    // 0x1e8cc8: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1e8cc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1e8ccc:
    // 0x1e8ccc: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1e8cccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1e8cd0:
    // 0x1e8cd0: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x1e8cd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1e8cd4:
    // 0x1e8cd4: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x1e8cd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1e8cd8:
    // 0x1e8cd8: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x1e8cd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1e8cdc:
    // 0x1e8cdc: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x1e8cdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1e8ce0:
    // 0x1e8ce0: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x1e8ce0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1e8ce4:
    // 0x1e8ce4: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x1e8ce4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1e8ce8:
    // 0x1e8ce8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1e8ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1e8cec:
    // 0x1e8cec: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x1e8cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e8cf0:
    // 0x1e8cf0: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1e8cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e8cf4:
    // 0x1e8cf4: 0x3e00008  jr          $ra
label_1e8cf8:
    if (ctx->pc == 0x1E8CF8u) {
        ctx->pc = 0x1E8CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8CF4u;
        // 0x1e8cf8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8CFCu;
        goto label_1e8cfc;
    }
    ctx->pc = 0x1E8CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8CF4u;
        // 0x1e8cf8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8CFCu;
label_1e8cfc:
    // 0x1e8cfc: 0x0  nop
    ctx->pc = 0x1e8cfcu;
    // NOP
    ctx->pc = 0x1e8d00u;
}
