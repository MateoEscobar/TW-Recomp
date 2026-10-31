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

// Function: sub_002C5C10
// Address: 0x2c5c10 - 0x2c5e10
void sub_002C5C10_0x2c5c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5C10_0x2c5c10");
#endif

    switch (ctx->pc) {
        case 0x2c5c10u: goto label_2c5c10;
        case 0x2c5c14u: goto label_2c5c14;
        case 0x2c5c18u: goto label_2c5c18;
        case 0x2c5c1cu: goto label_2c5c1c;
        case 0x2c5c20u: goto label_2c5c20;
        case 0x2c5c24u: goto label_2c5c24;
        case 0x2c5c28u: goto label_2c5c28;
        case 0x2c5c2cu: goto label_2c5c2c;
        case 0x2c5c30u: goto label_2c5c30;
        case 0x2c5c34u: goto label_2c5c34;
        case 0x2c5c38u: goto label_2c5c38;
        case 0x2c5c3cu: goto label_2c5c3c;
        case 0x2c5c40u: goto label_2c5c40;
        case 0x2c5c44u: goto label_2c5c44;
        case 0x2c5c48u: goto label_2c5c48;
        case 0x2c5c4cu: goto label_2c5c4c;
        case 0x2c5c50u: goto label_2c5c50;
        case 0x2c5c54u: goto label_2c5c54;
        case 0x2c5c58u: goto label_2c5c58;
        case 0x2c5c5cu: goto label_2c5c5c;
        case 0x2c5c60u: goto label_2c5c60;
        case 0x2c5c64u: goto label_2c5c64;
        case 0x2c5c68u: goto label_2c5c68;
        case 0x2c5c6cu: goto label_2c5c6c;
        case 0x2c5c70u: goto label_2c5c70;
        case 0x2c5c74u: goto label_2c5c74;
        case 0x2c5c78u: goto label_2c5c78;
        case 0x2c5c7cu: goto label_2c5c7c;
        case 0x2c5c80u: goto label_2c5c80;
        case 0x2c5c84u: goto label_2c5c84;
        case 0x2c5c88u: goto label_2c5c88;
        case 0x2c5c8cu: goto label_2c5c8c;
        case 0x2c5c90u: goto label_2c5c90;
        case 0x2c5c94u: goto label_2c5c94;
        case 0x2c5c98u: goto label_2c5c98;
        case 0x2c5c9cu: goto label_2c5c9c;
        case 0x2c5ca0u: goto label_2c5ca0;
        case 0x2c5ca4u: goto label_2c5ca4;
        case 0x2c5ca8u: goto label_2c5ca8;
        case 0x2c5cacu: goto label_2c5cac;
        case 0x2c5cb0u: goto label_2c5cb0;
        case 0x2c5cb4u: goto label_2c5cb4;
        case 0x2c5cb8u: goto label_2c5cb8;
        case 0x2c5cbcu: goto label_2c5cbc;
        case 0x2c5cc0u: goto label_2c5cc0;
        case 0x2c5cc4u: goto label_2c5cc4;
        case 0x2c5cc8u: goto label_2c5cc8;
        case 0x2c5cccu: goto label_2c5ccc;
        case 0x2c5cd0u: goto label_2c5cd0;
        case 0x2c5cd4u: goto label_2c5cd4;
        case 0x2c5cd8u: goto label_2c5cd8;
        case 0x2c5cdcu: goto label_2c5cdc;
        case 0x2c5ce0u: goto label_2c5ce0;
        case 0x2c5ce4u: goto label_2c5ce4;
        case 0x2c5ce8u: goto label_2c5ce8;
        case 0x2c5cecu: goto label_2c5cec;
        case 0x2c5cf0u: goto label_2c5cf0;
        case 0x2c5cf4u: goto label_2c5cf4;
        case 0x2c5cf8u: goto label_2c5cf8;
        case 0x2c5cfcu: goto label_2c5cfc;
        case 0x2c5d00u: goto label_2c5d00;
        case 0x2c5d04u: goto label_2c5d04;
        case 0x2c5d08u: goto label_2c5d08;
        case 0x2c5d0cu: goto label_2c5d0c;
        case 0x2c5d10u: goto label_2c5d10;
        case 0x2c5d14u: goto label_2c5d14;
        case 0x2c5d18u: goto label_2c5d18;
        case 0x2c5d1cu: goto label_2c5d1c;
        case 0x2c5d20u: goto label_2c5d20;
        case 0x2c5d24u: goto label_2c5d24;
        case 0x2c5d28u: goto label_2c5d28;
        case 0x2c5d2cu: goto label_2c5d2c;
        case 0x2c5d30u: goto label_2c5d30;
        case 0x2c5d34u: goto label_2c5d34;
        case 0x2c5d38u: goto label_2c5d38;
        case 0x2c5d3cu: goto label_2c5d3c;
        case 0x2c5d40u: goto label_2c5d40;
        case 0x2c5d44u: goto label_2c5d44;
        case 0x2c5d48u: goto label_2c5d48;
        case 0x2c5d4cu: goto label_2c5d4c;
        case 0x2c5d50u: goto label_2c5d50;
        case 0x2c5d54u: goto label_2c5d54;
        case 0x2c5d58u: goto label_2c5d58;
        case 0x2c5d5cu: goto label_2c5d5c;
        case 0x2c5d60u: goto label_2c5d60;
        case 0x2c5d64u: goto label_2c5d64;
        case 0x2c5d68u: goto label_2c5d68;
        case 0x2c5d6cu: goto label_2c5d6c;
        case 0x2c5d70u: goto label_2c5d70;
        case 0x2c5d74u: goto label_2c5d74;
        case 0x2c5d78u: goto label_2c5d78;
        case 0x2c5d7cu: goto label_2c5d7c;
        case 0x2c5d80u: goto label_2c5d80;
        case 0x2c5d84u: goto label_2c5d84;
        case 0x2c5d88u: goto label_2c5d88;
        case 0x2c5d8cu: goto label_2c5d8c;
        case 0x2c5d90u: goto label_2c5d90;
        case 0x2c5d94u: goto label_2c5d94;
        case 0x2c5d98u: goto label_2c5d98;
        case 0x2c5d9cu: goto label_2c5d9c;
        case 0x2c5da0u: goto label_2c5da0;
        case 0x2c5da4u: goto label_2c5da4;
        case 0x2c5da8u: goto label_2c5da8;
        case 0x2c5dacu: goto label_2c5dac;
        case 0x2c5db0u: goto label_2c5db0;
        case 0x2c5db4u: goto label_2c5db4;
        case 0x2c5db8u: goto label_2c5db8;
        case 0x2c5dbcu: goto label_2c5dbc;
        case 0x2c5dc0u: goto label_2c5dc0;
        case 0x2c5dc4u: goto label_2c5dc4;
        case 0x2c5dc8u: goto label_2c5dc8;
        case 0x2c5dccu: goto label_2c5dcc;
        case 0x2c5dd0u: goto label_2c5dd0;
        case 0x2c5dd4u: goto label_2c5dd4;
        case 0x2c5dd8u: goto label_2c5dd8;
        case 0x2c5ddcu: goto label_2c5ddc;
        case 0x2c5de0u: goto label_2c5de0;
        case 0x2c5de4u: goto label_2c5de4;
        case 0x2c5de8u: goto label_2c5de8;
        case 0x2c5decu: goto label_2c5dec;
        case 0x2c5df0u: goto label_2c5df0;
        case 0x2c5df4u: goto label_2c5df4;
        case 0x2c5df8u: goto label_2c5df8;
        case 0x2c5dfcu: goto label_2c5dfc;
        case 0x2c5e00u: goto label_2c5e00;
        case 0x2c5e04u: goto label_2c5e04;
        case 0x2c5e08u: goto label_2c5e08;
        case 0x2c5e0cu: goto label_2c5e0c;
        default: break;
    }

    ctx->pc = 0x2c5c10u;

