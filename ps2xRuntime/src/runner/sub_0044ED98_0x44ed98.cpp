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

// Function: sub_0044ED98
// Address: 0x44ed98 - 0x44eeb0
void sub_0044ED98_0x44ed98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044ED98_0x44ed98");
#endif

    ctx->pc = 0x44ed98u;

    // 0x44ed98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x44ed98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ed9c: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x44ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x44eda0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x44eda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x44eda4: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x44eda4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x44eda8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x44EDA8u;
    {
        const bool branch_taken_0x44eda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EDA8u;
        // 0x44edac: 0x8ca8004c  lw          $t0, 0x4C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44eda8) {
            ctx->pc = 0x44EDF4u;
            goto label_44edf4;
        }
    }
    ctx->pc = 0x44EDB0u;
    // 0x44edb0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x44edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x44edb4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x44edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x44edb8: 0x2442e7d0  addiu       $v0, $v0, -0x1830
    ctx->pc = 0x44edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x44edbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x44edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x44edc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x44edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44edc4: 0x800008  jr          $a0
    ctx->pc = 0x44EDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x44EDCCu: goto label_44edcc;
            case 0x44EDD4u: goto label_44edd4;
            case 0x44EDDCu: goto label_44eddc;
            case 0x44EDE4u: goto label_44ede4;
            case 0x44EDECu: goto label_44edec;
            case 0x44EDF4u: goto label_44edf4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EDC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x44EDCCu;
label_44edcc:
    // 0x44edcc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x44EDCCu;
    {
        const bool branch_taken_0x44edcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EDCCu;
        // 0x44edd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44edcc) {
            ctx->pc = 0x44EDF8u;
            goto label_44edf8;
        }
    }
    ctx->pc = 0x44EDD4u;
label_44edd4:
    // 0x44edd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x44EDD4u;
    {
        const bool branch_taken_0x44edd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EDD4u;
        // 0x44edd8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44edd4) {
            ctx->pc = 0x44EDF8u;
            goto label_44edf8;
        }
    }
    ctx->pc = 0x44EDDCu;
label_44eddc:
    // 0x44eddc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x44EDDCu;
    {
        const bool branch_taken_0x44eddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EDDCu;
        // 0x44ede0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44eddc) {
            ctx->pc = 0x44EDF8u;
            goto label_44edf8;
        }
    }
    ctx->pc = 0x44EDE4u;
label_44ede4:
    // 0x44ede4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x44EDE4u;
    {
        const bool branch_taken_0x44ede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EDE4u;
        // 0x44ede8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ede4) {
            ctx->pc = 0x44EDF8u;
            goto label_44edf8;
        }
    }
    ctx->pc = 0x44EDECu;
label_44edec:
    // 0x44edec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x44EDECu;
    {
        const bool branch_taken_0x44edec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EDECu;
        // 0x44edf0: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44edec) {
            ctx->pc = 0x44EDF8u;
            goto label_44edf8;
        }
    }
    ctx->pc = 0x44EDF4u;
label_44edf4:
    // 0x44edf4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x44edf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44edf8:
    // 0x44edf8: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x44edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x44edfc: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x44edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x44ee00: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x44ee00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x44ee04: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x44EE04u;
    {
        const bool branch_taken_0x44ee04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EE04u;
        // 0x44ee08: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ee04) {
            ctx->pc = 0x44EE4Cu;
            goto label_44ee4c;
        }
    }
    ctx->pc = 0x44EE0Cu;
    // 0x44ee0c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x44ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x44ee10: 0x2442e7f0  addiu       $v0, $v0, -0x1810
    ctx->pc = 0x44ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961136));
    // 0x44ee14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x44ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x44ee18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x44ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44ee1c: 0x800008  jr          $a0
    ctx->pc = 0x44EE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x44EE24u: goto label_44ee24;
            case 0x44EE2Cu: goto label_44ee2c;
            case 0x44EE34u: goto label_44ee34;
            case 0x44EE3Cu: goto label_44ee3c;
            case 0x44EE44u: goto label_44ee44;
            case 0x44EE4Cu: goto label_44ee4c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EE1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x44EE24u;
