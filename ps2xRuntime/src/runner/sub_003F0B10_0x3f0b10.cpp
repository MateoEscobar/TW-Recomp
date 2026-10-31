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

// Function: sub_003F0B10
// Address: 0x3f0b10 - 0x3f0e80
void sub_003F0B10_0x3f0b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0B10_0x3f0b10");
#endif

    switch (ctx->pc) {
        case 0x3f0b10u: goto label_3f0b10;
        case 0x3f0b14u: goto label_3f0b14;
        case 0x3f0b18u: goto label_3f0b18;
        case 0x3f0b1cu: goto label_3f0b1c;
        case 0x3f0b20u: goto label_3f0b20;
        case 0x3f0b24u: goto label_3f0b24;
        case 0x3f0b28u: goto label_3f0b28;
        case 0x3f0b2cu: goto label_3f0b2c;
        case 0x3f0b30u: goto label_3f0b30;
        case 0x3f0b34u: goto label_3f0b34;
        case 0x3f0b38u: goto label_3f0b38;
        case 0x3f0b3cu: goto label_3f0b3c;
        case 0x3f0b40u: goto label_3f0b40;
        case 0x3f0b44u: goto label_3f0b44;
        case 0x3f0b48u: goto label_3f0b48;
        case 0x3f0b4cu: goto label_3f0b4c;
        case 0x3f0b50u: goto label_3f0b50;
        case 0x3f0b54u: goto label_3f0b54;
        case 0x3f0b58u: goto label_3f0b58;
        case 0x3f0b5cu: goto label_3f0b5c;
        case 0x3f0b60u: goto label_3f0b60;
        case 0x3f0b64u: goto label_3f0b64;
        case 0x3f0b68u: goto label_3f0b68;
        case 0x3f0b6cu: goto label_3f0b6c;
        case 0x3f0b70u: goto label_3f0b70;
        case 0x3f0b74u: goto label_3f0b74;
        case 0x3f0b78u: goto label_3f0b78;
        case 0x3f0b7cu: goto label_3f0b7c;
        case 0x3f0b80u: goto label_3f0b80;
        case 0x3f0b84u: goto label_3f0b84;
        case 0x3f0b88u: goto label_3f0b88;
        case 0x3f0b8cu: goto label_3f0b8c;
        case 0x3f0b90u: goto label_3f0b90;
        case 0x3f0b94u: goto label_3f0b94;
        case 0x3f0b98u: goto label_3f0b98;
        case 0x3f0b9cu: goto label_3f0b9c;
        case 0x3f0ba0u: goto label_3f0ba0;
        case 0x3f0ba4u: goto label_3f0ba4;
        case 0x3f0ba8u: goto label_3f0ba8;
        case 0x3f0bacu: goto label_3f0bac;
        case 0x3f0bb0u: goto label_3f0bb0;
        case 0x3f0bb4u: goto label_3f0bb4;
        case 0x3f0bb8u: goto label_3f0bb8;
        case 0x3f0bbcu: goto label_3f0bbc;
        case 0x3f0bc0u: goto label_3f0bc0;
        case 0x3f0bc4u: goto label_3f0bc4;
        case 0x3f0bc8u: goto label_3f0bc8;
        case 0x3f0bccu: goto label_3f0bcc;
        case 0x3f0bd0u: goto label_3f0bd0;
        case 0x3f0bd4u: goto label_3f0bd4;
        case 0x3f0bd8u: goto label_3f0bd8;
        case 0x3f0bdcu: goto label_3f0bdc;
        case 0x3f0be0u: goto label_3f0be0;
        case 0x3f0be4u: goto label_3f0be4;
        case 0x3f0be8u: goto label_3f0be8;
        case 0x3f0becu: goto label_3f0bec;
        case 0x3f0bf0u: goto label_3f0bf0;
        case 0x3f0bf4u: goto label_3f0bf4;
        case 0x3f0bf8u: goto label_3f0bf8;
        case 0x3f0bfcu: goto label_3f0bfc;
        case 0x3f0c00u: goto label_3f0c00;
        case 0x3f0c04u: goto label_3f0c04;
        case 0x3f0c08u: goto label_3f0c08;
        case 0x3f0c0cu: goto label_3f0c0c;
        case 0x3f0c10u: goto label_3f0c10;
        case 0x3f0c14u: goto label_3f0c14;
        case 0x3f0c18u: goto label_3f0c18;
        case 0x3f0c1cu: goto label_3f0c1c;
        case 0x3f0c20u: goto label_3f0c20;
        case 0x3f0c24u: goto label_3f0c24;
        case 0x3f0c28u: goto label_3f0c28;
        case 0x3f0c2cu: goto label_3f0c2c;
        case 0x3f0c30u: goto label_3f0c30;
        case 0x3f0c34u: goto label_3f0c34;
        case 0x3f0c38u: goto label_3f0c38;
        case 0x3f0c3cu: goto label_3f0c3c;
        case 0x3f0c40u: goto label_3f0c40;
        case 0x3f0c44u: goto label_3f0c44;
        case 0x3f0c48u: goto label_3f0c48;
        case 0x3f0c4cu: goto label_3f0c4c;
        case 0x3f0c50u: goto label_3f0c50;
        case 0x3f0c54u: goto label_3f0c54;
        case 0x3f0c58u: goto label_3f0c58;
        case 0x3f0c5cu: goto label_3f0c5c;
        case 0x3f0c60u: goto label_3f0c60;
        case 0x3f0c64u: goto label_3f0c64;
        case 0x3f0c68u: goto label_3f0c68;
        case 0x3f0c6cu: goto label_3f0c6c;
        case 0x3f0c70u: goto label_3f0c70;
        case 0x3f0c74u: goto label_3f0c74;
        case 0x3f0c78u: goto label_3f0c78;
        case 0x3f0c7cu: goto label_3f0c7c;
        case 0x3f0c80u: goto label_3f0c80;
        case 0x3f0c84u: goto label_3f0c84;
        case 0x3f0c88u: goto label_3f0c88;
        case 0x3f0c8cu: goto label_3f0c8c;
        case 0x3f0c90u: goto label_3f0c90;
        case 0x3f0c94u: goto label_3f0c94;
        case 0x3f0c98u: goto label_3f0c98;
        case 0x3f0c9cu: goto label_3f0c9c;
        case 0x3f0ca0u: goto label_3f0ca0;
        case 0x3f0ca4u: goto label_3f0ca4;
        case 0x3f0ca8u: goto label_3f0ca8;
        case 0x3f0cacu: goto label_3f0cac;
        case 0x3f0cb0u: goto label_3f0cb0;
        case 0x3f0cb4u: goto label_3f0cb4;
        case 0x3f0cb8u: goto label_3f0cb8;
        case 0x3f0cbcu: goto label_3f0cbc;
        case 0x3f0cc0u: goto label_3f0cc0;
        case 0x3f0cc4u: goto label_3f0cc4;
        case 0x3f0cc8u: goto label_3f0cc8;
        case 0x3f0cccu: goto label_3f0ccc;
        case 0x3f0cd0u: goto label_3f0cd0;
        case 0x3f0cd4u: goto label_3f0cd4;
        case 0x3f0cd8u: goto label_3f0cd8;
        case 0x3f0cdcu: goto label_3f0cdc;
        case 0x3f0ce0u: goto label_3f0ce0;
        case 0x3f0ce4u: goto label_3f0ce4;
        case 0x3f0ce8u: goto label_3f0ce8;
        case 0x3f0cecu: goto label_3f0cec;
        case 0x3f0cf0u: goto label_3f0cf0;
        case 0x3f0cf4u: goto label_3f0cf4;
        case 0x3f0cf8u: goto label_3f0cf8;
        case 0x3f0cfcu: goto label_3f0cfc;
        case 0x3f0d00u: goto label_3f0d00;
        case 0x3f0d04u: goto label_3f0d04;
        case 0x3f0d08u: goto label_3f0d08;
        case 0x3f0d0cu: goto label_3f0d0c;
        case 0x3f0d10u: goto label_3f0d10;
        case 0x3f0d14u: goto label_3f0d14;
        case 0x3f0d18u: goto label_3f0d18;
        case 0x3f0d1cu: goto label_3f0d1c;
        case 0x3f0d20u: goto label_3f0d20;
        case 0x3f0d24u: goto label_3f0d24;
        case 0x3f0d28u: goto label_3f0d28;
        case 0x3f0d2cu: goto label_3f0d2c;
        case 0x3f0d30u: goto label_3f0d30;
        case 0x3f0d34u: goto label_3f0d34;
        case 0x3f0d38u: goto label_3f0d38;
        case 0x3f0d3cu: goto label_3f0d3c;
        case 0x3f0d40u: goto label_3f0d40;
        case 0x3f0d44u: goto label_3f0d44;
        case 0x3f0d48u: goto label_3f0d48;
        case 0x3f0d4cu: goto label_3f0d4c;
        case 0x3f0d50u: goto label_3f0d50;
        case 0x3f0d54u: goto label_3f0d54;
        case 0x3f0d58u: goto label_3f0d58;
        case 0x3f0d5cu: goto label_3f0d5c;
        case 0x3f0d60u: goto label_3f0d60;
        case 0x3f0d64u: goto label_3f0d64;
        case 0x3f0d68u: goto label_3f0d68;
        case 0x3f0d6cu: goto label_3f0d6c;
        case 0x3f0d70u: goto label_3f0d70;
        case 0x3f0d74u: goto label_3f0d74;
        case 0x3f0d78u: goto label_3f0d78;
        case 0x3f0d7cu: goto label_3f0d7c;
        case 0x3f0d80u: goto label_3f0d80;
        case 0x3f0d84u: goto label_3f0d84;
        case 0x3f0d88u: goto label_3f0d88;
        case 0x3f0d8cu: goto label_3f0d8c;
        case 0x3f0d90u: goto label_3f0d90;
        case 0x3f0d94u: goto label_3f0d94;
        case 0x3f0d98u: goto label_3f0d98;
        case 0x3f0d9cu: goto label_3f0d9c;
        case 0x3f0da0u: goto label_3f0da0;
        case 0x3f0da4u: goto label_3f0da4;
        case 0x3f0da8u: goto label_3f0da8;
        case 0x3f0dacu: goto label_3f0dac;
        case 0x3f0db0u: goto label_3f0db0;
        case 0x3f0db4u: goto label_3f0db4;
        case 0x3f0db8u: goto label_3f0db8;
        case 0x3f0dbcu: goto label_3f0dbc;
        case 0x3f0dc0u: goto label_3f0dc0;
        case 0x3f0dc4u: goto label_3f0dc4;
        case 0x3f0dc8u: goto label_3f0dc8;
        case 0x3f0dccu: goto label_3f0dcc;
        case 0x3f0dd0u: goto label_3f0dd0;
        case 0x3f0dd4u: goto label_3f0dd4;
        case 0x3f0dd8u: goto label_3f0dd8;
        case 0x3f0ddcu: goto label_3f0ddc;
        case 0x3f0de0u: goto label_3f0de0;
        case 0x3f0de4u: goto label_3f0de4;
        case 0x3f0de8u: goto label_3f0de8;
        case 0x3f0decu: goto label_3f0dec;
        case 0x3f0df0u: goto label_3f0df0;
        case 0x3f0df4u: goto label_3f0df4;
        case 0x3f0df8u: goto label_3f0df8;
        case 0x3f0dfcu: goto label_3f0dfc;
        case 0x3f0e00u: goto label_3f0e00;
        case 0x3f0e04u: goto label_3f0e04;
        case 0x3f0e08u: goto label_3f0e08;
        case 0x3f0e0cu: goto label_3f0e0c;
        case 0x3f0e10u: goto label_3f0e10;
        case 0x3f0e14u: goto label_3f0e14;
        case 0x3f0e18u: goto label_3f0e18;
        case 0x3f0e1cu: goto label_3f0e1c;
        case 0x3f0e20u: goto label_3f0e20;
        case 0x3f0e24u: goto label_3f0e24;
        case 0x3f0e28u: goto label_3f0e28;
        case 0x3f0e2cu: goto label_3f0e2c;
        case 0x3f0e30u: goto label_3f0e30;
        case 0x3f0e34u: goto label_3f0e34;
        case 0x3f0e38u: goto label_3f0e38;
        case 0x3f0e3cu: goto label_3f0e3c;
        case 0x3f0e40u: goto label_3f0e40;
        case 0x3f0e44u: goto label_3f0e44;
        case 0x3f0e48u: goto label_3f0e48;
        case 0x3f0e4cu: goto label_3f0e4c;
        case 0x3f0e50u: goto label_3f0e50;
        case 0x3f0e54u: goto label_3f0e54;
        case 0x3f0e58u: goto label_3f0e58;
        case 0x3f0e5cu: goto label_3f0e5c;
        case 0x3f0e60u: goto label_3f0e60;
        case 0x3f0e64u: goto label_3f0e64;
        case 0x3f0e68u: goto label_3f0e68;
        case 0x3f0e6cu: goto label_3f0e6c;
        case 0x3f0e70u: goto label_3f0e70;
        case 0x3f0e74u: goto label_3f0e74;
        case 0x3f0e78u: goto label_3f0e78;
        case 0x3f0e7cu: goto label_3f0e7c;
        default: break;
    }

    ctx->pc = 0x3f0b10u;

