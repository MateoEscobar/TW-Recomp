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

// Function: sub_004E1A98
// Address: 0x4e1a98 - 0x4e1e68
void sub_004E1A98_0x4e1a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1A98_0x4e1a98");
#endif

    switch (ctx->pc) {
        case 0x4e1a98u: goto label_4e1a98;
        case 0x4e1a9cu: goto label_4e1a9c;
        case 0x4e1aa0u: goto label_4e1aa0;
        case 0x4e1aa4u: goto label_4e1aa4;
        case 0x4e1aa8u: goto label_4e1aa8;
        case 0x4e1aacu: goto label_4e1aac;
        case 0x4e1ab0u: goto label_4e1ab0;
        case 0x4e1ab4u: goto label_4e1ab4;
        case 0x4e1ab8u: goto label_4e1ab8;
        case 0x4e1abcu: goto label_4e1abc;
        case 0x4e1ac0u: goto label_4e1ac0;
        case 0x4e1ac4u: goto label_4e1ac4;
        case 0x4e1ac8u: goto label_4e1ac8;
        case 0x4e1accu: goto label_4e1acc;
        case 0x4e1ad0u: goto label_4e1ad0;
        case 0x4e1ad4u: goto label_4e1ad4;
        case 0x4e1ad8u: goto label_4e1ad8;
        case 0x4e1adcu: goto label_4e1adc;
        case 0x4e1ae0u: goto label_4e1ae0;
        case 0x4e1ae4u: goto label_4e1ae4;
        case 0x4e1ae8u: goto label_4e1ae8;
        case 0x4e1aecu: goto label_4e1aec;
        case 0x4e1af0u: goto label_4e1af0;
        case 0x4e1af4u: goto label_4e1af4;
        case 0x4e1af8u: goto label_4e1af8;
        case 0x4e1afcu: goto label_4e1afc;
        case 0x4e1b00u: goto label_4e1b00;
        case 0x4e1b04u: goto label_4e1b04;
        case 0x4e1b08u: goto label_4e1b08;
        case 0x4e1b0cu: goto label_4e1b0c;
        case 0x4e1b10u: goto label_4e1b10;
        case 0x4e1b14u: goto label_4e1b14;
        case 0x4e1b18u: goto label_4e1b18;
        case 0x4e1b1cu: goto label_4e1b1c;
        case 0x4e1b20u: goto label_4e1b20;
        case 0x4e1b24u: goto label_4e1b24;
        case 0x4e1b28u: goto label_4e1b28;
        case 0x4e1b2cu: goto label_4e1b2c;
        case 0x4e1b30u: goto label_4e1b30;
        case 0x4e1b34u: goto label_4e1b34;
        case 0x4e1b38u: goto label_4e1b38;
        case 0x4e1b3cu: goto label_4e1b3c;
        case 0x4e1b40u: goto label_4e1b40;
        case 0x4e1b44u: goto label_4e1b44;
        case 0x4e1b48u: goto label_4e1b48;
        case 0x4e1b4cu: goto label_4e1b4c;
        case 0x4e1b50u: goto label_4e1b50;
        case 0x4e1b54u: goto label_4e1b54;
        case 0x4e1b58u: goto label_4e1b58;
        case 0x4e1b5cu: goto label_4e1b5c;
        case 0x4e1b60u: goto label_4e1b60;
        case 0x4e1b64u: goto label_4e1b64;
        case 0x4e1b68u: goto label_4e1b68;
        case 0x4e1b6cu: goto label_4e1b6c;
        case 0x4e1b70u: goto label_4e1b70;
        case 0x4e1b74u: goto label_4e1b74;
        case 0x4e1b78u: goto label_4e1b78;
        case 0x4e1b7cu: goto label_4e1b7c;
        case 0x4e1b80u: goto label_4e1b80;
        case 0x4e1b84u: goto label_4e1b84;
        case 0x4e1b88u: goto label_4e1b88;
        case 0x4e1b8cu: goto label_4e1b8c;
        case 0x4e1b90u: goto label_4e1b90;
        case 0x4e1b94u: goto label_4e1b94;
        case 0x4e1b98u: goto label_4e1b98;
        case 0x4e1b9cu: goto label_4e1b9c;
        case 0x4e1ba0u: goto label_4e1ba0;
        case 0x4e1ba4u: goto label_4e1ba4;
        case 0x4e1ba8u: goto label_4e1ba8;
        case 0x4e1bacu: goto label_4e1bac;
        case 0x4e1bb0u: goto label_4e1bb0;
        case 0x4e1bb4u: goto label_4e1bb4;
        case 0x4e1bb8u: goto label_4e1bb8;
        case 0x4e1bbcu: goto label_4e1bbc;
        case 0x4e1bc0u: goto label_4e1bc0;
        case 0x4e1bc4u: goto label_4e1bc4;
        case 0x4e1bc8u: goto label_4e1bc8;
        case 0x4e1bccu: goto label_4e1bcc;
        case 0x4e1bd0u: goto label_4e1bd0;
        case 0x4e1bd4u: goto label_4e1bd4;
        case 0x4e1bd8u: goto label_4e1bd8;
        case 0x4e1bdcu: goto label_4e1bdc;
        case 0x4e1be0u: goto label_4e1be0;
        case 0x4e1be4u: goto label_4e1be4;
        case 0x4e1be8u: goto label_4e1be8;
        case 0x4e1becu: goto label_4e1bec;
        case 0x4e1bf0u: goto label_4e1bf0;
        case 0x4e1bf4u: goto label_4e1bf4;
        case 0x4e1bf8u: goto label_4e1bf8;
        case 0x4e1bfcu: goto label_4e1bfc;
        case 0x4e1c00u: goto label_4e1c00;
        case 0x4e1c04u: goto label_4e1c04;
        case 0x4e1c08u: goto label_4e1c08;
        case 0x4e1c0cu: goto label_4e1c0c;
        case 0x4e1c10u: goto label_4e1c10;
        case 0x4e1c14u: goto label_4e1c14;
        case 0x4e1c18u: goto label_4e1c18;
        case 0x4e1c1cu: goto label_4e1c1c;
        case 0x4e1c20u: goto label_4e1c20;
        case 0x4e1c24u: goto label_4e1c24;
        case 0x4e1c28u: goto label_4e1c28;
        case 0x4e1c2cu: goto label_4e1c2c;
        case 0x4e1c30u: goto label_4e1c30;
        case 0x4e1c34u: goto label_4e1c34;
        case 0x4e1c38u: goto label_4e1c38;
        case 0x4e1c3cu: goto label_4e1c3c;
        case 0x4e1c40u: goto label_4e1c40;
        case 0x4e1c44u: goto label_4e1c44;
        case 0x4e1c48u: goto label_4e1c48;
        case 0x4e1c4cu: goto label_4e1c4c;
        case 0x4e1c50u: goto label_4e1c50;
        case 0x4e1c54u: goto label_4e1c54;
        case 0x4e1c58u: goto label_4e1c58;
        case 0x4e1c5cu: goto label_4e1c5c;
        case 0x4e1c60u: goto label_4e1c60;
        case 0x4e1c64u: goto label_4e1c64;
        case 0x4e1c68u: goto label_4e1c68;
        case 0x4e1c6cu: goto label_4e1c6c;
        case 0x4e1c70u: goto label_4e1c70;
        case 0x4e1c74u: goto label_4e1c74;
        case 0x4e1c78u: goto label_4e1c78;
        case 0x4e1c7cu: goto label_4e1c7c;
        case 0x4e1c80u: goto label_4e1c80;
        case 0x4e1c84u: goto label_4e1c84;
        case 0x4e1c88u: goto label_4e1c88;
        case 0x4e1c8cu: goto label_4e1c8c;
        case 0x4e1c90u: goto label_4e1c90;
        case 0x4e1c94u: goto label_4e1c94;
        case 0x4e1c98u: goto label_4e1c98;
        case 0x4e1c9cu: goto label_4e1c9c;
        case 0x4e1ca0u: goto label_4e1ca0;
        case 0x4e1ca4u: goto label_4e1ca4;
        case 0x4e1ca8u: goto label_4e1ca8;
        case 0x4e1cacu: goto label_4e1cac;
        case 0x4e1cb0u: goto label_4e1cb0;
        case 0x4e1cb4u: goto label_4e1cb4;
        case 0x4e1cb8u: goto label_4e1cb8;
        case 0x4e1cbcu: goto label_4e1cbc;
        case 0x4e1cc0u: goto label_4e1cc0;
        case 0x4e1cc4u: goto label_4e1cc4;
        case 0x4e1cc8u: goto label_4e1cc8;
        case 0x4e1cccu: goto label_4e1ccc;
        case 0x4e1cd0u: goto label_4e1cd0;
        case 0x4e1cd4u: goto label_4e1cd4;
        case 0x4e1cd8u: goto label_4e1cd8;
        case 0x4e1cdcu: goto label_4e1cdc;
        case 0x4e1ce0u: goto label_4e1ce0;
        case 0x4e1ce4u: goto label_4e1ce4;
        case 0x4e1ce8u: goto label_4e1ce8;
        case 0x4e1cecu: goto label_4e1cec;
        case 0x4e1cf0u: goto label_4e1cf0;
        case 0x4e1cf4u: goto label_4e1cf4;
        case 0x4e1cf8u: goto label_4e1cf8;
        case 0x4e1cfcu: goto label_4e1cfc;
        case 0x4e1d00u: goto label_4e1d00;
        case 0x4e1d04u: goto label_4e1d04;
        case 0x4e1d08u: goto label_4e1d08;
        case 0x4e1d0cu: goto label_4e1d0c;
        case 0x4e1d10u: goto label_4e1d10;
        case 0x4e1d14u: goto label_4e1d14;
        case 0x4e1d18u: goto label_4e1d18;
        case 0x4e1d1cu: goto label_4e1d1c;
        case 0x4e1d20u: goto label_4e1d20;
        case 0x4e1d24u: goto label_4e1d24;
        case 0x4e1d28u: goto label_4e1d28;
        case 0x4e1d2cu: goto label_4e1d2c;
        case 0x4e1d30u: goto label_4e1d30;
        case 0x4e1d34u: goto label_4e1d34;
        case 0x4e1d38u: goto label_4e1d38;
        case 0x4e1d3cu: goto label_4e1d3c;
        case 0x4e1d40u: goto label_4e1d40;
        case 0x4e1d44u: goto label_4e1d44;
        case 0x4e1d48u: goto label_4e1d48;
        case 0x4e1d4cu: goto label_4e1d4c;
        case 0x4e1d50u: goto label_4e1d50;
        case 0x4e1d54u: goto label_4e1d54;
        case 0x4e1d58u: goto label_4e1d58;
        case 0x4e1d5cu: goto label_4e1d5c;
        case 0x4e1d60u: goto label_4e1d60;
        case 0x4e1d64u: goto label_4e1d64;
        case 0x4e1d68u: goto label_4e1d68;
        case 0x4e1d6cu: goto label_4e1d6c;
        case 0x4e1d70u: goto label_4e1d70;
        case 0x4e1d74u: goto label_4e1d74;
        case 0x4e1d78u: goto label_4e1d78;
        case 0x4e1d7cu: goto label_4e1d7c;
        case 0x4e1d80u: goto label_4e1d80;
        case 0x4e1d84u: goto label_4e1d84;
        case 0x4e1d88u: goto label_4e1d88;
        case 0x4e1d8cu: goto label_4e1d8c;
        case 0x4e1d90u: goto label_4e1d90;
        case 0x4e1d94u: goto label_4e1d94;
        case 0x4e1d98u: goto label_4e1d98;
        case 0x4e1d9cu: goto label_4e1d9c;
        case 0x4e1da0u: goto label_4e1da0;
        case 0x4e1da4u: goto label_4e1da4;
        case 0x4e1da8u: goto label_4e1da8;
        case 0x4e1dacu: goto label_4e1dac;
        case 0x4e1db0u: goto label_4e1db0;
        case 0x4e1db4u: goto label_4e1db4;
        case 0x4e1db8u: goto label_4e1db8;
        case 0x4e1dbcu: goto label_4e1dbc;
        case 0x4e1dc0u: goto label_4e1dc0;
        case 0x4e1dc4u: goto label_4e1dc4;
        case 0x4e1dc8u: goto label_4e1dc8;
        case 0x4e1dccu: goto label_4e1dcc;
        case 0x4e1dd0u: goto label_4e1dd0;
        case 0x4e1dd4u: goto label_4e1dd4;
        case 0x4e1dd8u: goto label_4e1dd8;
        case 0x4e1ddcu: goto label_4e1ddc;
        case 0x4e1de0u: goto label_4e1de0;
        case 0x4e1de4u: goto label_4e1de4;
        case 0x4e1de8u: goto label_4e1de8;
        case 0x4e1decu: goto label_4e1dec;
        case 0x4e1df0u: goto label_4e1df0;
        case 0x4e1df4u: goto label_4e1df4;
        case 0x4e1df8u: goto label_4e1df8;
        case 0x4e1dfcu: goto label_4e1dfc;
        case 0x4e1e00u: goto label_4e1e00;
        case 0x4e1e04u: goto label_4e1e04;
        case 0x4e1e08u: goto label_4e1e08;
        case 0x4e1e0cu: goto label_4e1e0c;
        case 0x4e1e10u: goto label_4e1e10;
        case 0x4e1e14u: goto label_4e1e14;
        case 0x4e1e18u: goto label_4e1e18;
        case 0x4e1e1cu: goto label_4e1e1c;
        case 0x4e1e20u: goto label_4e1e20;
        case 0x4e1e24u: goto label_4e1e24;
        case 0x4e1e28u: goto label_4e1e28;
        case 0x4e1e2cu: goto label_4e1e2c;
        case 0x4e1e30u: goto label_4e1e30;
        case 0x4e1e34u: goto label_4e1e34;
        case 0x4e1e38u: goto label_4e1e38;
        case 0x4e1e3cu: goto label_4e1e3c;
        case 0x4e1e40u: goto label_4e1e40;
        case 0x4e1e44u: goto label_4e1e44;
        case 0x4e1e48u: goto label_4e1e48;
        case 0x4e1e4cu: goto label_4e1e4c;
        case 0x4e1e50u: goto label_4e1e50;
        case 0x4e1e54u: goto label_4e1e54;
        case 0x4e1e58u: goto label_4e1e58;
        case 0x4e1e5cu: goto label_4e1e5c;
        case 0x4e1e60u: goto label_4e1e60;
        case 0x4e1e64u: goto label_4e1e64;
        default: break;
    }

    ctx->pc = 0x4e1a98u;

