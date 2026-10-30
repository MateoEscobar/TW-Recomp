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

// Function: sub_001D86A8
// Address: 0x1d86a8 - 0x1da348
void sub_001D86A8_0x1d86a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D86A8_0x1d86a8");
#endif

    switch (ctx->pc) {
        case 0x1d86a8u: goto label_1d86a8;
        case 0x1d86acu: goto label_1d86ac;
        case 0x1d86b0u: goto label_1d86b0;
        case 0x1d86b4u: goto label_1d86b4;
        case 0x1d86b8u: goto label_1d86b8;
        case 0x1d86bcu: goto label_1d86bc;
        case 0x1d86c0u: goto label_1d86c0;
        case 0x1d86c4u: goto label_1d86c4;
        case 0x1d86c8u: goto label_1d86c8;
        case 0x1d86ccu: goto label_1d86cc;
        case 0x1d86d0u: goto label_1d86d0;
        case 0x1d86d4u: goto label_1d86d4;
        case 0x1d86d8u: goto label_1d86d8;
        case 0x1d86dcu: goto label_1d86dc;
        case 0x1d86e0u: goto label_1d86e0;
        case 0x1d86e4u: goto label_1d86e4;
        case 0x1d86e8u: goto label_1d86e8;
        case 0x1d86ecu: goto label_1d86ec;
        case 0x1d86f0u: goto label_1d86f0;
        case 0x1d86f4u: goto label_1d86f4;
        case 0x1d86f8u: goto label_1d86f8;
        case 0x1d86fcu: goto label_1d86fc;
        case 0x1d8700u: goto label_1d8700;
        case 0x1d8704u: goto label_1d8704;
        case 0x1d8708u: goto label_1d8708;
        case 0x1d870cu: goto label_1d870c;
        case 0x1d8710u: goto label_1d8710;
        case 0x1d8714u: goto label_1d8714;
        case 0x1d8718u: goto label_1d8718;
        case 0x1d871cu: goto label_1d871c;
        case 0x1d8720u: goto label_1d8720;
        case 0x1d8724u: goto label_1d8724;
        case 0x1d8728u: goto label_1d8728;
        case 0x1d872cu: goto label_1d872c;
        case 0x1d8730u: goto label_1d8730;
        case 0x1d8734u: goto label_1d8734;
        case 0x1d8738u: goto label_1d8738;
        case 0x1d873cu: goto label_1d873c;
        case 0x1d8740u: goto label_1d8740;
        case 0x1d8744u: goto label_1d8744;
        case 0x1d8748u: goto label_1d8748;
        case 0x1d874cu: goto label_1d874c;
        case 0x1d8750u: goto label_1d8750;
        case 0x1d8754u: goto label_1d8754;
        case 0x1d8758u: goto label_1d8758;
        case 0x1d875cu: goto label_1d875c;
        case 0x1d8760u: goto label_1d8760;
        case 0x1d8764u: goto label_1d8764;
        case 0x1d8768u: goto label_1d8768;
        case 0x1d876cu: goto label_1d876c;
        case 0x1d8770u: goto label_1d8770;
        case 0x1d8774u: goto label_1d8774;
        case 0x1d8778u: goto label_1d8778;
        case 0x1d877cu: goto label_1d877c;
        case 0x1d8780u: goto label_1d8780;
        case 0x1d8784u: goto label_1d8784;
        case 0x1d8788u: goto label_1d8788;
        case 0x1d878cu: goto label_1d878c;
        case 0x1d8790u: goto label_1d8790;
        case 0x1d8794u: goto label_1d8794;
        case 0x1d8798u: goto label_1d8798;
        case 0x1d879cu: goto label_1d879c;
        case 0x1d87a0u: goto label_1d87a0;
        case 0x1d87a4u: goto label_1d87a4;
        case 0x1d87a8u: goto label_1d87a8;
        case 0x1d87acu: goto label_1d87ac;
        case 0x1d87b0u: goto label_1d87b0;
        case 0x1d87b4u: goto label_1d87b4;
        case 0x1d87b8u: goto label_1d87b8;
        case 0x1d87bcu: goto label_1d87bc;
        case 0x1d87c0u: goto label_1d87c0;
        case 0x1d87c4u: goto label_1d87c4;
        case 0x1d87c8u: goto label_1d87c8;
        case 0x1d87ccu: goto label_1d87cc;
        case 0x1d87d0u: goto label_1d87d0;
        case 0x1d87d4u: goto label_1d87d4;
        case 0x1d87d8u: goto label_1d87d8;
        case 0x1d87dcu: goto label_1d87dc;
        case 0x1d87e0u: goto label_1d87e0;
        case 0x1d87e4u: goto label_1d87e4;
        case 0x1d87e8u: goto label_1d87e8;
        case 0x1d87ecu: goto label_1d87ec;
        case 0x1d87f0u: goto label_1d87f0;
        case 0x1d87f4u: goto label_1d87f4;
        case 0x1d87f8u: goto label_1d87f8;
        case 0x1d87fcu: goto label_1d87fc;
        case 0x1d8800u: goto label_1d8800;
        case 0x1d8804u: goto label_1d8804;
        case 0x1d8808u: goto label_1d8808;
        case 0x1d880cu: goto label_1d880c;
        case 0x1d8810u: goto label_1d8810;
        case 0x1d8814u: goto label_1d8814;
        case 0x1d8818u: goto label_1d8818;
        case 0x1d881cu: goto label_1d881c;
        case 0x1d8820u: goto label_1d8820;
        case 0x1d8824u: goto label_1d8824;
        case 0x1d8828u: goto label_1d8828;
        case 0x1d882cu: goto label_1d882c;
        case 0x1d8830u: goto label_1d8830;
        case 0x1d8834u: goto label_1d8834;
        case 0x1d8838u: goto label_1d8838;
        case 0x1d883cu: goto label_1d883c;
        case 0x1d8840u: goto label_1d8840;
        case 0x1d8844u: goto label_1d8844;
        case 0x1d8848u: goto label_1d8848;
        case 0x1d884cu: goto label_1d884c;
        case 0x1d8850u: goto label_1d8850;
        case 0x1d8854u: goto label_1d8854;
        case 0x1d8858u: goto label_1d8858;
        case 0x1d885cu: goto label_1d885c;
        case 0x1d8860u: goto label_1d8860;
        case 0x1d8864u: goto label_1d8864;
        case 0x1d8868u: goto label_1d8868;
        case 0x1d886cu: goto label_1d886c;
        case 0x1d8870u: goto label_1d8870;
        case 0x1d8874u: goto label_1d8874;
        case 0x1d8878u: goto label_1d8878;
        case 0x1d887cu: goto label_1d887c;
        case 0x1d8880u: goto label_1d8880;
        case 0x1d8884u: goto label_1d8884;
        case 0x1d8888u: goto label_1d8888;
        case 0x1d888cu: goto label_1d888c;
        case 0x1d8890u: goto label_1d8890;
        case 0x1d8894u: goto label_1d8894;
        case 0x1d8898u: goto label_1d8898;
        case 0x1d889cu: goto label_1d889c;
        case 0x1d88a0u: goto label_1d88a0;
        case 0x1d88a4u: goto label_1d88a4;
        case 0x1d88a8u: goto label_1d88a8;
        case 0x1d88acu: goto label_1d88ac;
        case 0x1d88b0u: goto label_1d88b0;
        case 0x1d88b4u: goto label_1d88b4;
        case 0x1d88b8u: goto label_1d88b8;
        case 0x1d88bcu: goto label_1d88bc;
        case 0x1d88c0u: goto label_1d88c0;
        case 0x1d88c4u: goto label_1d88c4;
        case 0x1d88c8u: goto label_1d88c8;
        case 0x1d88ccu: goto label_1d88cc;
        case 0x1d88d0u: goto label_1d88d0;
        case 0x1d88d4u: goto label_1d88d4;
        case 0x1d88d8u: goto label_1d88d8;
        case 0x1d88dcu: goto label_1d88dc;
        case 0x1d88e0u: goto label_1d88e0;
        case 0x1d88e4u: goto label_1d88e4;
        case 0x1d88e8u: goto label_1d88e8;
        case 0x1d88ecu: goto label_1d88ec;
        case 0x1d88f0u: goto label_1d88f0;
        case 0x1d88f4u: goto label_1d88f4;
        case 0x1d88f8u: goto label_1d88f8;
        case 0x1d88fcu: goto label_1d88fc;
        case 0x1d8900u: goto label_1d8900;
        case 0x1d8904u: goto label_1d8904;
        case 0x1d8908u: goto label_1d8908;
        case 0x1d890cu: goto label_1d890c;
        case 0x1d8910u: goto label_1d8910;
        case 0x1d8914u: goto label_1d8914;
        case 0x1d8918u: goto label_1d8918;
        case 0x1d891cu: goto label_1d891c;
        case 0x1d8920u: goto label_1d8920;
        case 0x1d8924u: goto label_1d8924;
        case 0x1d8928u: goto label_1d8928;
        case 0x1d892cu: goto label_1d892c;
        case 0x1d8930u: goto label_1d8930;
        case 0x1d8934u: goto label_1d8934;
        case 0x1d8938u: goto label_1d8938;
        case 0x1d893cu: goto label_1d893c;
        case 0x1d8940u: goto label_1d8940;
        case 0x1d8944u: goto label_1d8944;
        case 0x1d8948u: goto label_1d8948;
        case 0x1d894cu: goto label_1d894c;
        case 0x1d8950u: goto label_1d8950;
        case 0x1d8954u: goto label_1d8954;
        case 0x1d8958u: goto label_1d8958;
        case 0x1d895cu: goto label_1d895c;
        case 0x1d8960u: goto label_1d8960;
        case 0x1d8964u: goto label_1d8964;
        case 0x1d8968u: goto label_1d8968;
        case 0x1d896cu: goto label_1d896c;
        case 0x1d8970u: goto label_1d8970;
        case 0x1d8974u: goto label_1d8974;
        case 0x1d8978u: goto label_1d8978;
        case 0x1d897cu: goto label_1d897c;
        case 0x1d8980u: goto label_1d8980;
        case 0x1d8984u: goto label_1d8984;
        case 0x1d8988u: goto label_1d8988;
        case 0x1d898cu: goto label_1d898c;
        case 0x1d8990u: goto label_1d8990;
        case 0x1d8994u: goto label_1d8994;
        case 0x1d8998u: goto label_1d8998;
        case 0x1d899cu: goto label_1d899c;
        case 0x1d89a0u: goto label_1d89a0;
        case 0x1d89a4u: goto label_1d89a4;
        case 0x1d89a8u: goto label_1d89a8;
        case 0x1d89acu: goto label_1d89ac;
        case 0x1d89b0u: goto label_1d89b0;
        case 0x1d89b4u: goto label_1d89b4;
        case 0x1d89b8u: goto label_1d89b8;
        case 0x1d89bcu: goto label_1d89bc;
        case 0x1d89c0u: goto label_1d89c0;
        case 0x1d89c4u: goto label_1d89c4;
        case 0x1d89c8u: goto label_1d89c8;
        case 0x1d89ccu: goto label_1d89cc;
        case 0x1d89d0u: goto label_1d89d0;
        case 0x1d89d4u: goto label_1d89d4;
        case 0x1d89d8u: goto label_1d89d8;
        case 0x1d89dcu: goto label_1d89dc;
        case 0x1d89e0u: goto label_1d89e0;
        case 0x1d89e4u: goto label_1d89e4;
        case 0x1d89e8u: goto label_1d89e8;
        case 0x1d89ecu: goto label_1d89ec;
        case 0x1d89f0u: goto label_1d89f0;
        case 0x1d89f4u: goto label_1d89f4;
        case 0x1d89f8u: goto label_1d89f8;
        case 0x1d89fcu: goto label_1d89fc;
        case 0x1d8a00u: goto label_1d8a00;
        case 0x1d8a04u: goto label_1d8a04;
        case 0x1d8a08u: goto label_1d8a08;
        case 0x1d8a0cu: goto label_1d8a0c;
        case 0x1d8a10u: goto label_1d8a10;
        case 0x1d8a14u: goto label_1d8a14;
        case 0x1d8a18u: goto label_1d8a18;
        case 0x1d8a1cu: goto label_1d8a1c;
        case 0x1d8a20u: goto label_1d8a20;
        case 0x1d8a24u: goto label_1d8a24;
        case 0x1d8a28u: goto label_1d8a28;
        case 0x1d8a2cu: goto label_1d8a2c;
        case 0x1d8a30u: goto label_1d8a30;
        case 0x1d8a34u: goto label_1d8a34;
        case 0x1d8a38u: goto label_1d8a38;
        case 0x1d8a3cu: goto label_1d8a3c;
        case 0x1d8a40u: goto label_1d8a40;
        case 0x1d8a44u: goto label_1d8a44;
        case 0x1d8a48u: goto label_1d8a48;
        case 0x1d8a4cu: goto label_1d8a4c;
        case 0x1d8a50u: goto label_1d8a50;
        case 0x1d8a54u: goto label_1d8a54;
        case 0x1d8a58u: goto label_1d8a58;
        case 0x1d8a5cu: goto label_1d8a5c;
        case 0x1d8a60u: goto label_1d8a60;
        case 0x1d8a64u: goto label_1d8a64;
        case 0x1d8a68u: goto label_1d8a68;
        case 0x1d8a6cu: goto label_1d8a6c;
        case 0x1d8a70u: goto label_1d8a70;
        case 0x1d8a74u: goto label_1d8a74;
        case 0x1d8a78u: goto label_1d8a78;
        case 0x1d8a7cu: goto label_1d8a7c;
        case 0x1d8a80u: goto label_1d8a80;
        case 0x1d8a84u: goto label_1d8a84;
        case 0x1d8a88u: goto label_1d8a88;
        case 0x1d8a8cu: goto label_1d8a8c;
        case 0x1d8a90u: goto label_1d8a90;
        case 0x1d8a94u: goto label_1d8a94;
        case 0x1d8a98u: goto label_1d8a98;
        case 0x1d8a9cu: goto label_1d8a9c;
        case 0x1d8aa0u: goto label_1d8aa0;
        case 0x1d8aa4u: goto label_1d8aa4;
        case 0x1d8aa8u: goto label_1d8aa8;
        case 0x1d8aacu: goto label_1d8aac;
        case 0x1d8ab0u: goto label_1d8ab0;
        case 0x1d8ab4u: goto label_1d8ab4;
        case 0x1d8ab8u: goto label_1d8ab8;
        case 0x1d8abcu: goto label_1d8abc;
        case 0x1d8ac0u: goto label_1d8ac0;
        case 0x1d8ac4u: goto label_1d8ac4;
        case 0x1d8ac8u: goto label_1d8ac8;
        case 0x1d8accu: goto label_1d8acc;
        case 0x1d8ad0u: goto label_1d8ad0;
        case 0x1d8ad4u: goto label_1d8ad4;
        case 0x1d8ad8u: goto label_1d8ad8;
        case 0x1d8adcu: goto label_1d8adc;
        case 0x1d8ae0u: goto label_1d8ae0;
        case 0x1d8ae4u: goto label_1d8ae4;
        case 0x1d8ae8u: goto label_1d8ae8;
        case 0x1d8aecu: goto label_1d8aec;
        case 0x1d8af0u: goto label_1d8af0;
        case 0x1d8af4u: goto label_1d8af4;
        case 0x1d8af8u: goto label_1d8af8;
        case 0x1d8afcu: goto label_1d8afc;
        case 0x1d8b00u: goto label_1d8b00;
        case 0x1d8b04u: goto label_1d8b04;
        case 0x1d8b08u: goto label_1d8b08;
        case 0x1d8b0cu: goto label_1d8b0c;
        case 0x1d8b10u: goto label_1d8b10;
        case 0x1d8b14u: goto label_1d8b14;
        case 0x1d8b18u: goto label_1d8b18;
        case 0x1d8b1cu: goto label_1d8b1c;
        case 0x1d8b20u: goto label_1d8b20;
        case 0x1d8b24u: goto label_1d8b24;
        case 0x1d8b28u: goto label_1d8b28;
        case 0x1d8b2cu: goto label_1d8b2c;
        case 0x1d8b30u: goto label_1d8b30;
        case 0x1d8b34u: goto label_1d8b34;
        case 0x1d8b38u: goto label_1d8b38;
        case 0x1d8b3cu: goto label_1d8b3c;
        case 0x1d8b40u: goto label_1d8b40;
        case 0x1d8b44u: goto label_1d8b44;
        case 0x1d8b48u: goto label_1d8b48;
        case 0x1d8b4cu: goto label_1d8b4c;
        case 0x1d8b50u: goto label_1d8b50;
        case 0x1d8b54u: goto label_1d8b54;
        case 0x1d8b58u: goto label_1d8b58;
        case 0x1d8b5cu: goto label_1d8b5c;
        case 0x1d8b60u: goto label_1d8b60;
        case 0x1d8b64u: goto label_1d8b64;
        case 0x1d8b68u: goto label_1d8b68;
        case 0x1d8b6cu: goto label_1d8b6c;
        case 0x1d8b70u: goto label_1d8b70;
        case 0x1d8b74u: goto label_1d8b74;
        case 0x1d8b78u: goto label_1d8b78;
        case 0x1d8b7cu: goto label_1d8b7c;
        case 0x1d8b80u: goto label_1d8b80;
        case 0x1d8b84u: goto label_1d8b84;
        case 0x1d8b88u: goto label_1d8b88;
        case 0x1d8b8cu: goto label_1d8b8c;
        case 0x1d8b90u: goto label_1d8b90;
        case 0x1d8b94u: goto label_1d8b94;
        case 0x1d8b98u: goto label_1d8b98;
        case 0x1d8b9cu: goto label_1d8b9c;
        case 0x1d8ba0u: goto label_1d8ba0;
        case 0x1d8ba4u: goto label_1d8ba4;
        case 0x1d8ba8u: goto label_1d8ba8;
        case 0x1d8bacu: goto label_1d8bac;
        case 0x1d8bb0u: goto label_1d8bb0;
        case 0x1d8bb4u: goto label_1d8bb4;
        case 0x1d8bb8u: goto label_1d8bb8;
        case 0x1d8bbcu: goto label_1d8bbc;
        case 0x1d8bc0u: goto label_1d8bc0;
        case 0x1d8bc4u: goto label_1d8bc4;
        case 0x1d8bc8u: goto label_1d8bc8;
        case 0x1d8bccu: goto label_1d8bcc;
        case 0x1d8bd0u: goto label_1d8bd0;
        case 0x1d8bd4u: goto label_1d8bd4;
        case 0x1d8bd8u: goto label_1d8bd8;
        case 0x1d8bdcu: goto label_1d8bdc;
        case 0x1d8be0u: goto label_1d8be0;
        case 0x1d8be4u: goto label_1d8be4;
        case 0x1d8be8u: goto label_1d8be8;
        case 0x1d8becu: goto label_1d8bec;
        case 0x1d8bf0u: goto label_1d8bf0;
        case 0x1d8bf4u: goto label_1d8bf4;
        case 0x1d8bf8u: goto label_1d8bf8;
        case 0x1d8bfcu: goto label_1d8bfc;
        case 0x1d8c00u: goto label_1d8c00;
        case 0x1d8c04u: goto label_1d8c04;
        case 0x1d8c08u: goto label_1d8c08;
        case 0x1d8c0cu: goto label_1d8c0c;
        case 0x1d8c10u: goto label_1d8c10;
        case 0x1d8c14u: goto label_1d8c14;
        case 0x1d8c18u: goto label_1d8c18;
        case 0x1d8c1cu: goto label_1d8c1c;
        case 0x1d8c20u: goto label_1d8c20;
        case 0x1d8c24u: goto label_1d8c24;
        case 0x1d8c28u: goto label_1d8c28;
        case 0x1d8c2cu: goto label_1d8c2c;
        case 0x1d8c30u: goto label_1d8c30;
        case 0x1d8c34u: goto label_1d8c34;
        case 0x1d8c38u: goto label_1d8c38;
        case 0x1d8c3cu: goto label_1d8c3c;
        case 0x1d8c40u: goto label_1d8c40;
        case 0x1d8c44u: goto label_1d8c44;
        case 0x1d8c48u: goto label_1d8c48;
        case 0x1d8c4cu: goto label_1d8c4c;
        case 0x1d8c50u: goto label_1d8c50;
        case 0x1d8c54u: goto label_1d8c54;
        case 0x1d8c58u: goto label_1d8c58;
        case 0x1d8c5cu: goto label_1d8c5c;
        case 0x1d8c60u: goto label_1d8c60;
        case 0x1d8c64u: goto label_1d8c64;
        case 0x1d8c68u: goto label_1d8c68;
        case 0x1d8c6cu: goto label_1d8c6c;
        case 0x1d8c70u: goto label_1d8c70;
        case 0x1d8c74u: goto label_1d8c74;
        case 0x1d8c78u: goto label_1d8c78;
        case 0x1d8c7cu: goto label_1d8c7c;
        case 0x1d8c80u: goto label_1d8c80;
        case 0x1d8c84u: goto label_1d8c84;
        case 0x1d8c88u: goto label_1d8c88;
        case 0x1d8c8cu: goto label_1d8c8c;
        case 0x1d8c90u: goto label_1d8c90;
        case 0x1d8c94u: goto label_1d8c94;
        case 0x1d8c98u: goto label_1d8c98;
        case 0x1d8c9cu: goto label_1d8c9c;
        case 0x1d8ca0u: goto label_1d8ca0;
        case 0x1d8ca4u: goto label_1d8ca4;
        case 0x1d8ca8u: goto label_1d8ca8;
        case 0x1d8cacu: goto label_1d8cac;
        case 0x1d8cb0u: goto label_1d8cb0;
        case 0x1d8cb4u: goto label_1d8cb4;
        case 0x1d8cb8u: goto label_1d8cb8;
        case 0x1d8cbcu: goto label_1d8cbc;
        case 0x1d8cc0u: goto label_1d8cc0;
        case 0x1d8cc4u: goto label_1d8cc4;
        case 0x1d8cc8u: goto label_1d8cc8;
        case 0x1d8cccu: goto label_1d8ccc;
        case 0x1d8cd0u: goto label_1d8cd0;
        case 0x1d8cd4u: goto label_1d8cd4;
        case 0x1d8cd8u: goto label_1d8cd8;
        case 0x1d8cdcu: goto label_1d8cdc;
        case 0x1d8ce0u: goto label_1d8ce0;
        case 0x1d8ce4u: goto label_1d8ce4;
        case 0x1d8ce8u: goto label_1d8ce8;
        case 0x1d8cecu: goto label_1d8cec;
        case 0x1d8cf0u: goto label_1d8cf0;
        case 0x1d8cf4u: goto label_1d8cf4;
        case 0x1d8cf8u: goto label_1d8cf8;
        case 0x1d8cfcu: goto label_1d8cfc;
        case 0x1d8d00u: goto label_1d8d00;
        case 0x1d8d04u: goto label_1d8d04;
        case 0x1d8d08u: goto label_1d8d08;
        case 0x1d8d0cu: goto label_1d8d0c;
        case 0x1d8d10u: goto label_1d8d10;
        case 0x1d8d14u: goto label_1d8d14;
        case 0x1d8d18u: goto label_1d8d18;
        case 0x1d8d1cu: goto label_1d8d1c;
        case 0x1d8d20u: goto label_1d8d20;
        case 0x1d8d24u: goto label_1d8d24;
        case 0x1d8d28u: goto label_1d8d28;
        case 0x1d8d2cu: goto label_1d8d2c;
        case 0x1d8d30u: goto label_1d8d30;
        case 0x1d8d34u: goto label_1d8d34;
        case 0x1d8d38u: goto label_1d8d38;
        case 0x1d8d3cu: goto label_1d8d3c;
        case 0x1d8d40u: goto label_1d8d40;
        case 0x1d8d44u: goto label_1d8d44;
        case 0x1d8d48u: goto label_1d8d48;
        case 0x1d8d4cu: goto label_1d8d4c;
        case 0x1d8d50u: goto label_1d8d50;
        case 0x1d8d54u: goto label_1d8d54;
        case 0x1d8d58u: goto label_1d8d58;
        case 0x1d8d5cu: goto label_1d8d5c;
        case 0x1d8d60u: goto label_1d8d60;
        case 0x1d8d64u: goto label_1d8d64;
        case 0x1d8d68u: goto label_1d8d68;
        case 0x1d8d6cu: goto label_1d8d6c;
        case 0x1d8d70u: goto label_1d8d70;
        case 0x1d8d74u: goto label_1d8d74;
        case 0x1d8d78u: goto label_1d8d78;
        case 0x1d8d7cu: goto label_1d8d7c;
        case 0x1d8d80u: goto label_1d8d80;
        case 0x1d8d84u: goto label_1d8d84;
        case 0x1d8d88u: goto label_1d8d88;
        case 0x1d8d8cu: goto label_1d8d8c;
        case 0x1d8d90u: goto label_1d8d90;
        case 0x1d8d94u: goto label_1d8d94;
        case 0x1d8d98u: goto label_1d8d98;
        case 0x1d8d9cu: goto label_1d8d9c;
        case 0x1d8da0u: goto label_1d8da0;
        case 0x1d8da4u: goto label_1d8da4;
        case 0x1d8da8u: goto label_1d8da8;
        case 0x1d8dacu: goto label_1d8dac;
        case 0x1d8db0u: goto label_1d8db0;
        case 0x1d8db4u: goto label_1d8db4;
        case 0x1d8db8u: goto label_1d8db8;
        case 0x1d8dbcu: goto label_1d8dbc;
        case 0x1d8dc0u: goto label_1d8dc0;
        case 0x1d8dc4u: goto label_1d8dc4;
        case 0x1d8dc8u: goto label_1d8dc8;
        case 0x1d8dccu: goto label_1d8dcc;
        case 0x1d8dd0u: goto label_1d8dd0;
        case 0x1d8dd4u: goto label_1d8dd4;
        case 0x1d8dd8u: goto label_1d8dd8;
        case 0x1d8ddcu: goto label_1d8ddc;
        case 0x1d8de0u: goto label_1d8de0;
        case 0x1d8de4u: goto label_1d8de4;
        case 0x1d8de8u: goto label_1d8de8;
        case 0x1d8decu: goto label_1d8dec;
        case 0x1d8df0u: goto label_1d8df0;
        case 0x1d8df4u: goto label_1d8df4;
        case 0x1d8df8u: goto label_1d8df8;
        case 0x1d8dfcu: goto label_1d8dfc;
        case 0x1d8e00u: goto label_1d8e00;
        case 0x1d8e04u: goto label_1d8e04;
        case 0x1d8e08u: goto label_1d8e08;
        case 0x1d8e0cu: goto label_1d8e0c;
        case 0x1d8e10u: goto label_1d8e10;
        case 0x1d8e14u: goto label_1d8e14;
        case 0x1d8e18u: goto label_1d8e18;
        case 0x1d8e1cu: goto label_1d8e1c;
        case 0x1d8e20u: goto label_1d8e20;
        case 0x1d8e24u: goto label_1d8e24;
        case 0x1d8e28u: goto label_1d8e28;
        case 0x1d8e2cu: goto label_1d8e2c;
        case 0x1d8e30u: goto label_1d8e30;
        case 0x1d8e34u: goto label_1d8e34;
        case 0x1d8e38u: goto label_1d8e38;
        case 0x1d8e3cu: goto label_1d8e3c;
        case 0x1d8e40u: goto label_1d8e40;
        case 0x1d8e44u: goto label_1d8e44;
        case 0x1d8e48u: goto label_1d8e48;
        case 0x1d8e4cu: goto label_1d8e4c;
        case 0x1d8e50u: goto label_1d8e50;
        case 0x1d8e54u: goto label_1d8e54;
        case 0x1d8e58u: goto label_1d8e58;
        case 0x1d8e5cu: goto label_1d8e5c;
        case 0x1d8e60u: goto label_1d8e60;
        case 0x1d8e64u: goto label_1d8e64;
        case 0x1d8e68u: goto label_1d8e68;
        case 0x1d8e6cu: goto label_1d8e6c;
        case 0x1d8e70u: goto label_1d8e70;
        case 0x1d8e74u: goto label_1d8e74;
        case 0x1d8e78u: goto label_1d8e78;
        case 0x1d8e7cu: goto label_1d8e7c;
        case 0x1d8e80u: goto label_1d8e80;
        case 0x1d8e84u: goto label_1d8e84;
        case 0x1d8e88u: goto label_1d8e88;
        case 0x1d8e8cu: goto label_1d8e8c;
        case 0x1d8e90u: goto label_1d8e90;
        case 0x1d8e94u: goto label_1d8e94;
        case 0x1d8e98u: goto label_1d8e98;
        case 0x1d8e9cu: goto label_1d8e9c;
        case 0x1d8ea0u: goto label_1d8ea0;
        case 0x1d8ea4u: goto label_1d8ea4;
        case 0x1d8ea8u: goto label_1d8ea8;
        case 0x1d8eacu: goto label_1d8eac;
        case 0x1d8eb0u: goto label_1d8eb0;
        case 0x1d8eb4u: goto label_1d8eb4;
        case 0x1d8eb8u: goto label_1d8eb8;
        case 0x1d8ebcu: goto label_1d8ebc;
        case 0x1d8ec0u: goto label_1d8ec0;
        case 0x1d8ec4u: goto label_1d8ec4;
        case 0x1d8ec8u: goto label_1d8ec8;
        case 0x1d8eccu: goto label_1d8ecc;
        case 0x1d8ed0u: goto label_1d8ed0;
        case 0x1d8ed4u: goto label_1d8ed4;
        case 0x1d8ed8u: goto label_1d8ed8;
        case 0x1d8edcu: goto label_1d8edc;
        case 0x1d8ee0u: goto label_1d8ee0;
        case 0x1d8ee4u: goto label_1d8ee4;
        case 0x1d8ee8u: goto label_1d8ee8;
        case 0x1d8eecu: goto label_1d8eec;
        case 0x1d8ef0u: goto label_1d8ef0;
        case 0x1d8ef4u: goto label_1d8ef4;
        case 0x1d8ef8u: goto label_1d8ef8;
        case 0x1d8efcu: goto label_1d8efc;
        case 0x1d8f00u: goto label_1d8f00;
        case 0x1d8f04u: goto label_1d8f04;
        case 0x1d8f08u: goto label_1d8f08;
        case 0x1d8f0cu: goto label_1d8f0c;
        case 0x1d8f10u: goto label_1d8f10;
        case 0x1d8f14u: goto label_1d8f14;
        case 0x1d8f18u: goto label_1d8f18;
        case 0x1d8f1cu: goto label_1d8f1c;
        case 0x1d8f20u: goto label_1d8f20;
        case 0x1d8f24u: goto label_1d8f24;
        case 0x1d8f28u: goto label_1d8f28;
        case 0x1d8f2cu: goto label_1d8f2c;
        case 0x1d8f30u: goto label_1d8f30;
        case 0x1d8f34u: goto label_1d8f34;
        case 0x1d8f38u: goto label_1d8f38;
        case 0x1d8f3cu: goto label_1d8f3c;
        case 0x1d8f40u: goto label_1d8f40;
        case 0x1d8f44u: goto label_1d8f44;
        case 0x1d8f48u: goto label_1d8f48;
        case 0x1d8f4cu: goto label_1d8f4c;
        case 0x1d8f50u: goto label_1d8f50;
        case 0x1d8f54u: goto label_1d8f54;
        case 0x1d8f58u: goto label_1d8f58;
        case 0x1d8f5cu: goto label_1d8f5c;
        case 0x1d8f60u: goto label_1d8f60;
        case 0x1d8f64u: goto label_1d8f64;
        case 0x1d8f68u: goto label_1d8f68;
        case 0x1d8f6cu: goto label_1d8f6c;
        case 0x1d8f70u: goto label_1d8f70;
        case 0x1d8f74u: goto label_1d8f74;
        case 0x1d8f78u: goto label_1d8f78;
        case 0x1d8f7cu: goto label_1d8f7c;
        case 0x1d8f80u: goto label_1d8f80;
        case 0x1d8f84u: goto label_1d8f84;
        case 0x1d8f88u: goto label_1d8f88;
        case 0x1d8f8cu: goto label_1d8f8c;
        case 0x1d8f90u: goto label_1d8f90;
        case 0x1d8f94u: goto label_1d8f94;
        case 0x1d8f98u: goto label_1d8f98;
        case 0x1d8f9cu: goto label_1d8f9c;
        case 0x1d8fa0u: goto label_1d8fa0;
        case 0x1d8fa4u: goto label_1d8fa4;
        case 0x1d8fa8u: goto label_1d8fa8;
        case 0x1d8facu: goto label_1d8fac;
        case 0x1d8fb0u: goto label_1d8fb0;
        case 0x1d8fb4u: goto label_1d8fb4;
        case 0x1d8fb8u: goto label_1d8fb8;
        case 0x1d8fbcu: goto label_1d8fbc;
        case 0x1d8fc0u: goto label_1d8fc0;
        case 0x1d8fc4u: goto label_1d8fc4;
        case 0x1d8fc8u: goto label_1d8fc8;
        case 0x1d8fccu: goto label_1d8fcc;
        case 0x1d8fd0u: goto label_1d8fd0;
        case 0x1d8fd4u: goto label_1d8fd4;
        case 0x1d8fd8u: goto label_1d8fd8;
        case 0x1d8fdcu: goto label_1d8fdc;
        case 0x1d8fe0u: goto label_1d8fe0;
        case 0x1d8fe4u: goto label_1d8fe4;
        case 0x1d8fe8u: goto label_1d8fe8;
        case 0x1d8fecu: goto label_1d8fec;
        case 0x1d8ff0u: goto label_1d8ff0;
        case 0x1d8ff4u: goto label_1d8ff4;
        case 0x1d8ff8u: goto label_1d8ff8;
        case 0x1d8ffcu: goto label_1d8ffc;
        case 0x1d9000u: goto label_1d9000;
        case 0x1d9004u: goto label_1d9004;
        case 0x1d9008u: goto label_1d9008;
        case 0x1d900cu: goto label_1d900c;
        case 0x1d9010u: goto label_1d9010;
        case 0x1d9014u: goto label_1d9014;
        case 0x1d9018u: goto label_1d9018;
        case 0x1d901cu: goto label_1d901c;
        case 0x1d9020u: goto label_1d9020;
        case 0x1d9024u: goto label_1d9024;
        case 0x1d9028u: goto label_1d9028;
        case 0x1d902cu: goto label_1d902c;
        case 0x1d9030u: goto label_1d9030;
        case 0x1d9034u: goto label_1d9034;
        case 0x1d9038u: goto label_1d9038;
        case 0x1d903cu: goto label_1d903c;
        case 0x1d9040u: goto label_1d9040;
        case 0x1d9044u: goto label_1d9044;
        case 0x1d9048u: goto label_1d9048;
        case 0x1d904cu: goto label_1d904c;
        case 0x1d9050u: goto label_1d9050;
        case 0x1d9054u: goto label_1d9054;
        case 0x1d9058u: goto label_1d9058;
        case 0x1d905cu: goto label_1d905c;
        case 0x1d9060u: goto label_1d9060;
        case 0x1d9064u: goto label_1d9064;
        case 0x1d9068u: goto label_1d9068;
        case 0x1d906cu: goto label_1d906c;
        case 0x1d9070u: goto label_1d9070;
        case 0x1d9074u: goto label_1d9074;
        case 0x1d9078u: goto label_1d9078;
        case 0x1d907cu: goto label_1d907c;
        case 0x1d9080u: goto label_1d9080;
        case 0x1d9084u: goto label_1d9084;
        case 0x1d9088u: goto label_1d9088;
        case 0x1d908cu: goto label_1d908c;
        case 0x1d9090u: goto label_1d9090;
        case 0x1d9094u: goto label_1d9094;
        case 0x1d9098u: goto label_1d9098;
        case 0x1d909cu: goto label_1d909c;
        case 0x1d90a0u: goto label_1d90a0;
        case 0x1d90a4u: goto label_1d90a4;
        case 0x1d90a8u: goto label_1d90a8;
        case 0x1d90acu: goto label_1d90ac;
        case 0x1d90b0u: goto label_1d90b0;
        case 0x1d90b4u: goto label_1d90b4;
        case 0x1d90b8u: goto label_1d90b8;
        case 0x1d90bcu: goto label_1d90bc;
        case 0x1d90c0u: goto label_1d90c0;
        case 0x1d90c4u: goto label_1d90c4;
        case 0x1d90c8u: goto label_1d90c8;
        case 0x1d90ccu: goto label_1d90cc;
        case 0x1d90d0u: goto label_1d90d0;
        case 0x1d90d4u: goto label_1d90d4;
        case 0x1d90d8u: goto label_1d90d8;
        case 0x1d90dcu: goto label_1d90dc;
        case 0x1d90e0u: goto label_1d90e0;
        case 0x1d90e4u: goto label_1d90e4;
        case 0x1d90e8u: goto label_1d90e8;
        case 0x1d90ecu: goto label_1d90ec;
        case 0x1d90f0u: goto label_1d90f0;
        case 0x1d90f4u: goto label_1d90f4;
        case 0x1d90f8u: goto label_1d90f8;
        case 0x1d90fcu: goto label_1d90fc;
        case 0x1d9100u: goto label_1d9100;
        case 0x1d9104u: goto label_1d9104;
        case 0x1d9108u: goto label_1d9108;
        case 0x1d910cu: goto label_1d910c;
        case 0x1d9110u: goto label_1d9110;
        case 0x1d9114u: goto label_1d9114;
        case 0x1d9118u: goto label_1d9118;
        case 0x1d911cu: goto label_1d911c;
        case 0x1d9120u: goto label_1d9120;
        case 0x1d9124u: goto label_1d9124;
        case 0x1d9128u: goto label_1d9128;
        case 0x1d912cu: goto label_1d912c;
        case 0x1d9130u: goto label_1d9130;
        case 0x1d9134u: goto label_1d9134;
        case 0x1d9138u: goto label_1d9138;
        case 0x1d913cu: goto label_1d913c;
        case 0x1d9140u: goto label_1d9140;
        case 0x1d9144u: goto label_1d9144;
        case 0x1d9148u: goto label_1d9148;
        case 0x1d914cu: goto label_1d914c;
        case 0x1d9150u: goto label_1d9150;
        case 0x1d9154u: goto label_1d9154;
        case 0x1d9158u: goto label_1d9158;
        case 0x1d915cu: goto label_1d915c;
        case 0x1d9160u: goto label_1d9160;
        case 0x1d9164u: goto label_1d9164;
        case 0x1d9168u: goto label_1d9168;
        case 0x1d916cu: goto label_1d916c;
        case 0x1d9170u: goto label_1d9170;
        case 0x1d9174u: goto label_1d9174;
        case 0x1d9178u: goto label_1d9178;
        case 0x1d917cu: goto label_1d917c;
        case 0x1d9180u: goto label_1d9180;
        case 0x1d9184u: goto label_1d9184;
        case 0x1d9188u: goto label_1d9188;
        case 0x1d918cu: goto label_1d918c;
        case 0x1d9190u: goto label_1d9190;
        case 0x1d9194u: goto label_1d9194;
        case 0x1d9198u: goto label_1d9198;
        case 0x1d919cu: goto label_1d919c;
        case 0x1d91a0u: goto label_1d91a0;
        case 0x1d91a4u: goto label_1d91a4;
        case 0x1d91a8u: goto label_1d91a8;
        case 0x1d91acu: goto label_1d91ac;
        case 0x1d91b0u: goto label_1d91b0;
        case 0x1d91b4u: goto label_1d91b4;
        case 0x1d91b8u: goto label_1d91b8;
        case 0x1d91bcu: goto label_1d91bc;
        case 0x1d91c0u: goto label_1d91c0;
        case 0x1d91c4u: goto label_1d91c4;
        case 0x1d91c8u: goto label_1d91c8;
        case 0x1d91ccu: goto label_1d91cc;
        case 0x1d91d0u: goto label_1d91d0;
        case 0x1d91d4u: goto label_1d91d4;
        case 0x1d91d8u: goto label_1d91d8;
        case 0x1d91dcu: goto label_1d91dc;
        case 0x1d91e0u: goto label_1d91e0;
        case 0x1d91e4u: goto label_1d91e4;
        case 0x1d91e8u: goto label_1d91e8;
        case 0x1d91ecu: goto label_1d91ec;
        case 0x1d91f0u: goto label_1d91f0;
        case 0x1d91f4u: goto label_1d91f4;
        case 0x1d91f8u: goto label_1d91f8;
        case 0x1d91fcu: goto label_1d91fc;
        case 0x1d9200u: goto label_1d9200;
        case 0x1d9204u: goto label_1d9204;
        case 0x1d9208u: goto label_1d9208;
        case 0x1d920cu: goto label_1d920c;
        case 0x1d9210u: goto label_1d9210;
        case 0x1d9214u: goto label_1d9214;
        case 0x1d9218u: goto label_1d9218;
        case 0x1d921cu: goto label_1d921c;
        case 0x1d9220u: goto label_1d9220;
        case 0x1d9224u: goto label_1d9224;
        case 0x1d9228u: goto label_1d9228;
        case 0x1d922cu: goto label_1d922c;
        case 0x1d9230u: goto label_1d9230;
        case 0x1d9234u: goto label_1d9234;
        case 0x1d9238u: goto label_1d9238;
        case 0x1d923cu: goto label_1d923c;
        case 0x1d9240u: goto label_1d9240;
        case 0x1d9244u: goto label_1d9244;
        case 0x1d9248u: goto label_1d9248;
        case 0x1d924cu: goto label_1d924c;
        case 0x1d9250u: goto label_1d9250;
        case 0x1d9254u: goto label_1d9254;
        case 0x1d9258u: goto label_1d9258;
        case 0x1d925cu: goto label_1d925c;
        case 0x1d9260u: goto label_1d9260;
        case 0x1d9264u: goto label_1d9264;
        case 0x1d9268u: goto label_1d9268;
        case 0x1d926cu: goto label_1d926c;
        case 0x1d9270u: goto label_1d9270;
        case 0x1d9274u: goto label_1d9274;
        case 0x1d9278u: goto label_1d9278;
        case 0x1d927cu: goto label_1d927c;
        case 0x1d9280u: goto label_1d9280;
        case 0x1d9284u: goto label_1d9284;
        case 0x1d9288u: goto label_1d9288;
        case 0x1d928cu: goto label_1d928c;
        case 0x1d9290u: goto label_1d9290;
        case 0x1d9294u: goto label_1d9294;
        case 0x1d9298u: goto label_1d9298;
        case 0x1d929cu: goto label_1d929c;
        case 0x1d92a0u: goto label_1d92a0;
        case 0x1d92a4u: goto label_1d92a4;
        case 0x1d92a8u: goto label_1d92a8;
        case 0x1d92acu: goto label_1d92ac;
        case 0x1d92b0u: goto label_1d92b0;
        case 0x1d92b4u: goto label_1d92b4;
        case 0x1d92b8u: goto label_1d92b8;
        case 0x1d92bcu: goto label_1d92bc;
        case 0x1d92c0u: goto label_1d92c0;
        case 0x1d92c4u: goto label_1d92c4;
        case 0x1d92c8u: goto label_1d92c8;
        case 0x1d92ccu: goto label_1d92cc;
        case 0x1d92d0u: goto label_1d92d0;
        case 0x1d92d4u: goto label_1d92d4;
        case 0x1d92d8u: goto label_1d92d8;
        case 0x1d92dcu: goto label_1d92dc;
        case 0x1d92e0u: goto label_1d92e0;
        case 0x1d92e4u: goto label_1d92e4;
        case 0x1d92e8u: goto label_1d92e8;
        case 0x1d92ecu: goto label_1d92ec;
        case 0x1d92f0u: goto label_1d92f0;
        case 0x1d92f4u: goto label_1d92f4;
        case 0x1d92f8u: goto label_1d92f8;
        case 0x1d92fcu: goto label_1d92fc;
        case 0x1d9300u: goto label_1d9300;
        case 0x1d9304u: goto label_1d9304;
        case 0x1d9308u: goto label_1d9308;
        case 0x1d930cu: goto label_1d930c;
        case 0x1d9310u: goto label_1d9310;
        case 0x1d9314u: goto label_1d9314;
        case 0x1d9318u: goto label_1d9318;
        case 0x1d931cu: goto label_1d931c;
        case 0x1d9320u: goto label_1d9320;
        case 0x1d9324u: goto label_1d9324;
        case 0x1d9328u: goto label_1d9328;
        case 0x1d932cu: goto label_1d932c;
        case 0x1d9330u: goto label_1d9330;
        case 0x1d9334u: goto label_1d9334;
        case 0x1d9338u: goto label_1d9338;
        case 0x1d933cu: goto label_1d933c;
        case 0x1d9340u: goto label_1d9340;
        case 0x1d9344u: goto label_1d9344;
        case 0x1d9348u: goto label_1d9348;
        case 0x1d934cu: goto label_1d934c;
        case 0x1d9350u: goto label_1d9350;
        case 0x1d9354u: goto label_1d9354;
        case 0x1d9358u: goto label_1d9358;
        case 0x1d935cu: goto label_1d935c;
        case 0x1d9360u: goto label_1d9360;
        case 0x1d9364u: goto label_1d9364;
        case 0x1d9368u: goto label_1d9368;
        case 0x1d936cu: goto label_1d936c;
        case 0x1d9370u: goto label_1d9370;
        case 0x1d9374u: goto label_1d9374;
        case 0x1d9378u: goto label_1d9378;
        case 0x1d937cu: goto label_1d937c;
        case 0x1d9380u: goto label_1d9380;
        case 0x1d9384u: goto label_1d9384;
        case 0x1d9388u: goto label_1d9388;
        case 0x1d938cu: goto label_1d938c;
        case 0x1d9390u: goto label_1d9390;
        case 0x1d9394u: goto label_1d9394;
        case 0x1d9398u: goto label_1d9398;
        case 0x1d939cu: goto label_1d939c;
        case 0x1d93a0u: goto label_1d93a0;
        case 0x1d93a4u: goto label_1d93a4;
        case 0x1d93a8u: goto label_1d93a8;
        case 0x1d93acu: goto label_1d93ac;
        case 0x1d93b0u: goto label_1d93b0;
        case 0x1d93b4u: goto label_1d93b4;
        case 0x1d93b8u: goto label_1d93b8;
        case 0x1d93bcu: goto label_1d93bc;
        case 0x1d93c0u: goto label_1d93c0;
        case 0x1d93c4u: goto label_1d93c4;
        case 0x1d93c8u: goto label_1d93c8;
        case 0x1d93ccu: goto label_1d93cc;
        case 0x1d93d0u: goto label_1d93d0;
        case 0x1d93d4u: goto label_1d93d4;
        case 0x1d93d8u: goto label_1d93d8;
        case 0x1d93dcu: goto label_1d93dc;
        case 0x1d93e0u: goto label_1d93e0;
        case 0x1d93e4u: goto label_1d93e4;
        case 0x1d93e8u: goto label_1d93e8;
        case 0x1d93ecu: goto label_1d93ec;
        case 0x1d93f0u: goto label_1d93f0;
        case 0x1d93f4u: goto label_1d93f4;
        case 0x1d93f8u: goto label_1d93f8;
        case 0x1d93fcu: goto label_1d93fc;
        case 0x1d9400u: goto label_1d9400;
        case 0x1d9404u: goto label_1d9404;
        case 0x1d9408u: goto label_1d9408;
        case 0x1d940cu: goto label_1d940c;
        case 0x1d9410u: goto label_1d9410;
        case 0x1d9414u: goto label_1d9414;
        case 0x1d9418u: goto label_1d9418;
        case 0x1d941cu: goto label_1d941c;
        case 0x1d9420u: goto label_1d9420;
        case 0x1d9424u: goto label_1d9424;
        case 0x1d9428u: goto label_1d9428;
        case 0x1d942cu: goto label_1d942c;
        case 0x1d9430u: goto label_1d9430;
        case 0x1d9434u: goto label_1d9434;
        case 0x1d9438u: goto label_1d9438;
        case 0x1d943cu: goto label_1d943c;
        case 0x1d9440u: goto label_1d9440;
        case 0x1d9444u: goto label_1d9444;
        case 0x1d9448u: goto label_1d9448;
        case 0x1d944cu: goto label_1d944c;
        case 0x1d9450u: goto label_1d9450;
        case 0x1d9454u: goto label_1d9454;
        case 0x1d9458u: goto label_1d9458;
        case 0x1d945cu: goto label_1d945c;
        case 0x1d9460u: goto label_1d9460;
        case 0x1d9464u: goto label_1d9464;
        case 0x1d9468u: goto label_1d9468;
        case 0x1d946cu: goto label_1d946c;
        case 0x1d9470u: goto label_1d9470;
        case 0x1d9474u: goto label_1d9474;
        case 0x1d9478u: goto label_1d9478;
        case 0x1d947cu: goto label_1d947c;
        case 0x1d9480u: goto label_1d9480;
        case 0x1d9484u: goto label_1d9484;
        case 0x1d9488u: goto label_1d9488;
        case 0x1d948cu: goto label_1d948c;
        case 0x1d9490u: goto label_1d9490;
        case 0x1d9494u: goto label_1d9494;
        case 0x1d9498u: goto label_1d9498;
        case 0x1d949cu: goto label_1d949c;
        case 0x1d94a0u: goto label_1d94a0;
        case 0x1d94a4u: goto label_1d94a4;
        case 0x1d94a8u: goto label_1d94a8;
        case 0x1d94acu: goto label_1d94ac;
        case 0x1d94b0u: goto label_1d94b0;
        case 0x1d94b4u: goto label_1d94b4;
        case 0x1d94b8u: goto label_1d94b8;
        case 0x1d94bcu: goto label_1d94bc;
        case 0x1d94c0u: goto label_1d94c0;
        case 0x1d94c4u: goto label_1d94c4;
        case 0x1d94c8u: goto label_1d94c8;
        case 0x1d94ccu: goto label_1d94cc;
        case 0x1d94d0u: goto label_1d94d0;
        case 0x1d94d4u: goto label_1d94d4;
        case 0x1d94d8u: goto label_1d94d8;
        case 0x1d94dcu: goto label_1d94dc;
        case 0x1d94e0u: goto label_1d94e0;
        case 0x1d94e4u: goto label_1d94e4;
        case 0x1d94e8u: goto label_1d94e8;
        case 0x1d94ecu: goto label_1d94ec;
        case 0x1d94f0u: goto label_1d94f0;
        case 0x1d94f4u: goto label_1d94f4;
        case 0x1d94f8u: goto label_1d94f8;
        case 0x1d94fcu: goto label_1d94fc;
        case 0x1d9500u: goto label_1d9500;
        case 0x1d9504u: goto label_1d9504;
        case 0x1d9508u: goto label_1d9508;
        case 0x1d950cu: goto label_1d950c;
        case 0x1d9510u: goto label_1d9510;
        case 0x1d9514u: goto label_1d9514;
        case 0x1d9518u: goto label_1d9518;
        case 0x1d951cu: goto label_1d951c;
        case 0x1d9520u: goto label_1d9520;
        case 0x1d9524u: goto label_1d9524;
        case 0x1d9528u: goto label_1d9528;
        case 0x1d952cu: goto label_1d952c;
        case 0x1d9530u: goto label_1d9530;
        case 0x1d9534u: goto label_1d9534;
        case 0x1d9538u: goto label_1d9538;
        case 0x1d953cu: goto label_1d953c;
        case 0x1d9540u: goto label_1d9540;
        case 0x1d9544u: goto label_1d9544;
        case 0x1d9548u: goto label_1d9548;
        case 0x1d954cu: goto label_1d954c;
        case 0x1d9550u: goto label_1d9550;
        case 0x1d9554u: goto label_1d9554;
        case 0x1d9558u: goto label_1d9558;
        case 0x1d955cu: goto label_1d955c;
        case 0x1d9560u: goto label_1d9560;
        case 0x1d9564u: goto label_1d9564;
        case 0x1d9568u: goto label_1d9568;
        case 0x1d956cu: goto label_1d956c;
        case 0x1d9570u: goto label_1d9570;
        case 0x1d9574u: goto label_1d9574;
        case 0x1d9578u: goto label_1d9578;
        case 0x1d957cu: goto label_1d957c;
        case 0x1d9580u: goto label_1d9580;
        case 0x1d9584u: goto label_1d9584;
        case 0x1d9588u: goto label_1d9588;
        case 0x1d958cu: goto label_1d958c;
        case 0x1d9590u: goto label_1d9590;
        case 0x1d9594u: goto label_1d9594;
        case 0x1d9598u: goto label_1d9598;
        case 0x1d959cu: goto label_1d959c;
        case 0x1d95a0u: goto label_1d95a0;
        case 0x1d95a4u: goto label_1d95a4;
        case 0x1d95a8u: goto label_1d95a8;
        case 0x1d95acu: goto label_1d95ac;
        case 0x1d95b0u: goto label_1d95b0;
        case 0x1d95b4u: goto label_1d95b4;
        case 0x1d95b8u: goto label_1d95b8;
        case 0x1d95bcu: goto label_1d95bc;
        case 0x1d95c0u: goto label_1d95c0;
        case 0x1d95c4u: goto label_1d95c4;
        case 0x1d95c8u: goto label_1d95c8;
        case 0x1d95ccu: goto label_1d95cc;
        case 0x1d95d0u: goto label_1d95d0;
        case 0x1d95d4u: goto label_1d95d4;
        case 0x1d95d8u: goto label_1d95d8;
        case 0x1d95dcu: goto label_1d95dc;
        case 0x1d95e0u: goto label_1d95e0;
        case 0x1d95e4u: goto label_1d95e4;
        case 0x1d95e8u: goto label_1d95e8;
        case 0x1d95ecu: goto label_1d95ec;
        case 0x1d95f0u: goto label_1d95f0;
        case 0x1d95f4u: goto label_1d95f4;
        case 0x1d95f8u: goto label_1d95f8;
        case 0x1d95fcu: goto label_1d95fc;
        case 0x1d9600u: goto label_1d9600;
        case 0x1d9604u: goto label_1d9604;
        case 0x1d9608u: goto label_1d9608;
        case 0x1d960cu: goto label_1d960c;
        case 0x1d9610u: goto label_1d9610;
        case 0x1d9614u: goto label_1d9614;
        case 0x1d9618u: goto label_1d9618;
        case 0x1d961cu: goto label_1d961c;
        case 0x1d9620u: goto label_1d9620;
        case 0x1d9624u: goto label_1d9624;
        case 0x1d9628u: goto label_1d9628;
        case 0x1d962cu: goto label_1d962c;
        case 0x1d9630u: goto label_1d9630;
        case 0x1d9634u: goto label_1d9634;
        case 0x1d9638u: goto label_1d9638;
        case 0x1d963cu: goto label_1d963c;
        case 0x1d9640u: goto label_1d9640;
        case 0x1d9644u: goto label_1d9644;
        case 0x1d9648u: goto label_1d9648;
        case 0x1d964cu: goto label_1d964c;
        case 0x1d9650u: goto label_1d9650;
        case 0x1d9654u: goto label_1d9654;
        case 0x1d9658u: goto label_1d9658;
        case 0x1d965cu: goto label_1d965c;
        case 0x1d9660u: goto label_1d9660;
        case 0x1d9664u: goto label_1d9664;
        case 0x1d9668u: goto label_1d9668;
        case 0x1d966cu: goto label_1d966c;
        case 0x1d9670u: goto label_1d9670;
        case 0x1d9674u: goto label_1d9674;
        case 0x1d9678u: goto label_1d9678;
        case 0x1d967cu: goto label_1d967c;
        case 0x1d9680u: goto label_1d9680;
        case 0x1d9684u: goto label_1d9684;
        case 0x1d9688u: goto label_1d9688;
        case 0x1d968cu: goto label_1d968c;
        case 0x1d9690u: goto label_1d9690;
        case 0x1d9694u: goto label_1d9694;
        case 0x1d9698u: goto label_1d9698;
        case 0x1d969cu: goto label_1d969c;
        case 0x1d96a0u: goto label_1d96a0;
        case 0x1d96a4u: goto label_1d96a4;
        case 0x1d96a8u: goto label_1d96a8;
        case 0x1d96acu: goto label_1d96ac;
        case 0x1d96b0u: goto label_1d96b0;
        case 0x1d96b4u: goto label_1d96b4;
        case 0x1d96b8u: goto label_1d96b8;
        case 0x1d96bcu: goto label_1d96bc;
        case 0x1d96c0u: goto label_1d96c0;
        case 0x1d96c4u: goto label_1d96c4;
        case 0x1d96c8u: goto label_1d96c8;
        case 0x1d96ccu: goto label_1d96cc;
        case 0x1d96d0u: goto label_1d96d0;
        case 0x1d96d4u: goto label_1d96d4;
        case 0x1d96d8u: goto label_1d96d8;
        case 0x1d96dcu: goto label_1d96dc;
        case 0x1d96e0u: goto label_1d96e0;
        case 0x1d96e4u: goto label_1d96e4;
        case 0x1d96e8u: goto label_1d96e8;
        case 0x1d96ecu: goto label_1d96ec;
        case 0x1d96f0u: goto label_1d96f0;
        case 0x1d96f4u: goto label_1d96f4;
        case 0x1d96f8u: goto label_1d96f8;
        case 0x1d96fcu: goto label_1d96fc;
        case 0x1d9700u: goto label_1d9700;
        case 0x1d9704u: goto label_1d9704;
        case 0x1d9708u: goto label_1d9708;
        case 0x1d970cu: goto label_1d970c;
        case 0x1d9710u: goto label_1d9710;
        case 0x1d9714u: goto label_1d9714;
        case 0x1d9718u: goto label_1d9718;
        case 0x1d971cu: goto label_1d971c;
        case 0x1d9720u: goto label_1d9720;
        case 0x1d9724u: goto label_1d9724;
        case 0x1d9728u: goto label_1d9728;
        case 0x1d972cu: goto label_1d972c;
        case 0x1d9730u: goto label_1d9730;
        case 0x1d9734u: goto label_1d9734;
        case 0x1d9738u: goto label_1d9738;
        case 0x1d973cu: goto label_1d973c;
        case 0x1d9740u: goto label_1d9740;
        case 0x1d9744u: goto label_1d9744;
        case 0x1d9748u: goto label_1d9748;
        case 0x1d974cu: goto label_1d974c;
        case 0x1d9750u: goto label_1d9750;
        case 0x1d9754u: goto label_1d9754;
        case 0x1d9758u: goto label_1d9758;
        case 0x1d975cu: goto label_1d975c;
        case 0x1d9760u: goto label_1d9760;
        case 0x1d9764u: goto label_1d9764;
        case 0x1d9768u: goto label_1d9768;
        case 0x1d976cu: goto label_1d976c;
        case 0x1d9770u: goto label_1d9770;
        case 0x1d9774u: goto label_1d9774;
        case 0x1d9778u: goto label_1d9778;
        case 0x1d977cu: goto label_1d977c;
        case 0x1d9780u: goto label_1d9780;
        case 0x1d9784u: goto label_1d9784;
        case 0x1d9788u: goto label_1d9788;
        case 0x1d978cu: goto label_1d978c;
        case 0x1d9790u: goto label_1d9790;
        case 0x1d9794u: goto label_1d9794;
        case 0x1d9798u: goto label_1d9798;
        case 0x1d979cu: goto label_1d979c;
        case 0x1d97a0u: goto label_1d97a0;
        case 0x1d97a4u: goto label_1d97a4;
        case 0x1d97a8u: goto label_1d97a8;
        case 0x1d97acu: goto label_1d97ac;
        case 0x1d97b0u: goto label_1d97b0;
        case 0x1d97b4u: goto label_1d97b4;
        case 0x1d97b8u: goto label_1d97b8;
        case 0x1d97bcu: goto label_1d97bc;
        case 0x1d97c0u: goto label_1d97c0;
        case 0x1d97c4u: goto label_1d97c4;
        case 0x1d97c8u: goto label_1d97c8;
        case 0x1d97ccu: goto label_1d97cc;
        case 0x1d97d0u: goto label_1d97d0;
        case 0x1d97d4u: goto label_1d97d4;
        case 0x1d97d8u: goto label_1d97d8;
        case 0x1d97dcu: goto label_1d97dc;
        case 0x1d97e0u: goto label_1d97e0;
        case 0x1d97e4u: goto label_1d97e4;
        case 0x1d97e8u: goto label_1d97e8;
        case 0x1d97ecu: goto label_1d97ec;
        case 0x1d97f0u: goto label_1d97f0;
        case 0x1d97f4u: goto label_1d97f4;
        case 0x1d97f8u: goto label_1d97f8;
        case 0x1d97fcu: goto label_1d97fc;
        case 0x1d9800u: goto label_1d9800;
        case 0x1d9804u: goto label_1d9804;
        case 0x1d9808u: goto label_1d9808;
        case 0x1d980cu: goto label_1d980c;
        case 0x1d9810u: goto label_1d9810;
        case 0x1d9814u: goto label_1d9814;
        case 0x1d9818u: goto label_1d9818;
        case 0x1d981cu: goto label_1d981c;
        case 0x1d9820u: goto label_1d9820;
        case 0x1d9824u: goto label_1d9824;
        case 0x1d9828u: goto label_1d9828;
        case 0x1d982cu: goto label_1d982c;
        case 0x1d9830u: goto label_1d9830;
        case 0x1d9834u: goto label_1d9834;
        case 0x1d9838u: goto label_1d9838;
        case 0x1d983cu: goto label_1d983c;
        case 0x1d9840u: goto label_1d9840;
        case 0x1d9844u: goto label_1d9844;
        case 0x1d9848u: goto label_1d9848;
        case 0x1d984cu: goto label_1d984c;
        case 0x1d9850u: goto label_1d9850;
        case 0x1d9854u: goto label_1d9854;
        case 0x1d9858u: goto label_1d9858;
        case 0x1d985cu: goto label_1d985c;
        case 0x1d9860u: goto label_1d9860;
        case 0x1d9864u: goto label_1d9864;
        case 0x1d9868u: goto label_1d9868;
        case 0x1d986cu: goto label_1d986c;
        case 0x1d9870u: goto label_1d9870;
        case 0x1d9874u: goto label_1d9874;
        case 0x1d9878u: goto label_1d9878;
        case 0x1d987cu: goto label_1d987c;
        case 0x1d9880u: goto label_1d9880;
        case 0x1d9884u: goto label_1d9884;
        case 0x1d9888u: goto label_1d9888;
        case 0x1d988cu: goto label_1d988c;
        case 0x1d9890u: goto label_1d9890;
        case 0x1d9894u: goto label_1d9894;
        case 0x1d9898u: goto label_1d9898;
        case 0x1d989cu: goto label_1d989c;
        case 0x1d98a0u: goto label_1d98a0;
        case 0x1d98a4u: goto label_1d98a4;
        case 0x1d98a8u: goto label_1d98a8;
        case 0x1d98acu: goto label_1d98ac;
        case 0x1d98b0u: goto label_1d98b0;
        case 0x1d98b4u: goto label_1d98b4;
        case 0x1d98b8u: goto label_1d98b8;
        case 0x1d98bcu: goto label_1d98bc;
        case 0x1d98c0u: goto label_1d98c0;
        case 0x1d98c4u: goto label_1d98c4;
        case 0x1d98c8u: goto label_1d98c8;
        case 0x1d98ccu: goto label_1d98cc;
        case 0x1d98d0u: goto label_1d98d0;
        case 0x1d98d4u: goto label_1d98d4;
        case 0x1d98d8u: goto label_1d98d8;
        case 0x1d98dcu: goto label_1d98dc;
        case 0x1d98e0u: goto label_1d98e0;
        case 0x1d98e4u: goto label_1d98e4;
        case 0x1d98e8u: goto label_1d98e8;
        case 0x1d98ecu: goto label_1d98ec;
        case 0x1d98f0u: goto label_1d98f0;
        case 0x1d98f4u: goto label_1d98f4;
        case 0x1d98f8u: goto label_1d98f8;
        case 0x1d98fcu: goto label_1d98fc;
        case 0x1d9900u: goto label_1d9900;
        case 0x1d9904u: goto label_1d9904;
        case 0x1d9908u: goto label_1d9908;
        case 0x1d990cu: goto label_1d990c;
        case 0x1d9910u: goto label_1d9910;
        case 0x1d9914u: goto label_1d9914;
        case 0x1d9918u: goto label_1d9918;
        case 0x1d991cu: goto label_1d991c;
        case 0x1d9920u: goto label_1d9920;
        case 0x1d9924u: goto label_1d9924;
        case 0x1d9928u: goto label_1d9928;
        case 0x1d992cu: goto label_1d992c;
        case 0x1d9930u: goto label_1d9930;
        case 0x1d9934u: goto label_1d9934;
        case 0x1d9938u: goto label_1d9938;
        case 0x1d993cu: goto label_1d993c;
        case 0x1d9940u: goto label_1d9940;
        case 0x1d9944u: goto label_1d9944;
        case 0x1d9948u: goto label_1d9948;
        case 0x1d994cu: goto label_1d994c;
        case 0x1d9950u: goto label_1d9950;
        case 0x1d9954u: goto label_1d9954;
        case 0x1d9958u: goto label_1d9958;
        case 0x1d995cu: goto label_1d995c;
        case 0x1d9960u: goto label_1d9960;
        case 0x1d9964u: goto label_1d9964;
        case 0x1d9968u: goto label_1d9968;
        case 0x1d996cu: goto label_1d996c;
        case 0x1d9970u: goto label_1d9970;
        case 0x1d9974u: goto label_1d9974;
        case 0x1d9978u: goto label_1d9978;
        case 0x1d997cu: goto label_1d997c;
        case 0x1d9980u: goto label_1d9980;
        case 0x1d9984u: goto label_1d9984;
        case 0x1d9988u: goto label_1d9988;
        case 0x1d998cu: goto label_1d998c;
        case 0x1d9990u: goto label_1d9990;
        case 0x1d9994u: goto label_1d9994;
        case 0x1d9998u: goto label_1d9998;
        case 0x1d999cu: goto label_1d999c;
        case 0x1d99a0u: goto label_1d99a0;
        case 0x1d99a4u: goto label_1d99a4;
        case 0x1d99a8u: goto label_1d99a8;
        case 0x1d99acu: goto label_1d99ac;
        case 0x1d99b0u: goto label_1d99b0;
        case 0x1d99b4u: goto label_1d99b4;
        case 0x1d99b8u: goto label_1d99b8;
        case 0x1d99bcu: goto label_1d99bc;
        case 0x1d99c0u: goto label_1d99c0;
        case 0x1d99c4u: goto label_1d99c4;
        case 0x1d99c8u: goto label_1d99c8;
        case 0x1d99ccu: goto label_1d99cc;
        case 0x1d99d0u: goto label_1d99d0;
        case 0x1d99d4u: goto label_1d99d4;
        case 0x1d99d8u: goto label_1d99d8;
        case 0x1d99dcu: goto label_1d99dc;
        case 0x1d99e0u: goto label_1d99e0;
        case 0x1d99e4u: goto label_1d99e4;
        case 0x1d99e8u: goto label_1d99e8;
        case 0x1d99ecu: goto label_1d99ec;
        case 0x1d99f0u: goto label_1d99f0;
        case 0x1d99f4u: goto label_1d99f4;
        case 0x1d99f8u: goto label_1d99f8;
        case 0x1d99fcu: goto label_1d99fc;
        case 0x1d9a00u: goto label_1d9a00;
        case 0x1d9a04u: goto label_1d9a04;
        case 0x1d9a08u: goto label_1d9a08;
        case 0x1d9a0cu: goto label_1d9a0c;
        case 0x1d9a10u: goto label_1d9a10;
        case 0x1d9a14u: goto label_1d9a14;
        case 0x1d9a18u: goto label_1d9a18;
        case 0x1d9a1cu: goto label_1d9a1c;
        case 0x1d9a20u: goto label_1d9a20;
        case 0x1d9a24u: goto label_1d9a24;
        case 0x1d9a28u: goto label_1d9a28;
        case 0x1d9a2cu: goto label_1d9a2c;
        case 0x1d9a30u: goto label_1d9a30;
        case 0x1d9a34u: goto label_1d9a34;
        case 0x1d9a38u: goto label_1d9a38;
        case 0x1d9a3cu: goto label_1d9a3c;
        case 0x1d9a40u: goto label_1d9a40;
        case 0x1d9a44u: goto label_1d9a44;
        case 0x1d9a48u: goto label_1d9a48;
        case 0x1d9a4cu: goto label_1d9a4c;
        case 0x1d9a50u: goto label_1d9a50;
        case 0x1d9a54u: goto label_1d9a54;
        case 0x1d9a58u: goto label_1d9a58;
        case 0x1d9a5cu: goto label_1d9a5c;
        case 0x1d9a60u: goto label_1d9a60;
        case 0x1d9a64u: goto label_1d9a64;
        case 0x1d9a68u: goto label_1d9a68;
        case 0x1d9a6cu: goto label_1d9a6c;
        case 0x1d9a70u: goto label_1d9a70;
        case 0x1d9a74u: goto label_1d9a74;
        case 0x1d9a78u: goto label_1d9a78;
        case 0x1d9a7cu: goto label_1d9a7c;
        case 0x1d9a80u: goto label_1d9a80;
        case 0x1d9a84u: goto label_1d9a84;
        case 0x1d9a88u: goto label_1d9a88;
        case 0x1d9a8cu: goto label_1d9a8c;
        case 0x1d9a90u: goto label_1d9a90;
        case 0x1d9a94u: goto label_1d9a94;
        case 0x1d9a98u: goto label_1d9a98;
        case 0x1d9a9cu: goto label_1d9a9c;
        case 0x1d9aa0u: goto label_1d9aa0;
        case 0x1d9aa4u: goto label_1d9aa4;
        case 0x1d9aa8u: goto label_1d9aa8;
        case 0x1d9aacu: goto label_1d9aac;
        case 0x1d9ab0u: goto label_1d9ab0;
        case 0x1d9ab4u: goto label_1d9ab4;
        case 0x1d9ab8u: goto label_1d9ab8;
        case 0x1d9abcu: goto label_1d9abc;
        case 0x1d9ac0u: goto label_1d9ac0;
        case 0x1d9ac4u: goto label_1d9ac4;
        case 0x1d9ac8u: goto label_1d9ac8;
        case 0x1d9accu: goto label_1d9acc;
        case 0x1d9ad0u: goto label_1d9ad0;
        case 0x1d9ad4u: goto label_1d9ad4;
        case 0x1d9ad8u: goto label_1d9ad8;
        case 0x1d9adcu: goto label_1d9adc;
        case 0x1d9ae0u: goto label_1d9ae0;
        case 0x1d9ae4u: goto label_1d9ae4;
        case 0x1d9ae8u: goto label_1d9ae8;
        case 0x1d9aecu: goto label_1d9aec;
        case 0x1d9af0u: goto label_1d9af0;
        case 0x1d9af4u: goto label_1d9af4;
        case 0x1d9af8u: goto label_1d9af8;
        case 0x1d9afcu: goto label_1d9afc;
        case 0x1d9b00u: goto label_1d9b00;
        case 0x1d9b04u: goto label_1d9b04;
        case 0x1d9b08u: goto label_1d9b08;
        case 0x1d9b0cu: goto label_1d9b0c;
        case 0x1d9b10u: goto label_1d9b10;
        case 0x1d9b14u: goto label_1d9b14;
        case 0x1d9b18u: goto label_1d9b18;
        case 0x1d9b1cu: goto label_1d9b1c;
        case 0x1d9b20u: goto label_1d9b20;
        case 0x1d9b24u: goto label_1d9b24;
        case 0x1d9b28u: goto label_1d9b28;
        case 0x1d9b2cu: goto label_1d9b2c;
        case 0x1d9b30u: goto label_1d9b30;
        case 0x1d9b34u: goto label_1d9b34;
        case 0x1d9b38u: goto label_1d9b38;
        case 0x1d9b3cu: goto label_1d9b3c;
        case 0x1d9b40u: goto label_1d9b40;
        case 0x1d9b44u: goto label_1d9b44;
        case 0x1d9b48u: goto label_1d9b48;
        case 0x1d9b4cu: goto label_1d9b4c;
        case 0x1d9b50u: goto label_1d9b50;
        case 0x1d9b54u: goto label_1d9b54;
        case 0x1d9b58u: goto label_1d9b58;
        case 0x1d9b5cu: goto label_1d9b5c;
        case 0x1d9b60u: goto label_1d9b60;
        case 0x1d9b64u: goto label_1d9b64;
        case 0x1d9b68u: goto label_1d9b68;
        case 0x1d9b6cu: goto label_1d9b6c;
        case 0x1d9b70u: goto label_1d9b70;
        case 0x1d9b74u: goto label_1d9b74;
        case 0x1d9b78u: goto label_1d9b78;
        case 0x1d9b7cu: goto label_1d9b7c;
        case 0x1d9b80u: goto label_1d9b80;
        case 0x1d9b84u: goto label_1d9b84;
        case 0x1d9b88u: goto label_1d9b88;
        case 0x1d9b8cu: goto label_1d9b8c;
        case 0x1d9b90u: goto label_1d9b90;
        case 0x1d9b94u: goto label_1d9b94;
        case 0x1d9b98u: goto label_1d9b98;
        case 0x1d9b9cu: goto label_1d9b9c;
        case 0x1d9ba0u: goto label_1d9ba0;
        case 0x1d9ba4u: goto label_1d9ba4;
        case 0x1d9ba8u: goto label_1d9ba8;
        case 0x1d9bacu: goto label_1d9bac;
        case 0x1d9bb0u: goto label_1d9bb0;
        case 0x1d9bb4u: goto label_1d9bb4;
        case 0x1d9bb8u: goto label_1d9bb8;
        case 0x1d9bbcu: goto label_1d9bbc;
        case 0x1d9bc0u: goto label_1d9bc0;
        case 0x1d9bc4u: goto label_1d9bc4;
        case 0x1d9bc8u: goto label_1d9bc8;
        case 0x1d9bccu: goto label_1d9bcc;
        case 0x1d9bd0u: goto label_1d9bd0;
        case 0x1d9bd4u: goto label_1d9bd4;
        case 0x1d9bd8u: goto label_1d9bd8;
        case 0x1d9bdcu: goto label_1d9bdc;
        case 0x1d9be0u: goto label_1d9be0;
        case 0x1d9be4u: goto label_1d9be4;
        case 0x1d9be8u: goto label_1d9be8;
        case 0x1d9becu: goto label_1d9bec;
        case 0x1d9bf0u: goto label_1d9bf0;
        case 0x1d9bf4u: goto label_1d9bf4;
        case 0x1d9bf8u: goto label_1d9bf8;
        case 0x1d9bfcu: goto label_1d9bfc;
        case 0x1d9c00u: goto label_1d9c00;
        case 0x1d9c04u: goto label_1d9c04;
        case 0x1d9c08u: goto label_1d9c08;
        case 0x1d9c0cu: goto label_1d9c0c;
        case 0x1d9c10u: goto label_1d9c10;
        case 0x1d9c14u: goto label_1d9c14;
        case 0x1d9c18u: goto label_1d9c18;
        case 0x1d9c1cu: goto label_1d9c1c;
        case 0x1d9c20u: goto label_1d9c20;
        case 0x1d9c24u: goto label_1d9c24;
        case 0x1d9c28u: goto label_1d9c28;
        case 0x1d9c2cu: goto label_1d9c2c;
        case 0x1d9c30u: goto label_1d9c30;
        case 0x1d9c34u: goto label_1d9c34;
        case 0x1d9c38u: goto label_1d9c38;
        case 0x1d9c3cu: goto label_1d9c3c;
        case 0x1d9c40u: goto label_1d9c40;
        case 0x1d9c44u: goto label_1d9c44;
        case 0x1d9c48u: goto label_1d9c48;
        case 0x1d9c4cu: goto label_1d9c4c;
        case 0x1d9c50u: goto label_1d9c50;
        case 0x1d9c54u: goto label_1d9c54;
        case 0x1d9c58u: goto label_1d9c58;
        case 0x1d9c5cu: goto label_1d9c5c;
        case 0x1d9c60u: goto label_1d9c60;
        case 0x1d9c64u: goto label_1d9c64;
        case 0x1d9c68u: goto label_1d9c68;
        case 0x1d9c6cu: goto label_1d9c6c;
        case 0x1d9c70u: goto label_1d9c70;
        case 0x1d9c74u: goto label_1d9c74;
        case 0x1d9c78u: goto label_1d9c78;
        case 0x1d9c7cu: goto label_1d9c7c;
        case 0x1d9c80u: goto label_1d9c80;
        case 0x1d9c84u: goto label_1d9c84;
        case 0x1d9c88u: goto label_1d9c88;
        case 0x1d9c8cu: goto label_1d9c8c;
        case 0x1d9c90u: goto label_1d9c90;
        case 0x1d9c94u: goto label_1d9c94;
        case 0x1d9c98u: goto label_1d9c98;
        case 0x1d9c9cu: goto label_1d9c9c;
        case 0x1d9ca0u: goto label_1d9ca0;
        case 0x1d9ca4u: goto label_1d9ca4;
        case 0x1d9ca8u: goto label_1d9ca8;
        case 0x1d9cacu: goto label_1d9cac;
        case 0x1d9cb0u: goto label_1d9cb0;
        case 0x1d9cb4u: goto label_1d9cb4;
        case 0x1d9cb8u: goto label_1d9cb8;
        case 0x1d9cbcu: goto label_1d9cbc;
        case 0x1d9cc0u: goto label_1d9cc0;
        case 0x1d9cc4u: goto label_1d9cc4;
        case 0x1d9cc8u: goto label_1d9cc8;
        case 0x1d9cccu: goto label_1d9ccc;
        case 0x1d9cd0u: goto label_1d9cd0;
        case 0x1d9cd4u: goto label_1d9cd4;
        case 0x1d9cd8u: goto label_1d9cd8;
        case 0x1d9cdcu: goto label_1d9cdc;
        case 0x1d9ce0u: goto label_1d9ce0;
        case 0x1d9ce4u: goto label_1d9ce4;
        case 0x1d9ce8u: goto label_1d9ce8;
        case 0x1d9cecu: goto label_1d9cec;
        case 0x1d9cf0u: goto label_1d9cf0;
        case 0x1d9cf4u: goto label_1d9cf4;
        case 0x1d9cf8u: goto label_1d9cf8;
        case 0x1d9cfcu: goto label_1d9cfc;
        case 0x1d9d00u: goto label_1d9d00;
        case 0x1d9d04u: goto label_1d9d04;
        case 0x1d9d08u: goto label_1d9d08;
        case 0x1d9d0cu: goto label_1d9d0c;
        case 0x1d9d10u: goto label_1d9d10;
        case 0x1d9d14u: goto label_1d9d14;
        case 0x1d9d18u: goto label_1d9d18;
        case 0x1d9d1cu: goto label_1d9d1c;
        case 0x1d9d20u: goto label_1d9d20;
        case 0x1d9d24u: goto label_1d9d24;
        case 0x1d9d28u: goto label_1d9d28;
        case 0x1d9d2cu: goto label_1d9d2c;
        case 0x1d9d30u: goto label_1d9d30;
        case 0x1d9d34u: goto label_1d9d34;
        case 0x1d9d38u: goto label_1d9d38;
        case 0x1d9d3cu: goto label_1d9d3c;
        case 0x1d9d40u: goto label_1d9d40;
        case 0x1d9d44u: goto label_1d9d44;
        case 0x1d9d48u: goto label_1d9d48;
        case 0x1d9d4cu: goto label_1d9d4c;
        case 0x1d9d50u: goto label_1d9d50;
        case 0x1d9d54u: goto label_1d9d54;
        case 0x1d9d58u: goto label_1d9d58;
        case 0x1d9d5cu: goto label_1d9d5c;
        case 0x1d9d60u: goto label_1d9d60;
        case 0x1d9d64u: goto label_1d9d64;
        case 0x1d9d68u: goto label_1d9d68;
        case 0x1d9d6cu: goto label_1d9d6c;
        case 0x1d9d70u: goto label_1d9d70;
        case 0x1d9d74u: goto label_1d9d74;
        case 0x1d9d78u: goto label_1d9d78;
        case 0x1d9d7cu: goto label_1d9d7c;
        case 0x1d9d80u: goto label_1d9d80;
        case 0x1d9d84u: goto label_1d9d84;
        case 0x1d9d88u: goto label_1d9d88;
        case 0x1d9d8cu: goto label_1d9d8c;
        case 0x1d9d90u: goto label_1d9d90;
        case 0x1d9d94u: goto label_1d9d94;
        case 0x1d9d98u: goto label_1d9d98;
        case 0x1d9d9cu: goto label_1d9d9c;
        case 0x1d9da0u: goto label_1d9da0;
        case 0x1d9da4u: goto label_1d9da4;
        case 0x1d9da8u: goto label_1d9da8;
        case 0x1d9dacu: goto label_1d9dac;
        case 0x1d9db0u: goto label_1d9db0;
        case 0x1d9db4u: goto label_1d9db4;
        case 0x1d9db8u: goto label_1d9db8;
        case 0x1d9dbcu: goto label_1d9dbc;
        case 0x1d9dc0u: goto label_1d9dc0;
        case 0x1d9dc4u: goto label_1d9dc4;
        case 0x1d9dc8u: goto label_1d9dc8;
        case 0x1d9dccu: goto label_1d9dcc;
        case 0x1d9dd0u: goto label_1d9dd0;
        case 0x1d9dd4u: goto label_1d9dd4;
        case 0x1d9dd8u: goto label_1d9dd8;
        case 0x1d9ddcu: goto label_1d9ddc;
        case 0x1d9de0u: goto label_1d9de0;
        case 0x1d9de4u: goto label_1d9de4;
        case 0x1d9de8u: goto label_1d9de8;
        case 0x1d9decu: goto label_1d9dec;
        case 0x1d9df0u: goto label_1d9df0;
        case 0x1d9df4u: goto label_1d9df4;
        case 0x1d9df8u: goto label_1d9df8;
        case 0x1d9dfcu: goto label_1d9dfc;
        case 0x1d9e00u: goto label_1d9e00;
        case 0x1d9e04u: goto label_1d9e04;
        case 0x1d9e08u: goto label_1d9e08;
        case 0x1d9e0cu: goto label_1d9e0c;
        case 0x1d9e10u: goto label_1d9e10;
        case 0x1d9e14u: goto label_1d9e14;
        case 0x1d9e18u: goto label_1d9e18;
        case 0x1d9e1cu: goto label_1d9e1c;
        case 0x1d9e20u: goto label_1d9e20;
        case 0x1d9e24u: goto label_1d9e24;
        case 0x1d9e28u: goto label_1d9e28;
        case 0x1d9e2cu: goto label_1d9e2c;
        case 0x1d9e30u: goto label_1d9e30;
        case 0x1d9e34u: goto label_1d9e34;
        case 0x1d9e38u: goto label_1d9e38;
        case 0x1d9e3cu: goto label_1d9e3c;
        case 0x1d9e40u: goto label_1d9e40;
        case 0x1d9e44u: goto label_1d9e44;
        case 0x1d9e48u: goto label_1d9e48;
        case 0x1d9e4cu: goto label_1d9e4c;
        case 0x1d9e50u: goto label_1d9e50;
        case 0x1d9e54u: goto label_1d9e54;
        case 0x1d9e58u: goto label_1d9e58;
        case 0x1d9e5cu: goto label_1d9e5c;
        case 0x1d9e60u: goto label_1d9e60;
        case 0x1d9e64u: goto label_1d9e64;
        case 0x1d9e68u: goto label_1d9e68;
        case 0x1d9e6cu: goto label_1d9e6c;
        case 0x1d9e70u: goto label_1d9e70;
        case 0x1d9e74u: goto label_1d9e74;
        case 0x1d9e78u: goto label_1d9e78;
        case 0x1d9e7cu: goto label_1d9e7c;
        case 0x1d9e80u: goto label_1d9e80;
        case 0x1d9e84u: goto label_1d9e84;
        case 0x1d9e88u: goto label_1d9e88;
        case 0x1d9e8cu: goto label_1d9e8c;
        case 0x1d9e90u: goto label_1d9e90;
        case 0x1d9e94u: goto label_1d9e94;
        case 0x1d9e98u: goto label_1d9e98;
        case 0x1d9e9cu: goto label_1d9e9c;
        case 0x1d9ea0u: goto label_1d9ea0;
        case 0x1d9ea4u: goto label_1d9ea4;
        case 0x1d9ea8u: goto label_1d9ea8;
        case 0x1d9eacu: goto label_1d9eac;
        case 0x1d9eb0u: goto label_1d9eb0;
        case 0x1d9eb4u: goto label_1d9eb4;
        case 0x1d9eb8u: goto label_1d9eb8;
        case 0x1d9ebcu: goto label_1d9ebc;
        case 0x1d9ec0u: goto label_1d9ec0;
        case 0x1d9ec4u: goto label_1d9ec4;
        case 0x1d9ec8u: goto label_1d9ec8;
        case 0x1d9eccu: goto label_1d9ecc;
        case 0x1d9ed0u: goto label_1d9ed0;
        case 0x1d9ed4u: goto label_1d9ed4;
        case 0x1d9ed8u: goto label_1d9ed8;
        case 0x1d9edcu: goto label_1d9edc;
        case 0x1d9ee0u: goto label_1d9ee0;
        case 0x1d9ee4u: goto label_1d9ee4;
        case 0x1d9ee8u: goto label_1d9ee8;
        case 0x1d9eecu: goto label_1d9eec;
        case 0x1d9ef0u: goto label_1d9ef0;
        case 0x1d9ef4u: goto label_1d9ef4;
        case 0x1d9ef8u: goto label_1d9ef8;
        case 0x1d9efcu: goto label_1d9efc;
        case 0x1d9f00u: goto label_1d9f00;
        case 0x1d9f04u: goto label_1d9f04;
        case 0x1d9f08u: goto label_1d9f08;
        case 0x1d9f0cu: goto label_1d9f0c;
        case 0x1d9f10u: goto label_1d9f10;
        case 0x1d9f14u: goto label_1d9f14;
        case 0x1d9f18u: goto label_1d9f18;
        case 0x1d9f1cu: goto label_1d9f1c;
        case 0x1d9f20u: goto label_1d9f20;
        case 0x1d9f24u: goto label_1d9f24;
        case 0x1d9f28u: goto label_1d9f28;
        case 0x1d9f2cu: goto label_1d9f2c;
        case 0x1d9f30u: goto label_1d9f30;
        case 0x1d9f34u: goto label_1d9f34;
        case 0x1d9f38u: goto label_1d9f38;
        case 0x1d9f3cu: goto label_1d9f3c;
        case 0x1d9f40u: goto label_1d9f40;
        case 0x1d9f44u: goto label_1d9f44;
        case 0x1d9f48u: goto label_1d9f48;
        case 0x1d9f4cu: goto label_1d9f4c;
        case 0x1d9f50u: goto label_1d9f50;
        case 0x1d9f54u: goto label_1d9f54;
        case 0x1d9f58u: goto label_1d9f58;
        case 0x1d9f5cu: goto label_1d9f5c;
        case 0x1d9f60u: goto label_1d9f60;
        case 0x1d9f64u: goto label_1d9f64;
        case 0x1d9f68u: goto label_1d9f68;
        case 0x1d9f6cu: goto label_1d9f6c;
        case 0x1d9f70u: goto label_1d9f70;
        case 0x1d9f74u: goto label_1d9f74;
        case 0x1d9f78u: goto label_1d9f78;
        case 0x1d9f7cu: goto label_1d9f7c;
        case 0x1d9f80u: goto label_1d9f80;
        case 0x1d9f84u: goto label_1d9f84;
        case 0x1d9f88u: goto label_1d9f88;
        case 0x1d9f8cu: goto label_1d9f8c;
        case 0x1d9f90u: goto label_1d9f90;
        case 0x1d9f94u: goto label_1d9f94;
        case 0x1d9f98u: goto label_1d9f98;
        case 0x1d9f9cu: goto label_1d9f9c;
        case 0x1d9fa0u: goto label_1d9fa0;
        case 0x1d9fa4u: goto label_1d9fa4;
        case 0x1d9fa8u: goto label_1d9fa8;
        case 0x1d9facu: goto label_1d9fac;
        case 0x1d9fb0u: goto label_1d9fb0;
        case 0x1d9fb4u: goto label_1d9fb4;
        case 0x1d9fb8u: goto label_1d9fb8;
        case 0x1d9fbcu: goto label_1d9fbc;
        case 0x1d9fc0u: goto label_1d9fc0;
        case 0x1d9fc4u: goto label_1d9fc4;
        case 0x1d9fc8u: goto label_1d9fc8;
        case 0x1d9fccu: goto label_1d9fcc;
        case 0x1d9fd0u: goto label_1d9fd0;
        case 0x1d9fd4u: goto label_1d9fd4;
        case 0x1d9fd8u: goto label_1d9fd8;
        case 0x1d9fdcu: goto label_1d9fdc;
        case 0x1d9fe0u: goto label_1d9fe0;
        case 0x1d9fe4u: goto label_1d9fe4;
        case 0x1d9fe8u: goto label_1d9fe8;
        case 0x1d9fecu: goto label_1d9fec;
        case 0x1d9ff0u: goto label_1d9ff0;
        case 0x1d9ff4u: goto label_1d9ff4;
        case 0x1d9ff8u: goto label_1d9ff8;
        case 0x1d9ffcu: goto label_1d9ffc;
        case 0x1da000u: goto label_1da000;
        case 0x1da004u: goto label_1da004;
        case 0x1da008u: goto label_1da008;
        case 0x1da00cu: goto label_1da00c;
        case 0x1da010u: goto label_1da010;
        case 0x1da014u: goto label_1da014;
        case 0x1da018u: goto label_1da018;
        case 0x1da01cu: goto label_1da01c;
        case 0x1da020u: goto label_1da020;
        case 0x1da024u: goto label_1da024;
        case 0x1da028u: goto label_1da028;
        case 0x1da02cu: goto label_1da02c;
        case 0x1da030u: goto label_1da030;
        case 0x1da034u: goto label_1da034;
        case 0x1da038u: goto label_1da038;
        case 0x1da03cu: goto label_1da03c;
        case 0x1da040u: goto label_1da040;
        case 0x1da044u: goto label_1da044;
        case 0x1da048u: goto label_1da048;
        case 0x1da04cu: goto label_1da04c;
        case 0x1da050u: goto label_1da050;
        case 0x1da054u: goto label_1da054;
        case 0x1da058u: goto label_1da058;
        case 0x1da05cu: goto label_1da05c;
        case 0x1da060u: goto label_1da060;
        case 0x1da064u: goto label_1da064;
        case 0x1da068u: goto label_1da068;
        case 0x1da06cu: goto label_1da06c;
        case 0x1da070u: goto label_1da070;
        case 0x1da074u: goto label_1da074;
        case 0x1da078u: goto label_1da078;
        case 0x1da07cu: goto label_1da07c;
        case 0x1da080u: goto label_1da080;
        case 0x1da084u: goto label_1da084;
        case 0x1da088u: goto label_1da088;
        case 0x1da08cu: goto label_1da08c;
        case 0x1da090u: goto label_1da090;
        case 0x1da094u: goto label_1da094;
        case 0x1da098u: goto label_1da098;
        case 0x1da09cu: goto label_1da09c;
        case 0x1da0a0u: goto label_1da0a0;
        case 0x1da0a4u: goto label_1da0a4;
        case 0x1da0a8u: goto label_1da0a8;
        case 0x1da0acu: goto label_1da0ac;
        case 0x1da0b0u: goto label_1da0b0;
        case 0x1da0b4u: goto label_1da0b4;
        case 0x1da0b8u: goto label_1da0b8;
        case 0x1da0bcu: goto label_1da0bc;
        case 0x1da0c0u: goto label_1da0c0;
        case 0x1da0c4u: goto label_1da0c4;
        case 0x1da0c8u: goto label_1da0c8;
        case 0x1da0ccu: goto label_1da0cc;
        case 0x1da0d0u: goto label_1da0d0;
        case 0x1da0d4u: goto label_1da0d4;
        case 0x1da0d8u: goto label_1da0d8;
        case 0x1da0dcu: goto label_1da0dc;
        case 0x1da0e0u: goto label_1da0e0;
        case 0x1da0e4u: goto label_1da0e4;
        case 0x1da0e8u: goto label_1da0e8;
        case 0x1da0ecu: goto label_1da0ec;
        case 0x1da0f0u: goto label_1da0f0;
        case 0x1da0f4u: goto label_1da0f4;
        case 0x1da0f8u: goto label_1da0f8;
        case 0x1da0fcu: goto label_1da0fc;
        case 0x1da100u: goto label_1da100;
        case 0x1da104u: goto label_1da104;
        case 0x1da108u: goto label_1da108;
        case 0x1da10cu: goto label_1da10c;
        case 0x1da110u: goto label_1da110;
        case 0x1da114u: goto label_1da114;
        case 0x1da118u: goto label_1da118;
        case 0x1da11cu: goto label_1da11c;
        case 0x1da120u: goto label_1da120;
        case 0x1da124u: goto label_1da124;
        case 0x1da128u: goto label_1da128;
        case 0x1da12cu: goto label_1da12c;
        case 0x1da130u: goto label_1da130;
        case 0x1da134u: goto label_1da134;
        case 0x1da138u: goto label_1da138;
        case 0x1da13cu: goto label_1da13c;
        case 0x1da140u: goto label_1da140;
        case 0x1da144u: goto label_1da144;
        case 0x1da148u: goto label_1da148;
        case 0x1da14cu: goto label_1da14c;
        case 0x1da150u: goto label_1da150;
        case 0x1da154u: goto label_1da154;
        case 0x1da158u: goto label_1da158;
        case 0x1da15cu: goto label_1da15c;
        case 0x1da160u: goto label_1da160;
        case 0x1da164u: goto label_1da164;
        case 0x1da168u: goto label_1da168;
        case 0x1da16cu: goto label_1da16c;
        case 0x1da170u: goto label_1da170;
        case 0x1da174u: goto label_1da174;
        case 0x1da178u: goto label_1da178;
        case 0x1da17cu: goto label_1da17c;
        case 0x1da180u: goto label_1da180;
        case 0x1da184u: goto label_1da184;
        case 0x1da188u: goto label_1da188;
        case 0x1da18cu: goto label_1da18c;
        case 0x1da190u: goto label_1da190;
        case 0x1da194u: goto label_1da194;
        case 0x1da198u: goto label_1da198;
        case 0x1da19cu: goto label_1da19c;
        case 0x1da1a0u: goto label_1da1a0;
        case 0x1da1a4u: goto label_1da1a4;
        case 0x1da1a8u: goto label_1da1a8;
        case 0x1da1acu: goto label_1da1ac;
        case 0x1da1b0u: goto label_1da1b0;
        case 0x1da1b4u: goto label_1da1b4;
        case 0x1da1b8u: goto label_1da1b8;
        case 0x1da1bcu: goto label_1da1bc;
        case 0x1da1c0u: goto label_1da1c0;
        case 0x1da1c4u: goto label_1da1c4;
        case 0x1da1c8u: goto label_1da1c8;
        case 0x1da1ccu: goto label_1da1cc;
        case 0x1da1d0u: goto label_1da1d0;
        case 0x1da1d4u: goto label_1da1d4;
        case 0x1da1d8u: goto label_1da1d8;
        case 0x1da1dcu: goto label_1da1dc;
        case 0x1da1e0u: goto label_1da1e0;
        case 0x1da1e4u: goto label_1da1e4;
        case 0x1da1e8u: goto label_1da1e8;
        case 0x1da1ecu: goto label_1da1ec;
        case 0x1da1f0u: goto label_1da1f0;
        case 0x1da1f4u: goto label_1da1f4;
        case 0x1da1f8u: goto label_1da1f8;
        case 0x1da1fcu: goto label_1da1fc;
        case 0x1da200u: goto label_1da200;
        case 0x1da204u: goto label_1da204;
        case 0x1da208u: goto label_1da208;
        case 0x1da20cu: goto label_1da20c;
        case 0x1da210u: goto label_1da210;
        case 0x1da214u: goto label_1da214;
        case 0x1da218u: goto label_1da218;
        case 0x1da21cu: goto label_1da21c;
        case 0x1da220u: goto label_1da220;
        case 0x1da224u: goto label_1da224;
        case 0x1da228u: goto label_1da228;
        case 0x1da22cu: goto label_1da22c;
        case 0x1da230u: goto label_1da230;
        case 0x1da234u: goto label_1da234;
        case 0x1da238u: goto label_1da238;
        case 0x1da23cu: goto label_1da23c;
        case 0x1da240u: goto label_1da240;
        case 0x1da244u: goto label_1da244;
        case 0x1da248u: goto label_1da248;
        case 0x1da24cu: goto label_1da24c;
        case 0x1da250u: goto label_1da250;
        case 0x1da254u: goto label_1da254;
        case 0x1da258u: goto label_1da258;
        case 0x1da25cu: goto label_1da25c;
        case 0x1da260u: goto label_1da260;
        case 0x1da264u: goto label_1da264;
        case 0x1da268u: goto label_1da268;
        case 0x1da26cu: goto label_1da26c;
        case 0x1da270u: goto label_1da270;
        case 0x1da274u: goto label_1da274;
        case 0x1da278u: goto label_1da278;
        case 0x1da27cu: goto label_1da27c;
        case 0x1da280u: goto label_1da280;
        case 0x1da284u: goto label_1da284;
        case 0x1da288u: goto label_1da288;
        case 0x1da28cu: goto label_1da28c;
        case 0x1da290u: goto label_1da290;
        case 0x1da294u: goto label_1da294;
        case 0x1da298u: goto label_1da298;
        case 0x1da29cu: goto label_1da29c;
        case 0x1da2a0u: goto label_1da2a0;
        case 0x1da2a4u: goto label_1da2a4;
        case 0x1da2a8u: goto label_1da2a8;
        case 0x1da2acu: goto label_1da2ac;
        case 0x1da2b0u: goto label_1da2b0;
        case 0x1da2b4u: goto label_1da2b4;
        case 0x1da2b8u: goto label_1da2b8;
        case 0x1da2bcu: goto label_1da2bc;
        case 0x1da2c0u: goto label_1da2c0;
        case 0x1da2c4u: goto label_1da2c4;
        case 0x1da2c8u: goto label_1da2c8;
        case 0x1da2ccu: goto label_1da2cc;
        case 0x1da2d0u: goto label_1da2d0;
        case 0x1da2d4u: goto label_1da2d4;
        case 0x1da2d8u: goto label_1da2d8;
        case 0x1da2dcu: goto label_1da2dc;
        case 0x1da2e0u: goto label_1da2e0;
        case 0x1da2e4u: goto label_1da2e4;
        case 0x1da2e8u: goto label_1da2e8;
        case 0x1da2ecu: goto label_1da2ec;
        case 0x1da2f0u: goto label_1da2f0;
        case 0x1da2f4u: goto label_1da2f4;
        case 0x1da2f8u: goto label_1da2f8;
        case 0x1da2fcu: goto label_1da2fc;
        case 0x1da300u: goto label_1da300;
        case 0x1da304u: goto label_1da304;
        case 0x1da308u: goto label_1da308;
        case 0x1da30cu: goto label_1da30c;
        case 0x1da310u: goto label_1da310;
        case 0x1da314u: goto label_1da314;
        case 0x1da318u: goto label_1da318;
        case 0x1da31cu: goto label_1da31c;
        case 0x1da320u: goto label_1da320;
        case 0x1da324u: goto label_1da324;
        case 0x1da328u: goto label_1da328;
        case 0x1da32cu: goto label_1da32c;
        case 0x1da330u: goto label_1da330;
        case 0x1da334u: goto label_1da334;
        case 0x1da338u: goto label_1da338;
        case 0x1da33cu: goto label_1da33c;
        case 0x1da340u: goto label_1da340;
        case 0x1da344u: goto label_1da344;
        default: break;
    }

    ctx->pc = 0x1d86a8u;