label_2c5c10:
    // 0x2c5c10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c5c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2c5c14:
    // 0x2c5c14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2c5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2c5c18:
    // 0x2c5c18: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2c5c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2c5c1c:
    // 0x2c5c1c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2c5c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2c5c20:
    // 0x2c5c20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c5c24:
    // 0x2c5c24: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2c5c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2c5c28:
    // 0x2c5c28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c5c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c5c2c:
    // 0x2c5c2c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2c5c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2c5c30:
    // 0x2c5c30: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2c5c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_2c5c34:
    // 0x2c5c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c5c38:
    // 0x2c5c38: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x2c5c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2c5c3c:
    // 0x2c5c3c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2c5c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2c5c40:
    // 0x2c5c40: 0x1064006a  beq         $v1, $a0, . + 4 + (0x6A << 2)
label_2c5c44:
    if (ctx->pc == 0x2C5C44u) {
        ctx->pc = 0x2C5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C40u;
        // 0x2c5c44: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5C48u;
        goto label_2c5c48;
    }
    ctx->pc = 0x2C5C40u;
    {
        const bool branch_taken_0x2c5c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C40u;
        // 0x2c5c44: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c40) {
            ctx->pc = 0x2C5DECu;
            goto label_2c5dec;
        }
    }
    ctx->pc = 0x2C5C48u;
