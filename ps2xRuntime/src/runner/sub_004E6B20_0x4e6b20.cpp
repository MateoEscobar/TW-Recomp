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

// Function: sub_004E6B20
// Address: 0x4e6b20 - 0x4e6ef0
void sub_004E6B20_0x4e6b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6B20_0x4e6b20");
#endif

    switch (ctx->pc) {
        case 0x4e6b20u: goto label_4e6b20;
        case 0x4e6b24u: goto label_4e6b24;
        case 0x4e6b28u: goto label_4e6b28;
        case 0x4e6b2cu: goto label_4e6b2c;
        case 0x4e6b30u: goto label_4e6b30;
        case 0x4e6b34u: goto label_4e6b34;
        case 0x4e6b38u: goto label_4e6b38;
        case 0x4e6b3cu: goto label_4e6b3c;
        case 0x4e6b40u: goto label_4e6b40;
        case 0x4e6b44u: goto label_4e6b44;
        case 0x4e6b48u: goto label_4e6b48;
        case 0x4e6b4cu: goto label_4e6b4c;
        case 0x4e6b50u: goto label_4e6b50;
        case 0x4e6b54u: goto label_4e6b54;
        case 0x4e6b58u: goto label_4e6b58;
        case 0x4e6b5cu: goto label_4e6b5c;
        case 0x4e6b60u: goto label_4e6b60;
        case 0x4e6b64u: goto label_4e6b64;
        case 0x4e6b68u: goto label_4e6b68;
        case 0x4e6b6cu: goto label_4e6b6c;
        case 0x4e6b70u: goto label_4e6b70;
        case 0x4e6b74u: goto label_4e6b74;
        case 0x4e6b78u: goto label_4e6b78;
        case 0x4e6b7cu: goto label_4e6b7c;
        case 0x4e6b80u: goto label_4e6b80;
        case 0x4e6b84u: goto label_4e6b84;
        case 0x4e6b88u: goto label_4e6b88;
        case 0x4e6b8cu: goto label_4e6b8c;
        case 0x4e6b90u: goto label_4e6b90;
        case 0x4e6b94u: goto label_4e6b94;
        case 0x4e6b98u: goto label_4e6b98;
        case 0x4e6b9cu: goto label_4e6b9c;
        case 0x4e6ba0u: goto label_4e6ba0;
        case 0x4e6ba4u: goto label_4e6ba4;
        case 0x4e6ba8u: goto label_4e6ba8;
        case 0x4e6bacu: goto label_4e6bac;
        case 0x4e6bb0u: goto label_4e6bb0;
        case 0x4e6bb4u: goto label_4e6bb4;
        case 0x4e6bb8u: goto label_4e6bb8;
        case 0x4e6bbcu: goto label_4e6bbc;
        case 0x4e6bc0u: goto label_4e6bc0;
        case 0x4e6bc4u: goto label_4e6bc4;
        case 0x4e6bc8u: goto label_4e6bc8;
        case 0x4e6bccu: goto label_4e6bcc;
        case 0x4e6bd0u: goto label_4e6bd0;
        case 0x4e6bd4u: goto label_4e6bd4;
        case 0x4e6bd8u: goto label_4e6bd8;
        case 0x4e6bdcu: goto label_4e6bdc;
        case 0x4e6be0u: goto label_4e6be0;
        case 0x4e6be4u: goto label_4e6be4;
        case 0x4e6be8u: goto label_4e6be8;
        case 0x4e6becu: goto label_4e6bec;
        case 0x4e6bf0u: goto label_4e6bf0;
        case 0x4e6bf4u: goto label_4e6bf4;
        case 0x4e6bf8u: goto label_4e6bf8;
        case 0x4e6bfcu: goto label_4e6bfc;
        case 0x4e6c00u: goto label_4e6c00;
        case 0x4e6c04u: goto label_4e6c04;
        case 0x4e6c08u: goto label_4e6c08;
        case 0x4e6c0cu: goto label_4e6c0c;
        case 0x4e6c10u: goto label_4e6c10;
        case 0x4e6c14u: goto label_4e6c14;
        case 0x4e6c18u: goto label_4e6c18;
        case 0x4e6c1cu: goto label_4e6c1c;
        case 0x4e6c20u: goto label_4e6c20;
        case 0x4e6c24u: goto label_4e6c24;
        case 0x4e6c28u: goto label_4e6c28;
        case 0x4e6c2cu: goto label_4e6c2c;
        case 0x4e6c30u: goto label_4e6c30;
        case 0x4e6c34u: goto label_4e6c34;
        case 0x4e6c38u: goto label_4e6c38;
        case 0x4e6c3cu: goto label_4e6c3c;
        case 0x4e6c40u: goto label_4e6c40;
        case 0x4e6c44u: goto label_4e6c44;
        case 0x4e6c48u: goto label_4e6c48;
        case 0x4e6c4cu: goto label_4e6c4c;
        case 0x4e6c50u: goto label_4e6c50;
        case 0x4e6c54u: goto label_4e6c54;
        case 0x4e6c58u: goto label_4e6c58;
        case 0x4e6c5cu: goto label_4e6c5c;
        case 0x4e6c60u: goto label_4e6c60;
        case 0x4e6c64u: goto label_4e6c64;
        case 0x4e6c68u: goto label_4e6c68;
        case 0x4e6c6cu: goto label_4e6c6c;
        case 0x4e6c70u: goto label_4e6c70;
        case 0x4e6c74u: goto label_4e6c74;
        case 0x4e6c78u: goto label_4e6c78;
        case 0x4e6c7cu: goto label_4e6c7c;
        case 0x4e6c80u: goto label_4e6c80;
        case 0x4e6c84u: goto label_4e6c84;
        case 0x4e6c88u: goto label_4e6c88;
        case 0x4e6c8cu: goto label_4e6c8c;
        case 0x4e6c90u: goto label_4e6c90;
        case 0x4e6c94u: goto label_4e6c94;
        case 0x4e6c98u: goto label_4e6c98;
        case 0x4e6c9cu: goto label_4e6c9c;
        case 0x4e6ca0u: goto label_4e6ca0;
        case 0x4e6ca4u: goto label_4e6ca4;
        case 0x4e6ca8u: goto label_4e6ca8;
        case 0x4e6cacu: goto label_4e6cac;
        case 0x4e6cb0u: goto label_4e6cb0;
        case 0x4e6cb4u: goto label_4e6cb4;
        case 0x4e6cb8u: goto label_4e6cb8;
        case 0x4e6cbcu: goto label_4e6cbc;
        case 0x4e6cc0u: goto label_4e6cc0;
        case 0x4e6cc4u: goto label_4e6cc4;
        case 0x4e6cc8u: goto label_4e6cc8;
        case 0x4e6cccu: goto label_4e6ccc;
        case 0x4e6cd0u: goto label_4e6cd0;
        case 0x4e6cd4u: goto label_4e6cd4;
        case 0x4e6cd8u: goto label_4e6cd8;
        case 0x4e6cdcu: goto label_4e6cdc;
        case 0x4e6ce0u: goto label_4e6ce0;
        case 0x4e6ce4u: goto label_4e6ce4;
        case 0x4e6ce8u: goto label_4e6ce8;
        case 0x4e6cecu: goto label_4e6cec;
        case 0x4e6cf0u: goto label_4e6cf0;
        case 0x4e6cf4u: goto label_4e6cf4;
        case 0x4e6cf8u: goto label_4e6cf8;
        case 0x4e6cfcu: goto label_4e6cfc;
        case 0x4e6d00u: goto label_4e6d00;
        case 0x4e6d04u: goto label_4e6d04;
        case 0x4e6d08u: goto label_4e6d08;
        case 0x4e6d0cu: goto label_4e6d0c;
        case 0x4e6d10u: goto label_4e6d10;
        case 0x4e6d14u: goto label_4e6d14;
        case 0x4e6d18u: goto label_4e6d18;
        case 0x4e6d1cu: goto label_4e6d1c;
        case 0x4e6d20u: goto label_4e6d20;
        case 0x4e6d24u: goto label_4e6d24;
        case 0x4e6d28u: goto label_4e6d28;
        case 0x4e6d2cu: goto label_4e6d2c;
        case 0x4e6d30u: goto label_4e6d30;
        case 0x4e6d34u: goto label_4e6d34;
        case 0x4e6d38u: goto label_4e6d38;
        case 0x4e6d3cu: goto label_4e6d3c;
        case 0x4e6d40u: goto label_4e6d40;
        case 0x4e6d44u: goto label_4e6d44;
        case 0x4e6d48u: goto label_4e6d48;
        case 0x4e6d4cu: goto label_4e6d4c;
        case 0x4e6d50u: goto label_4e6d50;
        case 0x4e6d54u: goto label_4e6d54;
        case 0x4e6d58u: goto label_4e6d58;
        case 0x4e6d5cu: goto label_4e6d5c;
        case 0x4e6d60u: goto label_4e6d60;
        case 0x4e6d64u: goto label_4e6d64;
        case 0x4e6d68u: goto label_4e6d68;
        case 0x4e6d6cu: goto label_4e6d6c;
        case 0x4e6d70u: goto label_4e6d70;
        case 0x4e6d74u: goto label_4e6d74;
        case 0x4e6d78u: goto label_4e6d78;
        case 0x4e6d7cu: goto label_4e6d7c;
        case 0x4e6d80u: goto label_4e6d80;
        case 0x4e6d84u: goto label_4e6d84;
        case 0x4e6d88u: goto label_4e6d88;
        case 0x4e6d8cu: goto label_4e6d8c;
        case 0x4e6d90u: goto label_4e6d90;
        case 0x4e6d94u: goto label_4e6d94;
        case 0x4e6d98u: goto label_4e6d98;
        case 0x4e6d9cu: goto label_4e6d9c;
        case 0x4e6da0u: goto label_4e6da0;
        case 0x4e6da4u: goto label_4e6da4;
        case 0x4e6da8u: goto label_4e6da8;
        case 0x4e6dacu: goto label_4e6dac;
        case 0x4e6db0u: goto label_4e6db0;
        case 0x4e6db4u: goto label_4e6db4;
        case 0x4e6db8u: goto label_4e6db8;
        case 0x4e6dbcu: goto label_4e6dbc;
        case 0x4e6dc0u: goto label_4e6dc0;
        case 0x4e6dc4u: goto label_4e6dc4;
        case 0x4e6dc8u: goto label_4e6dc8;
        case 0x4e6dccu: goto label_4e6dcc;
        case 0x4e6dd0u: goto label_4e6dd0;
        case 0x4e6dd4u: goto label_4e6dd4;
        case 0x4e6dd8u: goto label_4e6dd8;
        case 0x4e6ddcu: goto label_4e6ddc;
        case 0x4e6de0u: goto label_4e6de0;
        case 0x4e6de4u: goto label_4e6de4;
        case 0x4e6de8u: goto label_4e6de8;
        case 0x4e6decu: goto label_4e6dec;
        case 0x4e6df0u: goto label_4e6df0;
        case 0x4e6df4u: goto label_4e6df4;
        case 0x4e6df8u: goto label_4e6df8;
        case 0x4e6dfcu: goto label_4e6dfc;
        case 0x4e6e00u: goto label_4e6e00;
        case 0x4e6e04u: goto label_4e6e04;
        case 0x4e6e08u: goto label_4e6e08;
        case 0x4e6e0cu: goto label_4e6e0c;
        case 0x4e6e10u: goto label_4e6e10;
        case 0x4e6e14u: goto label_4e6e14;
        case 0x4e6e18u: goto label_4e6e18;
        case 0x4e6e1cu: goto label_4e6e1c;
        case 0x4e6e20u: goto label_4e6e20;
        case 0x4e6e24u: goto label_4e6e24;
        case 0x4e6e28u: goto label_4e6e28;
        case 0x4e6e2cu: goto label_4e6e2c;
        case 0x4e6e30u: goto label_4e6e30;
        case 0x4e6e34u: goto label_4e6e34;
        case 0x4e6e38u: goto label_4e6e38;
        case 0x4e6e3cu: goto label_4e6e3c;
        case 0x4e6e40u: goto label_4e6e40;
        case 0x4e6e44u: goto label_4e6e44;
        case 0x4e6e48u: goto label_4e6e48;
        case 0x4e6e4cu: goto label_4e6e4c;
        case 0x4e6e50u: goto label_4e6e50;
        case 0x4e6e54u: goto label_4e6e54;
        case 0x4e6e58u: goto label_4e6e58;
        case 0x4e6e5cu: goto label_4e6e5c;
        case 0x4e6e60u: goto label_4e6e60;
        case 0x4e6e64u: goto label_4e6e64;
        case 0x4e6e68u: goto label_4e6e68;
        case 0x4e6e6cu: goto label_4e6e6c;
        case 0x4e6e70u: goto label_4e6e70;
        case 0x4e6e74u: goto label_4e6e74;
        case 0x4e6e78u: goto label_4e6e78;
        case 0x4e6e7cu: goto label_4e6e7c;
        case 0x4e6e80u: goto label_4e6e80;
        case 0x4e6e84u: goto label_4e6e84;
        case 0x4e6e88u: goto label_4e6e88;
        case 0x4e6e8cu: goto label_4e6e8c;
        case 0x4e6e90u: goto label_4e6e90;
        case 0x4e6e94u: goto label_4e6e94;
        case 0x4e6e98u: goto label_4e6e98;
        case 0x4e6e9cu: goto label_4e6e9c;
        case 0x4e6ea0u: goto label_4e6ea0;
        case 0x4e6ea4u: goto label_4e6ea4;
        case 0x4e6ea8u: goto label_4e6ea8;
        case 0x4e6eacu: goto label_4e6eac;
        case 0x4e6eb0u: goto label_4e6eb0;
        case 0x4e6eb4u: goto label_4e6eb4;
        case 0x4e6eb8u: goto label_4e6eb8;
        case 0x4e6ebcu: goto label_4e6ebc;
        case 0x4e6ec0u: goto label_4e6ec0;
        case 0x4e6ec4u: goto label_4e6ec4;
        case 0x4e6ec8u: goto label_4e6ec8;
        case 0x4e6eccu: goto label_4e6ecc;
        case 0x4e6ed0u: goto label_4e6ed0;
        case 0x4e6ed4u: goto label_4e6ed4;
        case 0x4e6ed8u: goto label_4e6ed8;
        case 0x4e6edcu: goto label_4e6edc;
        case 0x4e6ee0u: goto label_4e6ee0;
        case 0x4e6ee4u: goto label_4e6ee4;
        case 0x4e6ee8u: goto label_4e6ee8;
        case 0x4e6eecu: goto label_4e6eec;
        default: break;
    }

    ctx->pc = 0x4e6b20u;

