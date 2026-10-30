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

// Function: sub_00150CF0
// Address: 0x150cf0 - 0x150ed0
void sub_00150CF0_0x150cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150CF0_0x150cf0");
#endif

    switch (ctx->pc) {
        case 0x150d30u: goto label_150d30;
        case 0x150d48u: goto label_150d48;
        case 0x150d60u: goto label_150d60;
        case 0x150d68u: goto label_150d68;
        case 0x150da4u: goto label_150da4;
        case 0x150db4u: goto label_150db4;
        case 0x150dc4u: goto label_150dc4;
        case 0x150ddcu: goto label_150ddc;
        case 0x150de4u: goto label_150de4;
        case 0x150decu: goto label_150dec;
        case 0x150df4u: goto label_150df4;
        case 0x150e30u: goto label_150e30;
        case 0x150e3cu: goto label_150e3c;
        default: break;
    }

    ctx->pc = 0x150cf0u;

    // 0x150cf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x150cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x150cf4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x150cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x150cf8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x150cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x150cfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x150cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150d00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x150d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x150d04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x150d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d08: 0x9044c1e8  lbu         $a0, -0x3E18($v0)
    ctx->pc = 0x150d08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x50C1E8u));
    // 0x150d0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x150d0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d10: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x150d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x150d14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x150d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x150d18: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x150d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x150d1c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x150d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x150d20: 0x14830036  bne         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x150D20u;
    {
        const bool branch_taken_0x150d20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x150D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D20u;
        // 0x150d24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d20) {
            ctx->pc = 0x150DFCu;
            goto label_150dfc;
        }
    }
    ctx->pc = 0x150D28u;
    // 0x150d28: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x150D28u;
    SET_GPR_U32(ctx, 31, 0x150D30u);
    ctx->pc = 0x150D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150D28u;
    // 0x150d2c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x150D28u, 0x150D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150D30u;
label_150d30:
    // 0x150d30: 0x8e02c574  lw          $v0, -0x3A8C($s0)
    ctx->pc = 0x150d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952308)));
    // 0x150d34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x150D34u;
    {
        const bool branch_taken_0x150d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D34u;
        // 0x150d38: 0x9242c1e8  lbu         $v0, -0x3E18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294951400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d34) {
            ctx->pc = 0x150D4Cu;
            goto label_150d4c;
        }
    }
    ctx->pc = 0x150D3Cu;
    // 0x150d3c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x150d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x150d40: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x150D40u;
    SET_GPR_U32(ctx, 31, 0x150D48u);
    ctx->pc = 0x150D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150D40u;
    // 0x150d44: 0x2484c4d8  addiu       $a0, $a0, -0x3B28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x150D40u, 0x150D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150D48u;
label_150d48:
    // 0x150d48: 0x9242c1e8  lbu         $v0, -0x3E18($s2)
    ctx->pc = 0x150d48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294951400)));
label_150d4c:
    // 0x150d4c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x150d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x150d50: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x150d50u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x150d54: 0xae02c574  sw          $v0, -0x3A8C($s0)
    ctx->pc = 0x150d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952308), GPR_U32(ctx, 2));
    // 0x150d58: 0xc054318  jal         func_150C60
    ctx->pc = 0x150D58u;
    SET_GPR_U32(ctx, 31, 0x150D60u);
    ctx->pc = 0x150D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150D58u;
    // 0x150d5c: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150C60u, 0x150D58u, 0x150D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150D60u;
label_150d60:
    // 0x150d60: 0xc053eba  jal         func_14FAE8
    ctx->pc = 0x150D60u;
    SET_GPR_U32(ctx, 31, 0x150D68u);
    ctx->pc = 0x150D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150D60u;
    // 0x150d64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAE8u, 0x150D60u, 0x150D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150D68u;
label_150d68:
    // 0x150d68: 0x0  nop
    ctx->pc = 0x150d68u;
    // NOP
    // 0x150d6c: 0x0  nop
    ctx->pc = 0x150d6cu;
    // NOP
    // 0x150d70: 0x440fffb  bltz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x150D70u;
    {
        const bool branch_taken_0x150d70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x150D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D70u;
        // 0x150d74: 0x9262c1ea  lbu         $v0, -0x3E16($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294951402)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d70) {
            ctx->pc = 0x150D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150d60;
        }
    }
    ctx->pc = 0x150D78u;
    // 0x150d78: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x150D78u;
    {
        const bool branch_taken_0x150d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D78u;
        // 0x150d7c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d78) {
            ctx->pc = 0x150DC4u;
            goto label_150dc4;
        }
    }
    ctx->pc = 0x150D80u;
    // 0x150d80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x150d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150d84: 0x8043c56c  lb          $v1, -0x3A94($v0)
    ctx->pc = 0x150d84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294952300)));
    // 0x150d88: 0x5464000e  bnel        $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x150D88u;
    {
        const bool branch_taken_0x150d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x150d88) {
            ctx->pc = 0x150D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150D88u;
            // 0x150d8c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150DC4u;
            goto label_150dc4;
        }
    }
    ctx->pc = 0x150D90u;
    // 0x150d90: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x150d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x150d94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x150d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150d98: 0x24504390  addiu       $s0, $v0, 0x4390
    ctx->pc = 0x150d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17296));
    // 0x150d9c: 0xc110644  jal         func_441910
    ctx->pc = 0x150D9Cu;
    SET_GPR_U32(ctx, 31, 0x150DA4u);
    ctx->pc = 0x150DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150D9Cu;
    // 0x150da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441910u, 0x150D9Cu, 0x150DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150DA4u;
