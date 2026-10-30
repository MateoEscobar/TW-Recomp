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

// Function: sub_00402BF8
// Address: 0x402bf8 - 0x402e54
void sub_00402BF8_0x402bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00402BF8_0x402bf8");
#endif

    switch (ctx->pc) {
        case 0x402bf8u: goto label_402bf8;
        case 0x402bfcu: goto label_402bfc;
        case 0x402c00u: goto label_402c00;
        case 0x402c04u: goto label_402c04;
        case 0x402c08u: goto label_402c08;
        case 0x402c0cu: goto label_402c0c;
        case 0x402c10u: goto label_402c10;
        case 0x402c14u: goto label_402c14;
        case 0x402c18u: goto label_402c18;
        case 0x402c1cu: goto label_402c1c;
        case 0x402c20u: goto label_402c20;
        case 0x402c24u: goto label_402c24;
        case 0x402c28u: goto label_402c28;
        case 0x402c2cu: goto label_402c2c;
        case 0x402c30u: goto label_402c30;
        case 0x402c34u: goto label_402c34;
        case 0x402c38u: goto label_402c38;
        case 0x402c3cu: goto label_402c3c;
        case 0x402c40u: goto label_402c40;
        case 0x402c44u: goto label_402c44;
        case 0x402c48u: goto label_402c48;
        case 0x402c4cu: goto label_402c4c;
        case 0x402c50u: goto label_402c50;
        case 0x402c54u: goto label_402c54;
        case 0x402c58u: goto label_402c58;
        case 0x402c5cu: goto label_402c5c;
        case 0x402c60u: goto label_402c60;
        case 0x402c64u: goto label_402c64;
        case 0x402c68u: goto label_402c68;
        case 0x402c6cu: goto label_402c6c;
        case 0x402c70u: goto label_402c70;
        case 0x402c74u: goto label_402c74;
        case 0x402c78u: goto label_402c78;
        case 0x402c7cu: goto label_402c7c;
        case 0x402c80u: goto label_402c80;
        case 0x402c84u: goto label_402c84;
        case 0x402c88u: goto label_402c88;
        case 0x402c8cu: goto label_402c8c;
        case 0x402c90u: goto label_402c90;
        case 0x402c94u: goto label_402c94;
        case 0x402c98u: goto label_402c98;
        case 0x402c9cu: goto label_402c9c;
        case 0x402ca0u: goto label_402ca0;
        case 0x402ca4u: goto label_402ca4;
        case 0x402ca8u: goto label_402ca8;
        case 0x402cacu: goto label_402cac;
        case 0x402cb0u: goto label_402cb0;
        case 0x402cb4u: goto label_402cb4;
        case 0x402cb8u: goto label_402cb8;
        case 0x402cbcu: goto label_402cbc;
        case 0x402cc0u: goto label_402cc0;
        case 0x402cc4u: goto label_402cc4;
        case 0x402cc8u: goto label_402cc8;
        case 0x402cccu: goto label_402ccc;
        case 0x402cd0u: goto label_402cd0;
        case 0x402cd4u: goto label_402cd4;
        case 0x402cd8u: goto label_402cd8;
        case 0x402cdcu: goto label_402cdc;
        case 0x402ce0u: goto label_402ce0;
        case 0x402ce4u: goto label_402ce4;
        case 0x402ce8u: goto label_402ce8;
        case 0x402cecu: goto label_402cec;
        case 0x402cf0u: goto label_402cf0;
        case 0x402cf4u: goto label_402cf4;
        case 0x402cf8u: goto label_402cf8;
        case 0x402cfcu: goto label_402cfc;
        case 0x402d00u: goto label_402d00;
        case 0x402d04u: goto label_402d04;
        case 0x402d08u: goto label_402d08;
        case 0x402d0cu: goto label_402d0c;
        case 0x402d10u: goto label_402d10;
        case 0x402d14u: goto label_402d14;
        case 0x402d18u: goto label_402d18;
        case 0x402d1cu: goto label_402d1c;
        case 0x402d20u: goto label_402d20;
        case 0x402d24u: goto label_402d24;
        case 0x402d28u: goto label_402d28;
        case 0x402d2cu: goto label_402d2c;
        case 0x402d30u: goto label_402d30;
        case 0x402d34u: goto label_402d34;
        case 0x402d38u: goto label_402d38;
        case 0x402d3cu: goto label_402d3c;
        case 0x402d40u: goto label_402d40;
        case 0x402d44u: goto label_402d44;
        case 0x402d48u: goto label_402d48;
        case 0x402d4cu: goto label_402d4c;
        case 0x402d50u: goto label_402d50;
        case 0x402d54u: goto label_402d54;
        case 0x402d58u: goto label_402d58;
        case 0x402d5cu: goto label_402d5c;
        case 0x402d60u: goto label_402d60;
        case 0x402d64u: goto label_402d64;
        case 0x402d68u: goto label_402d68;
        case 0x402d6cu: goto label_402d6c;
        case 0x402d70u: goto label_402d70;
        case 0x402d74u: goto label_402d74;
        case 0x402d78u: goto label_402d78;
        case 0x402d7cu: goto label_402d7c;
        case 0x402d80u: goto label_402d80;
        case 0x402d84u: goto label_402d84;
        case 0x402d88u: goto label_402d88;
        case 0x402d8cu: goto label_402d8c;
        case 0x402d90u: goto label_402d90;
        case 0x402d94u: goto label_402d94;
        case 0x402d98u: goto label_402d98;
        case 0x402d9cu: goto label_402d9c;
        case 0x402da0u: goto label_402da0;
        case 0x402da4u: goto label_402da4;
        case 0x402da8u: goto label_402da8;
        case 0x402dacu: goto label_402dac;
        case 0x402db0u: goto label_402db0;
        case 0x402db4u: goto label_402db4;
        case 0x402db8u: goto label_402db8;
        case 0x402dbcu: goto label_402dbc;
        case 0x402dc0u: goto label_402dc0;
        case 0x402dc4u: goto label_402dc4;
        case 0x402dc8u: goto label_402dc8;
        case 0x402dccu: goto label_402dcc;
        case 0x402dd0u: goto label_402dd0;
        case 0x402dd4u: goto label_402dd4;
        case 0x402dd8u: goto label_402dd8;
        case 0x402ddcu: goto label_402ddc;
        case 0x402de0u: goto label_402de0;
        case 0x402de4u: goto label_402de4;
        case 0x402de8u: goto label_402de8;
        case 0x402decu: goto label_402dec;
        case 0x402df0u: goto label_402df0;
        case 0x402df4u: goto label_402df4;
        case 0x402df8u: goto label_402df8;
        case 0x402dfcu: goto label_402dfc;
        case 0x402e00u: goto label_402e00;
        case 0x402e04u: goto label_402e04;
        case 0x402e08u: goto label_402e08;
        case 0x402e0cu: goto label_402e0c;
        case 0x402e10u: goto label_402e10;
        case 0x402e14u: goto label_402e14;
        case 0x402e18u: goto label_402e18;
        case 0x402e1cu: goto label_402e1c;
        case 0x402e20u: goto label_402e20;
        case 0x402e24u: goto label_402e24;
        case 0x402e28u: goto label_402e28;
        case 0x402e2cu: goto label_402e2c;
        case 0x402e30u: goto label_402e30;
        case 0x402e34u: goto label_402e34;
        case 0x402e38u: goto label_402e38;
        case 0x402e3cu: goto label_402e3c;
        case 0x402e40u: goto label_402e40;
        case 0x402e44u: goto label_402e44;
        case 0x402e48u: goto label_402e48;
        case 0x402e4cu: goto label_402e4c;
        case 0x402e50u: goto label_402e50;
        default: break;
    }

    ctx->pc = 0x402bf8u;