label_3f0b10:
    // 0x3f0b10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f0b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3f0b14:
    // 0x3f0b14: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3f0b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3f0b18:
    // 0x3f0b18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3f0b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3f0b1c:
    // 0x3f0b1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f0b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f0b20:
    // 0x3f0b20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f0b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3f0b24:
    // 0x3f0b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f0b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f0b28:
    // 0x3f0b28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f0b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f0b2c:
    // 0x3f0b2c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f0b2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f0b30:
    // 0x3f0b30: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f0b34:
    // 0x3f0b34: 0x40f809  jalr        $v0
label_3f0b38:
    if (ctx->pc == 0x3F0B38u) {
        ctx->pc = 0x3F0B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0B34u;
        // 0x3f0b38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0B3Cu;
        goto label_3f0b3c;
    }
    ctx->pc = 0x3F0B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F0B3Cu);
        ctx->pc = 0x3F0B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0B34u;
        // 0x3f0b38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0B34u, 0x3F0B3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F0B3Cu;
label_3f0b3c:
    // 0x3f0b3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f0b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0b40:
    // 0x3f0b40: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3f0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f0b44:
    // 0x3f0b44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3f0b48:
    if (ctx->pc == 0x3F0B48u) {
        ctx->pc = 0x3F0B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0B44u;
        // 0x3f0b48: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0B4Cu;
        goto label_3f0b4c;
    }
    ctx->pc = 0x3F0B44u;
    {
        const bool branch_taken_0x3f0b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0B44u;
        // 0x3f0b48: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0b44) {
            ctx->pc = 0x3F0B64u;
            goto label_3f0b64;
        }
    }
    ctx->pc = 0x3F0B4Cu;
