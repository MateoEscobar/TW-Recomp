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

// Function: sub_003A87D8
// Address: 0x3a87d8 - 0x3a8c60
void sub_003A87D8_0x3a87d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A87D8_0x3a87d8");
#endif

    switch (ctx->pc) {
        case 0x3a87d8u: goto label_3a87d8;
        case 0x3a87dcu: goto label_3a87dc;
        case 0x3a87e0u: goto label_3a87e0;
        case 0x3a87e4u: goto label_3a87e4;
        case 0x3a87e8u: goto label_3a87e8;
        case 0x3a87ecu: goto label_3a87ec;
        case 0x3a87f0u: goto label_3a87f0;
        case 0x3a87f4u: goto label_3a87f4;
        case 0x3a87f8u: goto label_3a87f8;
        case 0x3a87fcu: goto label_3a87fc;
        case 0x3a8800u: goto label_3a8800;
        case 0x3a8804u: goto label_3a8804;
        case 0x3a8808u: goto label_3a8808;
        case 0x3a880cu: goto label_3a880c;
        case 0x3a8810u: goto label_3a8810;
        case 0x3a8814u: goto label_3a8814;
        case 0x3a8818u: goto label_3a8818;
        case 0x3a881cu: goto label_3a881c;
        case 0x3a8820u: goto label_3a8820;
        case 0x3a8824u: goto label_3a8824;
        case 0x3a8828u: goto label_3a8828;
        case 0x3a882cu: goto label_3a882c;
        case 0x3a8830u: goto label_3a8830;
        case 0x3a8834u: goto label_3a8834;
        case 0x3a8838u: goto label_3a8838;
        case 0x3a883cu: goto label_3a883c;
        case 0x3a8840u: goto label_3a8840;
        case 0x3a8844u: goto label_3a8844;
        case 0x3a8848u: goto label_3a8848;
        case 0x3a884cu: goto label_3a884c;
        case 0x3a8850u: goto label_3a8850;
        case 0x3a8854u: goto label_3a8854;
        case 0x3a8858u: goto label_3a8858;
        case 0x3a885cu: goto label_3a885c;
        case 0x3a8860u: goto label_3a8860;
        case 0x3a8864u: goto label_3a8864;
        case 0x3a8868u: goto label_3a8868;
        case 0x3a886cu: goto label_3a886c;
        case 0x3a8870u: goto label_3a8870;
        case 0x3a8874u: goto label_3a8874;
        case 0x3a8878u: goto label_3a8878;
        case 0x3a887cu: goto label_3a887c;
        case 0x3a8880u: goto label_3a8880;
        case 0x3a8884u: goto label_3a8884;
        case 0x3a8888u: goto label_3a8888;
        case 0x3a888cu: goto label_3a888c;
        case 0x3a8890u: goto label_3a8890;
        case 0x3a8894u: goto label_3a8894;
        case 0x3a8898u: goto label_3a8898;
        case 0x3a889cu: goto label_3a889c;
        case 0x3a88a0u: goto label_3a88a0;
        case 0x3a88a4u: goto label_3a88a4;
        case 0x3a88a8u: goto label_3a88a8;
        case 0x3a88acu: goto label_3a88ac;
        case 0x3a88b0u: goto label_3a88b0;
        case 0x3a88b4u: goto label_3a88b4;
        case 0x3a88b8u: goto label_3a88b8;
        case 0x3a88bcu: goto label_3a88bc;
        case 0x3a88c0u: goto label_3a88c0;
        case 0x3a88c4u: goto label_3a88c4;
        case 0x3a88c8u: goto label_3a88c8;
        case 0x3a88ccu: goto label_3a88cc;
        case 0x3a88d0u: goto label_3a88d0;
        case 0x3a88d4u: goto label_3a88d4;
        case 0x3a88d8u: goto label_3a88d8;
        case 0x3a88dcu: goto label_3a88dc;
        case 0x3a88e0u: goto label_3a88e0;
        case 0x3a88e4u: goto label_3a88e4;
        case 0x3a88e8u: goto label_3a88e8;
        case 0x3a88ecu: goto label_3a88ec;
        case 0x3a88f0u: goto label_3a88f0;
        case 0x3a88f4u: goto label_3a88f4;
        case 0x3a88f8u: goto label_3a88f8;
        case 0x3a88fcu: goto label_3a88fc;
        case 0x3a8900u: goto label_3a8900;
        case 0x3a8904u: goto label_3a8904;
        case 0x3a8908u: goto label_3a8908;
        case 0x3a890cu: goto label_3a890c;
        case 0x3a8910u: goto label_3a8910;
        case 0x3a8914u: goto label_3a8914;
        case 0x3a8918u: goto label_3a8918;
        case 0x3a891cu: goto label_3a891c;
        case 0x3a8920u: goto label_3a8920;
        case 0x3a8924u: goto label_3a8924;
        case 0x3a8928u: goto label_3a8928;
        case 0x3a892cu: goto label_3a892c;
        case 0x3a8930u: goto label_3a8930;
        case 0x3a8934u: goto label_3a8934;
        case 0x3a8938u: goto label_3a8938;
        case 0x3a893cu: goto label_3a893c;
        case 0x3a8940u: goto label_3a8940;
        case 0x3a8944u: goto label_3a8944;
        case 0x3a8948u: goto label_3a8948;
        case 0x3a894cu: goto label_3a894c;
        case 0x3a8950u: goto label_3a8950;
        case 0x3a8954u: goto label_3a8954;
        case 0x3a8958u: goto label_3a8958;
        case 0x3a895cu: goto label_3a895c;
        case 0x3a8960u: goto label_3a8960;
        case 0x3a8964u: goto label_3a8964;
        case 0x3a8968u: goto label_3a8968;
        case 0x3a896cu: goto label_3a896c;
        case 0x3a8970u: goto label_3a8970;
        case 0x3a8974u: goto label_3a8974;
        case 0x3a8978u: goto label_3a8978;
        case 0x3a897cu: goto label_3a897c;
        case 0x3a8980u: goto label_3a8980;
        case 0x3a8984u: goto label_3a8984;
        case 0x3a8988u: goto label_3a8988;
        case 0x3a898cu: goto label_3a898c;
        case 0x3a8990u: goto label_3a8990;
        case 0x3a8994u: goto label_3a8994;
        case 0x3a8998u: goto label_3a8998;
        case 0x3a899cu: goto label_3a899c;
        case 0x3a89a0u: goto label_3a89a0;
        case 0x3a89a4u: goto label_3a89a4;
        case 0x3a89a8u: goto label_3a89a8;
        case 0x3a89acu: goto label_3a89ac;
        case 0x3a89b0u: goto label_3a89b0;
        case 0x3a89b4u: goto label_3a89b4;
        case 0x3a89b8u: goto label_3a89b8;
        case 0x3a89bcu: goto label_3a89bc;
        case 0x3a89c0u: goto label_3a89c0;
        case 0x3a89c4u: goto label_3a89c4;
        case 0x3a89c8u: goto label_3a89c8;
        case 0x3a89ccu: goto label_3a89cc;
        case 0x3a89d0u: goto label_3a89d0;
        case 0x3a89d4u: goto label_3a89d4;
        case 0x3a89d8u: goto label_3a89d8;
        case 0x3a89dcu: goto label_3a89dc;
        case 0x3a89e0u: goto label_3a89e0;
        case 0x3a89e4u: goto label_3a89e4;
        case 0x3a89e8u: goto label_3a89e8;
        case 0x3a89ecu: goto label_3a89ec;
        case 0x3a89f0u: goto label_3a89f0;
        case 0x3a89f4u: goto label_3a89f4;
        case 0x3a89f8u: goto label_3a89f8;
        case 0x3a89fcu: goto label_3a89fc;
        case 0x3a8a00u: goto label_3a8a00;
        case 0x3a8a04u: goto label_3a8a04;
        case 0x3a8a08u: goto label_3a8a08;
        case 0x3a8a0cu: goto label_3a8a0c;
        case 0x3a8a10u: goto label_3a8a10;
        case 0x3a8a14u: goto label_3a8a14;
        case 0x3a8a18u: goto label_3a8a18;
        case 0x3a8a1cu: goto label_3a8a1c;
        case 0x3a8a20u: goto label_3a8a20;
        case 0x3a8a24u: goto label_3a8a24;
        case 0x3a8a28u: goto label_3a8a28;
        case 0x3a8a2cu: goto label_3a8a2c;
        case 0x3a8a30u: goto label_3a8a30;
        case 0x3a8a34u: goto label_3a8a34;
        case 0x3a8a38u: goto label_3a8a38;
        case 0x3a8a3cu: goto label_3a8a3c;
        case 0x3a8a40u: goto label_3a8a40;
        case 0x3a8a44u: goto label_3a8a44;
        case 0x3a8a48u: goto label_3a8a48;
        case 0x3a8a4cu: goto label_3a8a4c;
        case 0x3a8a50u: goto label_3a8a50;
        case 0x3a8a54u: goto label_3a8a54;
        case 0x3a8a58u: goto label_3a8a58;
        case 0x3a8a5cu: goto label_3a8a5c;
        case 0x3a8a60u: goto label_3a8a60;
        case 0x3a8a64u: goto label_3a8a64;
        case 0x3a8a68u: goto label_3a8a68;
        case 0x3a8a6cu: goto label_3a8a6c;
        case 0x3a8a70u: goto label_3a8a70;
        case 0x3a8a74u: goto label_3a8a74;
        case 0x3a8a78u: goto label_3a8a78;
        case 0x3a8a7cu: goto label_3a8a7c;
        case 0x3a8a80u: goto label_3a8a80;
        case 0x3a8a84u: goto label_3a8a84;
        case 0x3a8a88u: goto label_3a8a88;
        case 0x3a8a8cu: goto label_3a8a8c;
        case 0x3a8a90u: goto label_3a8a90;
        case 0x3a8a94u: goto label_3a8a94;
        case 0x3a8a98u: goto label_3a8a98;
        case 0x3a8a9cu: goto label_3a8a9c;
        case 0x3a8aa0u: goto label_3a8aa0;
        case 0x3a8aa4u: goto label_3a8aa4;
        case 0x3a8aa8u: goto label_3a8aa8;
        case 0x3a8aacu: goto label_3a8aac;
        case 0x3a8ab0u: goto label_3a8ab0;
        case 0x3a8ab4u: goto label_3a8ab4;
        case 0x3a8ab8u: goto label_3a8ab8;
        case 0x3a8abcu: goto label_3a8abc;
        case 0x3a8ac0u: goto label_3a8ac0;
        case 0x3a8ac4u: goto label_3a8ac4;
        case 0x3a8ac8u: goto label_3a8ac8;
        case 0x3a8accu: goto label_3a8acc;
        case 0x3a8ad0u: goto label_3a8ad0;
        case 0x3a8ad4u: goto label_3a8ad4;
        case 0x3a8ad8u: goto label_3a8ad8;
        case 0x3a8adcu: goto label_3a8adc;
        case 0x3a8ae0u: goto label_3a8ae0;
        case 0x3a8ae4u: goto label_3a8ae4;
        case 0x3a8ae8u: goto label_3a8ae8;
        case 0x3a8aecu: goto label_3a8aec;
        case 0x3a8af0u: goto label_3a8af0;
        case 0x3a8af4u: goto label_3a8af4;
        case 0x3a8af8u: goto label_3a8af8;
        case 0x3a8afcu: goto label_3a8afc;
        case 0x3a8b00u: goto label_3a8b00;
        case 0x3a8b04u: goto label_3a8b04;
        case 0x3a8b08u: goto label_3a8b08;
        case 0x3a8b0cu: goto label_3a8b0c;
        case 0x3a8b10u: goto label_3a8b10;
        case 0x3a8b14u: goto label_3a8b14;
        case 0x3a8b18u: goto label_3a8b18;
        case 0x3a8b1cu: goto label_3a8b1c;
        case 0x3a8b20u: goto label_3a8b20;
        case 0x3a8b24u: goto label_3a8b24;
        case 0x3a8b28u: goto label_3a8b28;
        case 0x3a8b2cu: goto label_3a8b2c;
        case 0x3a8b30u: goto label_3a8b30;
        case 0x3a8b34u: goto label_3a8b34;
        case 0x3a8b38u: goto label_3a8b38;
        case 0x3a8b3cu: goto label_3a8b3c;
        case 0x3a8b40u: goto label_3a8b40;
        case 0x3a8b44u: goto label_3a8b44;
        case 0x3a8b48u: goto label_3a8b48;
        case 0x3a8b4cu: goto label_3a8b4c;
        case 0x3a8b50u: goto label_3a8b50;
        case 0x3a8b54u: goto label_3a8b54;
        case 0x3a8b58u: goto label_3a8b58;
        case 0x3a8b5cu: goto label_3a8b5c;
        case 0x3a8b60u: goto label_3a8b60;
        case 0x3a8b64u: goto label_3a8b64;
        case 0x3a8b68u: goto label_3a8b68;
        case 0x3a8b6cu: goto label_3a8b6c;
        case 0x3a8b70u: goto label_3a8b70;
        case 0x3a8b74u: goto label_3a8b74;
        case 0x3a8b78u: goto label_3a8b78;
        case 0x3a8b7cu: goto label_3a8b7c;
        case 0x3a8b80u: goto label_3a8b80;
        case 0x3a8b84u: goto label_3a8b84;
        case 0x3a8b88u: goto label_3a8b88;
        case 0x3a8b8cu: goto label_3a8b8c;
        case 0x3a8b90u: goto label_3a8b90;
        case 0x3a8b94u: goto label_3a8b94;
        case 0x3a8b98u: goto label_3a8b98;
        case 0x3a8b9cu: goto label_3a8b9c;
        case 0x3a8ba0u: goto label_3a8ba0;
        case 0x3a8ba4u: goto label_3a8ba4;
        case 0x3a8ba8u: goto label_3a8ba8;
        case 0x3a8bacu: goto label_3a8bac;
        case 0x3a8bb0u: goto label_3a8bb0;
        case 0x3a8bb4u: goto label_3a8bb4;
        case 0x3a8bb8u: goto label_3a8bb8;
        case 0x3a8bbcu: goto label_3a8bbc;
        case 0x3a8bc0u: goto label_3a8bc0;
        case 0x3a8bc4u: goto label_3a8bc4;
        case 0x3a8bc8u: goto label_3a8bc8;
        case 0x3a8bccu: goto label_3a8bcc;
        case 0x3a8bd0u: goto label_3a8bd0;
        case 0x3a8bd4u: goto label_3a8bd4;
        case 0x3a8bd8u: goto label_3a8bd8;
        case 0x3a8bdcu: goto label_3a8bdc;
        case 0x3a8be0u: goto label_3a8be0;
        case 0x3a8be4u: goto label_3a8be4;
        case 0x3a8be8u: goto label_3a8be8;
        case 0x3a8becu: goto label_3a8bec;
        case 0x3a8bf0u: goto label_3a8bf0;
        case 0x3a8bf4u: goto label_3a8bf4;
        case 0x3a8bf8u: goto label_3a8bf8;
        case 0x3a8bfcu: goto label_3a8bfc;
        case 0x3a8c00u: goto label_3a8c00;
        case 0x3a8c04u: goto label_3a8c04;
        case 0x3a8c08u: goto label_3a8c08;
        case 0x3a8c0cu: goto label_3a8c0c;
        case 0x3a8c10u: goto label_3a8c10;
        case 0x3a8c14u: goto label_3a8c14;
        case 0x3a8c18u: goto label_3a8c18;
        case 0x3a8c1cu: goto label_3a8c1c;
        case 0x3a8c20u: goto label_3a8c20;
        case 0x3a8c24u: goto label_3a8c24;
        case 0x3a8c28u: goto label_3a8c28;
        case 0x3a8c2cu: goto label_3a8c2c;
        case 0x3a8c30u: goto label_3a8c30;
        case 0x3a8c34u: goto label_3a8c34;
        case 0x3a8c38u: goto label_3a8c38;
        case 0x3a8c3cu: goto label_3a8c3c;
        case 0x3a8c40u: goto label_3a8c40;
        case 0x3a8c44u: goto label_3a8c44;
        case 0x3a8c48u: goto label_3a8c48;
        case 0x3a8c4cu: goto label_3a8c4c;
        case 0x3a8c50u: goto label_3a8c50;
        case 0x3a8c54u: goto label_3a8c54;
        case 0x3a8c58u: goto label_3a8c58;
        case 0x3a8c5cu: goto label_3a8c5c;
        default: break;
    }

    ctx->pc = 0x3a87d8u;

