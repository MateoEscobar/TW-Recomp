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

// Function: sub_002E8858
// Address: 0x2e8858 - 0x2e8bc8
void sub_002E8858_0x2e8858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8858_0x2e8858");
#endif

    switch (ctx->pc) {
        case 0x2e8858u: goto label_2e8858;
        case 0x2e885cu: goto label_2e885c;
        case 0x2e8860u: goto label_2e8860;
        case 0x2e8864u: goto label_2e8864;
        case 0x2e8868u: goto label_2e8868;
        case 0x2e886cu: goto label_2e886c;
        case 0x2e8870u: goto label_2e8870;
        case 0x2e8874u: goto label_2e8874;
        case 0x2e8878u: goto label_2e8878;
        case 0x2e887cu: goto label_2e887c;
        case 0x2e8880u: goto label_2e8880;
        case 0x2e8884u: goto label_2e8884;
        case 0x2e8888u: goto label_2e8888;
        case 0x2e888cu: goto label_2e888c;
        case 0x2e8890u: goto label_2e8890;
        case 0x2e8894u: goto label_2e8894;
        case 0x2e8898u: goto label_2e8898;
        case 0x2e889cu: goto label_2e889c;
        case 0x2e88a0u: goto label_2e88a0;
        case 0x2e88a4u: goto label_2e88a4;
        case 0x2e88a8u: goto label_2e88a8;
        case 0x2e88acu: goto label_2e88ac;
        case 0x2e88b0u: goto label_2e88b0;
        case 0x2e88b4u: goto label_2e88b4;
        case 0x2e88b8u: goto label_2e88b8;
        case 0x2e88bcu: goto label_2e88bc;
        case 0x2e88c0u: goto label_2e88c0;
        case 0x2e88c4u: goto label_2e88c4;
        case 0x2e88c8u: goto label_2e88c8;
        case 0x2e88ccu: goto label_2e88cc;
        case 0x2e88d0u: goto label_2e88d0;
        case 0x2e88d4u: goto label_2e88d4;
        case 0x2e88d8u: goto label_2e88d8;
        case 0x2e88dcu: goto label_2e88dc;
        case 0x2e88e0u: goto label_2e88e0;
        case 0x2e88e4u: goto label_2e88e4;
        case 0x2e88e8u: goto label_2e88e8;
        case 0x2e88ecu: goto label_2e88ec;
        case 0x2e88f0u: goto label_2e88f0;
        case 0x2e88f4u: goto label_2e88f4;
        case 0x2e88f8u: goto label_2e88f8;
        case 0x2e88fcu: goto label_2e88fc;
        case 0x2e8900u: goto label_2e8900;
        case 0x2e8904u: goto label_2e8904;
        case 0x2e8908u: goto label_2e8908;
        case 0x2e890cu: goto label_2e890c;
        case 0x2e8910u: goto label_2e8910;
        case 0x2e8914u: goto label_2e8914;
        case 0x2e8918u: goto label_2e8918;
        case 0x2e891cu: goto label_2e891c;
        case 0x2e8920u: goto label_2e8920;
        case 0x2e8924u: goto label_2e8924;
        case 0x2e8928u: goto label_2e8928;
        case 0x2e892cu: goto label_2e892c;
        case 0x2e8930u: goto label_2e8930;
        case 0x2e8934u: goto label_2e8934;
        case 0x2e8938u: goto label_2e8938;
        case 0x2e893cu: goto label_2e893c;
        case 0x2e8940u: goto label_2e8940;
        case 0x2e8944u: goto label_2e8944;
        case 0x2e8948u: goto label_2e8948;
        case 0x2e894cu: goto label_2e894c;
        case 0x2e8950u: goto label_2e8950;
        case 0x2e8954u: goto label_2e8954;
        case 0x2e8958u: goto label_2e8958;
        case 0x2e895cu: goto label_2e895c;
        case 0x2e8960u: goto label_2e8960;
        case 0x2e8964u: goto label_2e8964;
        case 0x2e8968u: goto label_2e8968;
        case 0x2e896cu: goto label_2e896c;
        case 0x2e8970u: goto label_2e8970;
        case 0x2e8974u: goto label_2e8974;
        case 0x2e8978u: goto label_2e8978;
        case 0x2e897cu: goto label_2e897c;
        case 0x2e8980u: goto label_2e8980;
        case 0x2e8984u: goto label_2e8984;
        case 0x2e8988u: goto label_2e8988;
        case 0x2e898cu: goto label_2e898c;
        case 0x2e8990u: goto label_2e8990;
        case 0x2e8994u: goto label_2e8994;
        case 0x2e8998u: goto label_2e8998;
        case 0x2e899cu: goto label_2e899c;
        case 0x2e89a0u: goto label_2e89a0;
        case 0x2e89a4u: goto label_2e89a4;
        case 0x2e89a8u: goto label_2e89a8;
        case 0x2e89acu: goto label_2e89ac;
        case 0x2e89b0u: goto label_2e89b0;
        case 0x2e89b4u: goto label_2e89b4;
        case 0x2e89b8u: goto label_2e89b8;
        case 0x2e89bcu: goto label_2e89bc;
        case 0x2e89c0u: goto label_2e89c0;
        case 0x2e89c4u: goto label_2e89c4;
        case 0x2e89c8u: goto label_2e89c8;
        case 0x2e89ccu: goto label_2e89cc;
        case 0x2e89d0u: goto label_2e89d0;
        case 0x2e89d4u: goto label_2e89d4;
        case 0x2e89d8u: goto label_2e89d8;
        case 0x2e89dcu: goto label_2e89dc;
        case 0x2e89e0u: goto label_2e89e0;
        case 0x2e89e4u: goto label_2e89e4;
        case 0x2e89e8u: goto label_2e89e8;
        case 0x2e89ecu: goto label_2e89ec;
        case 0x2e89f0u: goto label_2e89f0;
        case 0x2e89f4u: goto label_2e89f4;
        case 0x2e89f8u: goto label_2e89f8;
        case 0x2e89fcu: goto label_2e89fc;
        case 0x2e8a00u: goto label_2e8a00;
        case 0x2e8a04u: goto label_2e8a04;
        case 0x2e8a08u: goto label_2e8a08;
        case 0x2e8a0cu: goto label_2e8a0c;
        case 0x2e8a10u: goto label_2e8a10;
        case 0x2e8a14u: goto label_2e8a14;
        case 0x2e8a18u: goto label_2e8a18;
        case 0x2e8a1cu: goto label_2e8a1c;
        case 0x2e8a20u: goto label_2e8a20;
        case 0x2e8a24u: goto label_2e8a24;
        case 0x2e8a28u: goto label_2e8a28;
        case 0x2e8a2cu: goto label_2e8a2c;
        case 0x2e8a30u: goto label_2e8a30;
        case 0x2e8a34u: goto label_2e8a34;
        case 0x2e8a38u: goto label_2e8a38;
        case 0x2e8a3cu: goto label_2e8a3c;
        case 0x2e8a40u: goto label_2e8a40;
        case 0x2e8a44u: goto label_2e8a44;
        case 0x2e8a48u: goto label_2e8a48;
        case 0x2e8a4cu: goto label_2e8a4c;
        case 0x2e8a50u: goto label_2e8a50;
        case 0x2e8a54u: goto label_2e8a54;
        case 0x2e8a58u: goto label_2e8a58;
        case 0x2e8a5cu: goto label_2e8a5c;
        case 0x2e8a60u: goto label_2e8a60;
        case 0x2e8a64u: goto label_2e8a64;
        case 0x2e8a68u: goto label_2e8a68;
        case 0x2e8a6cu: goto label_2e8a6c;
        case 0x2e8a70u: goto label_2e8a70;
        case 0x2e8a74u: goto label_2e8a74;
        case 0x2e8a78u: goto label_2e8a78;
        case 0x2e8a7cu: goto label_2e8a7c;
        case 0x2e8a80u: goto label_2e8a80;
        case 0x2e8a84u: goto label_2e8a84;
        case 0x2e8a88u: goto label_2e8a88;
        case 0x2e8a8cu: goto label_2e8a8c;
        case 0x2e8a90u: goto label_2e8a90;
        case 0x2e8a94u: goto label_2e8a94;
        case 0x2e8a98u: goto label_2e8a98;
        case 0x2e8a9cu: goto label_2e8a9c;
        case 0x2e8aa0u: goto label_2e8aa0;
        case 0x2e8aa4u: goto label_2e8aa4;
        case 0x2e8aa8u: goto label_2e8aa8;
        case 0x2e8aacu: goto label_2e8aac;
        case 0x2e8ab0u: goto label_2e8ab0;
        case 0x2e8ab4u: goto label_2e8ab4;
        case 0x2e8ab8u: goto label_2e8ab8;
        case 0x2e8abcu: goto label_2e8abc;
        case 0x2e8ac0u: goto label_2e8ac0;
        case 0x2e8ac4u: goto label_2e8ac4;
        case 0x2e8ac8u: goto label_2e8ac8;
        case 0x2e8accu: goto label_2e8acc;
        case 0x2e8ad0u: goto label_2e8ad0;
        case 0x2e8ad4u: goto label_2e8ad4;
        case 0x2e8ad8u: goto label_2e8ad8;
        case 0x2e8adcu: goto label_2e8adc;
        case 0x2e8ae0u: goto label_2e8ae0;
        case 0x2e8ae4u: goto label_2e8ae4;
        case 0x2e8ae8u: goto label_2e8ae8;
        case 0x2e8aecu: goto label_2e8aec;
        case 0x2e8af0u: goto label_2e8af0;
        case 0x2e8af4u: goto label_2e8af4;
        case 0x2e8af8u: goto label_2e8af8;
        case 0x2e8afcu: goto label_2e8afc;
        case 0x2e8b00u: goto label_2e8b00;
        case 0x2e8b04u: goto label_2e8b04;
        case 0x2e8b08u: goto label_2e8b08;
        case 0x2e8b0cu: goto label_2e8b0c;
        case 0x2e8b10u: goto label_2e8b10;
        case 0x2e8b14u: goto label_2e8b14;
        case 0x2e8b18u: goto label_2e8b18;
        case 0x2e8b1cu: goto label_2e8b1c;
        case 0x2e8b20u: goto label_2e8b20;
        case 0x2e8b24u: goto label_2e8b24;
        case 0x2e8b28u: goto label_2e8b28;
        case 0x2e8b2cu: goto label_2e8b2c;
        case 0x2e8b30u: goto label_2e8b30;
        case 0x2e8b34u: goto label_2e8b34;
        case 0x2e8b38u: goto label_2e8b38;
        case 0x2e8b3cu: goto label_2e8b3c;
        case 0x2e8b40u: goto label_2e8b40;
        case 0x2e8b44u: goto label_2e8b44;
        case 0x2e8b48u: goto label_2e8b48;
        case 0x2e8b4cu: goto label_2e8b4c;
        case 0x2e8b50u: goto label_2e8b50;
        case 0x2e8b54u: goto label_2e8b54;
        case 0x2e8b58u: goto label_2e8b58;
        case 0x2e8b5cu: goto label_2e8b5c;
        case 0x2e8b60u: goto label_2e8b60;
        case 0x2e8b64u: goto label_2e8b64;
        case 0x2e8b68u: goto label_2e8b68;
        case 0x2e8b6cu: goto label_2e8b6c;
        case 0x2e8b70u: goto label_2e8b70;
        case 0x2e8b74u: goto label_2e8b74;
        case 0x2e8b78u: goto label_2e8b78;
        case 0x2e8b7cu: goto label_2e8b7c;
        case 0x2e8b80u: goto label_2e8b80;
        case 0x2e8b84u: goto label_2e8b84;
        case 0x2e8b88u: goto label_2e8b88;
        case 0x2e8b8cu: goto label_2e8b8c;
        case 0x2e8b90u: goto label_2e8b90;
        case 0x2e8b94u: goto label_2e8b94;
        case 0x2e8b98u: goto label_2e8b98;
        case 0x2e8b9cu: goto label_2e8b9c;
        case 0x2e8ba0u: goto label_2e8ba0;
        case 0x2e8ba4u: goto label_2e8ba4;
        case 0x2e8ba8u: goto label_2e8ba8;
        case 0x2e8bacu: goto label_2e8bac;
        case 0x2e8bb0u: goto label_2e8bb0;
        case 0x2e8bb4u: goto label_2e8bb4;
        case 0x2e8bb8u: goto label_2e8bb8;
        case 0x2e8bbcu: goto label_2e8bbc;
        case 0x2e8bc0u: goto label_2e8bc0;
        case 0x2e8bc4u: goto label_2e8bc4;
        default: break;
    }

    ctx->pc = 0x2e8858u;