label_150da4:
    // 0x150da4: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x150DA4u;
    {
        const bool branch_taken_0x150da4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x150DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DA4u;
        // 0x150da8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150da4) {
            ctx->pc = 0x150DC4u;
            goto label_150dc4;
        }
    }
    ctx->pc = 0x150DACu;
    // 0x150dac: 0xc1106e8  jal         func_441BA0
    ctx->pc = 0x150DACu;
    SET_GPR_U32(ctx, 31, 0x150DB4u);
    ctx->pc = 0x150DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150DACu;
    // 0x150db0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441BA0u, 0x150DACu, 0x150DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150DB4u;
label_150db4:
    // 0x150db4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x150db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x150db8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x150db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150dbc: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x150DBCu;
    SET_GPR_U32(ctx, 31, 0x150DC4u);
    ctx->pc = 0x150DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150DBCu;
    // 0x150dc0: 0x2484c520  addiu       $a0, $a0, -0x3AE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x150DBCu, 0x150DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150DC4u;
label_150dc4:
    // 0x150dc4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x150DC4u;
    {
        const bool branch_taken_0x150dc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x150DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DC4u;
        // 0x150dc8: 0x9262c1ea  lbu         $v0, -0x3E16($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294951402)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150dc4) {
            ctx->pc = 0x150DECu;
            goto label_150dec;
        }
    }
    ctx->pc = 0x150DCCu;
    // 0x150dcc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x150DCCu;
    {
        const bool branch_taken_0x150dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DCCu;
        // 0x150dd0: 0x3c040055  lui         $a0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150dcc) {
            ctx->pc = 0x150DECu;
            goto label_150dec;
        }
    }
    ctx->pc = 0x150DD4u;
    // 0x150dd4: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x150DD4u;
    SET_GPR_U32(ctx, 31, 0x150DDCu);
    ctx->pc = 0x150DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150DD4u;
    // 0x150dd8: 0x2484c560  addiu       $a0, $a0, -0x3AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x150DD4u, 0x150DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150DDCu;
label_150ddc:
    // 0x150ddc: 0xc05430a  jal         func_150C28
    ctx->pc = 0x150DDCu;
    SET_GPR_U32(ctx, 31, 0x150DE4u);
    ctx->pc = 0x150C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150C28u, 0x150DDCu, 0x150DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150DE4u;
label_150de4:
    // 0x150de4: 0xc053eba  jal         func_14FAE8
    ctx->pc = 0x150DE4u;
    SET_GPR_U32(ctx, 31, 0x150DECu);
    ctx->pc = 0x150DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150DE4u;
    // 0x150de8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAE8u, 0x150DE4u, 0x150DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150DECu;
label_150dec:
    // 0x150dec: 0xc05471c  jal         func_151C70
    ctx->pc = 0x150DECu;
    SET_GPR_U32(ctx, 31, 0x150DF4u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x150DECu, 0x150DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150DF4u;
label_150df4:
    // 0x150df4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x150DF4u;
    {
        const bool branch_taken_0x150df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DF4u;
        // 0x150df8: 0x8ea3c570  lw          $v1, -0x3A90($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150df4) {
            ctx->pc = 0x150E10u;
            goto label_150e10;
        }
    }
    ctx->pc = 0x150DFCu;
label_150dfc:
    // 0x150dfc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x150dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x150e00: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x150e00u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x150e04: 0xac40c574  sw          $zero, -0x3A8C($v0)
    ctx->pc = 0x150e04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C574u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C574u, _value); } while (0);
    // 0x150e08: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x150e08u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x150e0c: 0x8ea3c570  lw          $v1, -0x3A90($s5)
    ctx->pc = 0x150e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C570u));
