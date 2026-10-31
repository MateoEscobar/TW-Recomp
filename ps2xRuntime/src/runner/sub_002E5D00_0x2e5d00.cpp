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

// Function: sub_002E5D00
// Address: 0x2e5d00 - 0x2e5e50
void sub_002E5D00_0x2e5d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5D00_0x2e5d00");
#endif

    switch (ctx->pc) {
        case 0x2e5d00u: goto label_2e5d00;
        case 0x2e5d04u: goto label_2e5d04;
        case 0x2e5d08u: goto label_2e5d08;
        case 0x2e5d0cu: goto label_2e5d0c;
        case 0x2e5d10u: goto label_2e5d10;
        case 0x2e5d14u: goto label_2e5d14;
        case 0x2e5d18u: goto label_2e5d18;
        case 0x2e5d1cu: goto label_2e5d1c;
        case 0x2e5d20u: goto label_2e5d20;
        case 0x2e5d24u: goto label_2e5d24;
        case 0x2e5d28u: goto label_2e5d28;
        case 0x2e5d2cu: goto label_2e5d2c;
        case 0x2e5d30u: goto label_2e5d30;
        case 0x2e5d34u: goto label_2e5d34;
        case 0x2e5d38u: goto label_2e5d38;
        case 0x2e5d3cu: goto label_2e5d3c;
        case 0x2e5d40u: goto label_2e5d40;
        case 0x2e5d44u: goto label_2e5d44;
        case 0x2e5d48u: goto label_2e5d48;
        case 0x2e5d4cu: goto label_2e5d4c;
        case 0x2e5d50u: goto label_2e5d50;
        case 0x2e5d54u: goto label_2e5d54;
        case 0x2e5d58u: goto label_2e5d58;
        case 0x2e5d5cu: goto label_2e5d5c;
        case 0x2e5d60u: goto label_2e5d60;
        case 0x2e5d64u: goto label_2e5d64;
        case 0x2e5d68u: goto label_2e5d68;
        case 0x2e5d6cu: goto label_2e5d6c;
        case 0x2e5d70u: goto label_2e5d70;
        case 0x2e5d74u: goto label_2e5d74;
        case 0x2e5d78u: goto label_2e5d78;
        case 0x2e5d7cu: goto label_2e5d7c;
        case 0x2e5d80u: goto label_2e5d80;
        case 0x2e5d84u: goto label_2e5d84;
        case 0x2e5d88u: goto label_2e5d88;
        case 0x2e5d8cu: goto label_2e5d8c;
        case 0x2e5d90u: goto label_2e5d90;
        case 0x2e5d94u: goto label_2e5d94;
        case 0x2e5d98u: goto label_2e5d98;
        case 0x2e5d9cu: goto label_2e5d9c;
        case 0x2e5da0u: goto label_2e5da0;
        case 0x2e5da4u: goto label_2e5da4;
        case 0x2e5da8u: goto label_2e5da8;
        case 0x2e5dacu: goto label_2e5dac;
        case 0x2e5db0u: goto label_2e5db0;
        case 0x2e5db4u: goto label_2e5db4;
        case 0x2e5db8u: goto label_2e5db8;
        case 0x2e5dbcu: goto label_2e5dbc;
        case 0x2e5dc0u: goto label_2e5dc0;
        case 0x2e5dc4u: goto label_2e5dc4;
        case 0x2e5dc8u: goto label_2e5dc8;
        case 0x2e5dccu: goto label_2e5dcc;
        case 0x2e5dd0u: goto label_2e5dd0;
        case 0x2e5dd4u: goto label_2e5dd4;
        case 0x2e5dd8u: goto label_2e5dd8;
        case 0x2e5ddcu: goto label_2e5ddc;
        case 0x2e5de0u: goto label_2e5de0;
        case 0x2e5de4u: goto label_2e5de4;
        case 0x2e5de8u: goto label_2e5de8;
        case 0x2e5decu: goto label_2e5dec;
        case 0x2e5df0u: goto label_2e5df0;
        case 0x2e5df4u: goto label_2e5df4;
        case 0x2e5df8u: goto label_2e5df8;
        case 0x2e5dfcu: goto label_2e5dfc;
        case 0x2e5e00u: goto label_2e5e00;
        case 0x2e5e04u: goto label_2e5e04;
        case 0x2e5e08u: goto label_2e5e08;
        case 0x2e5e0cu: goto label_2e5e0c;
        case 0x2e5e10u: goto label_2e5e10;
        case 0x2e5e14u: goto label_2e5e14;
        case 0x2e5e18u: goto label_2e5e18;
        case 0x2e5e1cu: goto label_2e5e1c;
        case 0x2e5e20u: goto label_2e5e20;
        case 0x2e5e24u: goto label_2e5e24;
        case 0x2e5e28u: goto label_2e5e28;
        case 0x2e5e2cu: goto label_2e5e2c;
        case 0x2e5e30u: goto label_2e5e30;
        case 0x2e5e34u: goto label_2e5e34;
        case 0x2e5e38u: goto label_2e5e38;
        case 0x2e5e3cu: goto label_2e5e3c;
        case 0x2e5e40u: goto label_2e5e40;
        case 0x2e5e44u: goto label_2e5e44;
        case 0x2e5e48u: goto label_2e5e48;
        case 0x2e5e4cu: goto label_2e5e4c;
        default: break;
    }

    ctx->pc = 0x2e5d00u;