label_402bf8:
    // 0x402bf8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x402bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_402bfc:
    // 0x402bfc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x402bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_402c00:
    // 0x402c00: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x402c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_402c04:
    // 0x402c04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x402c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_402c08:
    // 0x402c08: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x402c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_402c0c:
    // 0x402c0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x402c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_402c10:
    // 0x402c10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x402c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_402c14:
    // 0x402c14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x402c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_402c18:
    // 0x402c18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x402c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_402c1c:
    // 0x402c1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x402c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_402c20:
    // 0x402c20: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x402c20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_402c24:
    // 0x402c24: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x402c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_402c28:
    // 0x402c28: 0x40f809  jalr        $v0
label_402c2c:
    if (ctx->pc == 0x402C2Cu) {
        ctx->pc = 0x402C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C28u;
        // 0x402c2c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402C30u;
        goto label_402c30;
    }
    ctx->pc = 0x402C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x402C30u);
        ctx->pc = 0x402C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C28u;
        // 0x402c2c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402C28u, 0x402C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x402C30u;
label_402c30:
    // 0x402c30: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x402c30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_402c34:
    // 0x402c34: 0x2e020031  sltiu       $v0, $s0, 0x31
    ctx->pc = 0x402c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
label_402c38:
    // 0x402c38: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
