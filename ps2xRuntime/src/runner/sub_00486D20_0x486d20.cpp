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

// Function: sub_00486D20
// Address: 0x486d20 - 0x486e38
void sub_00486D20_0x486d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486D20_0x486d20");
#endif

    switch (ctx->pc) {
        case 0x486d48u: goto label_486d48;
        case 0x486d5cu: goto label_486d5c;
        case 0x486d7cu: goto label_486d7c;
        case 0x486d90u: goto label_486d90;
        case 0x486da0u: goto label_486da0;
        case 0x486db0u: goto label_486db0;
        case 0x486dbcu: goto label_486dbc;
        case 0x486dccu: goto label_486dcc;
        case 0x486dd4u: goto label_486dd4;
        case 0x486de4u: goto label_486de4;
        case 0x486decu: goto label_486dec;
        case 0x486e00u: goto label_486e00;
        case 0x486e10u: goto label_486e10;
        case 0x486e18u: goto label_486e18;
        default: break;
    }

    ctx->pc = 0x486d20u;

    // 0x486d20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x486d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x486d24: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x486d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x486d28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x486d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486d2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x486d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x486d30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x486d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486d34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x486d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x486d38: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x486d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x486d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x486d40: 0xc121622  jal         func_485888
    ctx->pc = 0x486D40u;
    SET_GPR_U32(ctx, 31, 0x486D48u);
    ctx->pc = 0x486D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486D40u;
    // 0x486d44: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485888u, 0x486D40u, 0x486D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486D48u;
label_486d48:
    // 0x486d48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x486d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486d4c: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
    ctx->pc = 0x486D4Cu;
    {
        const bool branch_taken_0x486d4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x486D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486D4Cu;
        // 0x486d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486d4c) {
            ctx->pc = 0x486E1Cu;
            goto label_486e1c;
        }
    }
    ctx->pc = 0x486D54u;
    // 0x486d54: 0xc121666  jal         func_485998
    ctx->pc = 0x486D54u;
    SET_GPR_U32(ctx, 31, 0x486D5Cu);
    ctx->pc = 0x486D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486D54u;
    // 0x486d58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485998u, 0x486D54u, 0x486D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486D5Cu;
label_486d5c:
    // 0x486d5c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x486D5Cu;
    {
        const bool branch_taken_0x486d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x486D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486D5Cu;
        // 0x486d60: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486d5c) {
            ctx->pc = 0x486E10u;
            goto label_486e10;
        }
    }
    ctx->pc = 0x486D64u;
    // 0x486d64: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x486d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x486d68: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x486D68u;
    {
        const bool branch_taken_0x486d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x486D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486D68u;
        // 0x486d6c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486d68) {
            ctx->pc = 0x486DF4u;
            goto label_486df4;
        }
    }
    ctx->pc = 0x486D70u;
    // 0x486d70: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x486d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x486d74: 0xc121622  jal         func_485888
    ctx->pc = 0x486D74u;
    SET_GPR_U32(ctx, 31, 0x486D7Cu);
    ctx->pc = 0x486D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486D74u;
    // 0x486d78: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485888u, 0x486D74u, 0x486D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486D7Cu;
label_486d7c:
    // 0x486d7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x486d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486d80: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x486D80u;
    {
        const bool branch_taken_0x486d80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x486d80) {
            ctx->pc = 0x486E08u;
            goto label_486e08;
        }
    }
    ctx->pc = 0x486D88u;
    // 0x486d88: 0xc121666  jal         func_485998
    ctx->pc = 0x486D88u;
    SET_GPR_U32(ctx, 31, 0x486D90u);
    ctx->pc = 0x486D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486D88u;
    // 0x486d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485998u, 0x486D88u, 0x486D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486D90u;
label_486d90:
    // 0x486d90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x486D90u;
    {
        const bool branch_taken_0x486d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x486D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486D90u;
        // 0x486d94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486d90) {
            ctx->pc = 0x486DA8u;
            goto label_486da8;
        }
    }
    ctx->pc = 0x486D98u;
    // 0x486d98: 0xc12164a  jal         func_485928
    ctx->pc = 0x486D98u;
    SET_GPR_U32(ctx, 31, 0x486DA0u);
    ctx->pc = 0x486D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486D98u;
    // 0x486d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x486D98u, 0x486DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486DA0u;
label_486da0:
    // 0x486da0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x486DA0u;
    {
        const bool branch_taken_0x486da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486da0) {
            ctx->pc = 0x486E08u;
            goto label_486e08;
        }
    }
    ctx->pc = 0x486DA8u;
