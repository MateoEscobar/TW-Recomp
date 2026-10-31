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

// Function: sub_003C6C48
// Address: 0x3c6c48 - 0x3c6df8
void sub_003C6C48_0x3c6c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6C48_0x3c6c48");
#endif

    switch (ctx->pc) {
        case 0x3c6c48u: goto label_3c6c48;
        case 0x3c6c4cu: goto label_3c6c4c;
        case 0x3c6c50u: goto label_3c6c50;
        case 0x3c6c54u: goto label_3c6c54;
        case 0x3c6c58u: goto label_3c6c58;
        case 0x3c6c5cu: goto label_3c6c5c;
        case 0x3c6c60u: goto label_3c6c60;
        case 0x3c6c64u: goto label_3c6c64;
        case 0x3c6c68u: goto label_3c6c68;
        case 0x3c6c6cu: goto label_3c6c6c;
        case 0x3c6c70u: goto label_3c6c70;
        case 0x3c6c74u: goto label_3c6c74;
        case 0x3c6c78u: goto label_3c6c78;
        case 0x3c6c7cu: goto label_3c6c7c;
        case 0x3c6c80u: goto label_3c6c80;
        case 0x3c6c84u: goto label_3c6c84;
        case 0x3c6c88u: goto label_3c6c88;
        case 0x3c6c8cu: goto label_3c6c8c;
        case 0x3c6c90u: goto label_3c6c90;
        case 0x3c6c94u: goto label_3c6c94;
        case 0x3c6c98u: goto label_3c6c98;
        case 0x3c6c9cu: goto label_3c6c9c;
        case 0x3c6ca0u: goto label_3c6ca0;
        case 0x3c6ca4u: goto label_3c6ca4;
        case 0x3c6ca8u: goto label_3c6ca8;
        case 0x3c6cacu: goto label_3c6cac;
        case 0x3c6cb0u: goto label_3c6cb0;
        case 0x3c6cb4u: goto label_3c6cb4;
        case 0x3c6cb8u: goto label_3c6cb8;
        case 0x3c6cbcu: goto label_3c6cbc;
        case 0x3c6cc0u: goto label_3c6cc0;
        case 0x3c6cc4u: goto label_3c6cc4;
        case 0x3c6cc8u: goto label_3c6cc8;
        case 0x3c6cccu: goto label_3c6ccc;
        case 0x3c6cd0u: goto label_3c6cd0;
        case 0x3c6cd4u: goto label_3c6cd4;
        case 0x3c6cd8u: goto label_3c6cd8;
        case 0x3c6cdcu: goto label_3c6cdc;
        case 0x3c6ce0u: goto label_3c6ce0;
        case 0x3c6ce4u: goto label_3c6ce4;
        case 0x3c6ce8u: goto label_3c6ce8;
        case 0x3c6cecu: goto label_3c6cec;
        case 0x3c6cf0u: goto label_3c6cf0;
        case 0x3c6cf4u: goto label_3c6cf4;
        case 0x3c6cf8u: goto label_3c6cf8;
        case 0x3c6cfcu: goto label_3c6cfc;
        case 0x3c6d00u: goto label_3c6d00;
        case 0x3c6d04u: goto label_3c6d04;
        case 0x3c6d08u: goto label_3c6d08;
        case 0x3c6d0cu: goto label_3c6d0c;
        case 0x3c6d10u: goto label_3c6d10;
        case 0x3c6d14u: goto label_3c6d14;
        case 0x3c6d18u: goto label_3c6d18;
        case 0x3c6d1cu: goto label_3c6d1c;
        case 0x3c6d20u: goto label_3c6d20;
        case 0x3c6d24u: goto label_3c6d24;
        case 0x3c6d28u: goto label_3c6d28;
        case 0x3c6d2cu: goto label_3c6d2c;
        case 0x3c6d30u: goto label_3c6d30;
        case 0x3c6d34u: goto label_3c6d34;
        case 0x3c6d38u: goto label_3c6d38;
        case 0x3c6d3cu: goto label_3c6d3c;
        case 0x3c6d40u: goto label_3c6d40;
        case 0x3c6d44u: goto label_3c6d44;
        case 0x3c6d48u: goto label_3c6d48;
        case 0x3c6d4cu: goto label_3c6d4c;
        case 0x3c6d50u: goto label_3c6d50;
        case 0x3c6d54u: goto label_3c6d54;
        case 0x3c6d58u: goto label_3c6d58;
        case 0x3c6d5cu: goto label_3c6d5c;
        case 0x3c6d60u: goto label_3c6d60;
        case 0x3c6d64u: goto label_3c6d64;
        case 0x3c6d68u: goto label_3c6d68;
        case 0x3c6d6cu: goto label_3c6d6c;
        case 0x3c6d70u: goto label_3c6d70;
        case 0x3c6d74u: goto label_3c6d74;
        case 0x3c6d78u: goto label_3c6d78;
        case 0x3c6d7cu: goto label_3c6d7c;
        case 0x3c6d80u: goto label_3c6d80;
        case 0x3c6d84u: goto label_3c6d84;
        case 0x3c6d88u: goto label_3c6d88;
        case 0x3c6d8cu: goto label_3c6d8c;
        case 0x3c6d90u: goto label_3c6d90;
        case 0x3c6d94u: goto label_3c6d94;
        case 0x3c6d98u: goto label_3c6d98;
        case 0x3c6d9cu: goto label_3c6d9c;
        case 0x3c6da0u: goto label_3c6da0;
        case 0x3c6da4u: goto label_3c6da4;
        case 0x3c6da8u: goto label_3c6da8;
        case 0x3c6dacu: goto label_3c6dac;
        case 0x3c6db0u: goto label_3c6db0;
        case 0x3c6db4u: goto label_3c6db4;
        case 0x3c6db8u: goto label_3c6db8;
        case 0x3c6dbcu: goto label_3c6dbc;
        case 0x3c6dc0u: goto label_3c6dc0;
        case 0x3c6dc4u: goto label_3c6dc4;
        case 0x3c6dc8u: goto label_3c6dc8;
        case 0x3c6dccu: goto label_3c6dcc;
        case 0x3c6dd0u: goto label_3c6dd0;
        case 0x3c6dd4u: goto label_3c6dd4;
        case 0x3c6dd8u: goto label_3c6dd8;
        case 0x3c6ddcu: goto label_3c6ddc;
        case 0x3c6de0u: goto label_3c6de0;
        case 0x3c6de4u: goto label_3c6de4;
        case 0x3c6de8u: goto label_3c6de8;
        case 0x3c6decu: goto label_3c6dec;
        case 0x3c6df0u: goto label_3c6df0;
        case 0x3c6df4u: goto label_3c6df4;
        default: break;
    }

    ctx->pc = 0x3c6c48u;

