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

// Function: sub_00405C98
// Address: 0x405c98 - 0x405d90
void sub_00405C98_0x405c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00405C98_0x405c98");
#endif

    switch (ctx->pc) {
        case 0x405c98u: goto label_405c98;
        case 0x405c9cu: goto label_405c9c;
        case 0x405ca0u: goto label_405ca0;
        case 0x405ca4u: goto label_405ca4;
        case 0x405ca8u: goto label_405ca8;
        case 0x405cacu: goto label_405cac;
        case 0x405cb0u: goto label_405cb0;
        case 0x405cb4u: goto label_405cb4;
        case 0x405cb8u: goto label_405cb8;
        case 0x405cbcu: goto label_405cbc;
        case 0x405cc0u: goto label_405cc0;
        case 0x405cc4u: goto label_405cc4;
        case 0x405cc8u: goto label_405cc8;
        case 0x405cccu: goto label_405ccc;
        case 0x405cd0u: goto label_405cd0;
        case 0x405cd4u: goto label_405cd4;
        case 0x405cd8u: goto label_405cd8;
        case 0x405cdcu: goto label_405cdc;
        case 0x405ce0u: goto label_405ce0;
        case 0x405ce4u: goto label_405ce4;
        case 0x405ce8u: goto label_405ce8;
        case 0x405cecu: goto label_405cec;
        case 0x405cf0u: goto label_405cf0;
        case 0x405cf4u: goto label_405cf4;
        case 0x405cf8u: goto label_405cf8;
        case 0x405cfcu: goto label_405cfc;
        case 0x405d00u: goto label_405d00;
        case 0x405d04u: goto label_405d04;
        case 0x405d08u: goto label_405d08;
        case 0x405d0cu: goto label_405d0c;
        case 0x405d10u: goto label_405d10;
        case 0x405d14u: goto label_405d14;
        case 0x405d18u: goto label_405d18;
        case 0x405d1cu: goto label_405d1c;
        case 0x405d20u: goto label_405d20;
        case 0x405d24u: goto label_405d24;
        case 0x405d28u: goto label_405d28;
        case 0x405d2cu: goto label_405d2c;
        case 0x405d30u: goto label_405d30;
        case 0x405d34u: goto label_405d34;
        case 0x405d38u: goto label_405d38;
        case 0x405d3cu: goto label_405d3c;
        case 0x405d40u: goto label_405d40;
        case 0x405d44u: goto label_405d44;
        case 0x405d48u: goto label_405d48;
        case 0x405d4cu: goto label_405d4c;
        case 0x405d50u: goto label_405d50;
        case 0x405d54u: goto label_405d54;
        case 0x405d58u: goto label_405d58;
        case 0x405d5cu: goto label_405d5c;
        case 0x405d60u: goto label_405d60;
        case 0x405d64u: goto label_405d64;
        case 0x405d68u: goto label_405d68;
        case 0x405d6cu: goto label_405d6c;
        case 0x405d70u: goto label_405d70;
        case 0x405d74u: goto label_405d74;
        case 0x405d78u: goto label_405d78;
        case 0x405d7cu: goto label_405d7c;
        case 0x405d80u: goto label_405d80;
        case 0x405d84u: goto label_405d84;
        case 0x405d88u: goto label_405d88;
        case 0x405d8cu: goto label_405d8c;
        default: break;
    }

    ctx->pc = 0x405c98u;

label_405c98:
    // 0x405c98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x405c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_405c9c:
    // 0x405c9c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x405c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_405ca0:
    // 0x405ca0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x405ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_405ca4:
    // 0x405ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x405ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_405ca8:
    // 0x405ca8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x405ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_405cac:
    // 0x405cac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x405cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_405cb0:
    // 0x405cb0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x405cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_405cb4:
    // 0x405cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x405cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_405cb8:
    // 0x405cb8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x405cb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_405cbc:
    // 0x405cbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x405cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_405cc0:
    // 0x405cc0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x405cc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_405cc4:
    // 0x405cc4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x405cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_405cc8:
    // 0x405cc8: 0x40f809  jalr        $v0
label_405ccc:
    if (ctx->pc == 0x405CCCu) {
        ctx->pc = 0x405CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405CC8u;
        // 0x405ccc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405CD0u;
        goto label_405cd0;
    }
    ctx->pc = 0x405CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x405CD0u);
        ctx->pc = 0x405CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405CC8u;
        // 0x405ccc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405CC8u, 0x405CD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x405CD0u;
