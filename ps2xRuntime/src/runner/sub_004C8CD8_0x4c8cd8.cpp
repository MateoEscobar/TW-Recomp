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

// Function: sub_004C8CD8
// Address: 0x4c8cd8 - 0x4c8d90
void sub_004C8CD8_0x4c8cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C8CD8_0x4c8cd8");
#endif

    switch (ctx->pc) {
        case 0x4c8cd8u: goto label_4c8cd8;
        case 0x4c8cdcu: goto label_4c8cdc;
        case 0x4c8ce0u: goto label_4c8ce0;
        case 0x4c8ce4u: goto label_4c8ce4;
        case 0x4c8ce8u: goto label_4c8ce8;
        case 0x4c8cecu: goto label_4c8cec;
        case 0x4c8cf0u: goto label_4c8cf0;
        case 0x4c8cf4u: goto label_4c8cf4;
        case 0x4c8cf8u: goto label_4c8cf8;
        case 0x4c8cfcu: goto label_4c8cfc;
        case 0x4c8d00u: goto label_4c8d00;
        case 0x4c8d04u: goto label_4c8d04;
        case 0x4c8d08u: goto label_4c8d08;
        case 0x4c8d0cu: goto label_4c8d0c;
        case 0x4c8d10u: goto label_4c8d10;
        case 0x4c8d14u: goto label_4c8d14;
        case 0x4c8d18u: goto label_4c8d18;
        case 0x4c8d1cu: goto label_4c8d1c;
        case 0x4c8d20u: goto label_4c8d20;
        case 0x4c8d24u: goto label_4c8d24;
        case 0x4c8d28u: goto label_4c8d28;
        case 0x4c8d2cu: goto label_4c8d2c;
        case 0x4c8d30u: goto label_4c8d30;
        case 0x4c8d34u: goto label_4c8d34;
        case 0x4c8d38u: goto label_4c8d38;
        case 0x4c8d3cu: goto label_4c8d3c;
        case 0x4c8d40u: goto label_4c8d40;
        case 0x4c8d44u: goto label_4c8d44;
        case 0x4c8d48u: goto label_4c8d48;
        case 0x4c8d4cu: goto label_4c8d4c;
        case 0x4c8d50u: goto label_4c8d50;
        case 0x4c8d54u: goto label_4c8d54;
        case 0x4c8d58u: goto label_4c8d58;
        case 0x4c8d5cu: goto label_4c8d5c;
        case 0x4c8d60u: goto label_4c8d60;
        case 0x4c8d64u: goto label_4c8d64;
        case 0x4c8d68u: goto label_4c8d68;
        case 0x4c8d6cu: goto label_4c8d6c;
        case 0x4c8d70u: goto label_4c8d70;
        case 0x4c8d74u: goto label_4c8d74;
        case 0x4c8d78u: goto label_4c8d78;
        case 0x4c8d7cu: goto label_4c8d7c;
        case 0x4c8d80u: goto label_4c8d80;
        case 0x4c8d84u: goto label_4c8d84;
        case 0x4c8d88u: goto label_4c8d88;
        case 0x4c8d8cu: goto label_4c8d8c;
        default: break;
    }

    ctx->pc = 0x4c8cd8u;

label_4c8cd8:
    // 0x4c8cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c8cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4c8cdc:
    // 0x4c8cdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c8cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4c8ce0:
    // 0x4c8ce0: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_4c8ce4:
    if (ctx->pc == 0x4C8CE4u) {
        ctx->pc = 0x4C8CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8CE0u;
        // 0x4c8ce4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8CE8u;
        goto label_4c8ce8;
    }
    ctx->pc = 0x4C8CE0u;
    {
        const bool branch_taken_0x4c8ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8CE0u;
        // 0x4c8ce4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8ce0) {
            ctx->pc = 0x4C8D3Cu;
            goto label_4c8d3c;
        }
    }
    ctx->pc = 0x4C8CE8u;
label_4c8ce8:
    // 0x4c8ce8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c8ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4c8cec:
    // 0x4c8cec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c8cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4c8cf0:
    // 0x4c8cf0: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
