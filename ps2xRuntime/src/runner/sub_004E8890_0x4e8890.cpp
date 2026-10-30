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

// Function: sub_004E8890
// Address: 0x4e8890 - 0x4e8c60
void sub_004E8890_0x4e8890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8890_0x4e8890");
#endif

    switch (ctx->pc) {
        case 0x4e8890u: goto label_4e8890;
        case 0x4e8894u: goto label_4e8894;
        case 0x4e8898u: goto label_4e8898;
        case 0x4e889cu: goto label_4e889c;
        case 0x4e88a0u: goto label_4e88a0;
        case 0x4e88a4u: goto label_4e88a4;
        case 0x4e88a8u: goto label_4e88a8;
        case 0x4e88acu: goto label_4e88ac;
        case 0x4e88b0u: goto label_4e88b0;
        case 0x4e88b4u: goto label_4e88b4;
        case 0x4e88b8u: goto label_4e88b8;
        case 0x4e88bcu: goto label_4e88bc;
        case 0x4e88c0u: goto label_4e88c0;
        case 0x4e88c4u: goto label_4e88c4;
        case 0x4e88c8u: goto label_4e88c8;
        case 0x4e88ccu: goto label_4e88cc;
        case 0x4e88d0u: goto label_4e88d0;
        case 0x4e88d4u: goto label_4e88d4;
        case 0x4e88d8u: goto label_4e88d8;
        case 0x4e88dcu: goto label_4e88dc;
        case 0x4e88e0u: goto label_4e88e0;
        case 0x4e88e4u: goto label_4e88e4;
        case 0x4e88e8u: goto label_4e88e8;
        case 0x4e88ecu: goto label_4e88ec;
        case 0x4e88f0u: goto label_4e88f0;
        case 0x4e88f4u: goto label_4e88f4;
        case 0x4e88f8u: goto label_4e88f8;
        case 0x4e88fcu: goto label_4e88fc;
        case 0x4e8900u: goto label_4e8900;
        case 0x4e8904u: goto label_4e8904;
        case 0x4e8908u: goto label_4e8908;
        case 0x4e890cu: goto label_4e890c;
        case 0x4e8910u: goto label_4e8910;
        case 0x4e8914u: goto label_4e8914;
        case 0x4e8918u: goto label_4e8918;
        case 0x4e891cu: goto label_4e891c;
        case 0x4e8920u: goto label_4e8920;
        case 0x4e8924u: goto label_4e8924;
        case 0x4e8928u: goto label_4e8928;
        case 0x4e892cu: goto label_4e892c;
        case 0x4e8930u: goto label_4e8930;
        case 0x4e8934u: goto label_4e8934;
        case 0x4e8938u: goto label_4e8938;
        case 0x4e893cu: goto label_4e893c;
        case 0x4e8940u: goto label_4e8940;
        case 0x4e8944u: goto label_4e8944;
        case 0x4e8948u: goto label_4e8948;
        case 0x4e894cu: goto label_4e894c;
        case 0x4e8950u: goto label_4e8950;
        case 0x4e8954u: goto label_4e8954;
        case 0x4e8958u: goto label_4e8958;
        case 0x4e895cu: goto label_4e895c;
        case 0x4e8960u: goto label_4e8960;
        case 0x4e8964u: goto label_4e8964;
        case 0x4e8968u: goto label_4e8968;
        case 0x4e896cu: goto label_4e896c;
        case 0x4e8970u: goto label_4e8970;
        case 0x4e8974u: goto label_4e8974;
        case 0x4e8978u: goto label_4e8978;
        case 0x4e897cu: goto label_4e897c;
        case 0x4e8980u: goto label_4e8980;
        case 0x4e8984u: goto label_4e8984;
        case 0x4e8988u: goto label_4e8988;
        case 0x4e898cu: goto label_4e898c;
        case 0x4e8990u: goto label_4e8990;
        case 0x4e8994u: goto label_4e8994;
        case 0x4e8998u: goto label_4e8998;
        case 0x4e899cu: goto label_4e899c;
        case 0x4e89a0u: goto label_4e89a0;
        case 0x4e89a4u: goto label_4e89a4;
        case 0x4e89a8u: goto label_4e89a8;
        case 0x4e89acu: goto label_4e89ac;
        case 0x4e89b0u: goto label_4e89b0;
        case 0x4e89b4u: goto label_4e89b4;
        case 0x4e89b8u: goto label_4e89b8;
        case 0x4e89bcu: goto label_4e89bc;
        case 0x4e89c0u: goto label_4e89c0;
        case 0x4e89c4u: goto label_4e89c4;
        case 0x4e89c8u: goto label_4e89c8;
        case 0x4e89ccu: goto label_4e89cc;
        case 0x4e89d0u: goto label_4e89d0;
        case 0x4e89d4u: goto label_4e89d4;
        case 0x4e89d8u: goto label_4e89d8;
        case 0x4e89dcu: goto label_4e89dc;
        case 0x4e89e0u: goto label_4e89e0;
        case 0x4e89e4u: goto label_4e89e4;
        case 0x4e89e8u: goto label_4e89e8;
        case 0x4e89ecu: goto label_4e89ec;
        case 0x4e89f0u: goto label_4e89f0;
        case 0x4e89f4u: goto label_4e89f4;
        case 0x4e89f8u: goto label_4e89f8;
        case 0x4e89fcu: goto label_4e89fc;
        case 0x4e8a00u: goto label_4e8a00;
        case 0x4e8a04u: goto label_4e8a04;
        case 0x4e8a08u: goto label_4e8a08;
        case 0x4e8a0cu: goto label_4e8a0c;
        case 0x4e8a10u: goto label_4e8a10;
        case 0x4e8a14u: goto label_4e8a14;
        case 0x4e8a18u: goto label_4e8a18;
        case 0x4e8a1cu: goto label_4e8a1c;
        case 0x4e8a20u: goto label_4e8a20;
        case 0x4e8a24u: goto label_4e8a24;
        case 0x4e8a28u: goto label_4e8a28;
        case 0x4e8a2cu: goto label_4e8a2c;
        case 0x4e8a30u: goto label_4e8a30;
        case 0x4e8a34u: goto label_4e8a34;
        case 0x4e8a38u: goto label_4e8a38;
        case 0x4e8a3cu: goto label_4e8a3c;
        case 0x4e8a40u: goto label_4e8a40;
        case 0x4e8a44u: goto label_4e8a44;
        case 0x4e8a48u: goto label_4e8a48;
        case 0x4e8a4cu: goto label_4e8a4c;
        case 0x4e8a50u: goto label_4e8a50;
        case 0x4e8a54u: goto label_4e8a54;
        case 0x4e8a58u: goto label_4e8a58;
        case 0x4e8a5cu: goto label_4e8a5c;
        case 0x4e8a60u: goto label_4e8a60;
        case 0x4e8a64u: goto label_4e8a64;
        case 0x4e8a68u: goto label_4e8a68;
        case 0x4e8a6cu: goto label_4e8a6c;
        case 0x4e8a70u: goto label_4e8a70;
        case 0x4e8a74u: goto label_4e8a74;
        case 0x4e8a78u: goto label_4e8a78;
        case 0x4e8a7cu: goto label_4e8a7c;
        case 0x4e8a80u: goto label_4e8a80;
        case 0x4e8a84u: goto label_4e8a84;
        case 0x4e8a88u: goto label_4e8a88;
        case 0x4e8a8cu: goto label_4e8a8c;
        case 0x4e8a90u: goto label_4e8a90;
        case 0x4e8a94u: goto label_4e8a94;
        case 0x4e8a98u: goto label_4e8a98;
        case 0x4e8a9cu: goto label_4e8a9c;
        case 0x4e8aa0u: goto label_4e8aa0;
        case 0x4e8aa4u: goto label_4e8aa4;
        case 0x4e8aa8u: goto label_4e8aa8;
        case 0x4e8aacu: goto label_4e8aac;
        case 0x4e8ab0u: goto label_4e8ab0;
        case 0x4e8ab4u: goto label_4e8ab4;
        case 0x4e8ab8u: goto label_4e8ab8;
        case 0x4e8abcu: goto label_4e8abc;
        case 0x4e8ac0u: goto label_4e8ac0;
        case 0x4e8ac4u: goto label_4e8ac4;
        case 0x4e8ac8u: goto label_4e8ac8;
        case 0x4e8accu: goto label_4e8acc;
        case 0x4e8ad0u: goto label_4e8ad0;
        case 0x4e8ad4u: goto label_4e8ad4;
        case 0x4e8ad8u: goto label_4e8ad8;
        case 0x4e8adcu: goto label_4e8adc;
        case 0x4e8ae0u: goto label_4e8ae0;
        case 0x4e8ae4u: goto label_4e8ae4;
        case 0x4e8ae8u: goto label_4e8ae8;
        case 0x4e8aecu: goto label_4e8aec;
        case 0x4e8af0u: goto label_4e8af0;
        case 0x4e8af4u: goto label_4e8af4;
        case 0x4e8af8u: goto label_4e8af8;
        case 0x4e8afcu: goto label_4e8afc;
        case 0x4e8b00u: goto label_4e8b00;
        case 0x4e8b04u: goto label_4e8b04;
        case 0x4e8b08u: goto label_4e8b08;
        case 0x4e8b0cu: goto label_4e8b0c;
        case 0x4e8b10u: goto label_4e8b10;
        case 0x4e8b14u: goto label_4e8b14;
        case 0x4e8b18u: goto label_4e8b18;
        case 0x4e8b1cu: goto label_4e8b1c;
        case 0x4e8b20u: goto label_4e8b20;
        case 0x4e8b24u: goto label_4e8b24;
        case 0x4e8b28u: goto label_4e8b28;
        case 0x4e8b2cu: goto label_4e8b2c;
        case 0x4e8b30u: goto label_4e8b30;
        case 0x4e8b34u: goto label_4e8b34;
        case 0x4e8b38u: goto label_4e8b38;
        case 0x4e8b3cu: goto label_4e8b3c;
        case 0x4e8b40u: goto label_4e8b40;
        case 0x4e8b44u: goto label_4e8b44;
        case 0x4e8b48u: goto label_4e8b48;
        case 0x4e8b4cu: goto label_4e8b4c;
        case 0x4e8b50u: goto label_4e8b50;
        case 0x4e8b54u: goto label_4e8b54;
        case 0x4e8b58u: goto label_4e8b58;
        case 0x4e8b5cu: goto label_4e8b5c;
        case 0x4e8b60u: goto label_4e8b60;
        case 0x4e8b64u: goto label_4e8b64;
        case 0x4e8b68u: goto label_4e8b68;
        case 0x4e8b6cu: goto label_4e8b6c;
        case 0x4e8b70u: goto label_4e8b70;
        case 0x4e8b74u: goto label_4e8b74;
        case 0x4e8b78u: goto label_4e8b78;
        case 0x4e8b7cu: goto label_4e8b7c;
        case 0x4e8b80u: goto label_4e8b80;
        case 0x4e8b84u: goto label_4e8b84;
        case 0x4e8b88u: goto label_4e8b88;
        case 0x4e8b8cu: goto label_4e8b8c;
        case 0x4e8b90u: goto label_4e8b90;
        case 0x4e8b94u: goto label_4e8b94;
        case 0x4e8b98u: goto label_4e8b98;
        case 0x4e8b9cu: goto label_4e8b9c;
        case 0x4e8ba0u: goto label_4e8ba0;
        case 0x4e8ba4u: goto label_4e8ba4;
        case 0x4e8ba8u: goto label_4e8ba8;
        case 0x4e8bacu: goto label_4e8bac;
        case 0x4e8bb0u: goto label_4e8bb0;
        case 0x4e8bb4u: goto label_4e8bb4;
        case 0x4e8bb8u: goto label_4e8bb8;
        case 0x4e8bbcu: goto label_4e8bbc;
        case 0x4e8bc0u: goto label_4e8bc0;
        case 0x4e8bc4u: goto label_4e8bc4;
        case 0x4e8bc8u: goto label_4e8bc8;
        case 0x4e8bccu: goto label_4e8bcc;
        case 0x4e8bd0u: goto label_4e8bd0;
        case 0x4e8bd4u: goto label_4e8bd4;
        case 0x4e8bd8u: goto label_4e8bd8;
        case 0x4e8bdcu: goto label_4e8bdc;
        case 0x4e8be0u: goto label_4e8be0;
        case 0x4e8be4u: goto label_4e8be4;
        case 0x4e8be8u: goto label_4e8be8;
        case 0x4e8becu: goto label_4e8bec;
        case 0x4e8bf0u: goto label_4e8bf0;
        case 0x4e8bf4u: goto label_4e8bf4;
        case 0x4e8bf8u: goto label_4e8bf8;
        case 0x4e8bfcu: goto label_4e8bfc;
        case 0x4e8c00u: goto label_4e8c00;
        case 0x4e8c04u: goto label_4e8c04;
        case 0x4e8c08u: goto label_4e8c08;
        case 0x4e8c0cu: goto label_4e8c0c;
        case 0x4e8c10u: goto label_4e8c10;
        case 0x4e8c14u: goto label_4e8c14;
        case 0x4e8c18u: goto label_4e8c18;
        case 0x4e8c1cu: goto label_4e8c1c;
        case 0x4e8c20u: goto label_4e8c20;
        case 0x4e8c24u: goto label_4e8c24;
        case 0x4e8c28u: goto label_4e8c28;
        case 0x4e8c2cu: goto label_4e8c2c;
        case 0x4e8c30u: goto label_4e8c30;
        case 0x4e8c34u: goto label_4e8c34;
        case 0x4e8c38u: goto label_4e8c38;
        case 0x4e8c3cu: goto label_4e8c3c;
        case 0x4e8c40u: goto label_4e8c40;
        case 0x4e8c44u: goto label_4e8c44;
        case 0x4e8c48u: goto label_4e8c48;
        case 0x4e8c4cu: goto label_4e8c4c;
        case 0x4e8c50u: goto label_4e8c50;
        case 0x4e8c54u: goto label_4e8c54;
        case 0x4e8c58u: goto label_4e8c58;
        case 0x4e8c5cu: goto label_4e8c5c;
        default: break;
    }

    ctx->pc = 0x4e8890u;