label_150e10:
    // 0x150e10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150e14: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x150E14u;
    {
        const bool branch_taken_0x150e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x150E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E14u;
        // 0x150e18: 0x9282c1e9  lbu         $v0, -0x3E17($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294951401)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e14) {
            ctx->pc = 0x150E40u;
            goto label_150e40;
        }
    }
    ctx->pc = 0x150E1Cu;
    // 0x150e1c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x150E1Cu;
    {
        const bool branch_taken_0x150e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150e1c) {
            ctx->pc = 0x150E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150E1Cu;
            // 0x150e20: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150E44u;
            goto label_150e44;
        }
    }
    ctx->pc = 0x150E24u;
    // 0x150e24: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x150e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x150e28: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x150E28u;
    SET_GPR_U32(ctx, 31, 0x150E30u);
    ctx->pc = 0x150E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150E28u;
    // 0x150e2c: 0x2484c598  addiu       $a0, $a0, -0x3A68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x150E28u, 0x150E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E30u;
label_150e30:
    // 0x150e30: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x150e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x150e34: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x150E34u;
    SET_GPR_U32(ctx, 31, 0x150E3Cu);
    ctx->pc = 0x150E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150E34u;
    // 0x150e38: 0x2484c5c8  addiu       $a0, $a0, -0x3A38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x150E34u, 0x150E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E3Cu;
label_150e3c:
    // 0x150e3c: 0x9282c1e9  lbu         $v0, -0x3E17($s4)
    ctx->pc = 0x150e3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294951401)));
label_150e40:
    // 0x150e40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x150e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150e44:
    // 0x150e44: 0x9243c1e8  lbu         $v1, -0x3E18($s2)
    ctx->pc = 0x150e44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294951400)));
    // 0x150e48: 0x1464000e  bne         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x150E48u;
    {
        const bool branch_taken_0x150e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x150E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E48u;
        // 0x150e4c: 0xaea2c570  sw          $v0, -0x3A90($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294952304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e48) {
            ctx->pc = 0x150E84u;
            goto label_150e84;
        }
    }
    ctx->pc = 0x150E50u;
    // 0x150e50: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x150e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x150e54: 0x9043c1ea  lbu         $v1, -0x3E16($v0)
    ctx->pc = 0x150e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x50C1EAu));
    // 0x150e58: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x150E58u;
    {
        const bool branch_taken_0x150e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x150E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E58u;
        // 0x150e5c: 0x9243c1e8  lbu         $v1, -0x3E18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294951400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e58) {
            ctx->pc = 0x150E70u;
            goto label_150e70;
        }
    }
    ctx->pc = 0x150E60u;
    // 0x150e60: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x150E60u;
    {
        const bool branch_taken_0x150e60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x150E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E60u;
        // 0x150e64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e60) {
            ctx->pc = 0x150E74u;
            goto label_150e74;
        }
    }
    ctx->pc = 0x150E68u;
    // 0x150e68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x150E68u;
    {
        const bool branch_taken_0x150e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E68u;
        // 0x150e6c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e68) {
            ctx->pc = 0x150EA0u;
            goto label_150ea0;
        }
    }
    ctx->pc = 0x150E70u;
label_150e70:
    // 0x150e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150e74:
    // 0x150e74: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x150E74u;
    {
        const bool branch_taken_0x150e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x150E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E74u;
        // 0x150e78: 0x9283c1e9  lbu         $v1, -0x3E17($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294951401)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e74) {
            ctx->pc = 0x150E8Cu;
            goto label_150e8c;
        }
    }
    ctx->pc = 0x150E7Cu;
    // 0x150e7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x150E7Cu;
    {
        const bool branch_taken_0x150e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E7Cu;
        // 0x150e80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e7c) {
            ctx->pc = 0x150EA0u;
            goto label_150ea0;
        }
    }
    ctx->pc = 0x150E84u;
label_150e84:
    // 0x150e84: 0x9283c1e9  lbu         $v1, -0x3E17($s4)
    ctx->pc = 0x150e84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294951401)));
    // 0x150e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150e8c:
    // 0x150e8c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150E8Cu;
    {
        const bool branch_taken_0x150e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E8Cu;
        // 0x150e90: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e8c) {
            ctx->pc = 0x150E9Cu;
            goto label_150e9c;
        }
    }
    ctx->pc = 0x150E94u;
    // 0x150e94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x150E94u;
    {
        const bool branch_taken_0x150e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E94u;
        // 0x150e98: 0x8c62bd24  lw          $v0, -0x42DC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e94) {
            ctx->pc = 0x150EA0u;
            goto label_150ea0;
        }
    }
    ctx->pc = 0x150E9Cu;
label_150e9c:
    // 0x150e9c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x150e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_150ea0:
    // 0x150ea0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x150ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x150ea4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x150ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150ea8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x150ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150eac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x150eacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150eb0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x150eb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150eb4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x150eb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x150EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EBCu;
        // 0x150ec0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150EC4u;
    // 0x150ec4: 0x0  nop
    ctx->pc = 0x150ec4u;
    // NOP
    // 0x150ec8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x150ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x150ecc: 0x0  nop
    ctx->pc = 0x150eccu;
    // NOP
    ctx->pc = 0x150ed0u;
}