label_2e8858:
    // 0x2e8858: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e8858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e885c:
    // 0x2e885c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2e885cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2e8860:
    // 0x2e8860: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2e8860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2e8864:
    // 0x2e8864: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e8864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e8868:
    // 0x2e8868: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2e8868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2e886c:
    // 0x2e886c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2e886cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2e8870:
    // 0x2e8870: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e8870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2e8874:
    // 0x2e8874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e8878:
    // 0x2e8878: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e8878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e887c:
    // 0x2e887c: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x2e887cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2e8880:
    // 0x2e8880: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_2e8884:
    if (ctx->pc == 0x2E8884u) {
        ctx->pc = 0x2E8884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8880u;
        // 0x2e8884: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8888u;
        goto label_2e8888;
    }
    ctx->pc = 0x2E8880u;
    {
        const bool branch_taken_0x2e8880 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E8884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8880u;
        // 0x2e8884: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8880) {
            ctx->pc = 0x2E8898u;
            goto label_2e8898;
        }
    }
    ctx->pc = 0x2E8888u;
label_2e8888:
    // 0x2e8888: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e8888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e888c:
    // 0x2e888c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e8890:
    // 0x2e8890: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e8894:
    if (ctx->pc == 0x2E8894u) {
        ctx->pc = 0x2E8894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8890u;
        // 0x2e8894: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8898u;
        goto label_2e8898;
    }
    ctx->pc = 0x2E8890u;
    {
        const bool branch_taken_0x2e8890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8890u;
        // 0x2e8894: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8890) {
            ctx->pc = 0x2E889Cu;
            goto label_2e889c;
        }
    }
    ctx->pc = 0x2E8898u;