label_4e8890:
    // 0x4e8890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e8890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e8894:
    // 0x4e8894: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e8894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e8898:
    // 0x4e8898: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e8898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e889c:
    // 0x4e889c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4e889cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e88a0:
    // 0x4e88a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e88a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e88a4:
    // 0x4e88a4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4e88a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e88a8:
    // 0x4e88a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e88a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e88ac:
    // 0x4e88ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e88acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e88b0:
    // 0x4e88b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e88b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e88b4:
    // 0x4e88b4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e88b8:
    // 0x4e88b8: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_4e88bc:
    if (ctx->pc == 0x4E88BCu) {
        ctx->pc = 0x4E88BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E88B8u;
        // 0x4e88bc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E88C0u;
        goto label_4e88c0;
    }
    ctx->pc = 0x4E88B8u;
    {
        const bool branch_taken_0x4e88b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E88BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E88B8u;
        // 0x4e88bc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e88b8) {
            ctx->pc = 0x4E88DCu;
            goto label_4e88dc;
        }
    }
    ctx->pc = 0x4E88C0u;
label_4e88c0:
    // 0x4e88c0: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_4e88c4:
    if (ctx->pc == 0x4E88C4u) {
        ctx->pc = 0x4E88C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E88C0u;
        // 0x4e88c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E88C8u;
        goto label_4e88c8;
    }
    ctx->pc = 0x4E88C0u;
    {
        const bool branch_taken_0x4e88c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E88C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E88C0u;
        // 0x4e88c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e88c0) {
            ctx->pc = 0x4E88E0u;
            goto label_4e88e0;
        }
    }
    ctx->pc = 0x4E88C8u;