label_4e1a98:
    // 0x4e1a98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e1a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e1a9c:
    // 0x4e1a9c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e1a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e1aa0:
    // 0x4e1aa0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e1aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e1aa4:
    // 0x4e1aa4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4e1aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e1aa8:
    // 0x4e1aa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e1aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e1aac:
    // 0x4e1aac: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4e1aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e1ab0:
    // 0x4e1ab0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e1ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e1ab4:
    // 0x4e1ab4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e1ab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e1ab8:
    // 0x4e1ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e1ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e1abc:
    // 0x4e1abc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e1abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e1ac0:
    // 0x4e1ac0: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_4e1ac4:
    if (ctx->pc == 0x4E1AC4u) {
        ctx->pc = 0x4E1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1AC0u;
        // 0x4e1ac4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1AC8u;
        goto label_4e1ac8;
    }
    ctx->pc = 0x4E1AC0u;
    {
        const bool branch_taken_0x4e1ac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1AC0u;
        // 0x4e1ac4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1ac0) {
            ctx->pc = 0x4E1AE4u;
            goto label_4e1ae4;
        }
    }
    ctx->pc = 0x4E1AC8u;
label_4e1ac8:
    // 0x4e1ac8: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_4e1acc:
    if (ctx->pc == 0x4E1ACCu) {
        ctx->pc = 0x4E1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1AC8u;
        // 0x4e1acc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1AD0u;
        goto label_4e1ad0;
    }
    ctx->pc = 0x4E1AC8u;
    {
        const bool branch_taken_0x4e1ac8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1AC8u;
        // 0x4e1acc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1ac8) {
            ctx->pc = 0x4E1AE8u;
            goto label_4e1ae8;
        }
    }
    ctx->pc = 0x4E1AD0u;