label_2e8898:
    // 0x2e8898: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e889c:
    // 0x2e889c: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_2e88a0:
    if (ctx->pc == 0x2E88A0u) {
        ctx->pc = 0x2E88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E889Cu;
        // 0x2e88a0: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E88A4u;
        goto label_2e88a4;
    }
    ctx->pc = 0x2E889Cu;
    {
        const bool branch_taken_0x2e889c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e889c) {
            ctx->pc = 0x2E88A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E889Cu;
            // 0x2e88a0: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E88C8u;
            goto label_2e88c8;
        }
    }
    ctx->pc = 0x2E88A4u;
label_2e88a4:
    // 0x2e88a4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2e88a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2e88a8:
    // 0x2e88a8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2e88a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2e88ac:
    // 0x2e88ac: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2e88acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2e88b0:
    // 0x2e88b0: 0x40f809  jalr        $v0
label_2e88b4:
    if (ctx->pc == 0x2E88B4u) {
        ctx->pc = 0x2E88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88B0u;
        // 0x2e88b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E88B8u;
        goto label_2e88b8;
    }
    ctx->pc = 0x2E88B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E88B8u);
        ctx->pc = 0x2E88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88B0u;
        // 0x2e88b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E88B0u, 0x2E88B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E88B8u;
label_2e88b8:
    // 0x2e88b8: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x2e88b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_2e88bc:
    // 0x2e88bc: 0x104300bb  beq         $v0, $v1, . + 4 + (0xBB << 2)
label_2e88c0:
    if (ctx->pc == 0x2E88C0u) {
        ctx->pc = 0x2E88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88BCu;
        // 0x2e88c0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E88C4u;
        goto label_2e88c4;
    }
    ctx->pc = 0x2E88BCu;
    {
        const bool branch_taken_0x2e88bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88BCu;
        // 0x2e88c0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88bc) {
            ctx->pc = 0x2E8BACu;
            goto label_2e8bac;
        }
    }
    ctx->pc = 0x2E88C4u;
label_2e88c4:
    // 0x2e88c4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x2e88c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2e88c8:
    // 0x2e88c8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2e88c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_2e88cc:
    // 0x2e88cc: 0x144000b7  bnez        $v0, . + 4 + (0xB7 << 2)
label_2e88d0:
    if (ctx->pc == 0x2E88D0u) {
        ctx->pc = 0x2E88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88CCu;
        // 0x2e88d0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E88D4u;
        goto label_2e88d4;
    }
    ctx->pc = 0x2E88CCu;
    {
        const bool branch_taken_0x2e88cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88CCu;
        // 0x2e88d0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e88cc) {
            ctx->pc = 0x2E8BACu;
            goto label_2e8bac;
        }
    }
    ctx->pc = 0x2E88D4u;
label_2e88d4:
    // 0x2e88d4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e88d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e88d8:
    // 0x2e88d8: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2e88d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2e88dc:
    // 0x2e88dc: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
label_2e88e0:
    if (ctx->pc == 0x2E88E0u) {
        ctx->pc = 0x2E88E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88DCu;
        // 0x2e88e0: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E88E4u;
        goto label_2e88e4;
    }
    ctx->pc = 0x2E88DCu;
    {
        const bool branch_taken_0x2e88dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e88dc) {
            ctx->pc = 0x2E88E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E88DCu;
            // 0x2e88e0: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E891Cu;
            goto label_2e891c;
        }
    }
    ctx->pc = 0x2E88E4u;
label_2e88e4:
    // 0x2e88e4: 0xc0a36c2  jal         func_28DB08
label_2e88e8:
    if (ctx->pc == 0x2E88E8u) {
        ctx->pc = 0x2E88ECu;
        goto label_2e88ec;
    }
    ctx->pc = 0x2E88E4u;
    SET_GPR_U32(ctx, 31, 0x2E88ECu);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2E88E4u, 0x2E88ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E88ECu;
label_2e88ec:
    // 0x2e88ec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2e88ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e88f0:
    // 0x2e88f0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2e88f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2e88f4:
    // 0x2e88f4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e88f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2e88f8:
    // 0x2e88f8: 0xa0f809  jalr        $a1
label_2e88fc:
    if (ctx->pc == 0x2E88FCu) {
        ctx->pc = 0x2E88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88F8u;
        // 0x2e88fc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8900u;
        goto label_2e8900;
    }
    ctx->pc = 0x2E88F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2E8900u);
        ctx->pc = 0x2E88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E88F8u;
        // 0x2e88fc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E88F8u, 0x2E8900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8900u;