label_3f0b4c:
    // 0x3f0b4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f0b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0b50:
    // 0x3f0b50: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3f0b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_3f0b54:
    // 0x3f0b54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f0b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0b58:
    // 0x3f0b58: 0xc0e637e  jal         func_398DF8
label_3f0b5c:
    if (ctx->pc == 0x3F0B5Cu) {
        ctx->pc = 0x3F0B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0B58u;
        // 0x3f0b5c: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0B60u;
        goto label_3f0b60;
    }
    ctx->pc = 0x3F0B58u;
    SET_GPR_U32(ctx, 31, 0x3F0B60u);
    ctx->pc = 0x3F0B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0B58u;
    // 0x3f0b5c: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F0B58u, 0x3F0B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0B60u;
label_3f0b60:
    // 0x3f0b60: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3f0b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3f0b64:
    // 0x3f0b64: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3f0b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f0b68:
    // 0x3f0b68: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3f0b68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0b6c:
    // 0x3f0b6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f0b70:
    // 0x3f0b70: 0x14520017  bne         $v0, $s2, . + 4 + (0x17 << 2)
label_3f0b74:
    if (ctx->pc == 0x3F0B74u) {
        ctx->pc = 0x3F0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0B70u;
        // 0x3f0b74: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0B78u;
        goto label_3f0b78;
    }
    ctx->pc = 0x3F0B70u;
    {
        const bool branch_taken_0x3f0b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3F0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0B70u;
        // 0x3f0b74: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0b70) {
            ctx->pc = 0x3F0BD0u;
            goto label_3f0bd0;
        }
    }
    ctx->pc = 0x3F0B78u;