label_1d86a8:
    // 0x1d86a8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1d86a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1d86ac:
    // 0x1d86ac: 0x3c01bba3  lui         $at, 0xBBA3
    ctx->pc = 0x1d86acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48035 << 16));
label_1d86b0:
    // 0x1d86b0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1d86b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1d86b4:
    // 0x1d86b4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1d86b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1d86b8:
    // 0x1d86b8: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x1d86b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1d86bc:
    // 0x1d86bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d86bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d86c0:
    // 0x1d86c0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1d86c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1d86c4:
    // 0x1d86c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d86c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1d86c8:
    // 0x1d86c8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1d86c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1d86cc:
    // 0x1d86cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d86ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d86d0:
    // 0x1d86d0: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x1d86d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_1d86d4:
    // 0x1d86d4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d86d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d86d8:
    // 0x1d86d8: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x1d86d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1d86dc:
    // 0x1d86dc: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1d86dcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1d86e0:
    // 0x1d86e0: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x1d86e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1d86e4:
    // 0x1d86e4: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x1d86e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
label_1d86e8:
    // 0x1d86e8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1d86e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_1d86ec:
    // 0x1d86ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d86ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1d86f0:
    // 0x1d86f0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1d86f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1d86f4:
    // 0x1d86f4: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x1d86f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