label_2c5c48:
    // 0x2c5c48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c5c4c:
    // 0x2c5c4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c5c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c5c50:
    // 0x2c5c50: 0xc0e409a  jal         func_390268
label_2c5c54:
    if (ctx->pc == 0x2C5C54u) {
        ctx->pc = 0x2C5C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C50u;
        // 0x2c5c54: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5C58u;
        goto label_2c5c58;
    }
    ctx->pc = 0x2C5C50u;
    SET_GPR_U32(ctx, 31, 0x2C5C58u);
    ctx->pc = 0x2C5C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5C50u;
    // 0x2c5c54: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C5C50u, 0x2C5C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5C58u;
label_2c5c58:
    // 0x2c5c58: 0x12600064  beqz        $s3, . + 4 + (0x64 << 2)
label_2c5c5c:
    if (ctx->pc == 0x2C5C5Cu) {
        ctx->pc = 0x2C5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C58u;
        // 0x2c5c5c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5C60u;
        goto label_2c5c60;
    }
    ctx->pc = 0x2C5C58u;
    {
        const bool branch_taken_0x2c5c58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C58u;
        // 0x2c5c5c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c58) {
            ctx->pc = 0x2C5DECu;
            goto label_2c5dec;
        }
    }
    ctx->pc = 0x2C5C60u;
label_2c5c60:
    // 0x2c5c60: 0x12400062  beqz        $s2, . + 4 + (0x62 << 2)
label_2c5c64:
    if (ctx->pc == 0x2C5C64u) {
        ctx->pc = 0x2C5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C60u;
        // 0x2c5c64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5C68u;
        goto label_2c5c68;
    }
    ctx->pc = 0x2C5C60u;
    {
        const bool branch_taken_0x2c5c60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C60u;
        // 0x2c5c64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c60) {
            ctx->pc = 0x2C5DECu;
            goto label_2c5dec;
        }
    }
    ctx->pc = 0x2C5C68u;
label_2c5c68:
    // 0x2c5c68: 0xc087502  jal         func_21D408
label_2c5c6c:
    if (ctx->pc == 0x2C5C6Cu) {
        ctx->pc = 0x2C5C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C68u;
        // 0x2c5c6c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5C70u;
        goto label_2c5c70;
    }
    ctx->pc = 0x2C5C68u;
    SET_GPR_U32(ctx, 31, 0x2C5C70u);
    ctx->pc = 0x2C5C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5C68u;
    // 0x2c5c6c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C5C68u, 0x2C5C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5C70u;
label_2c5c70:
    // 0x2c5c70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c5c70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c5c74:
    // 0x2c5c74: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x2c5c74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2c5c78:
    // 0x2c5c78: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2c5c7c:
    if (ctx->pc == 0x2C5C7Cu) {
        ctx->pc = 0x2C5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C78u;
        // 0x2c5c7c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5C80u;
        goto label_2c5c80;
    }
    ctx->pc = 0x2C5C78u;
    {
        const bool branch_taken_0x2c5c78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C78u;
        // 0x2c5c7c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c78) {
            ctx->pc = 0x2C5C8Cu;
            goto label_2c5c8c;
        }
    }
    ctx->pc = 0x2C5C80u;
label_2c5c80:
    // 0x2c5c80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c5c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c5c84:
    // 0x2c5c84: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c5c88:
    if (ctx->pc == 0x2C5C88u) {
        ctx->pc = 0x2C5C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C84u;
        // 0x2c5c88: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5C8Cu;
        goto label_2c5c8c;
    }
    ctx->pc = 0x2C5C84u;
    {
        const bool branch_taken_0x2c5c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C84u;
        // 0x2c5c88: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c84) {
            ctx->pc = 0x2C5C90u;
            goto label_2c5c90;
        }
    }
    ctx->pc = 0x2C5C8Cu;
