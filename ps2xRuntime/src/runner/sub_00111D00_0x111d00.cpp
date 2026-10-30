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

// Function: sub_00111D00
// Address: 0x111d00 - 0x111de8
void sub_00111D00_0x111d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111D00_0x111d00");
#endif

    switch (ctx->pc) {
        case 0x111d00u: goto label_111d00;
        case 0x111d04u: goto label_111d04;
        case 0x111d08u: goto label_111d08;
        case 0x111d0cu: goto label_111d0c;
        case 0x111d10u: goto label_111d10;
        case 0x111d14u: goto label_111d14;
        case 0x111d18u: goto label_111d18;
        case 0x111d1cu: goto label_111d1c;
        case 0x111d20u: goto label_111d20;
        case 0x111d24u: goto label_111d24;
        case 0x111d28u: goto label_111d28;
        case 0x111d2cu: goto label_111d2c;
        case 0x111d30u: goto label_111d30;
        case 0x111d34u: goto label_111d34;
        case 0x111d38u: goto label_111d38;
        case 0x111d3cu: goto label_111d3c;
        case 0x111d40u: goto label_111d40;
        case 0x111d44u: goto label_111d44;
        case 0x111d48u: goto label_111d48;
        case 0x111d4cu: goto label_111d4c;
        case 0x111d50u: goto label_111d50;
        case 0x111d54u: goto label_111d54;
        case 0x111d58u: goto label_111d58;
        case 0x111d5cu: goto label_111d5c;
        case 0x111d60u: goto label_111d60;
        case 0x111d64u: goto label_111d64;
        case 0x111d68u: goto label_111d68;
        case 0x111d6cu: goto label_111d6c;
        case 0x111d70u: goto label_111d70;
        case 0x111d74u: goto label_111d74;
        case 0x111d78u: goto label_111d78;
        case 0x111d7cu: goto label_111d7c;
        case 0x111d80u: goto label_111d80;
        case 0x111d84u: goto label_111d84;
        case 0x111d88u: goto label_111d88;
        case 0x111d8cu: goto label_111d8c;
        case 0x111d90u: goto label_111d90;
        case 0x111d94u: goto label_111d94;
        case 0x111d98u: goto label_111d98;
        case 0x111d9cu: goto label_111d9c;
        case 0x111da0u: goto label_111da0;
        case 0x111da4u: goto label_111da4;
        case 0x111da8u: goto label_111da8;
        case 0x111dacu: goto label_111dac;
        case 0x111db0u: goto label_111db0;
        case 0x111db4u: goto label_111db4;
        case 0x111db8u: goto label_111db8;
        case 0x111dbcu: goto label_111dbc;
        case 0x111dc0u: goto label_111dc0;
        case 0x111dc4u: goto label_111dc4;
        case 0x111dc8u: goto label_111dc8;
        case 0x111dccu: goto label_111dcc;
        case 0x111dd0u: goto label_111dd0;
        case 0x111dd4u: goto label_111dd4;
        case 0x111dd8u: goto label_111dd8;
        case 0x111ddcu: goto label_111ddc;
        case 0x111de0u: goto label_111de0;
        case 0x111de4u: goto label_111de4;
        default: break;
    }

    ctx->pc = 0x111d00u;

label_111d00:
    // 0x111d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_111d04:
    // 0x111d04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x111d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_111d08:
    // 0x111d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x111d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_111d0c:
    // 0x111d0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x111d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_111d10:
    // 0x111d10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_111d14:
    // 0x111d14: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x111d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_111d18:
    // 0x111d18: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_111d1c:
    if (ctx->pc == 0x111D1Cu) {
        ctx->pc = 0x111D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D18u;
        // 0x111d1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D20u;
        goto label_111d20;
    }
    ctx->pc = 0x111D18u;
    {
        const bool branch_taken_0x111d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D18u;
        // 0x111d1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d18) {
            ctx->pc = 0x111D34u;
            goto label_111d34;
        }
    }
    ctx->pc = 0x111D20u;
label_111d20:
    // 0x111d20: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x111d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_111d24:
    // 0x111d24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_111d28:
    if (ctx->pc == 0x111D28u) {
        ctx->pc = 0x111D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D24u;
        // 0x111d28: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D2Cu;
        goto label_111d2c;
    }
    ctx->pc = 0x111D24u;
    {
        const bool branch_taken_0x111d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D24u;
        // 0x111d28: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d24) {
            ctx->pc = 0x111D3Cu;
            goto label_111d3c;
        }
    }
    ctx->pc = 0x111D2Cu;
label_111d2c:
    // 0x111d2c: 0x10000003  b           . + 4 + (0x3 << 2)
label_111d30:
    if (ctx->pc == 0x111D30u) {
        ctx->pc = 0x111D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D2Cu;
        // 0x111d30: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D34u;
        goto label_111d34;
    }
    ctx->pc = 0x111D2Cu;
    {
        const bool branch_taken_0x111d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D2Cu;
        // 0x111d30: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d2c) {
            ctx->pc = 0x111D3Cu;
            goto label_111d3c;
        }
    }
    ctx->pc = 0x111D34u;
label_111d34:
    // 0x111d34: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x111d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_111d38:
    // 0x111d38: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x111d38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_111d3c:
    // 0x111d3c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x111d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_111d40:
    // 0x111d40: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_111d44:
    if (ctx->pc == 0x111D44u) {
        ctx->pc = 0x111D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D40u;
        // 0x111d44: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D48u;
        goto label_111d48;
    }
    ctx->pc = 0x111D40u;
    {
        const bool branch_taken_0x111d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D40u;
        // 0x111d44: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d40) {
            ctx->pc = 0x111D58u;
            goto label_111d58;
        }
    }
    ctx->pc = 0x111D48u;