label_4e1ad0:
    // 0x4e1ad0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e1ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e1ad4:
    // 0x4e1ad4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4e1ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4e1ad8:
    // 0x4e1ad8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e1ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e1adc:
    // 0x4e1adc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_4e1ae0:
    if (ctx->pc == 0x4E1AE0u) {
        ctx->pc = 0x4E1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1ADCu;
        // 0x4e1ae0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1AE4u;
        goto label_4e1ae4;
    }
    ctx->pc = 0x4E1ADCu;
    {
        const bool branch_taken_0x4e1adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1ADCu;
        // 0x4e1ae0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1adc) {
            ctx->pc = 0x4E1B78u;
            goto label_4e1b78;
        }
    }
    ctx->pc = 0x4E1AE4u;
label_4e1ae4:
    // 0x4e1ae4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e1ae8:
    // 0x4e1ae8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e1ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e1aec:
    // 0x4e1aec: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e1aecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e1af0:
    // 0x4e1af0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e1af0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e1af4:
    // 0x4e1af4: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e1af4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e1af8:
    // 0x4e1af8: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4e1af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4e1afc:
    // 0x4e1afc: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e1afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e1b00:
    // 0x4e1b00: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4e1b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4e1b04:
    // 0x4e1b04: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4e1b04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4e1b08:
    // 0x4e1b08: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e1b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e1b0c:
    // 0x4e1b0c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e1b0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e1b10:
    // 0x4e1b10: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e1b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e1b14:
    // 0x4e1b14: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e1b18:
    // 0x4e1b18: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e1b18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e1b1c:
    // 0x4e1b1c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e1b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e1b20:
    // 0x4e1b20: 0x40f809  jalr        $v0