label_2c5c8c:
    // 0x2c5c8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5c90:
    // 0x2c5c90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c5c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c5c94:
    // 0x2c5c94: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2c5c98:
    if (ctx->pc == 0x2C5C98u) {
        ctx->pc = 0x2C5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C94u;
        // 0x2c5c98: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5C9Cu;
        goto label_2c5c9c;
    }
    ctx->pc = 0x2C5C94u;
    {
        const bool branch_taken_0x2c5c94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C94u;
        // 0x2c5c98: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c94) {
            ctx->pc = 0x2C5CD8u;
            goto label_2c5cd8;
        }
    }
    ctx->pc = 0x2C5C9Cu;
label_2c5c9c:
    // 0x2c5c9c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2c5c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c5ca0:
    // 0x2c5ca0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2c5ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2c5ca4:
    // 0x2c5ca4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c5ca8:
    // 0x2c5ca8: 0x40f809  jalr        $v0
label_2c5cac:
    if (ctx->pc == 0x2C5CACu) {
        ctx->pc = 0x2C5CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5CA8u;
        // 0x2c5cac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5CB0u;
        goto label_2c5cb0;
    }
    ctx->pc = 0x2C5CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C5CB0u);
        ctx->pc = 0x2C5CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5CA8u;
        // 0x2c5cac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5CA8u, 0x2C5CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C5CB0u;
label_2c5cb0:
    // 0x2c5cb0: 0x3842007b  xori        $v0, $v0, 0x7B
    ctx->pc = 0x2c5cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)123);
label_2c5cb4:
    // 0x2c5cb4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2c5cb8:
    if (ctx->pc == 0x2C5CB8u) {
        ctx->pc = 0x2C5CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5CB4u;
        // 0x2c5cb8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5CBCu;
        goto label_2c5cbc;
    }
    ctx->pc = 0x2C5CB4u;
    {
        const bool branch_taken_0x2c5cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5cb4) {
            ctx->pc = 0x2C5CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5CB4u;
            // 0x2c5cb8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5CDCu;
            goto label_2c5cdc;
        }
    }
    ctx->pc = 0x2C5CBCu;
label_2c5cbc:
    // 0x2c5cbc: 0x8202001f  lb          $v0, 0x1F($s0)
    ctx->pc = 0x2c5cbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
label_2c5cc0:
    // 0x2c5cc0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c5cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c5cc4:
    // 0x2c5cc4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_2c5cc8:
    if (ctx->pc == 0x2C5CC8u) {
        ctx->pc = 0x2C5CCCu;
        goto label_2c5ccc;
    }
    ctx->pc = 0x2C5CC4u;
    {
        const bool branch_taken_0x2c5cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c5cc4) {
            ctx->pc = 0x2C5CDCu;
            goto label_2c5cdc;
        }
    }
    ctx->pc = 0x2C5CCCu;
label_2c5ccc:
    // 0x2c5ccc: 0x8222001f  lb          $v0, 0x1F($s1)
    ctx->pc = 0x2c5cccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
label_2c5cd0:
    // 0x2c5cd0: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
label_2c5cd4:
    if (ctx->pc == 0x2C5CD4u) {
        ctx->pc = 0x2C5CD8u;
        goto label_2c5cd8;
    }
    ctx->pc = 0x2C5CD0u;
    {
        const bool branch_taken_0x2c5cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c5cd0) {
            ctx->pc = 0x2C5CDCu;
            goto label_2c5cdc;
        }
    }
    ctx->pc = 0x2C5CD8u;
label_2c5cd8:
    // 0x2c5cd8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2c5cd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5cdc:
    // 0x2c5cdc: 0x56a00044  bnel        $s5, $zero, . + 4 + (0x44 << 2)
label_2c5ce0:
    if (ctx->pc == 0x2C5CE0u) {
        ctx->pc = 0x2C5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5CDCu;
        // 0x2c5ce0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5CE4u;
        goto label_2c5ce4;
    }
    ctx->pc = 0x2C5CDCu;
    {
        const bool branch_taken_0x2c5cdc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5cdc) {
            ctx->pc = 0x2C5CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5CDCu;
            // 0x2c5ce0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5DF0u;
            goto label_2c5df0;
        }
    }
    ctx->pc = 0x2C5CE4u;