label_4e88c8:
    // 0x4e88c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e88cc:
    // 0x4e88cc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4e88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4e88d0:
    // 0x4e88d0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e88d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e88d4:
    // 0x4e88d4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_4e88d8:
    if (ctx->pc == 0x4E88D8u) {
        ctx->pc = 0x4E88D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E88D4u;
        // 0x4e88d8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E88DCu;
        goto label_4e88dc;
    }
    ctx->pc = 0x4E88D4u;
    {
        const bool branch_taken_0x4e88d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E88D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E88D4u;
        // 0x4e88d8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e88d4) {
            ctx->pc = 0x4E8970u;
            goto label_4e8970;
        }
    }
    ctx->pc = 0x4E88DCu;
label_4e88dc:
    // 0x4e88dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e88e0:
    // 0x4e88e0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e88e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e88e4:
    // 0x4e88e4: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e88e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e88e8:
    // 0x4e88e8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e88e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e88ec:
    // 0x4e88ec: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e88ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e88f0:
    // 0x4e88f0: 0x24a56658  addiu       $a1, $a1, 0x6658
    ctx->pc = 0x4e88f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26200));
label_4e88f4:
    // 0x4e88f4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e88f8:
    // 0x4e88f8: 0x25086660  addiu       $t0, $t0, 0x6660
    ctx->pc = 0x4e88f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26208));
label_4e88fc:
    // 0x4e88fc: 0x254a6688  addiu       $t2, $t2, 0x6688
    ctx->pc = 0x4e88fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 26248));
label_4e8900:
    // 0x4e8900: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e8900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e8904:
    // 0x4e8904: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e8904u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e8908:
    // 0x4e8908: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e8908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e890c:
    // 0x4e890c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e8910:
    // 0x4e8910: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e8910u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e8914:
    // 0x4e8914: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e8914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e8918:
    // 0x4e8918: 0x40f809  jalr        $v0
label_4e891c:
    if (ctx->pc == 0x4E891Cu) {
        ctx->pc = 0x4E891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8918u;
        // 0x4e891c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8920u;
        goto label_4e8920;
    }
    ctx->pc = 0x4E8918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E8920u);
        ctx->pc = 0x4E891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8918u;
        // 0x4e891c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8918u, 0x4E8920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E8920u;