label_402c3c:
    if (ctx->pc == 0x402C3Cu) {
        ctx->pc = 0x402C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C38u;
        // 0x402c3c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402C40u;
        goto label_402c40;
    }
    ctx->pc = 0x402C38u;
    {
        const bool branch_taken_0x402c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x402C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C38u;
        // 0x402c3c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402c38) {
            ctx->pc = 0x402E54u;
            return;
        }
    }
    ctx->pc = 0x402C40u;
label_402c40:
    // 0x402c40: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x402c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_402c44:
    // 0x402c44: 0x24427870  addiu       $v0, $v0, 0x7870
    ctx->pc = 0x402c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30832));
label_402c48:
    // 0x402c48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x402c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_402c4c:
    // 0x402c4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x402c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_402c50:
    // 0x402c50: 0x800008  jr          $a0
label_402c54:
    if (ctx->pc == 0x402C54u) {
        ctx->pc = 0x402C58u;
        goto label_402c58;
    }
    ctx->pc = 0x402C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x402C58u: goto label_402c58;
            case 0x402C84u: goto label_402c84;
            case 0x402CF8u: goto label_402cf8;
            case 0x402D10u: goto label_402d10;
            case 0x402DCCu: goto label_402dcc;
            case 0x402DDCu: goto label_402ddc;
            case 0x402DF4u: goto label_402df4;
            case 0x402E0Cu: goto label_402e0c;
            case 0x402E40u: goto label_402e40;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402C50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x402C58u;
label_402c58:
    // 0x402c58: 0xc0ea146  jal         func_3A8518
label_402c5c:
    if (ctx->pc == 0x402C5Cu) {
        ctx->pc = 0x402C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C58u;
        // 0x402c5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402C60u;
        goto label_402c60;
    }
    ctx->pc = 0x402C58u;
    SET_GPR_U32(ctx, 31, 0x402C60u);
    ctx->pc = 0x402C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402C58u;
    // 0x402c5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x402C58u, 0x402C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402C60u;
label_402c60:
    // 0x402c60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_402c64:
    if (ctx->pc == 0x402C64u) {
        ctx->pc = 0x402C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C60u;
        // 0x402c64: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402C68u;
        goto label_402c68;
    }
    ctx->pc = 0x402C60u;
    {
        const bool branch_taken_0x402c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x402C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C60u;
        // 0x402c64: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402c60) {
            ctx->pc = 0x402C74u;
            goto label_402c74;
        }
    }
    ctx->pc = 0x402C68u;
label_402c68:
    // 0x402c68: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x402c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_402c6c:
    // 0x402c6c: 0x10000079  b           . + 4 + (0x79 << 2)
label_402c70:
    if (ctx->pc == 0x402C70u) {
        ctx->pc = 0x402C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C6Cu;
        // 0x402c70: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402C74u;
        goto label_402c74;
    }
    ctx->pc = 0x402C6Cu;
    {
        const bool branch_taken_0x402c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C6Cu;
        // 0x402c70: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402c6c) {
            ctx->pc = 0x402E54u;
            return;
        }
    }
    ctx->pc = 0x402C74u;
label_402c74:
    // 0x402c74: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x402c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_402c78:
    // 0x402c78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x402c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_402c7c:
    // 0x402c7c: 0x10000075  b           . + 4 + (0x75 << 2)