label_1d86f8:
    // 0x1d86f8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1d86f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_1d86fc:
    // 0x1d86fc: 0x3c080063  lui         $t0, 0x63
    ctx->pc = 0x1d86fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)99 << 16));
label_1d8700:
    // 0x1d8700: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1d8700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_1d8704:
    // 0x1d8704: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1d8704u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1d8708:
    // 0x1d8708: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1d8708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_1d870c:
    // 0x1d870c: 0x3c180051  lui         $t8, 0x51
    ctx->pc = 0x1d870cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)81 << 16));
label_1d8710:
    // 0x1d8710: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1d8710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_1d8714:
    // 0x1d8714: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1d8714u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1d8718:
    // 0x1d8718: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1d8718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_1d871c:
    // 0x1d871c: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1d871cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1d8720:
    // 0x1d8720: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1d8720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_1d8724:
    // 0x1d8724: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1d8724u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1d8728:
    // 0x1d8728: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1d8728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1d872c:
    // 0x1d872c: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1d872cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1d8730:
    // 0x1d8730: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1d8730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1d8734:
    // 0x1d8734: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x1d8734u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_1d8738:
    // 0x1d8738: 0xe7b90128  swc1        $f25, 0x128($sp)
    ctx->pc = 0x1d8738u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1d873c:
    // 0x1d873c: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x1d873cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_1d8740:
    // 0x1d8740: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1d8740u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1d8744:
    // 0x1d8744: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1d8744u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1d8748:
    // 0x1d8748: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1d8748u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1d874c:
    // 0x1d874c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1d874cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1d8750:
    // 0x1d8750: 0xe447ed5c  swc1        $f7, -0x12A4($v0)
    ctx->pc = 0x1d8750u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962524), bits); }
label_1d8754:
    // 0x1d8754: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1d8754u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1d8758:
    // 0x1d8758: 0xe468ed60  swc1        $f8, -0x12A0($v1)
    ctx->pc = 0x1d8758u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962528), bits); }
label_1d875c:
    // 0x1d875c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d875cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8760:
    // 0x1d8760: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d8760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1d8764:
    // 0x1d8764: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8768:
    // 0x1d8768: 0x3c013e94  lui         $at, 0x3E94
    ctx->pc = 0x1d8768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16020 << 16));
label_1d876c:
    // 0x1d876c: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1d876cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1d8770:
    // 0x1d8770: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1d8770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1d8774:
    // 0x1d8774: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1d8774u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1d8778:
    // 0x1d8778: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d8778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1d877c:
    // 0x1d877c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1d877cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1d8780:
    // 0x1d8780: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1d8780u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1d8784:
    // 0x1d8784: 0xe7d8ed78  swc1        $f24, -0x1288($fp)
    ctx->pc = 0x1d8784u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294962552), bits); }
label_1d8788:
    // 0x1d8788: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1d8788u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_1d878c:
    // 0x1d878c: 0xe456ed70  swc1        $f22, -0x1290($v0)
    ctx->pc = 0x1d878cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962544), bits); }
label_1d8790:
    // 0x1d8790: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1d8790u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d8794:
    // 0x1d8794: 0xe477ed74  swc1        $f23, -0x128C($v1)
    ctx->pc = 0x1d8794u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962548), bits); }
label_1d8798:
    // 0x1d8798: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d8798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d879c:
    // 0x1d879c: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x1d879cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
label_1d87a0:
    // 0x1d87a0: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1d87a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1d87a4:
    // 0x1d87a4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1d87a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1d87a8:
    // 0x1d87a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d87ac:
    // 0x1d87ac: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x1d87acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
label_1d87b0:
    // 0x1d87b0: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1d87b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1d87b4:
    // 0x1d87b4: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x1d87b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_1d87b8:
    // 0x1d87b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d87b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d87bc:
    // 0x1d87bc: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1d87bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_1d87c0:
    // 0x1d87c0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1d87c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1d87c4:
    // 0x1d87c4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1d87c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1d87c8:
    // 0x1d87c8: 0x3c190051  lui         $t9, 0x51
    ctx->pc = 0x1d87c8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)81 << 16));
label_1d87cc:
    // 0x1d87cc: 0x3c01bb83  lui         $at, 0xBB83
    ctx->pc = 0x1d87ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48003 << 16));
label_1d87d0:
    // 0x1d87d0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1d87d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1d87d4:
    // 0x1d87d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d87d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d87d8:
    // 0x1d87d8: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1d87d8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1d87dc:
    // 0x1d87dc: 0x3c013d71  lui         $at, 0x3D71
    ctx->pc = 0x1d87dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15729 << 16));
label_1d87e0:
    // 0x1d87e0: 0x3421a9fc  ori         $at, $at, 0xA9FC
    ctx->pc = 0x1d87e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43516);
label_1d87e4:
    // 0x1d87e4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1d87e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1d87e8:
    // 0x1d87e8: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1d87e8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_1d87ec:
    // 0x1d87ec: 0x3c013ed4  lui         $at, 0x3ED4
    ctx->pc = 0x1d87ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16084 << 16));
label_1d87f0:
    // 0x1d87f0: 0x34217ae2  ori         $at, $at, 0x7AE2
    ctx->pc = 0x1d87f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31458);
label_1d87f4:
    // 0x1d87f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d87f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d87f8:
    // 0x1d87f8: 0x3c013eee  lui         $at, 0x3EEE
    ctx->pc = 0x1d87f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16110 << 16));
label_1d87fc:
    // 0x1d87fc: 0x3421147c  ori         $at, $at, 0x147C
    ctx->pc = 0x1d87fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5244);
label_1d8800:
    // 0x1d8800: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d8800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d8804:
    // 0x1d8804: 0x3c013f03  lui         $at, 0x3F03
    ctx->pc = 0x1d8804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16131 << 16));
label_1d8808:
    // 0x1d8808: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x1d8808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
label_1d880c:
    // 0x1d880c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1d880cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1d8810:
    // 0x1d8810: 0x3c013d38  lui         $at, 0x3D38
    ctx->pc = 0x1d8810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15672 << 16));
label_1d8814:
    // 0x1d8814: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1d8814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1d8818:
    // 0x1d8818: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1d8818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1d881c:
    // 0x1d881c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1d881cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_1d8820:
    // 0x1d8820: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1d8820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1d8824:
    // 0x1d8824: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d8824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d8828:
    // 0x1d8828: 0x3c013f0a  lui         $at, 0x3F0A
    ctx->pc = 0x1d8828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16138 << 16));
label_1d882c:
    // 0x1d882c: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1d882cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1d8830:
    // 0x1d8830: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x1d8830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_1d8834:
    // 0x1d8834: 0x3c013e85  lui         $at, 0x3E85
    ctx->pc = 0x1d8834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16005 << 16));
label_1d8838:
    // 0x1d8838: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1d8838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1d883c:
    // 0x1d883c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d883cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d8840:
    // 0x1d8840: 0xe4a9ed64  swc1        $f9, -0x129C($a1)
    ctx->pc = 0x1d8840u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962532), bits); }
label_1d8844:
    // 0x1d8844: 0xe4c3e780  swc1        $f3, -0x1880($a2)
    ctx->pc = 0x1d8844u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294961024), bits); }
label_1d8848:
    // 0x1d8848: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d8848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d884c:
    // 0x1d884c: 0xe4e4e784  swc1        $f4, -0x187C($a3)
    ctx->pc = 0x1d884cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294961028), bits); }
label_1d8850:
    // 0x1d8850: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1d8850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1d8854:
    // 0x1d8854: 0xe505e788  swc1        $f5, -0x1878($t0)
    ctx->pc = 0x1d8854u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294961032), bits); }
label_1d8858:
    // 0x1d8858: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1d8858u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1d885c:
    // 0x1d885c: 0xe526ed90  swc1        $f6, -0x1270($t1)
    ctx->pc = 0x1d885cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294962576), bits); }
label_1d8860:
    // 0x1d8860: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1d8860u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1d8864:
    // 0x1d8864: 0xe542ed34  swc1        $f2, -0x12CC($t2)
    ctx->pc = 0x1d8864u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294962484), bits); }
label_1d8868:
    // 0x1d8868: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1d8868u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d886c:
    // 0x1d886c: 0xe492ed88  swc1        $f18, -0x1278($a0)
    ctx->pc = 0x1d886cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962568), bits); }
label_1d8870:
    // 0x1d8870: 0xe44aed9c  swc1        $f10, -0x1264($v0)
    ctx->pc = 0x1d8870u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962588), bits); }
label_1d8874:
    // 0x1d8874: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d8874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d8878:
    // 0x1d8878: 0xe475eda0  swc1        $f21, -0x1260($v1)
    ctx->pc = 0x1d8878u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962592), bits); }
label_1d887c:
    // 0x1d887c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d887cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8880:
    // 0x1d8880: 0xe56aed68  swc1        $f10, -0x1298($t3)
    ctx->pc = 0x1d8880u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294962536), bits); }
label_1d8884:
    // 0x1d8884: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8888:
    // 0x1d8888: 0xe5a6ed8c  swc1        $f6, -0x1274($t5)
    ctx->pc = 0x1d8888u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294962572), bits); }
label_1d888c:
    // 0x1d888c: 0xe714eda4  swc1        $f20, -0x125C($t8)
    ctx->pc = 0x1d888cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4294962596), bits); }
label_1d8890:
    // 0x1d8890: 0xe6f3eda8  swc1        $f19, -0x1258($s7)
    ctx->pc = 0x1d8890u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294962600), bits); }
label_1d8894:
    // 0x1d8894: 0xe440ed6c  swc1        $f0, -0x1294($v0)
    ctx->pc = 0x1d8894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962540), bits); }
label_1d8898:
    // 0x1d8898: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1d8898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_1d889c:
    // 0x1d889c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1d889cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1d88a0:
    // 0x1d88a0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1d88a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_1d88a4:
    // 0x1d88a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d88a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d88a8:
    // 0x1d88a8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1d88a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1d88ac:
    // 0x1d88ac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1d88acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1d88b0:
    // 0x1d88b0: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1d88b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1d88b4:
    // 0x1d88b4: 0xe479ed7c  swc1        $f25, -0x1284($v1)
    ctx->pc = 0x1d88b4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962556), bits); }
label_1d88b8:
    // 0x1d88b8: 0xe452ed84  swc1        $f18, -0x127C($v0)
    ctx->pc = 0x1d88b8u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962564), bits); }
label_1d88bc:
    // 0x1d88bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d88bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d88c0:
    // 0x1d88c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d88c4:
    // 0x1d88c4: 0xe460ed94  swc1        $f0, -0x126C($v1)
    ctx->pc = 0x1d88c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962580), bits); }
label_1d88c8:
    // 0x1d88c8: 0xe450ed98  swc1        $f16, -0x1268($v0)
    ctx->pc = 0x1d88c8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962584), bits); }
label_1d88cc:
    // 0x1d88cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d88d0:
    // 0x1d88d0: 0x3c013ebd  lui         $at, 0x3EBD
    ctx->pc = 0x1d88d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16061 << 16));
label_1d88d4:
    // 0x1d88d4: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1d88d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_1d88d8:
    // 0x1d88d8: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x1d88d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_1d88dc:
    // 0x1d88dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d88e0:
    // 0x1d88e0: 0x3c013ecf  lui         $at, 0x3ECF
    ctx->pc = 0x1d88e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16079 << 16));
label_1d88e4:
    // 0x1d88e4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1d88e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1d88e8:
    // 0x1d88e8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1d88e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1d88ec:
    // 0x1d88ec: 0x3c013ee8  lui         $at, 0x3EE8
    ctx->pc = 0x1d88ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16104 << 16));
label_1d88f0:
    // 0x1d88f0: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1d88f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1d88f4:
    // 0x1d88f4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1d88f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d88f8:
    // 0x1d88f8: 0x3c013efa  lui         $at, 0x3EFA
    ctx->pc = 0x1d88f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16122 << 16));
label_1d88fc:
    // 0x1d88fc: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1d88fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_1d8900:
    // 0x1d8900: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1d8900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1d8904:
    // 0x1d8904: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1d8904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1d8908:
    // 0x1d8908: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1d8908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1d890c:
    // 0x1d890c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1d890cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1d8910:
    // 0x1d8910: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1d8910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_1d8914:
    // 0x1d8914: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1d8914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1d8918:
    // 0x1d8918: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d8918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d891c:
    // 0x1d891c: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x1d891cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
label_1d8920:
    // 0x1d8920: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1d8920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_1d8924:
    // 0x1d8924: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d8924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d8928:
    // 0x1d8928: 0xe460edac  swc1        $f0, -0x1254($v1)
    ctx->pc = 0x1d8928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962604), bits); }
label_1d892c:
    // 0x1d892c: 0xe440edb4  swc1        $f0, -0x124C($v0)
    ctx->pc = 0x1d892cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962612), bits); }
label_1d8930:
    // 0x1d8930: 0xe640edc4  swc1        $f0, -0x123C($s2)
    ctx->pc = 0x1d8930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294962628), bits); }
label_1d8934:
    // 0x1d8934: 0xe6d1edb0  swc1        $f17, -0x1250($s6)
    ctx->pc = 0x1d8934u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4294962608), bits); }
label_1d8938:
    // 0x1d8938: 0xe6afedb8  swc1        $f15, -0x1248($s5)
    ctx->pc = 0x1d8938u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294962616), bits); }
label_1d893c:
    // 0x1d893c: 0xe68dedbc  swc1        $f13, -0x1244($s4)
    ctx->pc = 0x1d893cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294962620), bits); }
label_1d8940:
    // 0x1d8940: 0xe66bedc0  swc1        $f11, -0x1240($s3)
    ctx->pc = 0x1d8940u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294962624), bits); }
label_1d8944:
    // 0x1d8944: 0xe630edc8  swc1        $f16, -0x1238($s1)
    ctx->pc = 0x1d8944u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294962632), bits); }
label_1d8948:
    // 0x1d8948: 0xe60eedcc  swc1        $f14, -0x1234($s0)
    ctx->pc = 0x1d8948u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294962636), bits); }
label_1d894c:
    // 0x1d894c: 0xe5eced30  swc1        $f12, -0x12D0($t7)
    ctx->pc = 0x1d894cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294962480), bits); }
label_1d8950:
    // 0x1d8950: 0xe721ed38  swc1        $f1, -0x12C8($t9)
    ctx->pc = 0x1d8950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4294962488), bits); }
label_1d8954:
    // 0x1d8954: 0x8d82489c  lw          $v0, 0x489C($t4)
    ctx->pc = 0x1d8954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 18588)));
label_1d8958:
    // 0x1d8958: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x1d8958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
label_1d895c:
    // 0x1d895c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1d895cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1d8960:
    // 0x1d8960: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d8960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d8964:
    // 0x1d8964: 0x3c013ec2  lui         $at, 0x3EC2
    ctx->pc = 0x1d8964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16066 << 16));
label_1d8968:
    // 0x1d8968: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1d8968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1d896c:
    // 0x1d896c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d896cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d8970:
    // 0x1d8970: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d8970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d8974:
    // 0x1d8974: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d8974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d8978:
    // 0x1d8978: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x1d8978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_1d897c:
    // 0x1d897c: 0xe4e0ed48  swc1        $f0, -0x12B8($a3)
    ctx->pc = 0x1d897cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294962504), bits); }
label_1d8980:
    // 0x1d8980: 0xad00ed3c  sw          $zero, -0x12C4($t0)
    ctx->pc = 0x1d8980u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294962492), GPR_U32(ctx, 0));
label_1d8984:
    // 0x1d8984: 0xe5d9ed40  swc1        $f25, -0x12C0($t6)
    ctx->pc = 0x1d8984u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294962496), bits); }
label_1d8988:
    // 0x1d8988: 0xe4c1ed4c  swc1        $f1, -0x12B4($a2)
    ctx->pc = 0x1d8988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294962508), bits); }
label_1d898c:
    // 0x1d898c: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
label_1d8990:
    if (ctx->pc == 0x1D8990u) {
        ctx->pc = 0x1D8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D898Cu;
        // 0x1d8990: 0xe4a2ed44  swc1        $f2, -0x12BC($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962500), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8994u;
        goto label_1d8994;
    }
    ctx->pc = 0x1D898Cu;
    {
        const bool branch_taken_0x1d898c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D898Cu;
        // 0x1d8990: 0xe4a2ed44  swc1        $f2, -0x12BC($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962500), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d898c) {
            ctx->pc = 0x1D89ACu;
            goto label_1d89ac;
        }
    }
    ctx->pc = 0x1D8994u;