label_4e8920:
    // 0x4e8920: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e8920u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e8924:
    // 0x4e8924: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e8924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e8928:
    // 0x4e8928: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e892c:
    if (ctx->pc == 0x4E892Cu) {
        ctx->pc = 0x4E892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8928u;
        // 0x4e892c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8930u;
        goto label_4e8930;
    }
    ctx->pc = 0x4E8928u;
    {
        const bool branch_taken_0x4e8928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8928u;
        // 0x4e892c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8928) {
            ctx->pc = 0x4E8940u;
            goto label_4e8940;
        }
    }
    ctx->pc = 0x4E8930u;
label_4e8930:
    // 0x4e8930: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e8930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e8934:
    // 0x4e8934: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e8934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e8938:
    // 0x4e8938: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e8938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e893c:
    // 0x4e893c: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e893cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e8940:
    // 0x4e8940: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x4e8940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_4e8944:
    // 0x4e8944: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e8944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e8948:
    // 0x4e8948: 0x56030005  bnel        $s0, $v1, . + 4 + (0x5 << 2)
label_4e894c:
    if (ctx->pc == 0x4E894Cu) {
        ctx->pc = 0x4E894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8948u;
        // 0x4e894c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8950u;
        goto label_4e8950;
    }
    ctx->pc = 0x4E8948u;
    {
        const bool branch_taken_0x4e8948 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e8948) {
            ctx->pc = 0x4E894Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8948u;
            // 0x4e894c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8960u;
            goto label_4e8960;
        }
    }
    ctx->pc = 0x4E8950u;
label_4e8950:
    // 0x4e8950: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x4e8950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_4e8954:
    // 0x4e8954: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e8954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e8958:
    // 0x4e8958: 0x10000022  b           . + 4 + (0x22 << 2)
label_4e895c:
    if (ctx->pc == 0x4E895Cu) {
        ctx->pc = 0x4E895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8958u;
        // 0x4e895c: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8960u;
        goto label_4e8960;
    }
    ctx->pc = 0x4E8958u;
    {
        const bool branch_taken_0x4e8958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8958u;
        // 0x4e895c: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8958) {
            ctx->pc = 0x4E89E4u;
            goto label_4e89e4;
        }
    }
    ctx->pc = 0x4E8960u;
label_4e8960:
    // 0x4e8960: 0x52020020  beql        $s0, $v0, . + 4 + (0x20 << 2)
label_4e8964:
    if (ctx->pc == 0x4E8964u) {
        ctx->pc = 0x4E8964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8960u;
        // 0x4e8964: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8968u;
        goto label_4e8968;
    }
    ctx->pc = 0x4E8960u;
    {
        const bool branch_taken_0x4e8960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e8960) {
            ctx->pc = 0x4E8964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8960u;
            // 0x4e8964: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E89E4u;
            goto label_4e89e4;
        }
    }
    ctx->pc = 0x4E8968u;
label_4e8968:
    // 0x4e8968: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4e896c:
    if (ctx->pc == 0x4E896Cu) {
        ctx->pc = 0x4E896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8968u;
        // 0x4e896c: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8970u;
        goto label_4e8970;
    }
    ctx->pc = 0x4E8968u;
    {
        const bool branch_taken_0x4e8968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8968u;
        // 0x4e896c: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8968) {
            ctx->pc = 0x4E89E8u;
            goto label_4e89e8;
        }
    }
    ctx->pc = 0x4E8970u;
label_4e8970:
    // 0x4e8970: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e8970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e8974:
    // 0x4e8974: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e8974u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e8978:
    // 0x4e8978: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e8978u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e897c:
    // 0x4e897c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e897cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e8980:
    // 0x4e8980: 0x24a56658  addiu       $a1, $a1, 0x6658
    ctx->pc = 0x4e8980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26200));
label_4e8984:
    // 0x4e8984: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e8984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e8988:
    // 0x4e8988: 0x25086660  addiu       $t0, $t0, 0x6660
    ctx->pc = 0x4e8988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26208));
label_4e898c:
    // 0x4e898c: 0x254a6688  addiu       $t2, $t2, 0x6688
    ctx->pc = 0x4e898cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 26248));
label_4e8990:
    // 0x4e8990: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e8990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e8994:
    // 0x4e8994: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e8994u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e8998:
    // 0x4e8998: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e8998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e899c:
    // 0x4e899c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e89a0:
    // 0x4e89a0: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e89a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e89a4:
    // 0x4e89a4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e89a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e89a8:
    // 0x4e89a8: 0x40f809  jalr        $v0
label_4e89ac:
    if (ctx->pc == 0x4E89ACu) {
        ctx->pc = 0x4E89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E89A8u;
        // 0x4e89ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E89B0u;
        goto label_4e89b0;
    }
    ctx->pc = 0x4E89A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E89B0u);
        ctx->pc = 0x4E89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E89A8u;
        // 0x4e89ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E89A8u, 0x4E89B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E89B0u;
label_4e89b0:
    // 0x4e89b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e89b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e89b4:
    // 0x4e89b4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e89b8:
    // 0x4e89b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e89bc:
    if (ctx->pc == 0x4E89BCu) {
        ctx->pc = 0x4E89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E89B8u;
        // 0x4e89bc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E89C0u;
        goto label_4e89c0;
    }
    ctx->pc = 0x4E89B8u;
    {
        const bool branch_taken_0x4e89b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E89B8u;
        // 0x4e89bc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e89b8) {
            ctx->pc = 0x4E89D0u;
            goto label_4e89d0;
        }
    }
    ctx->pc = 0x4E89C0u;
label_4e89c0:
    // 0x4e89c0: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e89c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e89c4:
    // 0x4e89c4: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e89c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e89c8:
    // 0x4e89c8: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e89c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e89cc:
    // 0x4e89cc: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e89ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e89d0:
    // 0x4e89d0: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x4e89d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