label_402c80:
    if (ctx->pc == 0x402C80u) {
        ctx->pc = 0x402C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C7Cu;
        // 0x402c80: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402C84u;
        goto label_402c84;
    }
    ctx->pc = 0x402C7Cu;
    {
        const bool branch_taken_0x402c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C7Cu;
        // 0x402c80: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402c7c) {
            ctx->pc = 0x402E54u;
            return;
        }
    }
    ctx->pc = 0x402C84u;
label_402c84:
    // 0x402c84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x402c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_402c88:
    // 0x402c88: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x402c88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_402c8c:
    // 0x402c8c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x402c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_402c90:
    // 0x402c90: 0x40f809  jalr        $v0
label_402c94:
    if (ctx->pc == 0x402C94u) {
        ctx->pc = 0x402C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C90u;
        // 0x402c94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402C98u;
        goto label_402c98;
    }
    ctx->pc = 0x402C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x402C98u);
        ctx->pc = 0x402C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C90u;
        // 0x402c94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402C90u, 0x402C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x402C98u;
label_402c98:
    // 0x402c98: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x402c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_402c9c:
    // 0x402c9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x402c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_402ca0:
    // 0x402ca0: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
label_402ca4:
    if (ctx->pc == 0x402CA4u) {
        ctx->pc = 0x402CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402CA0u;
        // 0x402ca4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402CA8u;
        goto label_402ca8;
    }
    ctx->pc = 0x402CA0u;
    {
        const bool branch_taken_0x402ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x402CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402CA0u;
        // 0x402ca4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402ca0) {
            ctx->pc = 0x402E58u;
            return;
        }
    }
    ctx->pc = 0x402CA8u;
label_402ca8:
    // 0x402ca8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x402ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_402cac:
    // 0x402cac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x402cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_402cb0:
    // 0x402cb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x402cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_402cb4:
    // 0x402cb4: 0xc0ea14c  jal         func_3A8530
label_402cb8:
    if (ctx->pc == 0x402CB8u) {
        ctx->pc = 0x402CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402CB4u;
        // 0x402cb8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402CBCu;
        goto label_402cbc;
    }
    ctx->pc = 0x402CB4u;
    SET_GPR_U32(ctx, 31, 0x402CBCu);
    ctx->pc = 0x402CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402CB4u;
    // 0x402cb8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x402CB4u, 0x402CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402CBCu;
label_402cbc:
    // 0x402cbc: 0xc08a61a  jal         func_229868
label_402cc0:
    if (ctx->pc == 0x402CC0u) {
        ctx->pc = 0x402CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402CBCu;
        // 0x402cc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402CC4u;
        goto label_402cc4;
    }
    ctx->pc = 0x402CBCu;
    SET_GPR_U32(ctx, 31, 0x402CC4u);
    ctx->pc = 0x402CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402CBCu;
    // 0x402cc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x402CBCu, 0x402CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402CC4u;
label_402cc4:
    // 0x402cc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x402cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_402cc8:
    // 0x402cc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x402cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_402ccc:
    // 0x402ccc: 0xc0ea176  jal         func_3A85D8
label_402cd0:
    if (ctx->pc == 0x402CD0u) {
        ctx->pc = 0x402CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402CCCu;
        // 0x402cd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402CD4u;
        goto label_402cd4;
    }
    ctx->pc = 0x402CCCu;
    SET_GPR_U32(ctx, 31, 0x402CD4u);
    ctx->pc = 0x402CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402CCCu;
    // 0x402cd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x402CCCu, 0x402CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402CD4u;
label_402cd4:
    // 0x402cd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x402cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_402cd8:
    // 0x402cd8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x402cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_402cdc:
    // 0x402cdc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x402cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_402ce0:
    // 0x402ce0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x402ce0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_402ce4:
    // 0x402ce4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x402ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_402ce8:
    // 0x402ce8: 0x40f809  jalr        $v0
label_402cec:
    if (ctx->pc == 0x402CECu) {
        ctx->pc = 0x402CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402CE8u;
        // 0x402cec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402CF0u;
        goto label_402cf0;
    }
    ctx->pc = 0x402CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x402CF0u);
        ctx->pc = 0x402CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402CE8u;
        // 0x402cec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402CE8u, 0x402CF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x402CF0u;
label_402cf0:
    // 0x402cf0: 0x10000059  b           . + 4 + (0x59 << 2)