label_3c6c48:
    // 0x3c6c48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3c6c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3c6c4c:
    // 0x3c6c4c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3c6c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3c6c50:
    // 0x3c6c50: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3c6c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3c6c54:
    // 0x3c6c54: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3c6c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c6c58:
    // 0x3c6c58: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3c6c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3c6c5c:
    // 0x3c6c5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c6c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c6c60:
    // 0x3c6c60: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3c6c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3c6c64:
    // 0x3c6c64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c6c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c6c68:
    // 0x3c6c68: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3c6c68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c6c6c:
    // 0x3c6c6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c6c70:
    // 0x3c6c70: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c6c70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c6c74:
    // 0x3c6c74: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c6c78:
    // 0x3c6c78: 0x40f809  jalr        $v0
label_3c6c7c:
    if (ctx->pc == 0x3C6C7Cu) {
        ctx->pc = 0x3C6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C78u;
        // 0x3c6c7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6C80u;
        goto label_3c6c80;
    }
    ctx->pc = 0x3C6C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C6C80u);
        ctx->pc = 0x3C6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C78u;
        // 0x3c6c7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6C78u, 0x3C6C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C6C80u;
label_3c6c80:
    // 0x3c6c80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c6c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c6c84:
    // 0x3c6c84: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x3c6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3c6c88:
    // 0x3c6c88: 0x2c620030  sltiu       $v0, $v1, 0x30
    ctx->pc = 0x3c6c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