label_2e8900:
    // 0x2e8900: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e8900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2e8904:
    // 0x2e8904: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e8904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2e8908:
    // 0x2e8908: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2e890c:
    if (ctx->pc == 0x2E890Cu) {
        ctx->pc = 0x2E890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8908u;
        // 0x2e890c: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8910u;
        goto label_2e8910;
    }
    ctx->pc = 0x2E8908u;
    {
        const bool branch_taken_0x2e8908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8908) {
            ctx->pc = 0x2E890Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8908u;
            // 0x2e890c: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E891Cu;
            goto label_2e891c;
        }
    }
    ctx->pc = 0x2E8910u;
label_2e8910:
    // 0x2e8910: 0xc0a36c8  jal         func_28DB20
label_2e8914:
    if (ctx->pc == 0x2E8914u) {
        ctx->pc = 0x2E8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8910u;
        // 0x2e8914: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8918u;
        goto label_2e8918;
    }
    ctx->pc = 0x2E8910u;
    SET_GPR_U32(ctx, 31, 0x2E8918u);
    ctx->pc = 0x2E8914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8910u;
    // 0x2e8914: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2E8910u, 0x2E8918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8918u;
label_2e8918:
    // 0x2e8918: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2e8918u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e891c:
    // 0x2e891c: 0x26040124  addiu       $a0, $s0, 0x124
    ctx->pc = 0x2e891cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
label_2e8920:
    // 0x2e8920: 0xc0e409a  jal         func_390268
label_2e8924:
    if (ctx->pc == 0x2E8924u) {
        ctx->pc = 0x2E8924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8920u;
        // 0x2e8924: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8928u;
        goto label_2e8928;
    }
    ctx->pc = 0x2E8920u;
    SET_GPR_U32(ctx, 31, 0x2E8928u);
    ctx->pc = 0x2E8924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8920u;
    // 0x2e8924: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E8920u, 0x2E8928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8928u;
label_2e8928:
    // 0x2e8928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e892c:
    // 0x2e892c: 0xc0a34d6  jal         func_28D358
label_2e8930:
    if (ctx->pc == 0x2E8930u) {
        ctx->pc = 0x2E8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E892Cu;
        // 0x2e8930: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8934u;
        goto label_2e8934;
    }
    ctx->pc = 0x2E892Cu;
    SET_GPR_U32(ctx, 31, 0x2E8934u);
    ctx->pc = 0x2E8930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E892Cu;
    // 0x2e8930: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2E892Cu, 0x2E8934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8934u;
label_2e8934:
    // 0x2e8934: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e8934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e8938:
    // 0x2e8938: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2e893c:
    if (ctx->pc == 0x2E893Cu) {
        ctx->pc = 0x2E893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8938u;
        // 0x2e893c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8940u;
        goto label_2e8940;
    }
    ctx->pc = 0x2E8938u;
    {
        const bool branch_taken_0x2e8938 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8938u;
        // 0x2e893c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8938) {
            ctx->pc = 0x2E8988u;
            goto label_2e8988;
        }
    }
    ctx->pc = 0x2E8940u;
label_2e8940:
    // 0x2e8940: 0xc09643e  jal         func_2590F8
label_2e8944:
    if (ctx->pc == 0x2E8944u) {
        ctx->pc = 0x2E8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8940u;
        // 0x2e8944: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8948u;
        goto label_2e8948;
    }
    ctx->pc = 0x2E8940u;
    SET_GPR_U32(ctx, 31, 0x2E8948u);
    ctx->pc = 0x2E8944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8940u;
    // 0x2e8944: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2590F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2590F8u, 0x2E8940u, 0x2E8948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8948u;
label_2e8948:
    // 0x2e8948: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e8948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e894c:
    // 0x2e894c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_2e8950:
    if (ctx->pc == 0x2E8950u) {
        ctx->pc = 0x2E8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E894Cu;
        // 0x2e8950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8954u;
        goto label_2e8954;
    }
    ctx->pc = 0x2E894Cu;
    {
        const bool branch_taken_0x2e894c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2E8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E894Cu;
        // 0x2e8950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e894c) {
            ctx->pc = 0x2E8964u;
            goto label_2e8964;
        }
    }
    ctx->pc = 0x2E8954u;
label_2e8954:
    // 0x2e8954: 0xc0963a2  jal         func_258E88
label_2e8958:
    if (ctx->pc == 0x2E8958u) {
        ctx->pc = 0x2E8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8954u;
        // 0x2e8958: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E895Cu;
        goto label_2e895c;
    }
    ctx->pc = 0x2E8954u;
    SET_GPR_U32(ctx, 31, 0x2E895Cu);
    ctx->pc = 0x2E8958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8954u;
    // 0x2e8958: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E88u, 0x2E8954u, 0x2E895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E895Cu;
label_2e895c:
    // 0x2e895c: 0x5450000b  bnel        $v0, $s0, . + 4 + (0xB << 2)
label_2e8960:
    if (ctx->pc == 0x2E8960u) {
        ctx->pc = 0x2E8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E895Cu;
        // 0x2e8960: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8964u;
        goto label_2e8964;
    }
    ctx->pc = 0x2E895Cu;
    {
        const bool branch_taken_0x2e895c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e895c) {
            ctx->pc = 0x2E8960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E895Cu;
            // 0x2e8960: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E898Cu;
            goto label_2e898c;
        }
    }
    ctx->pc = 0x2E8964u;
label_2e8964:
    // 0x2e8964: 0xc0a36c8  jal         func_28DB20
label_2e8968:
    if (ctx->pc == 0x2E8968u) {
        ctx->pc = 0x2E8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8964u;
        // 0x2e8968: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E896Cu;
        goto label_2e896c;
    }
    ctx->pc = 0x2E8964u;
    SET_GPR_U32(ctx, 31, 0x2E896Cu);
    ctx->pc = 0x2E8968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8964u;
    // 0x2e8968: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2E8964u, 0x2E896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E896Cu;
label_2e896c:
    // 0x2e896c: 0x54500007  bnel        $v0, $s0, . + 4 + (0x7 << 2)
label_2e8970:
    if (ctx->pc == 0x2E8970u) {
        ctx->pc = 0x2E8970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E896Cu;
        // 0x2e8970: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8974u;
        goto label_2e8974;
    }
    ctx->pc = 0x2E896Cu;
    {
        const bool branch_taken_0x2e896c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e896c) {
            ctx->pc = 0x2E8970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E896Cu;
            // 0x2e8970: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E898Cu;
            goto label_2e898c;
        }
    }
    ctx->pc = 0x2E8974u;
label_2e8974:
    // 0x2e8974: 0xc0874fa  jal         func_21D3E8