label_4e89d4:
    // 0x4e89d4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e89d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e89d8:
    // 0x4e89d8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e89dc:
    // 0x4e89dc: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_4e89e0:
    if (ctx->pc == 0x4E89E0u) {
        ctx->pc = 0x4E89E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E89DCu;
        // 0x4e89e0: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E89E4u;
        goto label_4e89e4;
    }
    ctx->pc = 0x4E89DCu;
    {
        const bool branch_taken_0x4e89dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e89dc) {
            ctx->pc = 0x4E89E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E89DCu;
            // 0x4e89e0: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E89E4u;
            goto label_4e89e4;
        }
    }
    ctx->pc = 0x4E89E4u;
label_4e89e4:
    // 0x4e89e4: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x4e89e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_4e89e8:
    // 0x4e89e8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e89e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e89ec:
    // 0x4e89ec: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x4e89ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_4e89f0:
    // 0x4e89f0: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x4e89f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_4e89f4:
    // 0x4e89f4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e89f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e89f8:
    // 0x4e89f8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4e89f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4e89fc:
    // 0x4e89fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e8a00:
    // 0x4e8a00: 0x10e20088  beq         $a3, $v0, . + 4 + (0x88 << 2)
label_4e8a04:
    if (ctx->pc == 0x4E8A04u) {
        ctx->pc = 0x4E8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8A00u;
        // 0x4e8a04: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8A08u;
        goto label_4e8a08;
    }
    ctx->pc = 0x4E8A00u;
    {
        const bool branch_taken_0x4e8a00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8A00u;
        // 0x4e8a04: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8a00) {
            ctx->pc = 0x4E8C24u;
            goto label_4e8c24;
        }
    }
    ctx->pc = 0x4E8A08u;
label_4e8a08:
    // 0x4e8a08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e8a0c:
    // 0x4e8a0c: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_4e8a10:
    if (ctx->pc == 0x4E8A10u) {
        ctx->pc = 0x4E8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8A0Cu;
        // 0x4e8a10: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8A14u;
        goto label_4e8a14;
    }
    ctx->pc = 0x4E8A0Cu;
    {
        const bool branch_taken_0x4e8a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e8a0c) {
            ctx->pc = 0x4E8A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8A0Cu;
            // 0x4e8a10: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8C28u;
            goto label_4e8c28;
        }
    }
    ctx->pc = 0x4E8A14u;
label_4e8a14:
    // 0x4e8a14: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4e8a14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e8a18:
    // 0x4e8a18: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e8a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e8a1c:
    // 0x4e8a1c: 0x0  nop
    ctx->pc = 0x4e8a1cu;
    // NOP
label_4e8a20:
    // 0x4e8a20: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e8a24:
    // 0x4e8a24: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4e8a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4e8a28:
    // 0x4e8a28: 0x1464003a  bne         $v1, $a0, . + 4 + (0x3A << 2)
label_4e8a2c:
    if (ctx->pc == 0x4E8A2Cu) {
        ctx->pc = 0x4E8A30u;
        goto label_4e8a30;
    }
    ctx->pc = 0x4E8A28u;
    {
        const bool branch_taken_0x4e8a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e8a28) {
            ctx->pc = 0x4E8B14u;
            goto label_4e8b14;
        }
    }
    ctx->pc = 0x4E8A30u;
label_4e8a30:
    // 0x4e8a30: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4e8a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e8a34:
    // 0x4e8a34: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4e8a38:
    if (ctx->pc == 0x4E8A38u) {
        ctx->pc = 0x4E8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8A34u;
        // 0x4e8a38: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8A3Cu;
        goto label_4e8a3c;
    }
    ctx->pc = 0x4E8A34u;
    {
        const bool branch_taken_0x4e8a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8a34) {
            ctx->pc = 0x4E8A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8A34u;
            // 0x4e8a38: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8A54u;
            goto label_4e8a54;
        }
    }
    ctx->pc = 0x4E8A3Cu;
label_4e8a3c:
    // 0x4e8a3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e8a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e8a40:
    // 0x4e8a40: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4e8a44:
    if (ctx->pc == 0x4E8A44u) {
        ctx->pc = 0x4E8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8A40u;
        // 0x4e8a44: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8A48u;
        goto label_4e8a48;
    }
    ctx->pc = 0x4E8A40u;
    {
        const bool branch_taken_0x4e8a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e8a40) {
            ctx->pc = 0x4E8A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8A40u;
            // 0x4e8a44: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8A54u;
            goto label_4e8a54;
        }
    }
    ctx->pc = 0x4E8A48u;
label_4e8a48:
    // 0x4e8a48: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e8a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e8a4c:
    // 0x4e8a4c: 0x10000038  b           . + 4 + (0x38 << 2)
label_4e8a50:
    if (ctx->pc == 0x4E8A50u) {
        ctx->pc = 0x4E8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8A4Cu;
        // 0x4e8a50: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8A54u;
        goto label_4e8a54;
    }
    ctx->pc = 0x4E8A4Cu;
    {
        const bool branch_taken_0x4e8a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8A4Cu;
        // 0x4e8a50: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8a4c) {
            ctx->pc = 0x4E8B30u;
            goto label_4e8b30;
        }
    }
    ctx->pc = 0x4E8A54u;
label_4e8a54:
    // 0x4e8a54: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4e8a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e8a58:
    // 0x4e8a58: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e8a5c:
    if (ctx->pc == 0x4E8A5Cu) {
        ctx->pc = 0x4E8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8A58u;
        // 0x4e8a5c: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8A60u;
        goto label_4e8a60;
    }
    ctx->pc = 0x4E8A58u;
    {
        const bool branch_taken_0x4e8a58 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e8a58) {
            ctx->pc = 0x4E8A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8A58u;
            // 0x4e8a5c: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8AB0u;
            goto label_4e8ab0;
        }
    }
    ctx->pc = 0x4E8A60u;