label_3c6c8c:
    // 0x3c6c8c: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_3c6c90:
    if (ctx->pc == 0x3C6C90u) {
        ctx->pc = 0x3C6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C8Cu;
        // 0x3c6c90: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6C94u;
        goto label_3c6c94;
    }
    ctx->pc = 0x3C6C8Cu;
    {
        const bool branch_taken_0x3c6c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C8Cu;
        // 0x3c6c90: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c8c) {
            ctx->pc = 0x3C6DF8u;
            return;
        }
    }
    ctx->pc = 0x3C6C94u;
label_3c6c94:
    // 0x3c6c94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c6c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3c6c98:
    // 0x3c6c98: 0x244242c0  addiu       $v0, $v0, 0x42C0
    ctx->pc = 0x3c6c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17088));
label_3c6c9c:
    // 0x3c6c9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c6c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3c6ca0:
    // 0x3c6ca0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c6ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c6ca4:
    // 0x3c6ca4: 0x800008  jr          $a0
label_3c6ca8:
    if (ctx->pc == 0x3C6CA8u) {
        ctx->pc = 0x3C6CACu;
        goto label_3c6cac;
    }
    ctx->pc = 0x3C6CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C6CACu: goto label_3c6cac;
            case 0x3C6CFCu: goto label_3c6cfc;
            case 0x3C6D0Cu: goto label_3c6d0c;
            case 0x3C6D4Cu: goto label_3c6d4c;
            case 0x3C6D68u: goto label_3c6d68;
            case 0x3C6D94u: goto label_3c6d94;
            case 0x3C6DECu: goto label_3c6dec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6CA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3C6CACu;
label_3c6cac:
    // 0x3c6cac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3c6cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c6cb0:
    // 0x3c6cb0: 0xc0ea12a  jal         func_3A84A8
label_3c6cb4:
    if (ctx->pc == 0x3C6CB4u) {
        ctx->pc = 0x3C6CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CB0u;
        // 0x3c6cb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6CB8u;
        goto label_3c6cb8;
    }
    ctx->pc = 0x3C6CB0u;
    SET_GPR_U32(ctx, 31, 0x3C6CB8u);
    ctx->pc = 0x3C6CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6CB0u;
    // 0x3c6cb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C6CB0u, 0x3C6CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6CB8u;
label_3c6cb8:
    // 0x3c6cb8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c6cb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c6cbc:
    // 0x3c6cbc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3c6cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c6cc0:
    // 0x3c6cc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c6cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6cc4:
    // 0x3c6cc4: 0xc0ea12a  jal         func_3A84A8
label_3c6cc8:
    if (ctx->pc == 0x3C6CC8u) {
        ctx->pc = 0x3C6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CC4u;
        // 0x3c6cc8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6CCCu;
        goto label_3c6ccc;
    }
    ctx->pc = 0x3C6CC4u;
    SET_GPR_U32(ctx, 31, 0x3C6CCCu);
    ctx->pc = 0x3C6CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6CC4u;
    // 0x3c6cc8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C6CC4u, 0x3C6CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6CCCu;
label_3c6ccc:
    // 0x3c6ccc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c6cccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c6cd0:
    // 0x3c6cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c6cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6cd4:
    // 0x3c6cd4: 0xc0ea146  jal         func_3A8518
label_3c6cd8:
    if (ctx->pc == 0x3C6CD8u) {
        ctx->pc = 0x3C6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CD4u;
        // 0x3c6cd8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6CDCu;
        goto label_3c6cdc;
    }
    ctx->pc = 0x3C6CD4u;
    SET_GPR_U32(ctx, 31, 0x3C6CDCu);
    ctx->pc = 0x3C6CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6CD4u;
    // 0x3c6cd8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C6CD4u, 0x3C6CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6CDCu;