label_3a87d8:
    // 0x3a87d8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3a87d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3a87dc:
    // 0x3a87dc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3a87dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3a87e0:
    // 0x3a87e0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3a87e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3a87e4:
    // 0x3a87e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a87e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a87e8:
    // 0x3a87e8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3a87e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3a87ec:
    // 0x3a87ec: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3a87ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3a87f0:
    // 0x3a87f0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3a87f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3a87f4:
    // 0x3a87f4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3a87f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3a87f8:
    // 0x3a87f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3a87f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3a87fc:
    // 0x3a87fc: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3a87fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_3a8800:
    // 0x3a8800: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a8800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3a8804:
    // 0x3a8804: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x3a8804u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3a8808:
    // 0x3a8808: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a8808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a880c:
    // 0x3a880c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3a880cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3a8810:
    // 0x3a8810: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3a8810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3a8814:
    // 0x3a8814: 0x40f809  jalr        $v0
label_3a8818:
    if (ctx->pc == 0x3A8818u) {
        ctx->pc = 0x3A8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8814u;
        // 0x3a8818: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A881Cu;
        goto label_3a881c;
    }
    ctx->pc = 0x3A8814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A881Cu);
        ctx->pc = 0x3A8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8814u;
        // 0x3a8818: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8814u, 0x3A881Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A881Cu;