label_4e6b20:
    // 0x4e6b20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e6b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e6b24:
    // 0x4e6b24: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e6b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e6b28:
    // 0x4e6b28: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e6b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e6b2c:
    // 0x4e6b2c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4e6b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e6b30:
    // 0x4e6b30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e6b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e6b34:
    // 0x4e6b34: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4e6b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e6b38:
    // 0x4e6b38: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e6b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e6b3c:
    // 0x4e6b3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e6b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e6b40:
    // 0x4e6b40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e6b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e6b44:
    // 0x4e6b44: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e6b48:
    // 0x4e6b48: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_4e6b4c:
    if (ctx->pc == 0x4E6B4Cu) {
        ctx->pc = 0x4E6B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6B48u;
        // 0x4e6b4c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6B50u;
        goto label_4e6b50;
    }
    ctx->pc = 0x4E6B48u;
    {
        const bool branch_taken_0x4e6b48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E6B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6B48u;
        // 0x4e6b4c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6b48) {
            ctx->pc = 0x4E6B6Cu;
            goto label_4e6b6c;
        }
    }
    ctx->pc = 0x4E6B50u;
label_4e6b50:
    // 0x4e6b50: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_4e6b54:
    if (ctx->pc == 0x4E6B54u) {
        ctx->pc = 0x4E6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6B50u;
        // 0x4e6b54: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6B58u;
        goto label_4e6b58;
    }
    ctx->pc = 0x4E6B50u;
    {
        const bool branch_taken_0x4e6b50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6B50u;
        // 0x4e6b54: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6b50) {
            ctx->pc = 0x4E6B70u;
            goto label_4e6b70;
        }
    }
    ctx->pc = 0x4E6B58u;