label_4e1b24:
    if (ctx->pc == 0x4E1B24u) {
        ctx->pc = 0x4E1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1B20u;
        // 0x4e1b24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1B28u;
        goto label_4e1b28;
    }
    ctx->pc = 0x4E1B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E1B28u);
        ctx->pc = 0x4E1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1B20u;
        // 0x4e1b24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1B20u, 0x4E1B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E1B28u;
label_4e1b28:
    // 0x4e1b28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e1b28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e1b2c:
    // 0x4e1b2c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e1b30:
    // 0x4e1b30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e1b34:
    if (ctx->pc == 0x4E1B34u) {
        ctx->pc = 0x4E1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1B30u;
        // 0x4e1b34: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1B38u;
        goto label_4e1b38;
    }
    ctx->pc = 0x4E1B30u;
    {
        const bool branch_taken_0x4e1b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1B30u;
        // 0x4e1b34: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1b30) {
            ctx->pc = 0x4E1B48u;
            goto label_4e1b48;
        }
    }
    ctx->pc = 0x4E1B38u;
label_4e1b38:
    // 0x4e1b38: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e1b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e1b3c:
    // 0x4e1b3c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e1b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e1b40:
    // 0x4e1b40: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e1b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e1b44:
    // 0x4e1b44: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e1b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e1b48:
    // 0x4e1b48: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x4e1b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_4e1b4c:
    // 0x4e1b4c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e1b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e1b50:
    // 0x4e1b50: 0x56030005  bnel        $s0, $v1, . + 4 + (0x5 << 2)
label_4e1b54:
    if (ctx->pc == 0x4E1B54u) {
        ctx->pc = 0x4E1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1B50u;
        // 0x4e1b54: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1B58u;
        goto label_4e1b58;
    }
    ctx->pc = 0x4E1B50u;
    {
        const bool branch_taken_0x4e1b50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e1b50) {
            ctx->pc = 0x4E1B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1B50u;
            // 0x4e1b54: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1B68u;
            goto label_4e1b68;
        }
    }
    ctx->pc = 0x4E1B58u;
label_4e1b58:
    // 0x4e1b58: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x4e1b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_4e1b5c:
    // 0x4e1b5c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e1b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e1b60:
    // 0x4e1b60: 0x10000022  b           . + 4 + (0x22 << 2)
label_4e1b64:
    if (ctx->pc == 0x4E1B64u) {
        ctx->pc = 0x4E1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1B60u;
        // 0x4e1b64: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1B68u;
        goto label_4e1b68;
    }
    ctx->pc = 0x4E1B60u;
    {
        const bool branch_taken_0x4e1b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1B60u;
        // 0x4e1b64: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1b60) {
            ctx->pc = 0x4E1BECu;
            goto label_4e1bec;
        }
    }
    ctx->pc = 0x4E1B68u;
label_4e1b68:
    // 0x4e1b68: 0x52020020  beql        $s0, $v0, . + 4 + (0x20 << 2)
label_4e1b6c:
    if (ctx->pc == 0x4E1B6Cu) {
        ctx->pc = 0x4E1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1B68u;
        // 0x4e1b6c: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1B70u;
        goto label_4e1b70;
    }
    ctx->pc = 0x4E1B68u;
    {
        const bool branch_taken_0x4e1b68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e1b68) {
            ctx->pc = 0x4E1B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1B68u;
            // 0x4e1b6c: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1BECu;
            goto label_4e1bec;
        }
    }
    ctx->pc = 0x4E1B70u;
label_4e1b70:
    // 0x4e1b70: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4e1b74:
    if (ctx->pc == 0x4E1B74u) {
        ctx->pc = 0x4E1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1B70u;
        // 0x4e1b74: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1B78u;
        goto label_4e1b78;
    }
    ctx->pc = 0x4E1B70u;
    {
        const bool branch_taken_0x4e1b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1B70u;
        // 0x4e1b74: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1b70) {
            ctx->pc = 0x4E1BF0u;
            goto label_4e1bf0;
        }
    }
    ctx->pc = 0x4E1B78u;
label_4e1b78:
    // 0x4e1b78: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e1b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e1b7c:
    // 0x4e1b7c: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e1b7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e1b80:
    // 0x4e1b80: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e1b80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e1b84:
    // 0x4e1b84: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e1b84u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e1b88:
    // 0x4e1b88: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4e1b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4e1b8c:
    // 0x4e1b8c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e1b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e1b90:
    // 0x4e1b90: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4e1b90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4e1b94:
    // 0x4e1b94: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4e1b94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4e1b98:
    // 0x4e1b98: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e1b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e1b9c:
    // 0x4e1b9c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e1b9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e1ba0:
    // 0x4e1ba0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e1ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e1ba4:
    // 0x4e1ba4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e1ba8:
    // 0x4e1ba8: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e1ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e1bac:
    // 0x4e1bac: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e1bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e1bb0:
    // 0x4e1bb0: 0x40f809  jalr        $v0
label_4e1bb4:
    if (ctx->pc == 0x4E1BB4u) {
        ctx->pc = 0x4E1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1BB0u;
        // 0x4e1bb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1BB8u;
        goto label_4e1bb8;
    }
    ctx->pc = 0x4E1BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E1BB8u);
        ctx->pc = 0x4E1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1BB0u;
        // 0x4e1bb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1BB0u, 0x4E1BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E1BB8u;
label_4e1bb8:
    // 0x4e1bb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e1bb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e1bbc:
    // 0x4e1bbc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e1bc0:
    // 0x4e1bc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e1bc4:
    if (ctx->pc == 0x4E1BC4u) {
        ctx->pc = 0x4E1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1BC0u;
        // 0x4e1bc4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1BC8u;
        goto label_4e1bc8;
    }
    ctx->pc = 0x4E1BC0u;
    {
        const bool branch_taken_0x4e1bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1BC0u;
        // 0x4e1bc4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1bc0) {
            ctx->pc = 0x4E1BD8u;
            goto label_4e1bd8;
        }
    }
    ctx->pc = 0x4E1BC8u;
label_4e1bc8:
    // 0x4e1bc8: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e1bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e1bcc:
    // 0x4e1bcc: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e1bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e1bd0:
    // 0x4e1bd0: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e1bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e1bd4:
    // 0x4e1bd4: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e1bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e1bd8:
    // 0x4e1bd8: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x4e1bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