label_3a881c:
    // 0x3a881c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a881cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8820:
    // 0x3a8820: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a8820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a8824:
    // 0x3a8824: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a8824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3a8828:
    // 0x3a8828: 0x2c4300f1  sltiu       $v1, $v0, 0xF1
    ctx->pc = 0x3a8828u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)241) ? 1 : 0);
label_3a882c:
    // 0x3a882c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3a8830:
    if (ctx->pc == 0x3A8830u) {
        ctx->pc = 0x3A8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A882Cu;
        // 0x3a8830: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8834u;
        goto label_3a8834;
    }
    ctx->pc = 0x3A882Cu;
    {
        const bool branch_taken_0x3a882c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A882Cu;
        // 0x3a8830: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a882c) {
            ctx->pc = 0x3A883Cu;
            goto label_3a883c;
        }
    }
    ctx->pc = 0x3A8834u;
label_3a8834:
    // 0x3a8834: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a8834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a8838:
    // 0x3a8838: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a8838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3a883c:
    // 0x3a883c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a883cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a8840:
    // 0x3a8840: 0xc0e90ca  jal         func_3A4328
label_3a8844:
    if (ctx->pc == 0x3A8844u) {
        ctx->pc = 0x3A8844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8840u;
        // 0x3a8844: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8848u;
        goto label_3a8848;
    }
    ctx->pc = 0x3A8840u;
    SET_GPR_U32(ctx, 31, 0x3A8848u);
    ctx->pc = 0x3A8844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8840u;
    // 0x3a8844: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3A8840u, 0x3A8848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8848u;
label_3a8848:
    // 0x3a8848: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3a8848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a884c:
    // 0x3a884c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3a884cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3a8850:
    // 0x3a8850: 0x504000aa  beql        $v0, $zero, . + 4 + (0xAA << 2)
label_3a8854:
    if (ctx->pc == 0x3A8854u) {
        ctx->pc = 0x3A8854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8850u;
        // 0x3a8854: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8858u;
        goto label_3a8858;
    }
    ctx->pc = 0x3A8850u;
    {
        const bool branch_taken_0x3a8850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8850) {
            ctx->pc = 0x3A8854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8850u;
            // 0x3a8854: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8AFCu;
            goto label_3a8afc;
        }
    }
    ctx->pc = 0x3A8858u;
label_3a8858:
    // 0x3a8858: 0x3c0141b8  lui         $at, 0x41B8
    ctx->pc = 0x3a8858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16824 << 16));
label_3a885c:
    // 0x3a885c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a885cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a8860:
    // 0x3a8860: 0xc0e94a0  jal         func_3A5280
label_3a8864:
    if (ctx->pc == 0x3A8864u) {
        ctx->pc = 0x3A8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8860u;
        // 0x3a8864: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8868u;
        goto label_3a8868;
    }
    ctx->pc = 0x3A8860u;
    SET_GPR_U32(ctx, 31, 0x3A8868u);
    ctx->pc = 0x3A8864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8860u;
    // 0x3a8864: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3A8860u, 0x3A8868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8868u;
label_3a8868:
    // 0x3a8868: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
label_3a886c:
    if (ctx->pc == 0x3A886Cu) {
        ctx->pc = 0x3A886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8868u;
        // 0x3a886c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8870u;
        goto label_3a8870;
    }
    ctx->pc = 0x3A8868u;
    {
        const bool branch_taken_0x3a8868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8868u;
        // 0x3a886c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8868) {
            ctx->pc = 0x3A8AF8u;
            goto label_3a8af8;
        }
    }
    ctx->pc = 0x3A8870u;
label_3a8870:
    // 0x3a8870: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a8870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a8874:
    // 0x3a8874: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a8874u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3a8878:
    // 0x3a8878: 0x1000002a  b           . + 4 + (0x2A << 2)
label_3a887c:
    if (ctx->pc == 0x3A887Cu) {
        ctx->pc = 0x3A887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8878u;
        // 0x3a887c: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8880u;
        goto label_3a8880;
    }
    ctx->pc = 0x3A8878u;
    {
        const bool branch_taken_0x3a8878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8878u;
        // 0x3a887c: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8878) {
            ctx->pc = 0x3A8924u;
            goto label_3a8924;
        }
    }
    ctx->pc = 0x3A8880u;
label_3a8880:
    // 0x3a8880: 0xc047e6c  jal         func_11F9B0
label_3a8884:
    if (ctx->pc == 0x3A8884u) {
        ctx->pc = 0x3A8884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8880u;
        // 0x3a8884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8888u;
        goto label_3a8888;
    }
    ctx->pc = 0x3A8880u;
    SET_GPR_U32(ctx, 31, 0x3A8888u);
    ctx->pc = 0x3A8884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8880u;
    // 0x3a8884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A8880u, 0x3A8888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8888u;
label_3a8888:
    // 0x3a8888: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a8888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a888c:
    // 0x3a888c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3a888cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3a8890:
    // 0x3a8890: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x3a8890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3a8894:
    // 0x3a8894: 0xa0f809  jalr        $a1
label_3a8898:
    if (ctx->pc == 0x3A8898u) {
        ctx->pc = 0x3A8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8894u;
        // 0x3a8898: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A889Cu;
        goto label_3a889c;
    }
    ctx->pc = 0x3A8894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3A889Cu);
        ctx->pc = 0x3A8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8894u;
        // 0x3a8898: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8894u, 0x3A889Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A889Cu;
label_3a889c:
    // 0x3a889c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a889cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3a88a0:
    // 0x3a88a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a88a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a88a4:
    // 0x3a88a4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3a88a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a88a8:
    // 0x3a88a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a88a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a88ac:
    // 0x3a88ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a88acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3a88b0:
    // 0x3a88b0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3a88b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3a88b4:
    // 0x3a88b4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3a88b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3a88b8:
    // 0x3a88b8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3a88b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3a88bc:
    // 0x3a88bc: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x3a88bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_3a88c0:
    // 0x3a88c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a88c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a88c4:
    // 0x3a88c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a88c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a88c8:
    // 0x3a88c8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3a88c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a88cc:
    // 0x3a88cc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3a88ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a88d0:
    // 0x3a88d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3a88d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a88d4:
    // 0x3a88d4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3a88d4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_3a88d8:
    // 0x3a88d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3a88d8u;
    // VWAITQ (Q already resolved in this runtime)