label_2c5ce4:
    // 0x2c5ce4: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x2c5ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_2c5ce8:
    // 0x2c5ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5cec:
    // 0x2c5cec: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_2c5cf0:
    if (ctx->pc == 0x2C5CF0u) {
        ctx->pc = 0x2C5CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5CECu;
        // 0x2c5cf0: 0x826203b8  lb          $v0, 0x3B8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5CF4u;
        goto label_2c5cf4;
    }
    ctx->pc = 0x2C5CECu;
    {
        const bool branch_taken_0x2c5cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c5cec) {
            ctx->pc = 0x2C5CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5CECu;
            // 0x2c5cf0: 0x826203b8  lb          $v0, 0x3B8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5D3Cu;
            goto label_2c5d3c;
        }
    }
    ctx->pc = 0x2C5CF4u;
label_2c5cf4:
    // 0x2c5cf4: 0xc0e409a  jal         func_390268
label_2c5cf8:
    if (ctx->pc == 0x2C5CF8u) {
        ctx->pc = 0x2C5CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5CF4u;
        // 0x2c5cf8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5CFCu;
        goto label_2c5cfc;
    }
    ctx->pc = 0x2C5CF4u;
    SET_GPR_U32(ctx, 31, 0x2C5CFCu);
    ctx->pc = 0x2C5CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5CF4u;
    // 0x2c5cf8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C5CF4u, 0x2C5CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5CFCu;
label_2c5cfc:
    // 0x2c5cfc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c5cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c5d00:
    // 0x2c5d00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c5d00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c5d04:
    // 0x2c5d04: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x2c5d04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c5d08:
    // 0x2c5d08: 0xc087502  jal         func_21D408
label_2c5d0c:
    if (ctx->pc == 0x2C5D0Cu) {
        ctx->pc = 0x2C5D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D08u;
        // 0x2c5d0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5D10u;
        goto label_2c5d10;
    }
    ctx->pc = 0x2C5D08u;
    SET_GPR_U32(ctx, 31, 0x2C5D10u);
    ctx->pc = 0x2C5D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5D08u;
    // 0x2c5d0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C5D08u, 0x2C5D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D10u;
label_2c5d10:
    // 0x2c5d10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c5d10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c5d14:
    // 0x2c5d14: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x2c5d14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2c5d18:
    // 0x2c5d18: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2c5d1c:
    if (ctx->pc == 0x2C5D1Cu) {
        ctx->pc = 0x2C5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D18u;
        // 0x2c5d1c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5D20u;
        goto label_2c5d20;
    }
    ctx->pc = 0x2C5D18u;
    {
        const bool branch_taken_0x2c5d18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D18u;
        // 0x2c5d1c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d18) {
            ctx->pc = 0x2C5D2Cu;
            goto label_2c5d2c;
        }
    }
    ctx->pc = 0x2C5D20u;
label_2c5d20:
    // 0x2c5d20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c5d24:
    // 0x2c5d24: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c5d28:
    if (ctx->pc == 0x2C5D28u) {
        ctx->pc = 0x2C5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D24u;
        // 0x2c5d28: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5D2Cu;
        goto label_2c5d2c;
    }
    ctx->pc = 0x2C5D24u;
    {
        const bool branch_taken_0x2c5d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D24u;
        // 0x2c5d28: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d24) {
            ctx->pc = 0x2C5D30u;
            goto label_2c5d30;
        }
    }
    ctx->pc = 0x2C5D2Cu;
label_2c5d2c:
    // 0x2c5d2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5d30:
    // 0x2c5d30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c5d30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c5d34:
    // 0x2c5d34: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2c5d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5d38:
    // 0x2c5d38: 0x826203b8  lb          $v0, 0x3B8($s3)
    ctx->pc = 0x2c5d38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 952)));
label_2c5d3c:
    // 0x2c5d3c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2c5d3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5d40:
    // 0x2c5d40: 0x14550016  bne         $v0, $s5, . + 4 + (0x16 << 2)
label_2c5d44:
    if (ctx->pc == 0x2C5D44u) {
        ctx->pc = 0x2C5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D40u;
        // 0x2c5d44: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5D48u;
        goto label_2c5d48;
    }
    ctx->pc = 0x2C5D40u;
    {
        const bool branch_taken_0x2c5d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2C5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D40u;
        // 0x2c5d44: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d40) {
            ctx->pc = 0x2C5D9Cu;
            goto label_2c5d9c;
        }
    }
    ctx->pc = 0x2C5D48u;