label_2e5d00:
    // 0x2e5d00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e5d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e5d04:
    // 0x2e5d04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e5d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e5d08:
    // 0x2e5d08: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e5d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2e5d0c:
    // 0x2e5d0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e5d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2e5d10:
    // 0x2e5d10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e5d10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e5d14:
    // 0x2e5d14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e5d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2e5d18:
    // 0x2e5d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e5d1c:
    // 0x2e5d1c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e5d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e5d20:
    // 0x2e5d20: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x2e5d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2e5d24:
    // 0x2e5d24: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_2e5d28:
    if (ctx->pc == 0x2E5D28u) {
        ctx->pc = 0x2E5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D24u;
        // 0x2e5d28: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5D2Cu;
        goto label_2e5d2c;
    }
    ctx->pc = 0x2E5D24u;
    {
        const bool branch_taken_0x2e5d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D24u;
        // 0x2e5d28: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d24) {
            ctx->pc = 0x2E5D74u;
            goto label_2e5d74;
        }
    }
    ctx->pc = 0x2E5D2Cu;
label_2e5d2c:
    // 0x2e5d2c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2e5d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_2e5d30:
    // 0x2e5d30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2e5d34:
    if (ctx->pc == 0x2E5D34u) {
        ctx->pc = 0x2E5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D30u;
        // 0x2e5d34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5D38u;
        goto label_2e5d38;
    }
    ctx->pc = 0x2E5D30u;
    {
        const bool branch_taken_0x2e5d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D30u;
        // 0x2e5d34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d30) {
            ctx->pc = 0x2E5D48u;
            goto label_2e5d48;
        }
    }
    ctx->pc = 0x2E5D38u;
label_2e5d38:
    // 0x2e5d38: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_2e5d3c:
    if (ctx->pc == 0x2E5D3Cu) {
        ctx->pc = 0x2E5D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D38u;
        // 0x2e5d3c: 0x3c060056  lui         $a2, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5D40u;
        goto label_2e5d40;
    }
    ctx->pc = 0x2E5D38u;
    {
        const bool branch_taken_0x2e5d38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D38u;
        // 0x2e5d3c: 0x3c060056  lui         $a2, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d38) {
            ctx->pc = 0x2E5D5Cu;
            goto label_2e5d5c;
        }
    }
    ctx->pc = 0x2E5D40u;
label_2e5d40:
    // 0x2e5d40: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2e5d44:
    if (ctx->pc == 0x2E5D44u) {
        ctx->pc = 0x2E5D48u;
        goto label_2e5d48;
    }
    ctx->pc = 0x2E5D40u;
    {
        const bool branch_taken_0x2e5d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5d40) {
            ctx->pc = 0x2E5DB0u;
            goto label_2e5db0;
        }
    }
    ctx->pc = 0x2E5D48u;
label_2e5d48:
    // 0x2e5d48: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x2e5d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