label_3a88dc:
    // 0x3a88dc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x3a88dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a88e0:
    // 0x3a88e0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3a88e0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_3a88e4:
    // 0x3a88e4: 0x3c013b8a  lui         $at, 0x3B8A
    ctx->pc = 0x3a88e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15242 << 16));
label_3a88e8:
    // 0x3a88e8: 0x3421d8f3  ori         $at, $at, 0xD8F3
    ctx->pc = 0x3a88e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55539);
label_3a88ec:
    // 0x3a88ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a88ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a88f0:
    // 0x3a88f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a88f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a88f4:
    // 0x3a88f4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3a88f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3a88f8:
    // 0x3a88f8: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x3a88f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_3a88fc:
    // 0x3a88fc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3a88fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3a8900:
    // 0x3a8900: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3a8900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3a8904:
    // 0x3a8904: 0xc0e9182  jal         func_3A4608
label_3a8908:
    if (ctx->pc == 0x3A8908u) {
        ctx->pc = 0x3A8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8904u;
        // 0x3a8908: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A890Cu;
        goto label_3a890c;
    }
    ctx->pc = 0x3A8904u;
    SET_GPR_U32(ctx, 31, 0x3A890Cu);
    ctx->pc = 0x3A8908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8904u;
    // 0x3a8908: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4608u, 0x3A8904u, 0x3A890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A890Cu;
label_3a890c:
    // 0x3a890c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a890cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a8910:
    // 0x3a8910: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x3a8910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
label_3a8914:
    // 0x3a8914: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3a8914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3a8918:
    // 0x3a8918: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a8918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a891c:
    // 0x3a891c: 0xc0e919a  jal         func_3A4668
label_3a8920:
    if (ctx->pc == 0x3A8920u) {
        ctx->pc = 0x3A8920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A891Cu;
        // 0x3a8920: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8924u;
        goto label_3a8924;
    }
    ctx->pc = 0x3A891Cu;
    SET_GPR_U32(ctx, 31, 0x3A8924u);
    ctx->pc = 0x3A8920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A891Cu;
    // 0x3a8920: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4668u, 0x3A891Cu, 0x3A8924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8924u;
label_3a8924:
    // 0x3a8924: 0xc047ab8  jal         func_11EAE0
label_3a8928:
    if (ctx->pc == 0x3A8928u) {
        ctx->pc = 0x3A892Cu;
        goto label_3a892c;
    }
    ctx->pc = 0x3A8924u;
    SET_GPR_U32(ctx, 31, 0x3A892Cu);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x3A8924u, 0x3A892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A892Cu;
label_3a892c:
    // 0x3a892c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3a892cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a8930:
    // 0x3a8930: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_3a8934:
    if (ctx->pc == 0x3A8934u) {
        ctx->pc = 0x3A8938u;
        goto label_3a8938;
    }
    ctx->pc = 0x3A8930u;
    {
        const bool branch_taken_0x3a8930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8930) {
            ctx->pc = 0x3A8880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8880;
        }
    }
    ctx->pc = 0x3A8938u;
label_3a8938:
    // 0x3a8938: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a8938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a893c:
    // 0x3a893c: 0xc047e6c  jal         func_11F9B0
label_3a8940:
    if (ctx->pc == 0x3A8940u) {
        ctx->pc = 0x3A8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A893Cu;
        // 0x3a8940: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8944u;
        goto label_3a8944;
    }
    ctx->pc = 0x3A893Cu;
    SET_GPR_U32(ctx, 31, 0x3A8944u);
    ctx->pc = 0x3A8940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A893Cu;
    // 0x3a8940: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A893Cu, 0x3A8944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8944u;
label_3a8944:
    // 0x3a8944: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a8944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a8948:
    // 0x3a8948: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3a8948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3a894c:
    // 0x3a894c: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x3a894cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3a8950:
    // 0x3a8950: 0xa0f809  jalr        $a1
label_3a8954:
    if (ctx->pc == 0x3A8954u) {
        ctx->pc = 0x3A8954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8950u;
        // 0x3a8954: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8958u;
        goto label_3a8958;
    }
    ctx->pc = 0x3A8950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3A8958u);
        ctx->pc = 0x3A8954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8950u;
        // 0x3a8954: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8950u, 0x3A8958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A8958u;
label_3a8958:
    // 0x3a8958: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a8958u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3a895c:
    // 0x3a895c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3a895cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3a8960:
    // 0x3a8960: 0x8e82489c  lw          $v0, 0x489C($s4)
    ctx->pc = 0x3a8960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3a8964:
    // 0x3a8964: 0x84430224  lh          $v1, 0x224($v0)
    ctx->pc = 0x3a8964u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
label_3a8968:
    // 0x3a8968: 0x186000b0  blez        $v1, . + 4 + (0xB0 << 2)
label_3a896c:
    if (ctx->pc == 0x3A896Cu) {
        ctx->pc = 0x3A896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8968u;
        // 0x3a896c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8970u;
        goto label_3a8970;
    }
    ctx->pc = 0x3A8968u;
    {
        const bool branch_taken_0x3a8968 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8968u;
        // 0x3a896c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8968) {
            ctx->pc = 0x3A8C2Cu;
            goto label_3a8c2c;
        }
    }
    ctx->pc = 0x3A8970u;
label_3a8970:
    // 0x3a8970: 0x3c014404  lui         $at, 0x4404
    ctx->pc = 0x3a8970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17412 << 16));
label_3a8974:
    // 0x3a8974: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x3a8974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_3a8978:
    // 0x3a8978: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a8978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a897c:
    // 0x3a897c: 0x2455d810  addiu       $s5, $v0, -0x27F0
    ctx->pc = 0x3a897cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_3a8980:
    // 0x3a8980: 0x24130228  addiu       $s3, $zero, 0x228
    ctx->pc = 0x3a8980u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_3a8984:
    // 0x3a8984: 0x0  nop
    ctx->pc = 0x3a8984u;
    // NOP
label_3a8988:
    // 0x3a8988: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x3a8988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3a898c:
    // 0x3a898c: 0xc0e409a  jal         func_390268
label_3a8990:
    if (ctx->pc == 0x3A8990u) {
        ctx->pc = 0x3A8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A898Cu;
        // 0x3a8990: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8994u;
        goto label_3a8994;
    }
    ctx->pc = 0x3A898Cu;
    SET_GPR_U32(ctx, 31, 0x3A8994u);
    ctx->pc = 0x3A8990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A898Cu;
    // 0x3a8990: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3A898Cu, 0x3A8994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8994u;
label_3a8994:
    // 0x3a8994: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_3a8998:
    if (ctx->pc == 0x3A8998u) {
        ctx->pc = 0x3A8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8994u;
        // 0x3a8998: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A899Cu;
        goto label_3a899c;
    }
    ctx->pc = 0x3A8994u;
    {
        const bool branch_taken_0x3a8994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8994u;
        // 0x3a8998: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8994) {
            ctx->pc = 0x3A8ADCu;
            goto label_3a8adc;
        }
    }
    ctx->pc = 0x3A899Cu;
label_3a899c:
    // 0x3a899c: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x3a899cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3a89a0:
    // 0x3a89a0: 0xc0e409a  jal         func_390268
label_3a89a4:
    if (ctx->pc == 0x3A89A4u) {
        ctx->pc = 0x3A89A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89A0u;
        // 0x3a89a4: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A89A8u;
        goto label_3a89a8;
    }
    ctx->pc = 0x3A89A0u;
    SET_GPR_U32(ctx, 31, 0x3A89A8u);
    ctx->pc = 0x3A89A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A89A0u;
    // 0x3a89a4: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3A89A0u, 0x3A89A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A89A8u;
label_3a89a8:
    // 0x3a89a8: 0xc0874fa  jal         func_21D3E8