label_4e6b58:
    // 0x4e6b58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e6b5c:
    // 0x4e6b5c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4e6b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4e6b60:
    // 0x4e6b60: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e6b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e6b64:
    // 0x4e6b64: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_4e6b68:
    if (ctx->pc == 0x4E6B68u) {
        ctx->pc = 0x4E6B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6B64u;
        // 0x4e6b68: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6B6Cu;
        goto label_4e6b6c;
    }
    ctx->pc = 0x4E6B64u;
    {
        const bool branch_taken_0x4e6b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6B64u;
        // 0x4e6b68: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6b64) {
            ctx->pc = 0x4E6C00u;
            goto label_4e6c00;
        }
    }
    ctx->pc = 0x4E6B6Cu;
label_4e6b6c:
    // 0x4e6b6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e6b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e6b70:
    // 0x4e6b70: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e6b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e6b74:
    // 0x4e6b74: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e6b74u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e6b78:
    // 0x4e6b78: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e6b78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e6b7c:
    // 0x4e6b7c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e6b7cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e6b80:
    // 0x4e6b80: 0x24a553e0  addiu       $a1, $a1, 0x53E0
    ctx->pc = 0x4e6b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21472));
label_4e6b84:
    // 0x4e6b84: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e6b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e6b88:
    // 0x4e6b88: 0x250853e8  addiu       $t0, $t0, 0x53E8
    ctx->pc = 0x4e6b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21480));
label_4e6b8c:
    // 0x4e6b8c: 0x254a5410  addiu       $t2, $t2, 0x5410
    ctx->pc = 0x4e6b8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 21520));
label_4e6b90:
    // 0x4e6b90: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e6b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e6b94:
    // 0x4e6b94: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e6b94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e6b98:
    // 0x4e6b98: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e6b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e6b9c:
    // 0x4e6b9c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e6ba0:
    // 0x4e6ba0: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e6ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e6ba4:
    // 0x4e6ba4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e6ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e6ba8:
    // 0x4e6ba8: 0x40f809  jalr        $v0