label_4c8cf4:
    if (ctx->pc == 0x4C8CF4u) {
        ctx->pc = 0x4C8CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8CF0u;
        // 0x4c8cf4: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8CF8u;
        goto label_4c8cf8;
    }
    ctx->pc = 0x4C8CF0u;
    {
        const bool branch_taken_0x4c8cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C8CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8CF0u;
        // 0x4c8cf4: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8cf0) {
            ctx->pc = 0x4C8D3Cu;
            goto label_4c8d3c;
        }
    }
    ctx->pc = 0x4C8CF8u;
label_4c8cf8:
    // 0x4c8cf8: 0x8c422834  lw          $v0, 0x2834($v0)
    ctx->pc = 0x4c8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10292)));
label_4c8cfc:
    // 0x4c8cfc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4c8d00:
    if (ctx->pc == 0x4C8D00u) {
        ctx->pc = 0x4C8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8CFCu;
        // 0x4c8d00: 0x24900047  addiu       $s0, $a0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8D04u;
        goto label_4c8d04;
    }
    ctx->pc = 0x4C8CFCu;
    {
        const bool branch_taken_0x4c8cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8CFCu;
        // 0x4c8d00: 0x24900047  addiu       $s0, $a0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8cfc) {
            ctx->pc = 0x4C8D28u;
            goto label_4c8d28;
        }
    }
    ctx->pc = 0x4C8D04u;
label_4c8d04:
    // 0x4c8d04: 0x40f809  jalr        $v0
label_4c8d08:
    if (ctx->pc == 0x4C8D08u) {
        ctx->pc = 0x4C8D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D04u;
        // 0x4c8d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8D0Cu;
        goto label_4c8d0c;
    }
    ctx->pc = 0x4C8D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C8D0Cu);
        ctx->pc = 0x4C8D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D04u;
        // 0x4c8d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C8D04u, 0x4C8D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C8D0Cu;
label_4c8d0c:
    // 0x4c8d0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c8d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c8d10:
    // 0x4c8d10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4c8d14:
    if (ctx->pc == 0x4C8D14u) {
        ctx->pc = 0x4C8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D10u;
        // 0x4c8d14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8D18u;
        goto label_4c8d18;
    }
    ctx->pc = 0x4C8D10u;
    {
        const bool branch_taken_0x4c8d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D10u;
        // 0x4c8d14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8d10) {
            ctx->pc = 0x4C8D28u;
            goto label_4c8d28;
        }
    }
    ctx->pc = 0x4C8D18u;
label_4c8d18:
    // 0x4c8d18: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_4c8d1c:
    if (ctx->pc == 0x4C8D1Cu) {
        ctx->pc = 0x4C8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D18u;
        // 0x4c8d1c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8D20u;
        goto label_4c8d20;
    }
    ctx->pc = 0x4C8D18u;
    {
        const bool branch_taken_0x4c8d18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D18u;
        // 0x4c8d1c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8d18) {
            ctx->pc = 0x4C8D3Cu;
            goto label_4c8d3c;
        }
    }
    ctx->pc = 0x4C8D20u;
label_4c8d20:
    // 0x4c8d20: 0x10000009  b           . + 4 + (0x9 << 2)
label_4c8d24:
    if (ctx->pc == 0x4C8D24u) {
        ctx->pc = 0x4C8D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D20u;
        // 0x4c8d24: 0x24820047  addiu       $v0, $a0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8D28u;
        goto label_4c8d28;
    }
    ctx->pc = 0x4C8D20u;
    {
        const bool branch_taken_0x4c8d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D20u;
        // 0x4c8d24: 0x24820047  addiu       $v0, $a0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8d20) {
            ctx->pc = 0x4C8D48u;
            goto label_4c8d48;
        }
    }
    ctx->pc = 0x4C8D28u;
label_4c8d28:
    // 0x4c8d28: 0xc10ced8  jal         func_433B60
label_4c8d2c:
    if (ctx->pc == 0x4C8D2Cu) {
        ctx->pc = 0x4C8D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D28u;
        // 0x4c8d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8D30u;
        goto label_4c8d30;
    }
    ctx->pc = 0x4C8D28u;
    SET_GPR_U32(ctx, 31, 0x4C8D30u);
    ctx->pc = 0x4C8D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8D28u;
    // 0x4c8d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433B60u, 0x4C8D28u, 0x4C8D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8D30u;