label_4e1bdc:
    // 0x4e1bdc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e1bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e1be0:
    // 0x4e1be0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e1be4:
    // 0x4e1be4: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_4e1be8:
    if (ctx->pc == 0x4E1BE8u) {
        ctx->pc = 0x4E1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1BE4u;
        // 0x4e1be8: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1BECu;
        goto label_4e1bec;
    }
    ctx->pc = 0x4E1BE4u;
    {
        const bool branch_taken_0x4e1be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e1be4) {
            ctx->pc = 0x4E1BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1BE4u;
            // 0x4e1be8: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1BECu;
            goto label_4e1bec;
        }
    }
    ctx->pc = 0x4E1BECu;
label_4e1bec:
    // 0x4e1bec: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x4e1becu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_4e1bf0:
    // 0x4e1bf0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e1bf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e1bf4:
    // 0x4e1bf4: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x4e1bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_4e1bf8:
    // 0x4e1bf8: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x4e1bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_4e1bfc:
    // 0x4e1bfc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e1bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e1c00:
    // 0x4e1c00: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4e1c00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4e1c04:
    // 0x4e1c04: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e1c08:
    // 0x4e1c08: 0x10e20088  beq         $a3, $v0, . + 4 + (0x88 << 2)
label_4e1c0c:
    if (ctx->pc == 0x4E1C0Cu) {
        ctx->pc = 0x4E1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1C08u;
        // 0x4e1c0c: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1C10u;
        goto label_4e1c10;
    }
    ctx->pc = 0x4E1C08u;
    {
        const bool branch_taken_0x4e1c08 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1C08u;
        // 0x4e1c0c: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1c08) {
            ctx->pc = 0x4E1E2Cu;
            goto label_4e1e2c;
        }
    }
    ctx->pc = 0x4E1C10u;
label_4e1c10:
    // 0x4e1c10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e1c14:
    // 0x4e1c14: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_4e1c18:
    if (ctx->pc == 0x4E1C18u) {
        ctx->pc = 0x4E1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1C14u;
        // 0x4e1c18: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1C1Cu;
        goto label_4e1c1c;
    }
    ctx->pc = 0x4E1C14u;
    {
        const bool branch_taken_0x4e1c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1c14) {
            ctx->pc = 0x4E1C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1C14u;
            // 0x4e1c18: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1E30u;
            goto label_4e1e30;
        }
    }
    ctx->pc = 0x4E1C1Cu;
label_4e1c1c:
    // 0x4e1c1c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4e1c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e1c20:
    // 0x4e1c20: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1c24:
    // 0x4e1c24: 0x0  nop
    ctx->pc = 0x4e1c24u;
    // NOP
label_4e1c28:
    // 0x4e1c28: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e1c2c:
    // 0x4e1c2c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4e1c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4e1c30:
    // 0x4e1c30: 0x1464003a  bne         $v1, $a0, . + 4 + (0x3A << 2)
label_4e1c34:
    if (ctx->pc == 0x4E1C34u) {
        ctx->pc = 0x4E1C38u;
        goto label_4e1c38;
    }
    ctx->pc = 0x4E1C30u;
    {
        const bool branch_taken_0x4e1c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e1c30) {
            ctx->pc = 0x4E1D1Cu;
            goto label_4e1d1c;
        }
    }
    ctx->pc = 0x4E1C38u;
label_4e1c38:
    // 0x4e1c38: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4e1c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e1c3c:
    // 0x4e1c3c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4e1c40:
    if (ctx->pc == 0x4E1C40u) {
        ctx->pc = 0x4E1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1C3Cu;
        // 0x4e1c40: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1C44u;
        goto label_4e1c44;
    }
    ctx->pc = 0x4E1C3Cu;
    {
        const bool branch_taken_0x4e1c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1c3c) {
            ctx->pc = 0x4E1C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1C3Cu;
            // 0x4e1c40: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1C5Cu;
            goto label_4e1c5c;
        }
    }
    ctx->pc = 0x4E1C44u;
label_4e1c44:
    // 0x4e1c44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e1c48:
    // 0x4e1c48: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4e1c4c:
    if (ctx->pc == 0x4E1C4Cu) {
        ctx->pc = 0x4E1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1C48u;
        // 0x4e1c4c: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1C50u;
        goto label_4e1c50;
    }
    ctx->pc = 0x4E1C48u;
    {
        const bool branch_taken_0x4e1c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1c48) {
            ctx->pc = 0x4E1C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1C48u;
            // 0x4e1c4c: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1C5Cu;
            goto label_4e1c5c;
        }
    }
    ctx->pc = 0x4E1C50u;
label_4e1c50:
    // 0x4e1c50: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e1c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e1c54:
    // 0x4e1c54: 0x10000038  b           . + 4 + (0x38 << 2)
label_4e1c58:
    if (ctx->pc == 0x4E1C58u) {
        ctx->pc = 0x4E1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1C54u;
        // 0x4e1c58: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1C5Cu;
        goto label_4e1c5c;
    }
    ctx->pc = 0x4E1C54u;
    {
        const bool branch_taken_0x4e1c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1C54u;
        // 0x4e1c58: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1c54) {
            ctx->pc = 0x4E1D38u;
            goto label_4e1d38;
        }
    }
    ctx->pc = 0x4E1C5Cu;
label_4e1c5c:
    // 0x4e1c5c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4e1c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e1c60:
    // 0x4e1c60: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e1c64:
    if (ctx->pc == 0x4E1C64u) {
        ctx->pc = 0x4E1C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1C60u;
        // 0x4e1c64: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1C68u;
        goto label_4e1c68;
    }
    ctx->pc = 0x4E1C60u;
    {
        const bool branch_taken_0x4e1c60 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e1c60) {
            ctx->pc = 0x4E1C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1C60u;
            // 0x4e1c64: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1CB8u;
            goto label_4e1cb8;
        }
    }
    ctx->pc = 0x4E1C68u;