label_1d8994:
    // 0x1d8994: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1d8994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1d8998:
    // 0x1d8998: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d8998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1d899c:
    // 0x1d899c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d899cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d89a0:
    // 0x1d89a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d89a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d89a4:
    // 0x1d89a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d89a8:
    if (ctx->pc == 0x1D89A8u) {
        ctx->pc = 0x1D89A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89A4u;
        // 0x1d89a8: 0xe440edd0  swc1        $f0, -0x1230($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962640), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D89ACu;
        goto label_1d89ac;
    }
    ctx->pc = 0x1D89A4u;
    {
        const bool branch_taken_0x1d89a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D89A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89A4u;
        // 0x1d89a8: 0xe440edd0  swc1        $f0, -0x1230($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962640), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89a4) {
            ctx->pc = 0x1D89B4u;
            goto label_1d89b4;
        }
    }
    ctx->pc = 0x1D89ACu;
label_1d89ac:
    // 0x1d89ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d89acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d89b0:
    // 0x1d89b0: 0xac40edd0  sw          $zero, -0x1230($v0)
    ctx->pc = 0x1d89b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962640), GPR_U32(ctx, 0));
label_1d89b4:
    // 0x1d89b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d89b8:
    // 0x1d89b8: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1d89b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1d89bc:
    // 0x1d89bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d89bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d89c0:
    // 0x1d89c0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d89c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1d89c4:
    // 0x1d89c4: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_1d89c8:
    if (ctx->pc == 0x1D89C8u) {
        ctx->pc = 0x1D89C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89C4u;
        // 0x1d89c8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D89CCu;
        goto label_1d89cc;
    }
    ctx->pc = 0x1D89C4u;
    {
        const bool branch_taken_0x1d89c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D89C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89C4u;
        // 0x1d89c8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89c4) {
            ctx->pc = 0x1D8AE4u;
            goto label_1d8ae4;
        }
    }
    ctx->pc = 0x1D89CCu;
label_1d89cc:
    // 0x1d89cc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1d89d0:
    if (ctx->pc == 0x1D89D0u) {
        ctx->pc = 0x1D89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89CCu;
        // 0x1d89d0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D89D4u;
        goto label_1d89d4;
    }
    ctx->pc = 0x1D89CCu;
    {
        const bool branch_taken_0x1d89cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89CCu;
        // 0x1d89d0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89cc) {
            ctx->pc = 0x1D8A0Cu;
            goto label_1d8a0c;
        }
    }
    ctx->pc = 0x1D89D4u;
label_1d89d4:
    // 0x1d89d4: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x1d89d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
label_1d89d8:
    // 0x1d89d8: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1d89d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1d89dc:
    // 0x1d89dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d89dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d89e0:
    // 0x1d89e0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1d89e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1d89e4:
    // 0x1d89e4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1d89e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1d89e8:
    // 0x1d89e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d89e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d89ec:
    // 0x1d89ec: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d89ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d89f0:
    // 0x1d89f0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1d89f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1d89f4:
    // 0x1d89f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d89f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1d89f8:
    // 0x1d89f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d89f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d89fc:
    // 0x1d89fc: 0xe460ed30  swc1        $f0, -0x12D0($v1)
    ctx->pc = 0x1d89fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962480), bits); }
label_1d8a00:
    // 0x1d8a00: 0xe521ed44  swc1        $f1, -0x12BC($t1)
    ctx->pc = 0x1d8a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294962500), bits); }
label_1d8a04:
    // 0x1d8a04: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_1d8a08:
    if (ctx->pc == 0x1D8A08u) {
        ctx->pc = 0x1D8A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A04u;
        // 0x1d8a08: 0xe482edd0  swc1        $f2, -0x1230($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962640), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8A0Cu;
        goto label_1d8a0c;
    }
    ctx->pc = 0x1D8A04u;
    {
        const bool branch_taken_0x1d8a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A04u;
        // 0x1d8a08: 0xe482edd0  swc1        $f2, -0x1230($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962640), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a04) {
            ctx->pc = 0x1D8C9Cu;
            goto label_1d8c9c;
        }
    }
    ctx->pc = 0x1D8A0Cu;
label_1d8a0c:
    // 0x1d8a0c: 0x3c013ea3  lui         $at, 0x3EA3
    ctx->pc = 0x1d8a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16035 << 16));
label_1d8a10:
    // 0x1d8a10: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1d8a10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1d8a14:
    // 0x1d8a14: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1d8a14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1d8a18:
    // 0x1d8a18: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d8a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d8a1c:
    // 0x1d8a1c: 0x3c013d38  lui         $at, 0x3D38
    ctx->pc = 0x1d8a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15672 << 16));
label_1d8a20:
    // 0x1d8a20: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1d8a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1d8a24:
    // 0x1d8a24: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d8a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d8a28:
    // 0x1d8a28: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8a2c:
    // 0x1d8a2c: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1d8a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_1d8a30:
    // 0x1d8a30: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d8a30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1d8a34:
    // 0x1d8a34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d8a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d8a38:
    // 0x1d8a38: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8a3c:
    // 0x1d8a3c: 0x3c013ebd  lui         $at, 0x3EBD
    ctx->pc = 0x1d8a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16061 << 16));
label_1d8a40:
    // 0x1d8a40: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1d8a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_1d8a44:
    // 0x1d8a44: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1d8a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1d8a48:
    // 0x1d8a48: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d8a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d8a4c:
    // 0x1d8a4c: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x1d8a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
label_1d8a50:
    // 0x1d8a50: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1d8a50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1d8a54:
    // 0x1d8a54: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d8a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d8a58:
    // 0x1d8a58: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1d8a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_1d8a5c:
    // 0x1d8a5c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1d8a5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1d8a60:
    // 0x1d8a60: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1d8a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1d8a64:
    // 0x1d8a64: 0x3c013ec2  lui         $at, 0x3EC2
    ctx->pc = 0x1d8a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16066 << 16));
label_1d8a68:
    // 0x1d8a68: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1d8a68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1d8a6c:
    // 0x1d8a6c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1d8a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1d8a70:
    // 0x1d8a70: 0xe4a1ed30  swc1        $f1, -0x12D0($a1)
    ctx->pc = 0x1d8a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962480), bits); }
label_1d8a74:
    // 0x1d8a74: 0xe448edc8  swc1        $f8, -0x1238($v0)
    ctx->pc = 0x1d8a74u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962632), bits); }
label_1d8a78:
    // 0x1d8a78: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d8a78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d8a7c:
    // 0x1d8a7c: 0xe463ed9c  swc1        $f3, -0x1264($v1)
    ctx->pc = 0x1d8a7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962588), bits); }
label_1d8a80:
    // 0x1d8a80: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8a84:
    // 0x1d8a84: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8a88:
    // 0x1d8a88: 0x3c013ed4  lui         $at, 0x3ED4
    ctx->pc = 0x1d8a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16084 << 16));
label_1d8a8c:
    // 0x1d8a8c: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1d8a8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_1d8a90:
    // 0x1d8a90: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1d8a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1d8a94:
    // 0x1d8a94: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1d8a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1d8a98:
    // 0x1d8a98: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1d8a98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1d8a9c:
    // 0x1d8a9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d8a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d8aa0:
    // 0x1d8aa0: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1d8aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_1d8aa4:
    // 0x1d8aa4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1d8aa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1d8aa8:
    // 0x1d8aa8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d8aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d8aac:
    // 0x1d8aac: 0xe484ed70  swc1        $f4, -0x1290($a0)
    ctx->pc = 0x1d8aacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962544), bits); }
label_1d8ab0:
    // 0x1d8ab0: 0xe4a9ed88  swc1        $f9, -0x1278($a1)
    ctx->pc = 0x1d8ab0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962568), bits); }
label_1d8ab4:
    // 0x1d8ab4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d8ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d8ab8:
    // 0x1d8ab8: 0xe445eda0  swc1        $f5, -0x1260($v0)
    ctx->pc = 0x1d8ab8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962592), bits); }
label_1d8abc:
    // 0x1d8abc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d8abcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d8ac0:
    // 0x1d8ac0: 0xe466edb0  swc1        $f6, -0x1250($v1)
    ctx->pc = 0x1d8ac0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962608), bits); }
label_1d8ac4:
    // 0x1d8ac4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8ac8:
    // 0x1d8ac8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8acc:
    // 0x1d8acc: 0xe520ed44  swc1        $f0, -0x12BC($t1)
    ctx->pc = 0x1d8accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294962500), bits); }
label_1d8ad0:
    // 0x1d8ad0: 0xe487edb8  swc1        $f7, -0x1248($a0)
    ctx->pc = 0x1d8ad0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962616), bits); }
label_1d8ad4:
    // 0x1d8ad4: 0xe4a2edd0  swc1        $f2, -0x1230($a1)
    ctx->pc = 0x1d8ad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962640), bits); }
label_1d8ad8:
    // 0x1d8ad8: 0xe448ed98  swc1        $f8, -0x1268($v0)
    ctx->pc = 0x1d8ad8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962584), bits); }
label_1d8adc:
    // 0x1d8adc: 0x1000006f  b           . + 4 + (0x6F << 2)
label_1d8ae0:
    if (ctx->pc == 0x1D8AE0u) {
        ctx->pc = 0x1D8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ADCu;
        // 0x1d8ae0: 0xe469ed84  swc1        $f9, -0x127C($v1) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8AE4u;
        goto label_1d8ae4;
    }
    ctx->pc = 0x1D8ADCu;
    {
        const bool branch_taken_0x1d8adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ADCu;
        // 0x1d8ae0: 0xe469ed84  swc1        $f9, -0x127C($v1) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8adc) {
            ctx->pc = 0x1D8C9Cu;
            goto label_1d8c9c;
        }
    }
    ctx->pc = 0x1D8AE4u;
label_1d8ae4:
    // 0x1d8ae4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1d8ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1d8ae8:
    // 0x1d8ae8: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_1d8aec:
    if (ctx->pc == 0x1D8AECu) {
        ctx->pc = 0x1D8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AE8u;
        // 0x1d8aec: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8AF0u;
        goto label_1d8af0;
    }
    ctx->pc = 0x1D8AE8u;
    {
        const bool branch_taken_0x1d8ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AE8u;
        // 0x1d8aec: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ae8) {
            ctx->pc = 0x1D8BF0u;
            goto label_1d8bf0;
        }
    }
    ctx->pc = 0x1D8AF0u;
label_1d8af0:
    // 0x1d8af0: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x1d8af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_1d8af4:
    // 0x1d8af4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1d8af4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1d8af8:
    // 0x1d8af8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d8af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d8afc:
    // 0x1d8afc: 0x3c013eae  lui         $at, 0x3EAE
    ctx->pc = 0x1d8afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16046 << 16));
label_1d8b00:
    // 0x1d8b00: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1d8b00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1d8b04:
    // 0x1d8b04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d8b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d8b08:
    // 0x1d8b08: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d8b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d8b0c:
    // 0x1d8b0c: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x1d8b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
label_1d8b10:
    // 0x1d8b10: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1d8b10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1d8b14:
    // 0x1d8b14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d8b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d8b18:
    // 0x1d8b18: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8b1c:
    // 0x1d8b1c: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x1d8b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
label_1d8b20:
    // 0x1d8b20: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1d8b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1d8b24:
    // 0x1d8b24: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1d8b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1d8b28:
    // 0x1d8b28: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8b2c:
    // 0x1d8b2c: 0x3c013d85  lui         $at, 0x3D85
    ctx->pc = 0x1d8b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15749 << 16));
label_1d8b30:
    // 0x1d8b30: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1d8b30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1d8b34:
    // 0x1d8b34: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1d8b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1d8b38:
    // 0x1d8b38: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x1d8b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
label_1d8b3c:
    // 0x1d8b3c: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1d8b3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1d8b40:
    // 0x1d8b40: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d8b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d8b44:
    // 0x1d8b44: 0xe481ed40  swc1        $f1, -0x12C0($a0)
    ctx->pc = 0x1d8b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962496), bits); }
label_1d8b48:
    // 0x1d8b48: 0xe4a2ed4c  swc1        $f2, -0x12B4($a1)
    ctx->pc = 0x1d8b48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962508), bits); }
label_1d8b4c:
    // 0x1d8b4c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d8b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d8b50:
    // 0x1d8b50: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d8b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d8b54:
    // 0x1d8b54: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1d8b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1d8b58:
    // 0x1d8b58: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1d8b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1d8b5c:
    // 0x1d8b5c: 0x3c013ea1  lui         $at, 0x3EA1
    ctx->pc = 0x1d8b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16033 << 16));
label_1d8b60:
    // 0x1d8b60: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1d8b60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1d8b64:
    // 0x1d8b64: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1d8b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1d8b68:
    // 0x1d8b68: 0x3c013ec5  lui         $at, 0x3EC5
    ctx->pc = 0x1d8b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16069 << 16));
label_1d8b6c:
    // 0x1d8b6c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1d8b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1d8b70:
    // 0x1d8b70: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1d8b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1d8b74:
    // 0x1d8b74: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x1d8b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_1d8b78:
    // 0x1d8b78: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1d8b78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_1d8b7c:
    // 0x1d8b7c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1d8b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1d8b80:
    // 0x1d8b80: 0xe449ed9c  swc1        $f9, -0x1264($v0)
    ctx->pc = 0x1d8b80u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962588), bits); }
label_1d8b84:
    // 0x1d8b84: 0xe46aeda0  swc1        $f10, -0x1260($v1)
    ctx->pc = 0x1d8b84u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962592), bits); }
label_1d8b88:
    // 0x1d8b88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8b8c:
    // 0x1d8b8c: 0xe480edc8  swc1        $f0, -0x1238($a0)
    ctx->pc = 0x1d8b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962632), bits); }
label_1d8b90:
    // 0x1d8b90: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8b94:
    // 0x1d8b94: 0xe4a4edb0  swc1        $f4, -0x1250($a1)
    ctx->pc = 0x1d8b94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962608), bits); }
label_1d8b98:
    // 0x1d8b98: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d8b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d8b9c:
    // 0x1d8b9c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d8b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d8ba0:
    // 0x1d8ba0: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1d8ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_1d8ba4:
    // 0x1d8ba4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1d8ba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1d8ba8:
    // 0x1d8ba8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d8ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d8bac:
    // 0x1d8bac: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1d8bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_1d8bb0:
    // 0x1d8bb0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1d8bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1d8bb4:
    // 0x1d8bb4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1d8bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1d8bb8:
    // 0x1d8bb8: 0xe445edb8  swc1        $f5, -0x1248($v0)
    ctx->pc = 0x1d8bb8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962616), bits); }
label_1d8bbc:
    // 0x1d8bbc: 0xe466edbc  swc1        $f6, -0x1244($v1)
    ctx->pc = 0x1d8bbcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962620), bits); }
label_1d8bc0:
    // 0x1d8bc0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8bc4:
    // 0x1d8bc4: 0xe487edc0  swc1        $f7, -0x1240($a0)
    ctx->pc = 0x1d8bc4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962624), bits); }
label_1d8bc8:
    // 0x1d8bc8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8bcc:
    // 0x1d8bcc: 0xe4abed88  swc1        $f11, -0x1278($a1)
    ctx->pc = 0x1d8bccu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962568), bits); }
label_1d8bd0:
    // 0x1d8bd0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d8bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d8bd4:
    // 0x1d8bd4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d8bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d8bd8:
    // 0x1d8bd8: 0xe523ed44  swc1        $f3, -0x12BC($t1)
    ctx->pc = 0x1d8bd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294962500), bits); }
label_1d8bdc:
    // 0x1d8bdc: 0xe448ed7c  swc1        $f8, -0x1284($v0)
    ctx->pc = 0x1d8bdcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962556), bits); }
label_1d8be0:
    // 0x1d8be0: 0xe460ed98  swc1        $f0, -0x1268($v1)
    ctx->pc = 0x1d8be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962584), bits); }
label_1d8be4:
    // 0x1d8be4: 0xe480ed70  swc1        $f0, -0x1290($a0)
    ctx->pc = 0x1d8be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962544), bits); }
label_1d8be8:
    // 0x1d8be8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1d8bec:
    if (ctx->pc == 0x1D8BECu) {
        ctx->pc = 0x1D8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BE8u;
        // 0x1d8bec: 0xe4abed84  swc1        $f11, -0x127C($a1) (Delay Slot)
        { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8BF0u;
        goto label_1d8bf0;
    }
    ctx->pc = 0x1D8BE8u;
    {
        const bool branch_taken_0x1d8be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BE8u;
        // 0x1d8bec: 0xe4abed84  swc1        $f11, -0x127C($a1) (Delay Slot)
        { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8be8) {
            ctx->pc = 0x1D8C9Cu;
            goto label_1d8c9c;
        }
    }
    ctx->pc = 0x1D8BF0u;
label_1d8bf0:
    // 0x1d8bf0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1d8bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1d8bf4:
    // 0x1d8bf4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_1d8bf8:
    if (ctx->pc == 0x1D8BF8u) {
        ctx->pc = 0x1D8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BF4u;
        // 0x1d8bf8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8BFCu;
        goto label_1d8bfc;
    }
    ctx->pc = 0x1D8BF4u;
    {
        const bool branch_taken_0x1d8bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BF4u;
        // 0x1d8bf8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8bf4) {
            ctx->pc = 0x1D8C9Cu;
            goto label_1d8c9c;
        }
    }
    ctx->pc = 0x1D8BFCu;
label_1d8bfc:
    // 0x1d8bfc: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x1d8bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
label_1d8c00:
    // 0x1d8c00: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1d8c00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1d8c04:
    // 0x1d8c04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d8c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d8c08:
    // 0x1d8c08: 0x3c013eae  lui         $at, 0x3EAE
    ctx->pc = 0x1d8c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16046 << 16));
label_1d8c0c:
    // 0x1d8c0c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1d8c0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1d8c10:
    // 0x1d8c10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d8c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d8c14:
    // 0x1d8c14: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8c18:
    // 0x1d8c18: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1d8c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1d8c1c:
    // 0x1d8c1c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1d8c1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1d8c20:
    // 0x1d8c20: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1d8c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1d8c24:
    // 0x1d8c24: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d8c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d8c28:
    // 0x1d8c28: 0x3c013e9e  lui         $at, 0x3E9E
    ctx->pc = 0x1d8c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16030 << 16));
label_1d8c2c:
    // 0x1d8c2c: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1d8c2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1d8c30:
    // 0x1d8c30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d8c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d8c34:
    // 0x1d8c34: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d8c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d8c38:
    // 0x1d8c38: 0x3c013eb0  lui         $at, 0x3EB0
    ctx->pc = 0x1d8c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16048 << 16));
label_1d8c3c:
    // 0x1d8c3c: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1d8c3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_1d8c40:
    // 0x1d8c40: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d8c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d8c44:
    // 0x1d8c44: 0x3c013eca  lui         $at, 0x3ECA
    ctx->pc = 0x1d8c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16074 << 16));
label_1d8c48:
    // 0x1d8c48: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1d8c48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_1d8c4c:
    // 0x1d8c4c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d8c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d8c50:
    // 0x1d8c50: 0xe441ed4c  swc1        $f1, -0x12B4($v0)
    ctx->pc = 0x1d8c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962508), bits); }
label_1d8c54:
    // 0x1d8c54: 0xe460edc8  swc1        $f0, -0x1238($v1)
    ctx->pc = 0x1d8c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962632), bits); }
label_1d8c58:
    // 0x1d8c58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8c5c:
    // 0x1d8c5c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8c60:
    // 0x1d8c60: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x1d8c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_1d8c64:
    // 0x1d8c64: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1d8c64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_1d8c68:
    // 0x1d8c68: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1d8c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1d8c6c:
    // 0x1d8c6c: 0xe486ed88  swc1        $f6, -0x1278($a0)
    ctx->pc = 0x1d8c6cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962568), bits); }
label_1d8c70:
    // 0x1d8c70: 0xe4a2edb0  swc1        $f2, -0x1250($a1)
    ctx->pc = 0x1d8c70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962608), bits); }
label_1d8c74:
    // 0x1d8c74: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d8c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d8c78:
    // 0x1d8c78: 0xe443edb8  swc1        $f3, -0x1248($v0)
    ctx->pc = 0x1d8c78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962616), bits); }
label_1d8c7c:
    // 0x1d8c7c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d8c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d8c80:
    // 0x1d8c80: 0xe464edbc  swc1        $f4, -0x1244($v1)
    ctx->pc = 0x1d8c80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962620), bits); }
label_1d8c84:
    // 0x1d8c84: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8c88:
    // 0x1d8c88: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8c8c:
    // 0x1d8c8c: 0xe485edc0  swc1        $f5, -0x1240($a0)
    ctx->pc = 0x1d8c8cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962624), bits); }
label_1d8c90:
    // 0x1d8c90: 0xe4a0ed98  swc1        $f0, -0x1268($a1)
    ctx->pc = 0x1d8c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962584), bits); }
label_1d8c94:
    // 0x1d8c94: 0xe440ed70  swc1        $f0, -0x1290($v0)
    ctx->pc = 0x1d8c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962544), bits); }
label_1d8c98:
    // 0x1d8c98: 0xe466ed84  swc1        $f6, -0x127C($v1)
    ctx->pc = 0x1d8c98u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962564), bits); }
label_1d8c9c:
    // 0x1d8c9c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1d8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1d8ca0:
    // 0x1d8ca0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d8ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d8ca4:
    // 0x1d8ca4: 0x8c450350  lw          $a1, 0x350($v0)
    ctx->pc = 0x1d8ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
label_1d8ca8:
    // 0x1d8ca8: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1d8ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_1d8cac:
    // 0x1d8cac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d8cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d8cb0:
    // 0x1d8cb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d8cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d8cb4:
    // 0x1d8cb4: 0xc06ba26  jal         func_1AE898
label_1d8cb8:
    if (ctx->pc == 0x1D8CB8u) {
        ctx->pc = 0x1D8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8CB4u;
        // 0x1d8cb8: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8CBCu;
        goto label_1d8cbc;
    }
    ctx->pc = 0x1D8CB4u;
    SET_GPR_U32(ctx, 31, 0x1D8CBCu);
    ctx->pc = 0x1D8CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8CB4u;
    // 0x1d8cb8: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1D8CB4u, 0x1D8CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8CBCu;
label_1d8cbc:
    // 0x1d8cbc: 0x27d207a0  addiu       $s2, $fp, 0x7A0
    ctx->pc = 0x1d8cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 1952));
label_1d8cc0:
    // 0x1d8cc0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d8cc4:
    // 0x1d8cc4: 0x27d30990  addiu       $s3, $fp, 0x990
    ctx->pc = 0x1d8cc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 2448));
label_1d8cc8:
    // 0x1d8cc8: 0xc48ceda4  lwc1        $f12, -0x125C($a0)
    ctx->pc = 0x1d8cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294962596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d8ccc:
    // 0x1d8ccc: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x1d8cccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d8cd0:
    // 0x1d8cd0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d8cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d8cd4:
    // 0x1d8cd4: 0xc05e602  jal         func_179808
label_1d8cd8:
    if (ctx->pc == 0x1D8CD8u) {
        ctx->pc = 0x1D8CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8CD4u;
        // 0x1d8cd8: 0xafc20040  sw          $v0, 0x40($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8CDCu;
        goto label_1d8cdc;
    }
    ctx->pc = 0x1D8CD4u;
    SET_GPR_U32(ctx, 31, 0x1D8CDCu);
    ctx->pc = 0x1D8CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8CD4u;
    // 0x1d8cd8: 0xafc20040  sw          $v0, 0x40($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1D8CD4u, 0x1D8CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8CDCu;
label_1d8cdc:
    // 0x1d8cdc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8ce0:
    // 0x1d8ce0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d8ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d8ce4:
    // 0x1d8ce4: 0xc440ed94  lwc1        $f0, -0x126C($v0)
    ctx->pc = 0x1d8ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8ce8:
    // 0x1d8ce8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8cec:
    // 0x1d8cec: 0xc461ed98  lwc1        $f1, -0x1268($v1)
    ctx->pc = 0x1d8cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8cf0:
    // 0x1d8cf0: 0x24b5ed9c  addiu       $s5, $a1, -0x1264
    ctx->pc = 0x1d8cf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962588));
label_1d8cf4:
    // 0x1d8cf4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1d8cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d8cf8:
    // 0x1d8cf8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d8cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d8cfc:
    // 0x1d8cfc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1d8cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1d8d00:
    // 0x1d8d00: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8d04:
    // 0x1d8d04: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1d8d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1d8d08:
    // 0x1d8d08: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1d8d08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d8d0c:
    // 0x1d8d0c: 0xe4b4000c  swc1        $f20, 0xC($a1)
    ctx->pc = 0x1d8d0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1d8d10:
    // 0x1d8d10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d8d10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d8d14:
    // 0x1d8d14: 0xc44deda4  lwc1        $f13, -0x125C($v0)
    ctx->pc = 0x1d8d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d8d18:
    // 0x1d8d18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d8d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8d1c:
    // 0x1d8d1c: 0x8fc307a0  lw          $v1, 0x7A0($fp)
    ctx->pc = 0x1d8d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1952)));
label_1d8d20:
    // 0x1d8d20: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d8d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8d24:
    // 0x1d8d24: 0x8e06d310  lw          $a2, -0x2CF0($s0)
    ctx->pc = 0x1d8d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955792)));
label_1d8d28:
    // 0x1d8d28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8d28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8d2c:
    // 0x1d8d2c: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1d8d2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1d8d30:
    // 0x1d8d30: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1d8d30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d8d34:
    // 0x1d8d34: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d8d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1d8d38:
    // 0x1d8d38: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d8d38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8d3c:
    // 0x1d8d3c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1d8d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1d8d40:
    // 0x1d8d40: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1d8d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1d8d44:
    // 0x1d8d44: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8d48:
    // 0x1d8d48: 0x40f809  jalr        $v0
label_1d8d4c:
    if (ctx->pc == 0x1D8D4Cu) {
        ctx->pc = 0x1D8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D48u;
        // 0x1d8d4c: 0x2474ed98  addiu       $s4, $v1, -0x1268 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8D50u;
        goto label_1d8d50;
    }
    ctx->pc = 0x1D8D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D8D50u);
        ctx->pc = 0x1D8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D48u;
        // 0x1d8d4c: 0x2474ed98  addiu       $s4, $v1, -0x1268 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8D48u, 0x1D8D50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8D50u;
label_1d8d50:
    // 0x1d8d50: 0x8fd007a0  lw          $s0, 0x7A0($fp)
    ctx->pc = 0x1d8d50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1952)));
label_1d8d54:
    // 0x1d8d54: 0x24040117  addiu       $a0, $zero, 0x117
    ctx->pc = 0x1d8d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
label_1d8d58:
    // 0x1d8d58: 0x861100e8  lh          $s1, 0xE8($s0)
    ctx->pc = 0x1d8d58u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
label_1d8d5c:
    // 0x1d8d5c: 0x261000e8  addiu       $s0, $s0, 0xE8
    ctx->pc = 0x1d8d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_1d8d60:
    // 0x1d8d60: 0xc067b9c  jal         func_19EE70
label_1d8d64:
    if (ctx->pc == 0x1D8D64u) {
        ctx->pc = 0x1D8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D60u;
        // 0x1d8d64: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8D68u;
        goto label_1d8d68;
    }
    ctx->pc = 0x1D8D60u;
    SET_GPR_U32(ctx, 31, 0x1D8D68u);
    ctx->pc = 0x1D8D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8D60u;
    // 0x1d8d64: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D8D60u, 0x1D8D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8D68u;
label_1d8d68:
    // 0x1d8d68: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d8d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d8d6c:
    // 0x1d8d6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d8d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d8d70:
    // 0x1d8d70: 0x60f809  jalr        $v1
label_1d8d74:
    if (ctx->pc == 0x1D8D74u) {
        ctx->pc = 0x1D8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D70u;
        // 0x1d8d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8D78u;
        goto label_1d8d78;
    }
    ctx->pc = 0x1D8D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8D78u);
        ctx->pc = 0x1D8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D70u;
        // 0x1d8d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8D70u, 0x1D8D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8D78u;
label_1d8d78:
    // 0x1d8d78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d8d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d8d7c:
    // 0x1d8d7c: 0xc06e51e  jal         func_1B9478
label_1d8d80:
    if (ctx->pc == 0x1D8D80u) {
        ctx->pc = 0x1D8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D7Cu;
        // 0x1d8d80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8D84u;
        goto label_1d8d84;
    }
    ctx->pc = 0x1D8D7Cu;
    SET_GPR_U32(ctx, 31, 0x1D8D84u);
    ctx->pc = 0x1D8D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8D7Cu;
    // 0x1d8d80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1D8D7Cu, 0x1D8D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8D84u;
label_1d8d84:
    // 0x1d8d84: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1d8d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8d88:
    // 0x1d8d88: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d8d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d8d8c:
    // 0x1d8d8c: 0xc481ed94  lwc1        $f1, -0x126C($a0)
    ctx->pc = 0x1d8d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294962580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8d90:
    // 0x1d8d90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d8d90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d8d94:
    // 0x1d8d94: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1d8d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1d8d98:
    // 0x1d8d98: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x1d8d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d8d9c:
    // 0x1d8d9c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d8d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d8da0:
    // 0x1d8da0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1d8da4:
    // 0x1d8da4: 0xe6ec000c  swc1        $f12, 0xC($s7)
    ctx->pc = 0x1d8da4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d8da8:
    // 0x1d8da8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d8da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8dac:
    // 0x1d8dac: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1d8dacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d8db0:
    // 0x1d8db0: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x1d8db0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_1d8db4:
    // 0x1d8db4: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x1d8db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1d8db8:
    // 0x1d8db8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d8db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8dbc:
    // 0x1d8dbc: 0x8fc30990  lw          $v1, 0x990($fp)
    ctx->pc = 0x1d8dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2448)));
label_1d8dc0:
    // 0x1d8dc0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8dc4:
    // 0x1d8dc4: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x1d8dc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d8dc8:
    // 0x1d8dc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8dc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8dcc:
    // 0x1d8dcc: 0xc44deda4  lwc1        $f13, -0x125C($v0)
    ctx->pc = 0x1d8dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d8dd0:
    // 0x1d8dd0: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1d8dd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d8dd4:
    // 0x1d8dd4: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1d8dd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1d8dd8:
    // 0x1d8dd8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d8dd8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8ddc:
    // 0x1d8ddc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d8ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1d8de0:
    // 0x1d8de0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d8de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d8de4:
    // 0x1d8de4: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1d8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1d8de8:
    // 0x1d8de8: 0x40f809  jalr        $v0
label_1d8dec:
    if (ctx->pc == 0x1D8DECu) {
        ctx->pc = 0x1D8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DE8u;
        // 0x1d8dec: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8DF0u;
        goto label_1d8df0;
    }
    ctx->pc = 0x1D8DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D8DF0u);
        ctx->pc = 0x1D8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DE8u;
        // 0x1d8dec: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8DE8u, 0x1D8DF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8DF0u;
label_1d8df0:
    // 0x1d8df0: 0x8fd00990  lw          $s0, 0x990($fp)
    ctx->pc = 0x1d8df0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2448)));
label_1d8df4:
    // 0x1d8df4: 0x24040119  addiu       $a0, $zero, 0x119
    ctx->pc = 0x1d8df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
label_1d8df8:
    // 0x1d8df8: 0x861100e8  lh          $s1, 0xE8($s0)
    ctx->pc = 0x1d8df8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
label_1d8dfc:
    // 0x1d8dfc: 0x261000e8  addiu       $s0, $s0, 0xE8
    ctx->pc = 0x1d8dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_1d8e00:
    // 0x1d8e00: 0xc067b9c  jal         func_19EE70
label_1d8e04:
    if (ctx->pc == 0x1D8E04u) {
        ctx->pc = 0x1D8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E00u;
        // 0x1d8e04: 0x2718821  addu        $s1, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8E08u;
        goto label_1d8e08;
    }
    ctx->pc = 0x1D8E00u;
    SET_GPR_U32(ctx, 31, 0x1D8E08u);
    ctx->pc = 0x1D8E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8E00u;
    // 0x1d8e04: 0x2718821  addu        $s1, $s3, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D8E00u, 0x1D8E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8E08u;
label_1d8e08:
    // 0x1d8e08: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d8e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d8e0c:
    // 0x1d8e0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d8e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d8e10:
    // 0x1d8e10: 0x60f809  jalr        $v1
label_1d8e14:
    if (ctx->pc == 0x1D8E14u) {
        ctx->pc = 0x1D8E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E10u;
        // 0x1d8e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8E18u;
        goto label_1d8e18;
    }
    ctx->pc = 0x1D8E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8E18u);
        ctx->pc = 0x1D8E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E10u;
        // 0x1d8e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8E10u, 0x1D8E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8E18u;
label_1d8e18:
    // 0x1d8e18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d8e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d8e1c:
    // 0x1d8e1c: 0xc06e51e  jal         func_1B9478
label_1d8e20:
    if (ctx->pc == 0x1D8E20u) {
        ctx->pc = 0x1D8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E1Cu;
        // 0x1d8e20: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8E24u;
        goto label_1d8e24;
    }
    ctx->pc = 0x1D8E1Cu;
    SET_GPR_U32(ctx, 31, 0x1D8E24u);
    ctx->pc = 0x1D8E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8E1Cu;
    // 0x1d8e20: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1D8E1Cu, 0x1D8E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8E24u;
label_1d8e24:
    // 0x1d8e24: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8e28:
    // 0x1d8e28: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8e2c:
    // 0x1d8e2c: 0x2465ed98  addiu       $a1, $v1, -0x1268
    ctx->pc = 0x1d8e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962584));
label_1d8e30:
    // 0x1d8e30: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
label_1d8e34:
    if (ctx->pc == 0x1D8E34u) {
        ctx->pc = 0x1D8E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E30u;
        // 0x1d8e34: 0x2444ed9c  addiu       $a0, $v0, -0x1264 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962588));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8E38u;
        goto label_1d8e38;
    }
    ctx->pc = 0x1D8E30u;
    {
        const bool branch_taken_0x1d8e30 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x1D8E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E30u;
        // 0x1d8e34: 0x2444ed9c  addiu       $a0, $v0, -0x1264 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962588));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e30) {
            ctx->pc = 0x1D8E4Cu;
            goto label_1d8e4c;
        }
    }
    ctx->pc = 0x1D8E38u;
label_1d8e38:
    // 0x1d8e38: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x1d8e38u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d8e3c:
    // 0x1d8e3c: 0x0  nop
    ctx->pc = 0x1d8e3cu;
    // NOP
label_1d8e40:
    // 0x1d8e40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d8e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d8e44:
    // 0x1d8e44: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d8e48:
    if (ctx->pc == 0x1D8E48u) {
        ctx->pc = 0x1D8E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E44u;
        // 0x1d8e48: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8E4Cu;
        goto label_1d8e4c;
    }
    ctx->pc = 0x1D8E44u;
    {
        const bool branch_taken_0x1d8e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E44u;
        // 0x1d8e48: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8e44) {
            ctx->pc = 0x1D8E6Cu;
            goto label_1d8e6c;
        }
    }
    ctx->pc = 0x1D8E4Cu;
label_1d8e4c:
    // 0x1d8e4c: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x1d8e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_1d8e50:
    // 0x1d8e50: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x1d8e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
label_1d8e54:
    // 0x1d8e54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d8e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d8e58:
    // 0x1d8e58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d8e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d8e5c:
    // 0x1d8e5c: 0x0  nop
    ctx->pc = 0x1d8e5cu;
    // NOP
label_1d8e60:
    // 0x1d8e60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d8e60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d8e64:
    // 0x1d8e64: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d8e64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d8e68:
    // 0x1d8e68: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d8e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8e6c:
    // 0x1d8e6c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8e70:
    // 0x1d8e70: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1d8e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d8e74:
    // 0x1d8e74: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d8e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d8e78:
    // 0x1d8e78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d8e78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d8e7c:
    // 0x1d8e7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d8e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d8e80:
    // 0x1d8e80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d8e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d8e84:
    // 0x1d8e84: 0xc461ed94  lwc1        $f1, -0x126C($v1)
    ctx->pc = 0x1d8e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8e88:
    // 0x1d8e88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8e8c:
    // 0x1d8e8c: 0x8c86d310  lw          $a2, -0x2CF0($a0)
    ctx->pc = 0x1d8e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955792)));
label_1d8e90:
    // 0x1d8e90: 0x27d20b80  addiu       $s2, $fp, 0xB80
    ctx->pc = 0x1d8e90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 2944));
label_1d8e94:
    // 0x1d8e94: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d8e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d8e98:
    // 0x1d8e98: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1d8e98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d8e9c:
    // 0x1d8e9c: 0xe6ec000c  swc1        $f12, 0xC($s7)
    ctx->pc = 0x1d8e9cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d8ea0:
    // 0x1d8ea0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d8ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8ea4:
    // 0x1d8ea4: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x1d8ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_1d8ea8:
    // 0x1d8ea8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d8ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8eac:
    // 0x1d8eac: 0xc44deda4  lwc1        $f13, -0x125C($v0)
    ctx->pc = 0x1d8eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d8eb0:
    // 0x1d8eb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8eb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8eb4:
    // 0x1d8eb4: 0x8fc30b80  lw          $v1, 0xB80($fp)
    ctx->pc = 0x1d8eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2944)));
label_1d8eb8:
    // 0x1d8eb8: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1d8eb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d8ebc:
    // 0x1d8ebc: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x1d8ebcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d8ec0:
    // 0x1d8ec0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d8ec0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8ec4:
    // 0x1d8ec4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d8ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d8ec8:
    // 0x1d8ec8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d8ec8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1d8ecc:
    // 0x1d8ecc: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1d8eccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1d8ed0:
    // 0x1d8ed0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d8ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1d8ed4:
    // 0x1d8ed4: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1d8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1d8ed8:
    // 0x1d8ed8: 0x40f809  jalr        $v0
label_1d8edc:
    if (ctx->pc == 0x1D8EDCu) {
        ctx->pc = 0x1D8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ED8u;
        // 0x1d8edc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8EE0u;
        goto label_1d8ee0;
    }
    ctx->pc = 0x1D8ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D8EE0u);
        ctx->pc = 0x1D8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ED8u;
        // 0x1d8edc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8ED8u, 0x1D8EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8EE0u;
label_1d8ee0:
    // 0x1d8ee0: 0x8fd00b80  lw          $s0, 0xB80($fp)
    ctx->pc = 0x1d8ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2944)));
label_1d8ee4:
    // 0x1d8ee4: 0x24040122  addiu       $a0, $zero, 0x122
    ctx->pc = 0x1d8ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_1d8ee8:
    // 0x1d8ee8: 0x861100e8  lh          $s1, 0xE8($s0)
    ctx->pc = 0x1d8ee8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
label_1d8eec:
    // 0x1d8eec: 0x261000e8  addiu       $s0, $s0, 0xE8
    ctx->pc = 0x1d8eecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_1d8ef0:
    // 0x1d8ef0: 0xc067b9c  jal         func_19EE70
label_1d8ef4:
    if (ctx->pc == 0x1D8EF4u) {
        ctx->pc = 0x1D8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8EF0u;
        // 0x1d8ef4: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8EF8u;
        goto label_1d8ef8;
    }
    ctx->pc = 0x1D8EF0u;
    SET_GPR_U32(ctx, 31, 0x1D8EF8u);
    ctx->pc = 0x1D8EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8EF0u;
    // 0x1d8ef4: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D8EF0u, 0x1D8EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8EF8u;
label_1d8ef8:
    // 0x1d8ef8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d8ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d8efc:
    // 0x1d8efc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d8efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f00:
    // 0x1d8f00: 0x60f809  jalr        $v1