label_4e6bac:
    if (ctx->pc == 0x4E6BACu) {
        ctx->pc = 0x4E6BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6BA8u;
        // 0x4e6bac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6BB0u;
        goto label_4e6bb0;
    }
    ctx->pc = 0x4E6BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E6BB0u);
        ctx->pc = 0x4E6BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6BA8u;
        // 0x4e6bac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6BA8u, 0x4E6BB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E6BB0u;
label_4e6bb0:
    // 0x4e6bb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e6bb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e6bb4:
    // 0x4e6bb4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e6bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e6bb8:
    // 0x4e6bb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e6bbc:
    if (ctx->pc == 0x4E6BBCu) {
        ctx->pc = 0x4E6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6BB8u;
        // 0x4e6bbc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6BC0u;
        goto label_4e6bc0;
    }
    ctx->pc = 0x4E6BB8u;
    {
        const bool branch_taken_0x4e6bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6BB8u;
        // 0x4e6bbc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6bb8) {
            ctx->pc = 0x4E6BD0u;
            goto label_4e6bd0;
        }
    }
    ctx->pc = 0x4E6BC0u;
label_4e6bc0:
    // 0x4e6bc0: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e6bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e6bc4:
    // 0x4e6bc4: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e6bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e6bc8:
    // 0x4e6bc8: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e6bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e6bcc:
    // 0x4e6bcc: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e6bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e6bd0:
    // 0x4e6bd0: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x4e6bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_4e6bd4:
    // 0x4e6bd4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e6bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e6bd8:
    // 0x4e6bd8: 0x56030005  bnel        $s0, $v1, . + 4 + (0x5 << 2)
label_4e6bdc:
    if (ctx->pc == 0x4E6BDCu) {
        ctx->pc = 0x4E6BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6BD8u;
        // 0x4e6bdc: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6BE0u;
        goto label_4e6be0;
    }
    ctx->pc = 0x4E6BD8u;
    {
        const bool branch_taken_0x4e6bd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e6bd8) {
            ctx->pc = 0x4E6BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6BD8u;
            // 0x4e6bdc: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6BF0u;
            goto label_4e6bf0;
        }
    }
    ctx->pc = 0x4E6BE0u;
label_4e6be0:
    // 0x4e6be0: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x4e6be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_4e6be4:
    // 0x4e6be4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e6be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e6be8:
    // 0x4e6be8: 0x10000022  b           . + 4 + (0x22 << 2)
label_4e6bec:
    if (ctx->pc == 0x4E6BECu) {
        ctx->pc = 0x4E6BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6BE8u;
        // 0x4e6bec: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6BF0u;
        goto label_4e6bf0;
    }
    ctx->pc = 0x4E6BE8u;
    {
        const bool branch_taken_0x4e6be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6BE8u;
        // 0x4e6bec: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6be8) {
            ctx->pc = 0x4E6C74u;
            goto label_4e6c74;
        }
    }
    ctx->pc = 0x4E6BF0u;
label_4e6bf0:
    // 0x4e6bf0: 0x52020020  beql        $s0, $v0, . + 4 + (0x20 << 2)
label_4e6bf4:
    if (ctx->pc == 0x4E6BF4u) {
        ctx->pc = 0x4E6BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6BF0u;
        // 0x4e6bf4: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6BF8u;
        goto label_4e6bf8;
    }
    ctx->pc = 0x4E6BF0u;
    {
        const bool branch_taken_0x4e6bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e6bf0) {
            ctx->pc = 0x4E6BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6BF0u;
            // 0x4e6bf4: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6C74u;
            goto label_4e6c74;
        }
    }
    ctx->pc = 0x4E6BF8u;
label_4e6bf8:
    // 0x4e6bf8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4e6bfc:
    if (ctx->pc == 0x4E6BFCu) {
        ctx->pc = 0x4E6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6BF8u;
        // 0x4e6bfc: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6C00u;
        goto label_4e6c00;
    }
    ctx->pc = 0x4E6BF8u;
    {
        const bool branch_taken_0x4e6bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6BF8u;
        // 0x4e6bfc: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6bf8) {
            ctx->pc = 0x4E6C78u;
            goto label_4e6c78;
        }
    }
    ctx->pc = 0x4E6C00u;
label_4e6c00:
    // 0x4e6c00: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e6c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e6c04:
    // 0x4e6c04: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e6c04u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e6c08:
    // 0x4e6c08: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e6c08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e6c0c:
    // 0x4e6c0c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e6c0cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e6c10:
    // 0x4e6c10: 0x24a553e0  addiu       $a1, $a1, 0x53E0
    ctx->pc = 0x4e6c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21472));
label_4e6c14:
    // 0x4e6c14: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e6c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e6c18:
    // 0x4e6c18: 0x250853e8  addiu       $t0, $t0, 0x53E8
    ctx->pc = 0x4e6c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21480));
label_4e6c1c:
    // 0x4e6c1c: 0x254a5410  addiu       $t2, $t2, 0x5410
    ctx->pc = 0x4e6c1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 21520));
label_4e6c20:
    // 0x4e6c20: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e6c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e6c24:
    // 0x4e6c24: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e6c24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e6c28:
    // 0x4e6c28: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e6c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e6c2c:
    // 0x4e6c2c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e6c30:
    // 0x4e6c30: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e6c30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e6c34:
    // 0x4e6c34: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e6c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e6c38:
    // 0x4e6c38: 0x40f809  jalr        $v0
label_4e6c3c:
    if (ctx->pc == 0x4E6C3Cu) {
        ctx->pc = 0x4E6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6C38u;
        // 0x4e6c3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6C40u;
        goto label_4e6c40;
    }
    ctx->pc = 0x4E6C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E6C40u);
        ctx->pc = 0x4E6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6C38u;
        // 0x4e6c3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6C38u, 0x4E6C40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E6C40u;
label_4e6c40:
    // 0x4e6c40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e6c40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e6c44:
    // 0x4e6c44: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e6c48:
    // 0x4e6c48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e6c4c:
    if (ctx->pc == 0x4E6C4Cu) {
        ctx->pc = 0x4E6C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6C48u;
        // 0x4e6c4c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6C50u;
        goto label_4e6c50;
    }
    ctx->pc = 0x4E6C48u;
    {
        const bool branch_taken_0x4e6c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6C48u;
        // 0x4e6c4c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6c48) {
            ctx->pc = 0x4E6C60u;
            goto label_4e6c60;
        }
    }
    ctx->pc = 0x4E6C50u;