label_3f0b78:
    // 0x3f0b78: 0x3c01c40b  lui         $at, 0xC40B
    ctx->pc = 0x3f0b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50187 << 16));
label_3f0b7c:
    // 0x3f0b7c: 0x34213666  ori         $at, $at, 0x3666
    ctx->pc = 0x3f0b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13926);
label_3f0b80:
    // 0x3f0b80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f0b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0b84:
    // 0x3f0b84: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f0b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f0b88:
    // 0x3f0b88: 0x3c01c379  lui         $at, 0xC379
    ctx->pc = 0x3f0b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50041 << 16));
label_3f0b8c:
    // 0x3f0b8c: 0x3421a7f0  ori         $at, $at, 0xA7F0
    ctx->pc = 0x3f0b8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42992);
label_3f0b90:
    // 0x3f0b90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f0b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0b94:
    // 0x3f0b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0b98:
    // 0x3f0b98: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x3f0b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
label_3f0b9c:
    // 0x3f0b9c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3f0b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3f0ba0:
    // 0x3f0ba0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f0ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f0ba4:
    // 0x3f0ba4: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x3f0ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3f0ba8:
    // 0x3f0ba8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f0ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f0bac:
    // 0x3f0bac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0bb0:
    // 0x3f0bb0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f0bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f0bb4:
    // 0x3f0bb4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f0bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f0bb8:
    // 0x3f0bb8: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f0bb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f0bbc:
    // 0x3f0bbc: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f0bbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f0bc0:
    // 0x3f0bc0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f0bc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0bc4:
    // 0x3f0bc4: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f0bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f0bc8:
    // 0x3f0bc8: 0xc0e858c  jal         func_3A1630