label_405cd0:
    // 0x405cd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x405cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_405cd4:
    // 0x405cd4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x405cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_405cd8:
    // 0x405cd8: 0x12220022  beq         $s1, $v0, . + 4 + (0x22 << 2)
label_405cdc:
    if (ctx->pc == 0x405CDCu) {
        ctx->pc = 0x405CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405CD8u;
        // 0x405cdc: 0x2e220016  sltiu       $v0, $s1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x405CE0u;
        goto label_405ce0;
    }
    ctx->pc = 0x405CD8u;
    {
        const bool branch_taken_0x405cd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x405CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405CD8u;
        // 0x405cdc: 0x2e220016  sltiu       $v0, $s1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x405cd8) {
            ctx->pc = 0x405D64u;
            goto label_405d64;
        }
    }
    ctx->pc = 0x405CE0u;
label_405ce0:
    // 0x405ce0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_405ce4:
    if (ctx->pc == 0x405CE4u) {
        ctx->pc = 0x405CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405CE0u;
        // 0x405ce4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405CE8u;
        goto label_405ce8;
    }
    ctx->pc = 0x405CE0u;
    {
        const bool branch_taken_0x405ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405CE0u;
        // 0x405ce4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405ce0) {
            ctx->pc = 0x405CF8u;
            goto label_405cf8;
        }
    }
    ctx->pc = 0x405CE8u;
label_405ce8:
    // 0x405ce8: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_405cec:
    if (ctx->pc == 0x405CECu) {
        ctx->pc = 0x405CF0u;
        goto label_405cf0;
    }
    ctx->pc = 0x405CE8u;
    {
        const bool branch_taken_0x405ce8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x405ce8) {
            ctx->pc = 0x405D0Cu;
            goto label_405d0c;
        }
    }
    ctx->pc = 0x405CF0u;
label_405cf0:
    // 0x405cf0: 0x10000021  b           . + 4 + (0x21 << 2)
label_405cf4:
    if (ctx->pc == 0x405CF4u) {
        ctx->pc = 0x405CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405CF0u;
        // 0x405cf4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405CF8u;
        goto label_405cf8;
    }
    ctx->pc = 0x405CF0u;
    {
        const bool branch_taken_0x405cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405CF0u;
        // 0x405cf4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405cf0) {
            ctx->pc = 0x405D78u;
            goto label_405d78;
        }
    }
    ctx->pc = 0x405CF8u;
label_405cf8:
    // 0x405cf8: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x405cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_405cfc:
    // 0x405cfc: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
label_405d00:
    if (ctx->pc == 0x405D00u) {
        ctx->pc = 0x405D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405CFCu;
        // 0x405d00: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405D04u;
        goto label_405d04;
    }
    ctx->pc = 0x405CFCu;
    {
        const bool branch_taken_0x405cfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x405D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405CFCu;
        // 0x405d00: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405cfc) {
            ctx->pc = 0x405D48u;
            goto label_405d48;
        }
    }
    ctx->pc = 0x405D04u;
label_405d04:
    // 0x405d04: 0x1000001d  b           . + 4 + (0x1D << 2)
label_405d08:
    if (ctx->pc == 0x405D08u) {
        ctx->pc = 0x405D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D04u;
        // 0x405d08: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405D0Cu;
        goto label_405d0c;
    }
    ctx->pc = 0x405D04u;
    {
        const bool branch_taken_0x405d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D04u;
        // 0x405d08: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405d04) {
            ctx->pc = 0x405D7Cu;
            goto label_405d7c;
        }
    }
    ctx->pc = 0x405D0Cu;
label_405d0c:
    // 0x405d0c: 0xc0ea146  jal         func_3A8518
label_405d10:
    if (ctx->pc == 0x405D10u) {
        ctx->pc = 0x405D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D0Cu;
        // 0x405d10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405D14u;
        goto label_405d14;
    }
    ctx->pc = 0x405D0Cu;
    SET_GPR_U32(ctx, 31, 0x405D14u);
    ctx->pc = 0x405D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405D0Cu;
    // 0x405d10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x405D0Cu, 0x405D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405D14u;