label_402cf4:
    if (ctx->pc == 0x402CF4u) {
        ctx->pc = 0x402CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402CF0u;
        // 0x402cf4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402CF8u;
        goto label_402cf8;
    }
    ctx->pc = 0x402CF0u;
    {
        const bool branch_taken_0x402cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402CF0u;
        // 0x402cf4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402cf0) {
            ctx->pc = 0x402E58u;
            return;
        }
    }
    ctx->pc = 0x402CF8u;
label_402cf8:
    // 0x402cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x402cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_402cfc:
    // 0x402cfc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x402cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_402d00:
    // 0x402d00: 0xc0ffe46  jal         func_3FF918
label_402d04:
    if (ctx->pc == 0x402D04u) {
        ctx->pc = 0x402D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402D00u;
        // 0x402d04: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402D08u;
        goto label_402d08;
    }
    ctx->pc = 0x402D00u;
    SET_GPR_U32(ctx, 31, 0x402D08u);
    ctx->pc = 0x402D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402D00u;
    // 0x402d04: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FF918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FF918u, 0x402D00u, 0x402D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402D08u;
label_402d08:
    // 0x402d08: 0x10000053  b           . + 4 + (0x53 << 2)
label_402d0c:
    if (ctx->pc == 0x402D0Cu) {
        ctx->pc = 0x402D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402D08u;
        // 0x402d0c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402D10u;
        goto label_402d10;
    }
    ctx->pc = 0x402D08u;
    {
        const bool branch_taken_0x402d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402D08u;
        // 0x402d0c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402d08) {
            ctx->pc = 0x402E58u;
            return;
        }
    }
    ctx->pc = 0x402D10u;
label_402d10:
    // 0x402d10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x402d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_402d14:
    // 0x402d14: 0xc0ea12a  jal         func_3A84A8
label_402d18:
    if (ctx->pc == 0x402D18u) {
        ctx->pc = 0x402D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402D14u;
        // 0x402d18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402D1Cu;
        goto label_402d1c;
    }
    ctx->pc = 0x402D14u;
    SET_GPR_U32(ctx, 31, 0x402D1Cu);
    ctx->pc = 0x402D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402D14u;
    // 0x402d18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x402D14u, 0x402D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402D1Cu;
label_402d1c:
    // 0x402d1c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x402d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_402d20:
    // 0x402d20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x402d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_402d24:
    // 0x402d24: 0xc0ea12a  jal         func_3A84A8
label_402d28:
    if (ctx->pc == 0x402D28u) {
        ctx->pc = 0x402D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402D24u;
        // 0x402d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402D2Cu;
        goto label_402d2c;
    }
    ctx->pc = 0x402D24u;
    SET_GPR_U32(ctx, 31, 0x402D2Cu);
    ctx->pc = 0x402D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402D24u;
    // 0x402d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x402D24u, 0x402D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402D2Cu;
label_402d2c:
    // 0x402d2c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x402d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_402d30:
    // 0x402d30: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x402d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_402d34:
    // 0x402d34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x402d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_402d38:
    // 0x402d38: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x402d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_402d3c:
    // 0x402d3c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x402d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_402d40:
    // 0x402d40: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x402d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_402d44:
    // 0x402d44: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x402d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_402d48:
    // 0x402d48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x402d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_402d4c:
    // 0x402d4c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x402d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_402d50:
    // 0x402d50: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x402d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_402d54:
    // 0x402d54: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x402d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_402d58:
    // 0x402d58: 0xc0cd518  jal         func_335460
label_402d5c:
    if (ctx->pc == 0x402D5Cu) {
        ctx->pc = 0x402D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402D58u;
        // 0x402d5c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402D60u;
        goto label_402d60;
    }
    ctx->pc = 0x402D58u;
    SET_GPR_U32(ctx, 31, 0x402D60u);
    ctx->pc = 0x402D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402D58u;
    // 0x402d5c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x402D58u, 0x402D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402D60u;
label_402d60:
    // 0x402d60: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x402d60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_402d64:
    // 0x402d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402d68:
    // 0x402d68: 0xc136b24  jal         func_4DAC90