label_2e5d4c:
    // 0x2e5d4c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2e5d50:
    if (ctx->pc == 0x2E5D50u) {
        ctx->pc = 0x2E5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D4Cu;
        // 0x2e5d50: 0x3c060056  lui         $a2, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5D54u;
        goto label_2e5d54;
    }
    ctx->pc = 0x2E5D4Cu;
    {
        const bool branch_taken_0x2e5d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D4Cu;
        // 0x2e5d50: 0x3c060056  lui         $a2, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d4c) {
            ctx->pc = 0x2E5DB0u;
            goto label_2e5db0;
        }
    }
    ctx->pc = 0x2E5D54u;
label_2e5d54:
    // 0x2e5d54: 0x1000000e  b           . + 4 + (0xE << 2)
label_2e5d58:
    if (ctx->pc == 0x2E5D58u) {
        ctx->pc = 0x2E5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D54u;
        // 0x2e5d58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5D5Cu;
        goto label_2e5d5c;
    }
    ctx->pc = 0x2E5D54u;
    {
        const bool branch_taken_0x2e5d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D54u;
        // 0x2e5d58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d54) {
            ctx->pc = 0x2E5D90u;
            goto label_2e5d90;
        }
    }
    ctx->pc = 0x2E5D5Cu;
label_2e5d5c:
    // 0x2e5d5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e5d60:
    // 0x2e5d60: 0x24c67238  addiu       $a2, $a2, 0x7238
    ctx->pc = 0x2e5d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29240));
label_2e5d64:
    // 0x2e5d64: 0xc0886a8  jal         func_221AA0
label_2e5d68:
    if (ctx->pc == 0x2E5D68u) {
        ctx->pc = 0x2E5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D64u;
        // 0x2e5d68: 0x24050158  addiu       $a1, $zero, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5D6Cu;
        goto label_2e5d6c;
    }
    ctx->pc = 0x2E5D64u;
    SET_GPR_U32(ctx, 31, 0x2E5D6Cu);
    ctx->pc = 0x2E5D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5D64u;
    // 0x2e5d68: 0x24050158  addiu       $a1, $zero, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2E5D64u, 0x2E5D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D6Cu;
label_2e5d6c:
    // 0x2e5d6c: 0x10000010  b           . + 4 + (0x10 << 2)
label_2e5d70:
    if (ctx->pc == 0x2E5D70u) {
        ctx->pc = 0x2E5D74u;
        goto label_2e5d74;
    }
    ctx->pc = 0x2E5D6Cu;
    {
        const bool branch_taken_0x2e5d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5d6c) {
            ctx->pc = 0x2E5DB0u;
            goto label_2e5db0;
        }
    }
    ctx->pc = 0x2E5D74u;
label_2e5d74:
    // 0x2e5d74: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2e5d74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2e5d78:
    // 0x2e5d78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e5d7c:
    // 0x2e5d7c: 0x24c67248  addiu       $a2, $a2, 0x7248
    ctx->pc = 0x2e5d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29256));
label_2e5d80:
    // 0x2e5d80: 0xc0886a8  jal         func_221AA0
label_2e5d84:
    if (ctx->pc == 0x2E5D84u) {
        ctx->pc = 0x2E5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D80u;
        // 0x2e5d84: 0x2405014e  addiu       $a1, $zero, 0x14E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5D88u;
        goto label_2e5d88;
    }
    ctx->pc = 0x2E5D80u;
    SET_GPR_U32(ctx, 31, 0x2E5D88u);
    ctx->pc = 0x2E5D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5D80u;
    // 0x2e5d84: 0x2405014e  addiu       $a1, $zero, 0x14E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2E5D80u, 0x2E5D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D88u;
label_2e5d88:
    // 0x2e5d88: 0x10000009  b           . + 4 + (0x9 << 2)
label_2e5d8c:
    if (ctx->pc == 0x2E5D8Cu) {
        ctx->pc = 0x2E5D90u;
        goto label_2e5d90;
    }
    ctx->pc = 0x2E5D88u;
    {
        const bool branch_taken_0x2e5d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5d88) {
            ctx->pc = 0x2E5DB0u;
            goto label_2e5db0;
        }
    }
    ctx->pc = 0x2E5D90u;
label_2e5d90:
    // 0x2e5d90: 0x24c67248  addiu       $a2, $a2, 0x7248
    ctx->pc = 0x2e5d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29256));