label_1d8f04:
    if (ctx->pc == 0x1D8F04u) {
        ctx->pc = 0x1D8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F00u;
        // 0x1d8f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8F08u;
        goto label_1d8f08;
    }
    ctx->pc = 0x1D8F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8F08u);
        ctx->pc = 0x1D8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F00u;
        // 0x1d8f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8F00u, 0x1D8F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8F08u;
label_1d8f08:
    // 0x1d8f08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d8f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d8f0c:
    // 0x1d8f0c: 0xc06e51e  jal         func_1B9478
label_1d8f10:
    if (ctx->pc == 0x1D8F10u) {
        ctx->pc = 0x1D8F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F0Cu;
        // 0x1d8f10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8F14u;
        goto label_1d8f14;
    }
    ctx->pc = 0x1D8F0Cu;
    SET_GPR_U32(ctx, 31, 0x1D8F14u);
    ctx->pc = 0x1D8F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F0Cu;
    // 0x1d8f10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1D8F0Cu, 0x1D8F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F14u;
label_1d8f14:
    // 0x1d8f14: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8f18:
    // 0x1d8f18: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8f1c:
    // 0x1d8f1c: 0x2465ed98  addiu       $a1, $v1, -0x1268
    ctx->pc = 0x1d8f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962584));
label_1d8f20:
    // 0x1d8f20: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
label_1d8f24:
    if (ctx->pc == 0x1D8F24u) {
        ctx->pc = 0x1D8F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F20u;
        // 0x1d8f24: 0x2444ed9c  addiu       $a0, $v0, -0x1264 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962588));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8F28u;
        goto label_1d8f28;
    }
    ctx->pc = 0x1D8F20u;
    {
        const bool branch_taken_0x1d8f20 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x1D8F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F20u;
        // 0x1d8f24: 0x2444ed9c  addiu       $a0, $v0, -0x1264 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962588));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f20) {
            ctx->pc = 0x1D8F3Cu;
            goto label_1d8f3c;
        }
    }
    ctx->pc = 0x1D8F28u;
label_1d8f28:
    // 0x1d8f28: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x1d8f28u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d8f2c:
    // 0x1d8f2c: 0x0  nop
    ctx->pc = 0x1d8f2cu;
    // NOP
label_1d8f30:
    // 0x1d8f30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d8f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d8f34:
    // 0x1d8f34: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d8f38:
    if (ctx->pc == 0x1D8F38u) {
        ctx->pc = 0x1D8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F34u;
        // 0x1d8f38: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8F3Cu;
        goto label_1d8f3c;
    }
    ctx->pc = 0x1D8F34u;
    {
        const bool branch_taken_0x1d8f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F34u;
        // 0x1d8f38: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f34) {
            ctx->pc = 0x1D8F5Cu;
            goto label_1d8f5c;
        }
    }
    ctx->pc = 0x1D8F3Cu;
label_1d8f3c:
    // 0x1d8f3c: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x1d8f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_1d8f40:
    // 0x1d8f40: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x1d8f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
label_1d8f44:
    // 0x1d8f44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d8f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d8f48:
    // 0x1d8f48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d8f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d8f4c:
    // 0x1d8f4c: 0x0  nop
    ctx->pc = 0x1d8f4cu;
    // NOP
label_1d8f50:
    // 0x1d8f50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d8f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d8f54:
    // 0x1d8f54: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d8f54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d8f58:
    // 0x1d8f58: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d8f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8f5c:
    // 0x1d8f5c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d8f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d8f60:
    // 0x1d8f60: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1d8f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d8f64:
    // 0x1d8f64: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d8f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d8f68:
    // 0x1d8f68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d8f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d8f6c:
    // 0x1d8f6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d8f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d8f70:
    // 0x1d8f70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d8f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d8f74:
    // 0x1d8f74: 0xc461ed94  lwc1        $f1, -0x126C($v1)
    ctx->pc = 0x1d8f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8f78:
    // 0x1d8f78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d8f7c:
    // 0x1d8f7c: 0x8c86d310  lw          $a2, -0x2CF0($a0)
    ctx->pc = 0x1d8f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955792)));
label_1d8f80:
    // 0x1d8f80: 0x27d20d70  addiu       $s2, $fp, 0xD70
    ctx->pc = 0x1d8f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 3440));
label_1d8f84:
    // 0x1d8f84: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d8f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d8f88:
    // 0x1d8f88: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1d8f88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d8f8c:
    // 0x1d8f8c: 0xe6ec000c  swc1        $f12, 0xC($s7)
    ctx->pc = 0x1d8f8cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d8f90:
    // 0x1d8f90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d8f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8f94:
    // 0x1d8f94: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x1d8f94u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_1d8f98:
    // 0x1d8f98: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d8f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8f9c:
    // 0x1d8f9c: 0xc44deda4  lwc1        $f13, -0x125C($v0)
    ctx->pc = 0x1d8f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d8fa0:
    // 0x1d8fa0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8fa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8fa4:
    // 0x1d8fa4: 0x8fc30d70  lw          $v1, 0xD70($fp)
    ctx->pc = 0x1d8fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3440)));
label_1d8fa8:
    // 0x1d8fa8: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1d8fa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d8fac:
    // 0x1d8fac: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x1d8facu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d8fb0:
    // 0x1d8fb0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d8fb0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8fb4:
    // 0x1d8fb4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d8fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d8fb8:
    // 0x1d8fb8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d8fb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1d8fbc:
    // 0x1d8fbc: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1d8fbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1d8fc0:
    // 0x1d8fc0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d8fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1d8fc4:
    // 0x1d8fc4: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1d8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1d8fc8:
    // 0x1d8fc8: 0x40f809  jalr        $v0
label_1d8fcc:
    if (ctx->pc == 0x1D8FCCu) {
        ctx->pc = 0x1D8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FC8u;
        // 0x1d8fcc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8FD0u;
        goto label_1d8fd0;
    }
    ctx->pc = 0x1D8FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D8FD0u);
        ctx->pc = 0x1D8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FC8u;
        // 0x1d8fcc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8FC8u, 0x1D8FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8FD0u;
label_1d8fd0:
    // 0x1d8fd0: 0x8fd00d70  lw          $s0, 0xD70($fp)
    ctx->pc = 0x1d8fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3440)));
label_1d8fd4:
    // 0x1d8fd4: 0x24040123  addiu       $a0, $zero, 0x123
    ctx->pc = 0x1d8fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
label_1d8fd8:
    // 0x1d8fd8: 0x861100e8  lh          $s1, 0xE8($s0)
    ctx->pc = 0x1d8fd8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
label_1d8fdc:
    // 0x1d8fdc: 0x261000e8  addiu       $s0, $s0, 0xE8
    ctx->pc = 0x1d8fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_1d8fe0:
    // 0x1d8fe0: 0xc067b9c  jal         func_19EE70
label_1d8fe4:
    if (ctx->pc == 0x1D8FE4u) {
        ctx->pc = 0x1D8FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FE0u;
        // 0x1d8fe4: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8FE8u;
        goto label_1d8fe8;
    }
    ctx->pc = 0x1D8FE0u;
    SET_GPR_U32(ctx, 31, 0x1D8FE8u);
    ctx->pc = 0x1D8FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8FE0u;
    // 0x1d8fe4: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D8FE0u, 0x1D8FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8FE8u;
label_1d8fe8:
    // 0x1d8fe8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d8fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d8fec:
    // 0x1d8fec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d8fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d8ff0:
    // 0x1d8ff0: 0x60f809  jalr        $v1
label_1d8ff4:
    if (ctx->pc == 0x1D8FF4u) {
        ctx->pc = 0x1D8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FF0u;
        // 0x1d8ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8FF8u;
        goto label_1d8ff8;
    }
    ctx->pc = 0x1D8FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8FF8u);
        ctx->pc = 0x1D8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FF0u;
        // 0x1d8ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8FF0u, 0x1D8FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8FF8u;
label_1d8ff8:
    // 0x1d8ff8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d8ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d8ffc:
    // 0x1d8ffc: 0xc06e51e  jal         func_1B9478
label_1d9000:
    if (ctx->pc == 0x1D9000u) {
        ctx->pc = 0x1D9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FFCu;
        // 0x1d9000: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9004u;
        goto label_1d9004;
    }
    ctx->pc = 0x1D8FFCu;
    SET_GPR_U32(ctx, 31, 0x1D9004u);
    ctx->pc = 0x1D9000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8FFCu;
    // 0x1d9000: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1D8FFCu, 0x1D9004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9004u;
label_1d9004:
    // 0x1d9004: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d9004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d9008:
    // 0x1d9008: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d9008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d900c:
    // 0x1d900c: 0x2465ed98  addiu       $a1, $v1, -0x1268
    ctx->pc = 0x1d900cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962584));
label_1d9010:
    // 0x1d9010: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
label_1d9014:
    if (ctx->pc == 0x1D9014u) {
        ctx->pc = 0x1D9014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9010u;
        // 0x1d9014: 0x2444ed9c  addiu       $a0, $v0, -0x1264 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962588));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9018u;
        goto label_1d9018;
    }
    ctx->pc = 0x1D9010u;
    {
        const bool branch_taken_0x1d9010 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x1D9014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9010u;
        // 0x1d9014: 0x2444ed9c  addiu       $a0, $v0, -0x1264 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962588));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9010) {
            ctx->pc = 0x1D902Cu;
            goto label_1d902c;
        }
    }
    ctx->pc = 0x1D9018u;
label_1d9018:
    // 0x1d9018: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x1d9018u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d901c:
    // 0x1d901c: 0x0  nop
    ctx->pc = 0x1d901cu;
    // NOP
label_1d9020:
    // 0x1d9020: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d9020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d9024:
    // 0x1d9024: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d9028:
    if (ctx->pc == 0x1D9028u) {
        ctx->pc = 0x1D9028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9024u;
        // 0x1d9028: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D902Cu;
        goto label_1d902c;
    }
    ctx->pc = 0x1D9024u;
    {
        const bool branch_taken_0x1d9024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9024u;
        // 0x1d9028: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9024) {
            ctx->pc = 0x1D904Cu;
            goto label_1d904c;
        }
    }
    ctx->pc = 0x1D902Cu;
label_1d902c:
    // 0x1d902c: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x1d902cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_1d9030:
    // 0x1d9030: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x1d9030u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
label_1d9034:
    // 0x1d9034: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d9034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d9038:
    // 0x1d9038: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d9038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d903c:
    // 0x1d903c: 0x0  nop
    ctx->pc = 0x1d903cu;
    // NOP
label_1d9040:
    // 0x1d9040: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d9040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d9044:
    // 0x1d9044: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d9044u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d9048:
    // 0x1d9048: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d9048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d904c:
    // 0x1d904c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d904cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d9050:
    // 0x1d9050: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1d9050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9054:
    // 0x1d9054: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d9054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d9058:
    // 0x1d9058: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d9058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d905c:
    // 0x1d905c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d905cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d9060:
    // 0x1d9060: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d9060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d9064:
    // 0x1d9064: 0xc461ed94  lwc1        $f1, -0x126C($v1)
    ctx->pc = 0x1d9064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9068:
    // 0x1d9068: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d9068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d906c:
    // 0x1d906c: 0x8c86d310  lw          $a2, -0x2CF0($a0)
    ctx->pc = 0x1d906cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955792)));
label_1d9070:
    // 0x1d9070: 0x27d20f60  addiu       $s2, $fp, 0xF60
    ctx->pc = 0x1d9070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 3936));
label_1d9074:
    // 0x1d9074: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d9074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d9078:
    // 0x1d9078: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1d9078u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d907c:
    // 0x1d907c: 0xe6ec000c  swc1        $f12, 0xC($s7)
    ctx->pc = 0x1d907cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d9080:
    // 0x1d9080: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9084:
    // 0x1d9084: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x1d9084u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_1d9088:
    // 0x1d9088: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d9088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d908c:
    // 0x1d908c: 0xc44deda4  lwc1        $f13, -0x125C($v0)
    ctx->pc = 0x1d908cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d9090:
    // 0x1d9090: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d9090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9094:
    // 0x1d9094: 0x8fc30f60  lw          $v1, 0xF60($fp)
    ctx->pc = 0x1d9094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3936)));
label_1d9098:
    // 0x1d9098: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1d9098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d909c:
    // 0x1d909c: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x1d909cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d90a0:
    // 0x1d90a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d90a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d90a4:
    // 0x1d90a4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d90a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d90a8:
    // 0x1d90a8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d90a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1d90ac:
    // 0x1d90ac: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1d90acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1d90b0:
    // 0x1d90b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d90b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1d90b4:
    // 0x1d90b4: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1d90b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1d90b8:
    // 0x1d90b8: 0x40f809  jalr        $v0
label_1d90bc:
    if (ctx->pc == 0x1D90BCu) {
        ctx->pc = 0x1D90BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90B8u;
        // 0x1d90bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D90C0u;
        goto label_1d90c0;
    }
    ctx->pc = 0x1D90B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D90C0u);
        ctx->pc = 0x1D90BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90B8u;
        // 0x1d90bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D90B8u, 0x1D90C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D90C0u;
label_1d90c0:
    // 0x1d90c0: 0x8fd00f60  lw          $s0, 0xF60($fp)
    ctx->pc = 0x1d90c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3936)));
label_1d90c4:
    // 0x1d90c4: 0x24040124  addiu       $a0, $zero, 0x124
    ctx->pc = 0x1d90c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
label_1d90c8:
    // 0x1d90c8: 0x861100e8  lh          $s1, 0xE8($s0)
    ctx->pc = 0x1d90c8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
label_1d90cc:
    // 0x1d90cc: 0x261000e8  addiu       $s0, $s0, 0xE8
    ctx->pc = 0x1d90ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_1d90d0:
    // 0x1d90d0: 0xc067b9c  jal         func_19EE70
label_1d90d4:
    if (ctx->pc == 0x1D90D4u) {
        ctx->pc = 0x1D90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90D0u;
        // 0x1d90d4: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D90D8u;
        goto label_1d90d8;
    }
    ctx->pc = 0x1D90D0u;
    SET_GPR_U32(ctx, 31, 0x1D90D8u);
    ctx->pc = 0x1D90D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90D0u;
    // 0x1d90d4: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D90D0u, 0x1D90D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D90D8u;
label_1d90d8:
    // 0x1d90d8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d90d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d90dc:
    // 0x1d90dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d90dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d90e0:
    // 0x1d90e0: 0x60f809  jalr        $v1
label_1d90e4:
    if (ctx->pc == 0x1D90E4u) {
        ctx->pc = 0x1D90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90E0u;
        // 0x1d90e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D90E8u;
        goto label_1d90e8;
    }
    ctx->pc = 0x1D90E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D90E8u);
        ctx->pc = 0x1D90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90E0u;
        // 0x1d90e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D90E0u, 0x1D90E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D90E8u;
label_1d90e8:
    // 0x1d90e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d90e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d90ec:
    // 0x1d90ec: 0xc06e51e  jal         func_1B9478
label_1d90f0:
    if (ctx->pc == 0x1D90F0u) {
        ctx->pc = 0x1D90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90ECu;
        // 0x1d90f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D90F4u;
        goto label_1d90f4;
    }
    ctx->pc = 0x1D90ECu;
    SET_GPR_U32(ctx, 31, 0x1D90F4u);
    ctx->pc = 0x1D90F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90ECu;
    // 0x1d90f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1D90ECu, 0x1D90F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D90F4u;
label_1d90f4:
    // 0x1d90f4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d90f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d90f8:
    // 0x1d90f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d90f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d90fc:
    // 0x1d90fc: 0x2465ed98  addiu       $a1, $v1, -0x1268
    ctx->pc = 0x1d90fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962584));
label_1d9100:
    // 0x1d9100: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
label_1d9104:
    if (ctx->pc == 0x1D9104u) {
        ctx->pc = 0x1D9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9100u;
        // 0x1d9104: 0x2444ed9c  addiu       $a0, $v0, -0x1264 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962588));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9108u;
        goto label_1d9108;
    }
    ctx->pc = 0x1D9100u;
    {
        const bool branch_taken_0x1d9100 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x1D9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9100u;
        // 0x1d9104: 0x2444ed9c  addiu       $a0, $v0, -0x1264 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962588));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9100) {
            ctx->pc = 0x1D911Cu;
            goto label_1d911c;
        }
    }
    ctx->pc = 0x1D9108u;
label_1d9108:
    // 0x1d9108: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x1d9108u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d910c:
    // 0x1d910c: 0x0  nop
    ctx->pc = 0x1d910cu;
    // NOP
label_1d9110:
    // 0x1d9110: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d9110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d9114:
    // 0x1d9114: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d9118:
    if (ctx->pc == 0x1D9118u) {
        ctx->pc = 0x1D9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9114u;
        // 0x1d9118: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D911Cu;
        goto label_1d911c;
    }
    ctx->pc = 0x1D9114u;
    {
        const bool branch_taken_0x1d9114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9114u;
        // 0x1d9118: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9114) {
            ctx->pc = 0x1D913Cu;
            goto label_1d913c;
        }
    }
    ctx->pc = 0x1D911Cu;
label_1d911c:
    // 0x1d911c: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x1d911cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_1d9120:
    // 0x1d9120: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x1d9120u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
label_1d9124:
    // 0x1d9124: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d9124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d9128:
    // 0x1d9128: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d9128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d912c:
    // 0x1d912c: 0x0  nop
    ctx->pc = 0x1d912cu;
    // NOP
label_1d9130:
    // 0x1d9130: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d9130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d9134:
    // 0x1d9134: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d9134u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d9138:
    // 0x1d9138: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d9138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d913c:
    // 0x1d913c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d913cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d9140:
    // 0x1d9140: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1d9140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9144:
    // 0x1d9144: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d9144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d9148:
    // 0x1d9148: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d9148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d914c:
    // 0x1d914c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d914cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d9150:
    // 0x1d9150: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d9150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d9154:
    // 0x1d9154: 0xc461ed94  lwc1        $f1, -0x126C($v1)
    ctx->pc = 0x1d9154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9158:
    // 0x1d9158: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d9158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d915c:
    // 0x1d915c: 0x8c86d310  lw          $a2, -0x2CF0($a0)
    ctx->pc = 0x1d915cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955792)));
label_1d9160:
    // 0x1d9160: 0x27d21150  addiu       $s2, $fp, 0x1150
    ctx->pc = 0x1d9160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4432));
label_1d9164:
    // 0x1d9164: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d9164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d9168:
    // 0x1d9168: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1d9168u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d916c:
    // 0x1d916c: 0xe6ec000c  swc1        $f12, 0xC($s7)
    ctx->pc = 0x1d916cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d9170:
    // 0x1d9170: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9174:
    // 0x1d9174: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x1d9174u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_1d9178:
    // 0x1d9178: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d9178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d917c:
    // 0x1d917c: 0xc44deda4  lwc1        $f13, -0x125C($v0)
    ctx->pc = 0x1d917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d9180:
    // 0x1d9180: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d9180u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9184:
    // 0x1d9184: 0x8fc31150  lw          $v1, 0x1150($fp)
    ctx->pc = 0x1d9184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4432)));
label_1d9188:
    // 0x1d9188: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1d9188u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d918c:
    // 0x1d918c: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x1d918cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d9190:
    // 0x1d9190: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9190u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9194:
    // 0x1d9194: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d9194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d9198:
    // 0x1d9198: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d9198u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1d919c:
    // 0x1d919c: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1d919cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1d91a0:
    // 0x1d91a0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d91a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1d91a4:
    // 0x1d91a4: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1d91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1d91a8:
    // 0x1d91a8: 0x40f809  jalr        $v0
label_1d91ac:
    if (ctx->pc == 0x1D91ACu) {
        ctx->pc = 0x1D91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91A8u;
        // 0x1d91ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D91B0u;
        goto label_1d91b0;
    }
    ctx->pc = 0x1D91A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D91B0u);
        ctx->pc = 0x1D91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91A8u;
        // 0x1d91ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D91A8u, 0x1D91B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D91B0u;
label_1d91b0:
    // 0x1d91b0: 0x8fd01150  lw          $s0, 0x1150($fp)
    ctx->pc = 0x1d91b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4432)));
label_1d91b4:
    // 0x1d91b4: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x1d91b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
label_1d91b8:
    // 0x1d91b8: 0x861100e8  lh          $s1, 0xE8($s0)
    ctx->pc = 0x1d91b8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
label_1d91bc:
    // 0x1d91bc: 0x261000e8  addiu       $s0, $s0, 0xE8
    ctx->pc = 0x1d91bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_1d91c0:
    // 0x1d91c0: 0xc067b9c  jal         func_19EE70
label_1d91c4:
    if (ctx->pc == 0x1D91C4u) {
        ctx->pc = 0x1D91C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91C0u;
        // 0x1d91c4: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D91C8u;
        goto label_1d91c8;
    }
    ctx->pc = 0x1D91C0u;
    SET_GPR_U32(ctx, 31, 0x1D91C8u);
    ctx->pc = 0x1D91C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91C0u;
    // 0x1d91c4: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D91C0u, 0x1D91C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D91C8u;
label_1d91c8:
    // 0x1d91c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d91cc:
    // 0x1d91cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d91ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d91d0:
    // 0x1d91d0: 0x60f809  jalr        $v1
label_1d91d4:
    if (ctx->pc == 0x1D91D4u) {
        ctx->pc = 0x1D91D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91D0u;
        // 0x1d91d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D91D8u;
        goto label_1d91d8;
    }
    ctx->pc = 0x1D91D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D91D8u);
        ctx->pc = 0x1D91D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91D0u;
        // 0x1d91d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D91D0u, 0x1D91D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D91D8u;
label_1d91d8:
    // 0x1d91d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d91d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d91dc:
    // 0x1d91dc: 0xc06e51e  jal         func_1B9478
label_1d91e0:
    if (ctx->pc == 0x1D91E0u) {
        ctx->pc = 0x1D91E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91DCu;
        // 0x1d91e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D91E4u;
        goto label_1d91e4;
    }
    ctx->pc = 0x1D91DCu;
    SET_GPR_U32(ctx, 31, 0x1D91E4u);
    ctx->pc = 0x1D91E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91DCu;
    // 0x1d91e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1D91DCu, 0x1D91E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D91E4u;
label_1d91e4:
    // 0x1d91e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d91e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d91e8:
    // 0x1d91e8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d91e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d91ec:
    // 0x1d91ec: 0x2474ed98  addiu       $s4, $v1, -0x1268
    ctx->pc = 0x1d91ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962584));
label_1d91f0:
    // 0x1d91f0: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
label_1d91f4:
    if (ctx->pc == 0x1D91F4u) {
        ctx->pc = 0x1D91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91F0u;
        // 0x1d91f4: 0x2495ed9c  addiu       $s5, $a0, -0x1264 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962588));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D91F8u;
        goto label_1d91f8;
    }
    ctx->pc = 0x1D91F0u;
    {
        const bool branch_taken_0x1d91f0 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x1D91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91F0u;
        // 0x1d91f4: 0x2495ed9c  addiu       $s5, $a0, -0x1264 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962588));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91f0) {
            ctx->pc = 0x1D920Cu;
            goto label_1d920c;
        }
    }
    ctx->pc = 0x1D91F8u;
label_1d91f8:
    // 0x1d91f8: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x1d91f8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d91fc:
    // 0x1d91fc: 0x0  nop
    ctx->pc = 0x1d91fcu;
    // NOP
label_1d9200:
    // 0x1d9200: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d9200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d9204:
    // 0x1d9204: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d9208:
    if (ctx->pc == 0x1D9208u) {
        ctx->pc = 0x1D9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9204u;
        // 0x1d9208: 0xc6a00000  lwc1        $f0, 0x0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D920Cu;
        goto label_1d920c;
    }
    ctx->pc = 0x1D9204u;
    {
        const bool branch_taken_0x1d9204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9204u;
        // 0x1d9208: 0xc6a00000  lwc1        $f0, 0x0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9204) {
            ctx->pc = 0x1D922Cu;
            goto label_1d922c;
        }
    }
    ctx->pc = 0x1D920Cu;
label_1d920c:
    // 0x1d920c: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x1d920cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
label_1d9210:
    // 0x1d9210: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x1d9210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_1d9214:
    // 0x1d9214: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d9214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d9218:
    // 0x1d9218: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d9218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d921c:
    // 0x1d921c: 0x0  nop
    ctx->pc = 0x1d921cu;
    // NOP
label_1d9220:
    // 0x1d9220: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d9220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d9224:
    // 0x1d9224: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d9224u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d9228:
    // 0x1d9228: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1d9228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d922c:
    // 0x1d922c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d922cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d9230:
    // 0x1d9230: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x1d9230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9234:
    // 0x1d9234: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d9234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1d9238:
    // 0x1d9238: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d9238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d923c:
    // 0x1d923c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d923cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d9240:
    // 0x1d9240: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d9240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d9244:
    // 0x1d9244: 0xc4a1ed94  lwc1        $f1, -0x126C($a1)
    ctx->pc = 0x1d9244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9248:
    // 0x1d9248: 0x27d21340  addiu       $s2, $fp, 0x1340
    ctx->pc = 0x1d9248u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4928));
label_1d924c:
    // 0x1d924c: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x1d924cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1d9250:
    // 0x1d9250: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9254:
    // 0x1d9254: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d9254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d9258:
    // 0x1d9258: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1d9258u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d925c:
    // 0x1d925c: 0xe6ec000c  swc1        $f12, 0xC($s7)
    ctx->pc = 0x1d925cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d9260:
    // 0x1d9260: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d9260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d9264:
    // 0x1d9264: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x1d9264u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_1d9268:
    // 0x1d9268: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d9268u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d926c:
    // 0x1d926c: 0xc44deda4  lwc1        $f13, -0x125C($v0)
    ctx->pc = 0x1d926cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d9270:
    // 0x1d9270: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d9270u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9274:
    // 0x1d9274: 0x8fc31340  lw          $v1, 0x1340($fp)
    ctx->pc = 0x1d9274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4928)));
label_1d9278:
    // 0x1d9278: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1d9278u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d927c:
    // 0x1d927c: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x1d927cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d9280:
    // 0x1d9280: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9280u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9284:
    // 0x1d9284: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d9284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d9288:
    // 0x1d9288: 0x27d51530  addiu       $s5, $fp, 0x1530
    ctx->pc = 0x1d9288u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 5424));
label_1d928c:
    // 0x1d928c: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1d928cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1d9290:
    // 0x1d9290: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d9290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9294:
    // 0x1d9294: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d9294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1d9298:
    // 0x1d9298: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1d9298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1d929c:
    // 0x1d929c: 0x40f809  jalr        $v0
label_1d92a0:
    if (ctx->pc == 0x1D92A0u) {
        ctx->pc = 0x1D92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D929Cu;
        // 0x1d92a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D92A4u;
        goto label_1d92a4;
    }
    ctx->pc = 0x1D929Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D92A4u);
        ctx->pc = 0x1D92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D929Cu;
        // 0x1d92a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D929Cu, 0x1D92A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D92A4u;
label_1d92a4:
    // 0x1d92a4: 0x8fd01340  lw          $s0, 0x1340($fp)
    ctx->pc = 0x1d92a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4928)));
label_1d92a8:
    // 0x1d92a8: 0x27c31c20  addiu       $v1, $fp, 0x1C20
    ctx->pc = 0x1d92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 7200));
label_1d92ac:
    // 0x1d92ac: 0x24040128  addiu       $a0, $zero, 0x128
    ctx->pc = 0x1d92acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
label_1d92b0:
    // 0x1d92b0: 0x861100e8  lh          $s1, 0xE8($s0)
    ctx->pc = 0x1d92b0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
label_1d92b4:
    // 0x1d92b4: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1d92b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1d92b8:
    // 0x1d92b8: 0x261000e8  addiu       $s0, $s0, 0xE8
    ctx->pc = 0x1d92b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_1d92bc:
    // 0x1d92bc: 0xc067b9c  jal         func_19EE70
label_1d92c0:
    if (ctx->pc == 0x1D92C0u) {
        ctx->pc = 0x1D92C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92BCu;
        // 0x1d92c0: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D92C4u;
        goto label_1d92c4;
    }
    ctx->pc = 0x1D92BCu;
    SET_GPR_U32(ctx, 31, 0x1D92C4u);
    ctx->pc = 0x1D92C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92BCu;
    // 0x1d92c0: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D92BCu, 0x1D92C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92C4u;
label_1d92c4:
    // 0x1d92c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d92c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d92c8:
    // 0x1d92c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d92c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d92cc:
    // 0x1d92cc: 0x27c237e0  addiu       $v0, $fp, 0x37E0
    ctx->pc = 0x1d92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 14304));
label_1d92d0:
    // 0x1d92d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d92d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d92d4:
    // 0x1d92d4: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1d92d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_1d92d8:
    // 0x1d92d8: 0x60f809  jalr        $v1
label_1d92dc:
    if (ctx->pc == 0x1D92DCu) {
        ctx->pc = 0x1D92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92D8u;
        // 0x1d92dc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D92E0u;
        goto label_1d92e0;
    }
    ctx->pc = 0x1D92D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D92E0u);
        ctx->pc = 0x1D92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92D8u;
        // 0x1d92dc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D92D8u, 0x1D92E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D92E0u;
label_1d92e0:
    // 0x1d92e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d92e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d92e4:
    // 0x1d92e4: 0xc06e51e  jal         func_1B9478
label_1d92e8:
    if (ctx->pc == 0x1D92E8u) {
        ctx->pc = 0x1D92E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92E4u;
        // 0x1d92e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D92ECu;
        goto label_1d92ec;
    }
    ctx->pc = 0x1D92E4u;
    SET_GPR_U32(ctx, 31, 0x1D92ECu);
    ctx->pc = 0x1D92E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92E4u;
    // 0x1d92e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1D92E4u, 0x1D92ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92ECu;
label_1d92ec:
    // 0x1d92ec: 0x27c330f0  addiu       $v1, $fp, 0x30F0
    ctx->pc = 0x1d92ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 12528));
label_1d92f0:
    // 0x1d92f0: 0x27c42a00  addiu       $a0, $fp, 0x2A00
    ctx->pc = 0x1d92f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10752));
label_1d92f4:
    // 0x1d92f4: 0x27c52310  addiu       $a1, $fp, 0x2310
    ctx->pc = 0x1d92f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 8976));
label_1d92f8:
    // 0x1d92f8: 0x27c23ed0  addiu       $v0, $fp, 0x3ED0
    ctx->pc = 0x1d92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16080));
label_1d92fc:
    // 0x1d92fc: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1d92fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1d9300:
    // 0x1d9300: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x1d9300u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d9304:
    // 0x1d9304: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x1d9304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
label_1d9308:
    // 0x1d9308: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x1d9308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_1d930c:
    // 0x1d930c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1d930cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_1d9310:
    // 0x1d9310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d9314:
    // 0x1d9314: 0xc075640  jal         func_1D5900
label_1d9318:
    if (ctx->pc == 0x1D9318u) {
        ctx->pc = 0x1D9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9314u;
        // 0x1d9318: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D931Cu;
        goto label_1d931c;
    }
    ctx->pc = 0x1D9314u;
    SET_GPR_U32(ctx, 31, 0x1D931Cu);
    ctx->pc = 0x1D9318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9314u;
    // 0x1d9318: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5900u, 0x1D9314u, 0x1D931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D931Cu;
label_1d931c:
    // 0x1d931c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d931cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d9320:
    // 0x1d9320: 0x2e620007  sltiu       $v0, $s3, 0x7
    ctx->pc = 0x1d9320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1d9324:
    // 0x1d9324: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1d9328:
    if (ctx->pc == 0x1D9328u) {
        ctx->pc = 0x1D9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9324u;
        // 0x1d9328: 0x261006f0  addiu       $s0, $s0, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D932Cu;
        goto label_1d932c;
    }
    ctx->pc = 0x1D9324u;
    {
        const bool branch_taken_0x1d9324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9324u;
        // 0x1d9328: 0x261006f0  addiu       $s0, $s0, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9324) {
            ctx->pc = 0x1D9310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9310;
        }
    }
    ctx->pc = 0x1D932Cu;
label_1d932c:
    // 0x1d932c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d932cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d9330:
    // 0x1d9330: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d9330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d9334:
    // 0x1d9334: 0xc480ed70  lwc1        $f0, -0x1290($a0)
    ctx->pc = 0x1d9334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294962544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9338:
    // 0x1d9338: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d9338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d933c:
    // 0x1d933c: 0xc462ed6c  lwc1        $f2, -0x1294($v1)
    ctx->pc = 0x1d933cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9340:
    // 0x1d9340: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1d9340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1d9344:
    // 0x1d9344: 0xc441ed74  lwc1        $f1, -0x128C($v0)
    ctx->pc = 0x1d9344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9348:
    // 0x1d9348: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d9348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d934c:
    // 0x1d934c: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x1d934cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d9350:
    // 0x1d9350: 0x24a560a8  addiu       $a1, $a1, 0x60A8
    ctx->pc = 0x1d9350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24744));
label_1d9354:
    // 0x1d9354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d9354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d9358:
    // 0x1d9358: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d9358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d935c:
    // 0x1d935c: 0x24060a40  addiu       $a2, $zero, 0xA40
    ctx->pc = 0x1d935cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
label_1d9360:
    // 0x1d9360: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1d9360u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d9364:
    // 0x1d9364: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d9364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d9368:
    // 0x1d9368: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1d9368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d936c:
    // 0x1d936c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1d936cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1d9370:
    // 0x1d9370: 0x25086038  addiu       $t0, $t0, 0x6038
    ctx->pc = 0x1d9370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24632));
label_1d9374:
    // 0x1d9374: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1d9374u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d9378:
    // 0x1d9378: 0x240905dc  addiu       $t1, $zero, 0x5DC
    ctx->pc = 0x1d9378u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_1d937c:
    // 0x1d937c: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x1d937cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_1d9380:
    // 0x1d9380: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9380u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9384:
    // 0x1d9384: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1d9384u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d9388:
    // 0x1d9388: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9388u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d938c:
    // 0x1d938c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1d938cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1d9390:
    // 0x1d9390: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x1d9390u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1d9394:
    // 0x1d9394: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1d9394u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1d9398:
    // 0x1d9398: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1d9398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1d939c:
    // 0x1d939c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1d939cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1d93a0:
    // 0x1d93a0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1d93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d93a4:
    // 0x1d93a4: 0x40f809  jalr        $v0
label_1d93a8:
    if (ctx->pc == 0x1D93A8u) {
        ctx->pc = 0x1D93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93A4u;
        // 0x1d93a8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D93ACu;
        goto label_1d93ac;
    }
    ctx->pc = 0x1D93A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D93ACu);
        ctx->pc = 0x1D93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93A4u;
        // 0x1d93a8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D93A4u, 0x1D93ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D93ACu;
label_1d93ac:
    // 0x1d93ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d93acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d93b0:
    // 0x1d93b0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1d93b4:
    if (ctx->pc == 0x1D93B4u) {
        ctx->pc = 0x1D93B8u;
        goto label_1d93b8;
    }
    ctx->pc = 0x1D93B0u;
    {
        const bool branch_taken_0x1d93b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d93b0) {
            ctx->pc = 0x1D93C4u;
            goto label_1d93c4;
        }
    }
    ctx->pc = 0x1D93B8u;
label_1d93b8:
    // 0x1d93b8: 0xc075d92  jal         func_1D7648
label_1d93bc:
    if (ctx->pc == 0x1D93BCu) {
        ctx->pc = 0x1D93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93B8u;
        // 0x1d93bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D93C0u;
        goto label_1d93c0;
    }
    ctx->pc = 0x1D93B8u;
    SET_GPR_U32(ctx, 31, 0x1D93C0u);
    ctx->pc = 0x1D93BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93B8u;
    // 0x1d93bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7648u, 0x1D93B8u, 0x1D93C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93C0u;
label_1d93c0:
    // 0x1d93c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d93c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d93c4:
    // 0x1d93c4: 0xc067b9c  jal         func_19EE70
label_1d93c8:
    if (ctx->pc == 0x1D93C8u) {
        ctx->pc = 0x1D93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93C4u;
        // 0x1d93c8: 0x24040117  addiu       $a0, $zero, 0x117 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D93CCu;
        goto label_1d93cc;
    }
    ctx->pc = 0x1D93C4u;
    SET_GPR_U32(ctx, 31, 0x1D93CCu);
    ctx->pc = 0x1D93C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93C4u;
    // 0x1d93c8: 0x24040117  addiu       $a0, $zero, 0x117 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D93C4u, 0x1D93CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93CCu;
label_1d93cc:
    // 0x1d93cc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d93ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d93d0:
    // 0x1d93d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d93d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d93d4:
    // 0x1d93d4: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x1d93d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_1d93d8:
    // 0x1d93d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d93dc:
    // 0x1d93dc: 0xc44ceda8  lwc1        $f12, -0x1258($v0)
    ctx->pc = 0x1d93dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d93e0:
    // 0x1d93e0: 0x3c09001e  lui         $t1, 0x1E
    ctx->pc = 0x1d93e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30 << 16));
label_1d93e4:
    // 0x1d93e4: 0x906857a4  lbu         $t0, 0x57A4($v1)
    ctx->pc = 0x1d93e4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22436)));
label_1d93e8:
    // 0x1d93e8: 0x25298440  addiu       $t1, $t1, -0x7BC0
    ctx->pc = 0x1d93e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294935616));
label_1d93ec:
    // 0x1d93ec: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1d93ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d93f0:
    // 0x1d93f0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1d93f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d93f4:
    // 0x1d93f4: 0xc075e56  jal         func_1D7958
label_1d93f8:
    if (ctx->pc == 0x1D93F8u) {
        ctx->pc = 0x1D93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93F4u;
        // 0x1d93f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D93FCu;
        goto label_1d93fc;
    }
    ctx->pc = 0x1D93F4u;
    SET_GPR_U32(ctx, 31, 0x1D93FCu);
    ctx->pc = 0x1D93F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93F4u;
    // 0x1d93f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7958u, 0x1D93F4u, 0x1D93FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93FCu;
label_1d93fc:
    // 0x1d93fc: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1d93fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_1d9400:
    // 0x1d9400: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1d9400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1d9404:
    // 0x1d9404: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d9404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d9408:
    // 0x1d9408: 0xc075964  jal         func_1D6590
label_1d940c:
    if (ctx->pc == 0x1D940Cu) {
        ctx->pc = 0x1D940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9408u;
        // 0x1d940c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9410u;
        goto label_1d9410;
    }
    ctx->pc = 0x1D9408u;
    SET_GPR_U32(ctx, 31, 0x1D9410u);
    ctx->pc = 0x1D940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9408u;
    // 0x1d940c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6590u, 0x1D9408u, 0x1D9410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9410u;
label_1d9410:
    // 0x1d9410: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d9410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d9414:
    // 0x1d9414: 0xc0756f2  jal         func_1D5BC8
label_1d9418:
    if (ctx->pc == 0x1D9418u) {
        ctx->pc = 0x1D9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9414u;
        // 0x1d9418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D941Cu;
        goto label_1d941c;
    }
    ctx->pc = 0x1D9414u;
    SET_GPR_U32(ctx, 31, 0x1D941Cu);
    ctx->pc = 0x1D9418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9414u;
    // 0x1d9418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BC8u, 0x1D9414u, 0x1D941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D941Cu;
label_1d941c:
    // 0x1d941c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d941cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d9420:
    // 0x1d9420: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1d9420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1d9424:
    // 0x1d9424: 0x24a560c0  addiu       $a1, $a1, 0x60C0
    ctx->pc = 0x1d9424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24768));