label_402d6c:
    if (ctx->pc == 0x402D6Cu) {
        ctx->pc = 0x402D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402D68u;
        // 0x402d6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402D70u;
        goto label_402d70;
    }
    ctx->pc = 0x402D68u;
    SET_GPR_U32(ctx, 31, 0x402D70u);
    ctx->pc = 0x402D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402D68u;
    // 0x402d6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x402D68u, 0x402D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402D70u;
label_402d70:
    // 0x402d70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x402d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_402d74:
    // 0x402d74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x402d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_402d78:
    // 0x402d78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x402d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402d7c:
    // 0x402d7c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x402d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_402d80:
    // 0x402d80: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x402d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_402d84:
    // 0x402d84: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x402d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_402d88:
    // 0x402d88: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x402d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_402d8c:
    // 0x402d8c: 0x60f809  jalr        $v1
label_402d90:
    if (ctx->pc == 0x402D90u) {
        ctx->pc = 0x402D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402D8Cu;
        // 0x402d90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402D94u;
        goto label_402d94;
    }
    ctx->pc = 0x402D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x402D94u);
        ctx->pc = 0x402D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402D8Cu;
        // 0x402d90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402D8Cu, 0x402D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x402D94u;
label_402d94:
    // 0x402d94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x402d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_402d98:
    // 0x402d98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x402d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_402d9c:
    // 0x402d9c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x402d9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_402da0:
    // 0x402da0: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x402da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_402da4:
    // 0x402da4: 0x60f809  jalr        $v1
label_402da8:
    if (ctx->pc == 0x402DA8u) {
        ctx->pc = 0x402DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402DA4u;
        // 0x402da8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402DACu;
        goto label_402dac;
    }
    ctx->pc = 0x402DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x402DACu);
        ctx->pc = 0x402DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402DA4u;
        // 0x402da8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402DA4u, 0x402DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x402DACu;
label_402dac:
    // 0x402dac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x402dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_402db0:
    // 0x402db0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x402db0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_402db4:
    // 0x402db4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x402db4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_402db8:
    // 0x402db8: 0x3c030420  lui         $v1, 0x420
    ctx->pc = 0x402db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1056 << 16));
label_402dbc:
    // 0x402dbc: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x402dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_402dc0:
    // 0x402dc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x402dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_402dc4:
    // 0x402dc4: 0x10000023  b           . + 4 + (0x23 << 2)
label_402dc8:
    if (ctx->pc == 0x402DC8u) {
        ctx->pc = 0x402DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402DC4u;
        // 0x402dc8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402DCCu;
        goto label_402dcc;
    }
    ctx->pc = 0x402DC4u;
    {
        const bool branch_taken_0x402dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402DC4u;
        // 0x402dc8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402dc4) {
            ctx->pc = 0x402E54u;
            return;
        }
    }
    ctx->pc = 0x402DCCu;
label_402dcc:
    // 0x402dcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x402dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_402dd0:
    // 0x402dd0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x402dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_402dd4:
    // 0x402dd4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_402dd8:
    if (ctx->pc == 0x402DD8u) {
        ctx->pc = 0x402DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402DD4u;
        // 0x402dd8: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402DDCu;
        goto label_402ddc;
    }
    ctx->pc = 0x402DD4u;
    {
        const bool branch_taken_0x402dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402DD4u;
        // 0x402dd8: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402dd4) {
            ctx->pc = 0x402E54u;
            return;
        }
    }
    ctx->pc = 0x402DDCu;
label_402ddc:
    // 0x402ddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x402ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_402de0:
    // 0x402de0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x402de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_402de4:
    // 0x402de4: 0xc0ffed2  jal         func_3FFB48
label_402de8:
    if (ctx->pc == 0x402DE8u) {
        ctx->pc = 0x402DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402DE4u;
        // 0x402de8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402DECu;
        goto label_402dec;
    }
    ctx->pc = 0x402DE4u;
    SET_GPR_U32(ctx, 31, 0x402DECu);
    ctx->pc = 0x402DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402DE4u;
    // 0x402de8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FFB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FFB48u, 0x402DE4u, 0x402DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402DECu;
label_402dec:
    // 0x402dec: 0x1000001a  b           . + 4 + (0x1A << 2)