label_2e5d94:
    // 0x2e5d94: 0xc0886a8  jal         func_221AA0
label_2e5d98:
    if (ctx->pc == 0x2E5D98u) {
        ctx->pc = 0x2E5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D94u;
        // 0x2e5d98: 0x2405014e  addiu       $a1, $zero, 0x14E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5D9Cu;
        goto label_2e5d9c;
    }
    ctx->pc = 0x2E5D94u;
    SET_GPR_U32(ctx, 31, 0x2E5D9Cu);
    ctx->pc = 0x2E5D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5D94u;
    // 0x2e5d98: 0x2405014e  addiu       $a1, $zero, 0x14E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2E5D94u, 0x2E5D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D9Cu;
label_2e5d9c:
    // 0x2e5d9c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2e5d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2e5da0:
    // 0x2e5da0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e5da4:
    // 0x2e5da4: 0x24c67258  addiu       $a2, $a2, 0x7258
    ctx->pc = 0x2e5da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29272));
label_2e5da8:
    // 0x2e5da8: 0xc0886a8  jal         func_221AA0
label_2e5dac:
    if (ctx->pc == 0x2E5DACu) {
        ctx->pc = 0x2E5DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DA8u;
        // 0x2e5dac: 0x24050158  addiu       $a1, $zero, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5DB0u;
        goto label_2e5db0;
    }
    ctx->pc = 0x2E5DA8u;
    SET_GPR_U32(ctx, 31, 0x2E5DB0u);
    ctx->pc = 0x2E5DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5DA8u;
    // 0x2e5dac: 0x24050158  addiu       $a1, $zero, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2E5DA8u, 0x2E5DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5DB0u;
label_2e5db0:
    // 0x2e5db0: 0xc08bfbc  jal         func_22FEF0
label_2e5db4:
    if (ctx->pc == 0x2E5DB4u) {
        ctx->pc = 0x2E5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DB0u;
        // 0x2e5db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5DB8u;
        goto label_2e5db8;
    }
    ctx->pc = 0x2E5DB0u;
    SET_GPR_U32(ctx, 31, 0x2E5DB8u);
    ctx->pc = 0x2E5DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5DB0u;
    // 0x2e5db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2E5DB0u, 0x2E5DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5DB8u;
label_2e5db8:
    // 0x2e5db8: 0x92420054  lbu         $v0, 0x54($s2)
    ctx->pc = 0x2e5db8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
label_2e5dbc:
    // 0x2e5dbc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2e5dc0:
    if (ctx->pc == 0x2E5DC0u) {
        ctx->pc = 0x2E5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DBCu;
        // 0x2e5dc0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5DC4u;
        goto label_2e5dc4;
    }
    ctx->pc = 0x2E5DBCu;
    {
        const bool branch_taken_0x2e5dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DBCu;
        // 0x2e5dc0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5dbc) {
            ctx->pc = 0x2E5DE4u;
            goto label_2e5de4;
        }
    }
    ctx->pc = 0x2E5DC4u;
label_2e5dc4:
    // 0x2e5dc4: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2e5dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2e5dc8:
    // 0x2e5dc8: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x2e5dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
label_2e5dcc:
    // 0x2e5dcc: 0x24c67270  addiu       $a2, $a2, 0x7270
    ctx->pc = 0x2e5dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29296));
label_2e5dd0:
    // 0x2e5dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e5dd4:
    // 0x2e5dd4: 0xc0886a8  jal         func_221AA0
label_2e5dd8:
    if (ctx->pc == 0x2E5DD8u) {
        ctx->pc = 0x2E5DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DD4u;
        // 0x2e5dd8: 0x24050152  addiu       $a1, $zero, 0x152 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5DDCu;
        goto label_2e5ddc;
    }
    ctx->pc = 0x2E5DD4u;
    SET_GPR_U32(ctx, 31, 0x2E5DDCu);
    ctx->pc = 0x2E5DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5DD4u;
    // 0x2e5dd8: 0x24050152  addiu       $a1, $zero, 0x152 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2E5DD4u, 0x2E5DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5DDCu;