label_111d48:
    // 0x111d48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_111d4c:
    if (ctx->pc == 0x111D4Cu) {
        ctx->pc = 0x111D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D48u;
        // 0x111d4c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D50u;
        goto label_111d50;
    }
    ctx->pc = 0x111D48u;
    {
        const bool branch_taken_0x111d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D48u;
        // 0x111d4c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d48) {
            ctx->pc = 0x111D5Cu;
            goto label_111d5c;
        }
    }
    ctx->pc = 0x111D50u;
label_111d50:
    // 0x111d50: 0x10000002  b           . + 4 + (0x2 << 2)
label_111d54:
    if (ctx->pc == 0x111D54u) {
        ctx->pc = 0x111D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D50u;
        // 0x111d54: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D58u;
        goto label_111d58;
    }
    ctx->pc = 0x111D50u;
    {
        const bool branch_taken_0x111d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D50u;
        // 0x111d54: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d50) {
            ctx->pc = 0x111D5Cu;
            goto label_111d5c;
        }
    }
    ctx->pc = 0x111D58u;
label_111d58:
    // 0x111d58: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x111d58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_111d5c:
    // 0x111d5c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x111d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_111d60:
    // 0x111d60: 0x92040094  lbu         $a0, 0x94($s0)
    ctx->pc = 0x111d60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
label_111d64:
    // 0x111d64: 0x904383bb  lbu         $v1, -0x7C45($v0)
    ctx->pc = 0x111d64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294935483)));
label_111d68:
    // 0x111d68: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_111d6c:
    if (ctx->pc == 0x111D6Cu) {
        ctx->pc = 0x111D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D68u;
        // 0x111d6c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D70u;
        goto label_111d70;
    }
    ctx->pc = 0x111D68u;
    {
        const bool branch_taken_0x111d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x111D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D68u;
        // 0x111d6c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d68) {
            ctx->pc = 0x111D8Cu;
            goto label_111d8c;
        }
    }
    ctx->pc = 0x111D70u;
label_111d70:
    // 0x111d70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x111d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_111d74:
    // 0x111d74: 0x8c66bce4  lw          $a2, -0x431C($v1)
    ctx->pc = 0x111d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950116)));
label_111d78:
    // 0x111d78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x111d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_111d7c:
    // 0x111d7c: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x111d7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_111d80:
    // 0x111d80: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x111d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_111d84:
    // 0x111d84: 0x60f809  jalr        $v1
label_111d88:
    if (ctx->pc == 0x111D88u) {
        ctx->pc = 0x111D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D84u;
        // 0x111d88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D8Cu;
        goto label_111d8c;
    }
    ctx->pc = 0x111D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111D8Cu);
        ctx->pc = 0x111D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D84u;
        // 0x111d88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111D84u, 0x111D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111D8Cu;
label_111d8c:
    // 0x111d8c: 0xc046854  jal         func_11A150
label_111d90:
    if (ctx->pc == 0x111D90u) {
        ctx->pc = 0x111D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D8Cu;
        // 0x111d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111D94u;
        goto label_111d94;
    }
    ctx->pc = 0x111D8Cu;
    SET_GPR_U32(ctx, 31, 0x111D94u);
    ctx->pc = 0x111D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111D8Cu;
    // 0x111d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A150u, 0x111D8Cu, 0x111D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D94u;
label_111d94:
    // 0x111d94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x111d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_111d98:
    // 0x111d98: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_111d9c:
    if (ctx->pc == 0x111D9Cu) {
        ctx->pc = 0x111D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D98u;
        // 0x111d9c: 0x8c45aa94  lw          $a1, -0x556C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111DA0u;
        goto label_111da0;
    }
    ctx->pc = 0x111D98u;
    {
        const bool branch_taken_0x111d98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D98u;
        // 0x111d9c: 0x8c45aa94  lw          $a1, -0x556C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d98) {
            ctx->pc = 0x111DBCu;
            goto label_111dbc;
        }
    }
    ctx->pc = 0x111DA0u;
label_111da0:
    // 0x111da0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x111da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_111da4:
    // 0x111da4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x111da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_111da8:
    // 0x111da8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x111da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_111dac:
    // 0x111dac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x111dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_111db0:
    // 0x111db0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x111db0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_111db4:
    // 0x111db4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x111db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_111db8:
    // 0x111db8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x111db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_111dbc:
    // 0x111dbc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x111dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_111dc0:
    // 0x111dc0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x111dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_111dc4:
    // 0x111dc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x111dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_111dc8:
    // 0x111dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111dcc:
    // 0x111dcc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x111dccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_111dd0:
    // 0x111dd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x111dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_111dd4:
    // 0x111dd4: 0x3e00008  jr          $ra
label_111dd8:
    if (ctx->pc == 0x111DD8u) {
        ctx->pc = 0x111DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DD4u;
        // 0x111dd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111DDCu;
        goto label_111ddc;
    }
    ctx->pc = 0x111DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DD4u;
        // 0x111dd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111DDCu;
label_111ddc:
    // 0x111ddc: 0x0  nop
    ctx->pc = 0x111ddcu;
    // NOP
label_111de0:
    // 0x111de0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x111de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_111de4:
    // 0x111de4: 0x0  nop
    ctx->pc = 0x111de4u;
    // NOP
    ctx->pc = 0x111de8u;
}