label_405d14:
    // 0x405d14: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_405d18:
    if (ctx->pc == 0x405D18u) {
        ctx->pc = 0x405D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D14u;
        // 0x405d18: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405D1Cu;
        goto label_405d1c;
    }
    ctx->pc = 0x405D14u;
    {
        const bool branch_taken_0x405d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405d14) {
            ctx->pc = 0x405D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405D14u;
            // 0x405d18: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405D34u;
            goto label_405d34;
        }
    }
    ctx->pc = 0x405D1Cu;
label_405d1c:
    // 0x405d1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x405d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_405d20:
    // 0x405d20: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x405d20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_405d24:
    // 0x405d24: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x405d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_405d28:
    // 0x405d28: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x405d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_405d2c:
    // 0x405d2c: 0x10000011  b           . + 4 + (0x11 << 2)
label_405d30:
    if (ctx->pc == 0x405D30u) {
        ctx->pc = 0x405D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D2Cu;
        // 0x405d30: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405D34u;
        goto label_405d34;
    }
    ctx->pc = 0x405D2Cu;
    {
        const bool branch_taken_0x405d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D2Cu;
        // 0x405d30: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405d2c) {
            ctx->pc = 0x405D74u;
            goto label_405d74;
        }
    }
    ctx->pc = 0x405D34u;
label_405d34:
    // 0x405d34: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x405d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_405d38:
    // 0x405d38: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x405d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_405d3c:
    // 0x405d3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x405d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_405d40:
    // 0x405d40: 0x1000000c  b           . + 4 + (0xC << 2)
label_405d44:
    if (ctx->pc == 0x405D44u) {
        ctx->pc = 0x405D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D40u;
        // 0x405d44: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405D48u;
        goto label_405d48;
    }
    ctx->pc = 0x405D40u;
    {
        const bool branch_taken_0x405d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D40u;
        // 0x405d44: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405d40) {
            ctx->pc = 0x405D74u;
            goto label_405d74;
        }
    }
    ctx->pc = 0x405D48u;
label_405d48:
    // 0x405d48: 0xc0ea146  jal         func_3A8518
label_405d4c:
    if (ctx->pc == 0x405D4Cu) {
        ctx->pc = 0x405D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D48u;
        // 0x405d4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405D50u;
        goto label_405d50;
    }
    ctx->pc = 0x405D48u;
    SET_GPR_U32(ctx, 31, 0x405D50u);
    ctx->pc = 0x405D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405D48u;
    // 0x405d4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x405D48u, 0x405D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405D50u;
label_405d50:
    // 0x405d50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x405d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_405d54:
    // 0x405d54: 0x0  nop
    ctx->pc = 0x405d54u;
    // NOP
label_405d58:
    // 0x405d58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x405d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_405d5c:
    // 0x405d5c: 0x10000005  b           . + 4 + (0x5 << 2)
label_405d60:
    if (ctx->pc == 0x405D60u) {
        ctx->pc = 0x405D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D5Cu;
        // 0x405d60: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x405D64u;
        goto label_405d64;
    }
    ctx->pc = 0x405D5Cu;
    {
        const bool branch_taken_0x405d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D5Cu;
        // 0x405d60: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x405d5c) {
            ctx->pc = 0x405D74u;
            goto label_405d74;
        }
    }
    ctx->pc = 0x405D64u;
label_405d64:
    // 0x405d64: 0xc0e95f6  jal         func_3A57D8
label_405d68:
    if (ctx->pc == 0x405D68u) {
        ctx->pc = 0x405D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D64u;
        // 0x405d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405D6Cu;
        goto label_405d6c;
    }
    ctx->pc = 0x405D64u;
    SET_GPR_U32(ctx, 31, 0x405D6Cu);
    ctx->pc = 0x405D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405D64u;
    // 0x405d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x405D64u, 0x405D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405D6Cu;
label_405d6c:
    // 0x405d6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x405d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_405d70:
    // 0x405d70: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x405d70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_405d74:
    // 0x405d74: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x405d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_405d78:
    // 0x405d78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x405d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_405d7c:
    // 0x405d7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x405d7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_405d80:
    // 0x405d80: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x405d80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_405d84:
    // 0x405d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x405d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_405d88:
    // 0x405d88: 0x3e00008  jr          $ra
label_405d8c:
    if (ctx->pc == 0x405D8Cu) {
        ctx->pc = 0x405D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D88u;
        // 0x405d8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405D90u;
        goto label_fallthrough_0x405d88;
    }
    ctx->pc = 0x405D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x405D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D88u;
        // 0x405d8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x405d88:
    ctx->pc = 0x405D90u;
}