label_1d9428:
    // 0x1d9428: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1d9428u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1d942c:
    // 0x1d942c: 0x240604d0  addiu       $a2, $zero, 0x4D0
    ctx->pc = 0x1d942cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
label_1d9430:
    // 0x1d9430: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d9430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d9434:
    // 0x1d9434: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1d9434u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1d9438:
    // 0x1d9438: 0x25086038  addiu       $t0, $t0, 0x6038
    ctx->pc = 0x1d9438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24632));
label_1d943c:
    // 0x1d943c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1d943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1d9440:
    // 0x1d9440: 0x240905e2  addiu       $t1, $zero, 0x5E2
    ctx->pc = 0x1d9440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1506));
label_1d9444:
    // 0x1d9444: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9444u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9448:
    // 0x1d9448: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9448u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d944c:
    // 0x1d944c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1d944cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1d9450:
    // 0x1d9450: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1d9450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d9454:
    // 0x1d9454: 0x40f809  jalr        $v0
label_1d9458:
    if (ctx->pc == 0x1D9458u) {
        ctx->pc = 0x1D9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9454u;
        // 0x1d9458: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D945Cu;
        goto label_1d945c;
    }
    ctx->pc = 0x1D9454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D945Cu);
        ctx->pc = 0x1D9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9454u;
        // 0x1d9458: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9454u, 0x1D945Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D945Cu;
label_1d945c:
    // 0x1d945c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d9460:
    if (ctx->pc == 0x1D9460u) {
        ctx->pc = 0x1D9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D945Cu;
        // 0x1d9460: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9464u;
        goto label_1d9464;
    }
    ctx->pc = 0x1D945Cu;
    {
        const bool branch_taken_0x1d945c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D945Cu;
        // 0x1d9460: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d945c) {
            ctx->pc = 0x1D9474u;
            goto label_1d9474;
        }
    }
    ctx->pc = 0x1D9464u;
label_1d9464:
    // 0x1d9464: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9468:
    // 0x1d9468: 0xc07599c  jal         func_1D6670
label_1d946c:
    if (ctx->pc == 0x1D946Cu) {
        ctx->pc = 0x1D946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9468u;
        // 0x1d946c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9470u;
        goto label_1d9470;
    }
    ctx->pc = 0x1D9468u;
    SET_GPR_U32(ctx, 31, 0x1D9470u);
    ctx->pc = 0x1D946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9468u;
    // 0x1d946c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6670u, 0x1D9468u, 0x1D9470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9470u;
label_1d9470:
    // 0x1d9470: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1d9470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1d9474:
    // 0x1d9474: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d9474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d9478:
    // 0x1d9478: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1d9478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1d947c:
    // 0x1d947c: 0x24a560c0  addiu       $a1, $a1, 0x60C0
    ctx->pc = 0x1d947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24768));
label_1d9480:
    // 0x1d9480: 0x8c8c27e4  lw          $t4, 0x27E4($a0)
    ctx->pc = 0x1d9480u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_1d9484:
    // 0x1d9484: 0x240604d0  addiu       $a2, $zero, 0x4D0
    ctx->pc = 0x1d9484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
label_1d9488:
    // 0x1d9488: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d9488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d948c:
    // 0x1d948c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1d948cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1d9490:
    // 0x1d9490: 0x25086038  addiu       $t0, $t0, 0x6038
    ctx->pc = 0x1d9490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24632));
label_1d9494:
    // 0x1d9494: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1d9494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1d9498:
    // 0x1d9498: 0x240905e3  addiu       $t1, $zero, 0x5E3
    ctx->pc = 0x1d9498u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1507));
label_1d949c:
    // 0x1d949c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d949cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d94a0:
    // 0x1d94a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d94a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d94a4:
    // 0x1d94a4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1d94a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1d94a8:
    // 0x1d94a8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1d94a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d94ac:
    // 0x1d94ac: 0x40f809  jalr        $v0
label_1d94b0:
    if (ctx->pc == 0x1D94B0u) {
        ctx->pc = 0x1D94B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94ACu;
        // 0x1d94b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D94B4u;
        goto label_1d94b4;
    }
    ctx->pc = 0x1D94ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D94B4u);
        ctx->pc = 0x1D94B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94ACu;
        // 0x1d94b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94ACu, 0x1D94B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D94B4u;
label_1d94b4:
    // 0x1d94b4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d94b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d94b8:
    // 0x1d94b8: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
label_1d94bc:
    if (ctx->pc == 0x1D94BCu) {
        ctx->pc = 0x1D94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94B8u;
        // 0x1d94bc: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D94C0u;
        goto label_1d94c0;
    }
    ctx->pc = 0x1D94B8u;
    {
        const bool branch_taken_0x1d94b8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94B8u;
        // 0x1d94bc: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94b8) {
            ctx->pc = 0x1D94D4u;
            goto label_1d94d4;
        }
    }
    ctx->pc = 0x1D94C0u;
label_1d94c0:
    // 0x1d94c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d94c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d94c4:
    // 0x1d94c4: 0xc07599c  jal         func_1D6670
label_1d94c8:
    if (ctx->pc == 0x1D94C8u) {
        ctx->pc = 0x1D94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94C4u;
        // 0x1d94c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D94CCu;
        goto label_1d94cc;
    }
    ctx->pc = 0x1D94C4u;
    SET_GPR_U32(ctx, 31, 0x1D94CCu);
    ctx->pc = 0x1D94C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94C4u;
    // 0x1d94c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6670u, 0x1D94C4u, 0x1D94CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94CCu;
label_1d94cc:
    // 0x1d94cc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d94ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d94d0:
    // 0x1d94d0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d94d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d94d4:
    // 0x1d94d4: 0x240604d0  addiu       $a2, $zero, 0x4D0
    ctx->pc = 0x1d94d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
label_1d94d8:
    // 0x1d94d8: 0x8cac27e4  lw          $t4, 0x27E4($a1)
    ctx->pc = 0x1d94d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10212)));
label_1d94dc:
    // 0x1d94dc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d94dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d94e0:
    // 0x1d94e0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1d94e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1d94e4:
    // 0x1d94e4: 0x24a560c0  addiu       $a1, $a1, 0x60C0
    ctx->pc = 0x1d94e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24768));
label_1d94e8:
    // 0x1d94e8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1d94e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1d94ec:
    // 0x1d94ec: 0x25086038  addiu       $t0, $t0, 0x6038
    ctx->pc = 0x1d94ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24632));
label_1d94f0:
    // 0x1d94f0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1d94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1d94f4:
    // 0x1d94f4: 0x240905e4  addiu       $t1, $zero, 0x5E4
    ctx->pc = 0x1d94f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1508));
label_1d94f8:
    // 0x1d94f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d94f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d94fc:
    // 0x1d94fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d94fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9500:
    // 0x1d9500: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1d9500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1d9504:
    // 0x1d9504: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1d9504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d9508:
    // 0x1d9508: 0x40f809  jalr        $v0
label_1d950c:
    if (ctx->pc == 0x1D950Cu) {
        ctx->pc = 0x1D950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9508u;
        // 0x1d950c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9510u;
        goto label_1d9510;
    }
    ctx->pc = 0x1D9508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9510u);
        ctx->pc = 0x1D950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9508u;
        // 0x1d950c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9508u, 0x1D9510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9510u;
label_1d9510:
    // 0x1d9510: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1d9510u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9514:
    // 0x1d9514: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_1d9518:
    if (ctx->pc == 0x1D9518u) {
        ctx->pc = 0x1D9518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9514u;
        // 0x1d9518: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D951Cu;
        goto label_1d951c;
    }
    ctx->pc = 0x1D9514u;
    {
        const bool branch_taken_0x1d9514 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9514u;
        // 0x1d9518: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9514) {
            ctx->pc = 0x1D9530u;
            goto label_1d9530;
        }
    }
    ctx->pc = 0x1D951Cu;
label_1d951c:
    // 0x1d951c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d951cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d9520:
    // 0x1d9520: 0xc07599c  jal         func_1D6670
label_1d9524:
    if (ctx->pc == 0x1D9524u) {
        ctx->pc = 0x1D9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9520u;
        // 0x1d9524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9528u;
        goto label_1d9528;
    }
    ctx->pc = 0x1D9520u;
    SET_GPR_U32(ctx, 31, 0x1D9528u);
    ctx->pc = 0x1D9524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9520u;
    // 0x1d9524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6670u, 0x1D9520u, 0x1D9528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9528u;
label_1d9528:
    // 0x1d9528: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1d9528u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d952c:
    // 0x1d952c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d952cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d9530:
    // 0x1d9530: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1d9530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1d9534:
    // 0x1d9534: 0x24a560c0  addiu       $a1, $a1, 0x60C0
    ctx->pc = 0x1d9534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24768));
label_1d9538:
    // 0x1d9538: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1d9538u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1d953c:
    // 0x1d953c: 0x240604d0  addiu       $a2, $zero, 0x4D0
    ctx->pc = 0x1d953cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
label_1d9540:
    // 0x1d9540: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d9540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d9544:
    // 0x1d9544: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1d9544u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1d9548:
    // 0x1d9548: 0x25086038  addiu       $t0, $t0, 0x6038
    ctx->pc = 0x1d9548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24632));
label_1d954c:
    // 0x1d954c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1d954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1d9550:
    // 0x1d9550: 0x240905e5  addiu       $t1, $zero, 0x5E5
    ctx->pc = 0x1d9550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1509));
label_1d9554:
    // 0x1d9554: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9554u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9558:
    // 0x1d9558: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9558u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d955c:
    // 0x1d955c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1d955cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1d9560:
    // 0x1d9560: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1d9560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d9564:
    // 0x1d9564: 0x40f809  jalr        $v0
label_1d9568:
    if (ctx->pc == 0x1D9568u) {
        ctx->pc = 0x1D9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9564u;
        // 0x1d9568: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D956Cu;
        goto label_1d956c;
    }
    ctx->pc = 0x1D9564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D956Cu);
        ctx->pc = 0x1D9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9564u;
        // 0x1d9568: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9564u, 0x1D956Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D956Cu;
label_1d956c:
    // 0x1d956c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d956cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9570:
    // 0x1d9570: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_1d9574:
    if (ctx->pc == 0x1D9574u) {
        ctx->pc = 0x1D9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9570u;
        // 0x1d9574: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9578u;
        goto label_1d9578;
    }
    ctx->pc = 0x1D9570u;
    {
        const bool branch_taken_0x1d9570 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9570u;
        // 0x1d9574: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9570) {
            ctx->pc = 0x1D958Cu;
            goto label_1d958c;
        }
    }
    ctx->pc = 0x1D9578u;
label_1d9578:
    // 0x1d9578: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d9578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d957c:
    // 0x1d957c: 0xc07599c  jal         func_1D6670
label_1d9580:
    if (ctx->pc == 0x1D9580u) {
        ctx->pc = 0x1D9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D957Cu;
        // 0x1d9580: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9584u;
        goto label_1d9584;
    }
    ctx->pc = 0x1D957Cu;
    SET_GPR_U32(ctx, 31, 0x1D9584u);
    ctx->pc = 0x1D9580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D957Cu;
    // 0x1d9580: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6670u, 0x1D957Cu, 0x1D9584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9584u;
label_1d9584:
    // 0x1d9584: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d9584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9588:
    // 0x1d9588: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d9588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d958c:
    // 0x1d958c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1d958cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1d9590:
    // 0x1d9590: 0x24a560c0  addiu       $a1, $a1, 0x60C0
    ctx->pc = 0x1d9590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24768));
label_1d9594:
    // 0x1d9594: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1d9594u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1d9598:
    // 0x1d9598: 0x240604d0  addiu       $a2, $zero, 0x4D0
    ctx->pc = 0x1d9598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
label_1d959c:
    // 0x1d959c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d959cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d95a0:
    // 0x1d95a0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1d95a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1d95a4:
    // 0x1d95a4: 0x25086038  addiu       $t0, $t0, 0x6038
    ctx->pc = 0x1d95a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24632));
label_1d95a8:
    // 0x1d95a8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1d95a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1d95ac:
    // 0x1d95ac: 0x240905e6  addiu       $t1, $zero, 0x5E6
    ctx->pc = 0x1d95acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1510));
label_1d95b0:
    // 0x1d95b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d95b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d95b4:
    // 0x1d95b4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d95b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d95b8:
    // 0x1d95b8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1d95b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1d95bc:
    // 0x1d95bc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1d95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d95c0:
    // 0x1d95c0: 0x40f809  jalr        $v0
label_1d95c4:
    if (ctx->pc == 0x1D95C4u) {
        ctx->pc = 0x1D95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95C0u;
        // 0x1d95c4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D95C8u;
        goto label_1d95c8;
    }
    ctx->pc = 0x1D95C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D95C8u);
        ctx->pc = 0x1D95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95C0u;
        // 0x1d95c4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D95C0u, 0x1D95C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D95C8u;
label_1d95c8:
    // 0x1d95c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d95c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d95cc:
    // 0x1d95cc: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1d95d0:
    if (ctx->pc == 0x1D95D0u) {
        ctx->pc = 0x1D95D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95CCu;
        // 0x1d95d0: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D95D4u;
        goto label_1d95d4;
    }
    ctx->pc = 0x1D95CCu;
    {
        const bool branch_taken_0x1d95cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D95D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95CCu;
        // 0x1d95d0: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d95cc) {
            ctx->pc = 0x1D95E8u;
            goto label_1d95e8;
        }
    }
    ctx->pc = 0x1D95D4u;
label_1d95d4:
    // 0x1d95d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d95d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d95d8:
    // 0x1d95d8: 0xc07599c  jal         func_1D6670
label_1d95dc:
    if (ctx->pc == 0x1D95DCu) {
        ctx->pc = 0x1D95DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95D8u;
        // 0x1d95dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D95E0u;
        goto label_1d95e0;
    }
    ctx->pc = 0x1D95D8u;
    SET_GPR_U32(ctx, 31, 0x1D95E0u);
    ctx->pc = 0x1D95DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D95D8u;
    // 0x1d95dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6670u, 0x1D95D8u, 0x1D95E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95E0u;
label_1d95e0:
    // 0x1d95e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d95e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d95e4:
    // 0x1d95e4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d95e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d95e8:
    // 0x1d95e8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d95e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d95ec:
    // 0x1d95ec: 0xc4a4ed78  lwc1        $f4, -0x1288($a1)
    ctx->pc = 0x1d95ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d95f0:
    // 0x1d95f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d95f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d95f4:
    // 0x1d95f4: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x1d95f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d95f8:
    // 0x1d95f8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d95f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d95fc:
    // 0x1d95fc: 0xc441ed84  lwc1        $f1, -0x127C($v0)
    ctx->pc = 0x1d95fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9600:
    // 0x1d9600: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1d9600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1d9604:
    // 0x1d9604: 0xc462edd0  lwc1        $f2, -0x1230($v1)
    ctx->pc = 0x1d9604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9608:
    // 0x1d9608: 0x2404011a  addiu       $a0, $zero, 0x11A
    ctx->pc = 0x1d9608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
label_1d960c:
    // 0x1d960c: 0xe6e30004  swc1        $f3, 0x4($s7)
    ctx->pc = 0x1d960cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_1d9610:
    // 0x1d9610: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x1d9610u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
label_1d9614:
    // 0x1d9614: 0xe6e10008  swc1        $f1, 0x8($s7)
    ctx->pc = 0x1d9614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d9618:
    // 0x1d9618: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d9618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d961c:
    // 0x1d961c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1d961cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9620:
    // 0x1d9620: 0x26107f90  addiu       $s0, $s0, 0x7F90
    ctx->pc = 0x1d9620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32656));
label_1d9624:
    // 0x1d9624: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1d9624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9628:
    // 0x1d9628: 0x3c11001d  lui         $s1, 0x1D
    ctx->pc = 0x1d9628u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)29 << 16));
label_1d962c:
    // 0x1d962c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1d962cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1d9630:
    // 0x1d9630: 0x26317ff0  addiu       $s1, $s1, 0x7FF0
    ctx->pc = 0x1d9630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32752));
label_1d9634:
    // 0x1d9634: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1d9634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d9638:
    // 0x1d9638: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1d9638u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d963c:
    // 0x1d963c: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1d963cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d9640:
    // 0x1d9640: 0xc067b9c  jal         func_19EE70
label_1d9644:
    if (ctx->pc == 0x1D9644u) {
        ctx->pc = 0x1D9644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9640u;
        // 0x1d9644: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9648u;
        goto label_1d9648;
    }
    ctx->pc = 0x1D9640u;
    SET_GPR_U32(ctx, 31, 0x1D9648u);
    ctx->pc = 0x1D9644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9640u;
    // 0x1d9644: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D9640u, 0x1D9648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9648u;
label_1d9648:
    // 0x1d9648: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d9648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d964c:
    // 0x1d964c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d964cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9650:
    // 0x1d9650: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x1d9650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_1d9654:
    // 0x1d9654: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d9654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9658:
    // 0x1d9658: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1d9658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1d965c:
    // 0x1d965c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1d965cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d9660:
    // 0x1d9660: 0x8c620440  lw          $v0, 0x440($v1)
    ctx->pc = 0x1d9660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1088)));
label_1d9664:
    // 0x1d9664: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1d9664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d9668:
    // 0x1d9668: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1d9668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d966c:
    // 0x1d966c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d966cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9670:
    // 0x1d9670: 0x2400b  movn        $t0, $zero, $v0
    ctx->pc = 0x1d9670u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_1d9674:
    // 0x1d9674: 0xc0759ce  jal         func_1D6738
label_1d9678:
    if (ctx->pc == 0x1D9678u) {
        ctx->pc = 0x1D9678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9674u;
        // 0x1d9678: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D967Cu;
        goto label_1d967c;
    }
    ctx->pc = 0x1D9674u;
    SET_GPR_U32(ctx, 31, 0x1D967Cu);
    ctx->pc = 0x1D9678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9674u;
    // 0x1d9678: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6738u, 0x1D9674u, 0x1D967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D967Cu;
label_1d967c:
    // 0x1d967c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d967cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d9680:
    // 0x1d9680: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d9680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d9684:
    // 0x1d9684: 0xc4a1ed84  lwc1        $f1, -0x127C($a1)
    ctx->pc = 0x1d9684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9688:
    // 0x1d9688: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d9688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d968c:
    // 0x1d968c: 0xc442eda0  lwc1        $f2, -0x1260($v0)
    ctx->pc = 0x1d968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9690:
    // 0x1d9690: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d9690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d9694:
    // 0x1d9694: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d9694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9698:
    // 0x1d9698: 0x2404011b  addiu       $a0, $zero, 0x11B
    ctx->pc = 0x1d9698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
label_1d969c:
    // 0x1d969c: 0xc463ed78  lwc1        $f3, -0x1288($v1)
    ctx->pc = 0x1d969cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d96a0:
    // 0x1d96a0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d96a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d96a4:
    // 0x1d96a4: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1d96a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d96a8:
    // 0x1d96a8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1d96a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1d96ac:
    // 0x1d96ac: 0xc4a2edd0  lwc1        $f2, -0x1230($a1)
    ctx->pc = 0x1d96acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d96b0:
    // 0x1d96b0: 0xe6e40004  swc1        $f4, 0x4($s7)
    ctx->pc = 0x1d96b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_1d96b4:
    // 0x1d96b4: 0xe6e10008  swc1        $f1, 0x8($s7)
    ctx->pc = 0x1d96b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d96b8:
    // 0x1d96b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d96b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d96bc:
    // 0x1d96bc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1d96bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d96c0:
    // 0x1d96c0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1d96c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d96c4:
    // 0x1d96c4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1d96c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1d96c8:
    // 0x1d96c8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1d96c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d96cc:
    // 0x1d96cc: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1d96ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d96d0:
    // 0x1d96d0: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1d96d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d96d4:
    // 0x1d96d4: 0xc067b9c  jal         func_19EE70
label_1d96d8:
    if (ctx->pc == 0x1D96D8u) {
        ctx->pc = 0x1D96D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D96D4u;
        // 0x1d96d8: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D96DCu;
        goto label_1d96dc;
    }
    ctx->pc = 0x1D96D4u;
    SET_GPR_U32(ctx, 31, 0x1D96DCu);
    ctx->pc = 0x1D96D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D96D4u;
    // 0x1d96d8: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D96D4u, 0x1D96DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D96DCu;
label_1d96dc:
    // 0x1d96dc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d96dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d96e0:
    // 0x1d96e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d96e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d96e4:
    // 0x1d96e4: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x1d96e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_1d96e8:
    // 0x1d96e8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d96e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d96ec:
    // 0x1d96ec: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1d96ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d96f0:
    // 0x1d96f0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1d96f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d96f4:
    // 0x1d96f4: 0x8c620444  lw          $v0, 0x444($v1)
    ctx->pc = 0x1d96f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1092)));
label_1d96f8:
    // 0x1d96f8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1d96f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d96fc:
    // 0x1d96fc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1d96fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9700:
    // 0x1d9700: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9700u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9704:
    // 0x1d9704: 0x2400b  movn        $t0, $zero, $v0
    ctx->pc = 0x1d9704u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_1d9708:
    // 0x1d9708: 0xc0759ce  jal         func_1D6738
label_1d970c:
    if (ctx->pc == 0x1D970Cu) {
        ctx->pc = 0x1D970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9708u;
        // 0x1d970c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9710u;
        goto label_1d9710;
    }
    ctx->pc = 0x1D9708u;
    SET_GPR_U32(ctx, 31, 0x1D9710u);
    ctx->pc = 0x1D970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9708u;
    // 0x1d970c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6738u, 0x1D9708u, 0x1D9710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9710u;
label_1d9710:
    // 0x1d9710: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d9710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d9714:
    // 0x1d9714: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d9714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d9718:
    // 0x1d9718: 0xc4a0eda0  lwc1        $f0, -0x1260($a1)
    ctx->pc = 0x1d9718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d971c:
    // 0x1d971c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d971cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d9720:
    // 0x1d9720: 0xc441ed84  lwc1        $f1, -0x127C($v0)
    ctx->pc = 0x1d9720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9724:
    // 0x1d9724: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d9724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d9728:
    // 0x1d9728: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d9728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1d972c:
    // 0x1d972c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x1d972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9730:
    // 0x1d9730: 0xc463ed78  lwc1        $f3, -0x1288($v1)
    ctx->pc = 0x1d9730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d9734:
    // 0x1d9734: 0x2404011c  addiu       $a0, $zero, 0x11C
    ctx->pc = 0x1d9734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
label_1d9738:
    // 0x1d9738: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1d9738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d973c:
    // 0x1d973c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d973cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d9740:
    // 0x1d9740: 0xc4a5edd0  lwc1        $f5, -0x1230($a1)
    ctx->pc = 0x1d9740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d9744:
    // 0x1d9744: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1d9744u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1d9748:
    // 0x1d9748: 0xe6e40004  swc1        $f4, 0x4($s7)
    ctx->pc = 0x1d9748u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_1d974c:
    // 0x1d974c: 0xe6e10008  swc1        $f1, 0x8($s7)
    ctx->pc = 0x1d974cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d9750:
    // 0x1d9750: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1d9750u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_1d9754:
    // 0x1d9754: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1d9754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9758:
    // 0x1d9758: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1d9758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d975c:
    // 0x1d975c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1d975cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1d9760:
    // 0x1d9760: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1d9760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d9764:
    // 0x1d9764: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1d9764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d9768:
    // 0x1d9768: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1d9768u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d976c:
    // 0x1d976c: 0xc067b9c  jal         func_19EE70
label_1d9770:
    if (ctx->pc == 0x1D9770u) {
        ctx->pc = 0x1D9770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D976Cu;
        // 0x1d9770: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9774u;
        goto label_1d9774;
    }
    ctx->pc = 0x1D976Cu;
    SET_GPR_U32(ctx, 31, 0x1D9774u);
    ctx->pc = 0x1D9770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D976Cu;
    // 0x1d9770: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D976Cu, 0x1D9774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9774u;
label_1d9774:
    // 0x1d9774: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d9774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d9778:
    // 0x1d9778: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d977c:
    // 0x1d977c: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x1d977cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_1d9780:
    // 0x1d9780: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d9780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9784:
    // 0x1d9784: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1d9784u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9788:
    // 0x1d9788: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1d9788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d978c:
    // 0x1d978c: 0x8c620448  lw          $v0, 0x448($v1)
    ctx->pc = 0x1d978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1096)));
label_1d9790:
    // 0x1d9790: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1d9790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d9794:
    // 0x1d9794: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9794u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9798:
    // 0x1d9798: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9798u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d979c:
    // 0x1d979c: 0x2400b  movn        $t0, $zero, $v0
    ctx->pc = 0x1d979cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_1d97a0:
    // 0x1d97a0: 0xc0759ce  jal         func_1D6738
label_1d97a4:
    if (ctx->pc == 0x1D97A4u) {
        ctx->pc = 0x1D97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97A0u;
        // 0x1d97a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D97A8u;
        goto label_1d97a8;
    }
    ctx->pc = 0x1D97A0u;
    SET_GPR_U32(ctx, 31, 0x1D97A8u);
    ctx->pc = 0x1D97A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D97A0u;
    // 0x1d97a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6738u, 0x1D97A0u, 0x1D97A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D97A8u;
label_1d97a8:
    // 0x1d97a8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d97a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d97ac:
    // 0x1d97ac: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1d97acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1d97b0:
    // 0x1d97b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d97b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d97b4:
    // 0x1d97b4: 0xc4a0eda0  lwc1        $f0, -0x1260($a1)
    ctx->pc = 0x1d97b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d97b8:
    // 0x1d97b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d97b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d97bc:
    // 0x1d97bc: 0xc442ed84  lwc1        $f2, -0x127C($v0)
    ctx->pc = 0x1d97bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d97c0:
    // 0x1d97c0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d97c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d97c4:
    // 0x1d97c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d97c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d97c8:
    // 0x1d97c8: 0xc463ed78  lwc1        $f3, -0x1288($v1)
    ctx->pc = 0x1d97c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d97cc:
    // 0x1d97cc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1d97ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d97d0:
    // 0x1d97d0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d97d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d97d4:
    // 0x1d97d4: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1d97d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d97d8:
    // 0x1d97d8: 0x2404011d  addiu       $a0, $zero, 0x11D
    ctx->pc = 0x1d97d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
label_1d97dc:
    // 0x1d97dc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1d97dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d97e0:
    // 0x1d97e0: 0xc4a5edd0  lwc1        $f5, -0x1230($a1)
    ctx->pc = 0x1d97e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d97e4:
    // 0x1d97e4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1d97e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1d97e8:
    // 0x1d97e8: 0xe6e40004  swc1        $f4, 0x4($s7)
    ctx->pc = 0x1d97e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_1d97ec:
    // 0x1d97ec: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x1d97ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d97f0:
    // 0x1d97f0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1d97f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_1d97f4:
    // 0x1d97f4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1d97f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d97f8:
    // 0x1d97f8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1d97f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d97fc:
    // 0x1d97fc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1d97fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1d9800:
    // 0x1d9800: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1d9800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d9804:
    // 0x1d9804: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1d9804u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d9808:
    // 0x1d9808: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1d9808u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d980c:
    // 0x1d980c: 0xc067b9c  jal         func_19EE70
label_1d9810:
    if (ctx->pc == 0x1D9810u) {
        ctx->pc = 0x1D9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D980Cu;
        // 0x1d9810: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9814u;
        goto label_1d9814;
    }
    ctx->pc = 0x1D980Cu;
    SET_GPR_U32(ctx, 31, 0x1D9814u);
    ctx->pc = 0x1D9810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D980Cu;
    // 0x1d9810: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D980Cu, 0x1D9814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9814u;
label_1d9814:
    // 0x1d9814: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d9814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d9818:
    // 0x1d9818: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d981c:
    // 0x1d981c: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x1d981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_1d9820:
    // 0x1d9820: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d9820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9824:
    // 0x1d9824: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1d9824u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9828:
    // 0x1d9828: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1d9828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d982c:
    // 0x1d982c: 0x8c62044c  lw          $v0, 0x44C($v1)
    ctx->pc = 0x1d982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1100)));
label_1d9830:
    // 0x1d9830: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1d9830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d9834:
    // 0x1d9834: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1d9834u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9838:
    // 0x1d9838: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9838u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d983c:
    // 0x1d983c: 0x2400b  movn        $t0, $zero, $v0
    ctx->pc = 0x1d983cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_1d9840:
    // 0x1d9840: 0xc0759ce  jal         func_1D6738
label_1d9844:
    if (ctx->pc == 0x1D9844u) {
        ctx->pc = 0x1D9844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9840u;
        // 0x1d9844: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9848u;
        goto label_1d9848;
    }
    ctx->pc = 0x1D9840u;
    SET_GPR_U32(ctx, 31, 0x1D9848u);
    ctx->pc = 0x1D9844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9840u;
    // 0x1d9844: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6738u, 0x1D9840u, 0x1D9848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9848u;
label_1d9848:
    // 0x1d9848: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d9848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d984c:
    // 0x1d984c: 0x8cb1489c  lw          $s1, 0x489C($a1)
    ctx->pc = 0x1d984cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_1d9850:
    // 0x1d9850: 0xc136ad6  jal         func_4DAB58
label_1d9854:
    if (ctx->pc == 0x1D9854u) {
        ctx->pc = 0x1D9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9850u;
        // 0x1d9854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9858u;
        goto label_1d9858;
    }
    ctx->pc = 0x1D9850u;
    SET_GPR_U32(ctx, 31, 0x1D9858u);
    ctx->pc = 0x1D9854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9850u;
    // 0x1d9854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x1D9850u, 0x1D9858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9858u;
label_1d9858:
    // 0x1d9858: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d9858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d985c:
    // 0x1d985c: 0xc136ad4  jal         func_4DAB50
label_1d9860:
    if (ctx->pc == 0x1D9860u) {
        ctx->pc = 0x1D9860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D985Cu;
        // 0x1d9860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9864u;
        goto label_1d9864;
    }
    ctx->pc = 0x1D985Cu;
    SET_GPR_U32(ctx, 31, 0x1D9864u);
    ctx->pc = 0x1D9860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D985Cu;
    // 0x1d9860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x1D985Cu, 0x1D9864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9864u;
label_1d9864:
    // 0x1d9864: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1d9864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1d9868:
    // 0x1d9868: 0x24040066  addiu       $a0, $zero, 0x66
    ctx->pc = 0x1d9868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_1d986c:
    // 0x1d986c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d986cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1d9870:
    // 0x1d9870: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d9870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1d9874:
    // 0x1d9874: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d9874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d9878:
    // 0x1d9878: 0x10440029  beq         $v0, $a0, . + 4 + (0x29 << 2)
label_1d987c:
    if (ctx->pc == 0x1D987Cu) {
        ctx->pc = 0x1D987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9878u;
        // 0x1d987c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9880u;
        goto label_1d9880;
    }
    ctx->pc = 0x1D9878u;
    {
        const bool branch_taken_0x1d9878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9878u;
        // 0x1d987c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9878) {
            ctx->pc = 0x1D9920u;
            goto label_1d9920;
        }
    }
    ctx->pc = 0x1D9880u;
label_1d9880:
    // 0x1d9880: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d9880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d9884:
    // 0x1d9884: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1d9884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1d9888:
    // 0x1d9888: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d9888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d988c:
    // 0x1d988c: 0xc4a0eda0  lwc1        $f0, -0x1260($a1)
    ctx->pc = 0x1d988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9890:
    // 0x1d9890: 0xc442ed84  lwc1        $f2, -0x127C($v0)
    ctx->pc = 0x1d9890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9894:
    // 0x1d9894: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d9894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d9898:
    // 0x1d9898: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d9898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d989c:
    // 0x1d989c: 0xc463ed78  lwc1        $f3, -0x1288($v1)
    ctx->pc = 0x1d989cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d98a0:
    // 0x1d98a0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1d98a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d98a4:
    // 0x1d98a4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d98a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d98a8:
    // 0x1d98a8: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1d98a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d98ac:
    // 0x1d98ac: 0x2404011e  addiu       $a0, $zero, 0x11E
    ctx->pc = 0x1d98acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
label_1d98b0:
    // 0x1d98b0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1d98b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d98b4:
    // 0x1d98b4: 0xc4a5edd0  lwc1        $f5, -0x1230($a1)
    ctx->pc = 0x1d98b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d98b8:
    // 0x1d98b8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1d98b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1d98bc:
    // 0x1d98bc: 0xe6e40004  swc1        $f4, 0x4($s7)
    ctx->pc = 0x1d98bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_1d98c0:
    // 0x1d98c0: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x1d98c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d98c4:
    // 0x1d98c4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1d98c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_1d98c8:
    // 0x1d98c8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1d98c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d98cc:
    // 0x1d98cc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1d98ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d98d0:
    // 0x1d98d0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1d98d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1d98d4:
    // 0x1d98d4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1d98d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d98d8:
    // 0x1d98d8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1d98d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d98dc:
    // 0x1d98dc: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1d98dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d98e0:
    // 0x1d98e0: 0xc067b9c  jal         func_19EE70
label_1d98e4:
    if (ctx->pc == 0x1D98E4u) {
        ctx->pc = 0x1D98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D98E0u;
        // 0x1d98e4: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D98E8u;
        goto label_1d98e8;
    }
    ctx->pc = 0x1D98E0u;
    SET_GPR_U32(ctx, 31, 0x1D98E8u);
    ctx->pc = 0x1D98E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D98E0u;
    // 0x1d98e4: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D98E0u, 0x1D98E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D98E8u;
label_1d98e8:
    // 0x1d98e8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d98e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d98ec:
    // 0x1d98ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d98ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d98f0:
    // 0x1d98f0: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x1d98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_1d98f4:
    // 0x1d98f4: 0x3c09001e  lui         $t1, 0x1E
    ctx->pc = 0x1d98f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30 << 16));
label_1d98f8:
    // 0x1d98f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d98f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d98fc:
    // 0x1d98fc: 0x25298050  addiu       $t1, $t1, -0x7FB0
    ctx->pc = 0x1d98fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294934608));
label_1d9900:
    // 0x1d9900: 0x8c620450  lw          $v0, 0x450($v1)
    ctx->pc = 0x1d9900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1104)));
label_1d9904:
    // 0x1d9904: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d9904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d9908:
    // 0x1d9908: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1d9908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d990c:
    // 0x1d990c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1d990cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d9910:
    // 0x1d9910: 0x2400b  movn        $t0, $zero, $v0
    ctx->pc = 0x1d9910u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_1d9914:
    // 0x1d9914: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1d9914u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9918:
    // 0x1d9918: 0xc0759ce  jal         func_1D6738
label_1d991c:
    if (ctx->pc == 0x1D991Cu) {
        ctx->pc = 0x1D991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9918u;
        // 0x1d991c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9920u;
        goto label_1d9920;
    }
    ctx->pc = 0x1D9918u;
    SET_GPR_U32(ctx, 31, 0x1D9920u);
    ctx->pc = 0x1D991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9918u;
    // 0x1d991c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6738u, 0x1D9918u, 0x1D9920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9920u;
label_1d9920:
    // 0x1d9920: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1d9920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1d9924:
    // 0x1d9924: 0xc0756f2  jal         func_1D5BC8
label_1d9928:
    if (ctx->pc == 0x1D9928u) {
        ctx->pc = 0x1D9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9924u;
        // 0x1d9928: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D992Cu;
        goto label_1d992c;
    }
    ctx->pc = 0x1D9924u;
    SET_GPR_U32(ctx, 31, 0x1D992Cu);
    ctx->pc = 0x1D9928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9924u;
    // 0x1d9928: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BC8u, 0x1D9924u, 0x1D992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D992Cu;
label_1d992c:
    // 0x1d992c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1d992cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1d9930:
    // 0x1d9930: 0xc0756f2  jal         func_1D5BC8
label_1d9934:
    if (ctx->pc == 0x1D9934u) {
        ctx->pc = 0x1D9934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9930u;
        // 0x1d9934: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9938u;
        goto label_1d9938;
    }
    ctx->pc = 0x1D9930u;
    SET_GPR_U32(ctx, 31, 0x1D9938u);
    ctx->pc = 0x1D9934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9930u;
    // 0x1d9934: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BC8u, 0x1D9930u, 0x1D9938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9938u;
label_1d9938:
    // 0x1d9938: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1d9938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1d993c:
    // 0x1d993c: 0xc0756f2  jal         func_1D5BC8
label_1d9940:
    if (ctx->pc == 0x1D9940u) {
        ctx->pc = 0x1D9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D993Cu;
        // 0x1d9940: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9944u;
        goto label_1d9944;
    }
    ctx->pc = 0x1D993Cu;
    SET_GPR_U32(ctx, 31, 0x1D9944u);
    ctx->pc = 0x1D9940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D993Cu;
    // 0x1d9940: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BC8u, 0x1D993Cu, 0x1D9944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9944u;
label_1d9944:
    // 0x1d9944: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1d9944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1d9948:
    // 0x1d9948: 0xc0756f2  jal         func_1D5BC8
label_1d994c:
    if (ctx->pc == 0x1D994Cu) {
        ctx->pc = 0x1D994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9948u;
        // 0x1d994c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9950u;
        goto label_1d9950;
    }
    ctx->pc = 0x1D9948u;
    SET_GPR_U32(ctx, 31, 0x1D9950u);
    ctx->pc = 0x1D994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9948u;
    // 0x1d994c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BC8u, 0x1D9948u, 0x1D9950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9950u;
label_1d9950:
    // 0x1d9950: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d9950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d9954:
    // 0x1d9954: 0x8cb1489c  lw          $s1, 0x489C($a1)
    ctx->pc = 0x1d9954u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_1d9958:
    // 0x1d9958: 0xc136ad6  jal         func_4DAB58
label_1d995c:
    if (ctx->pc == 0x1D995Cu) {
        ctx->pc = 0x1D995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9958u;
        // 0x1d995c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9960u;
        goto label_1d9960;
    }
    ctx->pc = 0x1D9958u;
    SET_GPR_U32(ctx, 31, 0x1D9960u);
    ctx->pc = 0x1D995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9958u;
    // 0x1d995c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x1D9958u, 0x1D9960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9960u;
label_1d9960:
    // 0x1d9960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d9960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9964:
    // 0x1d9964: 0xc136ad4  jal         func_4DAB50
label_1d9968:
    if (ctx->pc == 0x1D9968u) {
        ctx->pc = 0x1D9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9964u;
        // 0x1d9968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D996Cu;
        goto label_1d996c;
    }
    ctx->pc = 0x1D9964u;
    SET_GPR_U32(ctx, 31, 0x1D996Cu);
    ctx->pc = 0x1D9968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9964u;
    // 0x1d9968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x1D9964u, 0x1D996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D996Cu;
label_1d996c:
    // 0x1d996c: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1d996cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1d9970:
    // 0x1d9970: 0x24040066  addiu       $a0, $zero, 0x66
    ctx->pc = 0x1d9970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_1d9974:
    // 0x1d9974: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d9974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1d9978:
    // 0x1d9978: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d9978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1d997c:
    // 0x1d997c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d9980:
    // 0x1d9980: 0x50440005  beql        $v0, $a0, . + 4 + (0x5 << 2)
label_1d9984:
    if (ctx->pc == 0x1D9984u) {
        ctx->pc = 0x1D9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9980u;
        // 0x1d9984: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9988u;
        goto label_1d9988;
    }
    ctx->pc = 0x1D9980u;
    {
        const bool branch_taken_0x1d9980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d9980) {
            ctx->pc = 0x1D9984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9980u;
            // 0x1d9984: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9998u;
            goto label_1d9998;
        }
    }
    ctx->pc = 0x1D9988u;