label_3a89ac:
    if (ctx->pc == 0x3A89ACu) {
        ctx->pc = 0x3A89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89A8u;
        // 0x3a89ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A89B0u;
        goto label_3a89b0;
    }
    ctx->pc = 0x3A89A8u;
    SET_GPR_U32(ctx, 31, 0x3A89B0u);
    ctx->pc = 0x3A89ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A89A8u;
    // 0x3a89ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x3A89A8u, 0x3A89B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A89B0u;
label_3a89b0:
    // 0x3a89b0: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_3a89b4:
    if (ctx->pc == 0x3A89B4u) {
        ctx->pc = 0x3A89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89B0u;
        // 0x3a89b4: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A89B8u;
        goto label_3a89b8;
    }
    ctx->pc = 0x3A89B0u;
    {
        const bool branch_taken_0x3a89b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89B0u;
        // 0x3a89b4: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a89b0) {
            ctx->pc = 0x3A8ADCu;
            goto label_3a8adc;
        }
    }
    ctx->pc = 0x3A89B8u;
label_3a89b8:
    // 0x3a89b8: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x3a89b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3a89bc:
    // 0x3a89bc: 0xc0e409a  jal         func_390268
label_3a89c0:
    if (ctx->pc == 0x3A89C0u) {
        ctx->pc = 0x3A89C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89BCu;
        // 0x3a89c0: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A89C4u;
        goto label_3a89c4;
    }
    ctx->pc = 0x3A89BCu;
    SET_GPR_U32(ctx, 31, 0x3A89C4u);
    ctx->pc = 0x3A89C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A89BCu;
    // 0x3a89c0: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3A89BCu, 0x3A89C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A89C4u;
label_3a89c4:
    // 0x3a89c4: 0xc0874fa  jal         func_21D3E8
label_3a89c8:
    if (ctx->pc == 0x3A89C8u) {
        ctx->pc = 0x3A89C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89C4u;
        // 0x3a89c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A89CCu;
        goto label_3a89cc;
    }
    ctx->pc = 0x3A89C4u;
    SET_GPR_U32(ctx, 31, 0x3A89CCu);
    ctx->pc = 0x3A89C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A89C4u;
    // 0x3a89c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x3A89C4u, 0x3A89CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A89CCu;
label_3a89cc:
    // 0x3a89cc: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x3a89ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_3a89d0:
    // 0x3a89d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a89d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a89d4:
    // 0x3a89d4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_3a89d8:
    if (ctx->pc == 0x3A89D8u) {
        ctx->pc = 0x3A89D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89D4u;
        // 0x3a89d8: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A89DCu;
        goto label_3a89dc;
    }
    ctx->pc = 0x3A89D4u;
    {
        const bool branch_taken_0x3a89d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A89D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89D4u;
        // 0x3a89d8: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a89d4) {
            ctx->pc = 0x3A89E8u;
            goto label_3a89e8;
        }
    }
    ctx->pc = 0x3A89DCu;
label_3a89dc:
    // 0x3a89dc: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x3a89dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3a89e0:
    // 0x3a89e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a89e4:
    if (ctx->pc == 0x3A89E4u) {
        ctx->pc = 0x3A89E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89E0u;
        // 0x3a89e4: 0x958821  addu        $s1, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A89E8u;
        goto label_3a89e8;
    }
    ctx->pc = 0x3A89E0u;
    {
        const bool branch_taken_0x3a89e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A89E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89E0u;
        // 0x3a89e4: 0x958821  addu        $s1, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a89e0) {
            ctx->pc = 0x3A89ECu;
            goto label_3a89ec;
        }
    }
    ctx->pc = 0x3A89E8u;
label_3a89e8:
    // 0x3a89e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a89e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a89ec:
    // 0x3a89ec: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
label_3a89f0:
    if (ctx->pc == 0x3A89F0u) {
        ctx->pc = 0x3A89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89ECu;
        // 0x3a89f0: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A89F4u;
        goto label_3a89f4;
    }
    ctx->pc = 0x3A89ECu;
    {
        const bool branch_taken_0x3a89ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89ECu;
        // 0x3a89f0: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a89ec) {
            ctx->pc = 0x3A8ADCu;
            goto label_3a8adc;
        }
    }
    ctx->pc = 0x3A89F4u;
label_3a89f4:
    // 0x3a89f4: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x3a89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_3a89f8:
    // 0x3a89f8: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_3a89fc:
    if (ctx->pc == 0x3A89FCu) {
        ctx->pc = 0x3A89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89F8u;
        // 0x3a89fc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A00u;
        goto label_3a8a00;
    }
    ctx->pc = 0x3A89F8u;
    {
        const bool branch_taken_0x3a89f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a89f8) {
            ctx->pc = 0x3A89FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A89F8u;
            // 0x3a89fc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8AE0u;
            goto label_3a8ae0;
        }
    }
    ctx->pc = 0x3A8A00u;
label_3a8a00:
    // 0x3a8a00: 0xc047e6c  jal         func_11F9B0
label_3a8a04:
    if (ctx->pc == 0x3A8A04u) {
        ctx->pc = 0x3A8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A00u;
        // 0x3a8a04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A08u;
        goto label_3a8a08;
    }
    ctx->pc = 0x3A8A00u;
    SET_GPR_U32(ctx, 31, 0x3A8A08u);
    ctx->pc = 0x3A8A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A00u;
    // 0x3a8a04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A8A00u, 0x3A8A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A08u;
label_3a8a08:
    // 0x3a8a08: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3a8a0c:
    if (ctx->pc == 0x3A8A0Cu) {
        ctx->pc = 0x3A8A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A08u;
        // 0x3a8a0c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A10u;
        goto label_3a8a10;
    }
    ctx->pc = 0x3A8A08u;
    {
        const bool branch_taken_0x3a8a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8a08) {
            ctx->pc = 0x3A8A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8A08u;
            // 0x3a8a0c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8A38u;
            goto label_3a8a38;
        }
    }
    ctx->pc = 0x3A8A10u;
label_3a8a10:
    // 0x3a8a10: 0xc047e6c  jal         func_11F9B0
label_3a8a14:
    if (ctx->pc == 0x3A8A14u) {
        ctx->pc = 0x3A8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A10u;
        // 0x3a8a14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A18u;
        goto label_3a8a18;
    }
    ctx->pc = 0x3A8A10u;
    SET_GPR_U32(ctx, 31, 0x3A8A18u);
    ctx->pc = 0x3A8A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A10u;
    // 0x3a8a14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A8A10u, 0x3A8A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A18u;
label_3a8a18:
    // 0x3a8a18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a8a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a8a1c:
    // 0x3a8a1c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3a8a1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3a8a20:
    // 0x3a8a20: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x3a8a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3a8a24:
    // 0x3a8a24: 0xa0f809  jalr        $a1
label_3a8a28:
    if (ctx->pc == 0x3A8A28u) {
        ctx->pc = 0x3A8A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A24u;
        // 0x3a8a28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A2Cu;
        goto label_3a8a2c;
    }
    ctx->pc = 0x3A8A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3A8A2Cu);
        ctx->pc = 0x3A8A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A24u;
        // 0x3a8a28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8A24u, 0x3A8A2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A8A2Cu;
label_3a8a2c:
    // 0x3a8a2c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a8a2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3a8a30:
    // 0x3a8a30: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3a8a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3a8a34:
    // 0x3a8a34: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3a8a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a8a38:
    // 0x3a8a38: 0xc0cdb38  jal         func_336CE0
label_3a8a3c:
    if (ctx->pc == 0x3A8A3Cu) {
        ctx->pc = 0x3A8A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A38u;
        // 0x3a8a3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A40u;
        goto label_3a8a40;
    }
    ctx->pc = 0x3A8A38u;
    SET_GPR_U32(ctx, 31, 0x3A8A40u);
    ctx->pc = 0x3A8A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A38u;
    // 0x3a8a3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x3A8A38u, 0x3A8A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A40u;
label_3a8a40:
    // 0x3a8a40: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x3a8a40u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_3a8a44:
    // 0x3a8a44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a8a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a8a48:
    // 0x3a8a48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a8a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a8a4c:
    // 0x3a8a4c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3a8a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a8a50:
    // 0x3a8a50: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x3a8a50u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3a8a54:
    // 0x3a8a54: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x3a8a54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a8a58:
    // 0x3a8a58: 0x0  nop
    ctx->pc = 0x3a8a58u;
    // NOP