label_2c5d48:
    // 0x2c5d48: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2c5d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2c5d4c:
    // 0x2c5d4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c5d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c5d50:
    // 0x2c5d50: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2c5d50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2c5d54:
    // 0x2c5d54: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2c5d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2c5d58:
    // 0x2c5d58: 0x40f809  jalr        $v0
label_2c5d5c:
    if (ctx->pc == 0x2C5D5Cu) {
        ctx->pc = 0x2C5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D58u;
        // 0x2c5d5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5D60u;
        goto label_2c5d60;
    }
    ctx->pc = 0x2C5D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C5D60u);
        ctx->pc = 0x2C5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D58u;
        // 0x2c5d5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5D58u, 0x2C5D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C5D60u;
label_2c5d60:
    // 0x2c5d60: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2c5d60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2c5d64:
    // 0x2c5d64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c5d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c5d68:
    // 0x2c5d68: 0x8e0610e0  lw          $a2, 0x10E0($s0)
    ctx->pc = 0x2c5d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4320)));
label_2c5d6c:
    // 0x2c5d6c: 0x2405014e  addiu       $a1, $zero, 0x14E
    ctx->pc = 0x2c5d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
label_2c5d70:
    // 0x2c5d70: 0xc0886a8  jal         func_221AA0
label_2c5d74:
    if (ctx->pc == 0x2C5D74u) {
        ctx->pc = 0x2C5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D70u;
        // 0x2c5d74: 0x261010e0  addiu       $s0, $s0, 0x10E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5D78u;
        goto label_2c5d78;
    }
    ctx->pc = 0x2C5D70u;
    SET_GPR_U32(ctx, 31, 0x2C5D78u);
    ctx->pc = 0x2C5D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5D70u;
    // 0x2c5d74: 0x261010e0  addiu       $s0, $s0, 0x10E0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2C5D70u, 0x2C5D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D78u;
label_2c5d78:
    // 0x2c5d78: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2c5d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c5d7c:
    // 0x2c5d7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c5d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c5d80:
    // 0x2c5d80: 0xc0886a8  jal         func_221AA0
label_2c5d84:
    if (ctx->pc == 0x2C5D84u) {
        ctx->pc = 0x2C5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D80u;
        // 0x2c5d84: 0x2405014e  addiu       $a1, $zero, 0x14E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5D88u;
        goto label_2c5d88;
    }
    ctx->pc = 0x2C5D80u;
    SET_GPR_U32(ctx, 31, 0x2C5D88u);
    ctx->pc = 0x2C5D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5D80u;
    // 0x2c5d84: 0x2405014e  addiu       $a1, $zero, 0x14E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2C5D80u, 0x2C5D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D88u;
label_2c5d88:
    // 0x2c5d88: 0xa280001f  sb          $zero, 0x1F($s4)
    ctx->pc = 0x2c5d88u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 31), (uint8_t)GPR_U32(ctx, 0));
label_2c5d8c:
    // 0x2c5d8c: 0xa235001f  sb          $s5, 0x1F($s1)
    ctx->pc = 0x2c5d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 31), (uint8_t)GPR_U32(ctx, 21));
label_2c5d90:
    // 0x2c5d90: 0xa280001d  sb          $zero, 0x1D($s4)
    ctx->pc = 0x2c5d90u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 29), (uint8_t)GPR_U32(ctx, 0));
label_2c5d94:
    // 0x2c5d94: 0x10000015  b           . + 4 + (0x15 << 2)
label_2c5d98:
    if (ctx->pc == 0x2C5D98u) {
        ctx->pc = 0x2C5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D94u;
        // 0x2c5d98: 0xa220001d  sb          $zero, 0x1D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5D9Cu;
        goto label_2c5d9c;
    }
    ctx->pc = 0x2C5D94u;
    {
        const bool branch_taken_0x2c5d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D94u;
        // 0x2c5d98: 0xa220001d  sb          $zero, 0x1D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d94) {
            ctx->pc = 0x2C5DECu;
            goto label_2c5dec;
        }
    }
    ctx->pc = 0x2C5D9Cu;