label_4c8d30:
    // 0x4c8d30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c8d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c8d34:
    // 0x4c8d34: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_4c8d38:
    if (ctx->pc == 0x4C8D38u) {
        ctx->pc = 0x4C8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D34u;
        // 0x4c8d38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8D3Cu;
        goto label_4c8d3c;
    }
    ctx->pc = 0x4C8D34u;
    {
        const bool branch_taken_0x4c8d34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D34u;
        // 0x4c8d38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8d34) {
            ctx->pc = 0x4C8D44u;
            goto label_4c8d44;
        }
    }
    ctx->pc = 0x4C8D3Cu;
label_4c8d3c:
    // 0x4c8d3c: 0x1000000f  b           . + 4 + (0xF << 2)
label_4c8d40:
    if (ctx->pc == 0x4C8D40u) {
        ctx->pc = 0x4C8D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D3Cu;
        // 0x4c8d40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8D44u;
        goto label_4c8d44;
    }
    ctx->pc = 0x4C8D3Cu;
    {
        const bool branch_taken_0x4c8d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D3Cu;
        // 0x4c8d40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8d3c) {
            ctx->pc = 0x4C8D7Cu;
            goto label_4c8d7c;
        }
    }
    ctx->pc = 0x4C8D44u;
label_4c8d44:
    // 0x4c8d44: 0x24820047  addiu       $v0, $a0, 0x47
    ctx->pc = 0x4c8d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 71));
label_4c8d48:
    // 0x4c8d48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4c8d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c8d4c:
    // 0x4c8d4c: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x4c8d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_4c8d50:
    // 0x4c8d50: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4c8d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4c8d54:
    // 0x4c8d54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4c8d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4c8d58:
    // 0x4c8d58: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4c8d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4c8d5c:
    // 0x4c8d5c: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x4c8d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
label_4c8d60:
    // 0x4c8d60: 0xa0a27fff  sb          $v0, 0x7FFF($a1)
    ctx->pc = 0x4c8d60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 32767), (uint8_t)GPR_U32(ctx, 2));
label_4c8d64:
    // 0x4c8d64: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
label_4c8d68:
    if (ctx->pc == 0x4C8D68u) {
        ctx->pc = 0x4C8D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D64u;
        // 0x4c8d68: 0xa0a67ffe  sb          $a2, 0x7FFE($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 32766), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8D6Cu;
        goto label_4c8d6c;
    }
    ctx->pc = 0x4C8D64u;
    {
        const bool branch_taken_0x4c8d64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x4C8D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D64u;
        // 0x4c8d68: 0xa0a67ffe  sb          $a2, 0x7FFE($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 32766), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8d64) {
            ctx->pc = 0x4C8D78u;
            goto label_4c8d78;
        }
    }
    ctx->pc = 0x4C8D6Cu;
label_4c8d6c:
    // 0x4c8d6c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4c8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4c8d70:
    // 0x4c8d70: 0x8c432838  lw          $v1, 0x2838($v0)
    ctx->pc = 0x4c8d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10296)));
label_4c8d74:
    // 0x4c8d74: 0xaca37ff8  sw          $v1, 0x7FF8($a1)
    ctx->pc = 0x4c8d74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32760), GPR_U32(ctx, 3));
label_4c8d78:
    // 0x4c8d78: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4c8d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c8d7c:
    // 0x4c8d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c8d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c8d80:
    // 0x4c8d80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c8d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4c8d84:
    // 0x4c8d84: 0x3e00008  jr          $ra
label_4c8d88:
    if (ctx->pc == 0x4C8D88u) {
        ctx->pc = 0x4C8D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D84u;
        // 0x4c8d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C8D8Cu;
        goto label_4c8d8c;
    }
    ctx->pc = 0x4C8D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C8D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8D84u;
        // 0x4c8d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C8D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C8D8Cu;
label_4c8d8c:
    // 0x4c8d8c: 0x0  nop
    ctx->pc = 0x4c8d8cu;
    // NOP
    ctx->pc = 0x4c8d90u;
}