label_4e6c50:
    // 0x4e6c50: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e6c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e6c54:
    // 0x4e6c54: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e6c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e6c58:
    // 0x4e6c58: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e6c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e6c5c:
    // 0x4e6c5c: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e6c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e6c60:
    // 0x4e6c60: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x4e6c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
label_4e6c64:
    // 0x4e6c64: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e6c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e6c68:
    // 0x4e6c68: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e6c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e6c6c:
    // 0x4e6c6c: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_4e6c70:
    if (ctx->pc == 0x4E6C70u) {
        ctx->pc = 0x4E6C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6C6Cu;
        // 0x4e6c70: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6C74u;
        goto label_4e6c74;
    }
    ctx->pc = 0x4E6C6Cu;
    {
        const bool branch_taken_0x4e6c6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e6c6c) {
            ctx->pc = 0x4E6C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6C6Cu;
            // 0x4e6c70: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6C74u;
            goto label_4e6c74;
        }
    }
    ctx->pc = 0x4E6C74u;
label_4e6c74:
    // 0x4e6c74: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x4e6c74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_4e6c78:
    // 0x4e6c78: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e6c78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e6c7c:
    // 0x4e6c7c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x4e6c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_4e6c80:
    // 0x4e6c80: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x4e6c80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_4e6c84:
    // 0x4e6c84: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e6c88:
    // 0x4e6c88: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4e6c88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4e6c8c:
    // 0x4e6c8c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e6c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e6c90:
    // 0x4e6c90: 0x10e20088  beq         $a3, $v0, . + 4 + (0x88 << 2)
label_4e6c94:
    if (ctx->pc == 0x4E6C94u) {
        ctx->pc = 0x4E6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6C90u;
        // 0x4e6c94: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6C98u;
        goto label_4e6c98;
    }
    ctx->pc = 0x4E6C90u;
    {
        const bool branch_taken_0x4e6c90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6C90u;
        // 0x4e6c94: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6c90) {
            ctx->pc = 0x4E6EB4u;
            goto label_4e6eb4;
        }
    }
    ctx->pc = 0x4E6C98u;
label_4e6c98:
    // 0x4e6c98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e6c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e6c9c:
    // 0x4e6c9c: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_4e6ca0:
    if (ctx->pc == 0x4E6CA0u) {
        ctx->pc = 0x4E6CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6C9Cu;
        // 0x4e6ca0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6CA4u;
        goto label_4e6ca4;
    }
    ctx->pc = 0x4E6C9Cu;
    {
        const bool branch_taken_0x4e6c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e6c9c) {
            ctx->pc = 0x4E6CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6C9Cu;
            // 0x4e6ca0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6EB8u;
            goto label_4e6eb8;
        }
    }
    ctx->pc = 0x4E6CA4u;
label_4e6ca4:
    // 0x4e6ca4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4e6ca4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e6ca8:
    // 0x4e6ca8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e6ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e6cac:
    // 0x4e6cac: 0x0  nop
    ctx->pc = 0x4e6cacu;
    // NOP
label_4e6cb0:
    // 0x4e6cb0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e6cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e6cb4:
    // 0x4e6cb4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4e6cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4e6cb8:
    // 0x4e6cb8: 0x1464003a  bne         $v1, $a0, . + 4 + (0x3A << 2)
label_4e6cbc:
    if (ctx->pc == 0x4E6CBCu) {
        ctx->pc = 0x4E6CC0u;
        goto label_4e6cc0;
    }
    ctx->pc = 0x4E6CB8u;
    {
        const bool branch_taken_0x4e6cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e6cb8) {
            ctx->pc = 0x4E6DA4u;
            goto label_4e6da4;
        }
    }
    ctx->pc = 0x4E6CC0u;
label_4e6cc0:
    // 0x4e6cc0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4e6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e6cc4:
    // 0x4e6cc4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4e6cc8:
    if (ctx->pc == 0x4E6CC8u) {
        ctx->pc = 0x4E6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6CC4u;
        // 0x4e6cc8: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6CCCu;
        goto label_4e6ccc;
    }
    ctx->pc = 0x4E6CC4u;
    {
        const bool branch_taken_0x4e6cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6cc4) {
            ctx->pc = 0x4E6CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6CC4u;
            // 0x4e6cc8: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6CE4u;
            goto label_4e6ce4;
        }
    }
    ctx->pc = 0x4E6CCCu;
label_4e6ccc:
    // 0x4e6ccc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e6cd0:
    // 0x4e6cd0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4e6cd4:
    if (ctx->pc == 0x4E6CD4u) {
        ctx->pc = 0x4E6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6CD0u;
        // 0x4e6cd4: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6CD8u;
        goto label_4e6cd8;
    }
    ctx->pc = 0x4E6CD0u;
    {
        const bool branch_taken_0x4e6cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e6cd0) {
            ctx->pc = 0x4E6CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6CD0u;
            // 0x4e6cd4: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6CE4u;
            goto label_4e6ce4;
        }
    }
    ctx->pc = 0x4E6CD8u;
label_4e6cd8:
    // 0x4e6cd8: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e6cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e6cdc:
    // 0x4e6cdc: 0x10000038  b           . + 4 + (0x38 << 2)
label_4e6ce0:
    if (ctx->pc == 0x4E6CE0u) {
        ctx->pc = 0x4E6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6CDCu;
        // 0x4e6ce0: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6CE4u;
        goto label_4e6ce4;
    }
    ctx->pc = 0x4E6CDCu;
    {
        const bool branch_taken_0x4e6cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6CDCu;
        // 0x4e6ce0: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6cdc) {
            ctx->pc = 0x4E6DC0u;
            goto label_4e6dc0;
        }
    }
    ctx->pc = 0x4E6CE4u;
label_4e6ce4:
    // 0x4e6ce4: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4e6ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e6ce8:
    // 0x4e6ce8: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e6cec:
    if (ctx->pc == 0x4E6CECu) {
        ctx->pc = 0x4E6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6CE8u;
        // 0x4e6cec: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6CF0u;
        goto label_4e6cf0;
    }
    ctx->pc = 0x4E6CE8u;
    {
        const bool branch_taken_0x4e6ce8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e6ce8) {
            ctx->pc = 0x4E6CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6CE8u;
            // 0x4e6cec: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6D40u;
            goto label_4e6d40;
        }
    }
    ctx->pc = 0x4E6CF0u;