label_3c6cdc:
    // 0x3c6cdc: 0xc0ea146  jal         func_3A8518
label_3c6ce0:
    if (ctx->pc == 0x3C6CE0u) {
        ctx->pc = 0x3C6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CDCu;
        // 0x3c6ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6CE4u;
        goto label_3c6ce4;
    }
    ctx->pc = 0x3C6CDCu;
    SET_GPR_U32(ctx, 31, 0x3C6CE4u);
    ctx->pc = 0x3C6CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6CDCu;
    // 0x3c6ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C6CDCu, 0x3C6CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6CE4u;
label_3c6ce4:
    // 0x3c6ce4: 0xc0ea14c  jal         func_3A8530
label_3c6ce8:
    if (ctx->pc == 0x3C6CE8u) {
        ctx->pc = 0x3C6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CE4u;
        // 0x3c6ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6CECu;
        goto label_3c6cec;
    }
    ctx->pc = 0x3C6CE4u;
    SET_GPR_U32(ctx, 31, 0x3C6CECu);
    ctx->pc = 0x3C6CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6CE4u;
    // 0x3c6ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C6CE4u, 0x3C6CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6CECu;
label_3c6cec:
    // 0x3c6cec: 0xc0ea14c  jal         func_3A8530
label_3c6cf0:
    if (ctx->pc == 0x3C6CF0u) {
        ctx->pc = 0x3C6CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CECu;
        // 0x3c6cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6CF4u;
        goto label_3c6cf4;
    }
    ctx->pc = 0x3C6CECu;
    SET_GPR_U32(ctx, 31, 0x3C6CF4u);
    ctx->pc = 0x3C6CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6CECu;
    // 0x3c6cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C6CECu, 0x3C6CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6CF4u;
label_3c6cf4:
    // 0x3c6cf4: 0x10000041  b           . + 4 + (0x41 << 2)
label_3c6cf8:
    if (ctx->pc == 0x3C6CF8u) {
        ctx->pc = 0x3C6CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CF4u;
        // 0x3c6cf8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6CFCu;
        goto label_3c6cfc;
    }
    ctx->pc = 0x3C6CF4u;
    {
        const bool branch_taken_0x3c6cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CF4u;
        // 0x3c6cf8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6cf4) {
            ctx->pc = 0x3C6DFCu;
            return;
        }
    }
    ctx->pc = 0x3C6CFCu;
label_3c6cfc:
    // 0x3c6cfc: 0xc0ea146  jal         func_3A8518
label_3c6d00:
    if (ctx->pc == 0x3C6D00u) {
        ctx->pc = 0x3C6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6CFCu;
        // 0x3c6d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D04u;
        goto label_3c6d04;
    }
    ctx->pc = 0x3C6CFCu;
    SET_GPR_U32(ctx, 31, 0x3C6D04u);
    ctx->pc = 0x3C6D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6CFCu;
    // 0x3c6d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C6CFCu, 0x3C6D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6D04u;
label_3c6d04:
    // 0x3c6d04: 0x1000003c  b           . + 4 + (0x3C << 2)
label_3c6d08:
    if (ctx->pc == 0x3C6D08u) {
        ctx->pc = 0x3C6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D04u;
        // 0x3c6d08: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D0Cu;
        goto label_3c6d0c;
    }
    ctx->pc = 0x3C6D04u;
    {
        const bool branch_taken_0x3c6d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D04u;
        // 0x3c6d08: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d04) {
            ctx->pc = 0x3C6DF8u;
            return;
        }
    }
    ctx->pc = 0x3C6D0Cu;
label_3c6d0c:
    // 0x3c6d0c: 0x3c024a48  lui         $v0, 0x4A48
    ctx->pc = 0x3c6d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19016 << 16));