label_2e8978:
    if (ctx->pc == 0x2E8978u) {
        ctx->pc = 0x2E8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8974u;
        // 0x2e8978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E897Cu;
        goto label_2e897c;
    }
    ctx->pc = 0x2E8974u;
    SET_GPR_U32(ctx, 31, 0x2E897Cu);
    ctx->pc = 0x2E8978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8974u;
    // 0x2e8978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2E8974u, 0x2E897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E897Cu;
label_2e897c:
    // 0x2e897c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e897cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e8980:
    // 0x2e8980: 0xc051fbc  jal         func_147EF0
label_2e8984:
    if (ctx->pc == 0x2E8984u) {
        ctx->pc = 0x2E8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8980u;
        // 0x2e8984: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8988u;
        goto label_2e8988;
    }
    ctx->pc = 0x2E8980u;
    SET_GPR_U32(ctx, 31, 0x2E8988u);
    ctx->pc = 0x2E8984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8980u;
    // 0x2e8984: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2E8980u, 0x2E8988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8988u;
label_2e8988:
    // 0x2e8988: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2e8988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e898c:
    // 0x2e898c: 0xc08a10a  jal         func_228428
label_2e8990:
    if (ctx->pc == 0x2E8990u) {
        ctx->pc = 0x2E8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E898Cu;
        // 0x2e8990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8994u;
        goto label_2e8994;
    }
    ctx->pc = 0x2E898Cu;
    SET_GPR_U32(ctx, 31, 0x2E8994u);
    ctx->pc = 0x2E8990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E898Cu;
    // 0x2e8990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228428u, 0x2E898Cu, 0x2E8994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8994u;
label_2e8994:
    // 0x2e8994: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2e8998:
    if (ctx->pc == 0x2E8998u) {
        ctx->pc = 0x2E8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8994u;
        // 0x2e8998: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E899Cu;
        goto label_2e899c;
    }
    ctx->pc = 0x2E8994u;
    {
        const bool branch_taken_0x2e8994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8994) {
            ctx->pc = 0x2E8998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8994u;
            // 0x2e8998: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E89D8u;
            goto label_2e89d8;
        }
    }
    ctx->pc = 0x2E899Cu;
label_2e899c:
    // 0x2e899c: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_2e89a0:
    if (ctx->pc == 0x2E89A0u) {
        ctx->pc = 0x2E89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E899Cu;
        // 0x2e89a0: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89A4u;
        goto label_2e89a4;
    }
    ctx->pc = 0x2E899Cu;
    {
        const bool branch_taken_0x2e899c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e899c) {
            ctx->pc = 0x2E89A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E899Cu;
            // 0x2e89a0: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E89D8u;
            goto label_2e89d8;
        }
    }
    ctx->pc = 0x2E89A4u;
label_2e89a4:
    // 0x2e89a4: 0x5211000c  beql        $s0, $s1, . + 4 + (0xC << 2)
label_2e89a8:
    if (ctx->pc == 0x2E89A8u) {
        ctx->pc = 0x2E89A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89A4u;
        // 0x2e89a8: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89ACu;
        goto label_2e89ac;
    }
    ctx->pc = 0x2E89A4u;
    {
        const bool branch_taken_0x2e89a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x2e89a4) {
            ctx->pc = 0x2E89A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E89A4u;
            // 0x2e89a8: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E89D8u;
            goto label_2e89d8;
        }
    }
    ctx->pc = 0x2E89ACu;
label_2e89ac:
    // 0x2e89ac: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
label_2e89b0:
    if (ctx->pc == 0x2E89B0u) {
        ctx->pc = 0x2E89B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89ACu;
        // 0x2e89b0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89B4u;
        goto label_2e89b4;
    }
    ctx->pc = 0x2E89ACu;
    {
        const bool branch_taken_0x2e89ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e89ac) {
            ctx->pc = 0x2E89B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E89ACu;
            // 0x2e89b0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E89C8u;
            goto label_2e89c8;
        }
    }
    ctx->pc = 0x2E89B4u;
label_2e89b4:
    // 0x2e89b4: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x2e89b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_2e89b8:
    // 0x2e89b8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2e89b8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2e89bc:
    // 0x2e89bc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2e89c0:
    if (ctx->pc == 0x2E89C0u) {
        ctx->pc = 0x2E89C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89BCu;
        // 0x2e89c0: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89C4u;
        goto label_2e89c4;
    }
    ctx->pc = 0x2E89BCu;
    {
        const bool branch_taken_0x2e89bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e89bc) {
            ctx->pc = 0x2E89C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E89BCu;
            // 0x2e89c0: 0x86050092  lh          $a1, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E89D8u;
            goto label_2e89d8;
        }
    }
    ctx->pc = 0x2E89C4u;
label_2e89c4:
    // 0x2e89c4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e89c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e89c8:
    // 0x2e89c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e89c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e89cc:
    // 0x2e89cc: 0xc0a33f8  jal         func_28CFE0
label_2e89d0:
    if (ctx->pc == 0x2E89D0u) {
        ctx->pc = 0x2E89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89CCu;
        // 0x2e89d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89D4u;
        goto label_2e89d4;
    }
    ctx->pc = 0x2E89CCu;
    SET_GPR_U32(ctx, 31, 0x2E89D4u);
    ctx->pc = 0x2E89D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E89CCu;
    // 0x2e89d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2E89CCu, 0x2E89D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E89D4u;
label_2e89d4:
    // 0x2e89d4: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2e89d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2e89d8:
    // 0x2e89d8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2e89dc:
    // 0x2e89dc: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2e89dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2e89e0:
    // 0x2e89e0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2e89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2e89e4:
    // 0x2e89e4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e89e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e89e8:
    // 0x2e89e8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e89e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e89ec:
    // 0x2e89ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2e89ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2e89f0:
    // 0x2e89f0: 0xc0cdb38  jal         func_336CE0
label_2e89f4:
    if (ctx->pc == 0x2E89F4u) {
        ctx->pc = 0x2E89F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E89F0u;
        // 0x2e89f4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E89F8u;
        goto label_2e89f8;
    }
    ctx->pc = 0x2E89F0u;
    SET_GPR_U32(ctx, 31, 0x2E89F8u);
    ctx->pc = 0x2E89F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E89F0u;
    // 0x2e89f4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E89F0u, 0x2E89F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E89F8u;
label_2e89f8:
    // 0x2e89f8: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x2e89f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_2e89fc:
    // 0x2e89fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e89fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e8a00:
    // 0x2e8a00: 0x0  nop
    ctx->pc = 0x2e8a00u;
    // NOP