label_4e1c68:
    // 0x4e1c68: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e1c6c:
    // 0x4e1c6c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e1c6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e1c70:
    // 0x4e1c70: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x4e1c70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_4e1c74:
    // 0x4e1c74: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e1c78:
    // 0x4e1c78: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e1c7c:
    if (ctx->pc == 0x4E1C7Cu) {
        ctx->pc = 0x4E1C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1C78u;
        // 0x4e1c7c: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1C80u;
        goto label_4e1c80;
    }
    ctx->pc = 0x4E1C78u;
    {
        const bool branch_taken_0x4e1c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1c78) {
            ctx->pc = 0x4E1C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1C78u;
            // 0x4e1c7c: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1C80u;
            goto label_4e1c80;
        }
    }
    ctx->pc = 0x4E1C80u;
label_4e1c80:
    // 0x4e1c80: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1c84:
    // 0x4e1c84: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e1c84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e1c88:
    // 0x4e1c88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e1c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e1c8c:
    // 0x4e1c8c: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e1c90:
    if (ctx->pc == 0x4E1C90u) {
        ctx->pc = 0x4E1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1C8Cu;
        // 0x4e1c90: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1C94u;
        goto label_4e1c94;
    }
    ctx->pc = 0x4E1C8Cu;
    {
        const bool branch_taken_0x4e1c8c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e1c8c) {
            ctx->pc = 0x4E1C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1C8Cu;
            // 0x4e1c90: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1C9Cu;
            goto label_4e1c9c;
        }
    }
    ctx->pc = 0x4E1C94u;
label_4e1c94:
    // 0x4e1c94: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e1c98:
    if (ctx->pc == 0x4E1C98u) {
        ctx->pc = 0x4E1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1C94u;
        // 0x4e1c98: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1C9Cu;
        goto label_4e1c9c;
    }
    ctx->pc = 0x4E1C94u;
    {
        const bool branch_taken_0x4e1c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1C94u;
        // 0x4e1c98: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1c94) {
            ctx->pc = 0x4E1CACu;
            goto label_4e1cac;
        }
    }
    ctx->pc = 0x4E1C9Cu;
label_4e1c9c:
    // 0x4e1c9c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e1c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e1ca0:
    // 0x4e1ca0: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e1ca4:
    if (ctx->pc == 0x4E1CA4u) {
        ctx->pc = 0x4E1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1CA0u;
        // 0x4e1ca4: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1CA8u;
        goto label_4e1ca8;
    }
    ctx->pc = 0x4E1CA0u;
    {
        const bool branch_taken_0x4e1ca0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e1ca0) {
            ctx->pc = 0x4E1CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1CA0u;
            // 0x4e1ca4: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1CACu;
            goto label_4e1cac;
        }
    }
    ctx->pc = 0x4E1CA8u;
label_4e1ca8:
    // 0x4e1ca8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4e1ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_4e1cac:
    // 0x4e1cac: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x4e1cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_4e1cb0:
    // 0x4e1cb0: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e1cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e1cb4:
    // 0x4e1cb4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1cb8:
    // 0x4e1cb8: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e1cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e1cbc:
    // 0x4e1cbc: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e1cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1cc0:
    // 0x4e1cc0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e1cc4:
    // 0x4e1cc4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e1cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e1cc8:
    // 0x4e1cc8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e1cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1ccc:
    // 0x4e1ccc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e1cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e1cd0:
    // 0x4e1cd0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4e1cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e1cd4:
    // 0x4e1cd4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e1cd8:
    // 0x4e1cd8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4e1cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4e1cdc:
    // 0x4e1cdc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e1ce0:
    // 0x4e1ce0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e1ce4:
    if (ctx->pc == 0x4E1CE4u) {
        ctx->pc = 0x4E1CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1CE0u;
        // 0x4e1ce4: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1CE8u;
        goto label_4e1ce8;
    }
    ctx->pc = 0x4E1CE0u;
    {
        const bool branch_taken_0x4e1ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1ce0) {
            ctx->pc = 0x4E1CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1CE0u;
            // 0x4e1ce4: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1CE8u;
            goto label_4e1ce8;
        }
    }
    ctx->pc = 0x4E1CE8u;
label_4e1ce8:
    // 0x4e1ce8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e1ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e1cec:
    // 0x4e1cec: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e1cecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e1cf0:
    // 0x4e1cf0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e1cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e1cf4:
    // 0x4e1cf4: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e1cf8:
    if (ctx->pc == 0x4E1CF8u) {
        ctx->pc = 0x4E1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1CF4u;
        // 0x4e1cf8: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1CFCu;
        goto label_4e1cfc;
    }
    ctx->pc = 0x4E1CF4u;
    {
        const bool branch_taken_0x4e1cf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e1cf4) {
            ctx->pc = 0x4E1CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1CF4u;
            // 0x4e1cf8: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1D04u;
            goto label_4e1d04;
        }
    }
    ctx->pc = 0x4E1CFCu;
label_4e1cfc:
    // 0x4e1cfc: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e1d00:
    if (ctx->pc == 0x4E1D00u) {
        ctx->pc = 0x4E1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1CFCu;
        // 0x4e1d00: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1D04u;
        goto label_4e1d04;
    }
    ctx->pc = 0x4E1CFCu;
    {
        const bool branch_taken_0x4e1cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1CFCu;
        // 0x4e1d00: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1cfc) {
            ctx->pc = 0x4E1D14u;
            goto label_4e1d14;
        }
    }
    ctx->pc = 0x4E1D04u;
label_4e1d04:
    // 0x4e1d04: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e1d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e1d08:
    // 0x4e1d08: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e1d0c:
    if (ctx->pc == 0x4E1D0Cu) {
        ctx->pc = 0x4E1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D08u;
        // 0x4e1d0c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1D10u;
        goto label_4e1d10;
    }
    ctx->pc = 0x4E1D08u;
    {
        const bool branch_taken_0x4e1d08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e1d08) {
            ctx->pc = 0x4E1D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1D08u;
            // 0x4e1d0c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1D14u;
            goto label_4e1d14;
        }
    }
    ctx->pc = 0x4E1D10u;