label_4e8a60:
    // 0x4e8a60: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e8a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e8a64:
    // 0x4e8a64: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e8a64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e8a68:
    // 0x4e8a68: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x4e8a68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_4e8a6c:
    // 0x4e8a6c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e8a70:
    // 0x4e8a70: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e8a74:
    if (ctx->pc == 0x4E8A74u) {
        ctx->pc = 0x4E8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8A70u;
        // 0x4e8a74: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8A78u;
        goto label_4e8a78;
    }
    ctx->pc = 0x4E8A70u;
    {
        const bool branch_taken_0x4e8a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e8a70) {
            ctx->pc = 0x4E8A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8A70u;
            // 0x4e8a74: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8A78u;
            goto label_4e8a78;
        }
    }
    ctx->pc = 0x4E8A78u;
label_4e8a78:
    // 0x4e8a78: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e8a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e8a7c:
    // 0x4e8a7c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e8a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e8a80:
    // 0x4e8a80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e8a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e8a84:
    // 0x4e8a84: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e8a88:
    if (ctx->pc == 0x4E8A88u) {
        ctx->pc = 0x4E8A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8A84u;
        // 0x4e8a88: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8A8Cu;
        goto label_4e8a8c;
    }
    ctx->pc = 0x4E8A84u;
    {
        const bool branch_taken_0x4e8a84 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e8a84) {
            ctx->pc = 0x4E8A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8A84u;
            // 0x4e8a88: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8A94u;
            goto label_4e8a94;
        }
    }
    ctx->pc = 0x4E8A8Cu;
label_4e8a8c:
    // 0x4e8a8c: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e8a90:
    if (ctx->pc == 0x4E8A90u) {
        ctx->pc = 0x4E8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8A8Cu;
        // 0x4e8a90: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8A94u;
        goto label_4e8a94;
    }
    ctx->pc = 0x4E8A8Cu;
    {
        const bool branch_taken_0x4e8a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8A8Cu;
        // 0x4e8a90: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8a8c) {
            ctx->pc = 0x4E8AA4u;
            goto label_4e8aa4;
        }
    }
    ctx->pc = 0x4E8A94u;
label_4e8a94:
    // 0x4e8a94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e8a98:
    // 0x4e8a98: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e8a9c:
    if (ctx->pc == 0x4E8A9Cu) {
        ctx->pc = 0x4E8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8A98u;
        // 0x4e8a9c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8AA0u;
        goto label_4e8aa0;
    }
    ctx->pc = 0x4E8A98u;
    {
        const bool branch_taken_0x4e8a98 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e8a98) {
            ctx->pc = 0x4E8A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8A98u;
            // 0x4e8a9c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8AA4u;
            goto label_4e8aa4;
        }
    }
    ctx->pc = 0x4E8AA0u;
label_4e8aa0:
    // 0x4e8aa0: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4e8aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_4e8aa4:
    // 0x4e8aa4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x4e8aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_4e8aa8:
    // 0x4e8aa8: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e8aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e8aac:
    // 0x4e8aac: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e8aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e8ab0:
    // 0x4e8ab0: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e8ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e8ab4:
    // 0x4e8ab4: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e8ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e8ab8:
    // 0x4e8ab8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e8abc:
    // 0x4e8abc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e8abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e8ac0:
    // 0x4e8ac0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e8ac4:
    // 0x4e8ac4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e8ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e8ac8:
    // 0x4e8ac8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4e8ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e8acc:
    // 0x4e8acc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e8accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e8ad0:
    // 0x4e8ad0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4e8ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4e8ad4:
    // 0x4e8ad4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e8ad8:
    // 0x4e8ad8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e8adc:
    if (ctx->pc == 0x4E8ADCu) {
        ctx->pc = 0x4E8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8AD8u;
        // 0x4e8adc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8AE0u;
        goto label_4e8ae0;
    }
    ctx->pc = 0x4E8AD8u;
    {
        const bool branch_taken_0x4e8ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e8ad8) {
            ctx->pc = 0x4E8ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8AD8u;
            // 0x4e8adc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8AE0u;
            goto label_4e8ae0;
        }
    }
    ctx->pc = 0x4E8AE0u;
label_4e8ae0:
    // 0x4e8ae0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e8ae4:
    // 0x4e8ae4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e8ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e8ae8:
    // 0x4e8ae8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e8ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e8aec:
    // 0x4e8aec: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e8af0:
    if (ctx->pc == 0x4E8AF0u) {
        ctx->pc = 0x4E8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8AECu;
        // 0x4e8af0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8AF4u;
        goto label_4e8af4;
    }
    ctx->pc = 0x4E8AECu;
    {
        const bool branch_taken_0x4e8aec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e8aec) {
            ctx->pc = 0x4E8AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8AECu;
            // 0x4e8af0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8AFCu;
            goto label_4e8afc;
        }
    }
    ctx->pc = 0x4E8AF4u;
label_4e8af4:
    // 0x4e8af4: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e8af8:
    if (ctx->pc == 0x4E8AF8u) {
        ctx->pc = 0x4E8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8AF4u;
        // 0x4e8af8: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8AFCu;
        goto label_4e8afc;
    }
    ctx->pc = 0x4E8AF4u;
    {
        const bool branch_taken_0x4e8af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8AF4u;
        // 0x4e8af8: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8af4) {
            ctx->pc = 0x4E8B0Cu;
            goto label_4e8b0c;
        }
    }
    ctx->pc = 0x4E8AFCu;
label_4e8afc:
    // 0x4e8afc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e8afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e8b00:
    // 0x4e8b00: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e8b04:
    if (ctx->pc == 0x4E8B04u) {
        ctx->pc = 0x4E8B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8B00u;
        // 0x4e8b04: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8B08u;
        goto label_4e8b08;
    }
    ctx->pc = 0x4E8B00u;
    {
        const bool branch_taken_0x4e8b00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e8b00) {
            ctx->pc = 0x4E8B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8B00u;
            // 0x4e8b04: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8B0Cu;
            goto label_4e8b0c;
        }
    }
    ctx->pc = 0x4E8B08u;
label_4e8b08:
    // 0x4e8b08: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x4e8b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_4e8b0c:
    // 0x4e8b0c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e8b10:
    if (ctx->pc == 0x4E8B10u) {
        ctx->pc = 0x4E8B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8B0Cu;
        // 0x4e8b10: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8B14u;
        goto label_4e8b14;
    }
    ctx->pc = 0x4E8B0Cu;
    {
        const bool branch_taken_0x4e8b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8B0Cu;
        // 0x4e8b10: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8b0c) {
            ctx->pc = 0x4E8C04u;
            goto label_4e8c04;
        }
    }
    ctx->pc = 0x4E8B14u;