label_1d9988:
    // 0x1d9988: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1d9988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1d998c:
    // 0x1d998c: 0xc0756f2  jal         func_1D5BC8
label_1d9990:
    if (ctx->pc == 0x1D9990u) {
        ctx->pc = 0x1D9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D998Cu;
        // 0x1d9990: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9994u;
        goto label_1d9994;
    }
    ctx->pc = 0x1D998Cu;
    SET_GPR_U32(ctx, 31, 0x1D9994u);
    ctx->pc = 0x1D9990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D998Cu;
    // 0x1d9990: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BC8u, 0x1D998Cu, 0x1D9994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9994u;
label_1d9994:
    // 0x1d9994: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d9994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d9998:
    // 0x1d9998: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d9998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d999c:
    // 0x1d999c: 0xc4a1edc4  lwc1        $f1, -0x123C($a1)
    ctx->pc = 0x1d999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d99a0:
    // 0x1d99a0: 0x24040119  addiu       $a0, $zero, 0x119
    ctx->pc = 0x1d99a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
label_1d99a4:
    // 0x1d99a4: 0xc440edc8  lwc1        $f0, -0x1238($v0)
    ctx->pc = 0x1d99a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d99a8:
    // 0x1d99a8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d99a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d99ac:
    // 0x1d99ac: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x1d99acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d99b0:
    // 0x1d99b0: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x1d99b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_1d99b4:
    // 0x1d99b4: 0xc067b9c  jal         func_19EE70
label_1d99b8:
    if (ctx->pc == 0x1D99B8u) {
        ctx->pc = 0x1D99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99B4u;
        // 0x1d99b8: 0xe6f4000c  swc1        $f20, 0xC($s7) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D99BCu;
        goto label_1d99bc;
    }
    ctx->pc = 0x1D99B4u;
    SET_GPR_U32(ctx, 31, 0x1D99BCu);
    ctx->pc = 0x1D99B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D99B4u;
    // 0x1d99b8: 0xe6f4000c  swc1        $f20, 0xC($s7) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D99B4u, 0x1D99BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99BCu;
label_1d99bc:
    // 0x1d99bc: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1d99bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1d99c0:
    // 0x1d99c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d99c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d99c4:
    // 0x1d99c4: 0xc07570e  jal         func_1D5C38
label_1d99c8:
    if (ctx->pc == 0x1D99C8u) {
        ctx->pc = 0x1D99C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99C4u;
        // 0x1d99c8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D99CCu;
        goto label_1d99cc;
    }
    ctx->pc = 0x1D99C4u;
    SET_GPR_U32(ctx, 31, 0x1D99CCu);
    ctx->pc = 0x1D99C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D99C4u;
    // 0x1d99c8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C38u, 0x1D99C4u, 0x1D99CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99CCu;
label_1d99cc:
    // 0x1d99cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d99ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d99d0:
    // 0x1d99d0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1d99d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1d99d4:
    // 0x1d99d4: 0x24a560c0  addiu       $a1, $a1, 0x60C0
    ctx->pc = 0x1d99d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24768));
label_1d99d8:
    // 0x1d99d8: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1d99d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1d99dc:
    // 0x1d99dc: 0x240604d0  addiu       $a2, $zero, 0x4D0
    ctx->pc = 0x1d99dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
label_1d99e0:
    // 0x1d99e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d99e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d99e4:
    // 0x1d99e4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1d99e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1d99e8:
    // 0x1d99e8: 0x25086038  addiu       $t0, $t0, 0x6038
    ctx->pc = 0x1d99e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24632));
label_1d99ec:
    // 0x1d99ec: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1d99ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1d99f0:
    // 0x1d99f0: 0x24090604  addiu       $t1, $zero, 0x604
    ctx->pc = 0x1d99f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1540));
label_1d99f4:
    // 0x1d99f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d99f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d99f8:
    // 0x1d99f8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d99f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d99fc:
    // 0x1d99fc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1d99fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1d9a00:
    // 0x1d9a00: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1d9a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d9a04:
    // 0x1d9a04: 0x40f809  jalr        $v0
label_1d9a08:
    if (ctx->pc == 0x1D9A08u) {
        ctx->pc = 0x1D9A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A04u;
        // 0x1d9a08: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A0Cu;
        goto label_1d9a0c;
    }
    ctx->pc = 0x1D9A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9A0Cu);
        ctx->pc = 0x1D9A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A04u;
        // 0x1d9a08: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9A04u, 0x1D9A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9A0Cu;
label_1d9a0c:
    // 0x1d9a0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d9a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a10:
    // 0x1d9a10: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
label_1d9a14:
    if (ctx->pc == 0x1D9A14u) {
        ctx->pc = 0x1D9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A10u;
        // 0x1d9a14: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A18u;
        goto label_1d9a18;
    }
    ctx->pc = 0x1D9A10u;
    {
        const bool branch_taken_0x1d9a10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a10) {
            ctx->pc = 0x1D9A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9A10u;
            // 0x1d9a14: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9A2Cu;
            goto label_1d9a2c;
        }
    }
    ctx->pc = 0x1D9A18u;
label_1d9a18:
    // 0x1d9a18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d9a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a1c:
    // 0x1d9a1c: 0xc07599c  jal         func_1D6670
label_1d9a20:
    if (ctx->pc == 0x1D9A20u) {
        ctx->pc = 0x1D9A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A1Cu;
        // 0x1d9a20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A24u;
        goto label_1d9a24;
    }
    ctx->pc = 0x1D9A1Cu;
    SET_GPR_U32(ctx, 31, 0x1D9A24u);
    ctx->pc = 0x1D9A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A1Cu;
    // 0x1d9a20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6670u, 0x1D9A1Cu, 0x1D9A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A24u;
label_1d9a24:
    // 0x1d9a24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d9a24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a28:
    // 0x1d9a28: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d9a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d9a2c:
    // 0x1d9a2c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1d9a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1d9a30:
    // 0x1d9a30: 0x24a560c0  addiu       $a1, $a1, 0x60C0
    ctx->pc = 0x1d9a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24768));
label_1d9a34:
    // 0x1d9a34: 0x8c8c27e4  lw          $t4, 0x27E4($a0)
    ctx->pc = 0x1d9a34u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_1d9a38:
    // 0x1d9a38: 0x240604d0  addiu       $a2, $zero, 0x4D0
    ctx->pc = 0x1d9a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
label_1d9a3c:
    // 0x1d9a3c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d9a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d9a40:
    // 0x1d9a40: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1d9a40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1d9a44:
    // 0x1d9a44: 0x25086038  addiu       $t0, $t0, 0x6038
    ctx->pc = 0x1d9a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24632));
label_1d9a48:
    // 0x1d9a48: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1d9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1d9a4c:
    // 0x1d9a4c: 0x24090605  addiu       $t1, $zero, 0x605
    ctx->pc = 0x1d9a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
label_1d9a50:
    // 0x1d9a50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9a50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a54:
    // 0x1d9a54: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9a54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a58:
    // 0x1d9a58: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1d9a58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1d9a5c:
    // 0x1d9a5c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1d9a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d9a60:
    // 0x1d9a60: 0x40f809  jalr        $v0
label_1d9a64:
    if (ctx->pc == 0x1D9A64u) {
        ctx->pc = 0x1D9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A60u;
        // 0x1d9a64: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A68u;
        goto label_1d9a68;
    }
    ctx->pc = 0x1D9A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9A68u);
        ctx->pc = 0x1D9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A60u;
        // 0x1d9a64: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9A60u, 0x1D9A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9A68u;
label_1d9a68:
    // 0x1d9a68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d9a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a6c:
    // 0x1d9a6c: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
label_1d9a70:
    if (ctx->pc == 0x1D9A70u) {
        ctx->pc = 0x1D9A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A6Cu;
        // 0x1d9a70: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A74u;
        goto label_1d9a74;
    }
    ctx->pc = 0x1D9A6Cu;
    {
        const bool branch_taken_0x1d9a6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a6c) {
            ctx->pc = 0x1D9A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9A6Cu;
            // 0x1d9a70: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9A88u;
            goto label_1d9a88;
        }
    }
    ctx->pc = 0x1D9A74u;
label_1d9a74:
    // 0x1d9a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d9a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a78:
    // 0x1d9a78: 0xc07599c  jal         func_1D6670
label_1d9a7c:
    if (ctx->pc == 0x1D9A7Cu) {
        ctx->pc = 0x1D9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A78u;
        // 0x1d9a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A80u;
        goto label_1d9a80;
    }
    ctx->pc = 0x1D9A78u;
    SET_GPR_U32(ctx, 31, 0x1D9A80u);
    ctx->pc = 0x1D9A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A78u;
    // 0x1d9a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6670u, 0x1D9A78u, 0x1D9A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A80u;
label_1d9a80:
    // 0x1d9a80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d9a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a84:
    // 0x1d9a84: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d9a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d9a88:
    // 0x1d9a88: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x1d9a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d9a8c:
    // 0x1d9a8c: 0xc4a2ed88  lwc1        $f2, -0x1278($a1)
    ctx->pc = 0x1d9a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9a90:
    // 0x1d9a90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d9a94:
    // 0x1d9a94: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d9a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9a98:
    // 0x1d9a98: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x1d9a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_1d9a9c:
    // 0x1d9a9c: 0xc441ed78  lwc1        $f1, -0x1288($v0)
    ctx->pc = 0x1d9a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9aa0:
    // 0x1d9aa0: 0x3c11001d  lui         $s1, 0x1D
    ctx->pc = 0x1d9aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)29 << 16));
label_1d9aa4:
    // 0x1d9aa4: 0xe6e30004  swc1        $f3, 0x4($s7)
    ctx->pc = 0x1d9aa4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_1d9aa8:
    // 0x1d9aa8: 0x26317ef0  addiu       $s1, $s1, 0x7EF0
    ctx->pc = 0x1d9aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32496));
label_1d9aac:
    // 0x1d9aac: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x1d9aacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d9ab0:
    // 0x1d9ab0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d9ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d9ab4:
    // 0x1d9ab4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1d9ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9ab8:
    // 0x1d9ab8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1d9ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9abc:
    // 0x1d9abc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1d9abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d9ac0:
    // 0x1d9ac0: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1d9ac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1d9ac4:
    // 0x1d9ac4: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1d9ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d9ac8:
    // 0x1d9ac8: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1d9ac8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d9acc:
    // 0x1d9acc: 0xc067b9c  jal         func_19EE70
label_1d9ad0:
    if (ctx->pc == 0x1D9AD0u) {
        ctx->pc = 0x1D9AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9ACCu;
        // 0x1d9ad0: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9AD4u;
        goto label_1d9ad4;
    }
    ctx->pc = 0x1D9ACCu;
    SET_GPR_U32(ctx, 31, 0x1D9AD4u);
    ctx->pc = 0x1D9AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9ACCu;
    // 0x1d9ad0: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D9ACCu, 0x1D9AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9AD4u;
label_1d9ad4:
    // 0x1d9ad4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d9ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d9ad8:
    // 0x1d9ad8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d9ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9adc:
    // 0x1d9adc: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x1d9adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1d9ae0:
    // 0x1d9ae0: 0xc106900  jal         func_41A400
label_1d9ae4:
    if (ctx->pc == 0x1D9AE4u) {
        ctx->pc = 0x1D9AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AE0u;
        // 0x1d9ae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9AE8u;
        goto label_1d9ae8;
    }
    ctx->pc = 0x1D9AE0u;
    SET_GPR_U32(ctx, 31, 0x1D9AE8u);
    ctx->pc = 0x1D9AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9AE0u;
    // 0x1d9ae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A400u, 0x1D9AE0u, 0x1D9AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9AE8u;
label_1d9ae8:
    // 0x1d9ae8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d9ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9aec:
    // 0x1d9aec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d9af0:
    // 0x1d9af0: 0x2400b  movn        $t0, $zero, $v0
    ctx->pc = 0x1d9af0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_1d9af4:
    // 0x1d9af4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1d9af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d9af8:
    // 0x1d9af8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1d9af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d9afc:
    // 0x1d9afc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1d9afcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b00:
    // 0x1d9b00: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9b00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b04:
    // 0x1d9b04: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9b04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b08:
    // 0x1d9b08: 0xc0759ce  jal         func_1D6738
label_1d9b0c:
    if (ctx->pc == 0x1D9B0Cu) {
        ctx->pc = 0x1D9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B08u;
        // 0x1d9b0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B10u;
        goto label_1d9b10;
    }
    ctx->pc = 0x1D9B08u;
    SET_GPR_U32(ctx, 31, 0x1D9B10u);
    ctx->pc = 0x1D9B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B08u;
    // 0x1d9b0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6738u, 0x1D9B08u, 0x1D9B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B10u;
label_1d9b10:
    // 0x1d9b10: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d9b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d9b14:
    // 0x1d9b14: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d9b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d9b18:
    // 0x1d9b18: 0xc4a0eda0  lwc1        $f0, -0x1260($a1)
    ctx->pc = 0x1d9b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9b1c:
    // 0x1d9b1c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d9b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d9b20:
    // 0x1d9b20: 0xc481ed88  lwc1        $f1, -0x1278($a0)
    ctx->pc = 0x1d9b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294962568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9b24:
    // 0x1d9b24: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x1d9b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9b28:
    // 0x1d9b28: 0x24040121  addiu       $a0, $zero, 0x121
    ctx->pc = 0x1d9b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 289));
label_1d9b2c:
    // 0x1d9b2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d9b2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d9b30:
    // 0x1d9b30: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x1d9b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d9b34:
    // 0x1d9b34: 0xc444ed78  lwc1        $f4, -0x1288($v0)
    ctx->pc = 0x1d9b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d9b38:
    // 0x1d9b38: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x1d9b38u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_1d9b3c:
    // 0x1d9b3c: 0xe6e30004  swc1        $f3, 0x4($s7)
    ctx->pc = 0x1d9b3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_1d9b40:
    // 0x1d9b40: 0xe6e10008  swc1        $f1, 0x8($s7)
    ctx->pc = 0x1d9b40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d9b44:
    // 0x1d9b44: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1d9b44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1d9b48:
    // 0x1d9b48: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1d9b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9b4c:
    // 0x1d9b4c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1d9b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9b50:
    // 0x1d9b50: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1d9b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d9b54:
    // 0x1d9b54: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1d9b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1d9b58:
    // 0x1d9b58: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1d9b58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d9b5c:
    // 0x1d9b5c: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1d9b5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d9b60:
    // 0x1d9b60: 0xc067b9c  jal         func_19EE70
label_1d9b64:
    if (ctx->pc == 0x1D9B64u) {
        ctx->pc = 0x1D9B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B60u;
        // 0x1d9b64: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B68u;
        goto label_1d9b68;
    }
    ctx->pc = 0x1D9B60u;
    SET_GPR_U32(ctx, 31, 0x1D9B68u);
    ctx->pc = 0x1D9B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B60u;
    // 0x1d9b64: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D9B60u, 0x1D9B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B68u;
label_1d9b68:
    // 0x1d9b68: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d9b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d9b6c:
    // 0x1d9b6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d9b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b70:
    // 0x1d9b70: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x1d9b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1d9b74:
    // 0x1d9b74: 0xc106900  jal         func_41A400
label_1d9b78:
    if (ctx->pc == 0x1D9B78u) {
        ctx->pc = 0x1D9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B74u;
        // 0x1d9b78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B7Cu;
        goto label_1d9b7c;
    }
    ctx->pc = 0x1D9B74u;
    SET_GPR_U32(ctx, 31, 0x1D9B7Cu);
    ctx->pc = 0x1D9B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B74u;
    // 0x1d9b78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A400u, 0x1D9B74u, 0x1D9B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B7Cu;
label_1d9b7c:
    // 0x1d9b7c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d9b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9b80:
    // 0x1d9b80: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1d9b80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b84:
    // 0x1d9b84: 0x2400b  movn        $t0, $zero, $v0
    ctx->pc = 0x1d9b84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_1d9b88:
    // 0x1d9b88: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1d9b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b8c:
    // 0x1d9b8c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1d9b8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9b90:
    // 0x1d9b90: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9b90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b94:
    // 0x1d9b94: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1d9b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b98:
    // 0x1d9b98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d9b9c:
    // 0x1d9b9c: 0xc0759ce  jal         func_1D6738
label_1d9ba0:
    if (ctx->pc == 0x1D9BA0u) {
        ctx->pc = 0x1D9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B9Cu;
        // 0x1d9ba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BA4u;
        goto label_1d9ba4;
    }
    ctx->pc = 0x1D9B9Cu;
    SET_GPR_U32(ctx, 31, 0x1D9BA4u);
    ctx->pc = 0x1D9BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B9Cu;
    // 0x1d9ba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6738u, 0x1D9B9Cu, 0x1D9BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9BA4u;
label_1d9ba4:
    // 0x1d9ba4: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x1d9ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1d9ba8:
    // 0x1d9ba8: 0xc0756f2  jal         func_1D5BC8
label_1d9bac:
    if (ctx->pc == 0x1D9BACu) {
        ctx->pc = 0x1D9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BA8u;
        // 0x1d9bac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BB0u;
        goto label_1d9bb0;
    }
    ctx->pc = 0x1D9BA8u;
    SET_GPR_U32(ctx, 31, 0x1D9BB0u);
    ctx->pc = 0x1D9BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9BA8u;
    // 0x1d9bac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BC8u, 0x1D9BA8u, 0x1D9BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9BB0u;
label_1d9bb0:
    // 0x1d9bb0: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x1d9bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1d9bb4:
    // 0x1d9bb4: 0xc0756f2  jal         func_1D5BC8
label_1d9bb8:
    if (ctx->pc == 0x1D9BB8u) {
        ctx->pc = 0x1D9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BB4u;
        // 0x1d9bb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BBCu;
        goto label_1d9bbc;
    }
    ctx->pc = 0x1D9BB4u;
    SET_GPR_U32(ctx, 31, 0x1D9BBCu);
    ctx->pc = 0x1D9BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9BB4u;
    // 0x1d9bb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BC8u, 0x1D9BB4u, 0x1D9BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9BBCu;
label_1d9bbc:
    // 0x1d9bbc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d9bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d9bc0:
    // 0x1d9bc0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d9bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d9bc4:
    // 0x1d9bc4: 0xc481edc4  lwc1        $f1, -0x123C($a0)
    ctx->pc = 0x1d9bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294962628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9bc8:
    // 0x1d9bc8: 0xc4a0edc8  lwc1        $f0, -0x1238($a1)
    ctx->pc = 0x1d9bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9bcc:
    // 0x1d9bcc: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x1d9bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
label_1d9bd0:
    // 0x1d9bd0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d9bd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d9bd4:
    // 0x1d9bd4: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x1d9bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d9bd8:
    // 0x1d9bd8: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x1d9bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_1d9bdc:
    // 0x1d9bdc: 0xc067b9c  jal         func_19EE70
label_1d9be0:
    if (ctx->pc == 0x1D9BE0u) {
        ctx->pc = 0x1D9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BDCu;
        // 0x1d9be0: 0xe6f4000c  swc1        $f20, 0xC($s7) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BE4u;
        goto label_1d9be4;
    }
    ctx->pc = 0x1D9BDCu;
    SET_GPR_U32(ctx, 31, 0x1D9BE4u);
    ctx->pc = 0x1D9BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9BDCu;
    // 0x1d9be0: 0xe6f4000c  swc1        $f20, 0xC($s7) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D9BDCu, 0x1D9BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9BE4u;
label_1d9be4:
    // 0x1d9be4: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x1d9be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1d9be8:
    // 0x1d9be8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d9be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9bec:
    // 0x1d9bec: 0xc07570e  jal         func_1D5C38
label_1d9bf0:
    if (ctx->pc == 0x1D9BF0u) {
        ctx->pc = 0x1D9BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BECu;
        // 0x1d9bf0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BF4u;
        goto label_1d9bf4;
    }
    ctx->pc = 0x1D9BECu;
    SET_GPR_U32(ctx, 31, 0x1D9BF4u);
    ctx->pc = 0x1D9BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9BECu;
    // 0x1d9bf0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C38u, 0x1D9BECu, 0x1D9BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9BF4u;
label_1d9bf4:
    // 0x1d9bf4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d9bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d9bf8:
    // 0x1d9bf8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1d9bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1d9bfc:
    // 0x1d9bfc: 0x24a560c0  addiu       $a1, $a1, 0x60C0
    ctx->pc = 0x1d9bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24768));
label_1d9c00:
    // 0x1d9c00: 0x244227e4  addiu       $v0, $v0, 0x27E4
    ctx->pc = 0x1d9c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10212));
label_1d9c04:
    // 0x1d9c04: 0x240604d0  addiu       $a2, $zero, 0x4D0
    ctx->pc = 0x1d9c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
label_1d9c08:
    // 0x1d9c08: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x1d9c08u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9c0c:
    // 0x1d9c0c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d9c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d9c10:
    // 0x1d9c10: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1d9c10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1d9c14:
    // 0x1d9c14: 0x25086038  addiu       $t0, $t0, 0x6038
    ctx->pc = 0x1d9c14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24632));
label_1d9c18:
    // 0x1d9c18: 0x24090619  addiu       $t1, $zero, 0x619
    ctx->pc = 0x1d9c18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1561));
label_1d9c1c:
    // 0x1d9c1c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1d9c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1d9c20:
    // 0x1d9c20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9c20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9c24:
    // 0x1d9c24: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9c24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9c28:
    // 0x1d9c28: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1d9c28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1d9c2c:
    // 0x1d9c2c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1d9c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d9c30:
    // 0x1d9c30: 0x40f809  jalr        $v0
label_1d9c34:
    if (ctx->pc == 0x1D9C34u) {
        ctx->pc = 0x1D9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C30u;
        // 0x1d9c34: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C38u;
        goto label_1d9c38;
    }
    ctx->pc = 0x1D9C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9C38u);
        ctx->pc = 0x1D9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C30u;
        // 0x1d9c34: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9C30u, 0x1D9C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9C38u;
label_1d9c38:
    // 0x1d9c38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d9c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9c3c:
    // 0x1d9c3c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1d9c40:
    if (ctx->pc == 0x1D9C40u) {
        ctx->pc = 0x1D9C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C3Cu;
        // 0x1d9c40: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C44u;
        goto label_1d9c44;
    }
    ctx->pc = 0x1D9C3Cu;
    {
        const bool branch_taken_0x1d9c3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C3Cu;
        // 0x1d9c40: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c3c) {
            ctx->pc = 0x1D9C58u;
            goto label_1d9c58;
        }
    }
    ctx->pc = 0x1D9C44u;
label_1d9c44:
    // 0x1d9c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d9c48:
    // 0x1d9c48: 0xc07599c  jal         func_1D6670
label_1d9c4c:
    if (ctx->pc == 0x1D9C4Cu) {
        ctx->pc = 0x1D9C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C48u;
        // 0x1d9c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C50u;
        goto label_1d9c50;
    }
    ctx->pc = 0x1D9C48u;
    SET_GPR_U32(ctx, 31, 0x1D9C50u);
    ctx->pc = 0x1D9C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9C48u;
    // 0x1d9c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6670u, 0x1D9C48u, 0x1D9C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9C50u;
label_1d9c50:
    // 0x1d9c50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d9c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9c54:
    // 0x1d9c54: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d9c58:
    // 0x1d9c58: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1d9c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d9c5c:
    // 0x1d9c5c: 0xc460edc8  lwc1        $f0, -0x1238($v1)
    ctx->pc = 0x1d9c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9c60:
    // 0x1d9c60: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d9c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d9c64:
    // 0x1d9c64: 0xc4a1edc4  lwc1        $f1, -0x123C($a1)
    ctx->pc = 0x1d9c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9c68:
    // 0x1d9c68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d9c6c:
    // 0x1d9c6c: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x1d9c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d9c70:
    // 0x1d9c70: 0x24040124  addiu       $a0, $zero, 0x124
    ctx->pc = 0x1d9c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
label_1d9c74:
    // 0x1d9c74: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d9c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d9c78:
    // 0x1d9c78: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1d9c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9c7c:
    // 0x1d9c7c: 0xc443ed7c  lwc1        $f3, -0x1284($v0)
    ctx->pc = 0x1d9c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d9c80:
    // 0x1d9c80: 0xe6e40004  swc1        $f4, 0x4($s7)
    ctx->pc = 0x1d9c80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_1d9c84:
    // 0x1d9c84: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1d9c84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1d9c88:
    // 0x1d9c88: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1d9c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_1d9c8c:
    // 0x1d9c8c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1d9c8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1d9c90:
    // 0x1d9c90: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1d9c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1d9c94:
    // 0x1d9c94: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d9c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9c98:
    // 0x1d9c98: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1d9c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9c9c:
    // 0x1d9c9c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1d9c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d9ca0:
    // 0x1d9ca0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1d9ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1d9ca4:
    // 0x1d9ca4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1d9ca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d9ca8:
    // 0x1d9ca8: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1d9ca8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d9cac:
    // 0x1d9cac: 0xc067b9c  jal         func_19EE70
label_1d9cb0:
    if (ctx->pc == 0x1D9CB0u) {
        ctx->pc = 0x1D9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9CACu;
        // 0x1d9cb0: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9CB4u;
        goto label_1d9cb4;
    }
    ctx->pc = 0x1D9CACu;
    SET_GPR_U32(ctx, 31, 0x1D9CB4u);
    ctx->pc = 0x1D9CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CACu;
    // 0x1d9cb0: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D9CACu, 0x1D9CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CB4u;
label_1d9cb4:
    // 0x1d9cb4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d9cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d9cb8:
    // 0x1d9cb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9cbc:
    // 0x1d9cbc: 0x2484489c  addiu       $a0, $a0, 0x489C
    ctx->pc = 0x1d9cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18588));
label_1d9cc0:
    // 0x1d9cc0: 0x3c09001e  lui         $t1, 0x1E
    ctx->pc = 0x1d9cc0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30 << 16));
label_1d9cc4:
    // 0x1d9cc4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d9cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d9cc8:
    // 0x1d9cc8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d9cc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9ccc:
    // 0x1d9ccc: 0x252980a8  addiu       $t1, $t1, -0x7F58
    ctx->pc = 0x1d9cccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294934696));
label_1d9cd0:
    // 0x1d9cd0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1d9cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d9cd4:
    // 0x1d9cd4: 0x8c620438  lw          $v0, 0x438($v1)
    ctx->pc = 0x1d9cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1080)));
label_1d9cd8:
    // 0x1d9cd8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1d9cd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d9cdc:
    // 0x1d9cdc: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1d9cdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9ce0:
    // 0x1d9ce0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9ce0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ce4:
    // 0x1d9ce4: 0x2400b  movn        $t0, $zero, $v0
    ctx->pc = 0x1d9ce4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_1d9ce8:
    // 0x1d9ce8: 0xc0759ce  jal         func_1D6738
label_1d9cec:
    if (ctx->pc == 0x1D9CECu) {
        ctx->pc = 0x1D9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9CE8u;
        // 0x1d9cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9CF0u;
        goto label_1d9cf0;
    }
    ctx->pc = 0x1D9CE8u;
    SET_GPR_U32(ctx, 31, 0x1D9CF0u);
    ctx->pc = 0x1D9CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CE8u;
    // 0x1d9cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6738u, 0x1D9CE8u, 0x1D9CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CF0u;
label_1d9cf0:
    // 0x1d9cf0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d9cf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1d9cf4:
    // 0x1d9cf4: 0xc075964  jal         func_1D6590
label_1d9cf8:
    if (ctx->pc == 0x1D9CF8u) {
        ctx->pc = 0x1D9CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9CF4u;
        // 0x1d9cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9CFCu;
        goto label_1d9cfc;
    }
    ctx->pc = 0x1D9CF4u;
    SET_GPR_U32(ctx, 31, 0x1D9CFCu);
    ctx->pc = 0x1D9CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CF4u;
    // 0x1d9cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6590u, 0x1D9CF4u, 0x1D9CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CFCu;
label_1d9cfc:
    // 0x1d9cfc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d9cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d9d00:
    // 0x1d9d00: 0xc0756f2  jal         func_1D5BC8
label_1d9d04:
    if (ctx->pc == 0x1D9D04u) {
        ctx->pc = 0x1D9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D00u;
        // 0x1d9d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9D08u;
        goto label_1d9d08;
    }
    ctx->pc = 0x1D9D00u;
    SET_GPR_U32(ctx, 31, 0x1D9D08u);
    ctx->pc = 0x1D9D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D00u;
    // 0x1d9d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BC8u, 0x1D9D00u, 0x1D9D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D08u;
label_1d9d08:
    // 0x1d9d08: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d9d08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d9d0c:
    // 0x1d9d0c: 0x240604d0  addiu       $a2, $zero, 0x4D0
    ctx->pc = 0x1d9d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
label_1d9d10:
    // 0x1d9d10: 0x24a527e4  addiu       $a1, $a1, 0x27E4
    ctx->pc = 0x1d9d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10212));
label_1d9d14:
    // 0x1d9d14: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d9d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d9d18:
    // 0x1d9d18: 0x8cac0000  lw          $t4, 0x0($a1)
    ctx->pc = 0x1d9d18u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d9d1c:
    // 0x1d9d1c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1d9d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1d9d20:
    // 0x1d9d20: 0x25086038  addiu       $t0, $t0, 0x6038
    ctx->pc = 0x1d9d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24632));
label_1d9d24:
    // 0x1d9d24: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1d9d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1d9d28:
    // 0x1d9d28: 0x24a560c0  addiu       $a1, $a1, 0x60C0
    ctx->pc = 0x1d9d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24768));
label_1d9d2c:
    // 0x1d9d2c: 0x2409062a  addiu       $t1, $zero, 0x62A
    ctx->pc = 0x1d9d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1578));
label_1d9d30:
    // 0x1d9d30: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1d9d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1d9d34:
    // 0x1d9d34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9d34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9d38:
    // 0x1d9d38: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9d38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9d3c:
    // 0x1d9d3c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1d9d3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1d9d40:
    // 0x1d9d40: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1d9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d9d44:
    // 0x1d9d44: 0x40f809  jalr        $v0
label_1d9d48:
    if (ctx->pc == 0x1D9D48u) {
        ctx->pc = 0x1D9D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D44u;
        // 0x1d9d48: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9D4Cu;
        goto label_1d9d4c;
    }
    ctx->pc = 0x1D9D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9D4Cu);
        ctx->pc = 0x1D9D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D44u;
        // 0x1d9d48: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9D44u, 0x1D9D4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9D4Cu;
label_1d9d4c:
    // 0x1d9d4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9d50:
    // 0x1d9d50: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1d9d54:
    if (ctx->pc == 0x1D9D54u) {
        ctx->pc = 0x1D9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D50u;
        // 0x1d9d54: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9D58u;
        goto label_1d9d58;
    }
    ctx->pc = 0x1D9D50u;
    {
        const bool branch_taken_0x1d9d50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D50u;
        // 0x1d9d54: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d50) {
            ctx->pc = 0x1D9D6Cu;
            goto label_1d9d6c;
        }
    }
    ctx->pc = 0x1D9D58u;
label_1d9d58:
    // 0x1d9d58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9d5c:
    // 0x1d9d5c: 0xc07599c  jal         func_1D6670
label_1d9d60:
    if (ctx->pc == 0x1D9D60u) {
        ctx->pc = 0x1D9D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D5Cu;
        // 0x1d9d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9D64u;
        goto label_1d9d64;
    }
    ctx->pc = 0x1D9D5Cu;
    SET_GPR_U32(ctx, 31, 0x1D9D64u);
    ctx->pc = 0x1D9D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D5Cu;
    // 0x1d9d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6670u, 0x1D9D5Cu, 0x1D9D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D64u;
label_1d9d64:
    // 0x1d9d64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9d68:
    // 0x1d9d68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d9d6c:
    // 0x1d9d6c: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x1d9d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d9d70:
    // 0x1d9d70: 0xc441edc8  lwc1        $f1, -0x1238($v0)
    ctx->pc = 0x1d9d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9d74:
    // 0x1d9d74: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d9d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d9d78:
    // 0x1d9d78: 0xc460edc4  lwc1        $f0, -0x123C($v1)
    ctx->pc = 0x1d9d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9d7c:
    // 0x1d9d7c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d9d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d9d80:
    // 0x1d9d80: 0xe6e10008  swc1        $f1, 0x8($s7)
    ctx->pc = 0x1d9d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d9d84:
    // 0x1d9d84: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1d9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1d9d88:
    // 0x1d9d88: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1d9d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d9d8c:
    // 0x1d9d8c: 0x24040123  addiu       $a0, $zero, 0x123
    ctx->pc = 0x1d9d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
label_1d9d90:
    // 0x1d9d90: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1d9d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9d94:
    // 0x1d9d94: 0x245360d8  addiu       $s3, $v0, 0x60D8
    ctx->pc = 0x1d9d94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24792));
label_1d9d98:
    // 0x1d9d98: 0xc4a1ed7c  lwc1        $f1, -0x1284($a1)
    ctx->pc = 0x1d9d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9d9c:
    // 0x1d9d9c: 0xe6e30004  swc1        $f3, 0x4($s7)
    ctx->pc = 0x1d9d9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_1d9da0:
    // 0x1d9da0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1d9da0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1d9da4:
    // 0x1d9da4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d9da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9da8:
    // 0x1d9da8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1d9da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9dac:
    // 0x1d9dac: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1d9dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d9db0:
    // 0x1d9db0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1d9db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1d9db4:
    // 0x1d9db4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1d9db4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d9db8:
    // 0x1d9db8: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1d9db8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d9dbc:
    // 0x1d9dbc: 0xc067b9c  jal         func_19EE70
label_1d9dc0:
    if (ctx->pc == 0x1D9DC0u) {
        ctx->pc = 0x1D9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DBCu;
        // 0x1d9dc0: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9DC4u;
        goto label_1d9dc4;
    }
    ctx->pc = 0x1D9DBCu;
    SET_GPR_U32(ctx, 31, 0x1D9DC4u);
    ctx->pc = 0x1D9DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DBCu;
    // 0x1d9dc0: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D9DBCu, 0x1D9DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DC4u;
label_1d9dc4:
    // 0x1d9dc4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d9dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d9dc8:
    // 0x1d9dc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d9dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9dcc:
    // 0x1d9dcc: 0x8c65cdb8  lw          $a1, -0x3248($v1)
    ctx->pc = 0x1d9dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954424)));
label_1d9dd0:
    // 0x1d9dd0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1d9dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1d9dd4:
    // 0x1d9dd4: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x1d9dd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_1d9dd8:
    // 0x1d9dd8: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x1d9dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_1d9ddc:
    // 0x1d9ddc: 0x40f809  jalr        $v0
label_1d9de0:
    if (ctx->pc == 0x1D9DE0u) {
        ctx->pc = 0x1D9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DDCu;
        // 0x1d9de0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9DE4u;
        goto label_1d9de4;
    }
    ctx->pc = 0x1D9DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9DE4u);
        ctx->pc = 0x1D9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DDCu;
        // 0x1d9de0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9DDCu, 0x1D9DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9DE4u;
label_1d9de4:
    // 0x1d9de4: 0x3c09001e  lui         $t1, 0x1E
    ctx->pc = 0x1d9de4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30 << 16));
label_1d9de8:
    // 0x1d9de8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1d9de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9dec:
    // 0x1d9dec: 0x25298258  addiu       $t1, $t1, -0x7DA8
    ctx->pc = 0x1d9decu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294935128));
label_1d9df0:
    // 0x1d9df0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1d9df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d9df4:
    // 0x1d9df4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1d9df4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9df8:
    // 0x1d9df8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1d9df8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9dfc:
    // 0x1d9dfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e00:
    // 0x1d9e00: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1d9e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e04:
    // 0x1d9e04: 0xc0759ce  jal         func_1D6738
label_1d9e08:
    if (ctx->pc == 0x1D9E08u) {
        ctx->pc = 0x1D9E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E04u;
        // 0x1d9e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E0Cu;
        goto label_1d9e0c;
    }
    ctx->pc = 0x1D9E04u;
    SET_GPR_U32(ctx, 31, 0x1D9E0Cu);
    ctx->pc = 0x1D9E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E04u;
    // 0x1d9e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6738u, 0x1D9E04u, 0x1D9E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E0Cu;
label_1d9e0c:
    // 0x1d9e0c: 0xc067b9c  jal         func_19EE70
label_1d9e10:
    if (ctx->pc == 0x1D9E10u) {
        ctx->pc = 0x1D9E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E0Cu;
        // 0x1d9e10: 0x2404012d  addiu       $a0, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E14u;
        goto label_1d9e14;
    }
    ctx->pc = 0x1D9E0Cu;
    SET_GPR_U32(ctx, 31, 0x1D9E14u);
    ctx->pc = 0x1D9E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E0Cu;
    // 0x1d9e10: 0x2404012d  addiu       $a0, $zero, 0x12D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D9E0Cu, 0x1D9E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E14u;
label_1d9e14:
    // 0x1d9e14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d9e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e18:
    // 0x1d9e18: 0xc067b9c  jal         func_19EE70
label_1d9e1c:
    if (ctx->pc == 0x1D9E1Cu) {
        ctx->pc = 0x1D9E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E18u;
        // 0x1d9e1c: 0x2404012e  addiu       $a0, $zero, 0x12E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E20u;
        goto label_1d9e20;
    }
    ctx->pc = 0x1D9E18u;
    SET_GPR_U32(ctx, 31, 0x1D9E20u);
    ctx->pc = 0x1D9E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E18u;
    // 0x1d9e1c: 0x2404012e  addiu       $a0, $zero, 0x12E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D9E18u, 0x1D9E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E20u;
label_1d9e20:
    // 0x1d9e20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d9e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e24:
    // 0x1d9e24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e28:
    // 0x1d9e28: 0xc075a44  jal         func_1D6910
label_1d9e2c:
    if (ctx->pc == 0x1D9E2Cu) {
        ctx->pc = 0x1D9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E28u;
        // 0x1d9e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E30u;
        goto label_1d9e30;
    }
    ctx->pc = 0x1D9E28u;
    SET_GPR_U32(ctx, 31, 0x1D9E30u);
    ctx->pc = 0x1D9E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E28u;
    // 0x1d9e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6910u, 0x1D9E28u, 0x1D9E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E30u;
label_1d9e30:
    // 0x1d9e30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d9e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9e34:
    // 0x1d9e34: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d9e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e38:
    // 0x1d9e38: 0xc075a60  jal         func_1D6980
label_1d9e3c:
    if (ctx->pc == 0x1D9E3Cu) {
        ctx->pc = 0x1D9E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E38u;
        // 0x1d9e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E40u;
        goto label_1d9e40;
    }
    ctx->pc = 0x1D9E38u;
    SET_GPR_U32(ctx, 31, 0x1D9E40u);
    ctx->pc = 0x1D9E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E38u;
    // 0x1d9e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6980u, 0x1D9E38u, 0x1D9E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E40u;
label_1d9e40:
    // 0x1d9e40: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d9e40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1d9e44:
    // 0x1d9e44: 0xc075964  jal         func_1D6590
label_1d9e48:
    if (ctx->pc == 0x1D9E48u) {
        ctx->pc = 0x1D9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E44u;
        // 0x1d9e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E4Cu;
        goto label_1d9e4c;
    }
    ctx->pc = 0x1D9E44u;
    SET_GPR_U32(ctx, 31, 0x1D9E4Cu);
    ctx->pc = 0x1D9E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E44u;
    // 0x1d9e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6590u, 0x1D9E44u, 0x1D9E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E4Cu;