label_3f0bcc:
    if (ctx->pc == 0x3F0BCCu) {
        ctx->pc = 0x3F0BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0BC8u;
        // 0x3f0bcc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0BD0u;
        goto label_3f0bd0;
    }
    ctx->pc = 0x3F0BC8u;
    SET_GPR_U32(ctx, 31, 0x3F0BD0u);
    ctx->pc = 0x3F0BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0BC8u;
    // 0x3f0bcc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F0BC8u, 0x3F0BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0BD0u;
label_3f0bd0:
    // 0x3f0bd0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f0bd4:
    // 0x3f0bd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f0bd8:
    // 0x3f0bd8: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_3f0bdc:
    if (ctx->pc == 0x3F0BDCu) {
        ctx->pc = 0x3F0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0BD8u;
        // 0x3f0bdc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0BE0u;
        goto label_3f0be0;
    }
    ctx->pc = 0x3F0BD8u;
    {
        const bool branch_taken_0x3f0bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0BD8u;
        // 0x3f0bdc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0bd8) {
            ctx->pc = 0x3F0C40u;
            goto label_3f0c40;
        }
    }
    ctx->pc = 0x3F0BE0u;
label_3f0be0:
    // 0x3f0be0: 0x3c01c40b  lui         $at, 0xC40B
    ctx->pc = 0x3f0be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50187 << 16));
label_3f0be4:
    // 0x3f0be4: 0x34213666  ori         $at, $at, 0x3666
    ctx->pc = 0x3f0be4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13926);
label_3f0be8:
    // 0x3f0be8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f0be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0bec:
    // 0x3f0bec: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f0becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f0bf0:
    // 0x3f0bf0: 0x3c01c379  lui         $at, 0xC379
    ctx->pc = 0x3f0bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50041 << 16));
label_3f0bf4:
    // 0x3f0bf4: 0x3421a7f0  ori         $at, $at, 0xA7F0
    ctx->pc = 0x3f0bf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42992);
label_3f0bf8:
    // 0x3f0bf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f0bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0bfc:
    // 0x3f0bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0c00:
    // 0x3f0c00: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x3f0c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
label_3f0c04:
    // 0x3f0c04: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3f0c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3f0c08:
    // 0x3f0c08: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f0c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f0c0c:
    // 0x3f0c0c: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x3f0c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_3f0c10:
    // 0x3f0c10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f0c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f0c14:
    // 0x3f0c14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0c18:
    // 0x3f0c18: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f0c18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f0c1c:
    // 0x3f0c1c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f0c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f0c20:
    // 0x3f0c20: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f0c20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f0c24:
    // 0x3f0c24: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f0c24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f0c28:
    // 0x3f0c28: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f0c28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0c2c:
    // 0x3f0c2c: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f0c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f0c30:
    // 0x3f0c30: 0xc0e858c  jal         func_3A1630
label_3f0c34:
    if (ctx->pc == 0x3F0C34u) {
        ctx->pc = 0x3F0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0C30u;
        // 0x3f0c34: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0C38u;
        goto label_3f0c38;
    }
    ctx->pc = 0x3F0C30u;
    SET_GPR_U32(ctx, 31, 0x3F0C38u);
    ctx->pc = 0x3F0C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C30u;
    // 0x3f0c34: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F0C30u, 0x3F0C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C38u;
label_3f0c38:
    // 0x3f0c38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f0c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f0c3c:
    // 0x3f0c3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f0c40:
    // 0x3f0c40: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
label_3f0c44:
    if (ctx->pc == 0x3F0C44u) {
        ctx->pc = 0x3F0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0C40u;
        // 0x3f0c44: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0C48u;
        goto label_3f0c48;
    }
    ctx->pc = 0x3F0C40u;
    {
        const bool branch_taken_0x3f0c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0c40) {
            ctx->pc = 0x3F0C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0C40u;
            // 0x3f0c44: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0CA4u;
            goto label_3f0ca4;
        }
    }
    ctx->pc = 0x3F0C48u;
label_3f0c48:
    // 0x3f0c48: 0x3c01c40b  lui         $at, 0xC40B
    ctx->pc = 0x3f0c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50187 << 16));
label_3f0c4c:
    // 0x3f0c4c: 0x34213666  ori         $at, $at, 0x3666
    ctx->pc = 0x3f0c4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13926);
label_3f0c50:
    // 0x3f0c50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f0c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0c54:
    // 0x3f0c54: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f0c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f0c58:
    // 0x3f0c58: 0x3c01c374  lui         $at, 0xC374
    ctx->pc = 0x3f0c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50036 << 16));
label_3f0c5c:
    // 0x3f0c5c: 0x3421f78d  ori         $at, $at, 0xF78D
    ctx->pc = 0x3f0c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63373);
label_3f0c60:
    // 0x3f0c60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f0c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0c64:
    // 0x3f0c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0c68:
    // 0x3f0c68: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x3f0c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
