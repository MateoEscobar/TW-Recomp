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

// Function: sub_00313D18
// Address: 0x313d18 - 0x313e0c
void sub_00313D18_0x313d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313D18_0x313d18");
#endif

    switch (ctx->pc) {
        case 0x313d44u: goto label_313d44;
        case 0x313d84u: goto label_313d84;
        case 0x313d9cu: goto label_313d9c;
        case 0x313db0u: goto label_313db0;
        case 0x313decu: goto label_313dec;
        case 0x313e04u: goto label_313e04;
        default: break;
    }

    ctx->pc = 0x313d18u;

    // 0x313d18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x313d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x313d1c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x313d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x313d20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x313d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x313d24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x313d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313d28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x313d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x313d2c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x313d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x313d30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x313d30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x313d38: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x313d38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313d3c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x313D3Cu;
    SET_GPR_U32(ctx, 31, 0x313D44u);
    ctx->pc = 0x313D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313D3Cu;
    // 0x313d40: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x313D3Cu, 0x313D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313D44u;
label_313d44:
    // 0x313d44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x313d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313d48: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x313D48u;
    {
        const bool branch_taken_0x313d48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D48u;
        // 0x313d4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d48) {
            ctx->pc = 0x313E10u;
            return;
        }
    }
    ctx->pc = 0x313D50u;
    // 0x313d50: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x313d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x313d54: 0x2444fff5  addiu       $a0, $v0, -0xB
    ctx->pc = 0x313d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967285));
    // 0x313d58: 0x2c83000c  sltiu       $v1, $a0, 0xC
    ctx->pc = 0x313d58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x313d5c: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x313D5Cu;
    {
        const bool branch_taken_0x313d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D5Cu;
        // 0x313d60: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d5c) {
            ctx->pc = 0x313E0Cu;
            return;
        }
    }
    ctx->pc = 0x313D64u;
    // 0x313d64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x313d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x313d68: 0x2442f090  addiu       $v0, $v0, -0xF70
    ctx->pc = 0x313d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963344));
    // 0x313d6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x313d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x313d70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x313d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x313d74: 0x800008  jr          $a0
    ctx->pc = 0x313D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x313D7Cu: goto label_313d7c;
            case 0x313DB8u: goto label_313db8;
            case 0x313DCCu: goto label_313dcc;
            case 0x313DDCu: goto label_313ddc;
            case 0x313DF4u: goto label_313df4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313D74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x313D7Cu;
label_313d7c:
    // 0x313d7c: 0xc087502  jal         func_21D408
    ctx->pc = 0x313D7Cu;
    SET_GPR_U32(ctx, 31, 0x313D84u);
    ctx->pc = 0x313D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313D7Cu;
    // 0x313d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x313D7Cu, 0x313D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313D84u;
label_313d84:
    // 0x313d84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x313d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x313d88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x313d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x313d8c: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x313D8Cu;
    {
        const bool branch_taken_0x313d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x313D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D8Cu;
        // 0x313d90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d8c) {
            ctx->pc = 0x313E10u;
            return;
        }
    }
    ctx->pc = 0x313D94u;
    // 0x313d94: 0xc087502  jal         func_21D408
    ctx->pc = 0x313D94u;
    SET_GPR_U32(ctx, 31, 0x313D9Cu);
    ctx->pc = 0x313D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313D94u;
    // 0x313d98: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x313D94u, 0x313D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313D9Cu;
label_313d9c:
    // 0x313d9c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x313d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x313da0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x313da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313da4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x313da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x313da8: 0xc05a468  jal         func_1691A0
    ctx->pc = 0x313DA8u;
    SET_GPR_U32(ctx, 31, 0x313DB0u);
    ctx->pc = 0x313DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313DA8u;
    // 0x313dac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1691A0u, 0x313DA8u, 0x313DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313DB0u;
label_313db0:
    // 0x313db0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x313DB0u;
    {
        const bool branch_taken_0x313db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DB0u;
        // 0x313db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313db0) {
            ctx->pc = 0x313E10u;
            return;
        }
    }
    ctx->pc = 0x313DB8u;
label_313db8:
    // 0x313db8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x313db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x313dbc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x313DBCu;
    {
        const bool branch_taken_0x313dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DBCu;
        // 0x313dc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313dbc) {
            ctx->pc = 0x313E10u;
            return;
        }
    }
    ctx->pc = 0x313DC4u;
    // 0x313dc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x313DC4u;
    {
        const bool branch_taken_0x313dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DC4u;
        // 0x313dc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313dc4) {
            ctx->pc = 0x313DE0u;
            goto label_313de0;
        }
    }
    ctx->pc = 0x313DCCu;
label_313dcc:
    // 0x313dcc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x313dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x313dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x313dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313dd4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x313DD4u;
    {
        const bool branch_taken_0x313dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x313DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DD4u;
        // 0x313dd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313dd4) {
            ctx->pc = 0x313E10u;
            return;
        }
    }
    ctx->pc = 0x313DDCu;
label_313ddc:
    // 0x313ddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x313ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313de0:
    // 0x313de0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x313de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313de4: 0xc0c4dc6  jal         func_313718
    ctx->pc = 0x313DE4u;
    SET_GPR_U32(ctx, 31, 0x313DECu);
    ctx->pc = 0x313DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313DE4u;
    // 0x313de8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313718u, 0x313DE4u, 0x313DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313DECu;
label_313dec:
    // 0x313dec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x313DECu;
    {
        const bool branch_taken_0x313dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DECu;
        // 0x313df0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313dec) {
            ctx->pc = 0x313E10u;
            return;
        }
    }
    ctx->pc = 0x313DF4u;
label_313df4:
    // 0x313df4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x313df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313df8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x313df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313dfc: 0xc0c4e80  jal         func_313A00
    ctx->pc = 0x313DFCu;
    SET_GPR_U32(ctx, 31, 0x313E04u);
    ctx->pc = 0x313E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313DFCu;
    // 0x313e00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313A00u, 0x313DFCu, 0x313E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313E04u;
label_313e04:
    // 0x313e04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x313E04u;
    {
        const bool branch_taken_0x313e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E04u;
        // 0x313e08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e04) {
            ctx->pc = 0x313E10u;
            return;
        }
    }
    ctx->pc = 0x313E0Cu;
}