label_4e6cf0:
    // 0x4e6cf0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e6cf4:
    // 0x4e6cf4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e6cf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e6cf8:
    // 0x4e6cf8: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x4e6cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_4e6cfc:
    // 0x4e6cfc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e6cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e6d00:
    // 0x4e6d00: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e6d04:
    if (ctx->pc == 0x4E6D04u) {
        ctx->pc = 0x4E6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6D00u;
        // 0x4e6d04: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6D08u;
        goto label_4e6d08;
    }
    ctx->pc = 0x4E6D00u;
    {
        const bool branch_taken_0x4e6d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e6d00) {
            ctx->pc = 0x4E6D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6D00u;
            // 0x4e6d04: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6D08u;
            goto label_4e6d08;
        }
    }
    ctx->pc = 0x4E6D08u;
label_4e6d08:
    // 0x4e6d08: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e6d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e6d0c:
    // 0x4e6d0c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e6d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e6d10:
    // 0x4e6d10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e6d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e6d14:
    // 0x4e6d14: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e6d18:
    if (ctx->pc == 0x4E6D18u) {
        ctx->pc = 0x4E6D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6D14u;
        // 0x4e6d18: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6D1Cu;
        goto label_4e6d1c;
    }
    ctx->pc = 0x4E6D14u;
    {
        const bool branch_taken_0x4e6d14 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e6d14) {
            ctx->pc = 0x4E6D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6D14u;
            // 0x4e6d18: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6D24u;
            goto label_4e6d24;
        }
    }
    ctx->pc = 0x4E6D1Cu;
label_4e6d1c:
    // 0x4e6d1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e6d20:
    if (ctx->pc == 0x4E6D20u) {
        ctx->pc = 0x4E6D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6D1Cu;
        // 0x4e6d20: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6D24u;
        goto label_4e6d24;
    }
    ctx->pc = 0x4E6D1Cu;
    {
        const bool branch_taken_0x4e6d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6D1Cu;
        // 0x4e6d20: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6d1c) {
            ctx->pc = 0x4E6D34u;
            goto label_4e6d34;
        }
    }
    ctx->pc = 0x4E6D24u;
label_4e6d24:
    // 0x4e6d24: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e6d28:
    // 0x4e6d28: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e6d2c:
    if (ctx->pc == 0x4E6D2Cu) {
        ctx->pc = 0x4E6D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6D28u;
        // 0x4e6d2c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6D30u;
        goto label_4e6d30;
    }
    ctx->pc = 0x4E6D28u;
    {
        const bool branch_taken_0x4e6d28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e6d28) {
            ctx->pc = 0x4E6D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6D28u;
            // 0x4e6d2c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6D34u;
            goto label_4e6d34;
        }
    }
    ctx->pc = 0x4E6D30u;
label_4e6d30:
    // 0x4e6d30: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4e6d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_4e6d34:
    // 0x4e6d34: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x4e6d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_4e6d38:
    // 0x4e6d38: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e6d38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e6d3c:
    // 0x4e6d3c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e6d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e6d40:
    // 0x4e6d40: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e6d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e6d44:
    // 0x4e6d44: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e6d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e6d48:
    // 0x4e6d48: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e6d4c:
    // 0x4e6d4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e6d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e6d50:
    // 0x4e6d50: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e6d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e6d54:
    // 0x4e6d54: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e6d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e6d58:
    // 0x4e6d58: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4e6d58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e6d5c:
    // 0x4e6d5c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e6d60:
    // 0x4e6d60: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4e6d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4e6d64:
    // 0x4e6d64: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e6d68:
    // 0x4e6d68: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e6d6c:
    if (ctx->pc == 0x4E6D6Cu) {
        ctx->pc = 0x4E6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6D68u;
        // 0x4e6d6c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6D70u;
        goto label_4e6d70;
    }
    ctx->pc = 0x4E6D68u;
    {
        const bool branch_taken_0x4e6d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e6d68) {
            ctx->pc = 0x4E6D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6D68u;
            // 0x4e6d6c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6D70u;
            goto label_4e6d70;
        }
    }
    ctx->pc = 0x4E6D70u;
label_4e6d70:
    // 0x4e6d70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e6d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e6d74:
    // 0x4e6d74: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e6d74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e6d78:
    // 0x4e6d78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e6d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e6d7c:
    // 0x4e6d7c: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e6d80:
    if (ctx->pc == 0x4E6D80u) {
        ctx->pc = 0x4E6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6D7Cu;
        // 0x4e6d80: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6D84u;
        goto label_4e6d84;
    }
    ctx->pc = 0x4E6D7Cu;
    {
        const bool branch_taken_0x4e6d7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e6d7c) {
            ctx->pc = 0x4E6D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6D7Cu;
            // 0x4e6d80: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6D8Cu;
            goto label_4e6d8c;
        }
    }
    ctx->pc = 0x4E6D84u;
label_4e6d84:
    // 0x4e6d84: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e6d88:
    if (ctx->pc == 0x4E6D88u) {
        ctx->pc = 0x4E6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6D84u;
        // 0x4e6d88: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6D8Cu;
        goto label_4e6d8c;
    }
    ctx->pc = 0x4E6D84u;
    {
        const bool branch_taken_0x4e6d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6D84u;
        // 0x4e6d88: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6d84) {
            ctx->pc = 0x4E6D9Cu;
            goto label_4e6d9c;
        }
    }
    ctx->pc = 0x4E6D8Cu;
label_4e6d8c:
    // 0x4e6d8c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e6d90:
    // 0x4e6d90: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e6d94:
    if (ctx->pc == 0x4E6D94u) {
        ctx->pc = 0x4E6D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6D90u;
        // 0x4e6d94: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6D98u;
        goto label_4e6d98;
    }
    ctx->pc = 0x4E6D90u;
    {
        const bool branch_taken_0x4e6d90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e6d90) {
            ctx->pc = 0x4E6D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6D90u;
            // 0x4e6d94: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6D9Cu;
            goto label_4e6d9c;
        }
    }
    ctx->pc = 0x4E6D98u;