label_4e8b14:
    // 0x4e8b14: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_4e8b18:
    if (ctx->pc == 0x4E8B18u) {
        ctx->pc = 0x4E8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8B14u;
        // 0x4e8b18: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8B1Cu;
        goto label_4e8b1c;
    }
    ctx->pc = 0x4E8B14u;
    {
        const bool branch_taken_0x4e8b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8b14) {
            ctx->pc = 0x4E8B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8B14u;
            // 0x4e8b18: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8B48u;
            goto label_4e8b48;
        }
    }
    ctx->pc = 0x4E8B1Cu;
label_4e8b1c:
    // 0x4e8b1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4e8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e8b20:
    // 0x4e8b20: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4e8b24:
    if (ctx->pc == 0x4E8B24u) {
        ctx->pc = 0x4E8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8B20u;
        // 0x4e8b24: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8B28u;
        goto label_4e8b28;
    }
    ctx->pc = 0x4E8B20u;
    {
        const bool branch_taken_0x4e8b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e8b20) {
            ctx->pc = 0x4E8B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8B20u;
            // 0x4e8b24: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8B48u;
            goto label_4e8b48;
        }
    }
    ctx->pc = 0x4E8B28u;
label_4e8b28:
    // 0x4e8b28: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x4e8b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_4e8b2c:
    // 0x4e8b2c: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e8b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e8b30:
    // 0x4e8b30: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e8b34:
    // 0x4e8b34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e8b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e8b38:
    // 0x4e8b38: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4e8b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4e8b3c:
    // 0x4e8b3c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e8b40:
    // 0x4e8b40: 0x10000031  b           . + 4 + (0x31 << 2)
label_4e8b44:
    if (ctx->pc == 0x4E8B44u) {
        ctx->pc = 0x4E8B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8B40u;
        // 0x4e8b44: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8B48u;
        goto label_4e8b48;
    }
    ctx->pc = 0x4E8B40u;
    {
        const bool branch_taken_0x4e8b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8B40u;
        // 0x4e8b44: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8b40) {
            ctx->pc = 0x4E8C08u;
            goto label_4e8c08;
        }
    }
    ctx->pc = 0x4E8B48u;
label_4e8b48:
    // 0x4e8b48: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4e8b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e8b4c:
    // 0x4e8b4c: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e8b50:
    if (ctx->pc == 0x4E8B50u) {
        ctx->pc = 0x4E8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8B4Cu;
        // 0x4e8b50: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8B54u;
        goto label_4e8b54;
    }
    ctx->pc = 0x4E8B4Cu;
    {
        const bool branch_taken_0x4e8b4c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e8b4c) {
            ctx->pc = 0x4E8B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8B4Cu;
            // 0x4e8b50: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8BA4u;
            goto label_4e8ba4;
        }
    }
    ctx->pc = 0x4E8B54u;
label_4e8b54:
    // 0x4e8b54: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e8b58:
    // 0x4e8b58: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e8b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e8b5c:
    // 0x4e8b5c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x4e8b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_4e8b60:
    // 0x4e8b60: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e8b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e8b64:
    // 0x4e8b64: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e8b68:
    if (ctx->pc == 0x4E8B68u) {
        ctx->pc = 0x4E8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8B64u;
        // 0x4e8b68: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8B6Cu;
        goto label_4e8b6c;
    }
    ctx->pc = 0x4E8B64u;
    {
        const bool branch_taken_0x4e8b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e8b64) {
            ctx->pc = 0x4E8B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8B64u;
            // 0x4e8b68: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8B6Cu;
            goto label_4e8b6c;
        }
    }
    ctx->pc = 0x4E8B6Cu;
label_4e8b6c:
    // 0x4e8b6c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e8b70:
    // 0x4e8b70: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e8b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e8b74:
    // 0x4e8b74: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e8b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e8b78:
    // 0x4e8b78: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e8b7c:
    if (ctx->pc == 0x4E8B7Cu) {
        ctx->pc = 0x4E8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8B78u;
        // 0x4e8b7c: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8B80u;
        goto label_4e8b80;
    }
    ctx->pc = 0x4E8B78u;
    {
        const bool branch_taken_0x4e8b78 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e8b78) {
            ctx->pc = 0x4E8B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8B78u;
            // 0x4e8b7c: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8B88u;
            goto label_4e8b88;
        }
    }
    ctx->pc = 0x4E8B80u;
label_4e8b80:
    // 0x4e8b80: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e8b84:
    if (ctx->pc == 0x4E8B84u) {
        ctx->pc = 0x4E8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8B80u;
        // 0x4e8b84: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8B88u;
        goto label_4e8b88;
    }
    ctx->pc = 0x4E8B80u;
    {
        const bool branch_taken_0x4e8b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8B80u;
        // 0x4e8b84: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8b80) {
            ctx->pc = 0x4E8B98u;
            goto label_4e8b98;
        }
    }
    ctx->pc = 0x4E8B88u;
label_4e8b88:
    // 0x4e8b88: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e8b8c:
    // 0x4e8b8c: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e8b90:
    if (ctx->pc == 0x4E8B90u) {
        ctx->pc = 0x4E8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8B8Cu;
        // 0x4e8b90: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8B94u;
        goto label_4e8b94;
    }
    ctx->pc = 0x4E8B8Cu;
    {
        const bool branch_taken_0x4e8b8c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e8b8c) {
            ctx->pc = 0x4E8B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8B8Cu;
            // 0x4e8b90: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8B98u;
            goto label_4e8b98;
        }
    }
    ctx->pc = 0x4E8B94u;