label_2e8a04:
    // 0x2e8a04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e8a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8a08:
    // 0x2e8a08: 0x0  nop
    ctx->pc = 0x2e8a08u;
    // NOP
label_2e8a0c:
    // 0x2e8a0c: 0x45000067  bc1f        . + 4 + (0x67 << 2)
label_2e8a10:
    if (ctx->pc == 0x2E8A10u) {
        ctx->pc = 0x2E8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A0Cu;
        // 0x2e8a10: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A14u;
        goto label_2e8a14;
    }
    ctx->pc = 0x2E8A0Cu;
    {
        const bool branch_taken_0x2e8a0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A0Cu;
        // 0x2e8a10: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a0c) {
            ctx->pc = 0x2E8BACu;
            goto label_2e8bac;
        }
    }
    ctx->pc = 0x2E8A14u;
label_2e8a14:
    // 0x2e8a14: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e8a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e8a18:
    // 0x2e8a18: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2e8a18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2e8a1c:
    // 0x2e8a1c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_2e8a20:
    if (ctx->pc == 0x2E8A20u) {
        ctx->pc = 0x2E8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A1Cu;
        // 0x2e8a20: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A24u;
        goto label_2e8a24;
    }
    ctx->pc = 0x2E8A1Cu;
    {
        const bool branch_taken_0x2e8a1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A1Cu;
        // 0x2e8a20: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a1c) {
            ctx->pc = 0x2E8A4Cu;
            goto label_2e8a4c;
        }
    }
    ctx->pc = 0x2E8A24u;
label_2e8a24:
    // 0x2e8a24: 0xc0a36c2  jal         func_28DB08
label_2e8a28:
    if (ctx->pc == 0x2E8A28u) {
        ctx->pc = 0x2E8A2Cu;
        goto label_2e8a2c;
    }
    ctx->pc = 0x2E8A24u;
    SET_GPR_U32(ctx, 31, 0x2E8A2Cu);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2E8A24u, 0x2E8A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A2Cu;
label_2e8a2c:
    // 0x2e8a2c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2e8a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e8a30:
    // 0x2e8a30: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2e8a30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2e8a34:
    // 0x2e8a34: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e8a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2e8a38:
    // 0x2e8a38: 0xa0f809  jalr        $a1
label_2e8a3c:
    if (ctx->pc == 0x2E8A3Cu) {
        ctx->pc = 0x2E8A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A38u;
        // 0x2e8a3c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A40u;
        goto label_2e8a40;
    }
    ctx->pc = 0x2E8A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2E8A40u);
        ctx->pc = 0x2E8A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A38u;
        // 0x2e8a3c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8A38u, 0x2E8A40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8A40u;
label_2e8a40:
    // 0x2e8a40: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2e8a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2e8a44:
    // 0x2e8a44: 0x10430059  beq         $v0, $v1, . + 4 + (0x59 << 2)
label_2e8a48:
    if (ctx->pc == 0x2E8A48u) {
        ctx->pc = 0x2E8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A44u;
        // 0x2e8a48: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A4Cu;
        goto label_2e8a4c;
    }
    ctx->pc = 0x2E8A44u;
    {
        const bool branch_taken_0x2e8a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A44u;
        // 0x2e8a48: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a44) {
            ctx->pc = 0x2E8BACu;
            goto label_2e8bac;
        }
    }
    ctx->pc = 0x2E8A4Cu;
label_2e8a4c:
    // 0x2e8a4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e8a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e8a50:
    // 0x2e8a50: 0xc089998  jal         func_226660
label_2e8a54:
    if (ctx->pc == 0x2E8A54u) {
        ctx->pc = 0x2E8A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A50u;
        // 0x2e8a54: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A58u;
        goto label_2e8a58;
    }
    ctx->pc = 0x2E8A50u;
    SET_GPR_U32(ctx, 31, 0x2E8A58u);
    ctx->pc = 0x2E8A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A50u;
    // 0x2e8a54: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2E8A50u, 0x2E8A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A58u;
label_2e8a58:
    // 0x2e8a58: 0x10510054  beq         $v0, $s1, . + 4 + (0x54 << 2)
label_2e8a5c:
    if (ctx->pc == 0x2E8A5Cu) {
        ctx->pc = 0x2E8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A58u;
        // 0x2e8a5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A60u;
        goto label_2e8a60;
    }
    ctx->pc = 0x2E8A58u;
    {
        const bool branch_taken_0x2e8a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2E8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A58u;
        // 0x2e8a5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a58) {
            ctx->pc = 0x2E8BACu;
            goto label_2e8bac;
        }
    }
    ctx->pc = 0x2E8A60u;
label_2e8a60:
    // 0x2e8a60: 0xc088bbc  jal         func_222EF0
label_2e8a64:
    if (ctx->pc == 0x2E8A64u) {
        ctx->pc = 0x2E8A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A60u;
        // 0x2e8a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A68u;
        goto label_2e8a68;
    }
    ctx->pc = 0x2E8A60u;
    SET_GPR_U32(ctx, 31, 0x2E8A68u);
    ctx->pc = 0x2E8A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A60u;
    // 0x2e8a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x2E8A60u, 0x2E8A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A68u;
label_2e8a68:
    // 0x2e8a68: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2e8a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2e8a6c:
    // 0x2e8a6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e8a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e8a70:
    // 0x2e8a70: 0x0  nop
    ctx->pc = 0x2e8a70u;
    // NOP
label_2e8a74:
    // 0x2e8a74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e8a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8a78:
    // 0x2e8a78: 0x0  nop
    ctx->pc = 0x2e8a78u;
    // NOP
label_2e8a7c:
    // 0x2e8a7c: 0x4501004b  bc1t        . + 4 + (0x4B << 2)
label_2e8a80:
    if (ctx->pc == 0x2E8A80u) {
        ctx->pc = 0x2E8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A7Cu;
        // 0x2e8a80: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A84u;
        goto label_2e8a84;
    }
    ctx->pc = 0x2E8A7Cu;
    {
        const bool branch_taken_0x2e8a7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A7Cu;
        // 0x2e8a80: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a7c) {
            ctx->pc = 0x2E8BACu;
            goto label_2e8bac;
        }
    }
    ctx->pc = 0x2E8A84u;
label_2e8a84:
    // 0x2e8a84: 0xc0a36c8  jal         func_28DB20