label_3f0c6c:
    // 0x3f0c6c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3f0c6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3f0c70:
    // 0x3f0c70: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f0c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f0c74:
    // 0x3f0c74: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3f0c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3f0c78:
    // 0x3f0c78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f0c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f0c7c:
    // 0x3f0c7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0c80:
    // 0x3f0c80: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f0c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f0c84:
    // 0x3f0c84: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f0c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f0c88:
    // 0x3f0c88: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f0c88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f0c8c:
    // 0x3f0c8c: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f0c8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f0c90:
    // 0x3f0c90: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f0c90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0c94:
    // 0x3f0c94: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f0c94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f0c98:
    // 0x3f0c98: 0xc0e858c  jal         func_3A1630
label_3f0c9c:
    if (ctx->pc == 0x3F0C9Cu) {
        ctx->pc = 0x3F0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0C98u;
        // 0x3f0c9c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0CA0u;
        goto label_3f0ca0;
    }
    ctx->pc = 0x3F0C98u;
    SET_GPR_U32(ctx, 31, 0x3F0CA0u);
    ctx->pc = 0x3F0C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C98u;
    // 0x3f0c9c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F0C98u, 0x3F0CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0CA0u;
label_3f0ca0:
    // 0x3f0ca0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f0ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f0ca4:
    // 0x3f0ca4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f0ca8:
    // 0x3f0ca8: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_3f0cac:
    if (ctx->pc == 0x3F0CACu) {
        ctx->pc = 0x3F0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0CA8u;
        // 0x3f0cac: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0CB0u;
        goto label_3f0cb0;
    }
    ctx->pc = 0x3F0CA8u;
    {
        const bool branch_taken_0x3f0ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0ca8) {
            ctx->pc = 0x3F0CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0CA8u;
            // 0x3f0cac: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0D14u;
            goto label_3f0d14;
        }
    }
    ctx->pc = 0x3F0CB0u;
label_3f0cb0:
    // 0x3f0cb0: 0x3c01c40b  lui         $at, 0xC40B
    ctx->pc = 0x3f0cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50187 << 16));
label_3f0cb4:
    // 0x3f0cb4: 0x34213666  ori         $at, $at, 0x3666
    ctx->pc = 0x3f0cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13926);
label_3f0cb8:
    // 0x3f0cb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f0cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0cbc:
    // 0x3f0cbc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f0cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f0cc0:
    // 0x3f0cc0: 0x3c01c371  lui         $at, 0xC371
    ctx->pc = 0x3f0cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50033 << 16));
label_3f0cc4:
    // 0x3f0cc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f0cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0cc8:
    // 0x3f0cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0ccc:
    // 0x3f0ccc: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x3f0cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
label_3f0cd0:
    // 0x3f0cd0: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3f0cd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3f0cd4:
    // 0x3f0cd4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f0cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f0cd8:
    // 0x3f0cd8: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x3f0cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_3f0cdc:
    // 0x3f0cdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f0cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f0ce0:
    // 0x3f0ce0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0ce4:
    // 0x3f0ce4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f0ce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f0ce8:
    // 0x3f0ce8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f0ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f0cec:
    // 0x3f0cec: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f0cecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f0cf0:
    // 0x3f0cf0: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f0cf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f0cf4:
    // 0x3f0cf4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f0cf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0cf8:
    // 0x3f0cf8: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f0cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f0cfc:
    // 0x3f0cfc: 0xc0e858c  jal         func_3A1630
label_3f0d00:
    if (ctx->pc == 0x3F0D00u) {
        ctx->pc = 0x3F0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0CFCu;
        // 0x3f0d00: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0D04u;
        goto label_3f0d04;
    }
    ctx->pc = 0x3F0CFCu;
    SET_GPR_U32(ctx, 31, 0x3F0D04u);
    ctx->pc = 0x3F0D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0CFCu;
    // 0x3f0d00: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F0CFCu, 0x3F0D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0D04u;
label_3f0d04:
    // 0x3f0d04: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3f0d08:
    // 0x3f0d08: 0x3442ffb0  ori         $v0, $v0, 0xFFB0
    ctx->pc = 0x3f0d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65456);
label_3f0d0c:
    // 0x3f0d0c: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x3f0d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_3f0d10:
    // 0x3f0d10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f0d14:
    // 0x3f0d14: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3f0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f0d18:
    // 0x3f0d18: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
label_3f0d1c:
    if (ctx->pc == 0x3F0D1Cu) {
        ctx->pc = 0x3F0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0D18u;
        // 0x3f0d1c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0D20u;
        goto label_3f0d20;
    }
    ctx->pc = 0x3F0D18u;
    {
        const bool branch_taken_0x3f0d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0d18) {
            ctx->pc = 0x3F0D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0D18u;
            // 0x3f0d1c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0D7Cu;
            goto label_3f0d7c;
        }
    }
    ctx->pc = 0x3F0D20u;
