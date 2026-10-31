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

// Function: sub_003F5C38
// Address: 0x3f5c38 - 0x3f5ce8
void sub_003F5C38_0x3f5c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5C38_0x3f5c38");
#endif

    switch (ctx->pc) {
        case 0x3f5c38u: goto label_3f5c38;
        case 0x3f5c3cu: goto label_3f5c3c;
        case 0x3f5c40u: goto label_3f5c40;
        case 0x3f5c44u: goto label_3f5c44;
        case 0x3f5c48u: goto label_3f5c48;
        case 0x3f5c4cu: goto label_3f5c4c;
        case 0x3f5c50u: goto label_3f5c50;
        case 0x3f5c54u: goto label_3f5c54;
        case 0x3f5c58u: goto label_3f5c58;
        case 0x3f5c5cu: goto label_3f5c5c;
        case 0x3f5c60u: goto label_3f5c60;
        case 0x3f5c64u: goto label_3f5c64;
        case 0x3f5c68u: goto label_3f5c68;
        case 0x3f5c6cu: goto label_3f5c6c;
        case 0x3f5c70u: goto label_3f5c70;
        case 0x3f5c74u: goto label_3f5c74;
        case 0x3f5c78u: goto label_3f5c78;
        case 0x3f5c7cu: goto label_3f5c7c;
        case 0x3f5c80u: goto label_3f5c80;
        case 0x3f5c84u: goto label_3f5c84;
        case 0x3f5c88u: goto label_3f5c88;
        case 0x3f5c8cu: goto label_3f5c8c;
        case 0x3f5c90u: goto label_3f5c90;
        case 0x3f5c94u: goto label_3f5c94;
        case 0x3f5c98u: goto label_3f5c98;
        case 0x3f5c9cu: goto label_3f5c9c;
        case 0x3f5ca0u: goto label_3f5ca0;
        case 0x3f5ca4u: goto label_3f5ca4;
        case 0x3f5ca8u: goto label_3f5ca8;
        case 0x3f5cacu: goto label_3f5cac;
        case 0x3f5cb0u: goto label_3f5cb0;
        case 0x3f5cb4u: goto label_3f5cb4;
        case 0x3f5cb8u: goto label_3f5cb8;
        case 0x3f5cbcu: goto label_3f5cbc;
        case 0x3f5cc0u: goto label_3f5cc0;
        case 0x3f5cc4u: goto label_3f5cc4;
        case 0x3f5cc8u: goto label_3f5cc8;
        case 0x3f5cccu: goto label_3f5ccc;
        case 0x3f5cd0u: goto label_3f5cd0;
        case 0x3f5cd4u: goto label_3f5cd4;
        case 0x3f5cd8u: goto label_3f5cd8;
        case 0x3f5cdcu: goto label_3f5cdc;
        case 0x3f5ce0u: goto label_3f5ce0;
        case 0x3f5ce4u: goto label_3f5ce4;
        default: break;
    }

    ctx->pc = 0x3f5c38u;

label_3f5c38:
    // 0x3f5c38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f5c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f5c3c:
    // 0x3f5c3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f5c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3f5c40:
    // 0x3f5c40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f5c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f5c44:
    // 0x3f5c44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f5c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f5c48:
    // 0x3f5c48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3f5c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3f5c4c:
    // 0x3f5c4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f5c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f5c50:
    // 0x3f5c50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f5c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f5c54:
    // 0x3f5c54: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3f5c54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f5c58:
    // 0x3f5c58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f5c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f5c5c:
    // 0x3f5c5c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f5c5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f5c60:
    // 0x3f5c60: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f5c64:
    // 0x3f5c64: 0x40f809  jalr        $v0
label_3f5c68:
    if (ctx->pc == 0x3F5C68u) {
        ctx->pc = 0x3F5C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5C64u;
        // 0x3f5c68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5C6Cu;
        goto label_3f5c6c;
    }
    ctx->pc = 0x3F5C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F5C6Cu);
        ctx->pc = 0x3F5C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5C64u;
        // 0x3f5c68: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5C64u, 0x3F5C6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F5C6Cu;
label_3f5c6c:
    // 0x3f5c6c: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x3f5c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_3f5c70:
    // 0x3f5c70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f5c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f5c74:
    // 0x3f5c74: 0x2c620039  sltiu       $v0, $v1, 0x39
    ctx->pc = 0x3f5c74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
label_3f5c78:
    // 0x3f5c78: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3f5c7c:
    if (ctx->pc == 0x3F5C7Cu) {
        ctx->pc = 0x3F5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5C78u;
        // 0x3f5c7c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5C80u;
        goto label_3f5c80;
    }
    ctx->pc = 0x3F5C78u;
    {
        const bool branch_taken_0x3f5c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5C78u;
        // 0x3f5c7c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5c78) {
            ctx->pc = 0x3F5CF4u;
            return;
        }
    }
    ctx->pc = 0x3F5C80u;
label_3f5c80:
    // 0x3f5c80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f5c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3f5c84:
    // 0x3f5c84: 0x244265e0  addiu       $v0, $v0, 0x65E0
    ctx->pc = 0x3f5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26080));
label_3f5c88:
    // 0x3f5c88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3f5c8c:
    // 0x3f5c8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3f5c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3f5c90:
    // 0x3f5c90: 0x800008  jr          $a0