label_2e8a88:
    if (ctx->pc == 0x2E8A88u) {
        ctx->pc = 0x2E8A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A84u;
        // 0x2e8a88: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A8Cu;
        goto label_2e8a8c;
    }
    ctx->pc = 0x2E8A84u;
    SET_GPR_U32(ctx, 31, 0x2E8A8Cu);
    ctx->pc = 0x2E8A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A84u;
    // 0x2e8a88: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2E8A84u, 0x2E8A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A8Cu;
label_2e8a8c:
    // 0x2e8a8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e8a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e8a90:
    // 0x2e8a90: 0x56110046  bnel        $s0, $s1, . + 4 + (0x46 << 2)
label_2e8a94:
    if (ctx->pc == 0x2E8A94u) {
        ctx->pc = 0x2E8A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A90u;
        // 0x2e8a94: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8A98u;
        goto label_2e8a98;
    }
    ctx->pc = 0x2E8A90u;
    {
        const bool branch_taken_0x2e8a90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2e8a90) {
            ctx->pc = 0x2E8A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8A90u;
            // 0x2e8a94: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8BACu;
            goto label_2e8bac;
        }
    }
    ctx->pc = 0x2E8A98u;
label_2e8a98:
    // 0x2e8a98: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2e8a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2e8a9c:
    // 0x2e8a9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e8a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e8aa0:
    // 0x2e8aa0: 0xc089998  jal         func_226660
label_2e8aa4:
    if (ctx->pc == 0x2E8AA4u) {
        ctx->pc = 0x2E8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AA0u;
        // 0x2e8aa4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8AA8u;
        goto label_2e8aa8;
    }
    ctx->pc = 0x2E8AA0u;
    SET_GPR_U32(ctx, 31, 0x2E8AA8u);
    ctx->pc = 0x2E8AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8AA0u;
    // 0x2e8aa4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2E8AA0u, 0x2E8AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8AA8u;
label_2e8aa8:
    // 0x2e8aa8: 0x1450000c  bne         $v0, $s0, . + 4 + (0xC << 2)
label_2e8aac:
    if (ctx->pc == 0x2E8AACu) {
        ctx->pc = 0x2E8AB0u;
        goto label_2e8ab0;
    }
    ctx->pc = 0x2E8AA8u;
    {
        const bool branch_taken_0x2e8aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e8aa8) {
            ctx->pc = 0x2E8ADCu;
            goto label_2e8adc;
        }
    }
    ctx->pc = 0x2E8AB0u;
label_2e8ab0:
    // 0x2e8ab0: 0x8e5000d8  lw          $s0, 0xD8($s2)
    ctx->pc = 0x2e8ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2e8ab4:
    // 0x2e8ab4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2e8ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e8ab8:
    // 0x2e8ab8: 0xc05dc0e  jal         func_177038
label_2e8abc:
    if (ctx->pc == 0x2E8ABCu) {
        ctx->pc = 0x2E8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AB8u;
        // 0x2e8abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8AC0u;
        goto label_2e8ac0;
    }
    ctx->pc = 0x2E8AB8u;
    SET_GPR_U32(ctx, 31, 0x2E8AC0u);
    ctx->pc = 0x2E8ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8AB8u;
    // 0x2e8abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177038u, 0x2E8AB8u, 0x2E8AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8AC0u;
label_2e8ac0:
    // 0x2e8ac0: 0xc05d484  jal         func_175210
label_2e8ac4:
    if (ctx->pc == 0x2E8AC4u) {
        ctx->pc = 0x2E8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AC0u;
        // 0x2e8ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8AC8u;
        goto label_2e8ac8;
    }
    ctx->pc = 0x2E8AC0u;
    SET_GPR_U32(ctx, 31, 0x2E8AC8u);
    ctx->pc = 0x2E8AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8AC0u;
    // 0x2e8ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2E8AC0u, 0x2E8AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8AC8u;
label_2e8ac8:
    // 0x2e8ac8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e8ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e8acc:
    // 0x2e8acc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2e8accu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2e8ad0:
    // 0x2e8ad0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2e8ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2e8ad4:
    // 0x2e8ad4: 0xa0f809  jalr        $a1
label_2e8ad8:
    if (ctx->pc == 0x2E8AD8u) {
        ctx->pc = 0x2E8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AD4u;
        // 0x2e8ad8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8ADCu;
        goto label_2e8adc;
    }
    ctx->pc = 0x2E8AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2E8ADCu);
        ctx->pc = 0x2E8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AD4u;
        // 0x2e8ad8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8AD4u, 0x2E8ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E8ADCu;
label_2e8adc:
    // 0x2e8adc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2e8adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2e8ae0:
    // 0x2e8ae0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e8ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e8ae4:
    // 0x2e8ae4: 0xc089998  jal         func_226660
label_2e8ae8:
    if (ctx->pc == 0x2E8AE8u) {
        ctx->pc = 0x2E8AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AE4u;
        // 0x2e8ae8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8AECu;
        goto label_2e8aec;
    }
    ctx->pc = 0x2E8AE4u;
    SET_GPR_U32(ctx, 31, 0x2E8AECu);
    ctx->pc = 0x2E8AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8AE4u;
    // 0x2e8ae8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2E8AE4u, 0x2E8AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8AECu;
label_2e8aec:
    // 0x2e8aec: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
label_2e8af0:
    if (ctx->pc == 0x2E8AF0u) {
        ctx->pc = 0x2E8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AECu;
        // 0x2e8af0: 0xa2600046  sb          $zero, 0x46($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 70), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8AF4u;
        goto label_2e8af4;
    }
    ctx->pc = 0x2E8AECu;
    {
        const bool branch_taken_0x2e8aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8aec) {
            ctx->pc = 0x2E8AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8AECu;
            // 0x2e8af0: 0xa2600046  sb          $zero, 0x46($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 70), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8BA8u;
            goto label_2e8ba8;
        }
    }
    ctx->pc = 0x2E8AF4u;
label_2e8af4:
    // 0x2e8af4: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2e8af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_2e8af8:
    // 0x2e8af8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2e8af8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2e8afc:
    // 0x2e8afc: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x2e8afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_2e8b00:
    // 0x2e8b00: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2e8b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_2e8b04:
    // 0x2e8b04: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2e8b04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_2e8b08:
    // 0x2e8b08: 0xc08997c  jal         func_2265F0