label_4e1d10:
    // 0x4e1d10: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x4e1d10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_4e1d14:
    // 0x4e1d14: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e1d18:
    if (ctx->pc == 0x4E1D18u) {
        ctx->pc = 0x4E1D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D14u;
        // 0x4e1d18: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1D1Cu;
        goto label_4e1d1c;
    }
    ctx->pc = 0x4E1D14u;
    {
        const bool branch_taken_0x4e1d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D14u;
        // 0x4e1d18: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1d14) {
            ctx->pc = 0x4E1E0Cu;
            goto label_4e1e0c;
        }
    }
    ctx->pc = 0x4E1D1Cu;
label_4e1d1c:
    // 0x4e1d1c: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_4e1d20:
    if (ctx->pc == 0x4E1D20u) {
        ctx->pc = 0x4E1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D1Cu;
        // 0x4e1d20: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1D24u;
        goto label_4e1d24;
    }
    ctx->pc = 0x4E1D1Cu;
    {
        const bool branch_taken_0x4e1d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1d1c) {
            ctx->pc = 0x4E1D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1D1Cu;
            // 0x4e1d20: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1D50u;
            goto label_4e1d50;
        }
    }
    ctx->pc = 0x4E1D24u;
label_4e1d24:
    // 0x4e1d24: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4e1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e1d28:
    // 0x4e1d28: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4e1d2c:
    if (ctx->pc == 0x4E1D2Cu) {
        ctx->pc = 0x4E1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D28u;
        // 0x4e1d2c: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1D30u;
        goto label_4e1d30;
    }
    ctx->pc = 0x4E1D28u;
    {
        const bool branch_taken_0x4e1d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1d28) {
            ctx->pc = 0x4E1D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1D28u;
            // 0x4e1d2c: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1D50u;
            goto label_4e1d50;
        }
    }
    ctx->pc = 0x4E1D30u;
label_4e1d30:
    // 0x4e1d30: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x4e1d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_4e1d34:
    // 0x4e1d34: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e1d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e1d38:
    // 0x4e1d38: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1d3c:
    // 0x4e1d3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e1d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e1d40:
    // 0x4e1d40: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4e1d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4e1d44:
    // 0x4e1d44: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1d48:
    // 0x4e1d48: 0x10000031  b           . + 4 + (0x31 << 2)
label_4e1d4c:
    if (ctx->pc == 0x4E1D4Cu) {
        ctx->pc = 0x4E1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D48u;
        // 0x4e1d4c: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1D50u;
        goto label_4e1d50;
    }
    ctx->pc = 0x4E1D48u;
    {
        const bool branch_taken_0x4e1d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D48u;
        // 0x4e1d4c: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1d48) {
            ctx->pc = 0x4E1E10u;
            goto label_4e1e10;
        }
    }
    ctx->pc = 0x4E1D50u;
label_4e1d50:
    // 0x4e1d50: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4e1d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e1d54:
    // 0x4e1d54: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e1d58:
    if (ctx->pc == 0x4E1D58u) {
        ctx->pc = 0x4E1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D54u;
        // 0x4e1d58: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1D5Cu;
        goto label_4e1d5c;
    }
    ctx->pc = 0x4E1D54u;
    {
        const bool branch_taken_0x4e1d54 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e1d54) {
            ctx->pc = 0x4E1D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1D54u;
            // 0x4e1d58: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1DACu;
            goto label_4e1dac;
        }
    }
    ctx->pc = 0x4E1D5Cu;
label_4e1d5c:
    // 0x4e1d5c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e1d60:
    // 0x4e1d60: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e1d60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e1d64:
    // 0x4e1d64: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x4e1d64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_4e1d68:
    // 0x4e1d68: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e1d6c:
    // 0x4e1d6c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e1d70:
    if (ctx->pc == 0x4E1D70u) {
        ctx->pc = 0x4E1D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D6Cu;
        // 0x4e1d70: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1D74u;
        goto label_4e1d74;
    }
    ctx->pc = 0x4E1D6Cu;
    {
        const bool branch_taken_0x4e1d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1d6c) {
            ctx->pc = 0x4E1D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1D6Cu;
            // 0x4e1d70: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1D74u;
            goto label_4e1d74;
        }
    }
    ctx->pc = 0x4E1D74u;
label_4e1d74:
    // 0x4e1d74: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e1d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1d78:
    // 0x4e1d78: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e1d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e1d7c:
    // 0x4e1d7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e1d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e1d80:
    // 0x4e1d80: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e1d84:
    if (ctx->pc == 0x4E1D84u) {
        ctx->pc = 0x4E1D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D80u;
        // 0x4e1d84: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1D88u;
        goto label_4e1d88;
    }
    ctx->pc = 0x4E1D80u;
    {
        const bool branch_taken_0x4e1d80 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e1d80) {
            ctx->pc = 0x4E1D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1D80u;
            // 0x4e1d84: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1D90u;
            goto label_4e1d90;
        }
    }
    ctx->pc = 0x4E1D88u;
label_4e1d88:
    // 0x4e1d88: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e1d8c:
    if (ctx->pc == 0x4E1D8Cu) {
        ctx->pc = 0x4E1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D88u;
        // 0x4e1d8c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1D90u;
        goto label_4e1d90;
    }
    ctx->pc = 0x4E1D88u;
    {
        const bool branch_taken_0x4e1d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D88u;
        // 0x4e1d8c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1d88) {
            ctx->pc = 0x4E1DA0u;
            goto label_4e1da0;
        }
    }
    ctx->pc = 0x4E1D90u;
label_4e1d90:
    // 0x4e1d90: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e1d94:
    // 0x4e1d94: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e1d98:
    if (ctx->pc == 0x4E1D98u) {
        ctx->pc = 0x4E1D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D94u;
        // 0x4e1d98: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1D9Cu;
        goto label_4e1d9c;
    }
    ctx->pc = 0x4E1D94u;
    {
        const bool branch_taken_0x4e1d94 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e1d94) {
            ctx->pc = 0x4E1D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1D94u;
            // 0x4e1d98: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1DA0u;
            goto label_4e1da0;
        }
    }
    ctx->pc = 0x4E1D9Cu;