label_3a8a5c:
    // 0x3a8a5c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_3a8a60:
    if (ctx->pc == 0x3A8A60u) {
        ctx->pc = 0x3A8A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A5Cu;
        // 0x3a8a60: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A64u;
        goto label_3a8a64;
    }
    ctx->pc = 0x3A8A5Cu;
    {
        const bool branch_taken_0x3a8a5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A8A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A5Cu;
        // 0x3a8a60: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8a5c) {
            ctx->pc = 0x3A8AB4u;
            goto label_3a8ab4;
        }
    }
    ctx->pc = 0x3A8A64u;
label_3a8a64:
    // 0x3a8a64: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x3a8a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_3a8a68:
    // 0x3a8a68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a8a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8a6c:
    // 0x3a8a6c: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x3a8a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
label_3a8a70:
    // 0x3a8a70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a8a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a8a74:
    // 0x3a8a74: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3a8a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3a8a78:
    // 0x3a8a78: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x3a8a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3a8a7c:
    // 0x3a8a7c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x3a8a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_3a8a80:
    // 0x3a8a80: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x3a8a80u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3a8a84:
    // 0x3a8a84: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a8a84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a8a88:
    // 0x3a8a88: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x3a8a88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_3a8a8c:
    // 0x3a8a8c: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x3a8a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_3a8a90:
    // 0x3a8a90: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3a8a90u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3a8a94:
    // 0x3a8a94: 0xc0e409a  jal         func_390268
label_3a8a98:
    if (ctx->pc == 0x3A8A98u) {
        ctx->pc = 0x3A8A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A94u;
        // 0x3a8a98: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A9Cu;
        goto label_3a8a9c;
    }
    ctx->pc = 0x3A8A94u;
    SET_GPR_U32(ctx, 31, 0x3A8A9Cu);
    ctx->pc = 0x3A8A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A94u;
    // 0x3a8a98: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3A8A94u, 0x3A8A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A9Cu;
label_3a8a9c:
    // 0x3a8a9c: 0xc0874fa  jal         func_21D3E8
label_3a8aa0:
    if (ctx->pc == 0x3A8AA0u) {
        ctx->pc = 0x3A8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A9Cu;
        // 0x3a8aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8AA4u;
        goto label_3a8aa4;
    }
    ctx->pc = 0x3A8A9Cu;
    SET_GPR_U32(ctx, 31, 0x3A8AA4u);
    ctx->pc = 0x3A8AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A9Cu;
    // 0x3a8aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x3A8A9Cu, 0x3A8AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8AA4u;
label_3a8aa4:
    // 0x3a8aa4: 0xa040001d  sb          $zero, 0x1D($v0)
    ctx->pc = 0x3a8aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 0));
label_3a8aa8:
    // 0x3a8aa8: 0xa050001c  sb          $s0, 0x1C($v0)
    ctx->pc = 0x3a8aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 16));
label_3a8aac:
    // 0x3a8aac: 0x10000009  b           . + 4 + (0x9 << 2)
label_3a8ab0:
    if (ctx->pc == 0x3A8AB0u) {
        ctx->pc = 0x3A8AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AACu;
        // 0x3a8ab0: 0xa2300041  sb          $s0, 0x41($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8AB4u;
        goto label_3a8ab4;
    }
    ctx->pc = 0x3A8AACu;
    {
        const bool branch_taken_0x3a8aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AACu;
        // 0x3a8ab0: 0xa2300041  sb          $s0, 0x41($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8aac) {
            ctx->pc = 0x3A8AD4u;
            goto label_3a8ad4;
        }
    }
    ctx->pc = 0x3A8AB4u;
label_3a8ab4:
    // 0x3a8ab4: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x3a8ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3a8ab8:
    // 0x3a8ab8: 0xc0e409a  jal         func_390268
label_3a8abc:
    if (ctx->pc == 0x3A8ABCu) {
        ctx->pc = 0x3A8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AB8u;
        // 0x3a8abc: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8AC0u;
        goto label_3a8ac0;
    }
    ctx->pc = 0x3A8AB8u;
    SET_GPR_U32(ctx, 31, 0x3A8AC0u);
    ctx->pc = 0x3A8ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8AB8u;
    // 0x3a8abc: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3A8AB8u, 0x3A8AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8AC0u;
label_3a8ac0:
    // 0x3a8ac0: 0xc0874fa  jal         func_21D3E8
label_3a8ac4:
    if (ctx->pc == 0x3A8AC4u) {
        ctx->pc = 0x3A8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AC0u;
        // 0x3a8ac4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8AC8u;
        goto label_3a8ac8;
    }
    ctx->pc = 0x3A8AC0u;
    SET_GPR_U32(ctx, 31, 0x3A8AC8u);
    ctx->pc = 0x3A8AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8AC0u;
    // 0x3a8ac4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x3A8AC0u, 0x3A8AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8AC8u;
label_3a8ac8:
    // 0x3a8ac8: 0xa040001d  sb          $zero, 0x1D($v0)
    ctx->pc = 0x3a8ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 0));
label_3a8acc:
    // 0x3a8acc: 0xa040001c  sb          $zero, 0x1C($v0)
    ctx->pc = 0x3a8accu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
label_3a8ad0:
    // 0x3a8ad0: 0xa2200041  sb          $zero, 0x41($s1)
    ctx->pc = 0x3a8ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 0));
label_3a8ad4:
    // 0x3a8ad4: 0xa2200040  sb          $zero, 0x40($s1)
    ctx->pc = 0x3a8ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 0));
label_3a8ad8:
    // 0x3a8ad8: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x3a8ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3a8adc:
    // 0x3a8adc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a8adcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a8ae0:
    // 0x3a8ae0: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x3a8ae0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_3a8ae4:
    // 0x3a8ae4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3a8ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a8ae8:
    // 0x3a8ae8: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
label_3a8aec:
    if (ctx->pc == 0x3A8AECu) {
        ctx->pc = 0x3A8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AE8u;
        // 0x3a8aec: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8AF0u;
        goto label_3a8af0;
    }
    ctx->pc = 0x3A8AE8u;
    {
        const bool branch_taken_0x3a8ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AE8u;
        // 0x3a8aec: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8ae8) {
            ctx->pc = 0x3A8988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8988;
        }
    }
    ctx->pc = 0x3A8AF0u;
label_3a8af0:
    // 0x3a8af0: 0x1000004f  b           . + 4 + (0x4F << 2)
label_3a8af4:
    if (ctx->pc == 0x3A8AF4u) {
        ctx->pc = 0x3A8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AF0u;
        // 0x3a8af4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8AF8u;
        goto label_3a8af8;
    }
    ctx->pc = 0x3A8AF0u;
    {
        const bool branch_taken_0x3a8af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AF0u;
        // 0x3a8af4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8af0) {
            ctx->pc = 0x3A8C30u;
            goto label_3a8c30;
        }
    }
    ctx->pc = 0x3A8AF8u;
label_3a8af8:
    // 0x3a8af8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3a8af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a8afc:
    // 0x3a8afc: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_3a8b00:
    if (ctx->pc == 0x3A8B00u) {
        ctx->pc = 0x3A8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AFCu;
        // 0x3a8b00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8B04u;
        goto label_3a8b04;
    }
    ctx->pc = 0x3A8AFCu;
    {
        const bool branch_taken_0x3a8afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AFCu;
        // 0x3a8b00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8afc) {
            ctx->pc = 0x3A8C14u;
            goto label_3a8c14;
        }
    }
    ctx->pc = 0x3A8B04u;
label_3a8b04:
    // 0x3a8b04: 0x10000009  b           . + 4 + (0x9 << 2)
label_3a8b08:
    if (ctx->pc == 0x3A8B08u) {
        ctx->pc = 0x3A8B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B04u;
        // 0x3a8b08: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8B0Cu;
        goto label_3a8b0c;
    }
    ctx->pc = 0x3A8B04u;
    {
        const bool branch_taken_0x3a8b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B04u;
        // 0x3a8b08: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8b04) {
            ctx->pc = 0x3A8B2Cu;
            goto label_3a8b2c;
        }
    }
    ctx->pc = 0x3A8B0Cu;