label_3f0d20:
    // 0x3f0d20: 0x3c01c40b  lui         $at, 0xC40B
    ctx->pc = 0x3f0d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50187 << 16));
label_3f0d24:
    // 0x3f0d24: 0x34213666  ori         $at, $at, 0x3666
    ctx->pc = 0x3f0d24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13926);
label_3f0d28:
    // 0x3f0d28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f0d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0d2c:
    // 0x3f0d2c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f0d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f0d30:
    // 0x3f0d30: 0x3c01c371  lui         $at, 0xC371
    ctx->pc = 0x3f0d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50033 << 16));
label_3f0d34:
    // 0x3f0d34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3f0d34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3f0d38:
    // 0x3f0d38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f0d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0d3c:
    // 0x3f0d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0d40:
    // 0x3f0d40: 0x3c01bc54  lui         $at, 0xBC54
    ctx->pc = 0x3f0d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48212 << 16));
label_3f0d44:
    // 0x3f0d44: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x3f0d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
label_3f0d48:
    // 0x3f0d48: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f0d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f0d4c:
    // 0x3f0d4c: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x3f0d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_3f0d50:
    // 0x3f0d50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f0d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f0d54:
    // 0x3f0d54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0d58:
    // 0x3f0d58: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f0d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f0d5c:
    // 0x3f0d5c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f0d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f0d60:
    // 0x3f0d60: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f0d60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f0d64:
    // 0x3f0d64: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f0d64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f0d68:
    // 0x3f0d68: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f0d68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0d6c:
    // 0x3f0d6c: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f0d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f0d70:
    // 0x3f0d70: 0xc0e858c  jal         func_3A1630
label_3f0d74:
    if (ctx->pc == 0x3F0D74u) {
        ctx->pc = 0x3F0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0D70u;
        // 0x3f0d74: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0D78u;
        goto label_3f0d78;
    }
    ctx->pc = 0x3F0D70u;
    SET_GPR_U32(ctx, 31, 0x3F0D78u);
    ctx->pc = 0x3F0D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0D70u;
    // 0x3f0d74: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F0D70u, 0x3F0D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0D78u;
label_3f0d78:
    // 0x3f0d78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f0d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f0d7c:
    // 0x3f0d7c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3f0d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3f0d80:
    // 0x3f0d80: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
label_3f0d84:
    if (ctx->pc == 0x3F0D84u) {
        ctx->pc = 0x3F0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0D80u;
        // 0x3f0d84: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0D88u;
        goto label_3f0d88;
    }
    ctx->pc = 0x3F0D80u;
    {
        const bool branch_taken_0x3f0d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0d80) {
            ctx->pc = 0x3F0D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0D80u;
            // 0x3f0d84: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0DE4u;
            goto label_3f0de4;
        }
    }
    ctx->pc = 0x3F0D88u;
label_3f0d88:
    // 0x3f0d88: 0x3c01c40b  lui         $at, 0xC40B
    ctx->pc = 0x3f0d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50187 << 16));
label_3f0d8c:
    // 0x3f0d8c: 0x34213666  ori         $at, $at, 0x3666
    ctx->pc = 0x3f0d8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13926);
label_3f0d90:
    // 0x3f0d90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f0d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0d94:
    // 0x3f0d94: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f0d98:
    // 0x3f0d98: 0x3c01c372  lui         $at, 0xC372
    ctx->pc = 0x3f0d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50034 << 16));
label_3f0d9c:
    // 0x3f0d9c: 0x3421e106  ori         $at, $at, 0xE106
    ctx->pc = 0x3f0d9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57606);
label_3f0da0:
    // 0x3f0da0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f0da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0da4:
    // 0x3f0da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0da8:
    // 0x3f0da8: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x3f0da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
label_3f0dac:
    // 0x3f0dac: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3f0dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3f0db0:
    // 0x3f0db0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f0db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f0db4:
    // 0x3f0db4: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x3f0db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_3f0db8:
    // 0x3f0db8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f0db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f0dbc:
    // 0x3f0dbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0dc0:
    // 0x3f0dc0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f0dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f0dc4:
    // 0x3f0dc4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f0dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f0dc8:
    // 0x3f0dc8: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f0dc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f0dcc:
    // 0x3f0dcc: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f0dccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f0dd0:
    // 0x3f0dd0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f0dd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0dd4:
    // 0x3f0dd4: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f0dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f0dd8:
    // 0x3f0dd8: 0xc0e858c  jal         func_3A1630