label_3f5c94:
    if (ctx->pc == 0x3F5C94u) {
        ctx->pc = 0x3F5C98u;
        goto label_3f5c98;
    }
    ctx->pc = 0x3F5C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F5C98u: goto label_3f5c98;
            case 0x3F5CB4u: goto label_3f5cb4;
            case 0x3F5CC8u: goto label_3f5cc8;
            case 0x3F5CD8u: goto label_3f5cd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5C90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3F5C98u;
label_3f5c98:
    // 0x3f5c98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3f5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f5c9c:
    // 0x3f5c9c: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3f5c9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3f5ca0:
    // 0x3f5ca0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3f5ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3f5ca4:
    // 0x3f5ca4: 0x60f809  jalr        $v1
label_3f5ca8:
    if (ctx->pc == 0x3F5CA8u) {
        ctx->pc = 0x3F5CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CA4u;
        // 0x3f5ca8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5CACu;
        goto label_3f5cac;
    }
    ctx->pc = 0x3F5CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F5CACu);
        ctx->pc = 0x3F5CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CA4u;
        // 0x3f5ca8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5CA4u, 0x3F5CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F5CACu;
label_3f5cac:
    // 0x3f5cac: 0x10000012  b           . + 4 + (0x12 << 2)
label_3f5cb0:
    if (ctx->pc == 0x3F5CB0u) {
        ctx->pc = 0x3F5CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CACu;
        // 0x3f5cb0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5CB4u;
        goto label_3f5cb4;
    }
    ctx->pc = 0x3F5CACu;
    {
        const bool branch_taken_0x3f5cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CACu;
        // 0x3f5cb0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5cac) {
            ctx->pc = 0x3F5CF8u;
            return;
        }
    }
    ctx->pc = 0x3F5CB4u;
label_3f5cb4:
    // 0x3f5cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f5cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f5cb8:
    // 0x3f5cb8: 0xc0fd2e8  jal         func_3F4BA0
label_3f5cbc:
    if (ctx->pc == 0x3F5CBCu) {
        ctx->pc = 0x3F5CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CB8u;
        // 0x3f5cbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5CC0u;
        goto label_3f5cc0;
    }
    ctx->pc = 0x3F5CB8u;
    SET_GPR_U32(ctx, 31, 0x3F5CC0u);
    ctx->pc = 0x3F5CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5CB8u;
    // 0x3f5cbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4BA0u, 0x3F5CB8u, 0x3F5CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5CC0u;
label_3f5cc0:
    // 0x3f5cc0: 0x1000000d  b           . + 4 + (0xD << 2)
label_3f5cc4:
    if (ctx->pc == 0x3F5CC4u) {
        ctx->pc = 0x3F5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CC0u;
        // 0x3f5cc4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5CC8u;
        goto label_3f5cc8;
    }
    ctx->pc = 0x3F5CC0u;
    {
        const bool branch_taken_0x3f5cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CC0u;
        // 0x3f5cc4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5cc0) {
            ctx->pc = 0x3F5CF8u;
            return;
        }
    }
    ctx->pc = 0x3F5CC8u;
label_3f5cc8:
    // 0x3f5cc8: 0xc0e8616  jal         func_3A1858
label_3f5ccc:
    if (ctx->pc == 0x3F5CCCu) {
        ctx->pc = 0x3F5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CC8u;
        // 0x3f5ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5CD0u;
        goto label_3f5cd0;
    }
    ctx->pc = 0x3F5CC8u;
    SET_GPR_U32(ctx, 31, 0x3F5CD0u);
    ctx->pc = 0x3F5CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5CC8u;
    // 0x3f5ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3F5CC8u, 0x3F5CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5CD0u;
label_3f5cd0:
    // 0x3f5cd0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3f5cd4:
    if (ctx->pc == 0x3F5CD4u) {
        ctx->pc = 0x3F5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CD0u;
        // 0x3f5cd4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5CD8u;
        goto label_3f5cd8;
    }
    ctx->pc = 0x3F5CD0u;
    {
        const bool branch_taken_0x3f5cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CD0u;
        // 0x3f5cd4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5cd0) {
            ctx->pc = 0x3F5CF8u;
            return;
        }
    }
    ctx->pc = 0x3F5CD8u;
label_3f5cd8:
    // 0x3f5cd8: 0xc0ea146  jal         func_3A8518
label_3f5cdc:
    if (ctx->pc == 0x3F5CDCu) {
        ctx->pc = 0x3F5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CD8u;
        // 0x3f5cdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5CE0u;
        goto label_3f5ce0;
    }
    ctx->pc = 0x3F5CD8u;
    SET_GPR_U32(ctx, 31, 0x3F5CE0u);
    ctx->pc = 0x3F5CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5CD8u;
    // 0x3f5cdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F5CD8u, 0x3F5CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5CE0u;
label_3f5ce0:
    // 0x3f5ce0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3f5ce4:
    if (ctx->pc == 0x3F5CE4u) {
        ctx->pc = 0x3F5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CE0u;
        // 0x3f5ce4: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5CE8u;
        goto label_fallthrough_0x3f5ce0;
    }
    ctx->pc = 0x3F5CE0u;
    {
        const bool branch_taken_0x3f5ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5CE0u;
        // 0x3f5ce4: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5ce0) {
            ctx->pc = 0x3F5CF4u;
            return;
        }
    }
label_fallthrough_0x3f5ce0:
    ctx->pc = 0x3F5CE8u;
}