label_2c5d9c:
    // 0x2c5d9c: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2c5d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2c5da0:
    // 0x2c5da0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c5da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c5da4:
    // 0x2c5da4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2c5da4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2c5da8:
    // 0x2c5da8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2c5da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2c5dac:
    // 0x2c5dac: 0x40f809  jalr        $v0
label_2c5db0:
    if (ctx->pc == 0x2C5DB0u) {
        ctx->pc = 0x2C5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DACu;
        // 0x2c5db0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5DB4u;
        goto label_2c5db4;
    }
    ctx->pc = 0x2C5DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C5DB4u);
        ctx->pc = 0x2C5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DACu;
        // 0x2c5db0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5DACu, 0x2C5DB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C5DB4u;
label_2c5db4:
    // 0x2c5db4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2c5db4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2c5db8:
    // 0x2c5db8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c5db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c5dbc:
    // 0x2c5dbc: 0x8e0610e8  lw          $a2, 0x10E8($s0)
    ctx->pc = 0x2c5dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4328)));
label_2c5dc0:
    // 0x2c5dc0: 0x2405014e  addiu       $a1, $zero, 0x14E
    ctx->pc = 0x2c5dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
label_2c5dc4:
    // 0x2c5dc4: 0xc0886a8  jal         func_221AA0
label_2c5dc8:
    if (ctx->pc == 0x2C5DC8u) {
        ctx->pc = 0x2C5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DC4u;
        // 0x2c5dc8: 0x261010e8  addiu       $s0, $s0, 0x10E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5DCCu;
        goto label_2c5dcc;
    }
    ctx->pc = 0x2C5DC4u;
    SET_GPR_U32(ctx, 31, 0x2C5DCCu);
    ctx->pc = 0x2C5DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5DC4u;
    // 0x2c5dc8: 0x261010e8  addiu       $s0, $s0, 0x10E8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2C5DC4u, 0x2C5DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5DCCu;
label_2c5dcc:
    // 0x2c5dcc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2c5dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c5dd0:
    // 0x2c5dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c5dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c5dd4:
    // 0x2c5dd4: 0xc0886a8  jal         func_221AA0
label_2c5dd8:
    if (ctx->pc == 0x2C5DD8u) {
        ctx->pc = 0x2C5DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DD4u;
        // 0x2c5dd8: 0x2405014e  addiu       $a1, $zero, 0x14E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5DDCu;
        goto label_2c5ddc;
    }
    ctx->pc = 0x2C5DD4u;
    SET_GPR_U32(ctx, 31, 0x2C5DDCu);
    ctx->pc = 0x2C5DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5DD4u;
    // 0x2c5dd8: 0x2405014e  addiu       $a1, $zero, 0x14E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2C5DD4u, 0x2C5DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5DDCu;
label_2c5ddc:
    // 0x2c5ddc: 0xa280001f  sb          $zero, 0x1F($s4)
    ctx->pc = 0x2c5ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 31), (uint8_t)GPR_U32(ctx, 0));
label_2c5de0:
    // 0x2c5de0: 0xa235001f  sb          $s5, 0x1F($s1)
    ctx->pc = 0x2c5de0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 31), (uint8_t)GPR_U32(ctx, 21));
label_2c5de4:
    // 0x2c5de4: 0xa295001d  sb          $s5, 0x1D($s4)
    ctx->pc = 0x2c5de4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 29), (uint8_t)GPR_U32(ctx, 21));
label_2c5de8:
    // 0x2c5de8: 0xa235001d  sb          $s5, 0x1D($s1)
    ctx->pc = 0x2c5de8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 21));
label_2c5dec:
    // 0x2c5dec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2c5decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c5df0:
    // 0x2c5df0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2c5df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c5df4:
    // 0x2c5df4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2c5df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c5df8:
    // 0x2c5df8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c5df8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c5dfc:
    // 0x2c5dfc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2c5dfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c5e00:
    // 0x2c5e00: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2c5e00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c5e04:
    // 0x2c5e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c5e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c5e08:
    // 0x2c5e08: 0x3e00008  jr          $ra
label_2c5e0c:
    if (ctx->pc == 0x2C5E0Cu) {
        ctx->pc = 0x2C5E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E08u;
        // 0x2c5e0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5E10u;
        goto label_fallthrough_0x2c5e08;
    }
    ctx->pc = 0x2C5E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E08u;
        // 0x2c5e0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c5e08:
    ctx->pc = 0x2C5E10u;
}