label_2e5ddc:
    // 0x2e5ddc: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e5de0:
    if (ctx->pc == 0x2E5DE0u) {
        ctx->pc = 0x2E5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DDCu;
        // 0x2e5de0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5DE4u;
        goto label_2e5de4;
    }
    ctx->pc = 0x2E5DDCu;
    {
        const bool branch_taken_0x2e5ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DDCu;
        // 0x2e5de0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ddc) {
            ctx->pc = 0x2E5E0Cu;
            goto label_2e5e0c;
        }
    }
    ctx->pc = 0x2E5DE4u;
label_2e5de4:
    // 0x2e5de4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e5de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2e5de8:
    // 0x2e5de8: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2e5de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2e5dec:
    // 0x2e5dec: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e5decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2e5df0:
    // 0x2e5df0: 0x24052710  addiu       $a1, $zero, 0x2710
    ctx->pc = 0x2e5df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_2e5df4:
    // 0x2e5df4: 0x24064e20  addiu       $a2, $zero, 0x4E20
    ctx->pc = 0x2e5df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
label_2e5df8:
    // 0x2e5df8: 0xc0cd4fc  jal         func_3353F0
label_2e5dfc:
    if (ctx->pc == 0x2E5DFCu) {
        ctx->pc = 0x2E5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DF8u;
        // 0x2e5dfc: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E00u;
        goto label_2e5e00;
    }
    ctx->pc = 0x2E5DF8u;
    SET_GPR_U32(ctx, 31, 0x2E5E00u);
    ctx->pc = 0x2E5DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5DF8u;
    // 0x2e5dfc: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2E5DF8u, 0x2E5E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E00u;
label_2e5e00:
    // 0x2e5e00: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2e5e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e5e04:
    // 0x2e5e04: 0xae50004c  sw          $s0, 0x4C($s2)
    ctx->pc = 0x2e5e04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 16));
label_2e5e08:
    // 0x2e5e08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e5e0c:
    // 0x2e5e0c: 0xa22001b2  sb          $zero, 0x1B2($s1)
    ctx->pc = 0x2e5e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 434), (uint8_t)GPR_U32(ctx, 0));
label_2e5e10:
    // 0x2e5e10: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x2e5e10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_2e5e14:
    // 0x2e5e14: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x2e5e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_2e5e18:
    // 0x2e5e18: 0x60f809  jalr        $v1
label_2e5e1c:
    if (ctx->pc == 0x2E5E1Cu) {
        ctx->pc = 0x2E5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E18u;
        // 0x2e5e1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E20u;
        goto label_2e5e20;
    }
    ctx->pc = 0x2E5E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E5E20u);
        ctx->pc = 0x2E5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E18u;
        // 0x2e5e1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5E18u, 0x2E5E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5E20u;
label_2e5e20:
    // 0x2e5e20: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e5e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e5e24:
    // 0x2e5e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e5e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5e28:
    // 0x2e5e28: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e5e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e5e2c:
    // 0x2e5e2c: 0xa082028d  sb          $v0, 0x28D($a0)
    ctx->pc = 0x2e5e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 653), (uint8_t)GPR_U32(ctx, 2));
label_2e5e30:
    // 0x2e5e30: 0xc0a33ae  jal         func_28CEB8
label_2e5e34:
    if (ctx->pc == 0x2E5E34u) {
        ctx->pc = 0x2E5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E30u;
        // 0x2e5e34: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E38u;
        goto label_2e5e38;
    }
    ctx->pc = 0x2E5E30u;
    SET_GPR_U32(ctx, 31, 0x2E5E38u);
    ctx->pc = 0x2E5E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5E30u;
    // 0x2e5e34: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CEB8u, 0x2E5E30u, 0x2E5E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E38u;
label_2e5e38:
    // 0x2e5e38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e5e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e5e3c:
    // 0x2e5e3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e5e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5e40:
    // 0x2e5e40: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e5e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5e44:
    // 0x2e5e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5e48:
    // 0x2e5e48: 0x3e00008  jr          $ra
label_2e5e4c:
    if (ctx->pc == 0x2E5E4Cu) {
        ctx->pc = 0x2E5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E48u;
        // 0x2e5e4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E50u;
        goto label_fallthrough_0x2e5e48;
    }
    ctx->pc = 0x2E5E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E48u;
        // 0x2e5e4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e5e48:
    ctx->pc = 0x2E5E50u;
}