label_4e6d98:
    // 0x4e6d98: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x4e6d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_4e6d9c:
    // 0x4e6d9c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e6da0:
    if (ctx->pc == 0x4E6DA0u) {
        ctx->pc = 0x4E6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6D9Cu;
        // 0x4e6da0: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6DA4u;
        goto label_4e6da4;
    }
    ctx->pc = 0x4E6D9Cu;
    {
        const bool branch_taken_0x4e6d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6D9Cu;
        // 0x4e6da0: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6d9c) {
            ctx->pc = 0x4E6E94u;
            goto label_4e6e94;
        }
    }
    ctx->pc = 0x4E6DA4u;
label_4e6da4:
    // 0x4e6da4: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_4e6da8:
    if (ctx->pc == 0x4E6DA8u) {
        ctx->pc = 0x4E6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6DA4u;
        // 0x4e6da8: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6DACu;
        goto label_4e6dac;
    }
    ctx->pc = 0x4E6DA4u;
    {
        const bool branch_taken_0x4e6da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6da4) {
            ctx->pc = 0x4E6DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6DA4u;
            // 0x4e6da8: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6DD8u;
            goto label_4e6dd8;
        }
    }
    ctx->pc = 0x4E6DACu;
label_4e6dac:
    // 0x4e6dac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4e6dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e6db0:
    // 0x4e6db0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4e6db4:
    if (ctx->pc == 0x4E6DB4u) {
        ctx->pc = 0x4E6DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6DB0u;
        // 0x4e6db4: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6DB8u;
        goto label_4e6db8;
    }
    ctx->pc = 0x4E6DB0u;
    {
        const bool branch_taken_0x4e6db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e6db0) {
            ctx->pc = 0x4E6DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6DB0u;
            // 0x4e6db4: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6DD8u;
            goto label_4e6dd8;
        }
    }
    ctx->pc = 0x4E6DB8u;
label_4e6db8:
    // 0x4e6db8: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x4e6db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_4e6dbc:
    // 0x4e6dbc: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e6dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e6dc0:
    // 0x4e6dc0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e6dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e6dc4:
    // 0x4e6dc4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e6dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e6dc8:
    // 0x4e6dc8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4e6dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4e6dcc:
    // 0x4e6dcc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e6dd0:
    // 0x4e6dd0: 0x10000031  b           . + 4 + (0x31 << 2)
label_4e6dd4:
    if (ctx->pc == 0x4E6DD4u) {
        ctx->pc = 0x4E6DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6DD0u;
        // 0x4e6dd4: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6DD8u;
        goto label_4e6dd8;
    }
    ctx->pc = 0x4E6DD0u;
    {
        const bool branch_taken_0x4e6dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6DD0u;
        // 0x4e6dd4: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6dd0) {
            ctx->pc = 0x4E6E98u;
            goto label_4e6e98;
        }
    }
    ctx->pc = 0x4E6DD8u;
label_4e6dd8:
    // 0x4e6dd8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4e6dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e6ddc:
    // 0x4e6ddc: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e6de0:
    if (ctx->pc == 0x4E6DE0u) {
        ctx->pc = 0x4E6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6DDCu;
        // 0x4e6de0: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6DE4u;
        goto label_4e6de4;
    }
    ctx->pc = 0x4E6DDCu;
    {
        const bool branch_taken_0x4e6ddc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e6ddc) {
            ctx->pc = 0x4E6DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6DDCu;
            // 0x4e6de0: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6E34u;
            goto label_4e6e34;
        }
    }
    ctx->pc = 0x4E6DE4u;
label_4e6de4:
    // 0x4e6de4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e6de8:
    // 0x4e6de8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e6de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e6dec:
    // 0x4e6dec: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x4e6decu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_4e6df0:
    // 0x4e6df0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e6df4:
    // 0x4e6df4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e6df8:
    if (ctx->pc == 0x4E6DF8u) {
        ctx->pc = 0x4E6DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6DF4u;
        // 0x4e6df8: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6DFCu;
        goto label_4e6dfc;
    }
    ctx->pc = 0x4E6DF4u;
    {
        const bool branch_taken_0x4e6df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e6df4) {
            ctx->pc = 0x4E6DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6DF4u;
            // 0x4e6df8: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6DFCu;
            goto label_4e6dfc;
        }
    }
    ctx->pc = 0x4E6DFCu;
label_4e6dfc:
    // 0x4e6dfc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e6dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e6e00:
    // 0x4e6e00: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e6e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e6e04:
    // 0x4e6e04: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e6e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e6e08:
    // 0x4e6e08: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e6e0c:
    if (ctx->pc == 0x4E6E0Cu) {
        ctx->pc = 0x4E6E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6E08u;
        // 0x4e6e0c: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6E10u;
        goto label_4e6e10;
    }
    ctx->pc = 0x4E6E08u;
    {
        const bool branch_taken_0x4e6e08 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e6e08) {
            ctx->pc = 0x4E6E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6E08u;
            // 0x4e6e0c: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6E18u;
            goto label_4e6e18;
        }
    }
    ctx->pc = 0x4E6E10u;
label_4e6e10:
    // 0x4e6e10: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e6e14:
    if (ctx->pc == 0x4E6E14u) {
        ctx->pc = 0x4E6E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6E10u;
        // 0x4e6e14: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6E18u;
        goto label_4e6e18;
    }
    ctx->pc = 0x4E6E10u;
    {
        const bool branch_taken_0x4e6e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6E10u;
        // 0x4e6e14: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6e10) {
            ctx->pc = 0x4E6E28u;
            goto label_4e6e28;
        }
    }
    ctx->pc = 0x4E6E18u;
label_4e6e18:
    // 0x4e6e18: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e6e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e6e1c:
    // 0x4e6e1c: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e6e20:
    if (ctx->pc == 0x4E6E20u) {
        ctx->pc = 0x4E6E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6E1Cu;
        // 0x4e6e20: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6E24u;
        goto label_4e6e24;
    }
    ctx->pc = 0x4E6E1Cu;
    {
        const bool branch_taken_0x4e6e1c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e6e1c) {
            ctx->pc = 0x4E6E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6E1Cu;
            // 0x4e6e20: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6E28u;
            goto label_4e6e28;
        }
    }
    ctx->pc = 0x4E6E24u;