label_3a8b0c:
    // 0x3a8b0c: 0x0  nop
    ctx->pc = 0x3a8b0cu;
    // NOP
label_3a8b10:
    // 0x3a8b10: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3a8b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a8b14:
    // 0x3a8b14: 0xc0e9182  jal         func_3A4608
label_3a8b18:
    if (ctx->pc == 0x3A8B18u) {
        ctx->pc = 0x3A8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B14u;
        // 0x3a8b18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8B1Cu;
        goto label_3a8b1c;
    }
    ctx->pc = 0x3A8B14u;
    SET_GPR_U32(ctx, 31, 0x3A8B1Cu);
    ctx->pc = 0x3A8B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8B14u;
    // 0x3a8b18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4608u, 0x3A8B14u, 0x3A8B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8B1Cu;
label_3a8b1c:
    // 0x3a8b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a8b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a8b20:
    // 0x3a8b20: 0xc0e919a  jal         func_3A4668
label_3a8b24:
    if (ctx->pc == 0x3A8B24u) {
        ctx->pc = 0x3A8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B20u;
        // 0x3a8b24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8B28u;
        goto label_3a8b28;
    }
    ctx->pc = 0x3A8B20u;
    SET_GPR_U32(ctx, 31, 0x3A8B28u);
    ctx->pc = 0x3A8B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8B20u;
    // 0x3a8b24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4668u, 0x3A8B20u, 0x3A8B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8B28u;
label_3a8b28:
    // 0x3a8b28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a8b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3a8b2c:
    // 0x3a8b2c: 0xc047ab8  jal         func_11EAE0
label_3a8b30:
    if (ctx->pc == 0x3A8B30u) {
        ctx->pc = 0x3A8B34u;
        goto label_3a8b34;
    }
    ctx->pc = 0x3A8B2Cu;
    SET_GPR_U32(ctx, 31, 0x3A8B34u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x3A8B2Cu, 0x3A8B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8B34u;
label_3a8b34:
    // 0x3a8b34: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3a8b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a8b38:
    // 0x3a8b38: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3a8b3c:
    if (ctx->pc == 0x3A8B3Cu) {
        ctx->pc = 0x3A8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B38u;
        // 0x3a8b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8B40u;
        goto label_3a8b40;
    }
    ctx->pc = 0x3A8B38u;
    {
        const bool branch_taken_0x3a8b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B38u;
        // 0x3a8b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8b38) {
            ctx->pc = 0x3A8B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8b10;
        }
    }
    ctx->pc = 0x3A8B40u;
label_3a8b40:
    // 0x3a8b40: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x3a8b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3a8b44:
    // 0x3a8b44: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x3a8b44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_3a8b48:
    // 0x3a8b48: 0x18400032  blez        $v0, . + 4 + (0x32 << 2)
label_3a8b4c:
    if (ctx->pc == 0x3A8B4Cu) {
        ctx->pc = 0x3A8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B48u;
        // 0x3a8b4c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8B50u;
        goto label_3a8b50;
    }
    ctx->pc = 0x3A8B48u;
    {
        const bool branch_taken_0x3a8b48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3A8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B48u;
        // 0x3a8b4c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8b48) {
            ctx->pc = 0x3A8C14u;
            goto label_3a8c14;
        }
    }
    ctx->pc = 0x3A8B50u;
label_3a8b50:
    // 0x3a8b50: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3a8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_3a8b54:
    // 0x3a8b54: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x3a8b54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a8b58:
    // 0x3a8b58: 0x2456d810  addiu       $s6, $v0, -0x27F0
    ctx->pc = 0x3a8b58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_3a8b5c:
    // 0x3a8b5c: 0x24150050  addiu       $s5, $zero, 0x50
    ctx->pc = 0x3a8b5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_3a8b60:
    // 0x3a8b60: 0x24110228  addiu       $s1, $zero, 0x228
    ctx->pc = 0x3a8b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_3a8b64:
    // 0x3a8b64: 0x0  nop
    ctx->pc = 0x3a8b64u;
    // NOP
label_3a8b68:
    // 0x3a8b68: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x3a8b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3a8b6c:
    // 0x3a8b6c: 0xc0e409a  jal         func_390268
label_3a8b70:
    if (ctx->pc == 0x3A8B70u) {
        ctx->pc = 0x3A8B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B6Cu;
        // 0x3a8b70: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8B74u;
        goto label_3a8b74;
    }
    ctx->pc = 0x3A8B6Cu;
    SET_GPR_U32(ctx, 31, 0x3A8B74u);
    ctx->pc = 0x3A8B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8B6Cu;
    // 0x3a8b70: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3A8B6Cu, 0x3A8B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8B74u;
label_3a8b74:
    // 0x3a8b74: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_3a8b78:
    if (ctx->pc == 0x3A8B78u) {
        ctx->pc = 0x3A8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B74u;
        // 0x3a8b78: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8B7Cu;
        goto label_3a8b7c;
    }
    ctx->pc = 0x3A8B74u;
    {
        const bool branch_taken_0x3a8b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B74u;
        // 0x3a8b78: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8b74) {
            ctx->pc = 0x3A8C00u;
            goto label_3a8c00;
        }
    }
    ctx->pc = 0x3A8B7Cu;
label_3a8b7c:
    // 0x3a8b7c: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x3a8b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3a8b80:
    // 0x3a8b80: 0xc0e409a  jal         func_390268
label_3a8b84:
    if (ctx->pc == 0x3A8B84u) {
        ctx->pc = 0x3A8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B80u;
        // 0x3a8b84: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8B88u;
        goto label_3a8b88;
    }
    ctx->pc = 0x3A8B80u;
    SET_GPR_U32(ctx, 31, 0x3A8B88u);
    ctx->pc = 0x3A8B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8B80u;
    // 0x3a8b84: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3A8B80u, 0x3A8B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8B88u;
label_3a8b88:
    // 0x3a8b88: 0xc0874fa  jal         func_21D3E8
label_3a8b8c:
    if (ctx->pc == 0x3A8B8Cu) {
        ctx->pc = 0x3A8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B88u;
        // 0x3a8b8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8B90u;
        goto label_3a8b90;
    }
    ctx->pc = 0x3A8B88u;
    SET_GPR_U32(ctx, 31, 0x3A8B90u);
    ctx->pc = 0x3A8B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8B88u;
    // 0x3a8b8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x3A8B88u, 0x3A8B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8B90u;
label_3a8b90:
    // 0x3a8b90: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_3a8b94:
    if (ctx->pc == 0x3A8B94u) {
        ctx->pc = 0x3A8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B90u;
        // 0x3a8b94: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8B98u;
        goto label_3a8b98;
    }
    ctx->pc = 0x3A8B90u;
    {
        const bool branch_taken_0x3a8b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B90u;
        // 0x3a8b94: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8b90) {
            ctx->pc = 0x3A8C00u;
            goto label_3a8c00;
        }
    }
    ctx->pc = 0x3A8B98u;
label_3a8b98:
    // 0x3a8b98: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x3a8b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3a8b9c:
    // 0x3a8b9c: 0xc0e409a  jal         func_390268
label_3a8ba0:
    if (ctx->pc == 0x3A8BA0u) {
        ctx->pc = 0x3A8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B9Cu;
        // 0x3a8ba0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8BA4u;
        goto label_3a8ba4;
    }
    ctx->pc = 0x3A8B9Cu;
    SET_GPR_U32(ctx, 31, 0x3A8BA4u);
    ctx->pc = 0x3A8BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8B9Cu;
    // 0x3a8ba0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3A8B9Cu, 0x3A8BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8BA4u;
label_3a8ba4:
    // 0x3a8ba4: 0xc0874fa  jal         func_21D3E8