label_1d9e4c:
    // 0x1d9e4c: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1d9e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1d9e50:
    // 0x1d9e50: 0xc0756f2  jal         func_1D5BC8
label_1d9e54:
    if (ctx->pc == 0x1D9E54u) {
        ctx->pc = 0x1D9E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E50u;
        // 0x1d9e54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E58u;
        goto label_1d9e58;
    }
    ctx->pc = 0x1D9E50u;
    SET_GPR_U32(ctx, 31, 0x1D9E58u);
    ctx->pc = 0x1D9E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E50u;
    // 0x1d9e54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BC8u, 0x1D9E50u, 0x1D9E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E58u;
label_1d9e58:
    // 0x1d9e58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d9e5c:
    // 0x1d9e5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d9e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e60:
    // 0x1d9e60: 0x244227e4  addiu       $v0, $v0, 0x27E4
    ctx->pc = 0x1d9e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10212));
label_1d9e64:
    // 0x1d9e64: 0x24060640  addiu       $a2, $zero, 0x640
    ctx->pc = 0x1d9e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
label_1d9e68:
    // 0x1d9e68: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x1d9e68u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9e6c:
    // 0x1d9e6c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d9e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d9e70:
    // 0x1d9e70: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1d9e70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1d9e74:
    // 0x1d9e74: 0x25086038  addiu       $t0, $t0, 0x6038
    ctx->pc = 0x1d9e74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24632));
label_1d9e78:
    // 0x1d9e78: 0x24090637  addiu       $t1, $zero, 0x637
    ctx->pc = 0x1d9e78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1591));
label_1d9e7c:
    // 0x1d9e7c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1d9e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1d9e80:
    // 0x1d9e80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9e80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e84:
    // 0x1d9e84: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9e84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e88:
    // 0x1d9e88: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1d9e88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1d9e8c:
    // 0x1d9e8c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1d9e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d9e90:
    // 0x1d9e90: 0x40f809  jalr        $v0
label_1d9e94:
    if (ctx->pc == 0x1D9E94u) {
        ctx->pc = 0x1D9E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E90u;
        // 0x1d9e94: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9E98u;
        goto label_1d9e98;
    }
    ctx->pc = 0x1D9E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9E98u);
        ctx->pc = 0x1D9E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E90u;
        // 0x1d9e94: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E90u, 0x1D9E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9E98u;
label_1d9e98:
    // 0x1d9e98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d9e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e9c:
    // 0x1d9e9c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_1d9ea0:
    if (ctx->pc == 0x1D9EA0u) {
        ctx->pc = 0x1D9EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E9Cu;
        // 0x1d9ea0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9EA4u;
        goto label_1d9ea4;
    }
    ctx->pc = 0x1D9E9Cu;
    {
        const bool branch_taken_0x1d9e9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E9Cu;
        // 0x1d9ea0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e9c) {
            ctx->pc = 0x1D9EB4u;
            goto label_1d9eb4;
        }
    }
    ctx->pc = 0x1D9EA4u;
label_1d9ea4:
    // 0x1d9ea4: 0xc075b7e  jal         func_1D6DF8
label_1d9ea8:
    if (ctx->pc == 0x1D9EA8u) {
        ctx->pc = 0x1D9EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EA4u;
        // 0x1d9ea8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9EACu;
        goto label_1d9eac;
    }
    ctx->pc = 0x1D9EA4u;
    SET_GPR_U32(ctx, 31, 0x1D9EACu);
    ctx->pc = 0x1D9EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EA4u;
    // 0x1d9ea8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6DF8u, 0x1D9EA4u, 0x1D9EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EACu;
label_1d9eac:
    // 0x1d9eac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d9eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9eb0:
    // 0x1d9eb0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d9eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d9eb4:
    // 0x1d9eb4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d9eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d9eb8:
    // 0x1d9eb8: 0xc463edb0  lwc1        $f3, -0x1250($v1)
    ctx->pc = 0x1d9eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d9ebc:
    // 0x1d9ebc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d9ec0:
    // 0x1d9ec0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d9ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d9ec4:
    // 0x1d9ec4: 0xc4a1edb4  lwc1        $f1, -0x124C($a1)
    ctx->pc = 0x1d9ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9ec8:
    // 0x1d9ec8: 0xc460edac  lwc1        $f0, -0x1254($v1)
    ctx->pc = 0x1d9ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9ecc:
    // 0x1d9ecc: 0x24040129  addiu       $a0, $zero, 0x129
    ctx->pc = 0x1d9eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 297));
label_1d9ed0:
    // 0x1d9ed0: 0xc442edb8  lwc1        $f2, -0x1248($v0)
    ctx->pc = 0x1d9ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9ed4:
    // 0x1d9ed4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1d9ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d9ed8:
    // 0x1d9ed8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1d9ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d9edc:
    // 0x1d9edc: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1d9edcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d9ee0:
    // 0x1d9ee0: 0xe6e30008  swc1        $f3, 0x8($s7)
    ctx->pc = 0x1d9ee0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d9ee4:
    // 0x1d9ee4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1d9ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1d9ee8:
    // 0x1d9ee8: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x1d9ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_1d9eec:
    // 0x1d9eec: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1d9eecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d9ef0:
    // 0x1d9ef0: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x1d9ef0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1d9ef4:
    // 0x1d9ef4: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1d9ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d9ef8:
    // 0x1d9ef8: 0x861100c0  lh          $s1, 0xC0($s0)
    ctx->pc = 0x1d9ef8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
label_1d9efc:
    // 0x1d9efc: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x1d9efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_1d9f00:
    // 0x1d9f00: 0xc067b9c  jal         func_19EE70
label_1d9f04:
    if (ctx->pc == 0x1D9F04u) {
        ctx->pc = 0x1D9F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F00u;
        // 0x1d9f04: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F08u;
        goto label_1d9f08;
    }
    ctx->pc = 0x1D9F00u;
    SET_GPR_U32(ctx, 31, 0x1D9F08u);
    ctx->pc = 0x1D9F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9F00u;
    // 0x1d9f04: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D9F00u, 0x1D9F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9F08u;
label_1d9f08:
    // 0x1d9f08: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d9f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d9f0c:
    // 0x1d9f0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9f10:
    // 0x1d9f10: 0x2484489c  addiu       $a0, $a0, 0x489C
    ctx->pc = 0x1d9f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18588));
label_1d9f14:
    // 0x1d9f14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d9f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d9f18:
    // 0x1d9f18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d9f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d9f1c:
    // 0x1d9f1c: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1d9f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
label_1d9f20:
    // 0x1d9f20: 0x25088410  addiu       $t0, $t0, -0x7BF0
    ctx->pc = 0x1d9f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935568));
label_1d9f24:
    // 0x1d9f24: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1d9f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d9f28:
    // 0x1d9f28: 0xc46d57ac  lwc1        $f13, 0x57AC($v1)
    ctx->pc = 0x1d9f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 22444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d9f2c:
    // 0x1d9f2c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1d9f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d9f30:
    // 0x1d9f30: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d9f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d9f34:
    // 0x1d9f34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9f38:
    // 0x1d9f38: 0x40f809  jalr        $v0
label_1d9f3c:
    if (ctx->pc == 0x1D9F3Cu) {
        ctx->pc = 0x1D9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F38u;
        // 0x1d9f3c: 0xc46ceda8  lwc1        $f12, -0x1258($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F40u;
        goto label_1d9f40;
    }
    ctx->pc = 0x1D9F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9F40u);
        ctx->pc = 0x1D9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F38u;
        // 0x1d9f3c: 0xc46ceda8  lwc1        $f12, -0x1258($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F38u, 0x1D9F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9F40u;
label_1d9f40:
    // 0x1d9f40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1d9f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1d9f44:
    // 0x1d9f44: 0xc0756f2  jal         func_1D5BC8
label_1d9f48:
    if (ctx->pc == 0x1D9F48u) {
        ctx->pc = 0x1D9F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F44u;
        // 0x1d9f48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F4Cu;
        goto label_1d9f4c;
    }
    ctx->pc = 0x1D9F44u;
    SET_GPR_U32(ctx, 31, 0x1D9F4Cu);
    ctx->pc = 0x1D9F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9F44u;
    // 0x1d9f48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BC8u, 0x1D9F44u, 0x1D9F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9F4Cu;
label_1d9f4c:
    // 0x1d9f4c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d9f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d9f50:
    // 0x1d9f50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d9f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d9f54:
    // 0x1d9f54: 0x248427e4  addiu       $a0, $a0, 0x27E4
    ctx->pc = 0x1d9f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10212));
label_1d9f58:
    // 0x1d9f58: 0x24060640  addiu       $a2, $zero, 0x640
    ctx->pc = 0x1d9f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
label_1d9f5c:
    // 0x1d9f5c: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x1d9f5cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d9f60:
    // 0x1d9f60: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d9f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d9f64:
    // 0x1d9f64: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1d9f64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1d9f68:
    // 0x1d9f68: 0x25086038  addiu       $t0, $t0, 0x6038
    ctx->pc = 0x1d9f68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24632));
label_1d9f6c:
    // 0x1d9f6c: 0x24090641  addiu       $t1, $zero, 0x641
    ctx->pc = 0x1d9f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1601));
label_1d9f70:
    // 0x1d9f70: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1d9f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1d9f74:
    // 0x1d9f74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9f74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9f78:
    // 0x1d9f78: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9f78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9f7c:
    // 0x1d9f7c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1d9f7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1d9f80:
    // 0x1d9f80: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1d9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d9f84:
    // 0x1d9f84: 0x40f809  jalr        $v0
label_1d9f88:
    if (ctx->pc == 0x1D9F88u) {
        ctx->pc = 0x1D9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F84u;
        // 0x1d9f88: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F8Cu;
        goto label_1d9f8c;
    }
    ctx->pc = 0x1D9F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D9F8Cu);
        ctx->pc = 0x1D9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F84u;
        // 0x1d9f88: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F84u, 0x1D9F8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D9F8Cu;
label_1d9f8c:
    // 0x1d9f8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d9f8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9f90:
    // 0x1d9f90: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
label_1d9f94:
    if (ctx->pc == 0x1D9F94u) {
        ctx->pc = 0x1D9F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F90u;
        // 0x1d9f94: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F98u;
        goto label_1d9f98;
    }
    ctx->pc = 0x1D9F90u;
    {
        const bool branch_taken_0x1d9f90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9f90) {
            ctx->pc = 0x1D9F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9F90u;
            // 0x1d9f94: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9FA8u;
            goto label_1d9fa8;
        }
    }
    ctx->pc = 0x1D9F98u;
label_1d9f98:
    // 0x1d9f98: 0xc075b7e  jal         func_1D6DF8
label_1d9f9c:
    if (ctx->pc == 0x1D9F9Cu) {
        ctx->pc = 0x1D9F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F98u;
        // 0x1d9f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9FA0u;
        goto label_1d9fa0;
    }
    ctx->pc = 0x1D9F98u;
    SET_GPR_U32(ctx, 31, 0x1D9FA0u);
    ctx->pc = 0x1D9F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9F98u;
    // 0x1d9f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6DF8u, 0x1D9F98u, 0x1D9FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9FA0u;
label_1d9fa0:
    // 0x1d9fa0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d9fa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9fa4:
    // 0x1d9fa4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d9fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1d9fa8:
    // 0x1d9fa8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d9fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d9fac:
    // 0x1d9fac: 0xc4a2edac  lwc1        $f2, -0x1254($a1)
    ctx->pc = 0x1d9facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9fb0:
    // 0x1d9fb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d9fb4:
    // 0x1d9fb4: 0xc460edc0  lwc1        $f0, -0x1240($v1)
    ctx->pc = 0x1d9fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9fb8:
    // 0x1d9fb8: 0x2404012a  addiu       $a0, $zero, 0x12A
    ctx->pc = 0x1d9fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
label_1d9fbc:
    // 0x1d9fbc: 0xc441edbc  lwc1        $f1, -0x1244($v0)
    ctx->pc = 0x1d9fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9fc0:
    // 0x1d9fc0: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1d9fc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d9fc4:
    // 0x1d9fc4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1d9fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d9fc8:
    // 0x1d9fc8: 0xe6e10008  swc1        $f1, 0x8($s7)
    ctx->pc = 0x1d9fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1d9fcc:
    // 0x1d9fcc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1d9fccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d9fd0:
    // 0x1d9fd0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1d9fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1d9fd4:
    // 0x1d9fd4: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x1d9fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_1d9fd8:
    // 0x1d9fd8: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1d9fd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1d9fdc:
    // 0x1d9fdc: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x1d9fdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1d9fe0:
    // 0x1d9fe0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1d9fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d9fe4:
    // 0x1d9fe4: 0x861100c0  lh          $s1, 0xC0($s0)
    ctx->pc = 0x1d9fe4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
label_1d9fe8:
    // 0x1d9fe8: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x1d9fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_1d9fec:
    // 0x1d9fec: 0xc067b9c  jal         func_19EE70
label_1d9ff0:
    if (ctx->pc == 0x1D9FF0u) {
        ctx->pc = 0x1D9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FECu;
        // 0x1d9ff0: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9FF4u;
        goto label_1d9ff4;
    }
    ctx->pc = 0x1D9FECu;
    SET_GPR_U32(ctx, 31, 0x1D9FF4u);
    ctx->pc = 0x1D9FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9FECu;
    // 0x1d9ff0: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D9FECu, 0x1D9FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9FF4u;
label_1d9ff4:
    // 0x1d9ff4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d9ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1d9ff8:
    // 0x1d9ff8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ffc:
    // 0x1d9ffc: 0x2484489c  addiu       $a0, $a0, 0x489C
    ctx->pc = 0x1d9ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18588));
label_1da000:
    // 0x1da000: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1da000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1da004:
    // 0x1da004: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1da004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1da008:
    // 0x1da008: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1da008u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
label_1da00c:
    // 0x1da00c: 0xc44ceda8  lwc1        $f12, -0x1258($v0)
    ctx->pc = 0x1da00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1da010:
    // 0x1da010: 0x250883e0  addiu       $t0, $t0, -0x7C20
    ctx->pc = 0x1da010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935520));
label_1da014:
    // 0x1da014: 0xc46d57a8  lwc1        $f13, 0x57A8($v1)
    ctx->pc = 0x1da014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 22440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1da018:
    // 0x1da018: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1da018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1da01c:
    // 0x1da01c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1da01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1da020:
    // 0x1da020: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1da020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1da024:
    // 0x1da024: 0x40f809  jalr        $v0
label_1da028:
    if (ctx->pc == 0x1DA028u) {
        ctx->pc = 0x1DA028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA024u;
        // 0x1da028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA02Cu;
        goto label_1da02c;
    }
    ctx->pc = 0x1DA024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA02Cu);
        ctx->pc = 0x1DA028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA024u;
        // 0x1da028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA024u, 0x1DA02Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA02Cu;
label_1da02c:
    // 0x1da02c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1da02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1da030:
    // 0x1da030: 0xc0756f2  jal         func_1D5BC8
label_1da034:
    if (ctx->pc == 0x1DA034u) {
        ctx->pc = 0x1DA034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA030u;
        // 0x1da034: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA038u;
        goto label_1da038;
    }
    ctx->pc = 0x1DA030u;
    SET_GPR_U32(ctx, 31, 0x1DA038u);
    ctx->pc = 0x1DA034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA030u;
    // 0x1da034: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BC8u, 0x1DA030u, 0x1DA038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA038u;
label_1da038:
    // 0x1da038: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1da038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1da03c:
    // 0x1da03c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1da03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1da040:
    // 0x1da040: 0x24a560c0  addiu       $a1, $a1, 0x60C0
    ctx->pc = 0x1da040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24768));
label_1da044:
    // 0x1da044: 0x246327e4  addiu       $v1, $v1, 0x27E4
    ctx->pc = 0x1da044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10212));
label_1da048:
    // 0x1da048: 0x240604d0  addiu       $a2, $zero, 0x4D0
    ctx->pc = 0x1da048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
label_1da04c:
    // 0x1da04c: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x1da04cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1da050:
    // 0x1da050: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1da050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1da054:
    // 0x1da054: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1da054u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1da058:
    // 0x1da058: 0x25086038  addiu       $t0, $t0, 0x6038
    ctx->pc = 0x1da058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24632));
label_1da05c:
    // 0x1da05c: 0x24090649  addiu       $t1, $zero, 0x649
    ctx->pc = 0x1da05cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1609));
label_1da060:
    // 0x1da060: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1da060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1da064:
    // 0x1da064: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1da064u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da068:
    // 0x1da068: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1da068u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da06c:
    // 0x1da06c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1da06cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1da070:
    // 0x1da070: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1da070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1da074:
    // 0x1da074: 0x40f809  jalr        $v0
label_1da078:
    if (ctx->pc == 0x1DA078u) {
        ctx->pc = 0x1DA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA074u;
        // 0x1da078: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA07Cu;
        goto label_1da07c;
    }
    ctx->pc = 0x1DA074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA07Cu);
        ctx->pc = 0x1DA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA074u;
        // 0x1da078: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA074u, 0x1DA07Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA07Cu;
label_1da07c:
    // 0x1da07c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1da07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da080:
    // 0x1da080: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
label_1da084:
    if (ctx->pc == 0x1DA084u) {
        ctx->pc = 0x1DA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA080u;
        // 0x1da084: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA088u;
        goto label_1da088;
    }
    ctx->pc = 0x1DA080u;
    {
        const bool branch_taken_0x1da080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da080) {
            ctx->pc = 0x1DA084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA080u;
            // 0x1da084: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA09Cu;
            goto label_1da09c;
        }
    }
    ctx->pc = 0x1DA088u;
label_1da088:
    // 0x1da088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da08c:
    // 0x1da08c: 0xc07599c  jal         func_1D6670
label_1da090:
    if (ctx->pc == 0x1DA090u) {
        ctx->pc = 0x1DA090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA08Cu;
        // 0x1da090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA094u;
        goto label_1da094;
    }
    ctx->pc = 0x1DA08Cu;
    SET_GPR_U32(ctx, 31, 0x1DA094u);
    ctx->pc = 0x1DA090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA08Cu;
    // 0x1da090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6670u, 0x1DA08Cu, 0x1DA094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA094u;
label_1da094:
    // 0x1da094: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1da094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da098:
    // 0x1da098: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1da098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1da09c:
    // 0x1da09c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1da09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1da0a0:
    // 0x1da0a0: 0xc4a3edcc  lwc1        $f3, -0x1234($a1)
    ctx->pc = 0x1da0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1da0a4:
    // 0x1da0a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1da0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1da0a8:
    // 0x1da0a8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1da0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1da0ac:
    // 0x1da0ac: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x1da0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_1da0b0:
    // 0x1da0b0: 0xc442ed78  lwc1        $f2, -0x1288($v0)
    ctx->pc = 0x1da0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1da0b4:
    // 0x1da0b4: 0xe6e30008  swc1        $f3, 0x8($s7)
    ctx->pc = 0x1da0b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1da0b8:
    // 0x1da0b8: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x1da0b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_1da0bc:
    // 0x1da0bc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1da0bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1da0c0:
    // 0x1da0c0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1da0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1da0c4:
    // 0x1da0c4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1da0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1da0c8:
    // 0x1da0c8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1da0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1da0cc:
    // 0x1da0cc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1da0ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1da0d0:
    // 0x1da0d0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1da0d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1da0d4:
    // 0x1da0d4: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1da0d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1da0d8:
    // 0x1da0d8: 0xc067b9c  jal         func_19EE70
label_1da0dc:
    if (ctx->pc == 0x1DA0DCu) {
        ctx->pc = 0x1DA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0D8u;
        // 0x1da0dc: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA0E0u;
        goto label_1da0e0;
    }
    ctx->pc = 0x1DA0D8u;
    SET_GPR_U32(ctx, 31, 0x1DA0E0u);
    ctx->pc = 0x1DA0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA0D8u;
    // 0x1da0dc: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DA0D8u, 0x1DA0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA0E0u;
label_1da0e0:
    // 0x1da0e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1da0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1da0e4:
    // 0x1da0e4: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x1da0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
label_1da0e8:
    // 0x1da0e8: 0x8c66aa84  lw          $a2, -0x557C($v1)
    ctx->pc = 0x1da0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_1da0ec:
    // 0x1da0ec: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x1da0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_1da0f0:
    // 0x1da0f0: 0x3c09001e  lui         $t1, 0x1E
    ctx->pc = 0x1da0f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30 << 16));
label_1da0f4:
    // 0x1da0f4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1da0f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1da0f8:
    // 0x1da0f8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1da0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1da0fc:
    // 0x1da0fc: 0x25298208  addiu       $t1, $t1, -0x7DF8
    ctx->pc = 0x1da0fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294935048));
label_1da100:
    // 0x1da100: 0x8cc87aa8  lw          $t0, 0x7AA8($a2)
    ctx->pc = 0x1da100u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 31400)));
label_1da104:
    // 0x1da104: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1da104u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1da108:
    // 0x1da108: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1da108u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da10c:
    // 0x1da10c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da110:
    // 0x1da110: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x1da110u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
label_1da114:
    // 0x1da114: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1da114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1da118:
    // 0x1da118: 0xc0759ce  jal         func_1D6738
label_1da11c:
    if (ctx->pc == 0x1DA11Cu) {
        ctx->pc = 0x1DA11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA118u;
        // 0x1da11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA120u;
        goto label_1da120;
    }
    ctx->pc = 0x1DA118u;
    SET_GPR_U32(ctx, 31, 0x1DA120u);
    ctx->pc = 0x1DA11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA118u;
    // 0x1da11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6738u, 0x1DA118u, 0x1DA120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA120u;
label_1da120:
    // 0x1da120: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1da120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1da124:
    // 0x1da124: 0xc0756f2  jal         func_1D5BC8
label_1da128:
    if (ctx->pc == 0x1DA128u) {
        ctx->pc = 0x1DA128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA124u;
        // 0x1da128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA12Cu;
        goto label_1da12c;
    }
    ctx->pc = 0x1DA124u;
    SET_GPR_U32(ctx, 31, 0x1DA12Cu);
    ctx->pc = 0x1DA128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA124u;
    // 0x1da128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BC8u, 0x1DA124u, 0x1DA12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA12Cu;
label_1da12c:
    // 0x1da12c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1da12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1da130:
    // 0x1da130: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1da130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1da134:
    // 0x1da134: 0xc461edc4  lwc1        $f1, -0x123C($v1)
    ctx->pc = 0x1da134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1da138:
    // 0x1da138: 0x24040122  addiu       $a0, $zero, 0x122
    ctx->pc = 0x1da138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_1da13c:
    // 0x1da13c: 0xc4a0edc8  lwc1        $f0, -0x1238($a1)
    ctx->pc = 0x1da13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1da140:
    // 0x1da140: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1da140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1da144:
    // 0x1da144: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x1da144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1da148:
    // 0x1da148: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x1da148u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_1da14c:
    // 0x1da14c: 0xc067b9c  jal         func_19EE70
label_1da150:
    if (ctx->pc == 0x1DA150u) {
        ctx->pc = 0x1DA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA14Cu;
        // 0x1da150: 0xe6f4000c  swc1        $f20, 0xC($s7) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA154u;
        goto label_1da154;
    }
    ctx->pc = 0x1DA14Cu;
    SET_GPR_U32(ctx, 31, 0x1DA154u);
    ctx->pc = 0x1DA150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA14Cu;
    // 0x1da150: 0xe6f4000c  swc1        $f20, 0xC($s7) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DA14Cu, 0x1DA154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA154u;
label_1da154:
    // 0x1da154: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1da154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1da158:
    // 0x1da158: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1da158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da15c:
    // 0x1da15c: 0xc07570e  jal         func_1D5C38
label_1da160:
    if (ctx->pc == 0x1DA160u) {
        ctx->pc = 0x1DA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA15Cu;
        // 0x1da160: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA164u;
        goto label_1da164;
    }
    ctx->pc = 0x1DA15Cu;
    SET_GPR_U32(ctx, 31, 0x1DA164u);
    ctx->pc = 0x1DA160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA15Cu;
    // 0x1da160: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C38u, 0x1DA15Cu, 0x1DA164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA164u;
label_1da164:
    // 0x1da164: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1da164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1da168:
    // 0x1da168: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1da168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1da16c:
    // 0x1da16c: 0x24a560c0  addiu       $a1, $a1, 0x60C0
    ctx->pc = 0x1da16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24768));
label_1da170:
    // 0x1da170: 0x244227e4  addiu       $v0, $v0, 0x27E4
    ctx->pc = 0x1da170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10212));
label_1da174:
    // 0x1da174: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1da174u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1da178:
    // 0x1da178: 0x25086038  addiu       $t0, $t0, 0x6038
    ctx->pc = 0x1da178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24632));
label_1da17c:
    // 0x1da17c: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x1da17cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1da180:
    // 0x1da180: 0x240604d0  addiu       $a2, $zero, 0x4D0
    ctx->pc = 0x1da180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
label_1da184:
    // 0x1da184: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1da184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1da188:
    // 0x1da188: 0x2409065a  addiu       $t1, $zero, 0x65A
    ctx->pc = 0x1da188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1626));
label_1da18c:
    // 0x1da18c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1da18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1da190:
    // 0x1da190: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1da190u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da194:
    // 0x1da194: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1da194u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da198:
    // 0x1da198: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1da198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1da19c:
    // 0x1da19c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1da19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1da1a0:
    // 0x1da1a0: 0x40f809  jalr        $v0
label_1da1a4:
    if (ctx->pc == 0x1DA1A4u) {
        ctx->pc = 0x1DA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1A0u;
        // 0x1da1a4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA1A8u;
        goto label_1da1a8;
    }
    ctx->pc = 0x1DA1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA1A8u);
        ctx->pc = 0x1DA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1A0u;
        // 0x1da1a4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA1A0u, 0x1DA1A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA1A8u;
label_1da1a8:
    // 0x1da1a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1da1ac:
    if (ctx->pc == 0x1DA1ACu) {
        ctx->pc = 0x1DA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1A8u;
        // 0x1da1ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA1B0u;
        goto label_1da1b0;
    }
    ctx->pc = 0x1DA1A8u;
    {
        const bool branch_taken_0x1da1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1A8u;
        // 0x1da1ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1a8) {
            ctx->pc = 0x1DA1B8u;
            goto label_1da1b8;
        }
    }
    ctx->pc = 0x1DA1B0u;
label_1da1b0:
    // 0x1da1b0: 0xc07599c  jal         func_1D6670
label_1da1b4:
    if (ctx->pc == 0x1DA1B4u) {
        ctx->pc = 0x1DA1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1B0u;
        // 0x1da1b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA1B8u;
        goto label_1da1b8;
    }
    ctx->pc = 0x1DA1B0u;
    SET_GPR_U32(ctx, 31, 0x1DA1B8u);
    ctx->pc = 0x1DA1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA1B0u;
    // 0x1da1b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6670u, 0x1DA1B0u, 0x1DA1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA1B8u;
label_1da1b8:
    // 0x1da1b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1da1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1da1bc:
    // 0x1da1bc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1da1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1da1c0:
    // 0x1da1c0: 0xc461edc4  lwc1        $f1, -0x123C($v1)
    ctx->pc = 0x1da1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1da1c4:
    // 0x1da1c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1da1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1da1c8:
    // 0x1da1c8: 0xc4a2edc8  lwc1        $f2, -0x1238($a1)
    ctx->pc = 0x1da1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1da1cc:
    // 0x1da1cc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1da1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1da1d0:
    // 0x1da1d0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1da1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1da1d4:
    // 0x1da1d4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1da1d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1da1d8:
    // 0x1da1d8: 0x24a5489c  addiu       $a1, $a1, 0x489C
    ctx->pc = 0x1da1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18588));
label_1da1dc:
    // 0x1da1dc: 0xe6e00004  swc1        $f0, 0x4($s7)
    ctx->pc = 0x1da1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_1da1e0:
    // 0x1da1e0: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x1da1e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1da1e4:
    // 0x1da1e4: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x1da1e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_1da1e8:
    // 0x1da1e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1da1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1da1ec:
    // 0x1da1ec: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1da1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1da1f0:
    // 0x1da1f0: 0xaca2edd4  sw          $v0, -0x122C($a1)
    ctx->pc = 0x1da1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294962644), GPR_U32(ctx, 2));
label_1da1f4:
    // 0x1da1f4: 0x8c620120  lw          $v0, 0x120($v1)
    ctx->pc = 0x1da1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_1da1f8:
    // 0x1da1f8: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
label_1da1fc:
    if (ctx->pc == 0x1DA1FCu) {
        ctx->pc = 0x1DA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1F8u;
        // 0x1da1fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA200u;
        goto label_1da200;
    }
    ctx->pc = 0x1DA1F8u;
    {
        const bool branch_taken_0x1da1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1DA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1F8u;
        // 0x1da1fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1f8) {
            ctx->pc = 0x1DA224u;
            goto label_1da224;
        }
    }
    ctx->pc = 0x1DA200u;
label_1da200:
    // 0x1da200: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1da200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1da204:
    // 0x1da204: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1da204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1da208:
    // 0x1da208: 0xc441ed80  lwc1        $f1, -0x1280($v0)
    ctx->pc = 0x1da208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1da20c:
    // 0x1da20c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1da20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1da210:
    // 0x1da210: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1da210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1da214:
    // 0x1da214: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1da214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1da218:
    // 0x1da218: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1da218u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1da21c:
    // 0x1da21c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1da220:
    if (ctx->pc == 0x1DA220u) {
        ctx->pc = 0x1DA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA21Cu;
        // 0x1da220: 0xe7a20024  swc1        $f2, 0x24($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA224u;
        goto label_1da224;
    }
    ctx->pc = 0x1DA21Cu;
    {
        const bool branch_taken_0x1da21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA21Cu;
        // 0x1da220: 0xe7a20024  swc1        $f2, 0x24($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da21c) {
            ctx->pc = 0x1DA240u;
            goto label_1da240;
        }
    }
    ctx->pc = 0x1DA224u;
label_1da224:
    // 0x1da224: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1da224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1da228:
    // 0x1da228: 0xc442ed7c  lwc1        $f2, -0x1284($v0)
    ctx->pc = 0x1da228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1da22c:
    // 0x1da22c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1da22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1da230:
    // 0x1da230: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1da230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1da234:
    // 0x1da234: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1da234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1da238:
    // 0x1da238: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1da238u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1da23c:
    // 0x1da23c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1da23cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1da240:
    // 0x1da240: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1da240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1da244:
    // 0x1da244: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x1da244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1da248:
    // 0x1da248: 0xc067b9c  jal         func_19EE70
label_1da24c:
    if (ctx->pc == 0x1DA24Cu) {
        ctx->pc = 0x1DA24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA248u;
        // 0x1da24c: 0x24040128  addiu       $a0, $zero, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA250u;
        goto label_1da250;
    }
    ctx->pc = 0x1DA248u;
    SET_GPR_U32(ctx, 31, 0x1DA250u);
    ctx->pc = 0x1DA24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA248u;
    // 0x1da24c: 0x24040128  addiu       $a0, $zero, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DA248u, 0x1DA250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA250u;
label_1da250:
    // 0x1da250: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1da250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1da254:
    // 0x1da254: 0x3c09001e  lui         $t1, 0x1E
    ctx->pc = 0x1da254u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30 << 16));
label_1da258:
    // 0x1da258: 0x8c64edd4  lw          $a0, -0x122C($v1)
    ctx->pc = 0x1da258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962644)));
label_1da25c:
    // 0x1da25c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1da25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1da260:
    // 0x1da260: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1da260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1da264:
    // 0x1da264: 0x252980e0  addiu       $t1, $t1, -0x7F20
    ctx->pc = 0x1da264u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294934752));
label_1da268:
    // 0x1da268: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da26c:
    // 0x1da26c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1da26cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1da270:
    // 0x1da270: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1da270u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da274:
    // 0x1da274: 0xc0759ce  jal         func_1D6738
label_1da278:
    if (ctx->pc == 0x1DA278u) {
        ctx->pc = 0x1DA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA274u;
        // 0x1da278: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA27Cu;
        goto label_1da27c;
    }
    ctx->pc = 0x1DA274u;
    SET_GPR_U32(ctx, 31, 0x1DA27Cu);
    ctx->pc = 0x1DA278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA274u;
    // 0x1da278: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6738u, 0x1DA274u, 0x1DA27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA27Cu;
label_1da27c:
    // 0x1da27c: 0xc067b9c  jal         func_19EE70
label_1da280:
    if (ctx->pc == 0x1DA280u) {
        ctx->pc = 0x1DA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA27Cu;
        // 0x1da280: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA284u;
        goto label_1da284;
    }
    ctx->pc = 0x1DA27Cu;
    SET_GPR_U32(ctx, 31, 0x1DA284u);
    ctx->pc = 0x1DA280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA27Cu;
    // 0x1da280: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DA27Cu, 0x1DA284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA284u;
label_1da284:
    // 0x1da284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1da284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da288:
    // 0x1da288: 0xc067b9c  jal         func_19EE70
label_1da28c:
    if (ctx->pc == 0x1DA28Cu) {
        ctx->pc = 0x1DA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA288u;
        // 0x1da28c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA290u;
        goto label_1da290;
    }
    ctx->pc = 0x1DA288u;
    SET_GPR_U32(ctx, 31, 0x1DA290u);
    ctx->pc = 0x1DA28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA288u;
    // 0x1da28c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DA288u, 0x1DA290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA290u;
label_1da290:
    // 0x1da290: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1da290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1da294:
    // 0x1da294: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1da294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da298:
    // 0x1da298: 0x8ca4edd4  lw          $a0, -0x122C($a1)
    ctx->pc = 0x1da298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962644)));
label_1da29c:
    // 0x1da29c: 0xc075a44  jal         func_1D6910
label_1da2a0:
    if (ctx->pc == 0x1DA2A0u) {
        ctx->pc = 0x1DA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA29Cu;
        // 0x1da2a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA2A4u;
        goto label_1da2a4;
    }
    ctx->pc = 0x1DA29Cu;
    SET_GPR_U32(ctx, 31, 0x1DA2A4u);
    ctx->pc = 0x1DA2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA29Cu;
    // 0x1da2a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6910u, 0x1DA29Cu, 0x1DA2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA2A4u;
label_1da2a4:
    // 0x1da2a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1da2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1da2a8:
    // 0x1da2a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1da2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1da2ac:
    // 0x1da2ac: 0x8c44edd4  lw          $a0, -0x122C($v0)
    ctx->pc = 0x1da2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962644)));
label_1da2b0:
    // 0x1da2b0: 0xc075a60  jal         func_1D6980
label_1da2b4:
    if (ctx->pc == 0x1DA2B4u) {
        ctx->pc = 0x1DA2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2B0u;
        // 0x1da2b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA2B8u;
        goto label_1da2b8;
    }
    ctx->pc = 0x1DA2B0u;
    SET_GPR_U32(ctx, 31, 0x1DA2B8u);
    ctx->pc = 0x1DA2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA2B0u;
    // 0x1da2b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6980u, 0x1DA2B0u, 0x1DA2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA2B8u;
label_1da2b8:
    // 0x1da2b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1da2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1da2bc:
    // 0x1da2bc: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1da2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_1da2c0:
    // 0x1da2c0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1da2c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1da2c4:
    // 0x1da2c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1da2c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1da2c8:
    // 0x1da2c8: 0xc075964  jal         func_1D6590
label_1da2cc:
    if (ctx->pc == 0x1DA2CCu) {
        ctx->pc = 0x1DA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2C8u;
        // 0x1da2cc: 0x8c64edd4  lw          $a0, -0x122C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA2D0u;
        goto label_1da2d0;
    }
    ctx->pc = 0x1DA2C8u;
    SET_GPR_U32(ctx, 31, 0x1DA2D0u);
    ctx->pc = 0x1DA2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA2C8u;
    // 0x1da2cc: 0x8c64edd4  lw          $a0, -0x122C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962644)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6590u, 0x1DA2C8u, 0x1DA2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA2D0u;
label_1da2d0:
    // 0x1da2d0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1da2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1da2d4:
    // 0x1da2d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da2d8:
    // 0x1da2d8: 0x8c85edd4  lw          $a1, -0x122C($a0)
    ctx->pc = 0x1da2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294962644)));
label_1da2dc:
    // 0x1da2dc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1da2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1da2e0:
    // 0x1da2e0: 0xc0756f2  jal         func_1D5BC8
label_1da2e4:
    if (ctx->pc == 0x1DA2E4u) {
        ctx->pc = 0x1DA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2E0u;
        // 0x1da2e4: 0xaca204c0  sw          $v0, 0x4C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA2E8u;
        goto label_1da2e8;
    }
    ctx->pc = 0x1DA2E0u;
    SET_GPR_U32(ctx, 31, 0x1DA2E8u);
    ctx->pc = 0x1DA2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA2E0u;
    // 0x1da2e4: 0xaca204c0  sw          $v0, 0x4C0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 1216), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BC8u, 0x1DA2E0u, 0x1DA2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA2E8u;
label_1da2e8:
    // 0x1da2e8: 0xafc045cc  sw          $zero, 0x45CC($fp)
    ctx->pc = 0x1da2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17868), GPR_U32(ctx, 0));
label_1da2ec:
    // 0x1da2ec: 0xafc00010  sw          $zero, 0x10($fp)
    ctx->pc = 0x1da2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
label_1da2f0:
    // 0x1da2f0: 0xafc045c0  sw          $zero, 0x45C0($fp)
    ctx->pc = 0x1da2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17856), GPR_U32(ctx, 0));
label_1da2f4:
    // 0x1da2f4: 0xafc045c4  sw          $zero, 0x45C4($fp)
    ctx->pc = 0x1da2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17860), GPR_U32(ctx, 0));
label_1da2f8:
    // 0x1da2f8: 0xafc045c8  sw          $zero, 0x45C8($fp)
    ctx->pc = 0x1da2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17864), GPR_U32(ctx, 0));
label_1da2fc:
    // 0x1da2fc: 0xafc045d0  sw          $zero, 0x45D0($fp)
    ctx->pc = 0x1da2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17872), GPR_U32(ctx, 0));
label_1da300:
    // 0x1da300: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1da300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1da304:
    // 0x1da304: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1da304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1da308:
    // 0x1da308: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1da308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1da30c:
    // 0x1da30c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1da30cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1da310:
    // 0x1da310: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1da310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1da314:
    // 0x1da314: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1da314u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1da318:
    // 0x1da318: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1da318u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1da31c:
    // 0x1da31c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1da31cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1da320:
    // 0x1da320: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1da320u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1da324:
    // 0x1da324: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1da324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1da328:
    // 0x1da328: 0xc7b90128  lwc1        $f25, 0x128($sp)
    ctx->pc = 0x1da328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1da32c:
    // 0x1da32c: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x1da32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1da330:
    // 0x1da330: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x1da330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1da334:
    // 0x1da334: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x1da334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1da338:
    // 0x1da338: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1da338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1da33c:
    // 0x1da33c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1da33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1da340:
    // 0x1da340: 0x3e00008  jr          $ra
label_1da344:
    if (ctx->pc == 0x1DA344u) {
        ctx->pc = 0x1DA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA340u;
        // 0x1da344: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA348u;
        goto label_fallthrough_0x1da340;
    }
    ctx->pc = 0x1DA340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA340u;
        // 0x1da344: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1da340:
    ctx->pc = 0x1DA348u;
}