label_4e1d9c:
    // 0x4e1d9c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4e1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_4e1da0:
    // 0x4e1da0: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x4e1da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_4e1da4:
    // 0x4e1da4: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e1da4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e1da8:
    // 0x4e1da8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1dac:
    // 0x4e1dac: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e1dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e1db0:
    // 0x4e1db0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e1db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1db4:
    // 0x4e1db4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e1db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e1db8:
    // 0x4e1db8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e1db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e1dbc:
    // 0x4e1dbc: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e1dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1dc0:
    // 0x4e1dc0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e1dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e1dc4:
    // 0x4e1dc4: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x4e1dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e1dc8:
    // 0x4e1dc8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e1dcc:
    // 0x4e1dcc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x4e1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_4e1dd0:
    // 0x4e1dd0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e1dd4:
    // 0x4e1dd4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e1dd8:
    if (ctx->pc == 0x4E1DD8u) {
        ctx->pc = 0x4E1DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1DD4u;
        // 0x4e1dd8: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1DDCu;
        goto label_4e1ddc;
    }
    ctx->pc = 0x4E1DD4u;
    {
        const bool branch_taken_0x4e1dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1dd4) {
            ctx->pc = 0x4E1DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1DD4u;
            // 0x4e1dd8: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1DDCu;
            goto label_4e1ddc;
        }
    }
    ctx->pc = 0x4E1DDCu;
label_4e1ddc:
    // 0x4e1ddc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e1ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e1de0:
    // 0x4e1de0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e1de0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e1de4:
    // 0x4e1de4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e1de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e1de8:
    // 0x4e1de8: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e1dec:
    if (ctx->pc == 0x4E1DECu) {
        ctx->pc = 0x4E1DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1DE8u;
        // 0x4e1dec: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1DF0u;
        goto label_4e1df0;
    }
    ctx->pc = 0x4E1DE8u;
    {
        const bool branch_taken_0x4e1de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e1de8) {
            ctx->pc = 0x4E1DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1DE8u;
            // 0x4e1dec: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1DF8u;
            goto label_4e1df8;
        }
    }
    ctx->pc = 0x4E1DF0u;
label_4e1df0:
    // 0x4e1df0: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e1df4:
    if (ctx->pc == 0x4E1DF4u) {
        ctx->pc = 0x4E1DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1DF0u;
        // 0x4e1df4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1DF8u;
        goto label_4e1df8;
    }
    ctx->pc = 0x4E1DF0u;
    {
        const bool branch_taken_0x4e1df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1DF0u;
        // 0x4e1df4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1df0) {
            ctx->pc = 0x4E1E08u;
            goto label_4e1e08;
        }
    }
    ctx->pc = 0x4E1DF8u;
label_4e1df8:
    // 0x4e1df8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e1df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e1dfc:
    // 0x4e1dfc: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e1e00:
    if (ctx->pc == 0x4E1E00u) {
        ctx->pc = 0x4E1E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1DFCu;
        // 0x4e1e00: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1E04u;
        goto label_4e1e04;
    }
    ctx->pc = 0x4E1DFCu;
    {
        const bool branch_taken_0x4e1dfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e1dfc) {
            ctx->pc = 0x4E1E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1DFCu;
            // 0x4e1e00: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1E08u;
            goto label_4e1e08;
        }
    }
    ctx->pc = 0x4E1E04u;
label_4e1e04:
    // 0x4e1e04: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x4e1e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_4e1e08:
    // 0x4e1e08: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4e1e08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_4e1e0c:
    // 0x4e1e0c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4e1e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_4e1e10:
    // 0x4e1e10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e1e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e1e14:
    // 0x4e1e14: 0x51020006  beql        $t0, $v0, . + 4 + (0x6 << 2)
label_4e1e18:
    if (ctx->pc == 0x4E1E18u) {
        ctx->pc = 0x4E1E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1E14u;
        // 0x4e1e18: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1E1Cu;
        goto label_4e1e1c;
    }
    ctx->pc = 0x4E1E14u;
    {
        const bool branch_taken_0x4e1e14 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e1e14) {
            ctx->pc = 0x4E1E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1E14u;
            // 0x4e1e18: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1E30u;
            goto label_4e1e30;
        }
    }
    ctx->pc = 0x4E1E1Cu;
label_4e1e1c:
    // 0x4e1e1c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e1e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e1e20:
    // 0x4e1e20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e1e24:
    // 0x4e1e24: 0x5060ff80  beql        $v1, $zero, . + 4 + (-0x80 << 2)
label_4e1e28:
    if (ctx->pc == 0x4E1E28u) {
        ctx->pc = 0x4E1E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1E24u;
        // 0x4e1e28: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1E2Cu;
        goto label_4e1e2c;
    }
    ctx->pc = 0x4E1E24u;
    {
        const bool branch_taken_0x4e1e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1e24) {
            ctx->pc = 0x4E1E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1E24u;
            // 0x4e1e28: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e1c28;
        }
    }
    ctx->pc = 0x4E1E2Cu;
label_4e1e2c:
    // 0x4e1e2c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4e1e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e1e30:
    // 0x4e1e30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e1e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e1e34:
    // 0x4e1e34: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e1e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e1e38:
    // 0x4e1e38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e1e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e1e3c:
    // 0x4e1e3c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4e1e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4e1e40:
    // 0x4e1e40: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e1e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e1e44:
    // 0x4e1e44: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4e1e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4e1e48:
    // 0x4e1e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e1e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e1e4c:
    // 0x4e1e4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4e1e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4e1e50:
    // 0x4e1e50: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4e1e50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4e1e54:
    // 0x4e1e54: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e1e54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_4e1e58:
    // 0x4e1e58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e1e58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e1e5c:
    // 0x4e1e5c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e1e5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1e60:
    // 0x4e1e60: 0x3e00008  jr          $ra
label_4e1e64:
    if (ctx->pc == 0x4E1E64u) {
        ctx->pc = 0x4E1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1E60u;
        // 0x4e1e64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E1E68u;
        goto label_fallthrough_0x4e1e60;
    }
    ctx->pc = 0x4E1E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1E60u;
        // 0x4e1e64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e1e60:
    ctx->pc = 0x4E1E68u;
}