label_3c6d10:
    // 0x3c6d10: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x3c6d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_3c6d14:
    // 0x3c6d14: 0x3442ab26  ori         $v0, $v0, 0xAB26
    ctx->pc = 0x3c6d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43814);
label_3c6d18:
    // 0x3c6d18: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_3c6d1c:
    if (ctx->pc == 0x3C6D1Cu) {
        ctx->pc = 0x3C6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D18u;
        // 0x3c6d1c: 0x3c0217af  lui         $v0, 0x17AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6063 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D20u;
        goto label_3c6d20;
    }
    ctx->pc = 0x3C6D18u;
    {
        const bool branch_taken_0x3c6d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D18u;
        // 0x3c6d1c: 0x3c0217af  lui         $v0, 0x17AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6063 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d18) {
            ctx->pc = 0x3C6D38u;
            goto label_3c6d38;
        }
    }
    ctx->pc = 0x3C6D20u;
label_3c6d20:
    // 0x3c6d20: 0x3442a860  ori         $v0, $v0, 0xA860
    ctx->pc = 0x3c6d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43104);
label_3c6d24:
    // 0x3c6d24: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_3c6d28:
    if (ctx->pc == 0x3C6D28u) {
        ctx->pc = 0x3C6D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D24u;
        // 0x3c6d28: 0x3c0229aa  lui         $v0, 0x29AA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10666 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D2Cu;
        goto label_3c6d2c;
    }
    ctx->pc = 0x3C6D24u;
    {
        const bool branch_taken_0x3c6d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C6D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D24u;
        // 0x3c6d28: 0x3c0229aa  lui         $v0, 0x29AA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10666 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d24) {
            ctx->pc = 0x3C6D38u;
            goto label_3c6d38;
        }
    }
    ctx->pc = 0x3C6D2Cu;
label_3c6d2c:
    // 0x3c6d2c: 0x344234d8  ori         $v0, $v0, 0x34D8
    ctx->pc = 0x3c6d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13528);
label_3c6d30:
    // 0x3c6d30: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3c6d34:
    if (ctx->pc == 0x3C6D34u) {
        ctx->pc = 0x3C6D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D30u;
        // 0x3c6d34: 0x24020d48  addiu       $v0, $zero, 0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D38u;
        goto label_3c6d38;
    }
    ctx->pc = 0x3C6D30u;
    {
        const bool branch_taken_0x3c6d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C6D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D30u;
        // 0x3c6d34: 0x24020d48  addiu       $v0, $zero, 0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d30) {
            ctx->pc = 0x3C6D44u;
            goto label_3c6d44;
        }
    }
    ctx->pc = 0x3C6D38u;
label_3c6d38:
    // 0x3c6d38: 0x24020dca  addiu       $v0, $zero, 0xDCA
    ctx->pc = 0x3c6d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3530));
label_3c6d3c:
    // 0x3c6d3c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_3c6d40:
    if (ctx->pc == 0x3C6D40u) {
        ctx->pc = 0x3C6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D3Cu;
        // 0x3c6d40: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D44u;
        goto label_3c6d44;
    }
    ctx->pc = 0x3C6D3Cu;
    {
        const bool branch_taken_0x3c6d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D3Cu;
        // 0x3c6d40: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d3c) {
            ctx->pc = 0x3C6DF8u;
            return;
        }
    }
    ctx->pc = 0x3C6D44u;
label_3c6d44:
    // 0x3c6d44: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3c6d48:
    if (ctx->pc == 0x3C6D48u) {
        ctx->pc = 0x3C6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D44u;
        // 0x3c6d48: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D4Cu;
        goto label_3c6d4c;
    }
    ctx->pc = 0x3C6D44u;
    {
        const bool branch_taken_0x3c6d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D44u;
        // 0x3c6d48: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d44) {
            ctx->pc = 0x3C6DF8u;
            return;
        }
    }
    ctx->pc = 0x3C6D4Cu;