label_4e6e24:
    // 0x4e6e24: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4e6e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_4e6e28:
    // 0x4e6e28: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x4e6e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_4e6e2c:
    // 0x4e6e2c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e6e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e6e30:
    // 0x4e6e30: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e6e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e6e34:
    // 0x4e6e34: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e6e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e6e38:
    // 0x4e6e38: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e6e3c:
    // 0x4e6e3c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e6e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e6e40:
    // 0x4e6e40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e6e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e6e44:
    // 0x4e6e44: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e6e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e6e48:
    // 0x4e6e48: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e6e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e6e4c:
    // 0x4e6e4c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x4e6e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e6e50:
    // 0x4e6e50: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e6e54:
    // 0x4e6e54: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x4e6e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_4e6e58:
    // 0x4e6e58: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e6e5c:
    // 0x4e6e5c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e6e60:
    if (ctx->pc == 0x4E6E60u) {
        ctx->pc = 0x4E6E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6E5Cu;
        // 0x4e6e60: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6E64u;
        goto label_4e6e64;
    }
    ctx->pc = 0x4E6E5Cu;
    {
        const bool branch_taken_0x4e6e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e6e5c) {
            ctx->pc = 0x4E6E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6E5Cu;
            // 0x4e6e60: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6E64u;
            goto label_4e6e64;
        }
    }
    ctx->pc = 0x4E6E64u;
label_4e6e64:
    // 0x4e6e64: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e6e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e6e68:
    // 0x4e6e68: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e6e68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e6e6c:
    // 0x4e6e6c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e6e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e6e70:
    // 0x4e6e70: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e6e74:
    if (ctx->pc == 0x4E6E74u) {
        ctx->pc = 0x4E6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6E70u;
        // 0x4e6e74: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6E78u;
        goto label_4e6e78;
    }
    ctx->pc = 0x4E6E70u;
    {
        const bool branch_taken_0x4e6e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e6e70) {
            ctx->pc = 0x4E6E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6E70u;
            // 0x4e6e74: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6E80u;
            goto label_4e6e80;
        }
    }
    ctx->pc = 0x4E6E78u;
label_4e6e78:
    // 0x4e6e78: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e6e7c:
    if (ctx->pc == 0x4E6E7Cu) {
        ctx->pc = 0x4E6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6E78u;
        // 0x4e6e7c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6E80u;
        goto label_4e6e80;
    }
    ctx->pc = 0x4E6E78u;
    {
        const bool branch_taken_0x4e6e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6E78u;
        // 0x4e6e7c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6e78) {
            ctx->pc = 0x4E6E90u;
            goto label_4e6e90;
        }
    }
    ctx->pc = 0x4E6E80u;
label_4e6e80:
    // 0x4e6e80: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e6e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e6e84:
    // 0x4e6e84: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e6e88:
    if (ctx->pc == 0x4E6E88u) {
        ctx->pc = 0x4E6E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6E84u;
        // 0x4e6e88: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6E8Cu;
        goto label_4e6e8c;
    }
    ctx->pc = 0x4E6E84u;
    {
        const bool branch_taken_0x4e6e84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e6e84) {
            ctx->pc = 0x4E6E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6E84u;
            // 0x4e6e88: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6E90u;
            goto label_4e6e90;
        }
    }
    ctx->pc = 0x4E6E8Cu;
label_4e6e8c:
    // 0x4e6e8c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x4e6e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_4e6e90:
    // 0x4e6e90: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4e6e90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_4e6e94:
    // 0x4e6e94: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4e6e94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_4e6e98:
    // 0x4e6e98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e6e9c:
    // 0x4e6e9c: 0x51020006  beql        $t0, $v0, . + 4 + (0x6 << 2)
label_4e6ea0:
    if (ctx->pc == 0x4E6EA0u) {
        ctx->pc = 0x4E6EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6E9Cu;
        // 0x4e6ea0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6EA4u;
        goto label_4e6ea4;
    }
    ctx->pc = 0x4E6E9Cu;
    {
        const bool branch_taken_0x4e6e9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e6e9c) {
            ctx->pc = 0x4E6EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6E9Cu;
            // 0x4e6ea0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6EB8u;
            goto label_4e6eb8;
        }
    }
    ctx->pc = 0x4E6EA4u;
label_4e6ea4:
    // 0x4e6ea4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e6ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e6ea8:
    // 0x4e6ea8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e6ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e6eac:
    // 0x4e6eac: 0x5060ff80  beql        $v1, $zero, . + 4 + (-0x80 << 2)
label_4e6eb0:
    if (ctx->pc == 0x4E6EB0u) {
        ctx->pc = 0x4E6EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6EACu;
        // 0x4e6eb0: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6EB4u;
        goto label_4e6eb4;
    }
    ctx->pc = 0x4E6EACu;
    {
        const bool branch_taken_0x4e6eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e6eac) {
            ctx->pc = 0x4E6EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6EACu;
            // 0x4e6eb0: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e6cb0;
        }
    }
    ctx->pc = 0x4E6EB4u;
label_4e6eb4:
    // 0x4e6eb4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4e6eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e6eb8:
    // 0x4e6eb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e6eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e6ebc:
    // 0x4e6ebc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e6ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e6ec0:
    // 0x4e6ec0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e6ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e6ec4:
    // 0x4e6ec4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4e6ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4e6ec8:
    // 0x4e6ec8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e6ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e6ecc:
    // 0x4e6ecc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4e6eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4e6ed0:
    // 0x4e6ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e6ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e6ed4:
    // 0x4e6ed4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4e6ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4e6ed8:
    // 0x4e6ed8: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4e6ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4e6edc:
    // 0x4e6edc: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e6edcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_4e6ee0:
    // 0x4e6ee0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e6ee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e6ee4:
    // 0x4e6ee4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e6ee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e6ee8:
    // 0x4e6ee8: 0x3e00008  jr          $ra
label_4e6eec:
    if (ctx->pc == 0x4E6EECu) {
        ctx->pc = 0x4E6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6EE8u;
        // 0x4e6eec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6EF0u;
        goto label_fallthrough_0x4e6ee8;
    }
    ctx->pc = 0x4E6EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6EE8u;
        // 0x4e6eec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e6ee8:
    ctx->pc = 0x4E6EF0u;
}