label_402df0:
    if (ctx->pc == 0x402DF0u) {
        ctx->pc = 0x402DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402DECu;
        // 0x402df0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402DF4u;
        goto label_402df4;
    }
    ctx->pc = 0x402DECu;
    {
        const bool branch_taken_0x402dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402DECu;
        // 0x402df0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402dec) {
            ctx->pc = 0x402E58u;
            return;
        }
    }
    ctx->pc = 0x402DF4u;
label_402df4:
    // 0x402df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x402df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_402df8:
    // 0x402df8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x402df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_402dfc:
    // 0x402dfc: 0xc0fffa4  jal         func_3FFE90
label_402e00:
    if (ctx->pc == 0x402E00u) {
        ctx->pc = 0x402E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402DFCu;
        // 0x402e00: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402E04u;
        goto label_402e04;
    }
    ctx->pc = 0x402DFCu;
    SET_GPR_U32(ctx, 31, 0x402E04u);
    ctx->pc = 0x402E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402DFCu;
    // 0x402e00: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FFE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FFE90u, 0x402DFCu, 0x402E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402E04u;
label_402e04:
    // 0x402e04: 0x10000014  b           . + 4 + (0x14 << 2)
label_402e08:
    if (ctx->pc == 0x402E08u) {
        ctx->pc = 0x402E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402E04u;
        // 0x402e08: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402E0Cu;
        goto label_402e0c;
    }
    ctx->pc = 0x402E04u;
    {
        const bool branch_taken_0x402e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402E04u;
        // 0x402e08: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402e04) {
            ctx->pc = 0x402E58u;
            return;
        }
    }
    ctx->pc = 0x402E0Cu;
label_402e0c:
    // 0x402e0c: 0xc0ea146  jal         func_3A8518
label_402e10:
    if (ctx->pc == 0x402E10u) {
        ctx->pc = 0x402E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402E0Cu;
        // 0x402e10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402E14u;
        goto label_402e14;
    }
    ctx->pc = 0x402E0Cu;
    SET_GPR_U32(ctx, 31, 0x402E14u);
    ctx->pc = 0x402E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402E0Cu;
    // 0x402e10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x402E0Cu, 0x402E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402E14u;
label_402e14:
    // 0x402e14: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_402e18:
    if (ctx->pc == 0x402E18u) {
        ctx->pc = 0x402E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402E14u;
        // 0x402e18: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402E1Cu;
        goto label_402e1c;
    }
    ctx->pc = 0x402E14u;
    {
        const bool branch_taken_0x402e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x402e14) {
            ctx->pc = 0x402E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x402E14u;
            // 0x402e18: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x402E34u;
            goto label_402e34;
        }
    }
    ctx->pc = 0x402E1Cu;
label_402e1c:
    // 0x402e1c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x402e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_402e20:
    // 0x402e20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x402e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_402e24:
    // 0x402e24: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x402e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_402e28:
    // 0x402e28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x402e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_402e2c:
    // 0x402e2c: 0x10000009  b           . + 4 + (0x9 << 2)
label_402e30:
    if (ctx->pc == 0x402E30u) {
        ctx->pc = 0x402E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402E2Cu;
        // 0x402e30: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402E34u;
        goto label_402e34;
    }
    ctx->pc = 0x402E2Cu;
    {
        const bool branch_taken_0x402e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402E2Cu;
        // 0x402e30: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402e2c) {
            ctx->pc = 0x402E54u;
            return;
        }
    }
    ctx->pc = 0x402E34u;
label_402e34:
    // 0x402e34: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x402e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_402e38:
    // 0x402e38: 0x10000006  b           . + 4 + (0x6 << 2)
label_402e3c:
    if (ctx->pc == 0x402E3Cu) {
        ctx->pc = 0x402E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402E38u;
        // 0x402e3c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402E40u;
        goto label_402e40;
    }
    ctx->pc = 0x402E38u;
    {
        const bool branch_taken_0x402e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402E38u;
        // 0x402e3c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402e38) {
            ctx->pc = 0x402E54u;
            return;
        }
    }
    ctx->pc = 0x402E40u;
label_402e40:
    // 0x402e40: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x402e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_402e44:
    // 0x402e44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x402e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_402e48:
    // 0x402e48: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x402e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_402e4c:
    // 0x402e4c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x402e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_402e50:
    // 0x402e50: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x402e50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x402e54u;
}