label_3c6d4c:
    // 0x3c6d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c6d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6d50:
    // 0x3c6d50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c6d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c6d54:
    // 0x3c6d54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c6d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c6d58:
    // 0x3c6d58: 0xc0f1ab8  jal         func_3C6AE0
label_3c6d5c:
    if (ctx->pc == 0x3C6D5Cu) {
        ctx->pc = 0x3C6D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D58u;
        // 0x3c6d5c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D60u;
        goto label_3c6d60;
    }
    ctx->pc = 0x3C6D58u;
    SET_GPR_U32(ctx, 31, 0x3C6D60u);
    ctx->pc = 0x3C6D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6D58u;
    // 0x3c6d5c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6AE0u, 0x3C6D58u, 0x3C6D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6D60u;
label_3c6d60:
    // 0x3c6d60: 0x10000026  b           . + 4 + (0x26 << 2)
label_3c6d64:
    if (ctx->pc == 0x3C6D64u) {
        ctx->pc = 0x3C6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D60u;
        // 0x3c6d64: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D68u;
        goto label_3c6d68;
    }
    ctx->pc = 0x3C6D60u;
    {
        const bool branch_taken_0x3c6d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D60u;
        // 0x3c6d64: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d60) {
            ctx->pc = 0x3C6DFCu;
            return;
        }
    }
    ctx->pc = 0x3C6D68u;
label_3c6d68:
    // 0x3c6d68: 0xc0ea146  jal         func_3A8518
label_3c6d6c:
    if (ctx->pc == 0x3C6D6Cu) {
        ctx->pc = 0x3C6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D68u;
        // 0x3c6d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D70u;
        goto label_3c6d70;
    }
    ctx->pc = 0x3C6D68u;
    SET_GPR_U32(ctx, 31, 0x3C6D70u);
    ctx->pc = 0x3C6D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6D68u;
    // 0x3c6d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C6D68u, 0x3C6D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6D70u;
label_3c6d70:
    // 0x3c6d70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3c6d74:
    if (ctx->pc == 0x3C6D74u) {
        ctx->pc = 0x3C6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D70u;
        // 0x3c6d74: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D78u;
        goto label_3c6d78;
    }
    ctx->pc = 0x3C6D70u;
    {
        const bool branch_taken_0x3c6d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D70u;
        // 0x3c6d74: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d70) {
            ctx->pc = 0x3C6D84u;
            goto label_3c6d84;
        }
    }
    ctx->pc = 0x3C6D78u;
label_3c6d78:
    // 0x3c6d78: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3c6d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3c6d7c:
    // 0x3c6d7c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3c6d80:
    if (ctx->pc == 0x3C6D80u) {
        ctx->pc = 0x3C6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D7Cu;
        // 0x3c6d80: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D84u;
        goto label_3c6d84;
    }
    ctx->pc = 0x3C6D7Cu;
    {
        const bool branch_taken_0x3c6d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D7Cu;
        // 0x3c6d80: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d7c) {
            ctx->pc = 0x3C6DF8u;
            return;
        }
    }
    ctx->pc = 0x3C6D84u;
label_3c6d84:
    // 0x3c6d84: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3c6d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3c6d88:
    // 0x3c6d88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c6d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3c6d8c:
    // 0x3c6d8c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3c6d90:
    if (ctx->pc == 0x3C6D90u) {
        ctx->pc = 0x3C6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D8Cu;
        // 0x3c6d90: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6D94u;
        goto label_3c6d94;
    }
    ctx->pc = 0x3C6D8Cu;
    {
        const bool branch_taken_0x3c6d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D8Cu;
        // 0x3c6d90: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6d8c) {
            ctx->pc = 0x3C6DF8u;
            return;
        }
    }
    ctx->pc = 0x3C6D94u;
label_3c6d94:
    // 0x3c6d94: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x3c6d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c6d98:
    // 0x3c6d98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c6d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6d9c:
    // 0x3c6d9c: 0xc0e911e  jal         func_3A4478