label_2e8b0c:
    if (ctx->pc == 0x2E8B0Cu) {
        ctx->pc = 0x2E8B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B08u;
        // 0x2e8b0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B10u;
        goto label_2e8b10;
    }
    ctx->pc = 0x2E8B08u;
    SET_GPR_U32(ctx, 31, 0x2E8B10u);
    ctx->pc = 0x2E8B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B08u;
    // 0x2e8b0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2E8B08u, 0x2E8B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B10u;
label_2e8b10:
    // 0x2e8b10: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_2e8b14:
    if (ctx->pc == 0x2E8B14u) {
        ctx->pc = 0x2E8B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B10u;
        // 0x2e8b14: 0xa2600046  sb          $zero, 0x46($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 70), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B18u;
        goto label_2e8b18;
    }
    ctx->pc = 0x2E8B10u;
    {
        const bool branch_taken_0x2e8b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8b10) {
            ctx->pc = 0x2E8B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8B10u;
            // 0x2e8b14: 0xa2600046  sb          $zero, 0x46($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 70), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8BA8u;
            goto label_2e8ba8;
        }
    }
    ctx->pc = 0x2E8B18u;
label_2e8b18:
    // 0x2e8b18: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2e8b18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2e8b1c:
    // 0x2e8b1c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2e8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2e8b20:
    // 0x2e8b20: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e8b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2e8b24:
    // 0x2e8b24: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2e8b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2e8b28:
    // 0x2e8b28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e8b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2e8b2c:
    // 0x2e8b2c: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e8b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2e8b30:
    // 0x2e8b30: 0xc0cd4ee  jal         func_3353B8
label_2e8b34:
    if (ctx->pc == 0x2E8B34u) {
        ctx->pc = 0x2E8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B30u;
        // 0x2e8b34: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B38u;
        goto label_2e8b38;
    }
    ctx->pc = 0x2E8B30u;
    SET_GPR_U32(ctx, 31, 0x2E8B38u);
    ctx->pc = 0x2E8B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B30u;
    // 0x2e8b34: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2E8B30u, 0x2E8B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B38u;
label_2e8b38:
    // 0x2e8b38: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x2e8b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2e8b3c:
    // 0x2e8b3c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e8b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2e8b40:
    // 0x2e8b40: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2e8b40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e8b44:
    // 0x2e8b44: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x2e8b44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_2e8b48:
    // 0x2e8b48: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2e8b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2e8b4c:
    // 0x2e8b4c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2e8b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2e8b50:
    // 0x2e8b50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e8b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e8b54:
    // 0x2e8b54: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2e8b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2e8b58:
    // 0x2e8b58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e8b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e8b5c:
    // 0x2e8b5c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2e8b5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8b60:
    // 0x2e8b60: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x2e8b60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2e8b64:
    // 0x2e8b64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8b68:
    // 0x2e8b68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e8b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8b6c:
    // 0x2e8b6c: 0xc088178  jal         func_2205E0
label_2e8b70:
    if (ctx->pc == 0x2E8B70u) {
        ctx->pc = 0x2E8B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B6Cu;
        // 0x2e8b70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B74u;
        goto label_2e8b74;
    }
    ctx->pc = 0x2E8B6Cu;
    SET_GPR_U32(ctx, 31, 0x2E8B74u);
    ctx->pc = 0x2E8B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B6Cu;
    // 0x2e8b70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2E8B6Cu, 0x2E8B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B74u;
label_2e8b74:
    // 0x2e8b74: 0xc0a367c  jal         func_28D9F0
label_2e8b78:
    if (ctx->pc == 0x2E8B78u) {
        ctx->pc = 0x2E8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B74u;
        // 0x2e8b78: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B7Cu;
        goto label_2e8b7c;
    }
    ctx->pc = 0x2E8B74u;
    SET_GPR_U32(ctx, 31, 0x2E8B7Cu);
    ctx->pc = 0x2E8B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B74u;
    // 0x2e8b78: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E8B74u, 0x2E8B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B7Cu;
label_2e8b7c:
    // 0x2e8b7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2e8b80:
    if (ctx->pc == 0x2E8B80u) {
        ctx->pc = 0x2E8B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B7Cu;
        // 0x2e8b80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8B84u;
        goto label_2e8b84;
    }
    ctx->pc = 0x2E8B7Cu;
    {
        const bool branch_taken_0x2e8b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B7Cu;
        // 0x2e8b80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b7c) {
            ctx->pc = 0x2E8BA4u;
            goto label_2e8ba4;
        }
    }
    ctx->pc = 0x2E8B84u;
label_2e8b84:
    // 0x2e8b84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e8b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e8b88:
    // 0x2e8b88: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2e8b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e8b8c:
    // 0x2e8b8c: 0x2406028d  addiu       $a2, $zero, 0x28D
    ctx->pc = 0x2e8b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 653));
label_2e8b90:
    // 0x2e8b90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e8b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8b94:
    // 0x2e8b94: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2e8b94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2e8b98:
    // 0x2e8b98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e8b98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8b9c:
    // 0x2e8b9c: 0xc0be968  jal         func_2FA5A0
label_2e8ba0:
    if (ctx->pc == 0x2E8BA0u) {
        ctx->pc = 0x2E8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B9Cu;
        // 0x2e8ba0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8BA4u;
        goto label_2e8ba4;
    }
    ctx->pc = 0x2E8B9Cu;
    SET_GPR_U32(ctx, 31, 0x2E8BA4u);
    ctx->pc = 0x2E8BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B9Cu;
    // 0x2e8ba0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2E8B9Cu, 0x2E8BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8BA4u;
label_2e8ba4:
    // 0x2e8ba4: 0xa2600046  sb          $zero, 0x46($s3)
    ctx->pc = 0x2e8ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 70), (uint8_t)GPR_U32(ctx, 0));
label_2e8ba8:
    // 0x2e8ba8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2e8ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e8bac:
    // 0x2e8bac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2e8bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e8bb0:
    // 0x2e8bb0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e8bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e8bb4:
    // 0x2e8bb4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2e8bb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e8bb8:
    // 0x2e8bb8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2e8bb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e8bbc:
    // 0x2e8bbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e8bc0:
    // 0x2e8bc0: 0x3e00008  jr          $ra
label_2e8bc4:
    if (ctx->pc == 0x2E8BC4u) {
        ctx->pc = 0x2E8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BC0u;
        // 0x2e8bc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8BC8u;
        goto label_fallthrough_0x2e8bc0;
    }
    ctx->pc = 0x2E8BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BC0u;
        // 0x2e8bc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e8bc0:
    ctx->pc = 0x2E8BC8u;
}