label_3a8ba8:
    if (ctx->pc == 0x3A8BA8u) {
        ctx->pc = 0x3A8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BA4u;
        // 0x3a8ba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8BACu;
        goto label_3a8bac;
    }
    ctx->pc = 0x3A8BA4u;
    SET_GPR_U32(ctx, 31, 0x3A8BACu);
    ctx->pc = 0x3A8BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8BA4u;
    // 0x3a8ba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x3A8BA4u, 0x3A8BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8BACu;
label_3a8bac:
    // 0x3a8bac: 0x80420019  lb          $v0, 0x19($v0)
    ctx->pc = 0x3a8bacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_3a8bb0:
    // 0x3a8bb0: 0x10570003  beq         $v0, $s7, . + 4 + (0x3 << 2)
label_3a8bb4:
    if (ctx->pc == 0x3A8BB4u) {
        ctx->pc = 0x3A8BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BB0u;
        // 0x3a8bb4: 0x551818  mult        $v1, $v0, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8BB8u;
        goto label_3a8bb8;
    }
    ctx->pc = 0x3A8BB0u;
    {
        const bool branch_taken_0x3a8bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x3A8BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BB0u;
        // 0x3a8bb4: 0x551818  mult        $v1, $v0, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8bb0) {
            ctx->pc = 0x3A8BC0u;
            goto label_3a8bc0;
        }
    }
    ctx->pc = 0x3A8BB8u;
label_3a8bb8:
    // 0x3a8bb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a8bbc:
    if (ctx->pc == 0x3A8BBCu) {
        ctx->pc = 0x3A8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BB8u;
        // 0x3a8bbc: 0x768021  addu        $s0, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8BC0u;
        goto label_3a8bc0;
    }
    ctx->pc = 0x3A8BB8u;
    {
        const bool branch_taken_0x3a8bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BB8u;
        // 0x3a8bbc: 0x768021  addu        $s0, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8bb8) {
            ctx->pc = 0x3A8BC4u;
            goto label_3a8bc4;
        }
    }
    ctx->pc = 0x3A8BC0u;
label_3a8bc0:
    // 0x3a8bc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a8bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a8bc4:
    // 0x3a8bc4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_3a8bc8:
    if (ctx->pc == 0x3A8BC8u) {
        ctx->pc = 0x3A8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BC4u;
        // 0x3a8bc8: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8BCCu;
        goto label_3a8bcc;
    }
    ctx->pc = 0x3A8BC4u;
    {
        const bool branch_taken_0x3a8bc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BC4u;
        // 0x3a8bc8: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8bc4) {
            ctx->pc = 0x3A8C00u;
            goto label_3a8c00;
        }
    }
    ctx->pc = 0x3A8BCCu;
label_3a8bcc:
    // 0x3a8bcc: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3a8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3a8bd0:
    // 0x3a8bd0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_3a8bd4:
    if (ctx->pc == 0x3A8BD4u) {
        ctx->pc = 0x3A8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BD0u;
        // 0x3a8bd4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8BD8u;
        goto label_3a8bd8;
    }
    ctx->pc = 0x3A8BD0u;
    {
        const bool branch_taken_0x3a8bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8bd0) {
            ctx->pc = 0x3A8BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8BD0u;
            // 0x3a8bd4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8C04u;
            goto label_3a8c04;
        }
    }
    ctx->pc = 0x3A8BD8u;
label_3a8bd8:
    // 0x3a8bd8: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x3a8bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3a8bdc:
    // 0x3a8bdc: 0xc0e409a  jal         func_390268
label_3a8be0:
    if (ctx->pc == 0x3A8BE0u) {
        ctx->pc = 0x3A8BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BDCu;
        // 0x3a8be0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8BE4u;
        goto label_3a8be4;
    }
    ctx->pc = 0x3A8BDCu;
    SET_GPR_U32(ctx, 31, 0x3A8BE4u);
    ctx->pc = 0x3A8BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8BDCu;
    // 0x3a8be0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3A8BDCu, 0x3A8BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8BE4u;
label_3a8be4:
    // 0x3a8be4: 0xc0874fa  jal         func_21D3E8
label_3a8be8:
    if (ctx->pc == 0x3A8BE8u) {
        ctx->pc = 0x3A8BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BE4u;
        // 0x3a8be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8BECu;
        goto label_3a8bec;
    }
    ctx->pc = 0x3A8BE4u;
    SET_GPR_U32(ctx, 31, 0x3A8BECu);
    ctx->pc = 0x3A8BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8BE4u;
    // 0x3a8be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x3A8BE4u, 0x3A8BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8BECu;
label_3a8bec:
    // 0x3a8bec: 0xa040001d  sb          $zero, 0x1D($v0)
    ctx->pc = 0x3a8becu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 0));
label_3a8bf0:
    // 0x3a8bf0: 0xa040001c  sb          $zero, 0x1C($v0)
    ctx->pc = 0x3a8bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
label_3a8bf4:
    // 0x3a8bf4: 0xa2000041  sb          $zero, 0x41($s0)
    ctx->pc = 0x3a8bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 0));
label_3a8bf8:
    // 0x3a8bf8: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x3a8bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
label_3a8bfc:
    // 0x3a8bfc: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x3a8bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3a8c00:
    // 0x3a8c00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a8c00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3a8c04:
    // 0x3a8c04: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x3a8c04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_3a8c08:
    // 0x3a8c08: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3a8c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a8c0c:
    // 0x3a8c0c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_3a8c10:
    if (ctx->pc == 0x3A8C10u) {
        ctx->pc = 0x3A8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C0Cu;
        // 0x3a8c10: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8C14u;
        goto label_3a8c14;
    }
    ctx->pc = 0x3A8C0Cu;
    {
        const bool branch_taken_0x3a8c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C0Cu;
        // 0x3a8c10: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8c0c) {
            ctx->pc = 0x3A8B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8b68;
        }
    }
    ctx->pc = 0x3A8C14u;
label_3a8c14:
    // 0x3a8c14: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3a8c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a8c18:
    // 0x3a8c18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a8c1c:
    // 0x3a8c1c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_3a8c20:
    if (ctx->pc == 0x3A8C20u) {
        ctx->pc = 0x3A8C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C1Cu;
        // 0x3a8c20: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8C24u;
        goto label_3a8c24;
    }
    ctx->pc = 0x3A8C1Cu;
    {
        const bool branch_taken_0x3a8c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a8c1c) {
            ctx->pc = 0x3A8C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8C1Cu;
            // 0x3a8c20: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8C2Cu;
            goto label_3a8c2c;
        }
    }
    ctx->pc = 0x3A8C24u;
label_3a8c24:
    // 0x3a8c24: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a8c28:
    if (ctx->pc == 0x3A8C28u) {
        ctx->pc = 0x3A8C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C24u;
        // 0x3a8c28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8C2Cu;
        goto label_3a8c2c;
    }
    ctx->pc = 0x3A8C24u;
    {
        const bool branch_taken_0x3a8c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C24u;
        // 0x3a8c28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8c24) {
            ctx->pc = 0x3A8C30u;
            goto label_3a8c30;
        }
    }
    ctx->pc = 0x3A8C2Cu;
label_3a8c2c:
    // 0x3a8c2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a8c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a8c30:
    // 0x3a8c30: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3a8c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3a8c34:
    // 0x3a8c34: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3a8c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a8c38:
    // 0x3a8c38: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3a8c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3a8c3c:
    // 0x3a8c3c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3a8c3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a8c40:
    // 0x3a8c40: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3a8c40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a8c44:
    // 0x3a8c44: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3a8c44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a8c48:
    // 0x3a8c48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3a8c48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a8c4c:
    // 0x3a8c4c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3a8c4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a8c50:
    // 0x3a8c50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a8c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3a8c54:
    // 0x3a8c54: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x3a8c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a8c58:
    // 0x3a8c58: 0x3e00008  jr          $ra
label_3a8c5c:
    if (ctx->pc == 0x3A8C5Cu) {
        ctx->pc = 0x3A8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C58u;
        // 0x3a8c5c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8C60u;
        goto label_fallthrough_0x3a8c58;
    }
    ctx->pc = 0x3A8C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C58u;
        // 0x3a8c5c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a8c58:
    ctx->pc = 0x3A8C60u;
}