label_486da8:
    // 0x486da8: 0xc1216be  jal         func_485AF8
    ctx->pc = 0x486DA8u;
    SET_GPR_U32(ctx, 31, 0x486DB0u);
    ctx->pc = 0x486DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486DA8u;
    // 0x486dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485AF8u, 0x486DA8u, 0x486DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486DB0u;
label_486db0:
    // 0x486db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x486db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486db4: 0xc121acc  jal         func_486B30
    ctx->pc = 0x486DB4u;
    SET_GPR_U32(ctx, 31, 0x486DBCu);
    ctx->pc = 0x486DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486DB4u;
    // 0x486db8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486B30u, 0x486DB4u, 0x486DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486DBCu;
label_486dbc:
    // 0x486dbc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x486DBCu;
    {
        const bool branch_taken_0x486dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x486dbc) {
            ctx->pc = 0x486DDCu;
            goto label_486ddc;
        }
    }
    ctx->pc = 0x486DC4u;
    // 0x486dc4: 0xc1216aa  jal         func_485AA8
    ctx->pc = 0x486DC4u;
    SET_GPR_U32(ctx, 31, 0x486DCCu);
    ctx->pc = 0x486DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486DC4u;
    // 0x486dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485AA8u, 0x486DC4u, 0x486DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486DCCu;
label_486dcc:
    // 0x486dcc: 0xc12164a  jal         func_485928
    ctx->pc = 0x486DCCu;
    SET_GPR_U32(ctx, 31, 0x486DD4u);
    ctx->pc = 0x486DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486DCCu;
    // 0x486dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x486DCCu, 0x486DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486DD4u;
label_486dd4:
    // 0x486dd4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x486DD4u;
    {
        const bool branch_taken_0x486dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486dd4) {
            ctx->pc = 0x486E08u;
            goto label_486e08;
        }
    }
    ctx->pc = 0x486DDCu;
label_486ddc:
    // 0x486ddc: 0xc1216aa  jal         func_485AA8
    ctx->pc = 0x486DDCu;
    SET_GPR_U32(ctx, 31, 0x486DE4u);
    ctx->pc = 0x486DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486DDCu;
    // 0x486de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485AA8u, 0x486DDCu, 0x486DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486DE4u;
label_486de4:
    // 0x486de4: 0xc12164a  jal         func_485928
    ctx->pc = 0x486DE4u;
    SET_GPR_U32(ctx, 31, 0x486DECu);
    ctx->pc = 0x486DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486DE4u;
    // 0x486de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x486DE4u, 0x486DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486DECu;
label_486dec:
    // 0x486dec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x486DECu;
    {
        const bool branch_taken_0x486dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x486DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486DECu;
        // 0x486df0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486dec) {
            ctx->pc = 0x486E1Cu;
            goto label_486e1c;
        }
    }
    ctx->pc = 0x486DF4u;
label_486df4:
    // 0x486df4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x486df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486df8: 0xc121acc  jal         func_486B30
    ctx->pc = 0x486DF8u;
    SET_GPR_U32(ctx, 31, 0x486E00u);
    ctx->pc = 0x486DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486DF8u;
    // 0x486dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486B30u, 0x486DF8u, 0x486E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486E00u;
label_486e00:
    // 0x486e00: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x486E00u;
    {
        const bool branch_taken_0x486e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x486E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486E00u;
        // 0x486e04: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486e00) {
            ctx->pc = 0x486E1Cu;
            goto label_486e1c;
        }
    }
    ctx->pc = 0x486E08u;
label_486e08:
    // 0x486e08: 0xc1216aa  jal         func_485AA8
    ctx->pc = 0x486E08u;
    SET_GPR_U32(ctx, 31, 0x486E10u);
    ctx->pc = 0x486E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486E08u;
    // 0x486e0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485AA8u, 0x486E08u, 0x486E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486E10u;
label_486e10:
    // 0x486e10: 0xc12164a  jal         func_485928
    ctx->pc = 0x486E10u;
    SET_GPR_U32(ctx, 31, 0x486E18u);
    ctx->pc = 0x486E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486E10u;
    // 0x486e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x486E10u, 0x486E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486E18u;
label_486e18:
    // 0x486e18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x486e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486e1c:
    // 0x486e1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x486e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x486e20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x486e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x486e24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x486e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x486e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x486e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x486e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x486E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486E2Cu;
        // 0x486e30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x486E34u;
    // 0x486e34: 0x0  nop
    ctx->pc = 0x486e34u;
    // NOP
    ctx->pc = 0x486e38u;
}