label_4e8b94:
    // 0x4e8b94: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4e8b94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_4e8b98:
    // 0x4e8b98: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x4e8b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_4e8b9c:
    // 0x4e8b9c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e8b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e8ba0:
    // 0x4e8ba0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e8ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e8ba4:
    // 0x4e8ba4: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e8ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e8ba8:
    // 0x4e8ba8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e8ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e8bac:
    // 0x4e8bac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e8bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e8bb0:
    // 0x4e8bb0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e8bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e8bb4:
    // 0x4e8bb4: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e8bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e8bb8:
    // 0x4e8bb8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e8bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e8bbc:
    // 0x4e8bbc: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x4e8bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e8bc0:
    // 0x4e8bc0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e8bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e8bc4:
    // 0x4e8bc4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x4e8bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_4e8bc8:
    // 0x4e8bc8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e8bcc:
    // 0x4e8bcc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e8bd0:
    if (ctx->pc == 0x4E8BD0u) {
        ctx->pc = 0x4E8BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8BCCu;
        // 0x4e8bd0: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8BD4u;
        goto label_4e8bd4;
    }
    ctx->pc = 0x4E8BCCu;
    {
        const bool branch_taken_0x4e8bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e8bcc) {
            ctx->pc = 0x4E8BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8BCCu;
            // 0x4e8bd0: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8BD4u;
            goto label_4e8bd4;
        }
    }
    ctx->pc = 0x4E8BD4u;
label_4e8bd4:
    // 0x4e8bd4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e8bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e8bd8:
    // 0x4e8bd8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e8bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e8bdc:
    // 0x4e8bdc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e8bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e8be0:
    // 0x4e8be0: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e8be4:
    if (ctx->pc == 0x4E8BE4u) {
        ctx->pc = 0x4E8BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8BE0u;
        // 0x4e8be4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8BE8u;
        goto label_4e8be8;
    }
    ctx->pc = 0x4E8BE0u;
    {
        const bool branch_taken_0x4e8be0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e8be0) {
            ctx->pc = 0x4E8BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8BE0u;
            // 0x4e8be4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8BF0u;
            goto label_4e8bf0;
        }
    }
    ctx->pc = 0x4E8BE8u;
label_4e8be8:
    // 0x4e8be8: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e8bec:
    if (ctx->pc == 0x4E8BECu) {
        ctx->pc = 0x4E8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8BE8u;
        // 0x4e8bec: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8BF0u;
        goto label_4e8bf0;
    }
    ctx->pc = 0x4E8BE8u;
    {
        const bool branch_taken_0x4e8be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8BE8u;
        // 0x4e8bec: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8be8) {
            ctx->pc = 0x4E8C00u;
            goto label_4e8c00;
        }
    }
    ctx->pc = 0x4E8BF0u;
label_4e8bf0:
    // 0x4e8bf0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e8bf4:
    // 0x4e8bf4: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e8bf8:
    if (ctx->pc == 0x4E8BF8u) {
        ctx->pc = 0x4E8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8BF4u;
        // 0x4e8bf8: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8BFCu;
        goto label_4e8bfc;
    }
    ctx->pc = 0x4E8BF4u;
    {
        const bool branch_taken_0x4e8bf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e8bf4) {
            ctx->pc = 0x4E8BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8BF4u;
            // 0x4e8bf8: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8C00u;
            goto label_4e8c00;
        }
    }
    ctx->pc = 0x4E8BFCu;
label_4e8bfc:
    // 0x4e8bfc: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x4e8bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_4e8c00:
    // 0x4e8c00: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4e8c00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_4e8c04:
    // 0x4e8c04: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4e8c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_4e8c08:
    // 0x4e8c08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e8c0c:
    // 0x4e8c0c: 0x51020006  beql        $t0, $v0, . + 4 + (0x6 << 2)
label_4e8c10:
    if (ctx->pc == 0x4E8C10u) {
        ctx->pc = 0x4E8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8C0Cu;
        // 0x4e8c10: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8C14u;
        goto label_4e8c14;
    }
    ctx->pc = 0x4E8C0Cu;
    {
        const bool branch_taken_0x4e8c0c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e8c0c) {
            ctx->pc = 0x4E8C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8C0Cu;
            // 0x4e8c10: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8C28u;
            goto label_4e8c28;
        }
    }
    ctx->pc = 0x4E8C14u;
label_4e8c14:
    // 0x4e8c14: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e8c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e8c18:
    // 0x4e8c18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e8c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e8c1c:
    // 0x4e8c1c: 0x5060ff80  beql        $v1, $zero, . + 4 + (-0x80 << 2)
label_4e8c20:
    if (ctx->pc == 0x4E8C20u) {
        ctx->pc = 0x4E8C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8C1Cu;
        // 0x4e8c20: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8C24u;
        goto label_4e8c24;
    }
    ctx->pc = 0x4E8C1Cu;
    {
        const bool branch_taken_0x4e8c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8c1c) {
            ctx->pc = 0x4E8C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8C1Cu;
            // 0x4e8c20: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e8a20;
        }
    }
    ctx->pc = 0x4E8C24u;
label_4e8c24:
    // 0x4e8c24: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4e8c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e8c28:
    // 0x4e8c28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e8c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e8c2c:
    // 0x4e8c2c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e8c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e8c30:
    // 0x4e8c30: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e8c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e8c34:
    // 0x4e8c34: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4e8c34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4e8c38:
    // 0x4e8c38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e8c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e8c3c:
    // 0x4e8c3c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4e8c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4e8c40:
    // 0x4e8c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e8c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e8c44:
    // 0x4e8c44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4e8c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4e8c48:
    // 0x4e8c48: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4e8c48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4e8c4c:
    // 0x4e8c4c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e8c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_4e8c50:
    // 0x4e8c50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e8c50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e8c54:
    // 0x4e8c54: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e8c54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e8c58:
    // 0x4e8c58: 0x3e00008  jr          $ra
label_4e8c5c:
    if (ctx->pc == 0x4E8C5Cu) {
        ctx->pc = 0x4E8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8C58u;
        // 0x4e8c5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8C60u;
        goto label_fallthrough_0x4e8c58;
    }
    ctx->pc = 0x4E8C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8C58u;
        // 0x4e8c5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e8c58:
    ctx->pc = 0x4E8C60u;
}