label_3c6da0:
    if (ctx->pc == 0x3C6DA0u) {
        ctx->pc = 0x3C6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6D9Cu;
        // 0x3c6da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6DA4u;
        goto label_3c6da4;
    }
    ctx->pc = 0x3C6D9Cu;
    SET_GPR_U32(ctx, 31, 0x3C6DA4u);
    ctx->pc = 0x3C6DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6D9Cu;
    // 0x3c6da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3C6D9Cu, 0x3C6DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6DA4u;
label_3c6da4:
    // 0x3c6da4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c6da4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c6da8:
    // 0x3c6da8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c6da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6dac:
    // 0x3c6dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c6dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6db0:
    // 0x3c6db0: 0xc0e90ca  jal         func_3A4328
label_3c6db4:
    if (ctx->pc == 0x3C6DB4u) {
        ctx->pc = 0x3C6DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DB0u;
        // 0x3c6db4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6DB8u;
        goto label_3c6db8;
    }
    ctx->pc = 0x3C6DB0u;
    SET_GPR_U32(ctx, 31, 0x3C6DB8u);
    ctx->pc = 0x3C6DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6DB0u;
    // 0x3c6db4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3C6DB0u, 0x3C6DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6DB8u;
label_3c6db8:
    // 0x3c6db8: 0x8e260054  lw          $a2, 0x54($s1)
    ctx->pc = 0x3c6db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3c6dbc:
    // 0x3c6dbc: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x3c6dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_3c6dc0:
    // 0x3c6dc0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c6dc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c6dc4:
    // 0x3c6dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c6dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6dc8:
    // 0x3c6dc8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3c6dc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c6dcc:
    // 0x3c6dcc: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x3c6dccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_3c6dd0:
    // 0x3c6dd0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3c6dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3c6dd4:
    // 0x3c6dd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c6dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c6dd8:
    // 0x3c6dd8: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3c6dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3c6ddc:
    // 0x3c6ddc: 0xc0e862e  jal         func_3A18B8
label_3c6de0:
    if (ctx->pc == 0x3C6DE0u) {
        ctx->pc = 0x3C6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DDCu;
        // 0x3c6de0: 0xae260054  sw          $a2, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6DE4u;
        goto label_3c6de4;
    }
    ctx->pc = 0x3C6DDCu;
    SET_GPR_U32(ctx, 31, 0x3C6DE4u);
    ctx->pc = 0x3C6DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6DDCu;
    // 0x3c6de0: 0xae260054  sw          $a2, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3C6DDCu, 0x3C6DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6DE4u;
label_3c6de4:
    // 0x3c6de4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3c6de8:
    if (ctx->pc == 0x3C6DE8u) {
        ctx->pc = 0x3C6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DE4u;
        // 0x3c6de8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6DECu;
        goto label_3c6dec;
    }
    ctx->pc = 0x3C6DE4u;
    {
        const bool branch_taken_0x3c6de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DE4u;
        // 0x3c6de8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6de4) {
            ctx->pc = 0x3C6DFCu;
            return;
        }
    }
    ctx->pc = 0x3C6DECu;
label_3c6dec:
    // 0x3c6dec: 0xc0ea146  jal         func_3A8518
label_3c6df0:
    if (ctx->pc == 0x3C6DF0u) {
        ctx->pc = 0x3C6DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6DECu;
        // 0x3c6df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6DF4u;
        goto label_3c6df4;
    }
    ctx->pc = 0x3C6DECu;
    SET_GPR_U32(ctx, 31, 0x3C6DF4u);
    ctx->pc = 0x3C6DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6DECu;
    // 0x3c6df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C6DECu, 0x3C6DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6DF4u;
label_3c6df4:
    // 0x3c6df4: 0xae2200cc  sw          $v0, 0xCC($s1)
    ctx->pc = 0x3c6df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
    ctx->pc = 0x3c6df8u;
}