label_44ee24:
    // 0x44ee24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x44EE24u;
    {
        const bool branch_taken_0x44ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EE24u;
        // 0x44ee28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ee24) {
            ctx->pc = 0x44EE50u;
            goto label_44ee50;
        }
    }
    ctx->pc = 0x44EE2Cu;
label_44ee2c:
    // 0x44ee2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x44EE2Cu;
    {
        const bool branch_taken_0x44ee2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EE2Cu;
        // 0x44ee30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ee2c) {
            ctx->pc = 0x44EE50u;
            goto label_44ee50;
        }
    }
    ctx->pc = 0x44EE34u;
label_44ee34:
    // 0x44ee34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x44EE34u;
    {
        const bool branch_taken_0x44ee34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EE34u;
        // 0x44ee38: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ee34) {
            ctx->pc = 0x44EE50u;
            goto label_44ee50;
        }
    }
    ctx->pc = 0x44EE3Cu;
label_44ee3c:
    // 0x44ee3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x44EE3Cu;
    {
        const bool branch_taken_0x44ee3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EE3Cu;
        // 0x44ee40: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ee3c) {
            ctx->pc = 0x44EE50u;
            goto label_44ee50;
        }
    }
    ctx->pc = 0x44EE44u;
label_44ee44:
    // 0x44ee44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x44EE44u;
    {
        const bool branch_taken_0x44ee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EE44u;
        // 0x44ee48: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ee44) {
            ctx->pc = 0x44EE50u;
            goto label_44ee50;
        }
    }
    ctx->pc = 0x44EE4Cu;
label_44ee4c:
    // 0x44ee4c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x44ee4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44ee50:
    // 0x44ee50: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x44ee50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x44ee54: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x44ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x44ee58: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x44ee58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x44ee5c: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x44ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x44ee60: 0x2442ac98  addiu       $v0, $v0, -0x5368
    ctx->pc = 0x44ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945944));
    // 0x44ee64: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x44ee64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x44ee68: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x44ee68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x44ee6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x44ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x44ee70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x44ee70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x44ee74: 0x9c630000  lwu         $v1, 0x0($v1)
    ctx->pc = 0x44ee74u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44ee78: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x44EE78u;
    {
        const bool branch_taken_0x44ee78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x44EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EE78u;
        // 0x44ee7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ee78) {
            ctx->pc = 0x44EE88u;
            goto label_44ee88;
        }
    }
    ctx->pc = 0x44EE80u;
    // 0x44ee80: 0x3e00008  jr          $ra
    ctx->pc = 0x44EE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EE80u;
        // 0x44ee84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EE88u;
label_44ee88:
    // 0x44ee88: 0x54e20007  bnel        $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x44EE88u;
    {
        const bool branch_taken_0x44ee88 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x44ee88) {
            ctx->pc = 0x44EE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44EE88u;
            // 0x44ee8c: 0xfd0300b8  sd          $v1, 0xB8($t0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 8), 184), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44EEA8u;
            goto label_44eea8;
        }
    }
    ctx->pc = 0x44EE90u;
    // 0x44ee90: 0x54c70005  bnel        $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x44EE90u;
    {
        const bool branch_taken_0x44ee90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x44ee90) {
            ctx->pc = 0x44EE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44EE90u;
            // 0x44ee94: 0xfd0300b8  sd          $v1, 0xB8($t0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 8), 184), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44EEA8u;
            goto label_44eea8;
        }
    }
    ctx->pc = 0x44EE98u;
    // 0x44ee98: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x44ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x44ee9c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x44ee9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x44eea0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x44eea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x44eea4: 0xfd0300b8  sd          $v1, 0xB8($t0)
    ctx->pc = 0x44eea4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 184), GPR_U64(ctx, 3));
label_44eea8:
    // 0x44eea8: 0x3e00008  jr          $ra
    ctx->pc = 0x44EEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EEA8u;
        // 0x44eeac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EEB0u;
}