label_3f0ddc:
    if (ctx->pc == 0x3F0DDCu) {
        ctx->pc = 0x3F0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0DD8u;
        // 0x3f0ddc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0DE0u;
        goto label_3f0de0;
    }
    ctx->pc = 0x3F0DD8u;
    SET_GPR_U32(ctx, 31, 0x3F0DE0u);
    ctx->pc = 0x3F0DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0DD8u;
    // 0x3f0ddc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F0DD8u, 0x3F0DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0DE0u;
label_3f0de0:
    // 0x3f0de0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f0de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f0de4:
    // 0x3f0de4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3f0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3f0de8:
    // 0x3f0de8: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
label_3f0dec:
    if (ctx->pc == 0x3F0DECu) {
        ctx->pc = 0x3F0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0DE8u;
        // 0x3f0dec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0DF0u;
        goto label_3f0df0;
    }
    ctx->pc = 0x3F0DE8u;
    {
        const bool branch_taken_0x3f0de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0de8) {
            ctx->pc = 0x3F0DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F0DE8u;
            // 0x3f0dec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F0E58u;
            goto label_3f0e58;
        }
    }
    ctx->pc = 0x3F0DF0u;
label_3f0df0:
    // 0x3f0df0: 0x3c01c40b  lui         $at, 0xC40B
    ctx->pc = 0x3f0df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50187 << 16));
label_3f0df4:
    // 0x3f0df4: 0x34213666  ori         $at, $at, 0x3666
    ctx->pc = 0x3f0df4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13926);
label_3f0df8:
    // 0x3f0df8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f0df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0dfc:
    // 0x3f0dfc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3f0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f0e00:
    // 0x3f0e00: 0x3c01c373  lui         $at, 0xC373
    ctx->pc = 0x3f0e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50035 << 16));
label_3f0e04:
    // 0x3f0e04: 0x34211db2  ori         $at, $at, 0x1DB2
    ctx->pc = 0x3f0e04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7602);
label_3f0e08:
    // 0x3f0e08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f0e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0e0c:
    // 0x3f0e0c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3f0e10:
    // 0x3f0e10: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x3f0e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
label_3f0e14:
    // 0x3f0e14: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3f0e14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3f0e18:
    // 0x3f0e18: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f0e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f0e1c:
    // 0x3f0e1c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3f0e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3f0e20:
    // 0x3f0e20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f0e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f0e24:
    // 0x3f0e24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0e28:
    // 0x3f0e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0e2c:
    // 0x3f0e2c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f0e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f0e30:
    // 0x3f0e30: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3f0e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3f0e34:
    // 0x3f0e34: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3f0e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3f0e38:
    // 0x3f0e38: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3f0e38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3f0e3c:
    // 0x3f0e3c: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x3f0e3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3f0e40:
    // 0x3f0e40: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x3f0e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
label_3f0e44:
    // 0x3f0e44: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f0e44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0e48:
    // 0x3f0e48: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f0e48u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f0e4c:
    // 0x3f0e4c: 0xc0e858c  jal         func_3A1630
label_3f0e50:
    if (ctx->pc == 0x3F0E50u) {
        ctx->pc = 0x3F0E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0E4Cu;
        // 0x3f0e50: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0E54u;
        goto label_3f0e54;
    }
    ctx->pc = 0x3F0E4Cu;
    SET_GPR_U32(ctx, 31, 0x3F0E54u);
    ctx->pc = 0x3F0E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0E4Cu;
    // 0x3f0e50: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F0E4Cu, 0x3F0E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0E54u;
label_3f0e54:
    // 0x3f0e54: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f0e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f0e58:
    // 0x3f0e58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f0e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0e5c:
    // 0x3f0e5c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3f0e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f0e60:
    // 0x3f0e60: 0x38630008  xori        $v1, $v1, 0x8
    ctx->pc = 0x3f0e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
label_3f0e64:
    // 0x3f0e64: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3f0e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f0e68:
    // 0x3f0e68: 0x243100a  movz        $v0, $s2, $v1
    ctx->pc = 0x3f0e68u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
label_3f0e6c:
    // 0x3f0e6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f0e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0e70:
    // 0x3f0e70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f0e70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f0e74:
    // 0x3f0e74: 0x3e00008  jr          $ra
label_3f0e78:
    if (ctx->pc == 0x3F0E78u) {
        ctx->pc = 0x3F0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0E74u;
        // 0x3f0e78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0E7Cu;
        goto label_3f0e7c;
    }
    ctx->pc = 0x3F0E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0E74u;
        // 0x3f0e78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F0E7Cu;
label_3f0e7c:
    // 0x3f0e7c: 0x0  nop
    ctx->pc = 0x3f0e7cu;
    // NOP
    ctx->pc = 0x3f0e80u;
}
