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

// Function: sub_00265CD8
// Address: 0x265cd8 - 0x265dd0
void sub_00265CD8_0x265cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265CD8_0x265cd8");
#endif

    switch (ctx->pc) {
        case 0x265d04u: goto label_265d04;
        case 0x265d3cu: goto label_265d3c;
        case 0x265d50u: goto label_265d50;
        case 0x265da0u: goto label_265da0;
        case 0x265db8u: goto label_265db8;
        default: break;
    }

    ctx->pc = 0x265cd8u;

    // 0x265cd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x265cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x265cdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x265cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x265ce0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x265ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x265ce4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x265ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ce8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x265ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x265cec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x265cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265cf0: 0x12400031  beqz        $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x265CF0u;
    {
        const bool branch_taken_0x265cf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x265CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265CF0u;
        // 0x265cf4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265cf0) {
            ctx->pc = 0x265DB8u;
            goto label_265db8;
        }
    }
    ctx->pc = 0x265CF8u;
    // 0x265cf8: 0x8e3000d4  lw          $s0, 0xD4($s1)
    ctx->pc = 0x265cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x265cfc: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x265CFCu;
    SET_GPR_U32(ctx, 31, 0x265D04u);
    ctx->pc = 0x265D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265CFCu;
    // 0x265d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x265CFCu, 0x265D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265D04u;
label_265d04:
    // 0x265d04: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x265d04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x265d08: 0x5060002c  beql        $v1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x265D08u;
    {
        const bool branch_taken_0x265d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265d08) {
            ctx->pc = 0x265D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265D08u;
            // 0x265d0c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265DBCu;
            goto label_265dbc;
        }
    }
    ctx->pc = 0x265D10u;
    // 0x265d10: 0x86030144  lh          $v1, 0x144($s0)
    ctx->pc = 0x265d10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x265d14: 0x86020118  lh          $v0, 0x118($s0)
    ctx->pc = 0x265d14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x265d18: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x265d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x265d1c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x265D1Cu;
    {
        const bool branch_taken_0x265d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D1Cu;
        // 0x265d20: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d1c) {
            ctx->pc = 0x265DB8u;
            goto label_265db8;
        }
    }
    ctx->pc = 0x265D24u;
    // 0x265d24: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x265d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x265d28: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x265d28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
    // 0x265d2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265D2Cu;
    {
        const bool branch_taken_0x265d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D2Cu;
        // 0x265d30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d2c) {
            ctx->pc = 0x265D40u;
            goto label_265d40;
        }
    }
    ctx->pc = 0x265D34u;
    // 0x265d34: 0xc107444  jal         func_41D110
    ctx->pc = 0x265D34u;
    SET_GPR_U32(ctx, 31, 0x265D3Cu);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x265D34u, 0x265D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265D3Cu;
label_265d3c:
    // 0x265d3c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x265d3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_265d40:
    // 0x265d40: 0x5060001e  beql        $v1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x265D40u;
    {
        const bool branch_taken_0x265d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265d40) {
            ctx->pc = 0x265D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265D40u;
            // 0x265d44: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265DBCu;
            goto label_265dbc;
        }
    }
    ctx->pc = 0x265D48u;
    // 0x265d48: 0xc073a8e  jal         func_1CEA38
    ctx->pc = 0x265D48u;
    SET_GPR_U32(ctx, 31, 0x265D50u);
    ctx->pc = 0x265D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265D48u;
    // 0x265d4c: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x265D48u, 0x265D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265D50u;
label_265d50:
    // 0x265d50: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x265D50u;
    {
        const bool branch_taken_0x265d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D50u;
        // 0x265d54: 0x8e07489c  lw          $a3, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d50) {
            ctx->pc = 0x265DB8u;
            goto label_265db8;
        }
    }
    ctx->pc = 0x265D58u;
    // 0x265d58: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x265d58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
    // 0x265d5c: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x265d5cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x265d60: 0xa81024  and         $v0, $a1, $t0
    ctx->pc = 0x265d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x265d64: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x265D64u;
    {
        const bool branch_taken_0x265d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265d64) {
            ctx->pc = 0x265D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265D64u;
            // 0x265d68: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265DBCu;
            goto label_265dbc;
        }
    }
    ctx->pc = 0x265D6Cu;
    // 0x265d6c: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x265d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x265d70: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x265d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x265d74: 0x2882000b  slti        $v0, $a0, 0xB
    ctx->pc = 0x265d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x265d78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x265d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x265d7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x265D7Cu;
    {
        const bool branch_taken_0x265d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D7Cu;
        // 0x265d80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d7c) {
            ctx->pc = 0x265D88u;
            goto label_265d88;
        }
    }
    ctx->pc = 0x265D84u;
    // 0x265d84: 0x28860019  slti        $a2, $a0, 0x19
    ctx->pc = 0x265d84u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
label_265d88:
    // 0x265d88: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x265D88u;
    {
        const bool branch_taken_0x265d88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x265D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D88u;
        // 0x265d8c: 0xa81025  or          $v0, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d88) {
            ctx->pc = 0x265DB8u;
            goto label_265db8;
        }
    }
    ctx->pc = 0x265D90u;
    // 0x265d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x265d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265d94: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x265d94u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x265d98: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x265D98u;
    SET_GPR_U32(ctx, 31, 0x265DA0u);
    ctx->pc = 0x265D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265D98u;
    // 0x265d9c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x265D98u, 0x265DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265DA0u;
label_265da0:
    // 0x265da0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x265DA0u;
    {
        const bool branch_taken_0x265da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265DA0u;
        // 0x265da4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265da0) {
            ctx->pc = 0x265DBCu;
            goto label_265dbc;
        }
    }
    ctx->pc = 0x265DA8u;
    // 0x265da8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x265da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x265dac: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x265dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x265db0: 0xc07387a  jal         func_1CE1E8
    ctx->pc = 0x265DB0u;
    SET_GPR_U32(ctx, 31, 0x265DB8u);
    ctx->pc = 0x265DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265DB0u;
    // 0x265db4: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x265DB0u, 0x265DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265DB8u;
label_265db8:
    // 0x265db8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x265db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_265dbc:
    // 0x265dbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x265dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265dc0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x265dc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x265DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265DC8u;
        // 0x265dcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265DD0u;
}
